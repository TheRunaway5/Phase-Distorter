"""Build-time address metadata, never retail asset contents.

The repository's extraction manifest supplies compressed byte lengths and text
label offsets. Zero placeholders preserve those addresses for ca65/ld65 without
requiring a donor ROM or an extracted src/bin directory. Only the simple metadata
sections are parsed: text tables and compressed text strings are not consumed.
"""

from __future__ import annotations

from pathlib import Path
import re
import shutil


ROM_SIZE = 0x300000
ROM_SHA256 = "a8fe2226728002786d68c27ddddf0b90a894db52e4dfe268fdf72a68cae5f02e"
VERSIONS = {
    "US": {"manifest": "earthbound.yml", "define": "USA", "title": "EarthBound (US)", "sha256": ROM_SHA256},
    "JP": {"manifest": "mother2.yml", "define": "JPN", "title": "Mother 2 (Japanese)",
           "sha256": "1f8cfd13177d86b0eb2c8adcf9e1a4f0ec8966fa1583072b65a1b1c0e7961a5d"},
}


# These fingerprints identify supported complete imports. They are metadata,
# not a reason to read a retail image while generating the standalone program.
def metadata(manifest: Path) -> tuple[list[dict], dict[str, dict[int, str]], dict[int, str]]:
    # Parse the small manifest subset needed for address layout explicitly.
    # Text encodings and compressed string contents outside these sections are
    # intentionally irrelevant to the source build.
    entries: list[dict] = []
    labels: dict[str, dict[int, str]] = {}
    flyovers: dict[int, str] = {}
    section = ""
    group = ""
    for line in manifest.read_text(encoding="utf-8").splitlines():
        if not line.strip() or line.lstrip().startswith("#"):
            continue
        if re.fullmatch(r"[A-Za-z][A-Za-z0-9]*:.*", line):
            section = line.partition(":")[0]
            continue
        if section == "dumpEntries":
            if line.startswith("- subdir: "):
                entries.append({})
                line = line[2:]
            match = re.fullmatch(r"\s*(subdir|name|offset|size|extension|compressed): (.*)", line)
            if not match or not entries:
                raise ValueError(f"Unsupported dump metadata: {line}")
            key, value = match.groups()
            value = value.strip("'\"")
            entries[-1][key] = int(value, 0) if key in ("offset", "size") else value
        elif section == "renameLabels":
            match = re.fullmatch(r"  (\w+):", line)
            if match:
                group = match[1]
                labels[group] = {}
            else:
                match = re.fullmatch(r"    (0x[0-9A-Fa-f]+): (\w+)", line)
                if not match or not group:
                    raise ValueError(f"Unsupported text-label metadata: {line}")
                labels[group][int(match[1], 16)] = match[2]
        elif section == "flyoverLabels":
            match = re.fullmatch(r"  (0x[0-9A-Fa-f]+): (\w+)", line)
            if not match:
                raise ValueError(f"Unsupported flyover-label metadata: {line}")
            flyovers[int(match[1], 16)] = match[2]
    if not entries:
        raise ValueError("Extraction manifest has no dumpEntries")
    required = {"subdir", "name", "offset", "size", "extension", "compressed"}
    # Reject incomplete or out-of-image ranges before creating any placeholders.
    for entry in entries:
        if set(entry) != required or entry["compressed"] not in ("true", "false"):
            raise ValueError(f"Incomplete extraction metadata: {entry}")
        if entry["offset"] < 0 or entry["size"] < 0 or entry["offset"] + entry["size"] > ROM_SIZE:
            raise ValueError(f"Extraction metadata outside US image: {entry}")
    return entries, labels, flyovers


