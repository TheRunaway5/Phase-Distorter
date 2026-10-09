#pragma once
#include <cstdint>
#include <string>
namespace eb {
struct SessionDiagnostics {
    std::uint64_t frames{}, steps{}, master_clocks{};
    std::uint64_t cpu_instructions{}, audio_cpu_instructions{}, audio_frames{};
    std::uint64_t native_gameplay_batches{};
    std::uint64_t native_encounters_started{}, native_encounters_completed{};
    std::uint16_t native_battle_mode{}, native_battle_mode_flag{};
    std::uint64_t native_world_menus_opened{}, native_world_menus_completed{};
    std::uint64_t native_item_uses_started{}, native_item_uses_completed{};
    std::uint64_t native_doors_started{}, native_doors_completed{};
    bool native_world_menu_active{}, native_door_active{};
    std::uint64_t native_town_maps_started{}, native_town_maps_completed{};
    bool native_town_map_active{};
    std::uint64_t native_cutscenes_started{}, native_cutscenes_completed{};
    std::uint8_t native_cutscene_active{}, native_cutscene_last{};
    std::uint64_t native_travel_started{}, native_travel_completed{};
    bool native_travel_active{};
    unsigned source_width{};
    bool machine_debug_available = true;
    std::string cpu_state, audio_cpu_state;
};
} // namespace eb
