#pragma once

#include <cstdint>

namespace eb::native::detail {
// DECOMP's command execution. The input retains repeated reads of one header
// and the two-byte read operation: those distinctions matter for live I/O.
// The destination supplies either checked immutable-import storage or the
// original retained, wrapping scratch bank.
template <class Input, class Output>
void decode_content(Input &input, Output &output) {
  for (;;) {
    const unsigned first = input.peek();
    if (first == 255) return;
    unsigned command = first & 0xe0, count;
    if (command == 0xe0) {
      command = (input.peek() << 3) & 0xe0;
      const unsigned high = input.next() & 3;
      count = (high << 8 | input.next()) + 1;
    } else count = (input.next() & 31) + 1;
    output.reserve(count * (command == 0x40 ? 2 : 1));
    if (command == 0) {
      for (unsigned i = 0; i < count; ++i) output.write(input.next());
    } else if (command <= 0x60) {
      const auto value = command == 0x40 ? input.word() : input.next();
      for (unsigned i = 0; i < count; ++i) {
        if (command == 0x40) output.word(std::uint16_t(value));
        else output.write(std::uint8_t(value + (command == 0x60 ? i : 0)));
      }
    } else {
      const auto value = input.word();
      auto from = output.reference(std::uint16_t(value << 8 | value >> 8));
      for (unsigned i = 0; i < count; ++i) {
        unsigned byte = output.read(from);
        if (command == 0xa0) {
          unsigned reversed = 0;
          for (unsigned bit = 0; bit < 8; ++bit) {
            reversed = (reversed << 1) | (byte & 1);
            byte >>= 1;
          }
          byte = reversed;
        }
        output.write(std::uint8_t(byte));
        output.advance(from, command == 0xc0 ? -1 : 1);
      }
    }
  }
}
} // namespace eb::native::detail
