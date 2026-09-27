"""Source-build and statically translate the repository's SPC700 sound driver.

Temporary labels let the upstream assembler report exact instruction starts and
ends. The labeled source must assemble byte-for-byte identically to the original
apart from a final zero byte anchoring the last end label. The original image is
the only image used in the cartridge build. Runtime opcode decoding is absent.
"""

from __future__ import annotations

from collections import Counter
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess


UPSTREAM = "https://codeberg.org/filmroellchen/spcasm.git"
REVISION = "ee15b258e7286eb06e9c1fe49adc5cec7d79669f"
TAG = "v1.1.0"
TOOLCHAIN = "nightly-2023-09-01"
MNEMONICS = frozenset("""
MOV ADC SBC CMP AND OR EOR INC DEC ASL LSR ROL ROR XCN MOVW INCW DECW
ADDW SUBW CMPW MUL DIV DAA DAS BRA BEQ BNE BCS BCC BVS BVC BMI BPL
BBS BBS0 BBS1 BBS2 BBS3 BBS4 BBS5 BBS6 BBS7 BBC BBC0 BBC1 BBC2 BBC3
BBC4 BBC5 BBC6 BBC7 CBNE DBNZ JMP CALL PCALL TCALL BRK RET RET1 RETI
PUSH POP SET SET0 SET1 SET2 SET3 SET4 SET5 SET6 SET7 CLR CLR0 CLR1 CLR2
CLR3 CLR4 CLR5 CLR6 CLR7 TSET1 TSET TCLR1 TCLR AND1 OR1 EOR1 NOT1
MOV1 CLRC SETC NOTC CLRV CLRP SETP EI DI NOP SLEEP STOP
""".split())
LABEL = re.compile(r"^(?:[A-Za-z_][\w]*:|[+-]+:)\s*")
INCLUDE = re.compile(r'^(?:INCLUDE|INCSRC)\s+"([^"]+)"$', re.I)
REFERENCE = re.compile(r"^EB_CPP_SPC_(START|END)_(\d+)\s+_+\s+([A-Fa-f0-9]+)$", re.M)

# This original source block is byte-encoded executable code, not sound data.
# Assert its exact source bytes; do not infer code from arbitrary data bytes.
BYTE_CODE = {
    "DB $E4, $04, $68, $1C, $D0, $05, $E8, $02, $3F, $72, $07, $6F":
        (bytes.fromhex("E4 04 68 1C D0 05 E8 02 3F 72 07 6F"), (2, 2, 2, 2, 3, 1))
}


def command(args: list[str], cwd: Path) -> str:
    completed = subprocess.run(args, cwd=cwd, stdout=subprocess.PIPE,
                               stderr=subprocess.PIPE, text=True)
    if completed.returncode:
        raise RuntimeError(f"Command failed: {' '.join(args)}\n{completed.stdout}{completed.stderr}")
    return completed.stdout


