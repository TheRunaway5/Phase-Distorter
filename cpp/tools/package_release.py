#!/usr/bin/env python3
"""Create deterministic, whitelisted runnable ZIPs under releases/.

Run only after native binaries and Linux runtime libraries have been finalized.
--check validates the inputs and reports package contents without writing ZIPs.
The optional --linux-runtime-dir accepts an independently prepared runtime tree;
its file names and license records are still explicitly whitelisted below.
Native binaries and runtime libraries live under launchers/<platform>/.
Archives are written only to releases/; no root-level copies are created.
"""
from __future__ import annotations

import argparse
from dataclasses import dataclass
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import re
import stat
import struct
import tempfile
import zipfile


ROOT = Path(__file__).resolve().parents[2]
FORBIDDEN_SUFFIXES = {".sfc", ".smc", ".rom", ".ebpak", ".srm", ".sav", ".state"}
ROM_HASHES = {
    "a8fe2226728002786d68c27ddddf0b90a894db52e4dfe268fdf72a68cae5f02e",
    "1f8cfd13177d86b0eb2c8adcf9e1a4f0ec8966fa1583072b65a1b1c0e7961a5d",
}
RUNTIME_LIBRARIES = ("libSDL2-2.0.so.0", "libstdc++.so.6", "libgcc_s.so.1")
RUNTIME_NOTICES = (
    "PROVENANCE.md", "licenses/SDL2-LICENSE.txt", "licenses/GCC-COPYING3.txt",
    "licenses/GCC-RUNTIME-LIBRARY-EXCEPTION.txt", "licenses/GCC-NOTICE.md",
)
COMMON_NOTICES = (
    ("cpp/external/imgui/LICENSE.txt", "licenses/Dear-ImGui-LICENSE.txt"),
    ("cpp/external/imgui/PROVENANCE.md", "licenses/Dear-ImGui-PROVENANCE.md"),
    ("cpp/external/spc_dsp/LICENSE", "licenses/snes_spc-LICENSE.txt"),
    ("cpp/external/spc_dsp/PROVENANCE.md", "licenses/snes_spc-PROVENANCE.md"),
    ("cpp/external/sdl2/LICENSE.txt", "licenses/SDL2-LICENSE.txt"),
    ("cpp/external/sdl2/PROVENANCE.md", "licenses/SDL2-PROVENANCE.md"),
)


@dataclass(frozen=True)
class Entry:
    name: str
    data: bytes
    mode: int = 0o644


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def safe_name(name: str) -> None:
    path = PurePosixPath(name)
    if not name or path.is_absolute() or ".." in path.parts or "\\" in name:
        raise ValueError(f"Unsafe package path: {name}")
    if path.suffix.lower() in FORBIDDEN_SUFFIXES or path.name.lower() in {"display.cfg", "imgui.ini"}:
        raise ValueError(f"ROM, imported asset, save or personal preference rejected: {name}")


def reject_retail_data(data: bytes, name: str) -> None:
    # Renaming a supported donor or imported pack does not make it releasable.
    # Check content as well as names, including copier-headered donor images.
    if data.startswith(b"EBCDATA1"):
        raise ValueError(f"Imported asset-pack content rejected: {name}")
    if len(data) in (0x300000, 0x300200) and sha256(data[-0x300000:]) in ROM_HASHES:
        raise ValueError(f"Retail ROM content rejected: {name}")


def file_entry(source: Path, name: str, mode: int = 0o644) -> Entry:
    safe_name(name)
    # Explicit source paths may be runtime-library symlinks. Store their regular
    # file contents, never a symlink that could point outside an extracted ZIP.
    if not source.is_file():
        raise ValueError(f"Missing package input: {source}")
    if source.suffix.lower() in FORBIDDEN_SUFFIXES:
        raise ValueError(f"Retail/user-data input rejected: {source}")
    data = source.read_bytes()
    reject_retail_data(data, name)
    return Entry(name, data, mode)


