#include "eb/native/battle/startup_graphics.hpp"
#include "eb/native/party/name_inputs.hpp"
#include "eb/native/detail/content_decoder.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::battle {
namespace {
void require(bool condition, const char *message) {
  if (!condition) throw std::logic_error(message);
}
dialogue::WindowArtwork decode_cell(std::span<const std::uint8_t, 16> raw) {
  dialogue::WindowArtwork result{};
  for (unsigned y = 0; y < 8; ++y)
    for (unsigned x = 0; x < 8; ++x)
      result[y * 8 + x] = std::uint8_t(((raw[y * 2] >> (7 - x)) & 1) |
                                     (((raw[y * 2 + 1] >> (7 - x)) & 1) << 1));
  return result;
}
void encode_cell(const dialogue::WindowArtwork &cell, std::span<std::uint8_t, 16> raw) {
  std::fill(raw.begin(), raw.end(), 0);
  for (unsigned y = 0; y < 8; ++y)
    for (unsigned x = 0; x < 8; ++x)
      for (unsigned plane = 0; plane < 2; ++plane)
        raw[y * 2 + plane] |= std::uint8_t(((cell[y * 8 + x] >> plane) & 1) << (7 - x));
}
void decode_live(BattleSpriteReadSource &reads, std::uint32_t source, PsiScratch &scratch) {
  struct Input {
    BattleSpriteReadSource &reads;
    std::uint32_t source;
    std::uint16_t offset{};
    std::uint8_t peek() { return reads.read((source + offset) & 0xffffff, std::uint8_t(source >> 16)); }
    std::uint8_t next() { const auto value = peek(); ++offset; return value; }
    std::uint16_t word() {
      const auto at = (source + offset) & 0xffffff;
      const auto low = peek();
      const auto high = reads.read((at + 1) & 0xffffff, low);
      offset = std::uint16_t(offset + 2);
      return std::uint16_t(low | unsigned(high) << 8);
    }
  } input{reads, source};
  struct Output {
    PsiScratch &scratch;
    std::uint16_t cursor = 0x8000;
    void reserve(unsigned) const {}
    void write(std::uint8_t value) { scratch.bytes[cursor++] = value; }
    void word(std::uint16_t value) {
      // Unlike separate byte stores, source STA absolute,X carries the high
      // byte into bank80 when X=FFFF. That writes an unowned WRAM mirror;
      // neither wrapping it into7F nor mutating a separate bus copy is valid.
      require(cursor != 0xffff, "Battle sprite word decompression crosses the owned scratch bank");
      write(std::uint8_t(value)); write(std::uint8_t(value >> 8));
    }
    std::uint16_t reference(std::uint16_t offset) const { return std::uint16_t(0x8000 + offset); }
    std::uint8_t read(std::uint16_t at) const { return scratch.bytes[at]; }
    void advance(std::uint16_t &at, int delta) const { at = std::uint16_t(at + delta); }
  } output{scratch};
  detail::decode_content(input, output);
}
}
void BattleSpriteReadSource::multiply(std::uint16_t, std::uint16_t) {
  throw std::logic_error("Live battle sprite source requires its completed hardware multiply owner");
}
StartupGraphics::StartupGraphics(const BattleCombatants &catalog, BattleCombatantScene &objects,
    BattleSpriteAllocation &allocation, dialogue::WindowGraphics &artwork,
    dialogue::WindowHost &windows, const party::State &party, PaletteBankState &colors,
    PsiScratch &scratch, PsiDisplayState &display, BackgroundDisplayState &layout,
    const WorldDisplayFade &fade, Frame &frame, BattleSpriteReadSource *reads)
    : catalog_(catalog), objects_(objects), allocation_(allocation), artwork_(artwork),
      windows_(windows), party_(party), colors_(colors), scratch_(scratch), display_(display),
      layout_(layout), fade_(fade), frame_(frame), reads_(reads) {
  require(artwork.version() == party.version() && windows.version() == party.version() &&
              windows.uses(artwork) && artwork.bound_to(windows.output()) &&
              frame.uses_graphics(objects, colors, scratch, display, fade, windows, party),
          "Battle startup graphics must share the actual frame, windows and region");
}
bool StartupGraphics::uses(const BattleCombatantScene &objects, const PaletteBankState &colors,
    const PsiScratch &scratch, const PsiDisplayState &display, const Frame &frame) const noexcept {
  return &objects == &objects_ && &colors == &colors_ && &scratch == &scratch_ &&
         &display == &display_ && &frame == &frame_;
}
bool StartupGraphics::uses(const dialogue::WindowHost &windows, const party::State &party,
    const WorldDisplayFade &fade) const noexcept {
  return &windows == &windows_ && &party == &party_ && &fade == &fade_;
}
bool StartupGraphics::uses(const BattleCombatants &catalog, const BattleCombatantScene &objects,
    const PaletteBankState &colors, const Frame &frame) const noexcept {
  return &catalog == &catalog_ && &objects == &objects_ && &colors == &colors_ && &frame == &frame_;
}
void StartupGraphics::check_load() const {
  require(!failed_ && !frame_.failed() && !frame_.busy() && !display_.failed(),
          "Battle startup graphics requires idle healthy owners");
  require((fade_.state().brightness & 0x80) != 0,
          "Battle startup graphics loading requires actual forced blank");
  require(windows_.uses(artwork_) && !artwork_.pending_publications(),
          "Battle startup graphics lost its idle artwork owner");
}
void StartupGraphics::copy(std::uint16_t source, std::uint16_t destination,
    std::uint16_t bytes, std::uint8_t mode) {
  auto operation = display_.begin_transfer({PsiTransferKind::Vram, source, bytes, destination, mode}, scratch_, fade_);
  require(operation->advance() && operation->complete(),
          "Forced-blank battle startup copy unexpectedly requires publication");
}
void StartupGraphics::load_common(unsigned flavor) {
  check_load();
  const party::PartyNameSnapshot names(party_);
  // Retained scratch is the sole incoming raw artwork source. The indexed
  // composition owner operates on exactly the same1184 cells, losslessly.
  std::array<dialogue::WindowArtwork, 1184> retained;
  for (unsigned i = 0; i < retained.size(); ++i)
    retained[i] = decode_cell(std::span<const std::uint8_t, 16>(scratch_.bytes.data() + i * 16, 16));
  try {
    frame_.reset_graphics();
    // LOAD_ENEMY_BATTLE_SPRITES writes only these selected mirrors/scrolls.
    layout_.mode = std::uint8_t((layout_.mode & 0xf0) | 9);
    layout_.maps[0] = 0x58; layout_.maps[1] = 0x5c; layout_.maps[2] = 0x7c;
    layout_.graphics[0] = 0x10;
    layout_.graphics[1] = std::uint8_t((layout_.graphics[1] & 0xf0) | 6);
    std::fill_n(display_.staged_scroll.begin(), 3, PsiScroll{});
    allocation_.object_size = 0x61;
    scratch_.bytes[0x8000] = 0;
    copy(0x8000, 0x7c00, 0x800, 3);
    windows_.clear_published_tilemap();
    artwork_.retain_prepared_artwork(0, retained);
    artwork_.prepare(names.inputs(), flavor);
    const auto prepared = artwork_.prepared_artwork();
    for (unsigned i = 0; i < prepared.size(); ++i)
      encode_cell(prepared[i], std::span<std::uint8_t, 16>(scratch_.bytes.data() + i * 16, 16));
    auto publication = artwork_.begin_publication(party_.version() == GameVersion::US ?
        dialogue::ArtworkPublication::GeneratedThenCommon : dialogue::ArtworkPublication::All);
    while (publication->advance() != dialogue::Progress::Finished) {
      require(publication->effect().has_value(), "Window artwork lost its actual copy effect");
      const auto effect = *publication->effect();
      copy(std::uint16_t(effect.first_cell * 16), std::uint16_t(0x6000 + effect.first_cell * 8),
           std::uint16_t(effect.cell_count * 16));
      publication->respond();
    }
  } catch (...) { failed_ = true; throw; }
}
void StartupGraphics::load_enemies(unsigned group) {
  check_load();
  auto next = catalog_.prepare(group);
  auto state = allocation_;
  state.sprites = state.maps = 0;
  // Validate full resources before touching any source pool or palette.
  for (const auto &resource : next.resources()) {
    const auto shape = catalog_.shape(resource.sprite);
    const unsigned columns = shape == 2 || shape == 4 ? 2 : shape == 5 || shape == 6 ? 4 : 1;
    const unsigned rows = shape >= 3 && shape <= 5 ? 2 : shape == 6 ? 4 : 1;
    if (catalog_.live_planar_source(resource.sprite))
      require(reads_ != nullptr, "Battle sprite source requires its actual sequential read owner");
    else (void)catalog_.planar(resource.sprite); // Empty output retains the shared source block.
    require(state.maps + columns * rows <= 32, "Battle sprite allocation exceeds authored pool");
    state.maps = std::uint16_t(state.maps + columns * rows);
  }
  state.maps = 0;
  next.bind_palette_state(colors_);
  try {
    for (const auto &resource : next.resources()) {
      const unsigned index = state.sprites;
      colors_.staged_palette(8 + index) = catalog_.packed_palette(resource.palette_id);
      state.enemy_ids[index] = std::uint16_t(resource.enemy);
      state.map_offsets[index] = state.maps;
      auto &normal = state.normal[index];
      for (unsigned i = 0; i < 16; ++i) {
        const auto tile = catalog_.tile_arrangement(state.maps + i);
        normal[i * 5] = 224;
        normal[i * 5 + 1] = std::uint8_t(tile);
        normal[i * 5 + 2] = std::uint8_t((tile >> 8) + index * 2 + 32);
        normal[i * 5 + 3] = 240;
        normal[i * 5 + 4] = 1;
      }
      const auto shape = catalog_.shape(resource.sprite);
      const unsigned columns = shape == 2 || shape == 4 ? 2 : shape == 5 || shape == 6 ? 4 : 1;
      const unsigned rows = shape >= 3 && shape <= 5 ? 2 : shape == 6 ? 4 : 1;
      for (unsigned y = 0; y < rows; ++y)
        for (unsigned x = 0; x < columns; ++x) {
          const unsigned at = (y * columns + x) * 5;
          normal[at] = std::uint8_t((rows == 4 ? -96 : -int(rows * 32)) + int(y * 32));
          normal[at + 3] = std::uint8_t(-int(columns * 16) + int(x * 32));
        }
      normal[columns * rows * 5 - 1] = 0x81;
      state.alternate[index] = normal;
      for (unsigned i = 0; i < 16; ++i) state.alternate[index][i * 5 + 2] += 8;
      state.widths[index] = std::uint16_t(columns);
      state.heights[index] = std::uint16_t(rows);
      ++state.sprites;
      if (const auto source = catalog_.live_planar_source(resource.sprite)) {
        reads_->multiply(std::uint16_t(columns), std::uint16_t(rows));
        decode_live(*reads_, *source, scratch_);
      }
      else {
        const auto planar = catalog_.planar(resource.sprite);
        for (unsigned i = 0; i < planar.size(); ++i) scratch_.bytes[std::uint16_t(0x8000 + i)] = planar[i];
      }
      unsigned from = 0x8000;
      for (unsigned part = 0; part < columns * rows; ++part) {
        const auto base = catalog_.allocation_offset(state.maps++);
        for (unsigned row = 0; row < 4; ++row)
          for (unsigned byte = 0; byte < 128; ++byte)
            scratch_.bytes[std::uint16_t(base + row * 0x200 + byte)] = scratch_.bytes[std::uint16_t(from++)];
      }
    }
    copy(0, 0x2000, state.maps > 16 ? 0x3000 : 0x2000);
    allocation_ = state;
    objects_ = std::move(next);
  } catch (...) { failed_ = true; throw; }
}
unsigned StartupGraphics::admit_enemies(std::span<const std::uint16_t> enemies) const {
  require(!failed_, "Battle startup graphics is failed");
  std::uint16_t width = 0;
  for (unsigned i = 0; i < enemies.size(); ++i) {
    width = std::uint16_t(width + catalog_.width(catalog_.enemy(enemies[i]).sprite));
    if (width > 32) return i;
  }
  return unsigned(enemies.size());
}
void StartupGraphics::publish_initial() {
  require(!failed_, "Battle startup graphics is failed");
  frame_.publish_combatants();
}
void StartupGraphics::publish_window_palette(unsigned flavor, bool transitions_disabled) {
  require(!failed_, "Battle startup graphics is failed");
  frame_.publish_window_palette(flavor, transitions_disabled);
}
} // namespace eb::native::battle
