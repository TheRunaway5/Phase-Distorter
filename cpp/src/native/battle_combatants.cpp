#include "eb/native/battle_combatants.hpp"
#include "eb/native/battle/palette_effects.hpp"
#include "eb/native/content_compression.hpp"
#include <algorithm>
#include <map>
#include <stdexcept>

namespace eb::native {
namespace {
struct Reader {
  std::span<const std::uint8_t> bytes;
  unsigned byte(std::size_t at) const {
    if (at >= bytes.size())
      throw std::runtime_error("Truncated battle combatant content");
    return bytes[at];
  }
  unsigned word(std::size_t at) const { return byte(at) | byte(at + 1) << 8; }
  unsigned pointer(std::size_t at) const {
    const auto p = word(at) | word(at + 2) << 16;
    if (p < 0xc00000 || p >= 0xf00000)
      throw std::runtime_error("Invalid battle combatant content pointer");
    return p - 0xc00000;
  }
};
int signed_word(unsigned value) {
  value &= 65535;
  return value < 32768 ? int(value) : int(value) - 65536;
}
void validate_palette(const BattleCombatantPalette &palette) {
  for (auto c : palette)
    if (c.red > 31 || c.green > 31 || c.blue > 31)
      throw std::invalid_argument("Invalid battle combatant color");
}
} // namespace
struct BattleCombatants::Content {
  struct Enemy {
    unsigned sprite, palette;
  };
  std::vector<std::shared_ptr<const BattleCombatantArtwork>> pictures;
  std::vector<BattleCombatantPalette> palettes;
  std::optional<unsigned> zero_sprite_height, zero_sprite_shape;
  std::optional<std::vector<std::uint8_t>> zero_planar;
  std::optional<std::uint32_t> zero_live_source;
  std::vector<unsigned> shapes;
  std::vector<std::array<std::uint16_t, 16>> packed_palettes;
  std::array<std::uint16_t, 32> allocation_offsets{};
  std::array<std::uint16_t, 48> tile_arrangements{};
  std::vector<Enemy> enemies;
  std::vector<std::vector<unsigned>> groups;
};
BattleCombatantLayout battle_combatant_layout(GameVersion version) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Unsupported battle combatant version");
  const bool jp = version == GameVersion::JP;
  return {0xe62ee,        0xe6514,        jp ? 0x15a440u : 0x159589u,
          0x10c60d,       0x10d52d,       0x10dfb4,
          jp ? 77u : 94u, jp ? 11u : 28u, jp ? 36u : 53u,
          110, 32, 231, 484, jp ? 0x3f3b6u : 0x3f871u, jp ? 0x3f3f6u : 0x3f8b1u};
}
BattleCombatants::BattleCombatants(std::span<const std::uint8_t> bytes,
                                   GameVersion version)
    : BattleCombatants(bytes, battle_combatant_layout(version)) {}
