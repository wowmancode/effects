#!/usr/bin/env python3
"""Static x86-to-portable-C DSP reconstruction. Not a runtime decoder.
Generated basic blocks contain native C operations. See ../VALIDATION.md for coverage.
"""
import argparse
import collections
import hashlib
import json
from pathlib import Path
import struct
import sys
import capstone as cs
import pypcode

BASE=0x180000000
RUNTIME={0xd550,0xd6a6}

class Image:
    def __init__(self,path):
        d=path.read_bytes()
        if hashlib.sha256(d).hexdigest()!='db915924aa4c6e5c403d17d7d434d1148b03a2a4cd5c0f9654ae4d620169e044':
            raise ValueError('Expected the analyzed Vegas Pro 12 vegas120k.dll; other versions have different layouts')
        nt=struct.unpack_from('<I',d,0x3c)[0];opt=nt+24
        self.size=struct.unpack_from('<I',d,opt+56)[0]
        self.data=bytearray(self.size)
        n=struct.unpack_from('<H',d,nt+6)[0];sh=opt+struct.unpack_from('<H',d,nt+20)[0]
        for i in range(n):
            vs,rva,size,raw=struct.unpack_from('<4I',d,sh+i*40+8)
            self.data[rva:rva+size]=d[raw:raw+size]
        self.imports=[]
        for delay,directory in [(False,1),(True,13)]:
            at=struct.unpack_from('<I',d,opt+112+directory*8)[0]
            while struct.unpack_from('<I',self.data,at+(4 if delay else 12))[0]:
                iat=struct.unpack_from('<I',self.data,at+(12 if delay else 16))[0]
                names=struct.unpack_from('<I',self.data,at+(16 if delay else 0))[0]
                i=0
                while (v:=struct.unpack_from('<Q',self.data,names+i*8)[0]):
                    if v>>63:name='ordinal_'+str(v&65535)
                    else:name=bytes(self.data[v+2:self.data.index(0,v+2)]).decode()
                    self.imports.append((iat+i*8,name))
                    struct.pack_into('<Q',self.data,iat+i*8,0xf000000000000000+len(self.imports))
                    i+=1
                at+=32 if delay else 20

