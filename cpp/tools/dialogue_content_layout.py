#!/usr/bin/env python3
"""Generate dialogue range metadata from extraction manifests, never asset bytes."""
from __future__ import annotations
import argparse
import hashlib
import re
from pathlib import Path
from asset_layout import metadata


def render(root: Path) -> str:
    lines = ["// Generated address/length metadata only; no dialogue or dictionary bytes.",
             "// Regenerate: python3 cpp/tools/dialogue_content_layout.py --source-root /path/to/ebsrc",
             "// Dictionaries: src/bankconfig/US/bank08.asm, immediately after E11SUMS;",
             "// pointer table: DISPLAY_TEXT's linked COMPRESSED_TEXT_PTRS operand ($c8cded)."]
    for region, manifest in (("us", "earthbound.yml"), ("jp", "mother2.yml")):
        path = root / manifest
        entries, _, _ = metadata(path)
        text = sorted((e for e in entries if e["subdir"].endswith("/text_data")
                       and e["extension"] == "ebtxt"), key=lambda e: e["offset"])
        expected = 61 if region == "us" else 58
        if len(text) != expected:
            raise ValueError(f"Changed {region} text inventory: {len(text)}, expected {expected}; audit imports")
        # Native STATUS invokes this assembly-authored stream directly. The
        # extraction manifests omit it because it is assembled from macros.
        # Its complete src/data/status_window_text.asm extent ends at KEYBOARD.
        text.append({"name": "STATUS_WINDOW_TEXT", "offset": 0x2fa3b6 if region == "us" else 0x09dd4e,
                     "size": 0xaa if region == "us" else 0x8a, "compressed": "false"})
        text.sort(key=lambda entry: entry["offset"])
        end = 0
        for entry in text:
            if entry['offset'] < end or entry['compressed'] != 'false' or entry['size'] <= 0:
                raise ValueError("Overlapping, empty or newly compressed text range")
            end = entry['offset'] + entry['size']
        lines.append(f"// {manifest} SHA-256 {hashlib.sha256(path.read_bytes()).hexdigest()}")
        lines.append(f"constexpr std::array<ContentRange, {len(text)}> {region}_text_ranges{{{{")
        for entry in text:
            lines.append(f'    {{0x{entry["offset"]:06x}, 0x{entry["size"]:04x}, "{entry["name"]}"}},')
        lines.append("}};")
        if region == "us":
            sums = next(e for e in text if e['name'] == 'E11SUMS')
            if sums['offset'] + sums['size'] != 0x8bc2d:
                raise ValueError('US dictionary starts at a different address; audit bank08')
            threed = next(e for e in text if e['name'] == 'E05THRK')
            if threed['offset'] != 0x8cded + 768 * 4:
                raise ValueError('US dictionary table extent changed; audit bank08')
            pointers = (root / 'src/data/text/compressed_text_pointers.asm').read_text()
            indices = [int(value) for value in re.findall(r'^\s*\.DWORD COMPRESSED_TEXT_CHUNK_(\d+)\s*$', pointers, re.M)]
            if indices != list(range(768)):
                raise ValueError('US dictionary pointer inventory changed; audit importer')
    return '\n'.join(lines) + '\n'


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source-root', type=Path, required=True)
    parser.add_argument('--output', type=Path, default=Path(__file__).resolve().parents[1] / 'src/native/dialogue/content_layout.inc')
    parser.add_argument('--check', action='store_true')
    args = parser.parse_args()
    expected = render(args.source_root)
    if args.check:
        if args.output.read_text() != expected:
            raise SystemExit('Dialogue content layout is stale')
        print('PASS: dialogue metadata matches both regional extraction manifests')
    else:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text(expected)
        print(f'Wrote address-only dialogue metadata: {args.output}')


if __name__ == '__main__':
    main()
