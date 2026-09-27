#!/usr/bin/env python3
"""Compare native/reference P6 frames, preserving explicit geometry checks.

An exactly doubled reference width is reduced only if every adjacent horizontal
pixel pair is identical. The 5-bit comparison maps each RGB channel to its
nearest SNES channel level; it is valid for gamma=100, full-brightness captures.
It does not align animation phases, shift images, or erase rendering differences.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re


def read_ppm(path):
    # Require the captured RGB8 payload to match its declared dimensions; a
    # partial frame must not look like a valid comparison of fewer pixels.
    data = path.read_bytes()
    header = re.match(rb"P6\s+(\d+)\s+(\d+)\s+255\s", data)
    if not header:
        raise ValueError(f"{path}: expected binary P6 RGB8 image")
    width, height = int(header[1]), int(header[2])
    pixels = data[header.end():]
    if len(pixels) != width * height * 3:
        raise ValueError(f"{path}: pixel byte count does not match geometry")
    return width, height, pixels


def compare(native, reference):
    width, height, a = read_ppm(native)
    ref_width, ref_height, b = read_ppm(reference)
    original_geometry = [ref_width, ref_height]
    duplicated = None
    if (ref_width, ref_height) == (width * 2, height):
        # Some reference cores expose each low-resolution pixel twice. Reduction
        # is allowed only after checking every pair, never by resampling detail.
        duplicated = sum(b[i:i + 3] != b[i + 3:i + 6] for i in range(0, len(b), 6))
        if duplicated:
            raise ValueError(f"Reference has {duplicated} unequal pixel pairs; lossless width reduction is impossible")
        b = b"".join(b[i:i + 3] for i in range(0, len(b), 6))
        ref_width = width
    if (width, height) != (ref_width, ref_height):
        raise ValueError(f"Frame geometries differ: {(width, height)} vs {(ref_width, ref_height)}")
    normalize = lambda value: (value * 31 + 127) // 255
    # Keep exact RGB evidence alongside the optional five-bit comparison. The
    # latter only tolerates channel expansion rounding, assuming matching gamma
    # and full brightness; it does not establish arbitrary palette equivalence.
    normalized_a, normalized_b = bytes(map(normalize, a)), bytes(map(normalize, b))
    exact = [i // 3 for i in range(0, len(a), 3) if a[i:i + 3] != b[i:i + 3]]
    fivebit = [i // 3 for i in range(0, len(a), 3) if normalized_a[i:i + 3] != normalized_b[i:i + 3]]
    def bounds(differences):
        # Bounding boxes localize visible mismatches without moving, cropping or
        # otherwise altering either frame to make the comparison pass.
        return ([min(i % width for i in differences), min(i // width for i in differences),
                 max(i % width for i in differences), max(i // width for i in differences)]
                if differences else None)
    return {"native": str(native), "reference": str(reference),
            "native_sha256": hashlib.sha256(native.read_bytes()).hexdigest(),
            "reference_sha256": hashlib.sha256(reference.read_bytes()).hexdigest(),
            "native_geometry": [width, height], "reference_geometry": original_geometry,
            "reference_adjacent_horizontal_pair_differences": duplicated,
            "total_pixels": width * height, "exact_different_pixels": len(exact),
            "fivebit_different_pixels": len(fivebit),
            "max_channel_difference": max(abs(x - y) for x, y in zip(a, b)),
            "exact_difference_bounds": bounds(exact), "fivebit_difference_bounds": bounds(fivebit)}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("native", type=Path)
    parser.add_argument("reference", type=Path)
    parser.add_argument("--output", type=Path)
    parser.add_argument("--strict", choices=("rgb", "fivebit"),
                        help="Exit with status 1 if the selected comparison differs")
    args = parser.parse_args()
    comparison = compare(args.native, args.reference)
    result = json.dumps(comparison, indent=2) + "\n"
    if args.output:
        args.output.write_text(result)
    print(result, end="")
    if args.strict:
        # Reporting is useful during investigation even with differences; CI
        # callers explicitly choose which comparison should fail the command.
        key = "exact_different_pixels" if args.strict == "rgb" else "fivebit_different_pixels"
        return int(comparison[key] != 0)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