class Lifter:
    def __init__(self,image):
        self.image=image;self.cs=cs.Cs(cs.CS_ARCH_X86,cs.CS_MODE_64);self.cs.detail=True
        self.ctx=pypcode.Context('x86:LE:64:default');self.blocks={};self.ops=collections.Counter()

    def block(self,address):
        instructions=[];targets=[];end=address
        for _ in range(32):
            r=end-BASE
            if not 0x1000<=r<0x645000:raise ValueError(f'bad code address {end:x}')
            ins=next(self.cs.disasm(bytes(self.image.data[r:r+15]),end,count=1),None)
            if ins is None:raise ValueError(f'decode failed {end:x}')
            ops=list(self.ctx.translate(bytes(ins.bytes),end,max_instructions=1).ops)
            for op in ops:
                if op.opcode.name in ['BRANCH','CBRANCH'] and op.inputs[0].space.name=='ram':targets.append(op.inputs[0].offset)
                for v in op.inputs:
                    if v.space.name=='const' and BASE+0x1000<=v.offset<BASE+0x645000 and self.image.data[v.offset-BASE]!=0xcc:
                        targets.append(v.offset)
            instructions.append((ins,ops));end+=ins.size
            call=ins.group(cs.CS_GRP_CALL);jump=ins.group(cs.CS_GRP_JUMP);ret=ins.group(cs.CS_GRP_RET)
            if call or jump:
                if ins.operands and ins.operands[0].type==cs.x86.X86_OP_IMM:targets.append(ins.operands[0].imm)
                if call or ins.mnemonic!='jmp':targets.append(end)
                break
            if ret or ins.mnemonic in ['ud2','int3','hlt']:break
        else:targets.append(end)
        self.blocks[address]=(instructions,end)
        return targets

    def recover(self,roots):
        pending=collections.deque(roots);failed=set()
        while pending:
            a=pending.popleft()
            if a in self.blocks or a in failed or a-BASE in RUNTIME or a==0:continue
            try:pending.extend(self.block(a))
            except Exception as e:
                failed.add(a);print('Not lifted',hex(a),str(e),file=sys.stderr)
            if len(self.blocks)>50000:raise RuntimeError('block limit')

    @staticmethod
    def mask(n):return '~(U)0' if n==16 else f'(((U)1<<{n*8})-1)'

    def emit(self,address,instructions,end):
        instruction_addresses={ins.address for ins,ops in instructions}
        used=[]
        for ins,ops in instructions:
            for op in ops:
                for v in [op.output,*op.inputs]:
                    if v is not None and v.space.name=='unique':used.append((v.offset,v.offset+v.size))
        merged=[]
        for lo,hi in sorted(used):
            if merged and lo<=merged[-1][1]:merged[-1][1]=max(hi,merged[-1][1])
            else:merged.append([lo,hi])
        mapping={};offset=0
        for lo,hi in merged:
            for o in range(lo,hi):mapping[o]=offset+o-lo
            offset+=hi-lo
        if offset>65536:raise RuntimeError('temporary storage overflow')
        def read(v):
            space=v.space.name
            if space=='const':return f'((U)UINT64_C({v.offset:#x}))'
            if space=='register':return f'rd(s->r,{v.offset},{v.size})'
            if space=='unique':return f'rd(s->u,{mapping[v.offset]},{v.size})'
            if space=='ram':return f'mr(UINT64_C({v.offset:#x}),{v.size})'
            raise ValueError(space)
        def write(v,value):
            if v.space.name=='register':return f'wr(s->r,{v.offset},{v.size},{value});'
            if v.space.name=='unique':return f'wr(s->u,{mapping[v.offset]},{v.size},{value});'
            if v.space.name=='ram':return f'mw(UINT64_C({v.offset:#x}),{v.size},{value});'
            raise ValueError(v.space.name)
        out=[f'uint64_t b_{address:x}(CPU*s){{']
        for ins,ops in instructions:
            out.append(f'/* {ins.address:x}: {ins.mnemonic} {ins.op_str} */')
            for i,op in enumerate(ops):
                out.append(f'L_{ins.address:x}_{i}:;')
                name=op.opcode.name;self.ops[name]+=1
                if name=='IMARK':continue
                a=[read(v) for v in op.inputs];v=op.output;expr=None
                if name=='COPY':expr=a[0]
                elif name=='LOAD':expr=f'mr((uint64_t){a[1]},{v.size})'
                elif name=='STORE':out.append(f'mw((uint64_t){a[1]},{op.inputs[2].size},{a[2]});')
                elif name in ['BRANCH','CBRANCH']:
                    target=op.inputs[0]
                    if target.space.name=='const':
                        delta=target.offset
                        if delta&(1<<(target.size*8-1)):delta-=1<<(target.size*8)
                        statement=f'goto L_{ins.address:x}_{i+delta};'
                    elif target.offset in instruction_addresses:statement=f'goto L_{target.offset:x}_0;'
                    else:statement=f'return UINT64_C({target.offset:#x});'
                    out.append(f'if({a[1]}){{{statement}}}' if name=='CBRANCH' else statement)
                elif name in ['CALL','CALLIND','BRANCHIND','RETURN']:
                    target=f'UINT64_C({op.inputs[0].offset:#x})' if name=='CALL' and op.inputs[0].space.name=='ram' else a[0]
                    out.append(f'return (uint64_t){target};')
                elif name=='CALLOTHER':
                    user=op.inputs[0].getUserDefinedOpName()
                    if user.startswith('cpuid'):expr=f'lift_cpuid((unsigned){a[1]})'
                    elif user in ['movmskps','movmskpd']:
                        bits=32 if user=='movmskps' else 64
                        expr='|'.join(f'((({a[-1]}>>{i*bits+bits-1})&1)<<{i})' for i in range(128//bits))
                    elif user=='lddqu':expr=a[-1]
                    elif user=='sqrtps':expr='|'.join(f'(fb(sqrt(fv(({a[-1]}>>{i*32})&0xffffffff,4)),4)<<{i*32})' for i in range(4))
                    elif user=='rcpps':expr='|'.join(f'(fb(1./fv(({a[-1]}>>{i*32})&0xffffffff,4),4)<<{i*32})' for i in range(4))
                    elif user=='rsqrtps':expr='|'.join(f'(fb(1./sqrt(fv(({a[-1]}>>{i*32})&0xffffffff,4)),4)<<{i*32})' for i in range(4))
                    elif user=='rsqrtss':expr=f'(({a[1]}&~(U)UINT32_MAX)|fb(1./sqrt(fv({a[-1]}&UINT32_MAX,4)),4))'
                    elif user in ['divps','maxps']:
                        lanes=[]
                        for i in range(4):
                            x=f'(({a[1]}>>{i*32})&UINT32_MAX)';y=f'(({a[2]}>>{i*32})&UINT32_MAX)'
                            value=f'fb(fv({x},4)/fv({y},4),4)' if user=='divps' else f'(fv({x},4)>fv({y},4)?{x}:{y})'
                            lanes.append(f'(({value})<<{i*32})')
                        expr='|'.join(lanes)
                    elif user=='packssdw':expr=f'packssdw({a[1]},{a[2]})'
                    elif user in ['LOCK','UNLOCK']:pass  # DSP execution is serialized.
                    else:
                        out.append(f'lift_unsupported("{user}",UINT64_C({ins.address:#x}));')
                        if v:expr='0'
                elif name=='INT_ZEXT':expr=a[0]
                elif name=='INT_SEXT':expr=f'(U)sx({a[0]},{op.inputs[0].size})'
                elif name=='SUBPIECE':expr=f'({a[0]} >> ({a[1]}*8))'
                elif name=='PIECE':expr=f'(({a[0]}<<{op.inputs[1].size*8})|{a[1]})'
                elif name in ['INT_ADD','INT_SUB','INT_MULT','INT_AND','INT_OR','INT_XOR','INT_DIV','INT_REM']:
                    sym={'INT_ADD':'+','INT_SUB':'-','INT_MULT':'*','INT_AND':'&','INT_OR':'|','INT_XOR':'^','INT_DIV':'/','INT_REM':'%'}[name]
                    expr=f'({a[0]}{sym}{a[1]})'
                elif name in ['INT_SDIV','INT_SREM']:
                    sym='/' if name=='INT_SDIV' else '%'
                    expr=f'((U)(sx({a[0]},{op.inputs[0].size}){sym}sx({a[1]},{op.inputs[1].size})))'
                elif name in ['INT_EQUAL','INT_NOTEQUAL','INT_LESS','INT_LESSEQUAL','INT_SLESS','INT_SLESSEQUAL']:
                    sym={'INT_EQUAL':'==','INT_NOTEQUAL':'!=','INT_LESS':'<','INT_LESSEQUAL':'<=','INT_SLESS':'<','INT_SLESSEQUAL':'<='}[name]
                    x,y=a
                    if name.startswith('INT_S'):x=f'sx({x},{op.inputs[0].size})';y=f'sx({y},{op.inputs[1].size})'
                    expr=f'({x}{sym}{y})'
                elif name=='INT_CARRY':expr=f'((({a[0]}+{a[1]})&{self.mask(op.inputs[0].size)})<{a[0]})'
                elif name in ['INT_SCARRY','INT_SBORROW']:
                    expr=f'signed_overflow({a[0]},{a[1]},{op.inputs[0].size},{1 if name=="INT_SBORROW" else 0})'
                elif name in ['INT_LEFT','INT_RIGHT','INT_SRIGHT']:
                    n=op.inputs[0].size*8;x,y=a
                    if name=='INT_SRIGHT':expr=f'(({y}>={n})?(sx({x},{op.inputs[0].size})<0?{self.mask(v.size)}:0):(U)(sx({x},{op.inputs[0].size})>>{y}))'
                    else:expr=f'(({y}>={n})?0:({x}{"<<" if name=="INT_LEFT" else ">>"}{y}))'
                elif name=='INT_NEGATE':expr=f'(~{a[0]})'
                elif name=='INT_2COMP':expr=f'(-{a[0]})'
                elif name.startswith('BOOL_'):
                    sym={'BOOL_AND':'&&','BOOL_OR':'||','BOOL_XOR':'!='}.get(name)
                    expr=f'(!{a[0]})' if name=='BOOL_NEGATE' else f'(({a[0]}!=0){sym}({a[1]}!=0))'
                elif name in ['POPCOUNT','LZCOUNT']:expr=f'{"pop" if name=="POPCOUNT" else "lz"}({a[0]},{op.inputs[0].size})'
                elif name.startswith('FLOAT_'):
                    n=op.inputs[0].size
                    x=f'fv({a[0]},{n})'
                    if name in ['FLOAT_ADD','FLOAT_SUB','FLOAT_MULT','FLOAT_DIV']:
                        y=f'fv({a[1]},{op.inputs[1].size})';sym={'FLOAT_ADD':'+','FLOAT_SUB':'-','FLOAT_MULT':'*','FLOAT_DIV':'/'}[name]
                        expr=f'fb({x}{sym}{y},{v.size})'
                    elif name in ['FLOAT_EQUAL','FLOAT_NOTEQUAL','FLOAT_LESS','FLOAT_LESSEQUAL']:
                        sym={'FLOAT_EQUAL':'==','FLOAT_NOTEQUAL':'!=','FLOAT_LESS':'<','FLOAT_LESSEQUAL':'<='}[name]
                        expr=f'({x}{sym}fv({a[1]},{op.inputs[1].size}))'
                    elif name=='FLOAT_INT2FLOAT':expr=f'fb((double)sx({a[0]},{n}),{v.size})'
                    elif name=='FLOAT_FLOAT2FLOAT':expr=f'fb({x},{v.size})'
                    elif name=='FLOAT_TRUNC':expr=f'ftrunc({x},{v.size})'
                    elif name=='FLOAT_NEG':expr=f'fb(-{x},{v.size})'
                    elif name=='FLOAT_ABS':expr=f'fb(fabs({x}),{v.size})'
                    elif name=='FLOAT_NAN':expr=f'isnan({x})'
                    elif name in ['FLOAT_SQRT','FLOAT_CEIL','FLOAT_FLOOR','FLOAT_ROUND']:
                        f={'FLOAT_SQRT':'sqrt','FLOAT_CEIL':'ceil','FLOAT_FLOOR':'floor','FLOAT_ROUND':'nearbyint'}[name]
                        expr=f'fb({f}({x}),{v.size})'
                    else:raise ValueError(name)
                else:raise ValueError(name)
                if expr is not None:out.append(write(v,expr))
            out.append(f'L_{ins.address:x}_{len(ops)}:;')
        out.append(f'return UINT64_C({end:#x});\n}}')
        return '\n'.join(out)

def main():
    ap=argparse.ArgumentParser();ap.add_argument('dll',type=Path);ap.add_argument('out',type=Path)
    ap.add_argument('--root',action='append',default=[]);args=ap.parse_args()
    image=Image(args.dll);lift=Lifter(image);roots=[BASE+int(v,16) for v in args.root]
    roots+=[BASE+v for v in [0x3d54b0,0x3d52b0,0x3eb120,0x101aa0]]
    for at in range(0x80bf18,0x80d900,8):
        v=struct.unpack_from('<Q',image.data,at)[0]
        if BASE+0x3d5200<=v<BASE+0x3f8000:roots.append(v)
    # MSVC switch tables store 32-bit RVAs, not full function pointers.
    def is_target(v):return 0x3d5200<=v<0x3f8000 or 0x8e000<=v<0x94000 or 0xff000<=v<0x110000
    for lo,hi in [(0x648000,0x94d170),(0x3d5200,0x3f8000),(0x8e000,0x94000),(0xff000,0x110000)]:
        for at in range(lo,hi,4):
            v=struct.unpack_from('<I',image.data,at)[0]
            near=[struct.unpack_from('<I',image.data,x)[0] for x in [at-4,at+4]]
            if is_target(v) and image.data[v]!=0xcc and any(is_target(n) for n in near):roots.append(BASE+v)
    lift.recover(roots);args.out.mkdir(parents=True,exist_ok=True)
    addresses=sorted(lift.blocks)
    groups=collections.defaultdict(list)
    for a in addresses:groups[a>>12].append(a)
    def save(path,text):
        if not path.exists() or path.read_text()!=text:path.write_text(text)
    for page,group in groups.items():
        lines=['#include "lift_runtime.h"']
        for a in group:lines.append(lift.emit(a,*lift.blocks[a]))
        save(args.out/f'blocks_p{page:x}.c','\n'.join(lines)+'\n')
    index=['#include "lift_runtime.h"']
    index += [f'uint64_t b_{a:x}(CPU*);' for a in addresses]
    index += ['const struct lift_block blocks[]={']+[f'{{UINT64_C({a:#x}),b_{a:x}}},' for a in addresses]+['};',f'const size_t block_count={len(addresses)};']
    save(args.out/'blocks_index.c','\n'.join(index)+'\n')
    (args.out/'data_image.bin').write_bytes(image.data)
    (args.out/'imports.json').write_text(json.dumps(image.imports,indent=2))
    (args.out/'coverage.json').write_text(json.dumps({'blocks':len(addresses),'instructions':sum(len(v[0]) for v in lift.blocks.values()),'pcode_operations':lift.ops},indent=2))
    print((args.out/'coverage.json').read_text())

if __name__=='__main__':main()
