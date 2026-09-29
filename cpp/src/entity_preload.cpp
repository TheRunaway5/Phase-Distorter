#include "eb/entity_preload.hpp"

namespace eb {
void EntityPreload::adapt(GameVersion version, std::uint32_t pc,
                          std::uint8_t opcode, unsigned length,
                          std::uint32_t &operand,
                          std::uint16_t &accumulator) const {
  // These are verified sites in the frozen US/JP source translations, not
  // ROM byte patches. Guard the instruction shape as well as its address.
  // Native-width and standalone hardware callers never enter this policy.
  const bool jp = version == GameVersion::JP;
  const unsigned tiles = extra_pixels_ / 8;
  if (opcode == 0xa9 && length == 3) { // C0222B: NPC horizontal spawn bounds
    if (pc == (jp ? 0xc023a3u : 0xc02395u) && operand == 0xffc0)
      operand = std::uint16_t(-64 - int(extra_pixels_));
    else if (pc == (jp ? 0xc023b9u : 0xc023abu) && operand == 320)
      operand += extra_pixels_;
  } else if (opcode == 0xc9 && length == 3) { // C0C6B6: entity retention
    if (pc == (jp ? 0xc0c6d5u : 0xc0c6f3u) && operand == 0xff80)
      operand = std::uint16_t(-128 - int(extra_pixels_));
    else if (pc == (jp ? 0xc0c6dau : 0xc0c6f8u) && operand == 384)
      operand += extra_pixels_;
  } else if (opcode == 0x69 && length == 3) {
    if (pc == (jp ? 0xc025ceu : 0xc025c0u) && operand == 36)
      operand += 2 * tiles; // C0255C: NPC row scan length, in 8px tiles
    else if (pc == (jp ? 0xc02b55u : 0xc02b45u) && operand == 5)
      operand += 2 * extra_pixels_ / 64; // enemy row, in 64px sectors
  } else if ((opcode == 0x85 && length == 2 && operand == 4 &&
              pc == (jp ? 0xc02574u : 0xc02566u)) ||
             (opcode == 0xa8 && length == 1 &&
              pc == (jp ? 0xc02a87u : 0xc02a77u))) {
    // Row scans serve initial map loads AND vertical scrolling. Move the
    // left edge before the source saves the parameter; widen the loop above.
    accumulator = std::uint16_t(accumulator - tiles);
  } else if (opcode == 0x22 && length == 4) {
    if ((pc == (jp ? 0xc0160au : 0xc015f4u) &&
         operand == (jp ? 0xc025ddu : 0xc025cfu)) ||
        (pc == (jp ? 0xc0161cu : 0xc01606u) &&
         operand == (jp ? 0xc02b65u : 0xc02b55u)))
      accumulator = std::uint16_t(accumulator + tiles);
    else if ((pc == (jp ? 0xc0165du : 0xc01647u) &&
              operand == (jp ? 0xc025ddu : 0xc025cfu)) ||
             (pc == (jp ? 0xc0166fu : 0xc01659u) &&
              operand == (jp ? 0xc02b65u : 0xc02b55u)))
      accumulator = std::uint16_t(accumulator - tiles);
  }
}
} // namespace eb
