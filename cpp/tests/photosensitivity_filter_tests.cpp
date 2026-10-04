#include "eb/photosensitivity_filter.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>
#include <vector>
namespace {
void require(bool v, const char *text) {
  if (!v)
    throw std::runtime_error(text);
}
void brightness_and_identity() {
  eb::PhotosensitivityFilter filter;
  std::vector<unsigned> input{0xffffffff, 0xff808080, 0xff202020, 0xff000000};
  const std::array<unsigned, 4> expected{0xffcccccc, 0xff666666, 0xff191919,
                                         0xff000000};
  const auto out = filter.apply(input, 4, 1, true);
  require(std::equal(out.begin(), out.end(), expected.begin()),
          "Console brightness differs: expected 80 percent, not 25 percent");
  require(input[0] == 0xffffffff, "Filter wrote input");
  require(filter.apply(input, 4, 1, false).data() == input.data(),
          "Disabled filter is not exact identity");
}
void temporal_reference() {
  // Samples obtained by executing the SNES Classic mode-14 ARM kernel.
  constexpr std::array<unsigned, 24> expected{
      24, 48, 64,  80,  96,  104, 96,  88, 80, 72, 64, 56,
      72, 88, 104, 112, 120, 128, 112, 96, 88, 80, 72, 64};
  for (int width : {1, 256, 398, 522, 1024}) {
    eb::PhotosensitivityFilter f;
    std::vector<unsigned> input(width * 224);
    for (unsigned frame = 0; frame < expected.size(); ++frame) {
      std::fill(input.begin(), input.end(),
                (frame / 6) % 2 ? 0x80000000 : 0x80ffffff);
      const auto out = f.apply(input, width, 224, true, {true, false, 0});
      const auto want = 0x80000000u | expected[frame] * 0x010101u;
      require(std::all_of(out.begin(), out.end(),
                          [&](auto p) { return p == want; }),
              "Giygas feedback differs from console pixel samples");
      require(f.feedback_strength() == 7,
              "Giygas lost its feedback after a prayer frame");
    }
    f.reset();
    std::fill(input.begin(), input.end(), 0xffffffff);
    require(f.apply(input, width, 224, true)[0] == 0xffcccccc,
            "Reset retained a Giygas trail");
    f.apply(input, width, 224, true, {true, true, 13});
    require(f.feedback_strength() == 5,
            "PSI did not take precedence over Giygas");
    for (unsigned i = 0; i < 16; ++i)
      f.apply(input, width, 224, true, {true, false, 13});
    require(f.feedback_strength() == 7,
            "PSI decay failed to return to Giygas feedback");
  }
}
void resize_and_validation() {
  eb::PhotosensitivityFilter f;
  std::vector<unsigned> input(256, 0xffffffff);
  f.apply(input, 256, 1, true, {true, false, 0});
  input.resize(522, 0xffffffff);
  const auto out = f.apply(input, 522, 1, true, {true, false, 0});
  require(out[133] == 0xff303030 && out[0] == 0xff181818,
          "Resize lost centered history or invented margin history");
  bool rejected = false;
  try {
    f.apply(input, 0, 1, true);
  } catch (const std::invalid_argument &) {
    rejected = true;
  }
  require(rejected, "Invalid dimensions accepted");
  require(f.apply(input, 522, 1, false).data() == input.data(),
          "Disable retained filtered storage");
}

} // namespace
int main() {
  try {
    brightness_and_identity();
    temporal_reference();
    resize_and_validation();
    std::cout << "Console photosensitivity checks passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
