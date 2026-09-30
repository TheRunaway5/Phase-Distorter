"""Source-backed ownership for resumable game routines.

Paths are relative to generated/<region>/game. This module classifies runtime
assembly, never authored text, event bytecode, placement tables or other assets.
An ownership label identifies a subsystem; it does not resolve an unknown
routine's complete behavior. Unknown routines retain their original address.
"""

from pathlib import PurePosixPath


# Each exceptional helper was checked in the original source, not selected by
# an address range. The Japanese source sometimes keeps the US filename while
# its linked address changes; explicit -jp files remain separate identities.
_EXPLICIT_SOURCES = {
    # Entity/script allocation and list maintenance called by INIT_ENTITY.
    "src/unknown/C0/C09C02.asm": "entities/lifecycle",
    "src/unknown/C0/C09C57.asm": "entities/lifecycle",
    "src/unknown/C0/C09C99.asm": "entities/lifecycle",
    "src/unknown/C0/C09D03.asm": "entities/lifecycle",
    # RUN_ACTIONSCRIPT_FRAME: script chains/tick callback, then bytecode dispatch.
    "src/unknown/C0/C094D0.asm": "entities/scripts",
    "src/unknown/C0/C09506.asm": "entities/scripts",
    # INIT_ENTITY installs these movement and screen-position callbacks.
    "src/unknown/C0/C09FAE.asm": "entities/movement",
    "src/unknown/C0/C0A023.asm": "entities/movement",
    # NPC placement/event gates and row/column scans (also EntityPreload sites).
    "src/unknown/C0/C0222B.asm": "npcs/placement",
    "src/unknown/C0/C0222B-jp.asm": "npcs/placement",
    "src/unknown/C0/C0255C.asm": "npcs/placement",
    "src/unknown/C0/C025CF.asm": "npcs/placement",
    # Enemy placement sector lookup, population and row/column scans.
    "src/unknown/C0/C0263D.asm": "enemies/placement",
    "src/unknown/C0/C02668.asm": "enemies/placement",
    "src/unknown/C0/C02A6B.asm": "enemies/placement",
    "src/unknown/C0/C02B55.asm": "enemies/placement",
    # Action target-kind dispatch publishes the mask and applies NPC/status gates,
    # including the PSI Healing Omega unconscious-enemy override.
    "src/unknown/C2/C24703.asm": "enemies/battle/targeting",
    # RAND_LIMIT chooses a front/back-row ordinal; this records current_target
    # and resolves that ordinal through the live row lists to a battler index.
    "src/unknown/C2/C24434.asm": "enemies/battle/targeting",
    # Rebuilds eligible enemy row lists in sprite-X order, shared by targeting
    # and rendering; also derives their presentation coordinates/sprite heights.
    "src/unknown/C2/C2F917.asm": "enemies/battle/targeting",
    # Position bounds used to retain an existing entity.
    "src/unknown/C0/C0C6B6.asm": "entities/lifecycle",
    # TALK_TO and FIND_NEARBY_TALKABLE_TPT_ENTRY respectively call these.
    "src/unknown/C0/C042C2.asm": "npcs/interaction",
    "src/unknown/C0/C042EF.asm": "npcs/interaction",
    "src/unknown/C0/C043BC.asm": "npcs/interaction",
    # Synchronizes companion NPC identities/HP with the current party list.
    "src/unknown/C0/C032EC.asm": "entities/party",
    "src/unknown/C0/C032EC-jp.asm": "entities/party",
    # DISPLAY_TEXT's stack slots, script pointer and saved text attributes.
    "src/unknown/C1/C14012.asm": "dialogue/state_support",
    "src/unknown/C1/C14049.asm": "dialogue/state_support",
    "src/unknown/C1/C1866D.asm": "dialogue/state_support",
    "src/unknown/C1/C1869D.asm": "dialogue/state_support",
    "src/unknown/C1/C1AD0A.asm": "dialogue/control_support",  # DISPLAY_TEXT_WAIT sets CNUM.
    # Text attribute save/restore, focus handling and window-list rendering.
    "src/unknown/C2/C20A20.asm": "dialogue/window_support",
    "src/unknown/C2/C20ABC.asm": "dialogue/window_support",
    "src/unknown/C1/C11383.asm": "dialogue/window_support",
    "src/unknown/C1/C107AF.asm": "dialogue/window_support",
    "src/unknown/C1/C107AF-jp.asm": "dialogue/window_support",
    "src/unknown/C2/C2087C.asm": "dialogue/window_support",
    # Dictionary word measurement, alignment, VWF glyphs and window tile rows.
    "src/unknown/C4/C445E1.asm": "dialogue/layout_support",
    "src/unknown/C4/C43EF8.asm": "dialogue/layout_support",
    "src/unknown/C4/C44E61.asm": "dialogue/layout_support",
    "src/unknown/C4/C45E96.asm": "dialogue/layout_support",
    "src/unknown/C4/C437B8.asm": "dialogue/layout_support",
    "src/unknown/C4/C437B8-jp.asm": "dialogue/layout_support",
    "src/unknown/C4/C437B8_redirect.asm": "dialogue/layout_support",
    "src/unknown/C4/C43F77.asm": "dialogue/layout_support",
    "src/unknown/C4/C43CAA.asm": "dialogue/layout_support",
    "src/unknown/C4/C43D75.asm": "dialogue/layout_support",
    "src/unknown/C4/C43D24.asm": "dialogue/layout_support",
    "src/unknown/C4/C43E31.asm": "dialogue/layout_support",
    "src/unknown/C4/C44B3A.asm": "dialogue/layout_support",
    "src/unknown/C4/C44DCA.asm": "dialogue/layout_support",
    "src/unknown/C4/C44E44.asm": "dialogue/layout_support",
    "src/unknown/C4/C436D7.asm": "dialogue/layout_support",
    "src/unknown/C3/C3E7E3.asm": "dialogue/window_support",
    "src/unknown/C3/C3E450.asm": "dialogue/window_support",
    "src/unknown/C4/C47F87.asm": "dialogue/window_support",
    "src/unknown/C4/C47F87-jp.asm": "dialogue/window_support",
    # Special-event dispatch and the shared window/scene hardware-frame pump.
    "src/unknown/C1/C1BEFC.asm": "cutscenes/shared_support",
    "src/unknown/C1/C1004E.asm": "cutscenes/shared_support",
}