def placeholders(root: Path, destination: Path, manifest_name: str = "earthbound.yml") -> dict:
    entries, labels, flyovers = metadata(root / manifest_name)
    total = 0
    source_reinsertions = []
    for entry in entries:
        extension = entry["extension"]
        name = entry["name"]
        relative = Path(entry["subdir"]) / (name + "." + extension)
        # Manifest names must stay inside the isolated source tree, even though
        # the manifests normally come from the trusted development checkout.
        if relative.is_absolute() or ".." in relative.parts:
            raise ValueError(f"Unsafe extraction path: {relative}")
        if entry["compressed"] == "true":
            relative = Path(str(relative) + ".lzhal")
        path = destination / "src/bin" / relative
        path.parent.mkdir(parents=True, exist_ok=True)
        if extension in ("ebtxt", "flyover"):
            emitted_size = entry["size"]
            # The Japanese disassembly explicitly restores this trailing $40
            # outside the extracted EGLOBAL text. Its extraction interval includes
            # that byte; its generated text include does not. Preserve the source
            # reassembly boundary without consuming any donor bytes.
            if manifest_name == "mother2.yml" and name == "EGLOBAL" and extension == "ebtxt":
                bank = root / "src/bankconfig/JP/bank09.asm"
                source = "\n".join(line.partition(";")[0].strip() for line in bank.read_text(encoding="utf-8").splitlines())
                pattern = r'LOCALEINCLUDE "text_data/EGLOBAL.ebtxt"\s+\.BYTE \$40\s+LOCALEINCLUDE "text_data/ESYSTEM.ebtxt"'
                if not re.search(pattern, source):
                    raise ValueError("Japanese EGLOBAL source reinsertion changed; recheck placeholder layout")
                emitted_size -= 1
                source_reinsertions.append({"asset": str(relative), "bytes": 1,
                                            "source": "src/bankconfig/JP/bank09.asm", "directive": ".BYTE $40"})
            symbols = labels.get(name, {}) if extension == "ebtxt" else {
                address - 0xC00000 - entry["offset"]: label for address, label in flyovers.items()
                if entry["offset"] <= address - 0xC00000 < entry["offset"] + entry["size"]}
            lines = ["; Generated address-only placeholder, no text or game assets.\n"]
            offset = 0
            # Labels need their original offsets for pointers in real code.
            # Reserve intervening bytes without reconstructing their text.
            for position, label in sorted(symbols.items()):
                if not offset <= position <= emitted_size:
                    raise ValueError(f"Text label outside its asset: {relative}:{label}")
                if position > offset:
                    lines.append(f".RES {position - offset}, 0\n")
                lines.append(f".GLOBAL {label}: far\n{label}:\n")
                offset = position
            lines.append(f".RES {emitted_size - offset}, 0\n")
            path.write_text("".join(lines), encoding="utf-8")
            path.with_name(name + ".symbols.asm").write_text(
                "".join(f".GLOBAL {label}: far\n" for label in symbols.values()), encoding="utf-8")
        else:
            # Compressed assets remain compressed-size holes. Decompressing or
            # inventing data here would change the addresses the linker assigns.
            path.write_bytes(bytes(entry["size"]))
        total += entry["size"]
    return {"manifest": manifest_name, "placeholder_count": len(entries),
            "placeholder_bytes": total, "source_byte_reinsertions": source_reinsertions,
            "retail_assets_read": False}


def source_tree(root: Path, destination: Path, manifest_name: str = "earthbound.yml") -> dict:
    """Create an isolated input tree: src/bin is never copied or read."""
    # Only the dedicated destination is replaceable scratch space. Copy the
    # assembly/includes first, then satisfy their asset includes with zeros.
    if destination.exists():
        shutil.rmtree(destination)
    destination.mkdir(parents=True)
    shutil.copytree(root / "src", destination / "src", ignore=shutil.ignore_patterns("bin"))
    shutil.copytree(root / "include", destination / "include")
    shutil.copyfile(root / "snes.cfg", destination / "snes.cfg")
    return placeholders(root, destination, manifest_name)


def code_ranges(mask: bytes | bytearray, marked: int) -> list[tuple[int, int]]:
    """Return maximal intervals of code (1) or imported data (0)."""
    # A maximal run keeps pack metadata compact while preserving byte-exact
    # boundaries; running this for both values partitions the whole image.
    result = []
    start = None
    for offset, value in enumerate(mask):
        if value == marked and start is None:
            start = offset
        elif value != marked and start is not None:
            result.append((start, offset - start))
            start = None
    if start is not None:
        result.append((start, len(mask) - start))
    return result
