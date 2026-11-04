#!/usr/bin/env python3
"""Optional audio comparison with the earlier x86 original-DSP reference tool.
The reference executable is only a validation dependency, never a build dependency.
Usage: python3 tests/compare_reference.py ./elastique /path/to/reference
"""
import array
import json
import math
from pathlib import Path
import random
import struct
import subprocess
import sys
import tempfile
import wave


def run(args):
    p = subprocess.run([str(a) for a in args], capture_output=True)
    if p.returncode:
        raise RuntimeError(p.stderr.decode(errors='replace'))
    return p.stdout


def source(path, rate, channels):
    rng = random.Random(120)
    pcm = bytearray()
    for i in range(round(rate * 1.25)):
        t = i / rate
        for c in range(channels):
            f = 165 + 73 * c
            # Harmonics, a chirp, decaying drum-like transients and quiet noise.
            x = sum(.12 / k * math.sin(2 * math.pi * f * k * t) for k in range(1, 6))
            x += .05 * math.sin(2 * math.pi * (220 * t + 450 * t * t))
            age = t % .1875
            x += .25 * math.exp(-age * 65) * math.sin(2 * math.pi * 75 * age)
            x += .035 * rng.uniform(-1, 1) * math.exp(-age * 18)
            pcm += struct.pack('<h', round(x * 32767))
    with wave.open(str(path), 'wb') as f:
        f.setparams((channels, 2, rate, 0, 'NONE', 'not compressed'))
        f.writeframes(pcm)


def samples(path):
    a = array.array('f')
    a.frombytes(run(['ffmpeg', '-v', 'error', '-i', path, '-f', 'f32le', '-']))
    if sys.byteorder != 'little':
        a.byteswap()
    return a


def main():
    candidate, reference = [str(Path(p).resolve()) for p in sys.argv[1:3]]
    cases = [
        ('pro-minus5-mono', 48000, 1, ['-5']),
        ('pro-plus8-stereo', 48000, 2, ['8']),
        ('pro-formants-stereo', 48000, 2, ['--formants', '-5']),
        ('pro-minus24-44100', 44100, 1, ['-24']),
        ('pro-plus24-44100', 44100, 1, ['24']),
        ('pro-surround-22050', 22050, 6, ['-6']),
        ('a17-minus5-stereo', 48000, 2, ['--a17', '-5']),
        ('a17-plus8-stereo', 48000, 2, ['--a17', '8']),
        ('a17-minus24-44100', 44100, 1, ['--a17', '-24']),
        ('a17-plus24-44100', 44100, 1, ['--a17', '24']),
    ]
    results = []
    with tempfile.TemporaryDirectory(prefix='dsp-reference-') as directory:
        root = Path(directory)
        for name, rate, channels, options in cases:
            inp = root / f'{name}.wav'
            source(inp, rate, channels)
            paths = [root / f'{name}-{i}.wav' for i in range(2)]
            for program, out in zip([candidate, reference], paths):
                run([program, *options, inp, '-o', out])
            a, b = map(samples, paths)
            assert len(a) == len(b) and all(map(math.isfinite, a)), name
            error = sum((x - y) ** 2 for x, y in zip(a, b))
            energy = sum(y * y for y in b)
            result = dict(case=name, rate=rate, channels=channels, samples=len(a),
                          normalized_rms=math.sqrt(error / energy) if energy else 0,
                          max_absolute=max(abs(x-y) for x, y in zip(a, b)),
                          bit_identical=a.tobytes() == b.tobytes())
            results.append(result)
            print(json.dumps(result), file=sys.stderr, flush=True)
    print(json.dumps(results, indent=2))


if __name__ == '__main__':
    main()
