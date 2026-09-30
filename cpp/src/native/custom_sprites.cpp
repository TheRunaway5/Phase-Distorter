#include "eb/native/custom_sprites.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
struct Content {
  std::span<const std::uint8_t> bytes;
  unsigned byte(std::size_t at) const {
    if (at >= bytes.size())
      throw std::invalid_argument("Truncated custom sprite content");
    return bytes[at];
  }
  unsigned word(std::size_t at) const { return byte(at) | byte(at + 1) << 8; }
};
std::vector<std::uint8_t> decompress(Content content, std::size_t at,
                                     unsigned limit) {
  std::vector<std::uint8_t> out;
  const auto next = [&] { return content.byte(at++); };
  for (;;) {
    const unsigned header = next();
    if (header == 255)
      return out;
    unsigned command = header >> 5, count = (header & 31) + 1;
    if (command == 7) {
      command = (header >> 2) & 7;
      count = (((header & 3) << 8) | next()) + 1;
    }
    if (command == 7 || count * (command == 2 ? 2 : 1) > limit - out.size())
      throw std::invalid_argument("Invalid custom sprite compression command");
    if (!command)
      for (unsigned i = 0; i < count; ++i)
        out.push_back(next());
    else if (command <= 3) {
      const unsigned first = next(), second = command == 2 ? next() : 0;
      for (unsigned i = 0; i < count; ++i) {
        out.push_back(first + (command == 3 ? i : 0));
        if (command == 2)
          out.push_back(second);
      }
    } else {
      int source = int(next() << 8);
      source |= int(next());
      for (unsigned i = 0; i < count; ++i) {
        if (source < 0 || unsigned(source) >= out.size())
          throw std::invalid_argument("Invalid custom sprite back reference");
        unsigned value = out[unsigned(source)];
        if (command == 5) {
          unsigned reverse = 0;
          for (unsigned bit = 0; bit < 8; ++bit) {
            reverse = (reverse << 1) | (value & 1);
            value >>= 1;
          }
          value = reverse;
        }
        out.push_back(value);
        source += command == 6 ? -1 : 1;
      }
    }
  }
}
std::vector<SpriteFragment>
parse_frame(Content content, unsigned start, unsigned end,
            std::span<const std::uint8_t> graphics) {
  if (start >= end)
    throw std::invalid_argument("Invalid custom sprite frame bounds");
  std::vector<SpriteFragment> result;
  for (unsigned at = start; at < end; at += 5) {
    if (end - at < 5 || result.size() >= 128)
      throw std::invalid_argument("Unterminated custom sprite frame");
    const unsigned attributes = content.byte(at + 2),
                   flags = content.byte(at + 4);
    if (flags & 0x7e)
      throw std::invalid_argument("Unsupported custom sprite flags");
    const unsigned first = content.byte(at + 1) | ((attributes & 1) << 8);
    auto pixels = std::make_shared<SpriteFragmentPixels>();
    pixels->width = pixels->height = (flags & 1) ? 16 : 8;
    pixels->indices.resize(pixels->width * pixels->height);
    for (unsigned y = 0; y < pixels->height; ++y)
      for (unsigned x = 0; x < pixels->width; ++x) {
        const unsigned sx = attributes & 0x40 ? pixels->width - 1 - x : x,
                       sy = attributes & 0x80 ? pixels->height - 1 - y : y;
        const unsigned tile = (first & 0x100) |
                              (((first & 0xf0) + (sy / 8) * 16) & 0xf0) |
                              ((first + sx / 8) & 15);
        const unsigned row = tile * 32 + (sy & 7) * 2;
        if (row + 17 >= graphics.size())
          throw std::invalid_argument(
              "Custom sprite references absent artwork");
        unsigned color = 0;
        for (unsigned plane = 0; plane < 4; ++plane)
          color |= ((graphics[row + (plane / 2) * 16 + (plane & 1)] >>
                     (7 - (sx & 7))) &
                    1)
                   << plane;
        pixels->indices[y * pixels->width + x] = color;
      }
    result.push_back({std::int8_t(content.byte(at + 3)),
                      std::int8_t(content.byte(at)), (attributes >> 1) & 7,
                      (attributes >> 4) & 3, std::move(pixels)});
    if (flags & 0x80)
      return result;
  }
  throw std::invalid_argument("Unterminated custom sprite frame");
}
} // namespace
CustomSprites::CustomSprites(std::span<const std::uint8_t> assets,
                             GameVersion version) {
  const bool jp = version == GameVersion::JP;
  const Content content{assets};
  const unsigned cursor = jp ? 0x2fdee6 : 0x2ff5bb,
                 cursor_art = jp ? 0x2fd8e2 : 0x2fefb7;
  const unsigned title = jp ? 0x21ca4c : 0x21cf9d,
                 title_first = jp ? 0x21c80d : 0x21ce08;
  const unsigned title_art = jp ? 0x21bb01 : 0x21c6e5,
                 title_frames = jp ? 7 : 9;
  content.byte(cursor_art + 511);
  auto &debug = tables_[cursor + 0xc00000];
  const unsigned cursor_frame = (cursor & 0xff0000) | content.word(cursor);
  if (cursor_frame != cursor + 2)
    throw std::invalid_argument("Invalid debug cursor frame pointer");
  debug.push_back(parse_frame(content, cursor_frame, cursor + 47,
                              assets.subspan(cursor_art, 512)));
  auto pixels = decompress(content, title_art, 0x10000);
  // The asset contains more than the OBJ section; the authored loader selects
  // only this leading object-art span before any custom frame can reference it.
  pixels.resize(std::min<std::size_t>(pixels.size(), jp ? 0x2000 : 0x4000));
  if (pixels.empty() || (pixels.size() & 31))
    throw std::invalid_argument("Invalid title sprite artwork size");
  auto &letters = tables_[title + 0xc00000];
  for (unsigned frame = 0; frame < title_frames; ++frame) {
    const unsigned start = (title & 0xff0000) | content.word(title + frame * 2);
    const unsigned end =
        frame + 1 < title_frames
            ? ((title & 0xff0000) | content.word(title + (frame + 1) * 2))
            : title;
    if (start < title_first || end > title || start >= end)
      throw std::invalid_argument("Invalid title sprite frame pointer");
    letters.push_back(parse_frame(content, start, end, pixels));
  }
}
std::span<const SpriteFragment>
CustomSprites::frame(std::uint32_t authored_table, unsigned frame_index) const {
  return tables_.at(authored_table).at(frame_index);
}
} // namespace eb::native
