#include "eb/native/content_compression.hpp"
#include "eb/native/detail/content_decoder.hpp"
#include <stdexcept>

namespace eb::native {
// Authored asset compression, decoded once at import. Commands operate on
// bounded host vectors, including overlapping and reversed back references.
std::vector<std::uint8_t>
decompress_content(std::span<const std::uint8_t> content, std::size_t at,
                   std::size_t limit) {
  struct Input {
    std::span<const std::uint8_t> content;
    std::size_t at;
    unsigned peek() const {
      if (at >= content.size()) throw std::runtime_error("Truncated compressed content");
      return content[at];
    }
    std::uint8_t next() { const auto value = peek(); ++at; return std::uint8_t(value); }
    std::uint16_t word() { const unsigned low = next(); return std::uint16_t(low | unsigned(next()) << 8); }
  } input{content, at};
  struct Output {
    std::vector<std::uint8_t> bytes;
    std::size_t limit;
    void reserve(unsigned count) const {
      if (count > limit - bytes.size()) throw std::runtime_error("Oversized compressed content");
    }
    void write(std::uint8_t value) { bytes.push_back(value); }
    void word(std::uint16_t value) { write(std::uint8_t(value)); write(std::uint8_t(value >> 8)); }
    int reference(std::uint16_t offset) const { return offset; }
    unsigned read(int at) const {
      if (at < 0 || unsigned(at) >= bytes.size()) throw std::runtime_error("Invalid compressed content back reference");
      return bytes[unsigned(at)];
    }
    void advance(int &at, int delta) const { at += delta; }
  } output{{}, limit};
  detail::decode_content(input, output);
  return std::move(output.bytes);
}
} // namespace eb::native
