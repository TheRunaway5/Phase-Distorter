#!/usr/bin/env python3
"""Fetch independent 65816 vectors, pinned by revision; no network in CTest.

Outputs the first N cases of every opcode/mode. Use --count 10000 for full
files. Data stays in the ignored build tree and is not vendored in the port.
"""
import argparse
import concurrent.futures
import json
from pathlib import Path
import urllib.request
import time

REVISION = 'db6b10401729d5f20f2181dde5d3d7b037093a4a'

def fetch_once(name, output, count):
    path = output / name
    if path.exists():
        existing = json.loads(path.read_text())
        if len(existing) >= count:
            return len(existing)
    url = f'https://raw.githubusercontent.com/SingleStepTests/65816/{REVISION}/v1/{name}'
    decoder = json.JSONDecoder()
    items, buffer, started = [], '', False
    with urllib.request.urlopen(url, timeout=60) as response:
        while len(items) < count:
            chunk = response.read(32768).decode('utf-8')
            buffer += chunk
            if not started:
                buffer = buffer.lstrip()
                if buffer.startswith('['):
                    buffer, started = buffer[1:], True
            while True:
                buffer = buffer.lstrip(' \r\n\t,')
                if buffer.startswith(']'):
                    break
                try:
                    item, consumed = decoder.raw_decode(buffer)
                except json.JSONDecodeError:
                    break
                items.append(item)
                buffer = buffer[consumed:]
                if len(items) >= count:
                    break
            if not chunk or buffer.lstrip().startswith(']'):
                break
    temporary = path.with_suffix('.tmp')
    temporary.write_text(json.dumps(items, separators=(',', ':')))
    temporary.replace(path)
    return len(items)

def fetch(name, output, count):
    for attempt in range(3):
        try:
            return fetch_once(name, output, count)
        except (OSError, ValueError):
            if attempt == 2:
                raise
            time.sleep(attempt + 1)

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', type=Path, default=Path('build/cpp/vectors'))
    parser.add_argument('--count', type=int, default=200)
    parser.add_argument('--jobs', type=int, default=12)
    parser.add_argument('--opcodes', default=','.join(f'{n:02x}' for n in range(256)))
    args = parser.parse_args()
    args.output.mkdir(parents=True, exist_ok=True)
    names = [f'{op}.{mode}.json' for op in args.opcodes.split(',') for mode in ('e', 'n')]
    total = 0
    with concurrent.futures.ThreadPoolExecutor(max_workers=args.jobs) as pool:
        futures = {pool.submit(fetch, name, args.output, args.count): name for name in names}
        for future in concurrent.futures.as_completed(futures):
            try:
                total += future.result()
            except Exception as error:
                raise RuntimeError(f'{futures[future]}: {error}') from error
    (args.output / 'provenance.txt').write_text(f'https://github.com/SingleStepTests/65816\nrevision={REVISION}\nfirst_cases_per_opcode={args.count}\n')
    print(f'{total} vectors in {args.output} from {REVISION}')

if __name__ == '__main__':
    main()
