// Source: FIX_ATTACKER_NAME, FIX_TARGET_NAME, COPY_ENEMY_NAME, C23E32,
// SWAP_ATTACKER_WITH_TARGET, MEMSET16 and C1AC4A/C1ACA1 (US and JP).
#include "eb/native/battle/names.hpp"
#include <algorithm>
#include <bit>
#include <stdexcept>

namespace eb::native::battle {
namespace {
unsigned side_index(dialogue::PreparedName side) {
    switch (side) {
    case dialogue::PreparedName::Attacker: return 0;
    case dialogue::PreparedName::Target: return 1;
    }
    throw std::invalid_argument("Unknown battle name side");
}
} // namespace
Names::Names(const Roster& roster, const party::State& party, dialogue::PreparedMessage& prepared,
             const dialogue::SubstitutionResources& resources, ActionState& action)
    : roster_(roster), party_(party), prepared_(prepared), resources_(resources), action_(action) {
    if (party.version() != version() || prepared.version() != version() || resources.version() != version())
        throw std::invalid_argument("Battle name owners must share a region");
}
bool Names::uses(const Roster& roster, const party::State& party, const dialogue::PreparedMessage& prepared,
                 const ActionState& action) const noexcept {
    return &roster == &roster_ && &party == &party_ && &prepared == &prepared_ && &action == &action_;
}
unsigned Names::scratch_size() const { return version() == GameVersion::US ? 27 : 12; }
std::span<const std::uint8_t> Names::scratch(dialogue::PreparedName side) const {
    return std::span(scratch_).subspan(side_index(side) * scratch_size(), scratch_size());
}
unsigned Names::selected(const std::optional<unsigned>& slot) const {
    if (!slot) throw std::logic_error("Battle name requires its actual action selector");
    if (*slot >= Roster::size) throw std::out_of_range("Battle name selector leaves its owned roster");
    return *slot;
}
Names::Publication Names::prepare(dialogue::PreparedName side, unsigned slot, std::uint16_t mode,
                                   Scratch& scratch) const {
    const bool us = version() == GameVersion::US;
    const bool attacker = side == dialogue::PreparedName::Attacker;
    const auto offset = side_index(side) * scratch_size();
    const auto& b = roster_.at(slot);
    Publication result{side, prepared_.metadata(side)};
    if (us) result.metadata.article = 0;
    // MEMSET16 stores complete words only. US attacker requests28 bytes into
    // its27-byte field; target requests27 and consequently retains byte26.
    const unsigned clear = us ? (attacker ? 28 : 26) : 12;
    std::fill_n(scratch.begin() + offset, clear, 0);
    if (b.side == 1 || b.npc != 0) {
        unsigned end{};
        const auto write = [&](unsigned index, std::uint8_t byte) {
            if (offset + index >= 2 * scratch_size())
                throw std::out_of_range("Expanded battle name leaves its owned adjacent scratch fields");
            scratch[offset + index] = byte;
        };
        // COPY_ENEMY_NAME counts source bytes, not expanded characters. Every
        // placeholder copies the actual first party field up to its first NUL.
        const auto first_name = party_.name_field(1);
        for (auto byte : resources_.enemy_name(b.id)) {
            if (!byte) break;
            if (byte == (us ? 0xac : 0x3e)) {
                for (auto letter : first_name) {
                    if (!letter) break;
                    write(end++, letter);
                }
            } else write(end++, byte);
        }
        write(end, 0);
        if (b.side == 1) {
            if (attacker && mode != 0) {
                if (!us && action_.enemy_count > 1) {
                    write(end, 102);
                    write(end + 1, 118);
                }
            } else if (b.label != 1 || roster_.next_available_label(b.original_enemy) != 2) {
                if (us) {
                    write(end, 0x50);
                    write(end + 1, std::uint8_t(b.label + 0x70));
                    result.metadata.article = 1;
                } else write(end, std::uint8_t(b.label + 0x40));
            }
        }
        if (b.id == 160) {
            const auto pet = party_.name_field(party::NameField::Pet);
            for (unsigned i = 0; i < 6; ++i) write(i, pet[i]);
            write(6, 0);
        }
        result.count = us ? 27 : attacker ? 12 : 11;
        std::copy_n(scratch.begin() + offset, result.count, result.bytes.begin());
        result.copied = true;
        if (us) result.metadata.enemy_id = b.id;
    } else if (b.id <= 4) {
        // The ID is only the guard. The raw row byte selects the party record;
        // source zero IDs can still take this branch with a valid row.
        const auto name = party_.name_field(unsigned(b.row) + 1);
        result.count = unsigned(name.size());
        std::copy(name.begin(), name.end(), result.bytes.begin());
        result.copied = true;
        if (us) result.metadata.enemy_id = 0xffff;
    }
    return result;
}
void Names::publish(const Publication& update) {
    if (update.copied) prepared_.copy_name(update.side, std::span(update.bytes).first(update.count));
    prepared_.metadata(update.side) = update.metadata;
}
void Names::fix_attacker(std::uint16_t mode) {
    auto scratch = scratch_;
    const auto update = prepare(dialogue::PreparedName::Attacker, selected(action_.attacker), mode, scratch);
    scratch_ = scratch;
    publish(update);
}
void Names::fix_target() {
    auto scratch = scratch_;
    const auto update = prepare(dialogue::PreparedName::Target, selected(action_.target), 0, scratch);
    scratch_ = scratch;
    publish(update);
}
void Names::swap_attacker_with_target() {
    // Both synchronous helpers are checked before publishing the swapped
    // selectors. Rejected out-of-owned inputs cannot partially swap owners.
    const auto attacker = selected(action_.target), target = selected(action_.attacker);
    auto scratch = scratch_;
    const auto first = prepare(dialogue::PreparedName::Attacker, attacker, 0, scratch);
    const auto second = prepare(dialogue::PreparedName::Target, target, 0, scratch);
    std::swap(action_.attacker, action_.target);
    scratch_ = scratch;
    publish(first);
    publish(second);
}
void Names::select_first_target() {
    if (!action_.target_flags) return;
    const auto target = unsigned(std::countr_zero(action_.target_flags));
    auto scratch = scratch_;
    const auto update = prepare(dialogue::PreparedName::Target, target, 0, scratch);
    action_.target = target;
    scratch_ = scratch;
    publish(update);
}
} // namespace eb::native::battle
