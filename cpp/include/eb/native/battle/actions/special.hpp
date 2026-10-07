#pragma once
#include "eb/native/battle/startup_graphics.hpp"
#include "eb/native/world_music.hpp"
#include "eb/native/story/party_membership.hpp"
#include "eb/native/world_teleport.hpp"

namespace eb::native { struct WorldSessionState; }

namespace eb::native::battle::actions {
// Authored final-battle timing/audio data. The checksum is validated during
// import; native gameplay does not execute the source hardware-check code.
class SpecialResources {
public:
    SpecialResources(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const noexcept { return version_; }
    std::span<const std::array<std::uint8_t, 2>> noises() const { return noises_; }
    std::span<const std::uint16_t> static_delays() const { return delays_; }
private:
    GameVersion version_;
    std::vector<std::array<std::uint8_t, 2>> noises_;
    std::vector<std::uint16_t> delays_;
};
// Final-battle transitions borrow the same physical transport, graphics and
// fade owners as ordinary startup. None is a replacement completion callback.
struct SpecialOwners {
    StartupGraphics& graphics;
    BackgroundLoader& loader;
    DisplaySetup& blank;
    WorldDisplayFade& fade;
    WorldEncounterVisualState& visual;
    const WorldSwirlData& swirl_data;
    PaletteBankState& colors;
    WorldEncounterState& world_encounter;
    WorldMusicState& music;
    const SpecialResources& resources;
    story::PartyMembership& membership;
    WorldSessionState& session;
    ActorWorld& actors;
    const WorldMap& map;
    const npcs::InteractionState& leader;
    const WorldTeleportData& teleports;
};
} // namespace eb::native::battle::actions
