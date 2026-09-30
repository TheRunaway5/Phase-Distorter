#!/usr/bin/env python3
"""Keep native story executables independent of the reference machine."""
import argparse
import subprocess

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--nm', required=True)
parser.add_argument('executables', nargs='+')
args = parser.parse_args()
for executable in args.executables:
    symbols = subprocess.run([args.nm, '-C', executable], capture_output=True, text=True, check=True).stdout
    if 'eb::native::' not in symbols:
        raise SystemExit(f'{executable}: native symbols unavailable; cannot verify link graph')
    forbidden = ('eb::MainCpu65816', 'eb::SnesBus', 'eb::Spc700AudioCpu',
                 'eb::game::runtime::Instruction', 'eb::game::runtime::NativeGameplay',
                 'eb::game::runtime::us::resume_', 'eb::game::runtime::jp::resume_')
    violations = [line for line in symbols.splitlines() if any(name in line for name in forbidden)]
    if violations:
        raise SystemExit(f'{executable}: reference machinery linked into native story:\n' + '\n'.join(violations[:20]))
    print(f'PASS: {executable}: no reference CPU, bus, audio CPU or gameplay executor symbols')
