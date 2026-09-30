#include "eb/native/sprite_effects.hpp"
#include <functional>
#include <iostream>
#include <set>
#include <stdexcept>

namespace {
using namespace eb::native;
void check(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(message);
}
void rejects(const std::function<void()> &action) {
  try {
    action();
  } catch (const std::exception &) {
    return;
  }
  throw std::runtime_error("Invalid sprite effect input was accepted");
}
SpriteEffectSeed seed() {
  auto layout = std::make_shared<SpriteImage::Layout>();
  layout->canvas_width = layout->canvas_height = 32;
  for (unsigned mirror = 0; mirror < 2; ++mirror)
    for (unsigned i = 0; i < 4; ++i)
      layout->parts[mirror].push_back(
          {int(i % 2) * 16, int(i / 2) * 16, i < 2, bool(mirror), false});
  auto pixels = std::make_shared<std::vector<std::uint8_t>>(1024);
  for (unsigned y = 8; y < 32; ++y)
    for (unsigned x = 0; x < 24; ++x)
      (*pixels)[y * 32 + x] = 1 + (x + y) % 15;
  auto image = std::make_shared<SpriteImage>();
  image->layout = layout;
  image->canvas = pixels;
  image->palette = 4;
  return {image, 24, 24, {1, 2, 3, 0, 3, 2, 1, 0}, 0, {}};
}
} // namespace
int main() {
  try {
    // The authored fade grid can be wider than the published sprite. A row
    // in the source grid becomes a different row of tiles at publication.
    auto expanded = seed();
    expanded.width = 32;
    expanded.display_width = 24;
    auto expanded_pixels = std::make_shared<std::vector<std::uint8_t>>(32 * 24);
    for (unsigned y = 0; y < 24; ++y)
      for (unsigned x = 0; x < 32; ++x)
        (*expanded_pixels)[y * 32 + x] = 1 + ((y / 8) * 4 + x / 8) % 15;
    expanded.effect_pixels = expanded_pixels;
    SpriteEffectCanvas wide(expanded, SpriteEffectDirection::Erase);
    auto first = wide.snapshot();
    check(
        (*first->canvas)[16 * 32] == 4 && (*first->canvas)[16 * 32 + 8] == 5,
        "Fade publication used grid stride instead of authored sprite stride");
    wide.copy_column(24);
    auto second = wide.snapshot();
    check((*second->canvas)[16 * 32] == 0 && (*first->canvas)[16 * 32] == 4,
          "Expanded fade patch or immutable snapshot lifetime differs");
    const auto original = seed();
    SpriteEffectCanvas rows(original, SpriteEffectDirection::Reveal);
    const auto old = rows.snapshot();
    check((*old->canvas)[8 * 32] == 1 && (*old->canvas)[8 * 32 + 7] == 0 &&
              (*old->canvas)[9 * 32] == 0,
          "Inclusive source spill must affect only its first8pixels");
    std::set<unsigned> row_order, column_order;
    for (unsigned i = 0; i < 24; ++i) {
      const auto row = sprite_fade_row(i, 24);
      row_order.insert(row);
      rows.copy_row(row);
      column_order.insert(sprite_fade_column(i, 24));
    }
    check(
        row_order.size() == 24 && column_order.size() == 24 &&
            sprite_fade_row(11, 24) == 22 && sprite_fade_row(12, 24) == 1 &&
            sprite_fade_column(0, 24) == 23 && sprite_fade_column(1, 24) == 1 &&
            sprite_fade_column(12, 24) == 0 && sprite_fade_column(13, 24) == 22,
        "Fade pass order differs");
    check(*rows.snapshot()->canvas == *original.image->canvas,
          "Row reveal did not restore exact artwork");
    check((*old->canvas)[9 * 32] == 0,
          "Published image changed after later row copies");
    auto independent = rows;
    rejects([&] { rows.copy_row(24); });
    rejects([&] { rows.copy_column(24); });
    rejects([&] { rows.copy_tile_pixel(3, 0, 0, 0); });
    rejects([&] { rows.copy_phase(64); });
    check(rows.snapshot() == independent.snapshot(),
          "Rejected edit changed published artwork");
    SpriteEffectCanvas columns(original, SpriteEffectDirection::Erase);
    const auto retained = columns.snapshot();
    independent = columns;
    for (unsigned i = 0; i < 24; ++i)
      columns.copy_column(sprite_fade_column(i, 24));
    check(std::set(columns.snapshot()->canvas->begin(),
                   columns.snapshot()->canvas->end()) ==
              std::set<std::uint8_t>{0},
          "Column erase left opaque pixels");
    check(*retained->canvas == *original.image->canvas &&
              *independent.snapshot()->canvas == *original.image->canvas,
          "Copied effect owner or prior image changed through another owner");
    SpriteDissolveSequence sequence;
    SpriteEffectCanvas pixels(original, SpriteEffectDirection::Reveal);
    std::set<unsigned> phases;
    for (unsigned i = 0; i < 64; ++i) {
      const auto phase = sequence.next(63);
      check(phase == ((63 + i) & 63),
            "Dissolve collisions must scan forward and wrap");
      phases.insert(phase);
      pixels.copy_phase(phase);
    }
    check(sequence.complete() && phases.size() == 64 &&
              *pixels.snapshot()->canvas == *original.image->canvas,
          "Dissolve missed source pixels");
    rejects([&] { sequence.next(0); });
    sequence.reset();
    check(sequence.next(128) == 0,
          "Dissolve reset or source random mask differs");
    SpriteEffectCanvas single(original, SpriteEffectDirection::Erase);
    single.copy_tile_pixel(1, 2, 7, 3);
    const auto changed = (8 + 2 * 8 + 3) * 32 + 15;
    for (unsigned i = 0; i < 1024; ++i)
      check((*single.snapshot()->canvas)[i] ==
                (i == changed ? 0 : (*original.image->canvas)[i]),
            "Single pixel update changed another source pixel");
    std::cout << "Native sprite effects: row/column/dissolve, spill, lifetime "
                 "and bounds passed\n";
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
