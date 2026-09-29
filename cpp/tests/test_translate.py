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


class PresentationProfileTests(unittest.TestCase):
    def test_effect_gates_use_each_linked_regions_symbols(self):
        # The real linker emits an enum and a ROM label with the same event
        # name. Exercise that ambiguity and distinct regional RAM layouts;
        # selecting a US timer for JP would silently target unrelated state.
        symbols = translate.defaultdict(lambda: {0x7E0100, 0xC00100, 100})
        cases = (("US", 0x1B9E, (0xAD9E, 0xADA0, 0xADA8, 0xADAA), 860),
                 ("JP", 0x1B44, (0xAF73, 0xAF75, 0xAF7D, 0xAF7F), 856))
        for region, psi, timers, gas_event in cases:
            with self.subTest(region=region):
                symbols["PSI_ANIMATION_STATE"] = {0x7E0000 + psi}
                for name, timer in zip(("GREEN_FLASH_DURATION", "RED_FLASH_DURATION",
                                        "REFLECT_FLASH_DURATION", "GREEN_BACKGROUND_FLASH_DURATION"), timers):
                    symbols[name] = {0x7E0000 + timer}
                symbols["EVENT_860"] = {gas_event, 0xC42000}
                symbols["BUFFER"] = {0x7F0000}
                with mock.patch.object(translate, "linked_symbols", return_value=symbols), \
                     mock.patch.object(translate, "debug_profile", return_value={}):
                    profile = translate.source_profile(Path("unused.dbg"), region)
                self.assertEqual(profile["wram_psi_animation_state"], psi)
                self.assertEqual(profile["wram_flash_timers"], dict(zip(("green", "red", "reflection", "green_background"), timers)))
                self.assertEqual(profile["gas_station_flash_script"], gas_event)
                self.assertEqual(profile["wram_gas_station_base_palette"], 0x10000)
                self.assertEqual(profile["title_background_maps"], {"layer1": 0x58, "layer2": 0} if region == "US" else {"layer1": 0x38, "layer2": 0x3C})

    def test_named_debug_layouts_follow_linked_structure_members(self):
        # The two regional character records have different offsets and sizes.
        # Reordered linker records exercise names rather than positional lookup.
        character_members = {"level": 5, "max_hp": 10, "max_pp": 12, "afflictions": 14,
            "current_hp_fraction": 67, "current_hp": 69, "current_hp_target": 71,
            "current_pp_fraction": 73, "current_pp": 75, "current_pp_target": 77}
        battler_members = {"hp": 17, "hp_target": 19, "hp_max": 21, "pp": 23,
            "pp_target": 25, "pp_max": 27, "afflictions": 29, "consciousness": 12,
            "ally_or_enemy": 14, "npc_id": 15, "id": 0}
        party_members = {"party_members": 3, "party_count": 55,
            "player_controlled_party_count": 56, "walking_style": 23,
            "leader_x_coord": 11, "leader_y_coord": 15}
        for region, shift, record_size in (("US", 0, 95), ("JP", 1, 94)):
            with self.subTest(region=region), tempfile.TemporaryDirectory() as directory:
                lines = ['sym\tid=100,name="MAIN_LOOP",val=0xc0b800',
                         'sym\tparent=100,name="@LOOP_BEGIN",val=0xc0b814']
                records = (("char_struct", record_size, {key: value - shift for key, value in character_members.items()}),
                           ("battler", 78, battler_members), ("game_state", 100, party_members),
                           ("psi_teleport_destination", 31, {"dest_x": 27, "dest_y": 29}))
                for scope, (name, size, members) in enumerate(records):
                    lines.append(f'scope\tid={scope},name="{name}",size={size}')
                    for member, offset in reversed(list(members.items())):
                        lines.append(f'sym\tscope={scope},name="{member}",val={offset}')
                debug = Path(directory) / "linked.dbg"
                debug.write_text("\n".join(lines))
                def offset(name, kind):
                    return {"PARTY_CHARACTERS": 0x9800, "BATTLERS_TABLE": 0x9900,
                            "GAME_STATE": 0x9700, "WAIT_UNTIL_NEXT_FRAME": 0x8756,
                            "ADD_CHAR_TO_PARTY": 0x228f8, "REMOVE_CHAR_FROM_PARTY": 0x229bb}.get(name, 0x1234)
                profile = translate.debug_profile(debug, region, offset)
                self.assertEqual(profile["character_layout"], {"table_address": 0x9800,
                    "entry_size": record_size, **{key: value - shift for key, value in character_members.items()}})
                self.assertEqual(profile["battler_layout"], {"table_address": 0x9900,
                    "entry_size": 78, **battler_members})
                self.assertEqual(profile["party_state"]["leader_x"], 0x970b)
                self.assertEqual(profile["party_state"]["leader_y"], 0x970f)
                self.assertEqual(profile["gameplay_routines"]["add_party_character"], 0xc228f8)
                self.assertEqual(profile["gameplay_routines"]["remove_party_character"], 0xc229bb)
                self.assertEqual(profile["gameplay_timing"], {"entity_update_call": 0xc0b818,
                    "entity_update_return": 0xc0b81c, "wait_for_next_frame": 0xc08756})

    def test_profile_emission_rejects_different_regional_schemas(self):
        with tempfile.TemporaryDirectory() as directory:
            for japanese in ({"coordinates": {"y": 20}},
                             {"coordinates": {"y": 20, "x": 10}}):
                with self.subTest(japanese=japanese), self.assertRaisesRegex(ValueError, "schemas differ"):
                    translate.emit_profiles(Path(directory), {
                        "US": {"coordinates": {"x": 1, "y": 2}}, "JP": japanese})


