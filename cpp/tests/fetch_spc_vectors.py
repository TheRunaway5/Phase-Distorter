#!/usr/bin/env python3
"""Fetch pinned independent SPC700 vectors; no build or runtime dependency."""
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
from urllib.request import urlopen
import argparse
import json

REVISION = "67d15f492b2740964abd4efd1229e0ec9c342228"
BASE = f"https://raw.githubusercontent.com/SingleStepTests/spc700/{REVISION}"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("destination", type=Path)
    args = parser.parse_args()
    args.destination.mkdir(parents=True, exist_ok=True)

    def fetch(opcode):
        name = f"{opcode:02x}.json"
        with urlopen(f"{BASE}/v1/{name}", timeout=60) as response:
            data = response.read()
        vectors = json.loads(data)
        if len(vectors) != 1000:
            raise ValueError(f"Unexpected vector count in {name}: {len(vectors)}")
        (args.destination / name).write_bytes(data)

    with ThreadPoolExecutor(max_workers=8) as pool:
        list(pool.map(fetch, range(256)))
    with urlopen(f"{BASE}/LICENSE", timeout=60) as response:
        (args.destination / "LICENSE").write_bytes(response.read())
    (args.destination / "REVISION").write_text(REVISION + "\n")
    print(f"Fetched 256,000 SPC vectors at {REVISION}")


if __name__ == "__main__":
    main()
