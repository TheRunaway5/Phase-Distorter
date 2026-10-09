#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <optional>
#include <span>
#include <vector>

namespace eb { class NativeAudio; }
namespace eb::native {
namespace dialogue { struct ScriptMusicRequest; }
namespace story { struct TickState; }
namespace npcs { struct InteractionState; }
struct WorldMusicEntry {
    std::uint16_t event_flag{};
    std::uint8_t track{}, effect{};
};
// Declared per-sector content and authored ordered event predicates. Imported
// pointers are converted to immutable group/row identities once, never used
// as runtime addresses or executable callbacks.
class WorldMusicData {
public:
    WorldMusicData(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const noexcept { return version_; }
    unsigned group(std::uint16_t x, std::uint16_t y) const;
    unsigned select(unsigned group, std::span<const std::uint8_t> flags) const;
    const WorldMusicEntry &entry(unsigned group, unsigned row) const;
private:
    GameVersion version_;
    std::array<std::uint8_t, 32 * 80> sectors_{};
    std::array<std::vector<WorldMusicEntry>, 165> groups_;
};
struct WorldMusicState {
    std::uint16_t disable_changes{}, do_map_fade{};
    std::uint16_t next_track{}, current_map_track = 0xffff;
    std::optional<std::array<unsigned, 2>> selected;
    // Host continuation diagnostic; abandonment cannot resume authored music work.
    bool continuation_abandoned{};
    const void *active_sector_transition{};
};
// C068F4/C069AF/C06A07 against real flags/leader/clock and the retained audio
// owner. The selected entry and map track are distinct from the audio driver's
// current track. No map, actor, frame or controller operation happens here.
class WorldMusic {
public:
    WorldMusic(const WorldMusicData &, WorldMusicState &,
               const npcs::InteractionState &, std::span<const std::uint8_t>,
               const story::TickState &, NativeAudio &);
    bool uses(const WorldMusicState &state,const npcs::InteractionState &leader,
              const story::TickState &clock) const noexcept {
        return &state_==&state&&&leader_==&leader&&&clock_==&clock;
    }
    void select(std::uint16_t x, std::uint16_t y);
    void apply_sector();
    void restore_sector();
    void reload();
    void script_music(const dialogue::ScriptMusicRequest &);
private:
    const WorldMusicData &data_;
    WorldMusicState &state_;
    const npcs::InteractionState &leader_;
    std::span<const std::uint8_t> flags_;
    const story::TickState &clock_;
    NativeAudio &audio_;
};
} // namespace eb::native