class ProgramNamingTests(unittest.TestCase):
    def test_names_preserve_source_evidence_and_mark_unresolved_routines(self):
        known = translate.Source("src/misc/battlebgs/generate_frame.asm", 1, "RTL", False)
        self.assertEqual(translate.routine_identity(known), (
            "miscellaneous", "execute_miscellaneous_battle_backgrounds_generate_frame_instruction", "source_named"))
        unknown = translate.Source("src/unknown/C0/C0DB0F.asm", 1, "RTL", False)
        self.assertEqual(translate.routine_identity(unknown), (
            "unresolved_c0", "execute_unresolved_c0_c0db0f_instruction", "unresolved"))

    def test_reorganization_retains_every_opcode_operand_and_runtime_width(self):
        items = [translate.Instruction(0xC08000, 0xA9, 0x1234, 3,
                    translate.Source("include/macros.asm", 10, "LDA #value", True), 0x1234,
                    routine_source=translate.Source("src/battle/calculate_damage.asm", 12, "load_damage $1234", False)),
                 translate.Instruction(0xC08003, 0x6B, 0, 1,
                    translate.Source("src/overworld/move_party.asm", 20, "RTL", False)),
                 translate.Instruction(0xC28000, 0xEA, 0, 1,
                    translate.Source("src/unknown/C2/C28000.asm", 30, "NOP", False))]
        with tempfile.TemporaryDirectory() as directory:
            output = Path(directory)
            translate.emit_program_instructions(output, items, "eb::us")
            index = json.loads((output / "program_index.json").read_text())
            self.assertEqual(index["instruction_count"], 3)
            self.assertEqual(index["classification_counts"], {"source_named": 2, "unresolved": 1})
            self.assertEqual(index["instruction_stream_sha256"], translate.instruction_stream_digest(items))
            self.assertEqual(sum(row["instruction_count"] for row in index["routines"]), 3)
            cases = "\n".join(path.read_text() for path in output.glob("program/*.cpp"))
            self.assertIn("case 0xC08000: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x001234, 3);", cases)
            self.assertIn("case 0xC08003: cpu.execute_instruction<0x6B>(0x000000, 1);", cases)
            self.assertIn("case 0xC28000: cpu.execute_instruction<0xEA>(0x000000, 1);", cases)
            self.assertIn("Macro caller: src/battle/calculate_damage.asm:12", cases)
            self.assertFalse(list(output.glob("translated_bank_*.cpp")))
            # A renamed source removes only its previous owned generated file.
            (output / "independent.cpp").write_text("// user-owned source\n")
            translate.emit_program_instructions(output, items[1:], "eb::us")
            self.assertFalse((output / "program/battle_01.cpp").exists())
            self.assertTrue((output / "independent.cpp").exists())

    def test_source_identifier_collision_is_rejected(self):
        items = [translate.Instruction(0xC08000 + n, 0xEA, 0, 1,
                    translate.Source(name, 1, "NOP", False))
                 for n, name in enumerate(("src/system/a-b.asm", "src/system/a_b.asm"))]
        with tempfile.TemporaryDirectory() as directory:
            with self.assertRaisesRegex(ValueError, "collide"):
                translate.emit_program_instructions(Path(directory), items, "eb")

    def test_frozen_presentation_overrides_require_the_exact_original_site(self):
        for version, overrides in translate.FROZEN_PRESENTATION_OVERRIDES.items():
            items = [translate.Instruction(row["address"], *row["expected"][:3],
                     translate.Source("fixture.asm", 1, "NOP", False), row["expected"][3])
                     for row in overrides]
            actual = translate.apply_frozen_program_overrides(version, items)
            self.assertEqual([[item.opcode, item.operand, item.length, item.wide_operand] for item in actual],
                             [row["frozen"] for row in sorted(overrides, key=lambda row: row["address"])])
            items[0] = replace(items[0], operand=items[0].operand ^ 1)
            with self.assertRaisesRegex(ValueError, "source changed"):
                translate.apply_frozen_program_overrides(version, items)


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

    def test_macro_ownership_uses_the_linked_call_span(self):
        expanded = [item for item in self.instructions if item.source.macro_expansion]
        self.assertTrue(expanded)
        for item in expanded:
            self.assertEqual(item.routine_source.file, "fixture.asm")
            self.assertEqual(item.routine_source.text, "start: outer $1234")
        variants, _ = translate.expand_mode_variants(self.instructions, self.rom)
        by_address = {item.address: item for item in variants}
        self.assertEqual(by_address[0xC08004].routine_source, by_address[0xC08002].routine_source)

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
        translate.emit_profiles(generated, {"US": {"wram_battle_mode_flag": 11, "gameplay_timing": {"entity_update_call": 101, "entity_update_return": 105, "wait_for_next_frame": 99}}, "JP": {"wram_battle_mode_flag": 22, "gameplay_timing": {"entity_update_call": 201, "entity_update_return": 205, "wait_for_next_frame": 199}}})
        (self.root / "eb").mkdir()
        for header in ("asset_store.hpp", "game_version.hpp"):
            shutil.copyfile(TRANSLATOR.parents[1] / "include/eb" / header, self.root / "eb" / header)
        (self.root / "eb/main_cpu_65816.hpp").write_text("""#pragma once
#include <cstdint>
#include "game_version.hpp"
namespace eb { class MainCpu65816 { public:
GameVersion game_version=GameVersion::US;
std::uint32_t program_counter=0xC08002,operand=0;
std::uint8_t status_register=0;
template<std::uint8_t Op> void execute_instruction(std::uint32_t value,std::uint8_t) { operand=value; }
}; }
""")
        (self.root / "multi.cpp").write_text("""#include "eb/main_cpu_65816.hpp"
#include "generated_code.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <cassert>
int main() {
 eb::MainCpu65816 c;
 assert(eb::execute_translated_main_instruction(c) && c.operand==0x1234);
 c.game_version=eb::GameVersion::JP;
 assert(eb::execute_translated_main_instruction(c) && c.operand==0x5678);
 assert(eb::rom_data(eb::GameVersion::US)[3]==0x34);
 assert(eb::rom_data(eb::GameVersion::JP)[3]==0x78);
 assert(eb::asset_profiles().size()==2);
 for(const auto& profile:eb::asset_profiles()) {
   assert(profile.layout.ranges.size()==1 && profile.layout.ranges[0].offset==15);
   for(auto range:profile.layout.ranges) for(unsigned i=0;i<range.size;++i) assert(profile.layout.code_image[range.offset+i]==0);
 }
 assert(eb::source_profile(eb::GameVersion::US).wram_battle_mode_flag==11);
 assert(eb::source_profile(eb::GameVersion::JP).wram_battle_mode_flag==22);
 assert(eb::source_profile(eb::GameVersion::US).gameplay_timing.entity_update_call==101);
 assert(eb::source_profile(eb::GameVersion::JP).gameplay_timing.entity_update_return==205);
}
""")
        translate.run(["c++", "-std=c++20", "-I", str(self.root), "-I", str(generated),
                       "multi.cpp", *(str(path) for path in sorted(generated.rglob("*.cpp"))),
                       "-o", "multi"], self.root)
        translate.run([str(self.root / "multi")], self.root)

    @unittest.skipUnless(shutil.which("c++"), "C++ compiler required")
    def test_generated_dispatch_and_linked_assets_execute(self):
        generated = self.root / "generated"
        # Deliberately interleave source owners within one ROM page. Every
        # boundary and hole must still dispatch by its original fixed address.
        paths = ("src/system/test_routine.asm", "src/battle/test_routine.asm", "src/unknown/C0/C08000.asm")
        items = [replace(item, routine_source=translate.Source(paths[number % 3], number + 1, item.source.text, False))
                 for number, item in enumerate(self.instructions)]
        translate.emit(generated, items, self.rom, self.provenance)
        (self.root / "eb").mkdir()
        shutil.copyfile(TRANSLATOR.parents[1] / "include/eb/asset_store.hpp", self.root / "eb/asset_store.hpp")
        shutil.copyfile(TRANSLATOR.parents[1] / "include/eb/game_version.hpp", self.root / "eb/game_version.hpp")
        (self.root / "eb/main_cpu_65816.hpp").write_text("""#pragma once
#include <cstdint>
namespace eb {
class MainCpu65816 {
public:
    std::uint32_t program_counter = 0;
    std::uint8_t status_register = 0;
    std::uint8_t opcode = 0, length = 0;
    std::uint32_t operand = 0;
    template<std::uint8_t Op> void execute_instruction(std::uint32_t value, std::uint8_t size) {
        opcode = Op; operand = value; length = size;
    }
};
}
""")
        (self.root / "main.cpp").write_text("""#include <initializer_list>
#include "eb/main_cpu_65816.hpp"
#include "generated_code.hpp"
#include "generated_assets.hpp"
#include <cassert>
int main() {
    eb::MainCpu65816 c;
    for (auto address : {0xC08002u, 0x008002u, 0x808002u, 0x408002u}) {
        c.program_counter = address;
        assert(eb::execute_translated_main_instruction(c));
        assert(c.opcode == 0xA9 && c.operand == 0x1234 && c.length == 3);
        assert(c.program_counter == address); // preserve caller's program bank
    }
    for (auto address : {0xC0800Fu, 0x7E8002u, 0x000002u}) {
        c.program_counter = address;
        assert(!eb::execute_translated_main_instruction(c));
    }
    assert(eb::canonical_rom_address(0xF08002) == 0xE08002);
    c.program_counter = 0xC08016;
    c.status_register = 0;
    assert(eb::execute_translated_main_instruction(c));
    assert(c.opcode == 0x29 && c.operand == 0x1800 && c.length == 3);
    c.status_register = 0x20;
    assert(eb::execute_translated_main_instruction(c));
    assert(c.opcode == 0x29 && c.operand == 0 && c.length == 2);
    c.program_counter = 0xC0801A;
    c.status_register = 0;
    assert(eb::execute_translated_main_instruction(c));
    assert(c.opcode == 0xC9 && c.operand == 0 && c.length == 3);
    c.status_register = 0x20;
    assert(eb::execute_translated_main_instruction(c));
    assert(c.opcode == 0xC9 && c.operand == 0 && c.length == 2);
    c.program_counter = 0xC0801C;
    assert(eb::execute_translated_main_instruction(c));
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
                       "main.cpp", *(str(path) for path in sorted(generated.rglob("*.cpp"))),
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
        (self.root / "eb/spc700_audio_cpu.hpp").write_text("""#pragma once
#include <array>
#include <cstdint>
namespace eb {
class Spc700AudioCpu {
public:
    std::uint16_t program_counter = 0, operand = 0;
    std::uint8_t opcode = 0, length = 0;
    std::array<std::uint8_t, 65536> audio_ram{};
    std::uint8_t read_byte(std::uint16_t address) { return audio_ram[address]; }
    template<std::uint8_t Op> void execute_instruction(std::uint16_t value, std::uint8_t size) {
        opcode = Op; operand = value; length = size;
    }
};
}
""")
        (self.root / "main.cpp").write_text("""#include "eb/spc700_audio_cpu.hpp"
#include "generated_audio_program.hpp"
#include <cassert>
int main() {
    eb::Spc700AudioCpu c;
    c.audio_ram[0x0500] = 0xE8;
    c.audio_ram[0x0501] = 5;
    c.program_counter = 0x0500;
    assert(eb::execute_translated_audio_instruction(c));
    assert(c.opcode == 0xE8 && c.operand == 5 && c.length == 2);
    c.audio_ram[0x0500] = 0xEA;
    assert(!eb::execute_translated_audio_instruction(c));
    c.audio_ram[0x0500] = 0xE8;
    c.audio_ram[0x0501] = 6;
    assert(!eb::execute_translated_audio_instruction(c));
    c.program_counter = 0x0506;
    assert(!eb::execute_translated_audio_instruction(c));
}
""")
        spc700.command(["c++", "-std=c++20", "-I", str(self.root), "-I", str(generated),
                        "main.cpp", str(generated / "audio_driver_instructions.cpp"), "-o", "verify"], self.root)
        spc700.command([str(self.root / "verify")], self.root)


if __name__ == "__main__":
    unittest.main()
