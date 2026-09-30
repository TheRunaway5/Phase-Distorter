#pragma once

#include "eb/native/actor_world.hpp"
#include "eb/native/party/state.hpp"

namespace eb::native {
struct PartyInitialActor {
    std::uint16_t sprite{}, small_sprite{}, script{}, preferred_role{};
    bool operator==(const PartyInitialActor &) const = default;
};

// Immutable authored membership resources. Guest combat HP is distinct from
// the two guest character records' rolling meters; zero has a real table entry.
class WorldPartyData {
public:
    WorldPartyData(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const { return version_; }
    const PartyInitialActor &initial(unsigned one_based_member) const;
    std::uint16_t guest_hp(unsigned member) const;
private:
    GameVersion version_;
    std::array<PartyInitialActor, 17> initial_{};
    std::array<std::uint16_t, 18> hp_{};
};
struct WorldPartyGuest {
    std::uint8_t member{};
    std::uint16_t hp{};
    bool operator==(const WorldPartyGuest &) const = default;
};
// Only the world fields absent from party::State. Formation roles map the
// existing display_order slots; trail cursors map the six character records.
// Neither array is another membership list or a second actor registry.
struct WorldPartyState {
    // Independent source current_party_members selector. Initialization can
    // publish role24 before that actor exists; UPDATE_PARTY later publishes
    // the first sorted formation role. Never a native ActorId or array alias.
    std::uint16_t current_leader_role{};
    // Transient per-controlled-position latches, cleared by world startup and
    // subsequently owned by the low-HP alert producer, not persisted meters.
    std::array<std::uint16_t, 6> hp_alert_shown{};
    // Character-record fields written by the party actor startup script.
    // These are independent of the formation-position roles/cursors below.
    struct CharacterStartup {
        std::uint16_t member_index{}, actor_role{}; // Source character words53/59.
        std::uint16_t reserved57{}, startup_marker{}; // Words57 and92/93.
        bool operator==(const CharacterStartup &) const = default;
    };
    std::array<CharacterStartup,6> character_startup{};
    // Independent character words55/65. Startup does not reset either.
    std::array<std::uint16_t,6> selected_styles{}, last_trail_styles{};
    // Published at the actual maintenance/controller phases, never recomputed
    // from live formation on a follower's read. Missing cache is explicit.
    struct ProjectionInputs {
        std::optional<unsigned> leader_role;
        std::uint16_t direction{}, movement_mismatch{};
    } projection;
    std::array<std::uint16_t, 6> roles{}, trail_cursors{};
    WorldPartyGuest first_guest, second_guest;
};
enum class WorldPartyService { RefreshMovementPolicy, RefreshWindowPalette };

// UPDATE_PARTY and C032EC against the actual party and actor owners. Membership
// insertion/rebuild, trail recording and actor creation remain separate entry
// points. A service must execute before acknowledgment; in particular movement
// policy may dismount the bicycle through nested scene ticks. No synthetic
// frame, dialogue, audio or graphics-memory callback runs here.
class WorldParty {
public:
    class Operation {
    public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        bool advance();
        const std::optional<WorldPartyService> &service() const { return service_; }
        void respond();
        bool complete() const { return complete_; }
    private:
        friend class WorldParty;
        explicit Operation(WorldParty &);
        WorldParty &owner_;
        std::optional<WorldPartyService> service_;
        unsigned phase_{};
        bool complete_{};
    };
    WorldParty(party::State &, ActorWorld &, const WorldPartyData &, WorldPartyState &);
    WorldParty(const WorldParty &) = delete;
    WorldParty &operator=(const WorldParty &) = delete;
    std::unique_ptr<Operation> begin_update();
    void refresh_guests();
    std::optional<ActorId> leader() const;
    bool busy() const { return active_ != nullptr; }
    bool failed() const { return failed_; }
    bool uses(const party::State &party, const ActorWorld &actors,
              const WorldPartyData &data, const WorldPartyState &state) const noexcept {
        return &party_ == &party && &actors_ == &actors && &data_ == &data && &state_ == &state;
    }
private:
    void check() const;
    void sort_formation();
    void refresh_guest_values();
    party::State &party_;
    ActorWorld &actors_;
    const WorldPartyData &data_;
    WorldPartyState &state_;
    Operation *active_{};
    bool failed_{};
};
} // namespace eb::native
