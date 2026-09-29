#!/usr/bin/env python3
"""Compile the original US ca65 sources into statically selected C++ instructions.

This is deliberately not a ROM disassembler. ca65's debug spans identify every
emitted instruction, including each instruction inside expanded/nested macros.
ld65 supplies its final address, and the linked bytes supply resolved operands.
Only source lines with real 65816 mnemonics become executable C++ cases. Data,
text bytecode, and binary assets remain data. No runtime instruction decoder is
generated. Missing sites fail closed in translated_step().
"""

from __future__ import annotations

import argparse
from collections import Counter, defaultdict, deque
from concurrent.futures import ThreadPoolExecutor
from dataclasses import asdict, dataclass, replace
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys

import asset_layout


# Regeneration belongs to the development checkout. The standalone release
# compiles its frozen generated/ tree, so normal player builds never run this
# pipeline or need the original assembly and extraction manifests.
# WDC 65C816 opcode mnemonics, in opcode order. Length comes from the assembler,
# not a guessed M/X state. ca65 also accepts JMP/JSR for their long forms.
OPCODES = """
BRK ORA COP ORA TSB ORA ASL ORA PHP ORA ASL PHD TSB ORA ASL ORA
BPL ORA ORA ORA TRB ORA ASL ORA CLC ORA INC TCS TRB ORA ASL ORA
JSR AND JSL AND BIT AND ROL AND PLP AND ROL PLD BIT AND ROL AND
BMI AND AND AND BIT AND ROL AND SEC AND DEC TSC BIT AND ROL AND
RTI EOR WDM EOR MVP EOR LSR EOR PHA EOR LSR PHK JMP EOR LSR EOR
BVC EOR EOR EOR MVN EOR LSR EOR CLI EOR PHY TCD JML EOR LSR EOR
RTS ADC PER ADC STZ ADC ROR ADC PLA ADC ROR RTL JMP ADC ROR ADC
BVS ADC ADC ADC STZ ADC ROR ADC SEI ADC PLY TDC JMP ADC ROR ADC
BRA STA BRL STA STY STA STX STA DEY BIT TXA PHB STY STA STX STA
BCC STA STA STA STY STA STX STA TYA STA TXS TXY STZ STA STZ STA
LDY LDA LDX LDA LDY LDA LDX LDA TAY LDA TAX PLB LDY LDA LDX LDA
BCS LDA LDA LDA LDY LDA LDX LDA CLV LDA TSX TYX LDY LDA LDX LDA
CPY CMP REP CMP CPY CMP DEC CMP INY CMP DEX WAI CPY CMP DEC CMP
BNE CMP CMP CMP PEI CMP DEC CMP CLD CMP PHX STP JML CMP DEC CMP
CPX SBC SEP SBC CPX SBC INC SBC INX SBC NOP XBA CPX SBC INC SBC
BEQ SBC SBC SBC PEA SBC INC SBC SED SBC PLX XCE JSR SBC INC SBC
""".split()
MNEMONICS = frozenset(OPCODES)
assert len(OPCODES) == 256
IMMEDIATE_M = frozenset((0x09, 0x29, 0x49, 0x69, 0x89, 0xA9, 0xC9, 0xE9))
IMMEDIATE_X = frozenset((0xA0, 0xA2, 0xC0, 0xE0))
# Architectural instruction sizes. M/X immediates use the wide size here; both
# possible encodings are emitted as C++ and selected only by the status flag.
LENGTHS = tuple(int(value) for value in """
2 2 2 2 2 2 2 2 1 3 1 1 3 3 3 4
2 2 2 2 2 2 2 2 1 3 1 1 3 3 3 4
3 2 4 2 2 2 2 2 1 3 1 1 3 3 3 4
2 2 2 2 2 2 2 2 1 3 1 1 3 3 3 4
1 2 2 2 3 2 2 2 1 3 1 1 3 3 3 4
2 2 2 2 3 2 2 2 1 3 1 1 4 3 3 4
1 2 3 2 2 2 2 2 1 3 1 1 3 3 3 4
2 2 2 2 2 2 2 2 1 3 1 1 3 3 3 4
2 2 3 2 2 2 2 2 1 3 1 1 3 3 3 4
2 2 2 2 2 2 2 2 1 3 1 1 3 3 3 4
3 2 3 2 2 2 2 2 1 3 1 1 3 3 3 4
2 2 2 2 2 2 2 2 1 3 1 1 3 3 3 4
3 2 2 2 2 2 2 2 1 3 1 1 3 3 3 4
2 2 2 2 2 2 2 2 1 3 1 1 3 3 3 4
3 2 2 2 2 2 2 2 1 3 1 1 3 3 3 4
2 2 2 2 3 2 2 2 1 3 1 1 3 3 3 4
""".split())
assert len(LENGTHS) == 256

FIELDS = re.compile(r'(\w+)=("(?:[^"\\]|\\.)*"|[^,]*)')
LABEL = re.compile(r"^(?:[A-Za-z_@.][\w@.]*:|:)\s*")


@dataclass(frozen=True)
class Source:
    file: str
    line: int
    text: str
    macro_expansion: bool


@dataclass
class Instruction:
    # Keep linked file offsets separate from CPU addresses: HiROM mirrors make
    # several bus addresses refer to the same cartridge bytes. A source span is
    # also distinct from the CPU's consumed length for BRK/COP and M/X immediates.
    address: int
    opcode: int
    operand: int
    length: int
    source: Source
    wide_operand: int | None = None
    source_span_length: int | None = None
    rom_offset: int | None = None
    overlap_origin: int | None = None
    routine_source: Source | None = None
    snapshot_override: dict | None = None


def fields(text: str) -> dict[str, str]:
    return {key: json.loads(value) if value.startswith('"') else value
            for key, value in FIELDS.findall(text)}


def source_mnemonic(text: str) -> str | None:
    # Source syntax is the first code/data boundary. A byte that happens to be a
    # valid opcode in a table or .incbin does not make that source line executable.
    text = text.partition(";")[0].strip()
    while LABEL.match(text):
        text = LABEL.sub("", text, count=1)
    token = text.split(None, 1)[0].upper() if text else ""
    return token if token in MNEMONICS else None


