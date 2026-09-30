"""Ownership boundaries and collision checks against both shipped source indices."""

import json
from pathlib import Path
import sys
import unittest


ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "cpp/tools"))
from game_runtime_ownership import classify_source, routine_path


class GameRuntimeOwnershipTests(unittest.TestCase):
    def test_named_runtime_domains(self):
        cases = {
            "src/text/ccs/set_tpt_entity_movement.asm": "dialogue/commands",
            "src/text/create_window.asm": "dialogue/windows",
            "src/text/hp_pp_window/draw.asm": "dialogue/windows/hp_pp",
            "src/text/print_letter.asm": "dialogue/printing",
            "src/text/coffee_tea_scene.asm": "cutscenes/overworld",
            "src/intro/file_select/open_sound_menu.asm": "cutscenes/intro/file_select",
            "src/intro/gas_station.asm": "cutscenes/intro",
            "src/ending/play_credits.asm": "cutscenes/ending",
            "src/overworld/actionscript/run_actionscript_frame.asm": "entities/scripts",
            "src/overworld/actionscript/script/06.asm": "entities/scripts/commands",
            "src/overworld/create_entity.asm": "entities/lifecycle",
            "src/overworld/velocity_store.asm": "entities/movement",
            "src/overworld/npc_collision_check.asm": "entities/collision",
            "src/overworld/process_queued_interactions.asm": "npcs/interaction",
            "src/battle/init_overworld.asm": "enemies/encounters",
            "src/battle/main_battle_routine.asm": "enemies/battle",
            "src/battle/choose_target.asm": "enemies/battle/targeting",
            "src/battle/actions/call_for_help.asm": "enemies/actions",
        }
        for source, expected in cases.items():
            with self.subTest(source=source):
                self.assertEqual(classify_source(source), expected)

    def test_regional_variants_share_ownership_not_file_identity(self):
        for source in ("src/text/print_letter", "src/intro/file_select/open_sound_menu",
                       "src/ending/copy_cast_name_tilemap", "src/unknown/C0/C0222B"):
            with self.subTest(source=source):
                self.assertEqual(classify_source(source + ".asm"), classify_source(source + "-jp.asm"))
                self.assertNotEqual(routine_path(source + ".asm"), routine_path(source + "-jp.asm"))
        self.assertEqual(routine_path("src/unknown/C0/C0222B-jp.asm"),
                         "npcs/placement/unknown_c0222b-jp.cpp")
        self.assertEqual(routine_path("src/overworld/open_menu-proto.asm"),
                         "entities/overworld_support/open_menu-proto.cpp")

    def test_unresolved_helpers_retain_address_and_need_explicit_evidence(self):
        self.assertEqual(routine_path("src/unknown/C0/C09506.asm"),
                         "entities/scripts/unknown_c09506.cpp")
        self.assertEqual(routine_path("src/unknown/C0/C02668.asm"),
                         "enemies/placement/unknown_c02668.cpp")
        self.assertIsNone(classify_source("src/unknown/C0/C09507.asm"))
        self.assertIsNone(classify_source("src/unknown/C1/C09506.asm"))

    def test_proven_dialogue_and_scene_support_is_included_without_guessed_names(self):
        for source, folder in {
            "src/unknown/C1/C14012.asm": "dialogue/state_support",
            "src/unknown/C1/C1AD0A.asm": "dialogue/control_support",
            "src/unknown/C1/C107AF-jp.asm": "dialogue/window_support",
            "src/unknown/C2/C20ABC.asm": "dialogue/window_support",
            "src/unknown/C4/C445E1.asm": "dialogue/layout_support",
            "src/unknown/C4/C437B8_redirect.asm": "dialogue/layout_support",
            "src/unknown/C1/C1BEFC.asm": "cutscenes/shared_support",
            "src/unknown/C1/C1004E.asm": "cutscenes/shared_support",
        }.items():
            with self.subTest(source=source):
                self.assertEqual(classify_source(source), folder)
                self.assertEqual(routine_path(source), f"{folder}/unknown_{Path(source).stem.lower()}.cpp")

    def test_reviewed_targeting_dependencies_keep_unknown_identity(self):
        # Action-to-mask resolution, random row-ordinal mapping, and row-list
        # rebuilding are runtime algorithms. Nearby addresses are not evidence.
        for name in ("C24703", "C24434", "C2F917"):
            source = f"src/unknown/C2/{name}.asm"
            self.assertEqual(classify_source(source), "enemies/battle/targeting")
            self.assertEqual(routine_path(source),
                             f"enemies/battle/targeting/unknown_{name.lower()}.cpp")
            self.assertIsNone(classify_source(f"src/unknown/C2/{name}-jp.asm"))
        self.assertIsNone(classify_source("src/unknown/C2/C24704.asm"))
        for region in ("us", "jp"):
            index = json.loads((ROOT / f"generated/{region}/program_index.json").read_text())
            for name in ("C24703", "C24434", "C2F917"):
                routines = [routine for routine in index["routines"]
                            if routine["source_file"] == f"src/unknown/C2/{name}.asm"]
                self.assertEqual(len(routines), 1, (region, name))

    def test_authored_content_and_unrelated_system_code_are_not_runtime(self):
        for source in (
            "src/data/events/scripts/000.asm", "src/data/events/C30295.asm",
            "src/data/events/script_pointers.asm", "src/data/map/npc_config.asm",
            "src/data/map/enemy_placement.asm", "src/data/battle/enemies.asm",
            "src/data/battle/enemies-jp.asm", "src/data/battle/action_table.asm",
            "src/data/text/battle_to_text.asm", "src/data/movement_control_codes_pointer_table.asm",
            "src/system/reset.asm", "src/audio/change_music.asm", "include/eventmacros.asm",
            "/src/text/display_text.asm", "src/text/../../data/story.asm",
            "src/text/display_text.txt",
        ):
            with self.subTest(source=source):
                self.assertIsNone(classify_source(source))
                self.assertIsNone(routine_path(source))

    def test_all_regional_runtime_sources_have_distinct_output_paths(self):
        union = {}
        for region in ("us", "jp"):
            index = json.loads((ROOT / f"generated/{region}/program_index.json").read_text())
            sources = {routine["source_file"] for routine in index["routines"]}
            expected = {source for source in sources if source.split("/")[1] in
                        {"text", "intro", "ending", "overworld", "battle"}}
            self.assertTrue(expected, region)
            outputs = {}
            for source in sources:
                output = routine_path(source)
                if source in expected:
                    self.assertIsNotNone(output, f"{region}: {source}")
                if output is None:
                    continue
                self.assertNotIn(output, outputs, f"{region}: {source} collides with {outputs.get(output)}")
                outputs[output] = source
                if output in union:
                    self.assertEqual(union[output], source, f"Cross-region filename collision: {output}")
                union[output] = source
            # Same basename in different runtime roles must not overwrite.
            self.assertIn("entities/lifecycle/prepare_new_entity.cpp", outputs)
            self.assertIn("entities/scripts/prepare_new_entity.cpp", outputs)
            self.assertIn("dialogue/printing/print_number" + ("-jp" if region == "jp" else "") + ".cpp", outputs)
            self.assertIn("dialogue/commands/print_number.cpp", outputs)


if __name__ == "__main__":
    unittest.main()
