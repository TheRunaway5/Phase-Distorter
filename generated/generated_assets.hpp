// Generated from independent US and JP source builds. Do not edit.
// Common import interface for the frozen regional code templates. rom_data()
// exposes sparse instruction bytes with zero-filled asset gaps, not a playable
// cartridge. AssetLayout describes the gaps and complete-image fingerprint;
// load_game_assets() reconstructs and validates the image before Bus uses it.
#pragma once
#include "eb/asset_store.hpp"
#include "eb/game_version.hpp"
namespace eb {
// These images contain source instruction bytes only. Import assets before use.
const std::uint8_t* rom_data(GameVersion version = GameVersion::US);
std::size_t rom_size(GameVersion version = GameVersion::US);
AssetLayout asset_layout(GameVersion version = GameVersion::US);
std::span<const AssetProfile> asset_profiles();
}
