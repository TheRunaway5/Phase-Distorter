#pragma once

#include "eb/native/sprite_resources.hpp"
#include <array>

namespace eb::native {

struct SpriteEffectSeed {
  std::shared_ptr<const SpriteImage> image;
  unsigned width{}, height{};
  // Authored copy includes the word just beyond its planar frame. In reveal
  // effects it lands on the destination's first row, in its low two bits.
  std::array<std::uint8_t, 8> reveal_first_row{};
  // Effect grid and published artwork may have different authored row strides.
  unsigned display_width{};
  std::shared_ptr<const std::vector<std::uint8_t>> effect_pixels;
};

// Imports the authored fade grid and inclusive trailing word as indexed
// content. Its shape-specific width may exceed the sprite publication width.
// No source buffers or addresses are retained as resource identities. Both seed
// routines mask frames as four-direction artwork, including eight-way poses.
class SpriteEffectContent {
public:
  SpriteEffectContent(std::span<const std::uint8_t> assets,
                      SpriteCatalogLayout layout,
                      std::shared_ptr<SpriteResources> resources);
  SpriteEffectSeed seed(unsigned group, unsigned pose,
                        bool authored_fade_grid = false) const;
  unsigned fade_width(unsigned group) const;

private:
  std::shared_ptr<SpriteResources> resources_;
  std::vector<unsigned> fade_widths_;
  std::vector<std::vector<std::vector<std::uint8_t>>> tile_pixels_;
};

enum class SpriteEffectDirection { Reveal, Erase };

// Mutable fade artwork owned by one actor generation. Coordinates refer to the
// unpadded fade grid; publication retains the separate authored sprite stride.
// Published images and copied owners remain independent.
class SpriteEffectCanvas {
public:
  SpriteEffectCanvas(const SpriteEffectSeed &seed,
                     SpriteEffectDirection direction);
  unsigned width() const { return width_; }
  unsigned height() const { return height_; }
  void copy_row(unsigned y);
  void copy_column(unsigned x);
  void copy_tile_pixel(unsigned tile_x, unsigned tile_y, unsigned x,
                       unsigned y);
  // One selected pixel position in every 8x8 tile (the dissolve pass).
  void copy_phase(unsigned phase);
  std::shared_ptr<const SpriteImage>
  snapshot(SpriteOrientation orientation = SpriteOrientation::Authored) const;

private:
  void publish();
  unsigned width_{}, height_{}, display_width_{}, top_{};
  SpriteImage target_;
  std::shared_ptr<const std::vector<std::uint8_t>> source_;
  std::vector<std::uint8_t> pixels_;
  SpriteArtwork artwork_;
};

// The caller supplies its authored RNG result. All fades in a dissolve pass
// share this sequence, rather than drawing independent random numbers.
class SpriteDissolveSequence {
public:
  unsigned next(std::uint16_t random);
  bool complete() const { return used_ == ~std::uint64_t{}; }
  void reset() { used_ = 0; }

private:
  std::uint64_t used_{};
};

// Exact source row/column order for the two deterministic fade passes.
unsigned sprite_fade_row(unsigned step, unsigned height);
unsigned sprite_fade_column(unsigned step, unsigned width);

} // namespace eb::native
