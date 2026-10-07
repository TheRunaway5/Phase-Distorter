#include "eb/native/battle/actions/special.hpp"
#include <stdexcept>

namespace eb::native::battle::actions {
SpecialResources::SpecialResources(std::span<const std::uint8_t> image, GameVersion version)
    : version_(version) {
    const bool jp = version == GameVersion::JP;
    const auto byte = [&](unsigned at) {
        at &= 0x3fffff;
        if (at >= image.size()) throw std::invalid_argument("Final-battle content is truncated");
        return image[at];
    };
    const auto word = [&](unsigned at) { return std::uint16_t(byte(at) | unsigned(byte(at + 1)) << 8); };
    const unsigned noise = jp ? 0x477ca : 0x4a35d, delays = jp ? 0x4779e : 0x4a331;
    for (unsigned i = 0; ; ++i) {
        if (i == 256) throw std::invalid_argument("Final prayer noise list is unterminated");
        noises_.push_back({byte(noise + i * 2), byte(noise + i * 2 + 1)});
        if (noises_.back()[1] == 0) break;
    }
    for (unsigned i = 0; ; ++i) {
        if (i == 256) throw std::invalid_argument("Final prayer transition list is unterminated");
        const auto value = word(delays + i * 2);
        if (value == 0) break;
        delays_.push_back(value);
    }
    const unsigned check = jp ? 0xa0fb : 0xa11c, expected = jp ? 0x3f920 : 0x3fdf2;
    std::uint16_t sum{};
    for (unsigned i = 0; i <= 0x33; ++i) sum = std::uint16_t(sum + word(check + i));
    if (sum != word(expected))
        throw std::invalid_argument("Final-battle source checksum does not match the imported content");
}
} // namespace eb::native::battle::actions
