#!/usr/bin/env python3
"""End-to-end audio tests. Requires Python 3, FFmpeg and FFprobe; no Python packages."""
import array
import math
from pathlib import Path
import struct
import subprocess
import sys
import tempfile
import wave

BIN = str(Path(sys.argv[1]).resolve())


def command(args, good=True, **kwargs):
    p = subprocess.run([str(a) for a in args], capture_output=True, **kwargs)
    if good and p.returncode:
        raise AssertionError(f"{args}\n{p.stderr.decode(errors='replace')}")
    if not good:
        assert p.returncode, args
    return p


def tone(path, rate=48000, channels=1, duration=2, amplitude=.2):
    frames = round(rate * duration)
    pcm = bytearray()
    for i in range(frames):
        for c in range(channels):
            x = amplitude * math.sin(2 * math.pi * (440 + 220 * c) * i / rate)
            pcm += struct.pack('<h', round(x * 32767))
    with wave.open(str(path), 'wb') as f:
        f.setparams((channels, 2, rate, frames, 'NONE', 'not compressed'))
        f.writeframes(pcm)
    return frames


def samples(path):
    p = command(['ffmpeg', '-v', 'error', '-i', path, '-map', '0:a:0', '-f', 'f32le', '-'])
    a = array.array('f')
    a.frombytes(p.stdout)
    return a


def frequency(a, rate):
    # Estimate a stable tone using interpolated positive-going zero crossings.
    a = a[round(.3 * rate):-round(.3 * rate)]
    crossings = []
    for i in range(len(a) - 1):
        if a[i] <= 0 < a[i + 1]:
            crossings.append(i - a[i] / (a[i + 1] - a[i]))
    assert len(crossings) > 10
    return (len(crossings) - 1) * rate / (crossings[-1] - crossings[0])


def run():
    with tempfile.TemporaryDirectory(prefix='elastique-test-') as d:
        root = Path(d)
        source = root / 'tone.wav'
        frames = tone(source)
        count = 0
        for engine in ['elastique', 'a17']:
            paths = []
            for shift in [-6, 8]:
                out = root / f'{engine}-{shift}.wav'
                command([BIN, '--engine', engine, shift, source, '-o', out])
                a = samples(out)
                assert len(a) == frames, (engine, len(a), frames)
                assert all(map(math.isfinite, a))
                measured = frequency(a, 48000)
                expected = 440 * 2 ** (shift / 12)
                # A17's unsynchronized 50 ms grains add sidebands to sustained tones;
                # crossing counts test the pitch region, not tonal transparency.
                assert abs(measured / expected - 1) < (.08 if engine == 'a17' else .003), (engine, shift, measured, expected)
                paths.append(a)
                count += 1
            out = root / f'{engine}-sum.wav'
            command([BIN, '--engine', engine, -6, 8, source, '-o', out])
            summed = samples(out)
            error = max(abs(s - (a + b)) for s, a, b in zip(summed, *paths))
            assert error < 1e-6, (engine, 'voices attenuated or changed', error)
            count += 1

        # Above-full-scale peaks must survive file encoding, with no normalization/clipping.
        loud = root / 'loud.wav'
        tone(loud, amplitude=.8, duration=.2)
        doubled = root / 'doubled.wav'
        command([BIN, 0, 0, loud, '-o', doubled])
        a, b = samples(loud), samples(doubled)
        assert max(map(abs, b)) > 1.5
        assert max(abs(y - 2 * x) for x, y in zip(a, b)) < 1e-7
        count += 1

        # Prompt-only invocation; stereo paths exercise RTTI and channel processing.
        stereo = root / 'stereo.wav'
        frames_stereo = tone(stereo, channels=2)
        for engine in ['elastique', 'a17']:
            out = root / f'{engine}-stereo.wav'
            command([BIN, '--engine', engine, -5, '-o', out], input=f'{stereo}\n'.encode())
            a = samples(out)
            assert len(a) == frames_stereo * 2
            for channel, base in [(0, 440), (1, 660)]:
                measured = frequency(a[channel::2], 48000)
                assert abs(measured / (base * 2 ** (-5 / 12)) - 1) < (.08 if engine == 'a17' else .003)
            count += 1

        # Rate handling, extreme ratios, optional formants and very short files.
        rate_source = root / '44100.wav'
        frames_441 = tone(rate_source, rate=44100, duration=1)
        for engine in ['elastique', 'a17']:
            out = root / f'{engine}-extreme.wav'
            command([BIN, '--engine', engine, -24, 24, rate_source, '-o', out])
            assert len(samples(out)) == frames_441
            count += 1
        formants = root / 'formants.wav'
        command([BIN, '--formants', -5, source, '-o', formants])
        assert len(samples(formants)) == frames
        count += 1
        tiny = root / 'tiny.wav'
        tiny_frames = tone(tiny, duration=.002)
        for engine in ['elastique', 'a17']:
            out = root / f'{engine}-tiny.wav'
            command([BIN, '--engine', engine, 8, tiny, '-o', out])
            assert len(samples(out)) == tiny_frames
            count += 1

        # Preserve video bitstream, plus the exact number of audio samples.
        video = root / 'video.mkv'
        command(['ffmpeg', '-v', 'error', '-f', 'lavfi', '-i', 'testsrc2=size=160x120:rate=25:duration=1',
                 '-f', 'lavfi', '-i', 'sine=frequency=440:sample_rate=48000:duration=1',
                 '-c:v', 'mpeg4', '-c:a', 'pcm_f32le', video])
        output_video = root / 'video.pitched.mkv'
        command([BIN, -5, video])
        hashes = [command(['ffmpeg', '-v', 'error', '-i', p, '-map', '0:v:0', '-c:v', 'copy', '-f', 'hash', '-']).stdout
                  for p in [video, output_video]]
        assert hashes[0] == hashes[1], 'video was changed'
        assert len(samples(output_video)) == 48000
        count += 1

        # Shell metacharacters must remain literal file names.
        weird = root / 'input $(touch INJECTED); `id`.wav'
        weird.write_bytes(source.read_bytes())
        weird_out = root / 'output $(touch INJECTED).wav'
        command([BIN, -5, weird, '-o', weird_out], cwd=root)
        assert not (root / 'INJECTED').exists()
        count += 1

        command([BIN, -5, source, '-o', root / 'no.mp4'], good=False)
        command([BIN, 'nan', source], good=False)
        command([BIN, -25, source], good=False)
        command([BIN, '--a17', '--formants', -5, source], good=False)
        before = source.read_bytes()
        command([BIN, '--force', -5, source, '-o', source], good=False)
        assert source.read_bytes() == before
        before = formants.read_bytes()
        command([BIN, -5, source, '-o', formants], good=False)
        assert formants.read_bytes() == before
        command([BIN, '--force', 0, source, '-o', formants])
        assert samples(formants) == samples(source)
        count += 7
        print(f'PASS: {count} integration cases (pitch, duration, full-gain sums, stereo, video, input validation).')


if __name__ == '__main__':
    run()
