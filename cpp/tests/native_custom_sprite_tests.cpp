#include "eb/native/custom_sprites.hpp"
#include <algorithm>
#include <functional>
#include <iostream>
#include <stdexcept>

namespace {
void require(bool ok, const char *message) {
  if (!ok)
    throw std::runtime_error(message);
}
void rejects(const std::function<void()> &action) {
  try {
    action();
  } catch (const std::exception &) {
    return;
  }
  throw std::runtime_error("Invalid custom sprite content accepted");
}
std::vector<std::uint8_t> fixture(bool jp) {
  std::vector<std::uint8_t> data(0x300000);
  const auto put = [&](unsigned at, unsigned word) {
    data[at] = word;
    data[at + 1] = word >> 8;
  };
  const unsigned cursor = jp ? 0x2fdee6 : 0x2ff5bb,
                 debugart = jp ? 0x2fd8e2 : 0x2fefb7;
  const unsigned title = jp ? 0x21ca4c : 0x21cf9d,
                 start = jp ? 0x21c80d : 0x21ce08;
  const unsigned art = jp ? 0x21bb01 : 0x21c6e5;
  put(cursor, cursor + 2);
  data[cursor + 2] = 0xf4;
  data[cursor + 3] = 1;
  data[cursor + 4] = 0x76;
  data[cursor + 5] = 4;
  data[cursor + 6] = 0x80;
  for (unsigned i = 0; i < 512; ++i)
    data[debugart + i] = i;
  for (unsigned i = 0; i < (jp ? 7 : 9); ++i) {
    put(title + i * 2, start + i * 5);
    data[start + i * 5] = 0xf8;
    data[start + i * 5 + 1] = i;
    data[start + i * 5 + 2] = 0xf6;
    data[start + i * 5 + 3] = 8;
    data[start + i * 5 + 4] = 0x80 | (i & 1);
  }
  // Long incrementing-byte commands exercise the actual compressed importer,
  // while remaining inside the independent authored content range.
  for (unsigned i = 0; i < (jp ? 8 : 16); ++i) {
    data[art + i * 3] = 0xef;
    data[art + i * 3 + 1] = 0xff;
    data[art + i * 3 + 2] = 0;
  }
  data[art + (jp ? 8 : 16) * 3] = 0xff;
  return data;
}
void verify(bool jp) {
  const auto version = jp ? eb::GameVersion::JP : eb::GameVersion::US;
  auto data = fixture(jp);
  const unsigned cursor = jp ? 0xefdee6 : 0xeff5bb,
                 title = jp ? 0xe1ca4c : 0xe1cf9d;
  std::shared_ptr<const eb::native::SpriteFragmentPixels> retained;
  {
    eb::native::CustomSprites sprites(data, version);
    const auto debug = sprites.frame(cursor, 0);
    require(debug.size() == 1 && debug[0].left == 4 && debug[0].top == -12 &&
                debug[0].palette == 3 && debug[0].priority == 3,
            "Custom part metadata differs");
    require(debug[0].pixels->width == 8 &&
                sprites.frame(title, 1)[0].pixels->width == 16,
            "Custom small/large parts differ");
    const auto indices = debug[0].pixels->indices;
    require(std::any_of(indices.begin(), indices.end(),
                        [](auto v) { return v != 0; }),
            "Vacuous custom pixel fixture");
    retained = debug[0].pixels;
    auto copied = sprites;
    std::fill(data.begin(), data.end(), 0xff);
    require(copied.frame(cursor, 0)[0].pixels->indices == indices,
            "Custom importer borrowed mutable asset bytes");
    rejects([&] { sprites.frame(cursor, 1); });
    rejects([&] { sprites.frame(title + 1, 0); });
    rejects([&] { sprites.frame(title, jp ? 7 : 9); });
  }
  require(retained && retained->indices.size() == 64,
          "Custom pixels did not outlive importer");
  data = fixture(jp);
  data.resize(3);
  rejects([&] { eb::native::CustomSprites bad(data, version); });
  data = fixture(jp);
  data[cursor - 0xc00000] = 0;
  rejects([&] { eb::native::CustomSprites bad(data, version); });
  data = fixture(jp);
  data[cursor - 0xc00000 + 6] = 0x82;
  rejects([&] { eb::native::CustomSprites bad(data, version); });
  data = fixture(jp);
  const auto art = jp ? 0x21bb01 : 0x21c6e5;
  data[art] = 0x80;
  data[art + 1] = 0;
  data[art + 2] = 0;
  rejects([&] { eb::native::CustomSprites bad(data, version); });
  data = fixture(jp);
  data[art] = 0xfc;
  data[art + 1] = 0;
  rejects([&] { eb::native::CustomSprites bad(data, version); });
  data = fixture(jp);
  data[art] = 0xff;
  rejects([&] { eb::native::CustomSprites bad(data, version); });
}
} // namespace
int main() {
  try {
    verify(false);
    verify(true);
    std::cout << "Native custom sprites: sizes, metadata, lifetime, bounds and "
                 "malformed assets passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