BattleCombatants::BattleCombatants(std::span<const std::uint8_t> bytes,
                                   BattleCombatantLayout l) {
  if (!l.picture_count || l.picture_count > 110 || !l.palette_count ||
      l.palette_count > 32 || !l.enemy_count || l.enemy_count > 231 ||
      !l.group_count || l.group_count > 484 || l.enemy_stride < 2 ||
      l.sprite_offset >= l.enemy_stride - 1 ||
      l.palette_offset >= l.enemy_stride || l.group_begin >= l.group_end ||
      l.group_end > bytes.size())
    throw std::invalid_argument("Invalid battle combatant catalog layout");
  const Reader r{bytes};
  auto c = std::make_shared<Content>();
  // OPTIMIZED_MULT(FFFF,5) carries into ADC: FFFC, then four INX
  // instructions wrap to0 before the long-indexed shape read.
  const auto zero_shape_at = std::size_t(l.pictures);
  if (zero_shape_at < bytes.size()) {
    const unsigned shape = r.byte(zero_shape_at);
    c->zero_sprite_shape = shape;
    c->zero_sprite_height = shape == 1 || shape == 2 ? 4
                           : shape >= 3 && shape <= 5 ? 8
                           : shape == 6 ? 16 : 0;
  }
  for (unsigned i = 0; i < 32; ++i) {
    c->allocation_offsets[i] = std::uint16_t(l.allocation_offsets ? r.word(l.allocation_offsets + i * 2) : (i / 4 * 0x800 + i % 4 * 0x80));
  }
  for (unsigned i = 0; i < 48; ++i) {
    c->tile_arrangements[i] = std::uint16_t(l.tile_arrangements ? r.word(l.tile_arrangements + i * 2) : (i / 4 * 0x40 + i % 4 * 4));
  }
  // Sprite0 uses a wrapped16-bit table index. Preserve a valid imported alias
  // if present; ordinary custom catalogs need not provide that adjacent data.
  if (c->zero_sprite_shape) {
    const auto at = (std::size_t(l.pictures) & ~std::size_t(0xffff)) | ((l.pictures + 0xfffc) & 0xffff);
    if (at + 2 < bytes.size()) {
      const auto pointer = std::uint32_t(r.word(at) | r.byte(at + 2) << 16);
      if (pointer >= 0xc00000 && pointer < 0xf00000) {
        try { c->zero_planar = decompress_content(bytes, pointer - 0xc00000, 65536); }
        catch (const std::runtime_error &) { c->zero_live_source = pointer; }
      } else c->zero_live_source = pointer;
    }
  }
  std::map<std::pair<unsigned, unsigned>,
           std::shared_ptr<const BattleCombatantArtwork>>
      images;
  for (unsigned id = 0; id < l.picture_count; ++id) {
    const auto at = std::size_t(l.pictures) + id * 5;
    const unsigned shape = r.byte(at + 4), pointer = r.pointer(at);
    if (shape < 1 || shape > 6)
      throw std::runtime_error("Invalid battle combatant shape");
    c->shapes.push_back(shape);
    const auto key = std::pair{pointer, shape};
    auto found = images.find(key);
    if (found == images.end()) {
      const unsigned columns = shape == 1 || shape == 3 ? 1 : shape < 5 ? 2 : 4;
      const unsigned rows = shape < 3 ? 1 : shape < 6 ? 2 : 4;
      const auto decoded =
          decompress_content(bytes, pointer, columns * rows * 512);
      if (decoded.size() != columns * rows * 512)
        throw std::runtime_error("Invalid battle combatant decoded size");
      auto image = std::make_shared<BattleCombatantArtwork>();
      image->width = columns * 32;
      image->height = rows * 32;
      image->left = -int(image->width) / 2;
      image->top = rows == 4 ? -96 : -int(image->height);
      image->indices.resize(image->width * image->height);
      image->planar = decoded;
      for (unsigned y = 0; y < image->height; ++y)
        for (unsigned x = 0; x < image->width; ++x) {
          const unsigned block = (y / 32) * columns + x / 32;
          const unsigned tile =
              block * 512 + ((y % 32) / 8 * 4 + (x % 32) / 8) * 32;
          unsigned value = 0;
          for (unsigned p = 0; p < 4; ++p)
            value |= ((decoded[tile + p / 2 * 16 + (y & 7) * 2 + (p & 1)] >>
                       (7 - (x & 7))) &
                      1)
                     << p;
          image->indices[y * image->width + x] = value;
        }
      found = images.emplace(key, std::move(image)).first;
    }
    c->pictures.push_back(found->second);
  }
  for (unsigned i = 0; i < l.palette_count; ++i) {
    auto &palette = c->palettes.emplace_back();
    auto &raw = c->packed_palettes.emplace_back();
    for (unsigned j = 0; j < 16; ++j) {
      unsigned v = r.word(std::size_t(l.palettes) + i * 32 + j * 2);
      raw[j] = std::uint16_t(v);
      palette[j] = {std::uint8_t(v & 31), std::uint8_t((v >> 5) & 31),
                    std::uint8_t((v >> 10) & 31)};
    }
  }
  for (unsigned i = 0; i < l.enemy_count; ++i) {
    const auto at = std::size_t(l.enemies) + i * l.enemy_stride;
    const unsigned sprite = r.word(at + l.sprite_offset),
                   palette = r.byte(at + l.palette_offset);
    if (sprite > l.picture_count || palette >= l.palette_count)
      throw std::runtime_error("Invalid battle combatant enemy reference");
    c->enemies.push_back({sprite, palette});
  }
  for (unsigned i = 0; i < l.group_count; ++i) {
    std::size_t at = r.pointer(std::size_t(l.groups) + i * 8);
    auto &group = c->groups.emplace_back();
    unsigned blocks = 0;
    for (;;) {
      if (at < l.group_begin || at >= l.group_end)
        throw std::runtime_error("Unterminated battle combatant group");
      if (r.byte(at) == 255)
        break;
      if (l.group_end - at < 3 || group.size() == 4)
        throw std::runtime_error("Invalid battle combatant group size");
      const unsigned enemy_id = r.word(at + 1);
      if (enemy_id >= c->enemies.size())
        throw std::runtime_error("Invalid battle combatant group enemy " +
                                 std::to_string(enemy_id) + " in " +
                                 std::to_string(i));
      if (c->enemies[enemy_id].sprite) {
        const auto &image = *c->pictures[c->enemies[enemy_id].sprite - 1];
        blocks += image.width * image.height / 1024;
      }
      if (blocks > 24)
        throw std::runtime_error(
            "Invalid battle combatant group artwork footprint");
      group.push_back(enemy_id);
      at += 3;
    }
  }
  content_ = std::move(c);
}
unsigned BattleCombatants::size() const { return content_->groups.size(); }
unsigned BattleCombatants::height(unsigned sprite) const {
  if (!sprite) {
    if (!content_->zero_sprite_height)
      throw std::out_of_range("Sprite-zero height requires its imported alias");
    return *content_->zero_sprite_height;
  }
  return content_->pictures.at(sprite - 1)->height / 8;
}
unsigned BattleCombatants::shape(unsigned sprite) const {
  if (!sprite) {
    if (!content_->zero_sprite_shape) throw std::out_of_range("Sprite-zero shape requires its imported alias");
    return *content_->zero_sprite_shape;
  }
  return content_->shapes.at(sprite - 1);
}
unsigned BattleCombatants::width(unsigned sprite) const {
  const auto value = shape(sprite);
  return value == 1 || value == 3 ? 4 : value == 2 || value == 4 ? 8 : value == 5 || value == 6 ? 16 : 0;
}
std::span<const std::uint8_t> BattleCombatants::planar(unsigned sprite) const {
  if (!sprite) {
    if (!content_->zero_planar) throw std::logic_error("Sprite-zero loading requires its actual non-content decompression source");
    return *content_->zero_planar;
  }
  return content_->pictures.at(sprite - 1)->planar;
}
std::optional<std::uint32_t> BattleCombatants::live_planar_source(unsigned sprite) const {
  if (!sprite) return content_->zero_live_source;
  (void)content_->pictures.at(sprite - 1);
  return {};
}
const std::array<std::uint16_t, 16> &BattleCombatants::packed_palette(unsigned palette) const {
  return content_->packed_palettes.at(palette);
}
unsigned BattleCombatants::allocation_offset(unsigned block) const { return content_->allocation_offsets.at(block); }
unsigned BattleCombatants::tile_arrangement(unsigned block) const { return content_->tile_arrangements.at(block); }
std::shared_ptr<const BattleCombatantArtwork>
BattleCombatants::artwork(unsigned sprite) const {
  if (!sprite)
    throw std::out_of_range("Battle sprite IDs start at one");
  return content_->pictures.at(sprite - 1);
}
BattleCombatantResource BattleCombatants::enemy(unsigned id) const {
  const auto &e = content_->enemies.at(id);
  return {id, e.sprite, e.palette, e.sprite ? artwork(e.sprite) : nullptr,
          content_->palettes.at(e.palette)};
}
BattleCombatantScene BattleCombatants::prepare(unsigned battle) const {
  auto resources = std::make_shared<std::vector<BattleCombatantResource>>();
  for (auto id : content_->groups.at(battle)) {
    auto resource = enemy(id);
    resources->push_back(std::move(resource));
  }
  return BattleCombatantScene{std::move(resources)};
}
BattleCombatantScene::BattleCombatantScene(
    std::shared_ptr<const std::vector<BattleCombatantResource>> r)
    : resources_(std::move(r)) {
  frame_.resources_ = resources_;
}
void BattleCombatantScene::bind_palette_state(
    const battle::PaletteBankState &state) {
  if (palette_state_ && palette_state_ != &state)
    throw std::logic_error("Battle combatant palette owner already bound");
  palette_state_ = &state;
}
std::array<std::optional<BattleCombatantPalette>, 4>
BattleCombatantScene::capture_palettes(unsigned first_bank) const {
  if (!palette_state_)
    return first_bank == 12
               ? alternate_
               : std::array<std::optional<BattleCombatantPalette>, 4>{};
  std::array<std::optional<BattleCombatantPalette>, 4> captured;
  for (unsigned bank = 0; bank < captured.size(); ++bank) {
    BattleCombatantPalette colors;
    for (unsigned color = 0; color < colors.size(); ++color) {
      const auto packed =
          palette_state_->displayed_palette(first_bank + bank)[color];
      colors[color] = {std::uint8_t(packed & 31),
                       std::uint8_t((packed >> 5) & 31),
                       std::uint8_t((packed >> 10) & 31)};
    }
    captured[bank] = colors;
  }
  return captured;
}
void BattleCombatantScene::set_alternate_palette(
    unsigned resource, BattleCombatantPalette palette) {
  if (palette_state_)
    throw std::logic_error("Battle combatant palettes have a shared owner");
  if (resource >= resources_->size())
    throw std::out_of_range("Unknown battle combatant resource");
  validate_palette(palette);
  alternate_.at(resource) = std::move(palette);
}
void BattleCombatantScene::publish(std::span<BattleCombatantPresentation> input,
                                   BattleCombatantTick tick) {
  if (input.size() > 24)
    throw std::invalid_argument("Too many battle combatant presentations");
  std::array<bool, 32> slots{};
  std::vector<BattleCombatantPresentation> next(input.begin(), input.end());
  for (const auto &v : next) {
    if (v.slot < 8 || v.slot >= 32 || slots[v.slot] || v.row > 1 ||
        v.resource >= resources_->size())
      throw std::invalid_argument("Invalid battle combatant presentation");
    if (v.identity &&
        std::count_if(next.begin(), next.end(), [&](const auto &other) {
          return other.identity == v.identity;
        }) != 1)
      throw std::invalid_argument("Duplicate battle combatant motion identity");
    slots[v.slot] = true;
  }
  BattleCombatantFrame frame;
  frame.resources_ = resources_;
  frame.normal_ = capture_palettes(8);
  frame.alternate_ = capture_palettes(12);
  std::array<BattleCombatantPresentation *, 32> ordered{};
  for (auto &v : next)
    ordered[v.slot] = &v;
  for (unsigned row = 0; row < 2; ++row)
    for (unsigned slot = 8; slot < 32; ++slot) {
      auto *v = ordered[slot];
      if (!v || !v->conscious || v->incapacitated || !v->enemy ||
          !v->artwork_enabled || v->row != row)
        continue;
      if (v->blink && ((--v->blink / 3) & 1))
        continue;
      bool alternate = false;
      if (v->alternate_flash)
        alternate = !(--v->alternate_flash & 4);
      alternate |= v->alternate || (tick.targeting_flash &&
                                    (!v->targeted || (tick.frame_phase & 8)));
      if (!resources_->at(v->resource).artwork)
        throw std::logic_error("Visible battle combatant has no artwork");
      if (alternate && !frame.alternate_[v->resource])
        throw std::logic_error(
            "Battle combatant alternate palette has not been published");
      frame.commands_.push_back(
          {slot, v->resource, v->identity,
           signed_word(unsigned(v->x) - tick.horizontal_offset),
           signed_word(unsigned(v->y) - tick.vertical_offset), alternate});
    }
  frame_ = std::move(frame);
  for (unsigned i = 0; i < input.size(); ++i) {
    input[i].blink = next[i].blink;
    input[i].alternate_flash = next[i].alternate_flash;
  }
}
void BattleCombatantScene::publish_palettes() {
  frame_.normal_ = capture_palettes(8);
  frame_.alternate_ = capture_palettes(12);
}
std::shared_ptr<const DirectSceneFrame>
BattleCombatantFrame::draw(unsigned width, std::uint64_t frame,
                           std::uint64_t identity) const {
  if (width < 256 || width > 4096 || width % 2 || !resources_)
    throw std::invalid_argument("Invalid battle combatant draw request");
  auto out = std::make_shared<DirectSceneFrame>();
  out->width = width;
  out->frame = frame;
  out->scene_identity = identity;
  out->atlas_width = 128;
  std::map<std::pair<unsigned, bool>, unsigned> atlas_rows;
  const int margin = (int(width) - 256) / 2;
  for (const auto &command : commands_) {
    const auto &resource = resources_->at(command.resource);
    const auto &image = *resource.artwork;
    const auto key = std::pair{command.resource, command.alternate};
    auto found = atlas_rows.find(key);
    if (found == atlas_rows.end()) {
      unsigned top = out->atlas_height;
      out->atlas_height += image.height;
      out->atlas.resize(std::size_t(out->atlas_width) * out->atlas_height);
      if (normal_[0])
        out->palette_indices.resize(out->atlas.size(), 256);
      const auto &palette =
          command.alternate
              ? *alternate_[command.resource]
              : normal_[command.resource].value_or(resource.palette);
      for (unsigned y = 0; y < image.height; ++y)
        for (unsigned x = 0; x < image.width; ++x) {
          const auto index = image.indices[y * image.width + x];
          if (index) {
            const auto at = (top + y) * out->atlas_width + x;
            out->atlas[at] = palette_argb(palette[index]);
            if (normal_[0])
              out->palette_indices[at] = std::uint16_t(
                  ((command.alternate ? 12 : 8) + command.resource) * 16 +
                  index);
          }
        }
      found = atlas_rows.emplace(key, top).first;
    }
    const unsigned motion = out->motions.size();
    out->motions.push_back(
        {command.identity, float(command.x + margin), float(command.y)});
    for (unsigned y = 0; y < image.height; y += 32)
      for (unsigned x = 0; x < image.width; x += 32) {
        const int left = signed_word(command.x + image.left + int(x));
        const int top = signed_word(command.y + image.top + int(y) - 1);
        // The authored emitter rejects a part before hardware wrapping. This
        // retains source placement without depending on an OAM storage limit.
        if (left < -256 || left > 255 || top < -32 || top > 223)
          continue;
        out->quads.push_back({x, found->second + y, 32, 32,
                              float(left + margin), float(top), 7, motion,
                              true});
        out->quads.back().layer = DirectSceneFrame::Layer::Actors;
        // Normal banks8..11 are OBJ palettes0..3, which bypass color math;
        // alternate banks12..15 are OBJ palettes4..7, which participate.
        out->quads.back().color_math_eligible = command.alternate;
      }
  }
  if (!out->atlas_height) {
    out->atlas_height = 1;
    out->atlas.resize(out->atlas_width);
  }
  return out;
}
} // namespace eb::native
