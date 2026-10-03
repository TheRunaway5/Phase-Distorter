#include "eb/source_enemy_preload.hpp"
#include "eb/native/enemy_sprite_catalog.hpp"
#include "eb/scene_read_view.hpp"
#include "eb/snes_bus.hpp"
#include "eb/source_entity_admission.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <optional>

namespace eb {
namespace {
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
    return bytes[at] | unsigned(bytes[at + 1]) << 8;
}
struct GroupDemand { unsigned roles{}, tasks{}; };
std::optional<GroupDemand> remaining_group(const SceneReadView &view, std::uint16_t direct_page,
                                         unsigned available) {
    const auto data = native::enemy_sprite_catalog_layout(view.game_version);
    const bool jp = view.game_version == GameVersion::JP;
    const unsigned low = word(view.work_ram, std::uint16_t(direct_page + 0x0a)),
                   high = word(view.work_ram, std::uint16_t(direct_page + 0x0c));
    const unsigned pointer = low | high << 16;
    if (pointer < 0xc00000) return std::nullopt;
    unsigned at = pointer - 0xc00000;
    const unsigned remaining = word(view.work_ram, jp ? 0x4df4 : 0x4a6e);
    if (at < data.battles || at >= data.battles_end || data.battles_end > view.cartridge_rom.size() ||
        remaining >= 255) return std::nullopt;
    GroupDemand result;
    bool first = true;
    while (at < data.battles_end) {
        const unsigned count = view.cartridge_rom[at];
        if (count == 255) return result;
        if (data.battles_end - at < 3) return std::nullopt;
        const unsigned enemy = word(view.cartridge_rom, at + 1);
        if (enemy >= data.enemy_count) return std::nullopt;
        const unsigned definition = data.enemies + enemy * data.enemy_stride;
        if (definition + data.enemy_stride > view.cartridge_rom.size()) return std::nullopt;
        const unsigned configured = word(view.cartridge_rom, definition + data.enemy_sprite_offset + 13);
        const auto tasks = SourceEntityAdmission::script_task_demand(view, configured ? configured : 19);
        if (!tasks) return std::nullopt;
        // UNKNOWN29 decrements this source counter before UNKNOWN22 enters
        // the capacity check. It counts the actors after the current one.
        const unsigned actors = std::min(first ? remaining + 1 : count, available);
        // Source maximum may deliberately stop midway through a battle group.
        // Reserve the complete remaining prefix that can actually be created.
        result.roles += actors; result.tasks += actors * *tasks;
        available -= actors;
        if (!available) return result;
        first = false; at += 3;
    }
    return std::nullopt;
}
bool source_enemy(const SceneReadView &view) {
    const bool jp = view.game_version == GameVersion::JP;
    const unsigned slot = word(view.work_ram, jp ? 0x1a38 : 0x1a42);
    if (slot >= 30) return false;
    const unsigned identity = word(view.work_ram, (jp ? 0x3098 : 0x2c9a) + slot * 2),
                   enemy = word(view.work_ram, (jp ? 0x3110 : 0x2d12) + slot * 2);
    const auto data = native::enemy_sprite_catalog_layout(view.game_version);
    return identity >= 0x8000 && identity - 0x8000 < data.battle_count && enemy < data.enemy_count;
}
} // namespace
bool adapt_source_enemy_preload(const SnesBus &hardware, unsigned extension,
                               std::uint32_t pc, std::uint8_t opcode, unsigned length,
                               std::uint32_t &operand, std::uint16_t &accumulator,
                               std::uint16_t direct_page) {
    const bool jp = hardware.game_version() == GameVersion::JP;
    const bool row_start = opcode == 0xa8 && length == 1 && pc == (jp ? 0xc02a87u : 0xc02a77u),
               row_count = opcode == 0x69 && length == 3 && operand == 5 && pc == (jp ? 0xc02b55u : 0xc02b45u),
               column_right = opcode == 0x22 && length == 4 && pc == (jp ? 0xc0161cu : 0xc01606u) &&
                              operand == (jp ? 0xc02b65u : 0xc02b55u),
               column_left = opcode == 0x22 && length == 4 && pc == (jp ? 0xc0166fu : 0xc01659u) &&
                             operand == (jp ? 0xc02b65u : 0xc02b55u),
               retention_left = opcode == 0xc9 && length == 3 && operand == 0xff80 &&
                                pc == (jp ? 0xc0c6d5u : 0xc0c6f3u),
               retention_right = opcode == 0xc9 && length == 3 && operand == 384 &&
                                 pc == (jp ? 0xc0c6dau : 0xc0c6f8u),
               admission = opcode == 0xcd && length == 3 && operand == (jp ? 0x4de4u : 0x4a5eu) &&
                           pc == (jp ? 0xc02976u : 0xc02969u),
               row_select = opcode == 0x20 && length == 3 && operand == (jp ? 0x2676u : 0x2668u) &&
                            pc == (jp ? 0xc02b41u : 0xc02b31u),
               column_select = opcode == 0x20 && length == 3 && operand == (jp ? 0x2676u : 0x2668u) &&
                               pc == (jp ? 0xc02c2au : 0xc02c1au);
    if (!(row_start || row_count || column_right || column_left || retention_left || retention_right ||
          admission || row_select || column_select))
        return false;
    const auto view = hardware.scene_read_view();
    if ((retention_left || retention_right) && !source_enemy(view)) return false;
    if (!SourceEntityAdmission::ordinary_world(view)) return true;
    const unsigned tiles = extension / 8;
    if (row_select || column_select) {
        const unsigned y = word(view.work_ram, std::uint16_t(direct_page + (row_select ? 0x12 : 0x10)));
        if (accumulator >= 128 || y >= 160) {
            // C0263D already returns no encounter beyond the world. C02668
            // also probes sector attributes for butterflies, so do not enter
            // that selector for the new negative/wrapped strip cells.
            operand = jp ? 0x2a7a : 0x2a6a; // real source RTS, matching JSR
        }
    } else if (row_start) {
        // Every authored caller supplies SCREEN_LEFT_X - 8. Clamp before the
        // regional signed-grid conversion: JP's E000 sign extension would
        // otherwise skip the valid world-left cells after a widened start.
        accumulator = std::uint16_t(std::max(0, int(std::int16_t(accumulator)) - int(tiles)));
    } else if (column_left) accumulator = std::uint16_t(accumulator - tiles);
    else if (column_right) accumulator = std::uint16_t(accumulator + tiles);
    else if (row_count) {
        operand += 2 * extension / 64;
        const int x = std::int16_t(word(view.work_ram, view.source_profile.wram_background_scroll.layer1_x));
        const int native_left = x >= 0 ? x / 64 : -((-x + 63) / 64);
        const int desired_left = native_left - 1 - int(extension / 64);
        if (desired_left < 0 && !word(view.work_ram, std::uint16_t(direct_page + 0x14)))
            operand = unsigned(std::max(0, int(operand) + desired_left));
    }
    else if (retention_left) operand = std::uint16_t(-128 - int(extension));
    else if (retention_right) operand += extension;
    else {
        const auto capacity = SourceEntityAdmission::inspect(view);
        const auto group = capacity ? remaining_group(view, direct_page, capacity->remaining_enemies()) : std::nullopt;
        if (!capacity || !group || !capacity->can_admit_enemy_group(group->roles, group->tasks)) {
            // Comparing the live count to itself takes C02668's existing
            // capacity-failure branch. Its selected group, chance/RAND draws
            // and traversal remain real; unsafe CREATE is never entered.
            operand = jp ? 0x4de2 : 0x4a5c;
        }
    }
    return true;
}
} // namespace eb