_TEXT_GROUPS = {
    "dialogue/windows": {
        "change_current_window_font", "close_focus_window", "close_focus_window_redirect",
        "close_window", "create_window", "create_window_redirect", "get_active_window_address",
        "get_window_focus", "set_window_focus", "set_window_focus_redirect", "set_window_title",
        "window_tick", "window_tick_without_instant_printing", "hide_hppp_windows",
        "hide_hppp_windows_redirect", "open_hppp_display", "set_hppp_window_mode_item",
        "show_hppp_windows", "show_hppp_windows_redirect", "update_hppp_meter_tiles",
    },
    "dialogue/printing": {
        "clear_instant_printing", "set_instant_printing", "set_text_sound_mode", "get_text_x",
        "get_text_y", "print_letter", "print_letter_redirect", "print_menu_items",
        "print_menu_items_redirect", "print_newline", "print_newline_redirect", "print_number",
        "print_string", "print_string_redirect", "free_tile", "free_tile_safe",
        "undraw_flyover_text",
    },
    "dialogue/prompts": {
        "character_select_prompt", "clear_blinking_prompt", "enable_blinking_triangle",
        "enter_your_name_please", "get_blinking_prompt", "get_character_at_cursor_position",
        "lock_input", "unlock_input", "move_cursor", "num_select_prompt", "selection_menu",
        "selection_menu_redirect", "selection_menu_setup", "text_input_dialog",
    },
    "dialogue/state": {
        "get_argument_memory", "get_event_flag", "get_secondary_memory", "get_working_memory",
        "increment_secondary_memory", "set_argument_memory", "set_event_flag",
        "set_secondary_memory", "set_working_memory", "transfer_active_mem_storage",
        "transfer_storage_mem_active",
    },
    "dialogue/names": {
        "copy_enemy_name", "fix_attacker_name", "fix_target_name", "get_party_character_name",
        "get_psi_name",
    },
    "dialogue/execution": {"display_text", "display_text_wait", "display_in_battle_text", "skippable_pause"},
    "cutscenes/overworld": {"coffee_tea_scene"},
}

