#pragma once
#include <array>
#include <cstdint>
#include <optional>
#include <span>
#include <string>

namespace eb {
class SnesBus;
class MainCpu65816;
class SnapshotArchive;
struct SourceProfile;
struct GameDebugSettings {
    bool infinite_hp{}, infinite_pp{}, noclip{}, enemies_ignore{}, player_max_damage{};
    bool operator==(const GameDebugSettings&) const = default;
};
struct DebugDestination { const char* name; unsigned id,x,y; };
inline std::span<const DebugDestination> debug_destinations() {
    static constexpr DebugDestination places[]{
#include "eb/debug_destinations.inc"
    };
    return places;
}
struct GameDebugRequest {
    enum class Kind { Teleport, Party } kind;
    unsigned destination{};
    std::array<bool,4> party{};
};
struct GameDebugSnapshot {
    bool ready{}, busy{};
    std::array<bool,4> party{};
    std::string status;
};

// Opt-in gameplay tools. UI submits commands; this owner applies them through
// regional metadata and the game's compiled party/teleport routines.
class GameDebug {
public:
    GameDebug(SnesBus& bus, MainCpu65816& cpu);
    ~GameDebug();
    GameDebug(const GameDebug&) = delete;
    GameDebug& operator=(const GameDebug&) = delete;
    void configure(GameDebugSettings settings);
    GameDebugSettings settings() const { return settings_; }
    void request(GameDebugRequest request);
    void before_step();
    GameDebugSnapshot snapshot() const;
    void snapshot_io(SnapshotArchive &archive);
private:
    SnesBus& bus_;
    MainCpu65816& cpu_;
    const SourceProfile& source_;
    GameDebugSettings settings_{};
    bool ready_{};
    std::optional<GameDebugRequest> pending_request_;
    std::string status_;
    std::array<std::array<unsigned,2>,4> original_max_{};
    std::array<std::array<bool,2>,4> captured_max_{};
    enum class CallContinuation { PartyChange, FadeOut, BlackFrame };
    struct SavedMainCpuRegisters {
        std::uint16_t accumulator, x_index, y_index, stack_pointer, direct_page;
        std::uint8_t status_register, data_bank;
        std::uint32_t program_counter;
        CallContinuation continuation;
    };
    std::optional<SavedMainCpuRegisters> suspended_call_;
    unsigned party_attempts_{};
    std::optional<DebugDestination> active_teleport_;
    void install_hooks();
    void install_teleport_hook();
    unsigned read_word(unsigned address) const;
    void write_word(unsigned address,unsigned value);
    void refresh_stats();
    std::uint8_t filter_stat_write(unsigned address,std::uint8_t value) const;
    std::uint8_t filter_damage_write(unsigned address,std::uint8_t value) const;
    bool can_apply_world_action() const;
    void advance_party_change();
    void call_game_routine(unsigned address, unsigned accumulator, unsigned x, unsigned y, CallContinuation continuation);
    void start_teleport();
};
}
