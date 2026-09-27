"""Integration checks for exact assembly-to-C++ source translation."""

import importlib.util
from dataclasses import replace
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest
from unittest import mock


TRANSLATOR = Path(__file__).resolve().parents[1] / "tools/translate.py"
sys.path.insert(0, str(TRANSLATOR.parent))
SPEC = importlib.util.spec_from_file_location("eb_translate", TRANSLATOR)
translate = importlib.util.module_from_spec(SPEC)
sys.modules[SPEC.name] = translate
SPEC.loader.exec_module(translate)
SPC_SPEC = importlib.util.spec_from_file_location("eb_spc700", TRANSLATOR.parent / "spc700.py")
spc700 = importlib.util.module_from_spec(SPC_SPEC)
SPC_SPEC.loader.exec_module(spc700)


class AssetPlaceholderTests(unittest.TestCase):
    def test_manifest_creates_zero_assets_and_address_only_text_symbols(self):
        with tempfile.TemporaryDirectory(prefix="eb-cpp-assets-test-") as directory:
            root = Path(directory)
            (root / "src/bin").mkdir(parents=True)
            (root / "include").mkdir()
            (root / "src/bin/retail.bin").write_bytes(b"THIS MUST NEVER BE COPIED")
            (root / "src/program.asm").write_text("RTL\n")
            (root / "snes.cfg").write_text("; fixture\n")
            (root / "earthbound.yml").write_text("""---
dumpEntries:
- subdir: graphics
  name: scene
  offset: 0x100
  size: 7
  extension: gfx
  compressed: true
- subdir: US/text_data
  name: WORDS
  offset: 0x200
  size: 8
  extension: ebtxt
  compressed: false
renameLabels:
  WORDS:
    0x0: FIRST_TEXT
    # 0x1: unused_label
    0x5: SECOND_TEXT
compressedTextStrings:
- 'RETAIL TEXT IS NOT CONSUMED'
""")
            mirror = root / "mirror"
            result = translate.asset_layout.source_tree(root, mirror)
            self.assertEqual(result["placeholder_count"], 2)
            self.assertFalse(result["retail_assets_read"])
            self.assertFalse((mirror / "src/bin/retail.bin").exists())
            self.assertEqual((mirror / "src/bin/graphics/scene.gfx.lzhal").read_bytes(), bytes(7))
            text = (mirror / "src/bin/US/text_data/WORDS.ebtxt").read_text()
            self.assertIn("FIRST_TEXT:\n.RES 5, 0\n", text)
            self.assertIn("SECOND_TEXT:\n.RES 3, 0\n", text)
            self.assertNotIn("RETAIL", text)

    def test_japanese_explicit_text_boundary_byte_is_not_duplicated(self):
        with tempfile.TemporaryDirectory(prefix="eb-cpp-jp-assets-test-") as directory:
            root = Path(directory)
            bank = root / "src/bankconfig/JP/bank09.asm"
            bank.parent.mkdir(parents=True)
            bank.write_text('LOCALEINCLUDE "text_data/EGLOBAL.ebtxt"\n; restored by source\n.BYTE $40\nLOCALEINCLUDE "text_data/ESYSTEM.ebtxt"\n')
            (root / "mother2.yml").write_text("""dumpEntries:
- subdir: JP/text_data
  name: EGLOBAL
  offset: 0x90000
  size: 8
  extension: ebtxt
  compressed: false
renameLabels:
  EGLOBAL:
    0x0: GLOBAL_TEXT
""")
            report = translate.asset_layout.placeholders(root, root / "mirror", "mother2.yml")
            placeholder = (root / "mirror/src/bin/JP/text_data/EGLOBAL.ebtxt").read_text()
            self.assertIn(".RES 7, 0", placeholder)
            self.assertEqual(report["source_byte_reinsertions"][0]["directive"], ".BYTE $40")
            bank.write_text(bank.read_text().replace(".BYTE $40", ".BYTE $41"))
            with self.assertRaisesRegex(ValueError, "source reinsertion changed"):
                translate.asset_layout.placeholders(root, root / "mirror", "mother2.yml")