def require_native(entry: Entry, platform: str) -> None:
    data = entry.data
    if platform == "linux":
        # ELF64, little-endian, AMD64. Libraries and the application share this
        # check, preventing an accidentally named ROM/text file being packaged.
        valid = len(data) >= 64 and data[:6] == b"\x7fELF\x02\x01" and struct.unpack_from("<H", data, 18)[0] == 62
    else:
        offset = struct.unpack_from("<I", data, 60)[0] if len(data) >= 64 else len(data)
        valid = (data[:2] == b"MZ" and offset + 6 <= len(data) and
                 data[offset:offset + 4] == b"PE\0\0" and struct.unpack_from("<H", data, offset + 4)[0] == 0x8664)
    if not valid:
        raise ValueError(f"Expected a native {platform} x86-64 binary: {entry.name}")


def template(name: str, version: str, output_name: str) -> Entry:
    text = (ROOT / "cpp/resources" / name).read_text(encoding="utf-8")
    text = text.replace("@VERSION@", version)
    if re.search(r"@[A-Z_]+@", text):
        raise ValueError(f"Unexpanded release template marker in {name}")
    return Entry(output_name, text.encode("utf-8"))


def package_entries(platform: str, version: str, runtime: Path) -> list[Entry]:
    # No recursive source-tree copy: adding a file to a worktree cannot silently
    # add it to a release. Every artifact, dependency and notice is named here.
    entries = [file_entry(ROOT / source, name) for source, name in COMMON_NOTICES]
    entries.extend((template(f"release-readme-{platform}.txt", version, "README.txt"),
                    template("release-notice.txt", version, "NOTICE.txt")))
    if platform == "windows":
        for source, name in (("eb_cpp.exe", "Phase Distorter.exe"), ("SDL2.dll", "SDL2.dll")):
            entry = file_entry(ROOT / "launchers/windows/bin" / source, name, 0o755)
            require_native(entry, platform)
            entries.append(entry)
        entries.append(file_entry(ROOT / "install-shortcuts.vbs", "install-shortcuts.vbs"))
        entries.append(file_entry(ROOT / "cpp/resources/phase-distorter.ico", "cpp/resources/phase-distorter.ico"))
    else:
        entry = file_entry(ROOT / "launchers/linux/bin/eb_cpp", "Phase Distorter", 0o755)
        require_native(entry, platform)
        entries.append(entry)
        entries.append(file_entry(ROOT / "install-linux.sh", "install-linux.sh", 0o755))
        entries.append(file_entry(ROOT / "cpp/resources/phase-distorter.png", "cpp/resources/phase-distorter.png"))
        for name in RUNTIME_LIBRARIES:
            entry = file_entry(runtime / name, "lib/" + name, 0o755)
            require_native(entry, platform)
            entries.append(entry)
        for name in RUNTIME_NOTICES:
            entries.append(file_entry(runtime / name, "lib/" + name))
    names = [entry.name for entry in entries]
    if len(set(names)) != len(names):
        raise ValueError("Duplicate package paths")
    for entry in entries:
        reject_retail_data(entry.data, entry.name)
    entries.sort(key=lambda entry: entry.name)
    manifest = {
        "schema": 1, "project": "Phase Distorter", "version": version,
        "platform": platform, "architecture": "x86_64",
        "files": [{"path": entry.name, "size": len(entry.data), "mode": f"{entry.mode:04o}",
                   "sha256": sha256(entry.data)} for entry in entries],
        "scope": "Payload files only; SHA256SUMS additionally covers this manifest. Neither record is a signature.",
    }
    entries.append(Entry("MANIFEST.json", (json.dumps(manifest, indent=2, sort_keys=True) + "\n").encode()))
    sums = "".join(f"{sha256(entry.data)}  {entry.name}\n" for entry in sorted(entries, key=lambda entry: entry.name))
    entries.append(Entry("SHA256SUMS", sums.encode()))
    return sorted(entries, key=lambda entry: entry.name)


