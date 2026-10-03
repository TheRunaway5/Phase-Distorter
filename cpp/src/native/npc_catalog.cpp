#include "eb/native/npc_catalog.hpp"
#include "eb/threed_npc_restoration.hpp"
#include <algorithm>
#include <array>
#include <stdexcept>

namespace eb::native {
namespace {
constexpr unsigned columns = 32, rows = 40, cell_size = 256;
struct Content {
    std::span<const std::uint8_t> bytes;
    std::span<const std::uint8_t> slice(std::size_t at, std::size_t length) const {
        if (at > bytes.size() || length > bytes.size() - at)
            throw std::runtime_error("Truncated NPC content");
        return bytes.subspan(at, length);
    }
    unsigned word(std::size_t at) const {
        const auto value = slice(at, 2);
        return value[0] | unsigned(value[1]) << 8;
    }
};
bool flag_is_set(std::span<const std::uint8_t> flags, unsigned id) {
    if (!id)
        return false;
    const unsigned bit = id - 1;
    if (bit / 8 >= flags.size())
        throw std::invalid_argument("Missing NPC appearance flag state");
    return (flags[bit / 8] & (1u << (bit & 7))) != 0;
}
} // namespace

NpcCatalogLayout npc_catalog_layout(GameVersion version, bool restore_threed_npcs) {
    // Source sprite_placement_pointer_table.asm, sprite_placement_table.asm,
    // npc_config.asm and independently linked regional content layouts.
    return version == GameVersion::JP
               ? NpcCatalogLayout{0x0f6223, 0x0f6c23, 0x0f89c1, 0x0f89c1, 0x17a800, 1584, 795, restore_threed_npcs}
               : NpcCatalogLayout{0x0f61e7, 0x0f6be7, 0x0f8985, 0x0f8985, 0x17a800, 1584, 799, restore_threed_npcs};
}

struct NpcCatalog::State {
    std::vector<NpcDefinition> definitions;
    std::array<std::vector<NpcPlacement>, columns * rows> cells;
    unsigned photograph_script{};
};

NpcCatalog::NpcCatalog(std::span<const std::uint8_t> assets, NpcCatalogLayout layout)
    : state_(std::make_unique<State>()) {
    const Content content{assets};
    if (!layout.definition_count || layout.definition_count > 65536 ||
        layout.photograph_script > 65535 || layout.placements >= layout.placements_end ||
        layout.placements_end > assets.size() ||
        layout.placements_end - layout.placements > 65536 ||
        (layout.placements >> 16) != ((layout.placements_end - 1) >> 16))
        throw std::runtime_error("Invalid NPC catalog layout");
    state_->photograph_script = layout.photograph_script;
    content.slice(layout.cell_pointers, columns * rows * 2);
    content.slice(layout.definitions, std::size_t(layout.definition_count) * 17);
    const auto tilesets = content.slice(layout.map_tilesets, columns * rows * 2);
    state_->definitions.reserve(layout.definition_count);
    for (unsigned id = 0; id < layout.definition_count; ++id) {
        const std::size_t at = std::size_t(layout.definitions) + id * 17;
        const auto record = content.slice(at, 17);
        if (record[0] < 1 || record[0] > 3 || record[3] > 7 || record[8] > 2)
            throw std::runtime_error("Unsupported NPC definition");
        const auto byte = [&](unsigned field) {
            return layout.restore_threed_npcs
                       ? restored_threed_npc_byte(layout.definitions, unsigned(at) + field, record[field])
                       : record[field];
        };
        state_->definitions.push_back({NpcType(record[0]), content.word(at + 1), record[3],
                                       content.word(at + 4), unsigned(byte(6)) | unsigned(byte(7)) << 8,
                                       NpcAppearance(byte(8))});
    }
    std::uint32_t next_identity = 1;
    for (unsigned y = 0; y < rows; ++y)
        for (unsigned x = 0; x < columns; ++x) {
            const unsigned pointer = content.word(layout.cell_pointers + (y * columns + x) * 2);
            if (!pointer)
                continue;
            const unsigned at = (layout.placements & 0xff0000u) | pointer;
            if (at < layout.placements || at > layout.placements_end || layout.placements_end - at < 2)
                throw std::runtime_error("Invalid NPC placement list");
            const unsigned count = content.word(at);
            if (count > (layout.placements_end - at - 2) / 4)
                throw std::runtime_error("Truncated NPC placement list");
            auto &cell = state_->cells[y * columns + x];
            cell.reserve(count);
            for (unsigned i = 0; i < count; ++i) {
                const auto entry = content.slice(at + 2 + i * 4, 4);
                const unsigned npc = entry[0] | unsigned(entry[1]) << 8;
                if (npc >= layout.definition_count)
                    throw std::runtime_error("Invalid NPC placement identity");
                // C0222B uses byte 3 for X and byte 2 for Y, despite the
                // opposite field labels in the original sprite_placement struct.
                const unsigned world_x = x * cell_size + entry[3];
                const unsigned world_y = y * cell_size + entry[2];
                const unsigned tileset = tilesets[(world_y / 128) * columns + world_x / 256] >> 3;
                cell.push_back({next_identity++, NpcId(npc), world_x, world_y, tileset});
            }
        }
}
NpcCatalog::~NpcCatalog() = default;
NpcCatalog::NpcCatalog(NpcCatalog &&) noexcept = default;
NpcCatalog &NpcCatalog::operator=(NpcCatalog &&) noexcept = default;
unsigned NpcCatalog::size() const { return state_->definitions.size(); }
const NpcDefinition &NpcCatalog::definition(NpcId id) const { return state_->definitions.at(id); }
std::span<const NpcPlacement> NpcCatalog::cell(unsigned x, unsigned y) const {
    if (x >= columns || y >= rows)
        throw std::out_of_range("Invalid NPC placement cell");
    return state_->cells[y * columns + x];
}

std::vector<NpcCandidate> NpcCatalog::query(NpcRectangle bounds, const NpcVisibility &visibility) const {
    if (bounds.right < bounds.left || bounds.bottom < bounds.top || visibility.tileset >= 32)
        throw std::invalid_argument("Invalid NPC query");
    std::vector<NpcCandidate> result;
    const int left = std::max(bounds.left, 0), top = std::max(bounds.top, 0);
    const int right = std::min(bounds.right, int(columns * cell_size));
    const int bottom = std::min(bounds.bottom, int(rows * cell_size));
    if (left >= right || top >= bottom)
        return result;
    for (unsigned y = unsigned(top) / cell_size; y <= unsigned(bottom - 1) / cell_size; ++y)
        for (unsigned x = unsigned(left) / cell_size; x <= unsigned(right - 1) / cell_size; ++x)
            for (const auto &placement : state_->cells[y * columns + x]) {
                if (placement.x < unsigned(left) || placement.x >= unsigned(right) ||
                    placement.y < unsigned(top) || placement.y >= unsigned(bottom) ||
                    placement.tileset != visibility.tileset ||
                    std::find(visibility.active_npcs.begin(), visibility.active_npcs.end(), placement.npc) !=
                        visibility.active_npcs.end())
                    continue;
                const auto &def = state_->definitions[placement.npc];
                if (visibility.photograph) {
                    if (def.appearance != NpcAppearance::Always)
                        continue;
                } else {
                    if (visibility.objects_only && def.type != NpcType::Object)
                        continue;
                    if (def.appearance != NpcAppearance::Always &&
                        flag_is_set(visibility.event_flags, def.event_flag) !=
                            (def.appearance == NpcAppearance::FlagOn))
                        continue;
                }
                result.push_back({placement, visibility.photograph ? state_->photograph_script : def.script});
            }
    return result;
}
} // namespace eb::native
