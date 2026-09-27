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
from dataclasses import asdict, dataclass
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
                           None, offset, origin)
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
                                  wide_operand, length, rom_offset)
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


def emit(output: Path, instructions: list[Instruction], rom: bytes, provenance: dict,
         extra_code_spans: list[tuple[int, int]] = (), namespace: str = "eb") -> None:
    # Split by bank to keep compiler units manageable. Each generated switch
    # selects a fixed source site, then delegates its semantics to Cpu::execute.
    output.mkdir(parents=True, exist_ok=True)
    banks: dict[int, list[Instruction]] = defaultdict(list)
    for instruction in instructions:
        banks[instruction.address >> 16].append(instruction)
    generated = "// Generated from ca65 instruction spans. Do not edit.\n"
    for bank in range(0xC0, 0x100):
        cpu_parameter = "Cpu& c" if banks[bank] else "[[maybe_unused]] Cpu& c"
        lines = [generated, '#include "eb/cpu.hpp"\n', "#include <cstdint>\n\n",
                 f"namespace {namespace} {{\nbool translated_bank_{bank:02x}({cpu_parameter}, std::uint16_t offset) {{\n",
                 "    switch (offset) {\n"]
        for instruction in banks[bank]:
            source = instruction.source
            # Avoid a source comment's final backslash splicing away the case.
            lines.append(f"    // {source.file}:{source.line} {source.text.rstrip(chr(92))}\n")
            if instruction.overlap_origin is not None:
                lines.append(f"    // Overlapping static entry reached from 0x{instruction.overlap_origin:06X}.\n")
            if instruction.wide_operand is not None:
                flag = 0x20 if instruction.opcode in IMMEDIATE_M else 0x10
                lines.append(f"    case 0x{instruction.address & 0xFFFF:04X}: if (c.p & 0x{flag:02X}) c.execute<0x{instruction.opcode:02X}>(0x{instruction.wide_operand & 0xFF:06X}, 2); else c.execute<0x{instruction.opcode:02X}>(0x{instruction.wide_operand:06X}, 3); return true;\n")
            else:
                lines.append(f"    case 0x{instruction.address & 0xFFFF:04X}: c.execute<0x{instruction.opcode:02X}>(0x{instruction.operand:06X}, {instruction.length}); return true;\n")
        lines.extend(["    default: return false;\n    }\n}\n} // namespace eb\n"])
        write_changed(output / f"translated_bank_{bank:02x}.cpp", "".join(lines))

    lines = [generated, '#include "eb/cpu.hpp"\n#include "generated_code.hpp"\n\n', f'namespace {namespace} {{\n']
    for bank in range(0xC0, 0x100):
        lines.append(f"bool translated_bank_{bank:02x}(Cpu&, std::uint16_t);\n")
    lines.extend(["""
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

bool translated_step(Cpu& c) {
    const auto address = canonical_rom_address(c.pc);
    switch (address >> 16) {
"""])
    for bank in range(0xC0, 0x100):
        lines.append(f"    case 0x{bank:02X}: return translated_bank_{bank:02x}(c, static_cast<std::uint16_t>(address));\n")
    lines.extend(["    default: return false;\n    }\n}\n",
                  f"std::size_t translated_instruction_count() {{ return {len(instructions)}; }}\n",
                  "} // namespace eb\n"])
    write_changed(output / "translated_dispatch.cpp", "".join(lines))
    write_changed(output / "generated_code.hpp", generated + """#pragma once
#include <cstddef>
#include <cstdint>
namespace eb { class Cpu; }
NAMESPACE {
bool translated_step(Cpu&);
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
        "wram_battle_flag": value("BATTLE_MODE_FLAG", "ram"),
        "wram_bg_records": [value(name, "ram") for name in ("LOADED_BG_DATA_LAYER1", "LOADED_BG_DATA_LAYER2")],
        "wram_map_combo": value("LOADED_MAP_TILE_COMBO", "ram"),
        "wram_bg_scroll": [value(name, "ram") for name in ("BG1_X_POS", "BG1_Y_POS", "BG2_X_POS", "BG2_Y_POS")],
        "wram_map_arrangements": buffer + 0x8000,
        "wram_entity_script": value("ENTITY_SCRIPT_TABLE", "ram"),
        "wram_entity_var0": value("ENTITY_SCRIPT_VAR0_TABLE", "ram"),
        "wram_entity_var1": value("ENTITY_SCRIPT_VAR1_TABLE", "ram"),
        "wram_lumine_header": buffer,
        "wram_lumine_maps": [buffer + (0x1000 if version == "US" else 0x2000), buffer + 0x4000],
        "rom_map_chunks": [value(f"MAP_DATA_TILE_TABLE_CHUNK_{index}", "rom") for index in range(1, 11)],
        "rom_map_sectors": value("GLOBAL_MAP_TILESETPALETTE_DATA", "rom"),
        "title_event_first": value("TITLE_SCREEN_1", "enum"),
        "title_event_last": value("TITLE_SCREEN_11" if version == "US" else "TITLE_SCREEN_7", "enum"),
        "file_select_event": value("EVENT_787", "enum"),
        "lumine_event": value("EVENT_353", "enum"),
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
class Cpu;
bool translated_step(Cpu&);
std::uint32_t canonical_rom_address(std::uint32_t);
std::size_t translated_instruction_count(GameVersion version = GameVersion::US);
}
""")
    write_changed(output / "translated_dispatch.cpp", generated + """#include "eb/cpu.hpp"
#include "generated_code.hpp"
#include "us/generated_code.hpp"
#include "jp/generated_code.hpp"
namespace eb {
bool translated_step(Cpu& c) {
    return c.version == GameVersion::JP ? jp::translated_step(c) : us::translated_step(c);
}
std::uint32_t canonical_rom_address(std::uint32_t address) { return us::canonical_rom_address(address); }
std::size_t translated_instruction_count(GameVersion version) {
    return version == GameVersion::JP ? jp::translated_instruction_count() : us::translated_instruction_count();
}
}
""")
    write_changed(output / "generated_assets.hpp", generated + """#pragma once
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
    write_changed(output / "generated_assets.cpp", generated + """#include "generated_assets.hpp"
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
    declarations = []
    for key, value in profiles["US"].items():
        if isinstance(value, list):
            declarations.append(f"    std::array<std::uint32_t, {len(value)}> {key};\n")
        else:
            declarations.append(f"    std::uint32_t {key};\n")
    write_changed(output / "generated_profile.hpp", generated + """#pragma once
#include <array>
#include <cstdint>
#include "eb/game_version.hpp"
namespace eb {
// Offsets into WRAM/ROM spans, derived from each configuration's linked symbols.
struct SourceProfile {
""" + "".join(declarations) + """};
const SourceProfile& source_profile(GameVersion version);
}
""")
    lines = [generated, '#include "generated_profile.hpp"\nnamespace eb {\nnamespace {\n']
    for version, profile in profiles.items():
        lines.append(f"constexpr SourceProfile profile_{version.lower()}{{\n")
        for key, value in profile.items():
            initializer = "{" + ",".join(hex(item) for item in value) + "}" if isinstance(value, list) else hex(value)
            lines.append(f"    {initializer}, // {key}\n")
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
        print(f"Translated {spc_translation['instruction_count']:,} exact SPC700 instruction sites")
        print("Code-only multi-version build: retail assets were not read.")
    except (OSError, ValueError, RuntimeError) as error:
        print(f"Translation failed: {error}", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
