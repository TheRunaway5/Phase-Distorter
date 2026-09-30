#include "eb/native/content_compression.hpp"
#include <stdexcept>

namespace eb::native {
// Authored asset compression, decoded once at import. Commands operate on
// bounded host vectors, including overlapping and reversed back references.
std::vector<std::uint8_t>
decompress_content(std::span<const std::uint8_t> content, std::size_t at,
                   std::size_t limit) {
  std::vector<std::uint8_t> out;
  const auto next = [&]() -> unsigned {
    if (at >= content.size())
      throw std::runtime_error("Truncated compressed content");
    return content[at++];
  };
  for (;;) {
    const unsigned header = next();
    if (header == 255)
      return out;
    unsigned command = header >> 5, count = (header & 31) + 1;
    if (command == 7) {
      command = (header >> 2) & 7;
      count = (((header & 3) << 8) | next()) + 1;
    }
    const unsigned length = count * (command == 2 ? 2 : 1);
    if (length > limit - out.size())
      throw std::runtime_error("Oversized compressed content");
    if (!command) {
      for (unsigned i = 0; i < count; ++i)
        out.push_back(std::uint8_t(next()));
    } else if (command <= 3) {
      const unsigned first = next(), second = command == 2 ? next() : 0;
      for (unsigned i = 0; i < count; ++i) {
        out.push_back(std::uint8_t(first + (command == 3 ? i : 0)));
        if (command == 2)
          out.push_back(std::uint8_t(second));
      }
    } else {
      int source = int(next() << 8);
      source |= int(next());
      for (unsigned i = 0; i < count; ++i) {
        if (source < 0 || unsigned(source) >= out.size())
          throw std::runtime_error("Invalid compressed content back reference");
        unsigned value = out[unsigned(source)];
        if (command == 5) {
          unsigned reversed = 0;
          for (unsigned bit = 0; bit < 8; ++bit) {
            reversed = (reversed << 1) | (value & 1);
            value >>= 1;
          }
          value = reversed;
        }
        out.push_back(std::uint8_t(value));
        source += command == 6 ? -1 : 1;
      }
    }
  }
}
} // namespace eb::native