def write_zip(destination: Path, entries: list[Entry]) -> None:
    # Ignore source mtimes, host umask, uid and path names. Fixed metadata and
    # sorted input give repeatable archives with the same Python/zlib toolchain.
    # Extracting into any directory creates one contained, versioned application
    # folder. Manifest/checksum paths remain relative to that folder's interior.
    folder = destination.stem
    safe_name(folder)
    archive_names = [folder + "/" + entry.name for entry in entries]
    handle, temporary = tempfile.mkstemp(prefix=destination.name + ".", suffix=".tmp", dir=destination.parent)
    os.close(handle)
    try:
        with zipfile.ZipFile(temporary, "w", compression=zipfile.ZIP_DEFLATED, compresslevel=9) as archive:
            for entry, name in zip(entries, archive_names):
                safe_name(name)
                reject_retail_data(entry.data, entry.name)
                info = zipfile.ZipInfo(name, date_time=(1980, 1, 1, 0, 0, 0))
                info.create_system = 3
                info.external_attr = (stat.S_IFREG | entry.mode) << 16
                archive.writestr(info, entry.data, compress_type=zipfile.ZIP_DEFLATED, compresslevel=9)
        # Verify central-directory names, payload hashes and executable modes
        # before replacing an existing archive with the newly generated one.
        with zipfile.ZipFile(temporary) as archive:
            if archive.namelist() != archive_names or archive.testzip() is not None:
                raise ValueError(f"ZIP verification failed: {destination.name}")
            for entry, name in zip(entries, archive_names):
                info = archive.getinfo(name)
                restored = archive.read(name)
                reject_retail_data(restored, entry.name)
                if restored != entry.data or (info.external_attr >> 16) & 0o777 != entry.mode:
                    raise ValueError(f"ZIP payload/mode mismatch: {entry.name}")
        os.chmod(temporary, 0o644)
        os.replace(temporary, destination)
    finally:
        Path(temporary).unlink(missing_ok=True)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--version", default=(ROOT / "VERSION").read_text(encoding="utf-8").strip())
    parser.add_argument("--platform", choices=("all", "windows", "linux"), default="all")
    parser.add_argument("--linux-runtime-dir", type=Path, default=ROOT / "launchers/linux/lib")
    parser.add_argument("--check", action="store_true", help="Validate whitelisted inputs without writing releases")
    args = parser.parse_args()
    if not re.fullmatch(r"\d+\.\d+(?:\.\d+)?(?:[-+][A-Za-z0-9.-]+)?", args.version):
        parser.error("Version must be a filename-safe release version such as 0.1 or 0.1.0")
    platforms = ("windows", "linux") if args.platform == "all" else (args.platform,)
    # Validate all selected packages first; a missing runtime or notice should
    # fail before any previous release archive is replaced.
    packages = {platform: package_entries(platform, args.version, args.linux_runtime_dir) for platform in platforms}
    releases = ROOT / "releases"
    for platform, entries in packages.items():
        name = f"Phase-Distorter-{args.version}-{platform}-x86_64.zip"
        if not args.check:
            releases.mkdir(exist_ok=True)
            write_zip(releases / name, entries)
        print(f"{'Validated' if args.check else 'Packaged'} {name}: {len(entries)} files, "
              f"{sum(len(entry.data) for entry in entries):,} uncompressed bytes")
    if not args.check:
        # The enclosing checksum file hashes the ZIPs only. ZIP contents never
        # include this file or the repository checksum file, avoiding cycles.
        archives = [releases / f"Phase-Distorter-{args.version}-{platform}-x86_64.zip"
                    for platform in ("linux", "windows")]
        text = "".join(f"{sha256(path.read_bytes())}  {path.name}\n" for path in archives if path.is_file())
        temporary = releases / "SHA256SUMS.tmp"
        temporary.write_text(text, encoding="utf-8")
        temporary.replace(releases / "SHA256SUMS")
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except (OSError, ValueError, zipfile.BadZipFile) as error:
        raise SystemExit(f"Packaging failed: {error}") from error
