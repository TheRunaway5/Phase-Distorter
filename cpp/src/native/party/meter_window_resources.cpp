#include "eb/native/party/meter_window_resources.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::party {
std::shared_ptr<const MeterWindowResources> MeterWindowResources::import(
    std::span<const std::uint8_t> image, GameVersion version) {
    if (version != GameVersion::US && version != GameVersion::JP)
        throw std::invalid_argument("Unsupported meter resource region");
    const unsigned labels = version == GameVersion::US ? 0x03e3f8 : 0x03e3da;
    const unsigned status = version == GameVersion::US ? 0x045a27 : 0x043806;
    if (image.size() < status + 294 || image.size() < labels + 8)
        throw std::invalid_argument("Truncated meter descriptor resources");
    auto result = std::shared_ptr<MeterWindowResources>(new MeterWindowResources(version));
    std::copy_n(image.begin() + labels, 8, result->labels_.begin());
    const auto word = [&](unsigned at) { return std::uint16_t(image[at] | unsigned(image[at + 1]) << 8); };
    for (unsigned i = 0; i < 49; ++i) {
        result->characters_[i] = word(status + i * 2);
        result->palettes_[i] = word(status + 196 + i * 2);
    }
    return result;
}
MeterStatusArtwork MeterWindowResources::status(std::span<const std::uint8_t, 7> afflictions) const {
    // C223D9/C22474 prioritize easy-heal conditions, then strangeness, then
    // the first remaining nonzero group. Shield/concentration are included.
    unsigned group = 7;
    if (afflictions[0]) group = 0;
    else if (afflictions[3]) group = 3;
    else for (unsigned i = 1; i < 7; ++i) if (afflictions[i]) { group = i; break; }
    if (group == 7) return {7, 4};
    const unsigned index = group * 7 + afflictions[group] - 1;
    // The original indexes linearly rather than checking an enum's row. Keep
    // source-supported cross-row values inside the declared immutable table.
    if (index >= characters_.size())
        throw std::invalid_argument("Meter condition exceeds the imported status table");
    return {characters_[index], palettes_[index]};
}
} // namespace eb::native::party
