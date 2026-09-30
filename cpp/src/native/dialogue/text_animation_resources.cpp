#include "eb/native/dialogue/text_animation_resources.hpp"
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
void require(bool condition, const char *message) {
    if (!condition) throw std::invalid_argument(message);
}
std::uint16_t word(std::span<const std::uint8_t> bytes, unsigned at) {
    return std::uint16_t(unsigned(bytes[at]) | (unsigned(bytes[at + 1]) << 8));
}
void validate_character(std::uint16_t character, GameVersion version) {
    // TEXT_WINDOW_GFX decodes to 0x1a00 bytes (US) / 0x2a00 (JP),
    // yielding 0xd0 / 0x150 fixed 8x16 records. Border records0..15
    // have separate flavour ownership. US LOAD_WINDOW_GFX also publishes
    // records80..cf at characters100..14f, as TextOutput's direct fixed entry
    // models. The animation owns references only, never another artwork copy.
    const bool valid = version == GameVersion::JP
        ? character >= 0x10 && character < 0x150
        : (character >= 0x10 && character < 0xd0) || (character >= 0x100 && character < 0x150);
    require(valid, "Text animation references unsupported regional fixed artwork");
}
} // namespace

std::shared_ptr<const TextAnimationResources>
TextAnimationResources::import(std::span<const std::uint8_t> image, GameVersion version) {
    require(version == GameVersion::US || version == GameVersion::JP,
            "Unsupported text animation region");
    // src/data/unknown/C3E84E.asm: UNKNOWN_C3E84E and UNKNOWN_C3E862.
    // Linked regional operands locate two adjacent assets, not an unbounded
    // string extending into following data. Sequence2 has no terminator.
    const unsigned first = version == GameVersion::JP ? 0x03e432 : 0x03e84e;
    constexpr unsigned first_bytes = 20, second_bytes = 18;
    require(image.size() >= first + first_bytes + second_bytes,
            "Truncated text animation sequence assets");
    auto result = std::shared_ptr<TextAnimationResources>(new TextAnimationResources(version));
    bool terminated = false;
    for (unsigned offset = 0; offset < first_bytes; offset += 2) {
        const auto character = word(image, first + offset);
        if (!character) {
            terminated = true;
            break;
        }
        validate_character(character, version);
        result->first_.push_back(character);
    }
    require(terminated, "Text animation sequence1 exceeds its declared terminated asset");
    for (unsigned index = 0; index < result->second_.size(); ++index) {
        const auto character = word(image, first + first_bytes + index * 2);
        validate_character(character, version);
        result->second_[index] = character;
    }
    return result;
}
GameVersion TextAnimationResources::version() const { return version_; }
std::span<const std::uint16_t> TextAnimationResources::sequence(std::uint8_t selector) const {
    if (selector == 1) return first_;
    if (selector == 2) return second_;
    throw std::invalid_argument("Text animation selector has no imported sequence");
}
} // namespace eb::native::dialogue