@unittest.skipUnless(shutil.which("ca65") and shutil.which("ld65"), "ca65 and ld65 required")
class TranslationTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory(prefix="eb-cpp-translate-test-")
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)
        (self.root / "fixture.asm").write_text(""".segment "BANK00B"
.smart
.macro inner target
    LDA #target
    STA $20
.endmacro
.macro outer target
    REP #$30
    inner target
    SEP #$20
    LDA #$7F
.endmacro
start: outer $1234
    JMP f:start
    .byte $A9, $12, $34 ; Deliberately instruction-looking data.
.if 0
    NOP ; This inactive source instruction must not become executable.
.endif
.repeat 3
    INC A
.endrepeat
end: RTL
.a8
bit_trick: AND #0
    CLC
    RTL
compare_trick: CMP #0
    BRK
    BEQ compare_end
    NOP
    NOP
    NOP
    NOP
compare_end: RTL
""")
        (self.root / "link.cfg").write_text("""MEMORY {
    ROM: start = $C08000, size = $8000, file = %O, type = ro;
}
SEGMENTS {
    BANK00B: load = ROM, type = ro;
}
""")
        translate.run(["ca65", "-g", "--cpu", "65816", "-o", "fixture.o", "fixture.asm"], self.root)
        translate.run(["ld65", "-C", "link.cfg", "--dbgfile", "fixture.dbg",
                       "-o", "fixture.sfc", "fixture.o"], self.root)
        self.rom = (self.root / "fixture.sfc").read_bytes()
        self.instructions, self.provenance = translate.parse_translation(
            self.root, self.root / "fixture.dbg", self.rom)

    def test_nested_macro_and_repeat_expansions_are_exact(self):
        self.assertEqual([(item.address, item.opcode, item.operand, item.length)
                          for item in self.instructions], [
            (0xC08000, 0xC2, 0x30, 2),
            (0xC08002, 0xA9, 0x1234, 3),
            (0xC08005, 0x85, 0x20, 2),
            (0xC08007, 0xE2, 0x20, 2),
            (0xC08009, 0xA9, 0x7F, 2),
            (0xC0800B, 0x5C, 0xC08000, 4),
            (0xC08012, 0x1A, 0, 1),
            (0xC08013, 0x1A, 0, 1),
            (0xC08014, 0x1A, 0, 1),
            (0xC08015, 0x6B, 0, 1),
            (0xC08016, 0x29, 0, 2),
            (0xC08018, 0x18, 0, 1),
            (0xC08019, 0x6B, 0, 1),
            (0xC0801A, 0xC9, 0, 2),
            (0xC0801C, 0x00, 0xF0, 2),
            (0xC0801D, 0xF0, 4, 2),
            (0xC0801F, 0xEA, 0, 1),
            (0xC08020, 0xEA, 0, 1),
            (0xC08021, 0xEA, 0, 1),
            (0xC08022, 0xEA, 0, 1),
            (0xC08023, 0x6B, 0, 1),
        ])
        self.assertTrue(all(item.source.macro_expansion for item in self.instructions[:5]))
        self.assertEqual(self.instructions[1].source.line, 4)
        self.assertFalse(self.instructions[5].source.macro_expansion)

    def test_source_and_linked_byte_disagreement_is_rejected(self):
        corrupted = bytearray(self.rom)
        corrupted[2] = 0xEA
        with self.assertRaisesRegex(ValueError, "Opcode/source mismatch"):
            translate.parse_translation(self.root, self.root / "fixture.dbg", corrupted)

    def test_preprocessor_instruction_alias_and_macro_variant(self):
        (self.root / "alias.asm").write_text(""".segment "BANK00B"
.macro BEQL target
    BNE :+
    JMP target
:
.endmacro
.ifdef LONG_BRANCH
    .define _BEQL BEQL
.else
    .define _BEQL BEQ
.endif
    CMP #$01
    _BEQL finished
    NOP
finished: RTL
""")
        for long_branch in (False, True):
            command = ["ca65", "-g", "--cpu", "65816", "-o", "alias.o", "alias.asm"]
            if long_branch:
                command.extend(["-D", "LONG_BRANCH"])
            translate.run(command, self.root)
            translate.run(["ld65", "-C", "link.cfg", "--dbgfile", "alias.dbg",
                           "-o", "alias.sfc", "alias.o"], self.root)
            instructions, _ = translate.parse_translation(self.root, self.root / "alias.dbg",
                                                           (self.root / "alias.sfc").read_bytes())
            self.assertEqual([item.opcode for item in instructions],
                             [0xC9, 0xD0, 0x4C, 0xEA, 0x6B] if long_branch else [0xC9, 0xF0, 0xEA, 0x6B])
            translate.audit_static_edges(instructions)

    def test_mixed_data_is_not_mistaken_for_executable_code(self):
        self.assertFalse({0xC0800F, 0xC08010, 0xC08011} & {item.address for item in self.instructions})
        self.assertEqual(sum(item.opcode == 0xEA for item in self.instructions), 4)

    def test_code_template_excludes_every_noninstruction_byte(self):
        code, compiled, imported = translate.code_image(self.instructions, self.rom)
        self.assertEqual(imported, [(15, 3)])
        self.assertEqual(code[15:18], bytes(3))
        self.assertEqual(self.rom[15:18], bytes.fromhex("A9 12 34"))
        rebuilt = bytearray(code)
        for offset, size in imported:
            rebuilt[offset:offset + size] = self.rom[offset:offset + size]
        self.assertEqual(rebuilt, self.rom)
        self.assertEqual(sum(size for _, size in compiled) + sum(size for _, size in imported), len(self.rom))

    def test_missing_control_flow_sites_are_rejected(self):
        audited = translate.audit_static_edges(self.instructions)
        self.assertEqual(audited["verified_direct_control_flow_edges"], 2)
        with self.assertRaisesRegex(ValueError, "Untranslated static target"):
            translate.audit_static_edges(self.instructions[1:])
        with self.assertRaisesRegex(ValueError, "Untranslated fall-through"):
            translate.audit_static_edges(self.instructions[:1] + self.instructions[2:])

    def test_alternate_immediate_entries_are_static_and_source_bounded(self):
        expanded, report = translate.expand_mode_variants(self.instructions, self.rom)
        by_address = {item.address: item for item in expanded}
        # The narrow interpretation of the source's 16-bit LDA continues at
        # its second operand byte: $12, an ORA (direct) instruction.
        overlap = by_address[0xC08004]
        self.assertEqual((overlap.opcode, overlap.operand, overlap.length), (0x12, 0x85, 2))
        self.assertEqual(overlap.overlap_origin, 0xC08002)
        self.assertNotIn(0xC0800F, by_address)  # remains a data declaration
        self.assertGreater(report["overlapping_instruction_count"], 0)

    @unittest.skipUnless(shutil.which("c++"), "C++ compiler required")
    def test_two_compiled_profiles_route_program_and_asset_layout_together(self):
        generated = self.root / "generated"
        translate.emit(generated / "us", self.instructions, self.rom, {}, namespace="eb::us")
        jp_rom = bytearray(self.rom)
        jp_rom[3:5] = bytes.fromhex("78 56")
        jp_instructions = [replace(item, operand=0x5678, wide_operand=0x5678)
                           if item.address == 0xC08002 else item for item in self.instructions]
        translate.emit(generated / "jp", jp_instructions, jp_rom, {}, namespace="eb::jp")
        translate.emit_profiles(generated, {"US": {"wram_battle_flag": 11}, "JP": {"wram_battle_flag": 22}})
        (self.root / "eb").mkdir()
        for header in ("asset_store.hpp", "game_version.hpp"):
            shutil.copyfile(TRANSLATOR.parents[1] / "include/eb" / header, self.root / "eb" / header)
        (self.root / "eb/cpu.hpp").write_text("""#pragma once
#include <cstdint>
#include "game_version.hpp"
namespace eb { class Cpu { public:
GameVersion version=GameVersion::US;
std::uint32_t pc=0xC08002,operand=0;
std::uint8_t p=0;
template<std::uint8_t Op> void execute(std::uint32_t value,std::uint8_t) { operand=value; }
}; }
""")
        (self.root / "multi.cpp").write_text("""#include "eb/cpu.hpp"
#include "generated_code.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <cassert>
int main() {
 eb::Cpu c;
 assert(eb::translated_step(c) && c.operand==0x1234);
 c.version=eb::GameVersion::JP;
 assert(eb::translated_step(c) && c.operand==0x5678);
 assert(eb::rom_data(eb::GameVersion::US)[3]==0x34);
 assert(eb::rom_data(eb::GameVersion::JP)[3]==0x78);
 assert(eb::asset_profiles().size()==2);
 for(const auto& profile:eb::asset_profiles()) {
   assert(profile.layout.ranges.size()==1 && profile.layout.ranges[0].offset==15);
   for(auto range:profile.layout.ranges) for(unsigned i=0;i<range.size;++i) assert(profile.layout.code_image[range.offset+i]==0);
 }
 assert(eb::source_profile(eb::GameVersion::US).wram_battle_flag==11);
 assert(eb::source_profile(eb::GameVersion::JP).wram_battle_flag==22);
}
""")
        translate.run(["c++", "-std=c++20", "-I", str(self.root), "-I", str(generated),
                       "multi.cpp", *(str(path) for path in sorted(generated.rglob("*.cpp"))),
                       "-o", "multi"], self.root)
        translate.run([str(self.root / "multi")], self.root)

    @unittest.skipUnless(shutil.which("c++"), "C++ compiler required")
    def test_generated_dispatch_and_linked_assets_execute(self):
        generated = self.root / "generated"
        translate.emit(generated, self.instructions, self.rom, self.provenance)
        (self.root / "eb").mkdir()
        shutil.copyfile(TRANSLATOR.parents[1] / "include/eb/asset_store.hpp", self.root / "eb/asset_store.hpp")
        shutil.copyfile(TRANSLATOR.parents[1] / "include/eb/game_version.hpp", self.root / "eb/game_version.hpp")
        (self.root / "eb/cpu.hpp").write_text("""#pragma once
#include <cstdint>
namespace eb {
class Cpu {
public:
    std::uint32_t pc = 0;
    std::uint8_t p = 0;
    std::uint8_t opcode = 0, length = 0;
    std::uint32_t operand = 0;
    template<std::uint8_t Op> void execute(std::uint32_t value, std::uint8_t size) {
        opcode = Op; operand = value; length = size;
    }
};
}
""")
        (self.root / "main.cpp").write_text("""#include <initializer_list>
#include "eb/cpu.hpp"
#include "generated_code.hpp"
#include "generated_assets.hpp"
#include <cassert>
int main() {
    eb::Cpu c;
    for (auto address : {0xC08002u, 0x008002u, 0x808002u, 0x408002u}) {
        c.pc = address;
        assert(eb::translated_step(c));
        assert(c.opcode == 0xA9 && c.operand == 0x1234 && c.length == 3);
        assert(c.pc == address); // preserve caller's program bank
    }
    for (auto address : {0xC0800Fu, 0x7E8002u, 0x000002u}) {
        c.pc = address;
        assert(!eb::translated_step(c));
    }
    assert(eb::canonical_rom_address(0xF08002) == 0xE08002);
    c.pc = 0xC08016;
    c.p = 0;
    assert(eb::translated_step(c));
    assert(c.opcode == 0x29 && c.operand == 0x1800 && c.length == 3);
    c.p = 0x20;
    assert(eb::translated_step(c));
    assert(c.opcode == 0x29 && c.operand == 0 && c.length == 2);
    c.pc = 0xC0801A;
    c.p = 0;
    assert(eb::translated_step(c));
    assert(c.opcode == 0xC9 && c.operand == 0 && c.length == 3);
    c.p = 0x20;
    assert(eb::translated_step(c));
    assert(c.opcode == 0xC9 && c.operand == 0 && c.length == 2);
    c.pc = 0xC0801C;
    assert(eb::translated_step(c));
    assert(c.opcode == 0x00 && c.operand == 0xF0 && c.length == 2);
    assert(eb::translated_instruction_count() == 21);
    assert(eb::rom_size() == 36 && eb::rom_data()[2] == 0xA9);
    assert(eb::rom_data()[15] == 0 && eb::rom_data()[16] == 0 && eb::rom_data()[17] == 0);
    auto layout = eb::asset_layout();
    assert(layout.code_image.data() == eb::rom_data());
    assert(layout.ranges.size() == 1 && layout.ranges[0].offset == 15 && layout.ranges[0].size == 3);
}
""")
        translate.run(["c++", "-std=c++20", "-I", str(self.root), "-I", str(generated),
                       "main.cpp", *(str(path) for path in sorted(generated.glob("*.cpp"))),
                       "-o", "verify"], self.root)
        translate.run([str(self.root / "verify")], self.root)
        coverage = json.loads((generated / "coverage.json").read_text())
        self.assertEqual(coverage["instruction_count"], 21)
        self.assertEqual(coverage["instruction_bytes"], 34)


