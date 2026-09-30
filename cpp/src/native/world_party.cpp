#include "eb/native/world_party.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
    if (at >= bytes.size() || bytes.size() - at < 2)
        throw std::invalid_argument("Truncated native party content");
    return bytes[at] | unsigned(bytes[at + 1]) << 8;
}
} // namespace
WorldPartyData::WorldPartyData(std::span<const std::uint8_t> bytes, GameVersion version)
    : version_(version) {
    if (version != GameVersion::US && version != GameVersion::JP)
        throw std::invalid_argument("Unsupported native party region");
    const bool jp = version == GameVersion::JP;
    const unsigned actors = jp ? 0x3dffc : 0x3e012;
    const unsigned npc = jp ? 0x159dda : 0x158f23;
    const unsigned enemies = jp ? 0x15a440 : 0x159589;
    const unsigned stride = jp ? 77 : 94, hp = jp ? 16 : 33;
    for (unsigned i = 0; i < initial_.size(); ++i) {
        const unsigned at = actors + i * 8;
        initial_[i] = {std::uint16_t(word(bytes, at)), std::uint16_t(word(bytes, at + 2)),
                       std::uint16_t(word(bytes, at + 4)), std::uint16_t(word(bytes, at + 6))};
        if (initial_[i].preferred_role < 24 || initial_[i].preferred_role > 28)
            throw std::invalid_argument("Invalid native party creation role");
    }
    for (unsigned i = 0; i < hp_.size(); ++i) {
        const unsigned enemy = word(bytes, npc + i * 2) >> 8;
        hp_[i] = word(bytes, enemies + enemy * stride + hp);
    }
}
const PartyInitialActor &WorldPartyData::initial(unsigned member) const {
    if (member < 1 || member > initial_.size())
        throw std::out_of_range("Native party member must be 1..17");
    return initial_[member - 1];
}
std::uint16_t WorldPartyData::guest_hp(unsigned member) const {
    return hp_.at(member);
}
WorldParty::WorldParty(party::State &party, ActorWorld &actors,
                       const WorldPartyData &data, WorldPartyState &state)
    : party_(party), actors_(actors), data_(data), state_(state) {
    if (party.version() != data.version())
        throw std::invalid_argument("Native party content region mismatch");
}
void WorldParty::check() const {
    if (failed_)
        throw std::logic_error("Native party operation failed; replace this scene owner");
}
std::optional<ActorId> WorldParty::leader() const {
    check();
    if (!party_.party_count)
        return std::nullopt;
    if (party_.party_count > 6)
        throw std::invalid_argument("Invalid native formation count");
    return actors_.actor_for_role(state_.current_leader_role);
}
void WorldParty::refresh_guest_values() {
    unsigned count = 0;
    while (count < 6 && party_.party_order[count] && party_.party_order[count] < 5)
        ++count;
    // Authored parties contain at most four chosen characters and two guests.
    // Crossing the fixed membership list would read unrelated source storage.
    if (count > 4)
        throw std::invalid_argument("Native membership exceeds four chosen characters");
    const auto first = party_.party_order[count], second = party_.party_order[count + 1];
    (void)data_.guest_hp(first);
    (void)data_.guest_hp(second);
    auto one = state_.first_guest, two = state_.second_guest;
    if (first == one.member) {
        if (second != two.member)
            two = {second, data_.guest_hp(second)};
    } else if (first == two.member) {
        one = {first, two.hp};
        two = {second, data_.guest_hp(second)};
    } else if (one.member == second) {
        two = {second, one.hp};
        one = {first, data_.guest_hp(first)};
    } else {
        one = {first, data_.guest_hp(first)};
        if (second != two.member)
            two = {second, data_.guest_hp(second)};
    }
    party_.controlled_count = count;
    state_.first_guest = one;
    state_.second_guest = two;
}
void WorldParty::refresh_guests() {
    check();
    if (active_)
        throw std::logic_error("Native party already has an unfinished operation");
    refresh_guest_values();
}
void WorldParty::sort_formation() {
    const auto count = party_.party_count;
    // Both original sort loops subtract one before their unsigned bound test.
    // Zero underflows into an out-of-bounds sort; empty rebuilds skip UPDATE_PARTY.
    if (!count || count > 6)
        throw std::invalid_argument("Native formation update requires one to six actors");
    struct Entry { unsigned key{}, role{}, record{}; ActorId actor{}; };
    std::array<Entry, 6> entries{};
    std::array<std::uint16_t, 6> cursors{};
    for (unsigned i = 0; i < count; ++i) {
        const auto member = party_.display_order[i], record = party_.controlled_order[i];
        if (!member || member > 17 || record >= 6)
            throw std::invalid_argument("Invalid native party formation mapping");
        const auto id = actors_.actor_for_role(state_.roles[i]);
        if (!id)
            throw std::invalid_argument("Native party formation actor is missing");
        for (unsigned j = 0; j < i; ++j)
            if (entries[j].actor == *id || entries[j].record == record)
                throw std::invalid_argument("Native formation has duplicate actor or character mapping");
        unsigned key = member;
        if (member >= 5) {
            key += 0x300;
        } else {
            // Source follows the actor's character binding for status, not
            // membership ID or the independent controlled_order array.
            const auto mapped = actors_.actor(*id).action().variables[1];
            if (mapped >= 6)
                throw std::invalid_argument("Native party actor character mapping is invalid");
            const auto status = party_.character(mapped + 1).afflictions[0];
            if (status == 1 || status == 2)
                key += 0x100;
        }
        entries[i] = {key, state_.roles[i], record, *id};
        cursors[i] = state_.trail_cursors[record];
    }
    std::stable_sort(entries.begin(), entries.begin() + count,
                     [](const Entry &a, const Entry &b) { return a.key < b.key; });
    for (unsigned i = 0; i < count; ++i) {
        const auto &entry = entries[i];
        party_.display_order[i] = entry.key & 255;
        party_.controlled_order[i] = entry.record;
        state_.roles[i] = entry.role;
        // Trail distance belongs to formation position, not character identity.
        state_.trail_cursors[entry.record] = cursors[i];
        actors_.actor(entry.actor).action().variables[5] = i * 2;
    }
    state_.current_leader_role = state_.roles[0];
}
std::unique_ptr<WorldParty::Operation> WorldParty::begin_update() {
    check();
    if (active_)
        throw std::logic_error("Native party already has an unfinished operation");
    auto operation = std::unique_ptr<Operation>(new Operation(*this));
    active_ = operation.get();
    return operation;
}
WorldParty::Operation::Operation(WorldParty &owner) : owner_(owner) {}
WorldParty::Operation::~Operation() {
    if (owner_.active_ == this) {
        owner_.active_ = nullptr;
        if (!complete_)
            owner_.failed_ = true;
    }
}
bool WorldParty::Operation::advance() {
    owner_.check();
    if (complete_)
        return true;
    if (service_)
        return false;
    try {
        switch (phase_) {
        case 0:
            owner_.sort_formation();
            owner_.refresh_guest_values();
            service_ = WorldPartyService::RefreshMovementPolicy;
            phase_ = 1;
            break;
        case 1:
            service_ = WorldPartyService::RefreshWindowPalette;
            phase_ = 2;
            break;
        case 2:
            complete_ = true;
            owner_.active_ = nullptr;
            break;
        default:
            throw std::logic_error("Invalid native formation phase");
        }
    } catch (...) {
        owner_.failed_ = true;
        throw;
    }
    return complete_;
}
void WorldParty::Operation::respond() {
    owner_.check();
    if (!service_ || complete_)
        throw std::logic_error("Native party has no pending service");
    service_.reset();
}
} // namespace eb::native
