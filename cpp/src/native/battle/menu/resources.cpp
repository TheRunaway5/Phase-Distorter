#include "eb/native/battle/menu/resources.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::battle {
std::shared_ptr<const MenuContent>
MenuContent::import(std::span<const std::uint8_t> image, GameVersion v) {
  if (v != GameVersion::US && v != GameVersion::JP)
    throw std::invalid_argument("Unsupported battle menu region");
  const bool jp = v == GameVersion::JP;
  auto read = [&](unsigned p, unsigned n) {
    if (p > image.size() || n > image.size() - p)
      throw std::invalid_argument("Truncated battle menu content");
    return image.subspan(p, n);
  };
  auto word = [&](unsigned p) {
    auto s = read(p, 2);
    return std::uint16_t(s[0] | unsigned(s[1]) << 8);
  };
  auto result = std::shared_ptr<MenuContent>(new MenuContent(v));
  auto copy = [&](std::vector<std::uint8_t> &out, unsigned p, unsigned n) {
    const auto s = read(p, n);
    out.assign(s.begin(), s.end());
  };
  const unsigned cmd = jp ? 0x474b7 : 0x49fe1, stride = jp ? 5 : 16;
  for (unsigned i = 0; i < 11; ++i)
    copy(result->commands_[i], cmd + i * stride, stride);
  const unsigned categories = jp ? 0x3ec1b : 0x3f090;
  for (unsigned i = 0; i < 3; ++i)
    copy(result->categories_[i], categories + i * (jp ? 5 : 8), jp ? 5 : 8);
  const unsigned targets = jp ? 0x3eca3 : 0x3f124;
  for (unsigned i = 0; i < 10; ++i)
    copy(result->targets_[i], targets + i * (jp ? 9 : 20), jp ? 9 : 20);
  copy(result->to_, jp ? 0x432f5 : 0x454f2, jp ? 8 : 3);
  copy(result->rows_[0], jp ? 0x432fd : 0x454f5, jp ? 4 : 13);
  copy(result->rows_[1], jp ? 0x43301 : 0x45502, jp ? 4 : 13);
  copy(result->pp_, jp ? 0x3ec9b : 0x3f11c, 8);
  copy(result->ally_, (jp ? 0x43761 : 0x45963) + 3 * (jp ? 4 : 10),
       jp ? 4 : 10);
  for (unsigned i = 0; i < 49; ++i)
    result->status_[i] = word((jp ? 0x43868 : 0x45a89) + i * 2);
  const auto windows = read(jp ? 0x4765f : 0x4a1f2, 3),
             usable = read(jp ? 0x436a9 : 0x458ab, 4);
  std::copy(windows.begin(), windows.end(), result->windows_.begin());
  std::copy(usable.begin(), usable.end(), result->usable_.begin());
  for (unsigned i = 0; i < 4; ++i)
    result->auto_cells_[i] = word((jp ? 0x3e3f0 : 0x3e40e) + i * 2);
  const unsigned abilities = jp ? 0x159a06 : 0x158a50;
  for (unsigned i = 0; i < 54; ++i) {
    const auto s = read(abilities + i * 15, 15);
    auto &a = result->psi_[i];
    a.name = s[0];
    a.level = s[1];
    a.category = s[2];
    a.usability = s[3];
    a.action = word(abilities + i * 15 + 4);
    std::copy_n(s.begin() + 6, 3, a.learned_at.begin());
    a.x = s[9];
    a.y = s[10];
    for (unsigned k = 0; k < 4; ++k)
      a.description |= std::uint32_t(s[11 + k]) << (8 * k);
  }
  for (unsigned i = 0; i < 254; ++i)
    result->items_[i] =
        word((jp ? 0x157000 : 0x155000) + i * (jp ? 24 : 39) + (jp ? 14 : 29));
  result->cannot_ = jp ? 0xc738e6 : 0xc8faaa;
  return result;
}
std::uint16_t
MenuContent::status_character(std::span<const std::uint8_t, 7> status) const {
  unsigned group = 7;
  if (status[0])
    group = 0;
  else if (status[3])
    group = 3;
  else
    for (unsigned i = 1; i < 7; ++i)
      if (status[i]) {
        group = i;
        break;
      }
  if (group == 7)
    return 32;
  if (status[group] > 7)
    throw std::out_of_range(
        "Battle target status artwork leaves imported table");
  return status_.at(group * 7 + status[group] - 1);
}
} // namespace eb::native::battle