def sha256(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def canonical_rom_address(address: int) -> int | None:
    # Normalize cartridge mirrors only; WRAM and low-bank hardware space cannot
    # acquire generated instruction entries through an address alias.
    address &= 0xFFFFFF
    bank = address >> 16
    if bank in (0x7E, 0x7F) or (not bank & 0x40 and address & 0xFFFF < 0x8000):
        return None
    address = 0xC00000 | (address & 0x3FFFFF)
    return address - 0x100000 if address >= 0xF00000 else address


def audit_static_edges(instructions: list[Instruction]) -> dict[str, int]:
    """Reject missing code at every statically provable control-flow edge."""
    # This proves that direct targets and ordinary fall-throughs have source
    # entries. Indirect jumps, return stacks and reachability need runtime proof.
    addresses = {item.address for item in instructions}
    direct_count = 0
    fallthrough_count = 0
    branches8 = {0x10, 0x30, 0x50, 0x70, 0x80, 0x90, 0xB0, 0xD0, 0xF0}
    no_fallthrough = {0x00, 0x02, 0x40, 0x4C, 0x5C, 0x60, 0x6B, 0x6C,
                      0x7C, 0x80, 0x82, 0xDC, 0xDB}
    for item in instructions:
        bank = item.address & 0xFF0000
        following = bank | ((item.address + item.length) & 0xFFFF)
        target = None
        if item.opcode in branches8:
            delta = item.operand if item.operand < 0x80 else item.operand - 0x100
            target = bank | ((following + delta) & 0xFFFF)
        elif item.opcode == 0x82:
            delta = item.operand if item.operand < 0x8000 else item.operand - 0x10000
            target = bank | ((following + delta) & 0xFFFF)
        elif item.opcode in (0x20, 0x4C):
            target = bank | item.operand
        elif item.opcode in (0x22, 0x5C):
            target = item.operand
        if target is not None:
            direct_count += 1
            if canonical_rom_address(target) not in addresses:
                raise ValueError(f"Untranslated static target {target:06X} from {item.address:06X}: {item.source}")
        if item.opcode not in no_fallthrough:
            fallthrough_count += 1
            if following not in addresses:
                raise ValueError(f"Untranslated fall-through {following:06X} from {item.address:06X}: {item.source}")
    return {"verified_direct_control_flow_edges": direct_count,
            "verified_fallthrough_edges": fallthrough_count}


def expand_mode_variants(instructions: list[Instruction], rom: bytes) -> tuple[list[Instruction], dict]:
    """Precompile alternate entry sites created by M/X-dependent operand sizes.

    Only bytes already emitted as source instructions may seed or contain an
    overlapping instruction. This does not sweep data or introduce a runtime
    decoder. Every inferred site records the source instruction whose operand
    contains its start and the previously compiled instruction that reaches it.
    Unproven edges outside those source bytes remain explicit report entries.
    """
    compiled = {item.address: item for item in instructions}
    # The ownership map bounds inference to original source instruction spans.
    # Newly inferred overlaps never enlarge the region considered executable.
    owners = {item.address + offset: item for item in instructions
              for offset in range(item.source_span_length or item.length)}
    pending: deque[tuple[int, int]] = deque()
    seeds = []
    unresolved: set[tuple[int, int, str]] = set()
    for item in instructions:
        if item.wide_operand is not None:
            alternate_length = 3 if item.source_span_length == 2 else 2
            target = (item.address & 0xFF0000) | ((item.address + alternate_length) & 0xFFFF)
            seeds.append({"from": item.address, "target": target, "length": alternate_length,
                          "already_source_site": target in compiled})
            pending.append((target, item.address))
    no_fallthrough = {0x00, 0x02, 0x40, 0x4C, 0x5C, 0x60, 0x6B, 0x6C, 0x7C, 0x80, 0x82, 0xDC, 0xDB}
    examined = set()
    while pending:
        address, origin = pending.popleft()
        if address in compiled or address in examined:
            continue
        examined.add(address)
        owner = owners.get(address)
        if not owner:
            unresolved.add((origin, address, "target is outside emitted source instruction bytes"))
            continue
        offset = owner.rom_offset + address - owner.address
        opcode = rom[offset]
        length = LENGTHS[opcode]
        # Require the entire possible wide encoding to stay inside that region;
        # an unresolved edge is reported, not repaired by sweeping nearby data.
        if any(address + index not in owners for index in range(length)):
            unresolved.add((origin, address, "overlapping instruction extends outside emitted source instruction bytes"))
            continue
        operand = int.from_bytes(rom[offset + 1:offset + length], "little")
        item = Instruction(address, opcode, operand, length, owner.source,
                           operand if opcode in IMMEDIATE_M | IMMEDIATE_X else None,
                           None, offset, origin, owner.routine_source)
        compiled[address] = item
        bank = address & 0xFF0000
        following = bank | ((address + length) & 0xFFFF)
        if opcode not in no_fallthrough:
            pending.append((following, address))
            if item.wide_operand is not None:
                pending.append((bank | ((address + 2) & 0xFFFF), address))
        target = None
        if opcode in (0x10, 0x30, 0x50, 0x70, 0x80, 0x90, 0xB0, 0xD0, 0xF0):
            target = bank | ((following + operand - (0x100 if operand & 0x80 else 0)) & 0xFFFF)
        elif opcode == 0x82:
            target = bank | ((following + operand - (0x10000 if operand & 0x8000 else 0)) & 0xFFFF)
        elif opcode in (0x20, 0x4C):
            target = bank | operand
        elif opcode in (0x22, 0x5C):
            target = canonical_rom_address(operand)
            if target is None:
                unresolved.add((address, operand, "overlapping instruction targets non-ROM memory"))
        if target is not None:
            pending.append((target, address))
    result = sorted(compiled.values(), key=lambda item: item.address)
    report = {"immediate_mode_variant_count": len(seeds),
              "overlapping_instruction_count": len(result) - len(instructions),
              "alternate_fallthroughs": seeds,
              "unresolved_alternate_edges": [{"from": origin, "target": target, "reason": reason}
                                              for origin, target, reason in sorted(unresolved)]}
    return result, report


def run(command: list[str], root: Path) -> None:
    result = subprocess.run(command, cwd=root, text=True,
                            stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    if result.returncode:
        raise RuntimeError(f"Command failed: {' '.join(command)}\n{result.stdout}")


def assemble(root: Path, output: Path, jobs: int, version: str = "US") -> tuple[Path, Path, Path]:
    """Use a separate build tree; leave the assembly project's outputs alone."""
    for tool in ("ca65", "ld65"):
        if not shutil.which(tool):
            raise RuntimeError(f"{tool} is required to translate the assembly sources")
    output.mkdir(parents=True, exist_ok=True)
    configs = sorted((root / "src/bankconfig" / version).glob("*.asm"))
    if not configs:
        raise RuntimeError(f"No {version} assembly bank configuration sources found")
    flags = ["-g", "-t", "none", "--cpu", "65816", "-D", asset_layout.VERSIONS[version]["define"],
             "--bin-include-dir", "src", "--include-dir", "src",
             "--include-dir", "include", "--bin-include-dir", str(output),
             "--list-bytes", "0"]

    def one(config: Path) -> None:
        run(["ca65", *flags, "--listing", str(output / (config.stem + ".lst")),
             "-o", str(output / (config.stem + ".o")),
             str(config.relative_to(root))], root)

    with ThreadPoolExecutor(max_workers=jobs) as executor:
        list(executor.map(one, configs))
    # Despite its extension, this link output is an address-resolution image
    # containing asset placeholders. It is not a donor ROM or a playable build.
    rom = output / "earthbound.sfc"
    debug = output / "earthbound.dbg"
    linkmap = output / "earthbound.map"
    run(["ld65", "-C", "snes.cfg", "--dbgfile", str(debug), "--mapfile",
         str(linkmap), "-o", str(rom),
         *(str(output / (config.stem + ".o")) for config in configs)], root)
    return rom, debug, linkmap


def parse_translation(root: Path, debug: Path, rom: bytes) -> tuple[list[Instruction], dict]:
    files: dict[int, str] = {}
    segments: dict[int, dict[str, str]] = {}
    spans: dict[int, dict[str, str]] = {}
    references: dict[int, list[Source]] = defaultdict(list)
    source_cache: dict[str, list[str]] = {}
    aliases: dict[str, set[str]] = defaultdict(set)
    alias_references: list[tuple[int, Source]] = []
    invocation_references: list[tuple[int, Source]] = []
    emitted_source_lines = 0
    # Debug files order files/lines before segments/spans. Retain the references,
    # then join them after reading; macro instruction records can reference many
    # distinct expansions of the same source line.
    with debug.open(encoding="utf-8") as handle:
        for record in handle:
            kind, _, value = record.partition("\t")
            if kind not in {"file", "seg", "span", "line"}:
                continue
            data = fields(value.rstrip())
            if kind == "file":
                files[int(data["id"])] = data["name"]
            elif kind == "seg":
                segments[int(data["id"])] = data
            elif kind == "span":
                spans[int(data["id"])] = data
            elif "span" in data:
                filename = files[int(data["file"])]
                if filename not in source_cache:
                    source_cache[filename] = (root / filename).read_text(encoding="utf-8").splitlines()
                    for definition in source_cache[filename]:
                        match = re.fullmatch(r"\s*\.DEFINE\s+(\w+)\s+(\w+)\s*", definition.partition(";")[0], re.I)
                        if match and match[2].upper() in MNEMONICS:
                            aliases[match[1].upper()].add(match[2].upper())
                line = int(data["line"])
                try:
                    text = source_cache[filename][line - 1]
                except IndexError as error:
                    raise ValueError(f"Stale debug source location {filename}:{line}") from error
                # ca65 records the complete macro invocation span as well as
                # its individual definition instructions. Keep the caller as
                # organization metadata; opcode provenance remains untouched.
                code = text.partition(";")[0].strip()
                if data.get("type") != "2" and code and not code.startswith("."):
                    caller = Source(filename, line, text.strip(), False)
                    invocation_references.extend((int(span), caller) for span in data["span"].split("+"))
                if source_mnemonic(text):
                    emitted_source_lines += 1
                    source = Source(filename, line, text.strip(), data.get("type") == "2")
                    for span in data["span"].split("+"):
                        references[int(span)].append(source)
                elif text.partition(";")[0].strip().split(" ", 1)[0].upper() in aliases:
                    source = Source(filename, line, text.strip(), data.get("type") == "2")
                    alias_references.extend((int(span), source) for span in data["span"].split("+"))

    # A preprocessor alias can select a real instruction in one configuration
    # and a multi-instruction macro in another (_BEQL in INIT_INTRO). Only exact
    # opcode-matching spans select the single instruction. Expanded macros retain
    # their own mnemonic source spans and must not be treated as one instruction.
    for span_id, source in alias_references:
        span = spans[span_id]
        segment = segments[int(span["seg"])]
        if "ooffs" not in segment:
            continue
        offset, length = int(segment["ooffs"]) + int(span["start"]), int(span["size"])
        token = source.text.split(None, 1)[0].upper()
        if 1 <= length <= 4 and OPCODES[rom[offset]] in aliases[token]:
            references[span_id].append(source)
            emitted_source_lines += 1

    # Pick the smallest source invocation covering each emitted byte. This
    # resolves nested macro instructions to their caller without attributing
    # them to a neighboring function or guessing from a linked address.
    routine_owners: dict[tuple[int, int], tuple[int, Source]] = {}
    for span_id, caller in invocation_references:
        span = spans[span_id]
        size, start, segment_id = int(span["size"]), int(span["start"]), int(span["seg"])
        for offset in range(start, start + size):
            key = (segment_id, offset)
            previous = routine_owners.get(key)
            if previous is None or size < previous[0]:
                routine_owners[key] = (size, caller)

    instructions: dict[int, Instruction] = {}
    instruction_spans = 0
    excluded_non_rom = []
    for span_id, sources in references.items():
        span = spans[span_id]
        segment = segments[int(span["seg"])]
        if "ooffs" not in segment:
            excluded_non_rom.append({"span": span_id, "segment": segment["name"],
                                     "source": asdict(sources[0])})
            continue
        offset, length = int(span["start"]), int(span["size"])
        address = int(segment["start"], 0) + offset
        rom_offset = int(segment["ooffs"]) + offset
        if not 1 <= length <= 4:
            raise ValueError(f"Instruction span has invalid length {length}: {sources[0]}")
        encoded = rom[rom_offset:rom_offset + length]
        # A debug span alone is insufficient: its resolved opcode must agree
        # with every instruction source reference attached to that span.
        if len(encoded) != length:
            raise ValueError(f"Instruction outside linked ROM at {address:06X}")
        opcode = encoded[0]
        expected = OPCODES[opcode]
        for source in sources:
            mnemonic = source_mnemonic(source.text)
            valid = expected in aliases.get(source.text.split(None, 1)[0].upper(), ()) or mnemonic == expected or (mnemonic, expected) in {
                ("JMP", "JML"), ("JSR", "JSL"), ("JML", "JMP")}
            if not valid:
                raise ValueError(f"Opcode/source mismatch at {address:06X}: {expected} vs {source}")
        # Prefer a direct instruction source location if debug metadata happens
        # to attach both an invocation and its nested definition to one span.
        source = min(sources, key=lambda item: (item.macro_expansion, item.file, item.line))
        if opcode in IMMEDIATE_M | IMMEDIATE_X:
            if length not in (2, 3):
                raise ValueError(f"Invalid variable immediate source length at {address:06X}")
        elif length != LENGTHS[opcode] and not (opcode in (0x00, 0x02) and length == 1):
            raise ValueError(f"Architectural instruction length mismatch at {address:06X}: {length}")
        architectural_length = 2 if opcode in (0x00, 0x02) else length
        # BRK/COP consume a signature byte even when ca65's source span is one
        # byte. Immediate operands retain both widths; runtime P selects which
        # already-generated form executes, never a runtime instruction decoder.
        operand = int.from_bytes(rom[rom_offset + 1:rom_offset + architectural_length], "little")
        wide_operand = (int.from_bytes(rom[rom_offset + 1:rom_offset + 3], "little")
                        if opcode in IMMEDIATE_M | IMMEDIATE_X else None)
        instruction = Instruction(address, opcode, operand, architectural_length, source,
                                  wide_operand, length, rom_offset,
                                  routine_source=routine_owners.get((int(span["seg"]), offset), (0, source))[1])
        previous = instructions.get(address)
        if previous and (previous.opcode, previous.operand, previous.length) != (opcode, instruction.operand, architectural_length):
            raise ValueError(f"Conflicting instruction spans at {address:06X}")
        instructions[address] = instruction
        instruction_spans += 1
    if excluded_non_rom:
        raise ValueError(f"Executable non-ROM source spans need explicit relocation support: {excluded_non_rom}")
    ordered = sorted(instructions.values(), key=lambda instruction: instruction.address)
    for previous, current in zip(ordered, ordered[1:]):
        if previous.address + previous.source_span_length > current.address:
            raise ValueError(f"Overlapping instruction sites {previous.address:06X}, {current.address:06X}")
    if not ordered:
        raise ValueError("No source instructions found; rebuild ca65 objects with -g")
    provenance = {"emitted_instruction_source_records": emitted_source_lines,
                  "instruction_spans": instruction_spans,
                  "source_files_with_emitted_spans": len(source_cache),
                  "input_hashes": {name: sha256(root / name) for name in sorted(set(files.values()))
                                   if not name.startswith("src/bin/")},
                  "excluded_non_rom_instruction_spans": excluded_non_rom}
    return ordered, provenance


def write_changed(path: Path, content: str) -> None:
    # Stable files keep their timestamps so an unchanged translation does not
    # trigger recompilation of every generated bank on an incremental build.
    if not path.exists() or path.read_text(encoding="utf-8") != content:
        path.write_text(content, encoding="utf-8")


def code_image(instructions: list[Instruction], rom: bytes, extra_spans: list[tuple[int, int]] = ()) -> tuple[bytes, list[tuple[int, int]], list[tuple[int, int]]]:
    """Retain declared instruction bytes only; every other byte is imported."""
    # Inferred overlapping entries describe execution, not new owned bytes.
    # Only original CPU spans and explicitly mapped SPC spans populate the mask.
    mask = bytearray(len(rom))
    spans = [(item.rom_offset, item.source_span_length or item.length)
             for item in instructions if item.overlap_origin is None]
    for offset, length in [*spans, *extra_spans]:
        if offset is None or offset < 0 or length < 1 or offset + length > len(rom):
            raise ValueError(f"Code span outside linked image: {offset}, {length}")
        mask[offset:offset + length] = bytes([1]) * length
    code = bytes(value if mask[offset] else 0 for offset, value in enumerate(rom))
    # These complementary intervals become the import contract. Zero here means
    # absent cartridge data, not replacement game content usable before import.
    return code, asset_layout.code_ranges(mask, 1), asset_layout.code_ranges(mask, 0)


def spc_rom_spans(debug: Path, translation: dict) -> list[tuple[int, int]]:
    """Locate the source-built SPC driver by its actual linked subpack symbol."""
    starts = set()
    for line in debug.read_text(encoding="utf-8").splitlines():
        if line.startswith("sym\t") and 'name="AUDIO_SUBPACK_2_DATA_START"' in line:
            data = fields(line.partition("\t")[2])
            if "val" in data:
                starts.add(int(data["val"], 0) - 0xC00000)
    if len(starts) != 1:
        raise ValueError("Cannot uniquely locate the source-built SPC audio subpack")
    start = starts.pop()
    # bank26 includes main.spc700.bin beginning at source ORG $0500.
    return [(start + item["address"] - 0x500, item["length"])
            for item in translation["instructions"]]


# These verified static-dispatch overrides were already shipped in the frozen
# snapshot before source organization. The original assembly checkout has older
# entity-culling bounds. Keep the exact existing runtime-width cases, including
# alternate entries; renaming must not silently change gameplay. The code-only
# ROM import template remains the original linked bytes for asset validation.
FROZEN_PRESENTATION_OVERRIDES = {
    "US": [
        {"address": 0xC0C6F3, "expected": [0xC9, 0xFFC0, 3, 0xFFC0], "frozen": [0xC9, 0xFF80, 3, 0xFF80]},
        {"address": 0xC0C6F8, "expected": [0xC9, 0x140, 3, 0x140], "frozen": [0xC9, 0x180, 3, 0x180]},
        {"address": 0xC0C6F9, "expected": [0x40, 0, 1, None], "frozen": [0x80, 1, 2, None]},
        {"address": 0xC0C6FD, "expected": [0xE0, 0xFFC0, 3, 0xFFC0], "frozen": [0xE0, 0xFF80, 3, 0xFF80]},
        {"address": 0xC0C702, "expected": [0xE0, 0x140, 3, 0x140], "frozen": [0xE0, 0x180, 3, 0x180]},
        {"address": 0xC0C703, "expected": [0x40, 0, 1, None], "frozen": [0x80, 1, 2, None]},
        {"address": 0xC0DB49, "expected": [0xC9, 0x140, 3, 0x140], "frozen": [0xC9, 0x180, 3, 0x180]},
        {"address": 0xC0DB4E, "expected": [0xC9, 0xFFC0, 3, 0xFFC0], "frozen": [0xC9, 0xFF80, 3, 0xFF80]},
        {"address": 0xC0DB4F, "expected": [0xC0, 0x90FF, 3, 0x90FF], "frozen": [0x80, 0x90FF, 3, 0x90FF]},
    ],
    "JP": [
        {"address": 0xC0C6D5, "expected": [0xC9, 0xFFC0, 3, 0xFFC0], "frozen": [0xC9, 0xFF80, 3, 0xFF80]},
        {"address": 0xC0C6DA, "expected": [0xC9, 0x140, 3, 0x140], "frozen": [0xC9, 0x180, 3, 0x180]},
        {"address": 0xC0C6DB, "expected": [0x40, 0, 1, None], "frozen": [0x80, 1, 2, None]},
        {"address": 0xC0C6DF, "expected": [0xE0, 0xFFC0, 3, 0xFFC0], "frozen": [0xE0, 0xFF80, 3, 0xFF80]},
        {"address": 0xC0C6E4, "expected": [0xE0, 0x140, 3, 0x140], "frozen": [0xE0, 0x180, 3, 0x180]},
        {"address": 0xC0C6E5, "expected": [0x40, 0, 1, None], "frozen": [0x80, 1, 2, None]},
        {"address": 0xC0DB11, "expected": [0xC9, 0x140, 3, 0x140], "frozen": [0xC9, 0x180, 3, 0x180]},
        {"address": 0xC0DB16, "expected": [0xC9, 0xFFC0, 3, 0xFFC0], "frozen": [0xC9, 0xFF80, 3, 0xFF80]},
        {"address": 0xC0DB17, "expected": [0xC0, 0x90FF, 3, 0x90FF], "frozen": [0x80, 0x90FF, 3, 0x90FF]},
    ],
}


def apply_frozen_program_overrides(version: str, instructions: list[Instruction]) -> list[Instruction]:
    by_address = {item.address: item for item in instructions}
    for override in FROZEN_PRESENTATION_OVERRIDES[version]:
        item = by_address.get(override["address"])
        actual = [item.opcode, item.operand, item.length, item.wide_operand] if item else None
        if actual != override["expected"]:
            raise ValueError(f"Frozen presentation override source changed at {override['address']:06X}: {actual}")
        opcode, operand, length, wide_operand = override["frozen"]
        by_address[item.address] = replace(item, opcode=opcode, operand=operand,
            length=length, wide_operand=wide_operand, snapshot_override=override)
    return sorted(by_address.values(), key=lambda item: item.address)


def instruction_stream_digest(instructions: list[Instruction]) -> str:
    """Fingerprint executable selection, independent of names and organization."""
    stream = [(item.address, item.opcode, item.operand, item.length, item.wide_operand)
              for item in sorted(instructions, key=lambda item: item.address)]
    return hashlib.sha256(json.dumps(stream, separators=(",", ":")).encode()).hexdigest()


def routine_identity(source: Source) -> tuple[str, str, str]:
    """Use assembly provenance, keeping unresolved names explicitly unresolved."""
    path = Path(source.file)
    parts = list(path.with_suffix("").parts)
    if parts and parts[0] == "src":
        parts.pop(0)
    classification = "source_named"
    if "unknown" in parts or "unused" in parts or re.fullmatch(r"[C-Fc-f][0-9A-Fa-f]{5}(?:-.*)?", path.stem):
        classification = "unresolved"
        parts = ["unresolved", *parts[1:]] if parts[0] in ("unknown", "unused") else ["unresolved", *parts]
    elif not parts or parts[0] == "include":
        classification = "shared_assembly_helper"
    # Expand only source vocabulary whose meaning is explicit in its path.
    vocabulary = {"battlebgs": "battle_backgrounds", "intro": "introduction",
                  "misc": "miscellaneous", "decomp": "decompression"}
    parts = [vocabulary.get(part, part) for part in parts]
    identifier = re.sub(r"[^a-z0-9_]+", "_", "_".join(parts).lower()).strip("_")
    if not identifier or identifier[0].isdigit():
        identifier = "source_" + identifier
    category = parts[0] if parts else "unresolved"
    if category == "unresolved" and len(parts) > 1:
        category += "_" + re.sub(r"[^a-z0-9_]+", "_", parts[1].lower())
    return category, "execute_" + identifier + "_instruction", classification


def emit_program_instructions(output: Path, instructions: list[Instruction], namespace: str) -> None:
    """Organize exact instruction sites by their source routine, not ROM bank."""
    grouped: dict[str, list[Instruction]] = defaultdict(list)
    for instruction in sorted(instructions, key=lambda item: item.address):
        grouped[(instruction.routine_source or instruction.source).file].append(instruction)
    identities = {filename: routine_identity(items[0].routine_source or items[0].source)
                  for filename, items in grouped.items()}
    names = [identity[1] for identity in identities.values()]
    if len(names) != len(set(names)):
        raise ValueError("Assembly source paths collide after C++ identifier normalization")
    generated = "// Generated from ca65 instruction spans and source ownership. Do not edit.\n"
    old_index = output / "program_index.json"
    stale_sources = set(json.loads(old_index.read_text())["generated_sources"]) if old_index.exists() else set()
    chunks: dict[str, list[tuple[str, list[Instruction]]]] = {}
    chunk_sizes: dict[str, int] = defaultdict(int)
    category_chunks: dict[str, int] = defaultdict(lambda: 1)
    owners: dict[int, str] = {}
    index_routines = []
    for filename in sorted(grouped):
        items = grouped[filename]
        category, name, classification = identities[filename]
        chunk = f"program/{category}_{category_chunks[category]:02d}.cpp"
        if chunk_sizes[chunk] and chunk_sizes[chunk] + len(items) > 5000:
            category_chunks[category] += 1
            chunk = f"program/{category}_{category_chunks[category]:02d}.cpp"
        chunks.setdefault(chunk, []).append((filename, items))
        chunk_sizes[chunk] += len(items)
        for item in items:
            owners[item.address] = name
        index_routines.append({"function": name, "source_file": filename,
            "generated_file": chunk, "classification": classification,
            "first_address": f"0x{items[0].address:06X}", "last_address": f"0x{items[-1].address:06X}",
            "instruction_count": len(items), "instruction_stream_sha256": instruction_stream_digest(items),
            "source_lines": [min((item.routine_source or item.source).line for item in items),
                             max((item.routine_source or item.source).line for item in items)]})
    for chunk, routines in chunks.items():
        lines = [generated, '#include "eb/main_cpu_65816.hpp"\n#include <cstdint>\n\n', f"namespace {namespace} {{\n"]
        for filename, items in routines:
            _, name, classification = identities[filename]
            lines.extend([f"// Assembly routine source: {filename} ({classification}).\n",
                f"bool {name}(MainCpu65816& cpu, std::uint32_t address) {{\n    switch (address) {{\n"])
            for instruction in items:
                source = instruction.source
                lines.append(f"    // {source.file}:{source.line} {source.text.rstrip(chr(92))}\n")
                if instruction.routine_source and instruction.routine_source != source:
                    caller = instruction.routine_source
                    lines.append(f"    // Macro caller: {caller.file}:{caller.line} {caller.text.rstrip(chr(92))}\n")
                if instruction.snapshot_override:
                    lines.append("    // Retained frozen presentation override; see program_index.json.\n")
                if instruction.overlap_origin is not None:
                    lines.append(f"    // Overlapping static entry reached from 0x{instruction.overlap_origin:06X}.\n")
                if instruction.wide_operand is not None:
                    flag = 0x20 if instruction.opcode in IMMEDIATE_M else 0x10
                    lines.append(f"    case 0x{instruction.address:06X}: if (cpu.status_register & 0x{flag:02X}) cpu.execute_instruction<0x{instruction.opcode:02X}>(0x{instruction.wide_operand & 0xFF:06X}, 2); else cpu.execute_instruction<0x{instruction.opcode:02X}>(0x{instruction.wide_operand:06X}, 3); return true;\n")
                else:
                    lines.append(f"    case 0x{instruction.address:06X}: cpu.execute_instruction<0x{instruction.opcode:02X}>(0x{instruction.operand:06X}, {instruction.length}); return true;\n")
            lines.append("    default: return false;\n    }\n}\n\n")
        lines.append(f"}} // namespace {namespace}\n")
        (output / chunk).parent.mkdir(parents=True, exist_ok=True)
        write_changed(output / chunk, "".join(lines))
    # A 256-byte page selects a routine directly. Shared pages need only a
    # short boundary chain; each routine still rejects every non-source site.
    # This avoids a binary search on every main-CPU instruction.
    pages: dict[int, list[tuple[int, str]]] = defaultdict(list)
    for address, name in sorted(owners.items()):
        page = address >> 8
        if not pages[page] or pages[page][-1][1] != name:
            pages[page].append((address, name))
    lines = [generated, '#include "eb/main_cpu_65816.hpp"\n#include "generated_code.hpp"\n#include <array>\n\n', f"namespace {namespace} {{\n"]
    lines.extend(f"bool {name}(MainCpu65816&, std::uint32_t);\n" for name in sorted(names))
    lines.append("\nnamespace {\nusing Routine = bool (*)(MainCpu65816&, std::uint32_t);\n")
    page_routines = {}
    for page, ranges in sorted(pages.items()):
        name = ranges[0][1]
        if len(ranges) > 1:
            name = f"execute_shared_page_{page:04x}"
            lines.append(f"bool {name}(MainCpu65816& cpu, std::uint32_t address) {{\n")
            for (_, routine), (following, _) in zip(ranges, ranges[1:]):
                lines.append(f"    if (address < 0x{following:06X}) return {routine}(cpu, address);\n")
            lines.append(f"    return {ranges[-1][1]}(cpu, address);\n}}\n")
        page_routines[page] = name
    lines.append("constexpr auto make_program_pages() {\n    std::array<Routine, 0x4000> pages{};\n")
    lines.extend(f"    pages[0x{page - 0xC000:04X}] = &{name};\n" for page, name in sorted(page_routines.items()))
    lines.append("    return pages;\n}\nconstexpr auto program_pages = make_program_pages();\n}\n")
    lines.append("""
std::uint32_t canonical_rom_address(std::uint32_t address) {
    address &= 0xFFFFFF;
    const auto bank = address >> 16;
    if (bank == 0x7E || bank == 0x7F) return 0xFFFFFFFF;
    if ((bank & 0x40) == 0 && (address & 0xFFFF) < 0x8000) return 0xFFFFFFFF;
    address = 0xC00000 | (address & 0x3FFFFF);
    // The 3 MiB HiROM cartridge mirrors its last MiB in F0-FF/70-7D.
    if (address >= 0xF00000) address -= 0x100000;
    return address;
}

bool execute_translated_main_instruction(MainCpu65816& cpu) {
    const auto address = canonical_rom_address(cpu.program_counter);
    if (address == 0xFFFFFFFF) return false;
    const auto routine = program_pages[(address - 0xC00000) >> 8];
    return routine && routine(cpu, address);
}
""")
    lines.extend([f"std::size_t translated_instruction_count() {{ return {len(instructions)}; }}\n", f"}} // namespace {namespace}\n"])
    write_changed(output / "game_program_dispatch.cpp", "".join(lines))
    source_files = ["game_program_dispatch.cpp", *sorted(chunks)]
    index = {"schema": 1, "namespace": namespace, "instruction_count": len(instructions),
        "instruction_stream_sha256": instruction_stream_digest(instructions),
        "naming_evidence": "Original assembly source paths; macro ownership from enclosing ca65 invocation spans. Address-only source names remain explicitly unresolved.",
        "classification_counts": dict(Counter(row["classification"] for row in index_routines)),
        "classification_instruction_counts": {classification: sum(row["instruction_count"] for row in index_routines if row["classification"] == classification)
                                               for classification in sorted({row["classification"] for row in index_routines})},
        "snapshot_overrides": [item.snapshot_override for item in instructions if item.snapshot_override],
        "generated_sources": source_files, "routines": index_routines}
    write_changed(old_index, json.dumps(index, indent=2) + "\n")
    # Only remove files owned by this generator's prior manifest or legacy
    # bank emitter; never sweep arbitrary C++ files from the source directory.
    for stale in stale_sources - set(source_files):
        path = output / stale
        if path.is_file():
            path.unlink()
    for path in [*output.glob("translated_bank_[cdef][0123456789abcdef].cpp"), output / "translated_dispatch.cpp"]:
        if path.is_file():
            path.unlink()


def emit_program_manifest(output: Path) -> None:
    sources = ["audio_driver_instructions.cpp"]
    for version in ("us", "jp"):
        index = json.loads((output / version / "program_index.json").read_text())
        sources.extend(f"{version}/{name}" for name in index["generated_sources"])
    write_changed(output / "program_sources.cmake", "# Generated program source inventory. Do not edit.\nset(EB_GENERATED_PROGRAM_SOURCES\n" +
                  "".join(f'    "${{CMAKE_CURRENT_LIST_DIR}}/{name}"\n' for name in sources) + ")\n")


def emit(output: Path, instructions: list[Instruction], rom: bytes, provenance: dict,
         extra_code_spans: list[tuple[int, int]] = (), namespace: str = "eb") -> None:
    output.mkdir(parents=True, exist_ok=True)
    emit_program_instructions(output, instructions, namespace)
    banks: dict[int, list[Instruction]] = defaultdict(list)
    for instruction in instructions:
        banks[instruction.address >> 16].append(instruction)
    generated = "// Generated from ca65 instruction spans. Do not edit.\n"
    write_changed(output / "generated_code.hpp", generated + """#pragma once
#include <cstddef>
#include <cstdint>
namespace eb { class MainCpu65816; }
NAMESPACE {
bool execute_translated_main_instruction(MainCpu65816&);
std::uint32_t canonical_rom_address(std::uint32_t address);
std::size_t translated_instruction_count();
}
""".replace("NAMESPACE", f"namespace {namespace}"))
    write_changed(output / "generated_assets.hpp", generated + """#pragma once
#include <cstddef>
#include <cstdint>
#include "eb/asset_store.hpp"
NAMESPACE {
// Code-only template. Load an imported asset pack before constructing Bus.
const std::uint8_t* rom_data();
std::size_t rom_size();
AssetLayout asset_layout();
}
""".replace("NAMESPACE", f"namespace {namespace}"))
    code, compiled_ranges, imported_ranges = code_image(instructions, rom, extra_code_spans)
    # Store only code bytes in the executable; rebuild their sparse positions in
    # a zero-filled image. The importer supplies every complementary interval
    # and verifies the resulting complete image against the retail fingerprint.
    packed = b"".join(code[offset:offset + size] for offset, size in compiled_ranges)
    expected_sha = provenance.get("expected_imported_rom_sha256", hashlib.sha256(rom).hexdigest())
    lines = [generated, '// No retail asset bytes: sparse source instruction bytes only.\n',
             '#include "generated_assets.hpp"\n#include <algorithm>\n#include <array>\n',
             f'namespace {namespace} {{\nnamespace {{\nconstexpr std::uint8_t code_bytes[] = {{\n']
    for offset in range(0, len(packed), 32):
        lines.append("    " + ",".join(f"0x{byte:02X}" for byte in packed[offset:offset + 32]) + ",\n")
    lines.append("};\nconstexpr AssetRange compiled_ranges[] = {\n")
    lines.extend(f"    {{{offset}, {size}}},\n" for offset, size in compiled_ranges)
    lines.append("};\nconstexpr AssetRange imported_ranges[] = {\n")
    lines.extend(f"    {{{offset}, {size}}},\n" for offset, size in imported_ranges)
    lines.extend([f"}};\nalignas(64) std::array<std::uint8_t, {len(rom)}> data{{}};\n",
                  "struct BuildCodeImage { BuildCodeImage() {\n",
                  "    std::size_t source = 0;\n    for (auto range : compiled_ranges) {\n",
                  "        std::copy_n(code_bytes + source, range.size, data.data() + range.offset);\n",
                  "        source += range.size;\n    }\n} };\nconst BuildCodeImage build_code_image;\n}\n",
                  "const std::uint8_t* rom_data() { return data.data(); }\n",
                  "std::size_t rom_size() { return data.size(); }\n",
                  f'AssetLayout asset_layout() {{ return {{data, imported_ranges, "{expected_sha}"}}; }}\n}}\n'])
    write_changed(output / "generated_assets.cpp", "".join(lines))
    coverage = {"schema": 1, "method": "ca65 source mnemonic + exact emitted debug span + ld65 linked operand",
                "rom_bytes": len(rom), "rom_sha256": expected_sha,
                "linked_placeholder_sha256": hashlib.sha256(rom).hexdigest(),
                "code_template_sha256": hashlib.sha256(code).hexdigest(),
                "compiled_code_bytes": len(packed), "compiled_code_ranges": len(compiled_ranges),
                "imported_asset_bytes": sum(size for _, size in imported_ranges),
                "imported_asset_ranges": len(imported_ranges),
                "instruction_count": len(instructions),
                "instruction_bytes": sum(item.length for item in instructions),
                "source_instruction_count": sum(item.overlap_origin is None for item in instructions),
                "source_instruction_bytes": sum(item.source_span_length or 0 for item in instructions),
                "source_macro_instruction_count": sum(item.source.macro_expansion and item.overlap_origin is None for item in instructions),
                "macro_instruction_count": sum(item.source.macro_expansion for item in instructions),
                "banks": {f"{bank:02X}": len(items) for bank, items in sorted(banks.items()) if items},
                "opcodes": {f"{opcode:02X}": count for opcode, count in sorted(Counter(item.opcode for item in instructions).items())},
                "limitations": ["Self-modifying or copied RAM code requires explicit native translation.",
                                "Unproven alternate-width edges outside source instruction bytes remain listed in mode_variant_audit.json.",
                                "Instruction coverage does not establish CPU, hardware, or gameplay fidelity."],
                **provenance}
    write_changed(output / "coverage.json", json.dumps(coverage, indent=2) + "\n")
    write_changed(output / "source_map.json", json.dumps({"schema": 1,
        "instructions": [asdict(item) for item in instructions]}, separators=(",", ":")) + "\n")


def linked_symbols(debug: Path) -> dict[str, set[int]]:
    result: dict[str, set[int]] = defaultdict(set)
    with debug.open(encoding="utf-8") as handle:
        for line in handle:
            if not line.startswith("sym\t"):
                continue
            data = fields(line.partition("\t")[2])
            if "val" in data:
                result[data["name"]].add(int(data["val"], 0))
    return result


def debug_profile(debug: Path, version: str, value) -> dict:
    # Debug actions use the same regional symbols as compiled game code.
    records = [fields(line.partition("\t")[2]) | {"record": line.partition("\t")[0]}
               for line in debug.read_text().splitlines() if line.startswith(("sym\t", "scope\t"))]
    def member(structure: str, name: str = "") -> int:
        scopes = {r["id"]: r for r in records if r["record"] == "scope" and r.get("name") == structure}
        matches = {int(r["val"], 0) for r in records if r["record"] == "sym" and
                   r.get("scope") in scopes and r.get("name") == name and "val" in r} if name else {
                   int(r["size"], 0) for r in scopes.values()}
        if len(matches) != 1:
            raise ValueError(f"Ambiguous/missing {version} member {structure}::{name}: {matches}")
        return matches.pop()
    main_ids = {r["id"] for r in records if r["record"] == "sym" and r.get("name") == "MAIN_LOOP" and "val" in r}
    main_loop = {int(r["val"], 0) for r in records if r["record"] == "sym" and
                 r.get("parent") in main_ids and r.get("name") == "@LOOP_BEGIN"}
    if len(main_loop) != 1:
        raise ValueError(f"Missing {version} main-loop debug boundary")
    return {
        # MAIN_LOOP starts with JSL OAM_CLEAR, then JSL RUN_ACTIONSCRIPT_FRAME.
        # Bound extra compute capacity to that call, not menus/intro/battle code.
        "gameplay_timing": {
            'entity_update_call': next(iter(main_loop)) + 4,
            'entity_update_return': next(iter(main_loop)) + 8,
            'wait_for_next_frame': 0xc00000 + value('WAIT_UNTIL_NEXT_FRAME', 'rom'),
        },
        "character_layout": {
            'table_address': value('PARTY_CHARACTERS', 'ram'),
            'entry_size': member('char_struct'),
            'level': member('char_struct', 'level'),
            'max_hp': member('char_struct', 'max_hp'),
            'max_pp': member('char_struct', 'max_pp'),
            'afflictions': member('char_struct', 'afflictions'),
            'current_hp_fraction': member('char_struct', 'current_hp_fraction'),
            'current_hp': member('char_struct', 'current_hp'),
            'current_hp_target': member('char_struct', 'current_hp_target'),
            'current_pp_fraction': member('char_struct', 'current_pp_fraction'),
            'current_pp': member('char_struct', 'current_pp'),
            'current_pp_target': member('char_struct', 'current_pp_target'),
        },
        "battler_layout": {
            'table_address': value('BATTLERS_TABLE', 'ram'),
            'entry_size': member('battler'),
            'hp': member('battler', 'hp'),
            'hp_target': member('battler', 'hp_target'),
            'hp_max': member('battler', 'hp_max'),
            'pp': member('battler', 'pp'),
            'pp_target': member('battler', 'pp_target'),
            'pp_max': member('battler', 'pp_max'),
            'afflictions': member('battler', 'afflictions'),
            'consciousness': member('battler', 'consciousness'),
            'ally_or_enemy': member('battler', 'ally_or_enemy'),
            'npc_id': member('battler', 'npc_id'),
            'id': member('battler', 'id'),
        },
        "party_state": {
            'members': value('GAME_STATE', 'ram') + member('game_state', 'party_members'),
            'count': value('GAME_STATE', 'ram') + member('game_state', 'party_count'),
            'player_controlled_count': value('GAME_STATE', 'ram') + member('game_state', 'player_controlled_party_count'),
            'walking_style': value('GAME_STATE', 'ram') + member('game_state', 'walking_style'),
            'leader_x': value('GAME_STATE', 'ram') + member('game_state', 'leader_x_coord'),
            'leader_y': value('GAME_STATE', 'ram') + member('game_state', 'leader_y_coord'),
        },
        "action_gates": {
            'battle_mode': value('BATTLE_MODE', 'ram'),
            'battle_swirl_countdown': value('BATTLE_SWIRL_COUNTDOWN', 'ram'),
            'enemy_touched': value('ENEMY_HAS_BEEN_TOUCHED', 'ram'),
            'teleport_destination': value('PSI_TELEPORT_DESTINATION', 'ram'),
            'using_door': value('USING_DOOR', 'ram'),
            'input_disable_frames': value('INPUT_DISABLE_FRAME_COUNTER', 'ram'),
            'pending_interactions': value('PENDING_INTERACTIONS', 'ram'),
        },
        "movement_state": {
            'flags': value('PLAYER_MOVEMENT_FLAGS', 'ram'),
            'intangibility_frames': value('PLAYER_INTANGIBILITY_FRAMES', 'ram'),
        },
        "teleport_state": {
            'destination': value('PSI_TELEPORT_DESTINATION', 'ram'),
            'style': value('PSI_TELEPORT_STYLE', 'ram'),
            'destination_table': value('PSI_TELEPORT_DEST_TABLE', 'rom'),
            'entry_size': member('psi_teleport_destination'),
            'destination_x': member('psi_teleport_destination', 'dest_x'),
            'destination_y': member('psi_teleport_destination', 'dest_y'),
        },
        "gameplay_routines": {
            'main_loop': main_loop.pop(),
            'add_party_character': 0xc00000 + value('ADD_CHAR_TO_PARTY', 'rom'),
            'remove_party_character': 0xc00000 + value('REMOVE_CHAR_FROM_PARTY', 'rom'),
        },
    }


def source_profile(debug: Path, version: str) -> dict:
    # Presentation reads game state through version-specific linked symbols.
    # Deriving these offsets prevents US WRAM layouts from leaking into Mother 2.
    symbols = linked_symbols(debug)

    def value(name: str, region: str) -> int:
        # Return offsets into memory spans, not CPU bus addresses. Multiple or
        # missing matches are a metadata failure rather than a guessed address.
        low, high = {"ram": (0x7E0000, 0x800000), "rom": (0xC00000, 0xF00000),
                     "enum": (0, 0x10000)}[region]
        matches = [value for value in symbols[name] if low <= value < high]
        if len(matches) != 1:
            raise ValueError(f"Ambiguous/missing {version} profile symbol {name}: {matches}")
        return matches[0] - low

    buffer = value("BUFFER", "ram")
    return {
        **debug_profile(debug, version, value),
        "dma_queue": {
            'write_index': value('DMA_QUEUE_INDEX', 'ram'),
            'last_completed_index': value('LAST_COMPLETED_DMA_INDEX', 'ram'),
        },
        "wram_battle_mode_flag": value("BATTLE_MODE_FLAG", "ram"),
        "wram_battle_backgrounds": {
            'layer1': value('LOADED_BG_DATA_LAYER1', 'ram'),
            'layer2': value('LOADED_BG_DATA_LAYER2', 'ram'),
        },
        # These gates identify authored flash effects, not ordinary battle art
        # or map palette animation. The renderer only observes this state; it
        # must never write to the game's timers, palettes, or animation data.
        "wram_psi_animation_state": value("PSI_ANIMATION_STATE", "ram"),
        "rom_psi_animation_config": value("PSI_ANIM_CFG", "rom"),
        "rom_psi_animation_pointers": value("PSI_ANIM_POINTERS", "rom"),
        "rom_psi_animation_palettes": value("PSI_ANIM_PALETTES", "rom"),
        "rom_psi_animation_graphics_bank": value("PSI_ANIM_GFX_SET_1", "rom") & 0xff0000,
        "wram_psi_animation_targets": value("PSI_ANIMATION_ENEMY_TARGETS", "ram"),
        "wram_swirl_update_timer": value("FRAMES_UNTIL_NEXT_SWIRL_UPDATE", "ram"),
        "wram_palettes": value("PALETTES", "ram"),
        "wram_flash_timers": {
            'green': value('GREEN_FLASH_DURATION', 'ram'),
            'red': value('RED_FLASH_DURATION', 'ram'),
            'reflection': value('REFLECT_FLASH_DURATION', 'ram'),
            'green_background': value('GREEN_BACKGROUND_FLASH_DURATION', 'ram'),
        },
        "wram_current_layer_config": value("CURRENT_LAYER_CONFIG", "ram"),
        "rom_layer_config_table": value("UNKNOWN_C0AFF1", "rom"),
        "wram_loaded_map_tile_combination": value("LOADED_MAP_TILE_COMBO", "ram"),
        "wram_background_scroll": {
            'layer1_x': value('BG1_X_POS', 'ram'),
            'layer1_y': value('BG1_Y_POS', 'ram'),
            'layer2_x': value('BG2_X_POS', 'ram'),
            'layer2_y': value('BG2_Y_POS', 'ram'),
        },
        "wram_map_tile_arrangements": buffer + 0x8000,
        "wram_entity_script_ids": value("ENTITY_SCRIPT_TABLE", "ram"),
        "wram_entity_script_variable0": value("ENTITY_SCRIPT_VAR0_TABLE", "ram"),
        "wram_entity_script_variable1": value("ENTITY_SCRIPT_VAR1_TABLE", "ram"),
        # Read-only sprite descriptors retain full signed coordinates even
        # when the native OAM builder clips the entity or some of its pieces.
        "wram_first_entity": value("FIRST_ENTITY", "ram"),
        "wram_entity_next": value("ENTITY_NEXT_ENTITY_TABLE", "ram"),
        "wram_entity_screen_coordinates": {
            'x': value('ENTITY_SCREEN_X_TABLE', 'ram'),
            'y': value('ENTITY_SCREEN_Y_TABLE', 'ram'),
        },
        "wram_entity_world_coordinates": {
            'x': value('ENTITY_ABS_X_TABLE', 'ram'),
            'y': value('ENTITY_ABS_Y_TABLE', 'ram'),
        },
        "wram_entity_draw_priority": value("ENTITY_DRAW_PRIORITY", "ram"),
        "wram_entity_spritemap_pointers": {
            'low': value('ENTITY_SPRITEMAP_POINTER_LOW', 'ram'),
            'high': value('ENTITY_SPRITEMAP_POINTER_HIGH', 'ram'),
        },
        "wram_entity_draw_callback": value("ENTITY_DRAW_CALLBACK", "ram"),
        "wram_entity_animation_frame": value("ENTITY_ANIMATION_FRAME", "ram"),
        "wram_entity_displayed_sprites": value("ENTITY_CURRENT_DISPLAYED_SPRITES", "ram"),
        "wram_entity_spritemap_sizes": value("ENTITY_SPRITEMAP_SIZES", "ram"),
        "wram_entity_surface_flags": value("ENTITY_SURFACE_FLAGS", "ram"),
        "wram_entity_body_divides": value("ENTITY_UPPER_LOWER_BODY_DIVIDES", "ram"),
        "entity_draw_callbacks": {
            'screen_space': value('UNKNOWN_C0A3A4', 'rom') & 0xffff,
            'world_space': value('UNKNOWN_C0A0FA', 'rom') & 0xffff,
        },
        "wram_lumine_text_header": buffer,
        "wram_lumine_text_maps": {
            'even_columns': buffer + (0x1000 if version == 'US' else 0x2000),
            'odd_columns': buffer + 0x4000,
        },
        "rom_map_tile_chunks": [value(f"MAP_DATA_TILE_TABLE_CHUNK_{index}", "rom") for index in range(1, 11)],
        "rom_map_tileset_palette_sectors": value("GLOBAL_MAP_TILESETPALETTE_DATA", "rom"),
        "title_script_first": value("TITLE_SCREEN_1", "enum"),
        "title_script_last": value("TITLE_SCREEN_11" if version == "US" else "TITLE_SCREEN_7", "enum"),
        # SHOW_TITLE_SCREEN uses distinct PPU layouts in the two releases. An
        # active title script plus this layout avoids mistaking gameplay's BGs
        # for a logo screen. Values are the source's BGMODE/BGnSC register bytes.
        "title_background_mode": 3 if version == "US" else 1,
        "title_background_maps": {
            'layer1': 88 if version == 'US' else 56,
            'layer2': 0 if version == 'US' else 60,
        },
        # C47A9E/C47B77 play animation sequence 1 (Franklin Badge reflection)
        # and sequence 2 (lightning strike) on BG3. Match these scripts and the
        # corresponding entity variable instead of all uses of the text layer.
        "lightning_scripts": {
            'franklin_badge_reflection': value('EVENT_452', 'enum'),
            'strike_event_705': value('EVENT_705', 'enum'),
            'strike_event_706': value('EVENT_706', 'enum'),
        },
        # EVENT_860 explicitly alternates these two palettes. In JP its enum
        # value is shifted by four, so even shared script names need linking.
        "gas_station_flash_script": value("EVENT_860", "enum"),
        "wram_gas_station_base_palette": buffer,
        "rom_gas_station_palettes": {
            'normal': value('GAS_STATION_PALETTE', 'rom'),
            'alternate': value('GAS_STATION_PALETTE_2', 'rom'),
        },
        "file_select_script": value("EVENT_787", "enum"),
        "lumine_text_script": value("EVENT_353", "enum"),
    }


def emit_profiles(output: Path, profiles: dict[str, dict]) -> None:
    # The small common wrappers bind a selected asset profile, CPU program and
    # presentation layout together. Regional banks remain separate namespaces;
    # sharing the HiROM address mapper does not share their instruction bodies.
    generated = "// Generated from independent US and JP source builds. Do not edit.\n"
    write_changed(output / "generated_code.hpp", generated + """#pragma once
#include <cstddef>
#include <cstdint>
#include "eb/game_version.hpp"
namespace eb {
class MainCpu65816;
bool execute_translated_main_instruction(MainCpu65816&);
std::uint32_t canonical_rom_address(std::uint32_t);
std::size_t translated_instruction_count(GameVersion version = GameVersion::US);
}
""")
    write_changed(output / "translated_dispatch.cpp", generated + """#include "eb/main_cpu_65816.hpp"
#include "generated_code.hpp"
#include "us/generated_code.hpp"
#include "jp/generated_code.hpp"
namespace eb {
bool execute_translated_main_instruction(MainCpu65816& cpu) {
    return cpu.game_version == GameVersion::JP ? jp::execute_translated_main_instruction(cpu) : us::execute_translated_main_instruction(cpu);
}
std::uint32_t canonical_rom_address(std::uint32_t address) { return us::canonical_rom_address(address); }
std::size_t translated_instruction_count(GameVersion version) {
    return version == GameVersion::JP ? jp::translated_instruction_count() : us::translated_instruction_count();
}
}
""")
    write_changed(output / "generated_assets.hpp", generated + """// Common import interface for the frozen regional code templates. rom_data()
// exposes sparse instruction bytes with zero-filled asset gaps, not a playable
// cartridge. AssetLayout describes the gaps and complete-image fingerprint;
// load_game_assets() reconstructs and validates the image before SnesBus uses it.
#pragma once
#include "eb/asset_store.hpp"
#include "eb/game_version.hpp"
namespace eb {
// These images contain source instruction bytes only. Import assets before use.
const std::uint8_t* rom_data(GameVersion version = GameVersion::US);
std::size_t rom_size(GameVersion version = GameVersion::US);
AssetLayout asset_layout(GameVersion version = GameVersion::US);
std::span<const AssetProfile> asset_profiles();
}
""")
    write_changed(output / "generated_assets.cpp", generated + """// Route imports to each regional template without merging their layouts. The
// registry has static lifetime, so profiles and their referenced code/range
// spans remain valid during ROM identification and subsequent pack loading.
// No retail asset payload is introduced by this common registry.
#include "generated_assets.hpp"
#include "us/generated_assets.hpp"
#include "jp/generated_assets.hpp"
#include <array>
namespace eb {
const std::uint8_t* rom_data(GameVersion version) { return version == GameVersion::JP ? jp::rom_data() : us::rom_data(); }
std::size_t rom_size(GameVersion version) { return version == GameVersion::JP ? jp::rom_size() : us::rom_size(); }
AssetLayout asset_layout(GameVersion version) { return version == GameVersion::JP ? jp::asset_layout() : us::asset_layout(); }
std::span<const AssetProfile> asset_profiles() {
    static const std::array<AssetProfile, 2> profiles{{
        {GameVersion::US, "EarthBound (US)", us::asset_layout()},
        {GameVersion::JP, "Mother 2 (Japanese)", jp::asset_layout()},
    }};
    return profiles;
}
}
""")
    def declarations(profile: dict, indentation: str = "    ") -> str:
        result = []
        for name, value in profile.items():
            if isinstance(value, dict):
                type_name = "".join(part.capitalize() for part in name.split("_"))
                result.append(f"{indentation}struct {type_name} {{\n")
                result.append(declarations(value, indentation + "    "))
                result.append(f"{indentation}}} {name};\n")
            elif isinstance(value, list):
                result.append(f"{indentation}std::array<std::uint32_t, {len(value)}> {name};\n")
            else:
                result.append(f"{indentation}std::uint32_t {name};\n")
        return "".join(result)

    def shape(value):
        if isinstance(value, dict):
            return tuple((key, shape(item)) for key, item in value.items())
        if isinstance(value, list):
            return [shape(item) for item in value]
        if not isinstance(value, int):
            raise ValueError(f"Source-profile offset is not an integer: {value!r}")
        return "offset"

    if shape(profiles["US"]) != shape(profiles["JP"]):
        raise ValueError("US and JP source-profile schemas differ")

    write_changed(output / "generated_profile.hpp", generated + """#pragma once
#include <array>
#include <cstdint>
#include "eb/game_version.hpp"
namespace eb {
// Linked WRAM/ROM span offsets and structure-member offsets, not host pointers.
// gameplay_timing/gameplay_routines contain full 65816 program addresses;
// entity_draw_callbacks contain bank-relative source routine addresses.
// Names within each layout match the upstream assembly structure members.
struct SourceProfile {
""" + declarations(profiles["US"]) + """};
const SourceProfile& source_profile(GameVersion version);
}
""")
    def initializer(profile: dict, indentation: str = "    ") -> str:
        result = []
        for name, value in profile.items():
            if isinstance(value, dict):
                result.append(f"{indentation}.{name} = {{\n")
                result.append(initializer(value, indentation + "    "))
                result.append(f"{indentation}}},\n")
            else:
                literal = "{" + ", ".join(hex(item) for item in value) + "}" if isinstance(value, list) else hex(value)
                result.append(f"{indentation}.{name} = {literal},\n")
        return "".join(result)

    lines = [generated, '#include "generated_profile.hpp"\nnamespace eb {\nnamespace {\n']
    for version, profile in profiles.items():
        lines.append(f"constexpr SourceProfile profile_{version.lower()}{{\n")
        lines.append(initializer(profile))
        lines.append("};\n")
    lines.append("}\nconst SourceProfile& source_profile(GameVersion version) { return version == GameVersion::JP ? profile_jp : profile_us; }\n}\n")
    write_changed(output / "generated_profiles.cpp", "".join(lines))
    write_changed(output / "source_profiles.json", json.dumps(profiles, indent=2) + "\n")


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--jobs", type=int, default=4)
    parser.add_argument("--no-assemble", action="store_true",
                        help="Reuse this generator's prior assembly/debug outputs (for development only)")
    args = parser.parse_args(argv)
    root, output = args.root.resolve(), args.output.resolve()
    assembly = output.parent / "assembly"
    try:
        import spc700
        # The sound program is source-built once, then located inside each
        # regional cartridge link by its own exported subpack symbol.
        spc_translation = (json.loads((assembly / "spc_translation.json").read_text(encoding="utf-8"))
                           if args.no_assemble else spc700.build(root, assembly))
        for name, digest in spc_translation["source_hashes"].items():
            if sha256(root / name) != digest:
                raise ValueError(f"SPC source changed: {name}; omit --no-assemble to rebuild")
        spc700.attach_source_labels(root, spc_translation)
        profiles, reports = {}, {}
        for version, spec in asset_layout.VERSIONS.items():
            target = output / version.lower()
            variant_assembly = assembly / version.lower()
            source_root = variant_assembly / "source"
            if args.no_assemble:
                # Reuse is a developer shortcut, never permission to translate
                # stale objects after source or manifest changes.
                previous = json.loads((target / "coverage.json").read_text(encoding="utf-8"))
                for name, digest in previous.get("input_hashes", {}).items():
                    if sha256(root / name) != digest:
                        raise ValueError(f"Assembly input changed: {name}; omit --no-assemble to rebuild")
                placeholder_report = previous["asset_placeholders"]
                rom, debug, linkmap = (variant_assembly / f"earthbound.{ext}" for ext in ("sfc", "dbg", "map"))
            else:
                placeholder_report = asset_layout.source_tree(root, source_root, spec["manifest"])
                shutil.copyfile(assembly / "main.spc700.bin", variant_assembly / "main.spc700.bin")
                rom, debug, linkmap = assemble(source_root, variant_assembly, args.jobs, version)
            image = rom.read_bytes()
            if len(image) != asset_layout.ROM_SIZE:
                raise ValueError(f"Source link changed the canonical {version} ROM size")
            instructions, provenance = parse_translation(source_root, debug, image)
            provenance["input_hashes"][spec["manifest"]] = sha256(root / spec["manifest"])
            provenance.update({"version": version, "asset_placeholders": placeholder_report,
                               "expected_imported_rom_sha256": spec["sha256"]})
            provenance.update(audit_static_edges(instructions))
            # Audit declared source before adding width-dependent overlaps so
            # inferred entries cannot hide missing ordinary source boundaries.
            instructions, mode_report = expand_mode_variants(instructions, image)
            instructions = apply_frozen_program_overrides(version, instructions)
            provenance["immediate_mode_variant_count"] = mode_report["immediate_mode_variant_count"]
            provenance["overlapping_instruction_count"] = mode_report["overlapping_instruction_count"]
            provenance["unresolved_alternate_edge_count"] = len(mode_report["unresolved_alternate_edges"])
            provenance["debug_sha256"] = sha256(debug)
            provenance["map_sha256"] = sha256(linkmap)
            provenance["spc700"] = {key: value for key, value in spc_translation.items() if key != "instructions"}
            emit(target, instructions, image, provenance, spc_rom_spans(debug, spc_translation), f"eb::{version.lower()}")
            write_changed(target / "mode_variant_audit.json", json.dumps(mode_report, indent=2) + "\n")
            profiles[version] = source_profile(debug, version)
            reports[version] = json.loads((target / "coverage.json").read_text(encoding="utf-8"))
            print(f"Translated {len(instructions):,} exact {version} 65816 instruction sites to {target}")
        emit_profiles(output, profiles)
        # Reports preserve source provenance and unresolved coverage limits;
        # their counts are not evidence of full gameplay or timing equivalence.
        write_changed(output / "coverage.json", json.dumps({"schema": 2, "versions": reports,
                      "retail_assets_read": False}, indent=2) + "\n")
        for name in ("source_map.json", "mode_variant_audit.json"):
            write_changed(output / name, json.dumps({"schema": 2, "versions": {
                version: f"{version.lower()}/{name}" for version in profiles}}, indent=2) + "\n")
        spc700.emit(output, spc_translation)
        emit_program_manifest(output)
        print(f"Translated {spc_translation['instruction_count']:,} exact SPC700 instruction sites")
        print("Code-only multi-version build: retail assets were not read.")
    except (OSError, ValueError, RuntimeError) as error:
        print(f"Translation failed: {error}", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
