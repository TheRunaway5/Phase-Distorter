// Source: system/math/rand.asm. PHP/PLP preserve the caller's flags. The two
// additions explicitly clear carry, so the caller's incoming carry is unused.
#include "eb/native/story/random.hpp"

namespace eb::native::story {
std::uint8_t next_random(RandomState& state) {
    if(state.source_lease_)throw std::logic_error("An actual source RAND owns these shared words");
    const unsigned first_byte = state.primary_word & 0xff;
    const unsigned second_byte = state.secondary_word & 0xff;
    const unsigned product = first_byte * second_byte;
    state.secondary_word = std::uint16_t((first_byte << 8) + second_byte + 0x6d);

    // The first pair of RORs contributes product bits2..3 to the primary
    // addition. Keep its17th carry bit: ROR inserts it at bit15 before the
    // source additionally inserts the sum's old bit0 there with ORA#8000.
    const unsigned sum = unsigned(state.primary_word) + ((product >> 2) & 3);
    state.primary_word = std::uint16_t((sum >> 1) | ((sum & 1) << 15));
    // Carry/rotated-in high bits never reach the returned low byte.
    return std::uint8_t(product >> 4);
}
} // namespace eb::native::story
