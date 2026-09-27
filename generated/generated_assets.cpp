// Generated from independent US and JP source builds. Do not edit.
// Route imports to each regional template without merging their layouts. The
// registry has static lifetime, so profiles and their referenced code/range
// spans remain valid during ROM identification and subsequent pack loading.
// No retail asset payload is introduced by this common registry.
#include "generated_assets.hpp"
#include "us/generated_assets.hpp"
#include "jp/generated_assets.hpp"
#include <array>
namespace eb {
const std::uint8_t* rom_data(GameVersion version) { return version == GameVersion::JP ? jp::rom_data() : us::rom_data(); }
std::size_t rom_size(GameVersion version) { return version == GameVersion::JP ? jp::rom_size() : us::rom_size(); }
AssetLayout asset_layout(GameVersion version) { return version == GameVersion::JP ? jp::asset_layout() : us::asset_layout(); }
std::span<const AssetProfile> asset_profiles() {
    static const std::array<AssetProfile, 2> profiles{{
        {GameVersion::US, "EarthBound (US)", us::asset_layout()},
        {GameVersion::JP, "Mother 2 (Japanese)", jp::asset_layout()},
    }};
    return profiles;
}
}