_OVERWORLD_GROUPS = {
    "entities/lifecycle": {
        "create_entity", "create_prepared_entity_npc", "create_prepared_entity_sprite",
        "init_entity", "prepare_new_entity", "prepare_new_entity_at_existing_entity_location",
        "prepare_new_entity_at_teleport_destination", "find_free_space_7E4682",
    },
    "entities/movement": {
        "adjust_position_horizontal", "adjust_position_vertical", "get_direction_from_player_to_entity",
        "get_opposite_direction_from_player_to_entity", "get_direction_to", "get_position_of_party_member",
        "map_input_to_direction", "mushroomization_movement_swap", "reset_mushroomized_walking",
        "velocity_store",
    },
    "entities/collision": {"npc_collision_check", "load_collision_column", "load_collision_row", "load_tile_collision"},
    "entities/party": {"update_party", "set_party_tick_callbacks", "get_on_bicycle", "get_off_bicycle", "spawn_buzz_buzz"},
    "npcs/interaction": {
        "check", "talk_to", "find_nearby_checkable_tpt_entry", "find_nearby_talkable_tpt_entry",
        "process_queued_interactions",
    },
    "enemies/encounters": {"battle_swirl_sequence"},
    "cutscenes/transitions": {"door_transition", "screen_transition", "teleport", "set_teleport_state"},
}

_BATTLE_GROUPS = {
    "enemies/encounters": {"init_overworld", "init_scripted", "init_common", "instant_win_check", "instant_win_handler", "boss_battle_check"},
    "enemies/battle/targeting": {
        "target_row", "target_battler", "target_allies", "target_all_enemies", "target_all",
        "swap_attacker_with_target", "return_battle_target_address", "return_battle_attacker_address",
        "remove_target", "remove_status_untargettable_targets", "remove_npc_targetting",
        "remove_dead_targetting", "random_targetting", "is_char_targetted", "get_shield_targetting",
        "find_targettable_npc", "feeling_strange_retargetting", "fail_attack_on_npcs",
        "determine_targetting", "choose_target", "check_if_valid_target",
    },
    "enemies/battle/presentation": {
        "show_psi_animation", "render_battle_sprite_row", "load_enemy_battle_sprites",
        "load_battlebg_movement", "load_battlebg", "load_battle_sprite", "get_battle_sprite_width",
        "get_battle_sprite_height", "enemy_flashing_on", "enemy_flashing_off",
    },
}


def _source_path(source_file: str) -> PurePosixPath | None:
    """Accept only repository-relative assembly paths with a source owner."""
    path = PurePosixPath(source_file)
    if path.is_absolute() or ".." in path.parts or path.suffix != ".asm":
        return None
    if len(path.parts) < 3 or path.parts[0] != "src":
        return None
    return path


def _regional_stem(path: PurePosixPath) -> str:
    # Only ownership is shared. routine_path preserves the complete filename.
    return path.stem.removesuffix("-jp").removesuffix("-proto")


def _named_group(stem: str, groups: dict[str, set[str]], fallback: str) -> str:
    return next((folder for folder, names in groups.items() if stem in names), fallback)


def classify_source(source_file: str) -> str | None:
    """Return the game subsystem directory, or None for data/unowned code.

    All text, intro, ending, overworld and battle runtime source is covered.
    Unknown helpers require an explicit, reviewed source-path entry above.
    """
    path = _source_path(source_file)
    if path is None:
        return None
    if explicit := _EXPLICIT_SOURCES.get(path.as_posix()):
        return explicit
    owner, stem = path.parts[1], _regional_stem(path)
    if owner == "text":
        if path.parts[2] == "ccs":
            return "dialogue/commands"
        if path.parts[2] == "hp_pp_window":
            return "dialogue/windows/hp_pp"
        return _named_group(stem, _TEXT_GROUPS, "dialogue/support")
    if owner == "intro":
        return "cutscenes/intro" + ("/file_select" if path.parts[2] == "file_select" else "")
    if owner == "ending":
        return "cutscenes/ending"
    if owner == "overworld":
        if path.parts[2] == "actionscript":
            return "entities/scripts/commands" if len(path.parts) > 4 and path.parts[3] == "script" else "entities/scripts"
        return _named_group(stem, _OVERWORLD_GROUPS, "entities/overworld_support")
    if owner == "battle":
        if path.parts[2] == "actions":
            return "enemies/actions"
        return _named_group(stem, _BATTLE_GROUPS, "enemies/battle")
    return None


def routine_path(source_file: str) -> str | None:
    """Return a stable relative .cpp path beneath generated/<region>/game.

    Preserve punctuation and regional suffixes instead of lossy sanitization.
    Unknown source names remain unknown_<original-address>.cpp. The generator
    must reject duplicate returned paths when assembling its source inventory.
    """
    folder = classify_source(source_file)
    if folder is None:
        return None
    path = PurePosixPath(source_file)
    basename = path.stem.lower()
    if path.parts[1] == "unknown":
        basename = "unknown_" + basename
    return f"{folder}/{basename}.cpp"