SPCASM = (os.environ.get("SPCASM") or shutil.which("spcasm")
          or str(TRANSLATOR.parents[2] / "build/cpp/tools/spcasm-target/release/spcasm"))


@unittest.skipUnless(Path(SPCASM).is_file(), "SPC assembler unavailable; set SPCASM to enable SPC emitter fixtures")
class SpcTranslationTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory(prefix="eb-cpp-spc-test-")
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)
        source = self.root / "src/spc700"
        source.mkdir(parents=True)
        (source / "globals.spc700.s").write_text("org 0\nVAR: DB 0\n")
        (source / "main.spc700.s").write_text("""INCLUDE "globals.spc700.s"
org $0500
start: MOV A, #5
    MOV VAR, A
    BRA done
    DB $E8, $44 ; instruction-like data remains data
done: RET
INCLUDE "sfx.spc700.s"
""")
        (source / "sfx.spc700.s").write_text("""macro tone(value)
    DB <value>
endmacro
%tone($10)
""")
        self.assembly = self.root / "assembly"
        with mock.patch.dict(os.environ, {"SPCASM": SPCASM}):
            self.result = spc700.build(self.root, self.assembly)

    def test_source_markers_preserve_binary_and_distinguish_data(self):
        original = (self.assembly / "main.spc700.bin").read_bytes()
        annotated = (self.assembly / "spc-annotated.bin").read_bytes()
        self.assertEqual(annotated, original + b"\0")
        sites = self.result["instructions"]
        self.assertEqual([(site["address"], site["opcode"], site["operand"], site["length"])
                          for site in sites], [
            (0x0500, 0xE8, 5, 2), (0x0502, 0xC4, 0, 2),
            (0x0504, 0x2F, 2, 2), (0x0508, 0x6F, 0, 1)])
        self.assertEqual(sites[0]["source"]["line"], 3)

    def test_missing_static_target_is_rejected(self):
        with self.assertRaisesRegex(ValueError, "Untranslated SPC control-flow target"):
            spc700.audit_edges(self.result["instructions"][:-1])

    def test_explicit_byte_encoded_source_code_is_translated(self):
        path = self.root / "src/spc700/main.spc700.s"
        with path.open("a") as handle:
            handle.write("\n" + next(iter(spc700.BYTE_CODE)) + "\nDB 0\norg $0772\nRET\n")
        with mock.patch.dict(os.environ, {"SPCASM": SPCASM}):
            result = spc700.build(self.root, self.assembly)
        self.assertEqual(result["byte_encoded_instruction_count"], 6)
        raw_code = [site for site in result["instructions"] if "lengths" in site["source"]]
        self.assertEqual([(site["opcode"], site["operand"], site["length"]) for site in raw_code],
                         [(0xE4, 0x04, 2), (0x68, 0x1C, 2), (0xD0, 0x05, 2),
                          (0xE8, 0x02, 2), (0x3F, 0x0772, 3), (0x6F, 0, 1)])

    @unittest.skipUnless(shutil.which("c++"), "C++ compiler required")
    def test_generated_spc_dispatch_compiles_and_selects_source_sites(self):
        generated = self.root / "generated"
        generated.mkdir()
        spc700.emit(generated, self.result)
        (self.root / "eb").mkdir()
        (self.root / "eb/spc.hpp").write_text("""#pragma once
#include <array>
#include <cstdint>
namespace eb {
class Spc {
public:
    std::uint16_t pc = 0, operand = 0;
    std::uint8_t opcode = 0, length = 0;
    std::array<std::uint8_t, 65536> ram{};
    std::uint8_t read(std::uint16_t address) { return ram[address]; }
    template<std::uint8_t Op> void execute(std::uint16_t value, std::uint8_t size) {
        opcode = Op; operand = value; length = size;
    }
};
}
""")
        (self.root / "main.cpp").write_text("""#include "eb/spc.hpp"
#include "generated_spc.hpp"
#include <cassert>
int main() {
    eb::Spc c;
    c.ram[0x0500] = 0xE8;
    c.ram[0x0501] = 5;
    c.pc = 0x0500;
    assert(eb::spc_translated_step(c));
    assert(c.opcode == 0xE8 && c.operand == 5 && c.length == 2);
    c.ram[0x0500] = 0xEA;
    assert(!eb::spc_translated_step(c));
    c.ram[0x0500] = 0xE8;
    c.ram[0x0501] = 6;
    assert(!eb::spc_translated_step(c));
    c.pc = 0x0506;
    assert(!eb::spc_translated_step(c));
}
""")
        spc700.command(["c++", "-std=c++20", "-I", str(self.root), "-I", str(generated),
                        "main.cpp", str(generated / "spc_translated.cpp"), "-o", "verify"], self.root)
        spc700.command([str(self.root / "verify")], self.root)


if __name__ == "__main__":
    unittest.main()
