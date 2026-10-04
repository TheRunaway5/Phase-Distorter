// Generated from independent US and JP source builds. Do not edit.
#pragma once
#include <array>
#include <cstdint>
#include "eb/game_version.hpp"
namespace eb {
// Linked WRAM/ROM span offsets and structure-member offsets, not host pointers.
// gameplay_timing/gameplay_routines contain full 65816 program addresses;
// entity_draw_callbacks contain bank-relative source routine addresses.
// Names within each layout match the upstream assembly structure members.
struct SourceProfile {
    struct GameplayTiming {
        std::uint32_t entity_update_call;
        std::uint32_t entity_update_return;
        std::uint32_t wait_for_next_frame;
    } gameplay_timing;
    struct CharacterLayout {
        std::uint32_t table_address;
        std::uint32_t entry_size;
        std::uint32_t level;
        std::uint32_t max_hp;
        std::uint32_t max_pp;
        std::uint32_t afflictions;
        std::uint32_t current_hp_fraction;
        std::uint32_t current_hp;
        std::uint32_t current_hp_target;
        std::uint32_t current_pp_fraction;
        std::uint32_t current_pp;
        std::uint32_t current_pp_target;
    } character_layout;
    struct BattlerLayout {
        std::uint32_t table_address;
        std::uint32_t entry_size;
        std::uint32_t hp;
        std::uint32_t hp_target;
        std::uint32_t hp_max;
        std::uint32_t pp;
        std::uint32_t pp_target;
        std::uint32_t pp_max;
        std::uint32_t afflictions;
        std::uint32_t consciousness;
        std::uint32_t ally_or_enemy;
        std::uint32_t npc_id;
        std::uint32_t id;
    } battler_layout;
    struct PartyState {
        std::uint32_t members;
        std::uint32_t count;
        std::uint32_t player_controlled_count;
        std::uint32_t walking_style;
        std::uint32_t leader_x;
        std::uint32_t leader_y;
    } party_state;
    struct ActionGates {
        std::uint32_t battle_mode;
        std::uint32_t battle_swirl_countdown;
        std::uint32_t enemy_touched;
        std::uint32_t teleport_destination;
        std::uint32_t using_door;
        std::uint32_t input_disable_frames;
        std::uint32_t pending_interactions;
    } action_gates;
    struct MovementState {
        std::uint32_t flags;
        std::uint32_t intangibility_frames;
    } movement_state;
    struct TeleportState {
        std::uint32_t destination;
        std::uint32_t style;
        std::uint32_t destination_table;
        std::uint32_t entry_size;
        std::uint32_t destination_x;
        std::uint32_t destination_y;
    } teleport_state;
    struct GameplayRoutines {
        std::uint32_t main_loop;
        std::uint32_t add_party_character;
        std::uint32_t remove_party_character;
        std::uint32_t fade_out;
        std::uint32_t wait_frames;
        std::uint32_t damage_argument_store_end;
    } gameplay_routines;
    struct BattleState {
        std::uint32_t current_attacker;
    } battle_state;
    struct DmaQueue {
        std::uint32_t write_index;
        std::uint32_t last_completed_index;
    } dma_queue;
    std::uint32_t wram_battle_mode_flag;
    struct WramBattleBackgrounds {
        std::uint32_t layer1;
        std::uint32_t layer2;
    } wram_battle_backgrounds;
    std::uint32_t wram_psi_animation_state;
    std::uint32_t rom_psi_animation_config;
    std::uint32_t rom_psi_animation_pointers;
    std::uint32_t rom_psi_animation_palettes;
    std::uint32_t rom_psi_animation_graphics_bank;
    std::uint32_t wram_psi_animation_targets;
    std::uint32_t wram_swirl_update_timer;
    std::uint32_t wram_palettes;
    struct WramFlashTimers {
        std::uint32_t green;
        std::uint32_t red;
        std::uint32_t reflection;
        std::uint32_t green_background;
    } wram_flash_timers;
    std::uint32_t wram_current_layer_config;
    std::uint32_t rom_layer_config_table;
    std::uint32_t wram_loaded_map_tile_combination;
    struct WramBackgroundScroll {
        std::uint32_t layer1_x;
        std::uint32_t layer1_y;
        std::uint32_t layer2_x;
        std::uint32_t layer2_y;
    } wram_background_scroll;
    std::uint32_t wram_map_tile_arrangements;
    std::uint32_t wram_entity_script_ids;
    std::uint32_t wram_entity_script_variable0;
    std::uint32_t wram_entity_script_variable1;
    std::uint32_t wram_first_entity;
    std::uint32_t wram_entity_next;
    struct WramEntityScreenCoordinates {
        std::uint32_t x;
        std::uint32_t y;
    } wram_entity_screen_coordinates;
    struct WramEntityWorldCoordinates {
        std::uint32_t x;
        std::uint32_t y;
    } wram_entity_world_coordinates;
    std::uint32_t wram_entity_draw_priority;
    struct WramEntitySpritemapPointers {
        std::uint32_t low;
        std::uint32_t high;
    } wram_entity_spritemap_pointers;
    std::uint32_t wram_entity_draw_callback;
    std::uint32_t wram_entity_animation_frame;
    std::uint32_t wram_entity_displayed_sprites;
    std::uint32_t wram_entity_spritemap_sizes;
    std::uint32_t wram_entity_surface_flags;
    std::uint32_t wram_entity_body_divides;
    struct EntityDrawCallbacks {
        std::uint32_t screen_space;
        std::uint32_t world_space;
    } entity_draw_callbacks;
    std::uint32_t wram_lumine_text_header;
    struct WramLumineTextMaps {
        std::uint32_t even_columns;
        std::uint32_t odd_columns;
    } wram_lumine_text_maps;
    std::array<std::uint32_t, 10> rom_map_tile_chunks;
    std::uint32_t rom_map_tileset_palette_sectors;
    std::uint32_t title_script_first;
    std::uint32_t title_script_last;
    std::uint32_t title_background_mode;
    struct TitleBackgroundMaps {
        std::uint32_t layer1;
        std::uint32_t layer2;
    } title_background_maps;
    struct LightningScripts {
        std::uint32_t franklin_badge_reflection;
        std::uint32_t strike_event_705;
        std::uint32_t strike_event_706;
    } lightning_scripts;
    std::uint32_t gas_station_flash_script;
    std::uint32_t wram_gas_station_base_palette;
    struct RomGasStationPalettes {
        std::uint32_t normal;
        std::uint32_t alternate;
    } rom_gas_station_palettes;
    std::uint32_t file_select_script;
    std::uint32_t lumine_text_script;
};
const SourceProfile& source_profile(GameVersion version);
}
