#include "eb/native/sprite_effects.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
unsigned word(std::span<const std::uint8_t> bytes, std::size_t at) {
  if (at > bytes.size() || bytes.size() - at < 2)
    throw std::invalid_argument("Truncated sprite effect content");
  return bytes[at] | unsigned(bytes[at + 1]) << 8;
}
unsigned pointer(std::span<const std::uint8_t> bytes, unsigned at) {
  const auto low = word(bytes, at), high = word(bytes, at + 2);
  const auto value = low | high << 16;
  if (value < 0xc00000 || value >= 0xf00000)
    throw std::invalid_argument("Invalid sprite effect content pointer");
  return value - 0xc00000;
}
const SpriteImage &image(const SpriteEffectSeed &seed) {
  if (!seed.image || !seed.image->layout || !seed.image->canvas)
    throw std::invalid_argument("Missing sprite effect seed image");
  return *seed.image;
}
void dimension(unsigned value) {
  if (!value || value > 4096 || (value & 7))
    throw std::invalid_argument("Invalid sprite effect dimension");
}
} // namespace

SpriteEffectContent::SpriteEffectContent(
    std::span<const std::uint8_t> assets, SpriteCatalogLayout layout,
    std::shared_ptr<SpriteResources> resources)
    : resources_(std::move(resources)) {
  if (!resources_ || resources_->size() != layout.group_count)
    throw std::invalid_argument("Sprite effect catalog does not match artwork");
  for (unsigned group = 0; group < resources_->size(); ++group) {
    const auto &def = resources_->definition(group);
    const auto base = pointer(assets, layout.groups + group * 4);
    (void)word(assets, base + 8);
    const unsigned bank = assets[base + 8];
    // C4C91A selects its fade grid from the authored per-shape width table,
    // which precedes the shape pointer table by 170 bytes in both regions.
    const unsigned fade_width =
        word(assets, layout.shapes - 170 + def.shape * 2);
    dimension(fade_width);
    if (fade_width < def.width)
      throw std::invalid_argument(
          "Fade grid is narrower than published artwork");
    fade_widths_.push_back(fade_width);
    auto &frames = tile_pixels_.emplace_back();
    for (unsigned frame = 0; frame < def.frames; ++frame) {
      const unsigned reference = word(assets, base + 9 + frame * 2);
      const unsigned address = (bank << 16) | (reference & 0xfff0);
      if (address < 0xc00000 || address >= 0xf00000)
        throw std::invalid_argument("Invalid sprite effect frame");
      const auto offset = address - 0xc00000;
      auto &pixels = frames.emplace_back();
      const unsigned tiles = fade_width * def.height / 64;
      pixels.resize(tiles * 64 + 8);
      for (unsigned tile = 0; tile < tiles; ++tile)
        for (unsigned y = 0; y < 8; ++y)
          for (unsigned x = 0; x < 8; ++x) {
            unsigned value = 0;
            for (unsigned pair = 0; pair < 2; ++pair) {
              const auto row =
                  word(assets, offset + tile * 32 + y * 2 + pair * 16);
              value |= (((row >> (7 - x)) & 1) | (((row >> (15 - x)) & 1) << 1))
                       << (pair * 2);
            }
            pixels[tile * 64 + y * 8 + x] = value;
          }
      const auto tail = word(assets, offset + tiles * 32);
      for (unsigned x = 0; x < 8; ++x)
        pixels[tiles * 64 + x] =
            ((tail >> (7 - x)) & 1) | (((tail >> (15 - x)) & 1) << 1);
    }
  }
}
unsigned SpriteEffectContent::fade_width(unsigned group) const {
  return fade_widths_.at(group);
}
SpriteEffectSeed SpriteEffectContent::seed(unsigned group, unsigned pose,
                                           bool authored_fade_grid) const {
  const auto &tiles = tile_pixels_.at(group).at(pose);
  const auto &def = resources_->definition(group);
  const auto width = authored_fade_grid ? fade_widths_.at(group) : def.width;
  auto pixels = std::make_shared<std::vector<std::uint8_t>>(width * def.height);
  for (unsigned y = 0; y < def.height; ++y)
    for (unsigned x = 0; x < width; ++x)
      (*pixels)[y * width + x] = tiles.at(((y / 8) * (width / 8) + x / 8) * 64 +
                                          (y & 7) * 8 + (x & 7));
  std::array<std::uint8_t, 8> spill{};
  for (unsigned x = 0; x < 8; ++x)
    spill[x] = tiles.at(width * def.height + x) & 3;
  return {resources_->acquire(group, pose, SpriteSurface::Normal,
                              SpriteFrameFormat::FourDirection),
          width,
          def.height,
          spill,
          def.width,
          std::move(pixels)};
}