def digest(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def assembler(root: Path) -> tuple[Path, dict]:
    """Prefer a user-installed assembler, otherwise build a pinned upstream tag."""
    # Tool bootstrap is a regeneration concern, not a game startup dependency.
    # Record the selected tool so source maps can be traced to its exact build.
    installed = os.environ.get("SPCASM") or shutil.which("spcasm")
    if installed:
        executable = Path(installed).resolve()
        return executable, {"origin": "installed", "version": command([str(executable), "--version"], root).strip()}
    prefix = root / "build/cpp/tools"
    source = prefix / "spcasm-source"
    executable = prefix / "spcasm-target/release" / ("spcasm.exe" if os.name == "nt" else "spcasm")
    prefix.mkdir(parents=True, exist_ok=True)
    if not source.exists():
        if not shutil.which("git"):
            raise RuntimeError("Install spcasm or Git and rustup to build the pinned source tool")
        command(["git", "clone", "--depth", "1", "--branch", TAG, UPSTREAM, str(source)], root)
    actual = command(["git", "-C", str(source), "rev-parse", "HEAD"], root).strip()
    # A tag name alone is mutable; the expected commit anchors the fallback
    # assembler, and Cargo's locked build anchors its dependency versions.
    if actual != REVISION:
        raise RuntimeError(f"Unexpected spcasm source revision {actual}; expected {REVISION}")
    if not executable.exists():
        if not shutil.which("rustup"):
            raise RuntimeError("Install spcasm or rustup to build the pinned upstream source tool")
        toolchains = command(["rustup", "toolchain", "list"], root)
        if TOOLCHAIN not in toolchains:
            command(["rustup", "toolchain", "install", TOOLCHAIN, "--profile", "minimal"], root)
        command(["rustup", "run", TOOLCHAIN, "cargo", "build", "--locked", "--release",
                 "--bin", "spcasm", "--manifest-path", str(source / "Cargo.toml"),
                 "--target-dir", str(prefix / "spcasm-target")], root)
    return executable, {"origin": UPSTREAM, "tag": TAG, "revision": REVISION,
                        "rust_toolchain": TOOLCHAIN, "cargo_lock_sha256": digest(source / "Cargo.lock"),
                        # The upstream v1.1.0 tag still declares package version
                        # 1.0.0. Record the actual version output without rewriting it.
                        "version": command([str(executable), "--version"], root).strip()}


def annotate(root: Path) -> tuple[str, list[dict], dict[str, str]]:
    # Surround actual source instructions with temporary labels. The assembler
    # resolves their sizes and operands; this tool never scans sound data for
    # bytes that merely resemble valid SPC opcodes.
    output: list[str] = []
    sites: list[dict] = []
    hashes: dict[str, str] = {}

    def visit(path: Path, active: set[Path]) -> None:
        if path in active:
            raise ValueError(f"Recursive SPC source include: {path}")
        hashes[str(path.relative_to(root))] = digest(path)
        macro_depth = 0
        for number, text in enumerate(path.read_text(encoding="utf-8").splitlines(), 1):
            code = text.partition(";")[0].strip()
            include = INCLUDE.fullmatch(code)
            if include:
                visit(path.parent / include.group(1), active | {path})
                continue
            while LABEL.match(code):
                code = LABEL.sub("", code, count=1)
            token = code.split(None, 1)[0].split(".", 1)[0].upper() if code else ""
            if token == "MACRO":
                macro_depth += 1
            elif token == "ENDMACRO":
                macro_depth -= 1
            byte_code = BYTE_CODE.get(code.upper())
            if token in MNEMONICS or byte_code:
                # Labels inside an unexpanded macro would describe its template,
                # not each emitted invocation. Stop rather than invent sites.
                if macro_depth:
                    raise ValueError(f"SPC instruction macros need expansion-aware instrumentation: {path}:{number}")
                index = len(sites)
                output.extend([f"EB_CPP_SPC_START_{index}:", text, f"EB_CPP_SPC_END_{index}:"])
                site = {"file": str(path.relative_to(root)), "line": number, "text": text.strip()}
                if byte_code:
                    site["expected_bytes"] = byte_code[0].hex()
                    site["lengths"] = byte_code[1]
                sites.append(site)
            else:
                output.append(text)
    visit(root / "src/spc700/main.spc700.s", set())
    # The final marker forces the assembler to retain the last end label. It is
    # removed by using the separately assembled original image for all operands.
    output.append("DB 0 ; generated marker anchoring the final instruction end label")
    return "\n".join(output) + "\n", sites, hashes


def parse_sites(sites: list[dict], references: str, binary: bytes) -> list[dict]:
    # Marker pairs supply exact intervals. The one explicitly known DB code
    # block has separately asserted bytes and instruction lengths; arbitrary DB
    # directives never enter the executable instruction set.
    labels = {f"{kind}_{index}": int(address, 16)
              for kind, index, address in REFERENCE.findall(references)}
    instructions = []
    for index, site in enumerate(sites):
        try:
            address, end = labels[f"START_{index}"], labels[f"END_{index}"]
        except KeyError as error:
            raise ValueError(f"SPC assembler omitted an instruction marker: {site}") from error
        encoded = binary[address:end]
        lengths = site.get("lengths", (end - address,))
        if "expected_bytes" in site and encoded.hex() != site["expected_bytes"]:
            raise ValueError(f"Annotated SPC byte-code block changed: {site}")
        if not encoded or sum(lengths) != len(encoded):
            raise ValueError(f"Invalid SPC instruction bounds: {site}")
        offset = 0
        for length in lengths:
            if length not in (1, 2, 3):
                raise ValueError(f"Invalid SPC instruction length {length}: {site}")
            raw = encoded[offset:offset + length]
            instructions.append({"address": address + offset, "opcode": raw[0],
                                 "operand": int.from_bytes(raw[1:], "little"), "length": length,
                                 "source": site})
            offset += length
    instructions.sort(key=lambda item: item["address"])
    for previous, current in zip(instructions, instructions[1:]):
        if previous["address"] + previous["length"] > current["address"]:
            raise ValueError(f"Overlapping SPC instruction sites: {previous}, {current}")
    return instructions


def audit_edges(instructions: list[dict]) -> dict:
    # Check source coverage for statically knowable successors. This is not a
    # proof of dynamic return/indirect targets or sound hardware timing.
    addresses = {item["address"] for item in instructions}
    direct, fallthrough = 0, 0
    external = []
    invariant_branches = []
    # These branches follow MOV A,#immediate and a store that preserves NZ.
    # Their unselected fall-through address is a data table in the source.
    always_taken = {0x15F1: (0xD0, 0x70), 0x2E48: (0xF0, 0x00)}
    by_address = {item["address"]: item for item in instructions}
    for item in instructions:
        address, opcode, operand, length = (item[key] for key in ("address", "opcode", "operand", "length"))
        following = (address + length) & 0xFFFF
        target = None
        if opcode in (0x10, 0x30, 0x50, 0x70, 0x90, 0xB0, 0xD0, 0xF0, 0x2F, 0xFE, 0x2E, 0xDE, 0x6E) or opcode & 15 == 3:
            delta = (operand >> (8 if length == 3 else 0)) & 0xFF
            target = (following + delta - (0x100 if delta & 0x80 else 0)) & 0xFFFF
        elif opcode in (0x3F, 0x5F):
            target = operand
        elif opcode == 0x4F:
            target = 0xFF00 | operand
        if target is not None:
            direct += 1
            if target == 0xFFC0:
                # This target belongs to the hardware boot ROM, not the loaded
                # game driver, and therefore has no source-generated case here.
                external.append({"from": address, "to": target, "reason": "hardware IPL ROM entry"})
            elif target not in addresses:
                raise ValueError(f"Untranslated SPC control-flow target {target:04X} from {address:04X}")
        if opcode not in (0x0F, 0x1F, 0x2F, 0x5F, 0x6F, 0x7F, 0xFF, 0xEF):
            fallthrough += 1
            if following not in addresses:
                expected = always_taken.get(address)
                load, store = by_address.get(address - 5), by_address.get(address - 3)
                # 15F1 uses an absolute MOV store (3 bytes); 2E48 does too.
                if not (expected and opcode == expected[0] and load and store
                        and load["opcode"] == 0xE8 and load["operand"] == expected[1]
                        and store["opcode"] == 0xC5 and store["length"] == 3):
                    raise ValueError(f"Untranslated SPC fall-through {following:04X} from {address:04X}")
                invariant_branches.append({"address": address, "accumulator": expected[1],
                                           "reason": "MOV immediate sets Z; following MOV store preserves Z"})
    return {"verified_direct_control_flow_edges": direct, "verified_fallthrough_edges": fallthrough,
            "external_control_flow_edges": external, "provably_taken_branches_before_data": invariant_branches}


def build(root: Path, assembly: Path) -> dict:
    assembly.mkdir(parents=True, exist_ok=True)
    executable, tool = assembler(root)
    binary_path = assembly / "main.spc700.bin"
    command([str(executable), "-f", "plain", str(root / "src/spc700/main.spc700.s"), str(binary_path)], root)
    annotated, sites, hashes = annotate(root)
    annotation_path = assembly / "spc-annotated.s"
    annotation_path.write_text(annotated, encoding="utf-8")
    annotated_binary = assembly / "spc-annotated.bin"
    references = command([str(executable), "-d", "-f", "plain", str(annotation_path), str(annotated_binary)], root)
    (assembly / "spc-symbols.txt").write_text(references, encoding="utf-8")
    binary = binary_path.read_bytes()
    # Instrumentation must be byte-neutral before its labels can be trusted.
    # A changed branch displacement or layout fails the entire source build.
    if annotated_binary.read_bytes() != binary + b"\0":
        raise ValueError("SPC source instrumentation changed original machine bytes")
    instructions = parse_sites(sites, references, binary)
    result = {"schema": 1, "tool": tool, "source_hashes": hashes,
              "binary_sha256": digest(binary_path), "binary_bytes": len(binary),
              "instruction_count": len(instructions),
              "instruction_bytes": sum(item["length"] for item in instructions),
              "byte_encoded_instruction_count": sum("lengths" in item["source"] for item in instructions),
              "opcodes": {f"{key:02X}": value for key, value in sorted(Counter(item["opcode"] for item in instructions).items())},
              "instruction_mapping": "assembler-resolved source marker pairs; original binary equality verified",
              "instructions": instructions, **audit_edges(instructions)}
    (assembly / "spc_translation.json").write_text(json.dumps(result, separators=(",", ":")) + "\n", encoding="utf-8")
    return result


def emit(output: Path, result: dict) -> None:
    # SPC RAM is writable. Each fixed case checks that its loaded instruction
    # bytes still match this source build before invoking the compiled helper;
    # a mismatch returns false instead of interpreting replacement RAM code.
    def write(name: str, text: str) -> None:
        path = output / name
        if not path.exists() or path.read_text(encoding="utf-8") != text:
            path.write_text(text, encoding="utf-8")

    lines = ['// Generated from exact SPC700 assembly source sites. Do not edit.\n',
             '#include "eb/spc.hpp"\n#include "generated_spc.hpp"\nnamespace eb {\n',
             'bool spc_translated_step(Spc& c) {\n    switch (c.pc) {\n']
    for item in result["instructions"]:
        source = item["source"]
        raw = bytes([item["opcode"]]) + item["operand"].to_bytes(item["length"] - 1, "little")
        guard = " || ".join(f"c.read(0x{item['address'] + offset:04X}) != 0x{value:02X}"
                            for offset, value in enumerate(raw))
        lines.extend([f'    // {source["file"]}:{source["line"]} {source["text"].rstrip(chr(92))}\n',
                      f'    case 0x{item["address"]:04X}: if ({guard}) return false; c.execute<0x{item["opcode"]:02X}>(0x{item["operand"]:04X}, {item["length"]}); return true;\n'])
    lines.append('    default: return false;\n    }\n}\n} // namespace eb\n')
    write("spc_translated.cpp", "".join(lines))
    write("generated_spc.hpp", "#pragma once\nnamespace eb {\nclass Spc;\nbool spc_translated_step(Spc&);\n}\n")
    write("spc_source_map.json", json.dumps(result, separators=(",", ":")) + "\n")