SpriteEffectCanvas::SpriteEffectCanvas(const SpriteEffectSeed &seed,
                                       SpriteEffectDirection direction)
    : width_(seed.width), height_(seed.height),
      display_width_(seed.display_width ? seed.display_width : seed.width),
      top_(seed.height & 15), target_(image(seed)), artwork_(target_) {
  dimension(width_);
  dimension(height_);
  dimension(display_width_);
  if (display_width_ > width_ ||
      target_.layout->canvas_width != ((display_width_ + 15) & ~15u) ||
      target_.layout->canvas_height != ((height_ + 15) & ~15u) ||
      std::any_of(seed.reveal_first_row.begin(), seed.reveal_first_row.end(),
                  [](auto value) { return value > 3; }))
    throw std::invalid_argument("Sprite effect seed geometry or spill differs");
  auto authored = std::make_shared<std::vector<std::uint8_t>>(width_ * height_);
  if (seed.effect_pixels) {
    if (seed.effect_pixels->size() != authored->size() ||
        std::any_of(seed.effect_pixels->begin(), seed.effect_pixels->end(),
                    [](auto v) { return v > 15; }))
      throw std::invalid_argument("Invalid sprite effect indexed payload");
    *authored = *seed.effect_pixels;
  } else {
    if (width_ != display_width_)
      throw std::invalid_argument("Missing expanded fade payload");
    for (unsigned y = 0; y < height_; ++y)
      std::copy_n(target_.canvas->begin() +
                      (y + top_) * target_.layout->canvas_width,
                  width_, authored->begin() + y * width_);
  }
  if (direction == SpriteEffectDirection::Reveal) {
    source_ = authored;
    pixels_.resize(authored->size());
    std::copy(seed.reveal_first_row.begin(), seed.reveal_first_row.end(),
              pixels_.begin());
  } else if (direction == SpriteEffectDirection::Erase) {
    source_ =
        std::make_shared<const std::vector<std::uint8_t>>(authored->size());
    pixels_ = *authored;
  } else
    throw std::invalid_argument("Invalid sprite effect direction");
  publish();
}
void SpriteEffectCanvas::publish() {
  auto output =
      std::make_shared<std::vector<std::uint8_t>>(target_.canvas->size());
  // The source publication consumes the tile stream using the sprite group's
  // stride, even when the fade itself addresses a wider shape-specific grid.
  for (unsigned y = 0; y < height_; ++y)
    for (unsigned x = 0; x < display_width_; ++x) {
      const unsigned tile = (y / 8) * (display_width_ / 8) + x / 8;
      const unsigned sx = (tile % (width_ / 8)) * 8 + (x & 7),
                     sy = (tile / (width_ / 8)) * 8 + (y & 7);
      (*output)[(y + top_) * target_.layout->canvas_width + x] =
          pixels_[sy * width_ + sx];
    }
  target_.canvas = std::move(output);
  artwork_.apply_tiles(target_, 0,
                       artwork_.tile_columns() * artwork_.tile_rows());
}
void SpriteEffectCanvas::copy_row(unsigned y) {
  if (y >= height_)
    throw std::out_of_range("Sprite effect row out of bounds");
  std::copy_n(source_->begin() + y * width_, width_,
              pixels_.begin() + y * width_);
  publish();
}
void SpriteEffectCanvas::copy_column(unsigned x) {
  if (x >= width_)
    throw std::out_of_range("Sprite effect column out of bounds");
  for (unsigned y = 0; y < height_; ++y)
    pixels_[y * width_ + x] = (*source_)[y * width_ + x];
  publish();
}
void SpriteEffectCanvas::copy_tile_pixel(unsigned tile_x, unsigned tile_y,
                                         unsigned x, unsigned y) {
  if (tile_x >= width_ / 8 || tile_y >= height_ / 8 || x >= 8 || y >= 8)
    throw std::out_of_range("Sprite effect tile pixel out of bounds");
  const auto at = (tile_y * 8 + y) * width_ + tile_x * 8 + x;
  pixels_[at] = (*source_)[at];
  publish();
}
void SpriteEffectCanvas::copy_phase(unsigned phase) {
  if (phase >= 64)
    throw std::out_of_range("Sprite effect dissolve phase out of bounds");
  for (unsigned y = phase / 8; y < height_; y += 8)
    for (unsigned x = phase & 7; x < width_; x += 8)
      pixels_[y * width_ + x] = (*source_)[y * width_ + x];
  publish();
}
std::shared_ptr<const SpriteImage>
SpriteEffectCanvas::snapshot(SpriteOrientation orientation) const {
  return artwork_.snapshot(orientation);
}

unsigned SpriteDissolveSequence::next(std::uint16_t random) {
  if (complete())
    throw std::out_of_range("Sprite dissolve sequence is complete");
  unsigned next = random & 63;
  while (used_ & (std::uint64_t{1} << next))
    next = (next + 1) & 63;
  used_ |= std::uint64_t{1} << next;
  return next;
}
unsigned sprite_fade_row(unsigned step, unsigned height) {
  dimension(height);
  if (step >= height)
    throw std::out_of_range("Sprite row fade is complete");
  return (step % (height / 2)) * 2 + (step >= height / 2);
}
unsigned sprite_fade_column(unsigned step, unsigned width) {
  dimension(width);
  if (step >= width)
    throw std::out_of_range("Sprite column fade is complete");
  const auto position = step % (width / 2);
  return bool(position & 1) == (step < width / 2) ? position
                                                  : width - position - 1;
}
} // namespace eb::native
