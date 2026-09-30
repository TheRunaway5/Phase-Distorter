#include "eb/overworld_sprite_effects.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/sprite_appearance.hpp"
#include "eb/overworld_sprite_runtime.hpp"
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"
#include <map>
#include <stdexcept>
#include <string>

namespace eb {
namespace {
struct Layout {
  unsigned seed_eight, seed_four, row, column, pixel, upload, clear, reset;
  unsigned records, count, graphics_low, graphics_high, direction, animation;
};
constexpr Layout us{0xc4283f, 0xc42884, 0xc428d1, 0xc428fc, 0xc42965,
                    0xc429ae, 0xc4c8e9, 0xc4c8a4, 0xb4aa,   0xb4a6,
                    0x29ca,   0x2a06,   0x2af6,   0x10f2};
constexpr Layout jp{0xc4277d, 0xc427c2, 0xc4280f, 0xc4283a, 0xc428a3,
                    0xc428ec, 0xc49bb9, 0xc49b74, 0xb67e,   0xb67a,
                    0x2dc8,   0x2e04,   0x2ef4,   0x10e8};
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
  if (at > bytes.size() || bytes.size() - at < 2)
    throw std::runtime_error(
        "Native sprite effect control record out of bounds");
  return bytes[at] | unsigned(bytes[at + 1]) << 8;
}
unsigned semantic_pc(unsigned address) {
  const unsigned bank = address >> 16;
  return bank != 0x7e && bank != 0x7f && ((bank & 0x40) || (address & 0x8000))
             ? address | 0xc00000
             : address;
}
void require(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(message);
}
struct Record {
  unsigned ordinal, actor, type, width, height, from, to, bytes;
};
Record record(const SnesBus &bus, const Layout &layout, unsigned ordinal) {
  const auto ram = std::span<const std::uint8_t>(bus.work_ram);
  const auto pointer =
      word(ram, layout.records) | (word(ram, layout.records + 2) << 16);
  require(pointer >= 0x7e0000 && pointer < 0x800000 && ordinal < 256,
          "Invalid native sprite fade control table");
  const auto at = pointer - 0x7e0000 + ordinal * 20;
  Record result{ordinal,
                word(ram, at),
                word(ram, at + 2),
                word(ram, at + 6),
                word(ram, at + 8),
                word(ram, at + 10),
                word(ram, at + 12),
                word(ram, at + 14)};
  require(result.actor < 30 && result.width && result.height &&
              !(result.width & 7) && !(result.height & 7) &&
              result.bytes == result.width * result.height / 2 &&
              ((result.type >= 2 && result.type <= 5) ||
               (result.type >= 7 && result.type <= 10)),
          "Unsupported native sprite fade record");
  return result;
}
void finish(MainCpu65816 &cpu, bool near = false) {
  // Each replaced far helper restores D just before returning; its caller
  // overwrites incidental A/X/Y before using them. Preserve the restored-D
  // predicate used by those authored continuations, without a graphics scalar.
  cpu.status_register &= ~(MainCpu65816::Accumulator8Bit | MainCpu65816::Zero |
                           MainCpu65816::Negative);
  if (cpu.direct_page == 0)
    cpu.status_register |= MainCpu65816::Zero;
  if (cpu.direct_page & 0x8000)
    cpu.status_register |= MainCpu65816::Negative;
  if (near)
    cpu.execute_instruction<0x60>(0, 1);
  else
    cpu.execute_instruction<0x6b>(0, 1);
}
} // namespace

struct OverworldSpriteEffects::State {
  struct Effect {
    std::uint64_t resource;
    unsigned byte_slot;
    native::SpriteEffectCanvas canvas;
  };
  Layout layout;
  unsigned displayed;
  native::SpriteEffectContent content;
  // Native fade ordinal and generation, never scratch-buffer or VRAM keys.
  std::map<unsigned, Effect> effects;
  NativeSpriteEffectDiagnostics diagnostics;
  State(std::span<const std::uint8_t> assets, GameVersion version,
        std::shared_ptr<native::SpriteResources> resources)
      : layout(version == GameVersion::JP ? jp : us),
        displayed(source_profile(version).wram_entity_displayed_sprites),
        content(assets, native::sprite_catalog_layout(version),
                std::move(resources)) {}
};
OverworldSpriteEffects::OverworldSpriteEffects(
    std::span<const std::uint8_t> assets, GameVersion version,
    std::shared_ptr<native::SpriteResources> resources)
    : state_(std::make_unique<State>(assets, version, std::move(resources))) {}
OverworldSpriteEffects::~OverworldSpriteEffects() = default;
OverworldSpriteEffects::OverworldSpriteEffects(
    const OverworldSpriteEffects &other)
    : state_(std::make_unique<State>(*other.state_)) {}
OverworldSpriteEffects &
OverworldSpriteEffects::operator=(const OverworldSpriteEffects &other) {
  if (this != &other)
    state_ = std::make_unique<State>(*other.state_);
  return *this;
}
OverworldSpriteEffects::OverworldSpriteEffects(
    OverworldSpriteEffects &&) noexcept = default;
OverworldSpriteEffects &
OverworldSpriteEffects::operator=(OverworldSpriteEffects &&) noexcept = default;
NativeSpriteEffectDiagnostics OverworldSpriteEffects::diagnostics() const {
  return state_->diagnostics;
}

bool OverworldSpriteEffects::try_execute(MainCpu65816 &cpu, SnesBus &bus,
                                         OverworldSpriteRuntime &runtime) {
  auto &s = *state_;
  const auto &l = s.layout;
  const auto pc = semantic_pc(cpu.program_counter);
  if (pc == l.reset) {
    s.effects.clear();
    return false; // This routine initializes logical scheduling records.
  }
  const bool seed = pc == l.seed_four || pc == l.seed_eight;
  if (!seed && pc != l.row && pc != l.column && pc != l.pixel &&
      pc != l.upload && pc != l.clear)
    return false;
  require(!cpu.emulation_mode &&
              !(cpu.status_register & MainCpu65816::Index8Bit),
          "Unsupported sprite effect call mode");
  const auto ram = std::span<const std::uint8_t>(bus.work_ram);
  const auto count = word(ram, l.count);
  require(count < 256, "Too many source fade control records");
  if (seed || pc == l.clear) {
    const auto control =
        record(bus, l, count); // Pending record, before length increments.
    const auto snapshot = runtime.snapshot(control.actor * 2);
    require(bool(snapshot), "Fade seed has no native actor generation");
    if (snapshot->creation.sprite.width > control.width ||
        snapshot->creation.sprite.height != control.height)
      throw std::runtime_error(
          "Fade seed geometry differs from actor generation: actor=" +
          std::to_string(control.actor) + " source=" +
          std::to_string(control.width) + "x" + std::to_string(control.height) +
          " native=" + std::to_string(snapshot->creation.sprite.width) + "x" +
          std::to_string(snapshot->creation.sprite.height));
    if (pc == l.clear) {
      require(cpu.accumulator == control.from &&
                  cpu.x_index == control.bytes * 2,
              "Unknown sprite scratch-clear caller");
      ++s.diagnostics.clears;
      cpu.x_index = 0;
      finish(cpu, true);
      return true;
    }
    const bool reveal = control.type < 6;
    require(cpu.accumulator == control.actor && cpu.y_index == control.bytes &&
                cpu.x_index == (reveal ? control.from : control.to),
            "Unknown sprite seed-copy caller");
    const auto slot = control.actor * 2;
    const unsigned source = word(ram, l.graphics_low + slot) |
                            (word(ram, l.graphics_high + slot) << 16);
    require(source >= 0xc00000 && source < 0xf00000,
            "Fade seed references non-content graphics");
    const auto group =
        runtime.resources()->group_for_frame_table(source - 0xc00000);
    require(bool(group), "Fade seed references undeclared artwork");
    require(s.content.fade_width(*group) == control.width,
            "Fade seed shape grid differs from authored content");
    const auto direction = word(ram, l.direction + slot);
    const auto pose = pc == l.seed_eight
                          ? native::eight_direction_pose(
                                direction, word(ram, l.animation + slot))
                          : native::four_direction_pose(direction, 0);
    s.effects.insert_or_assign(
        control.ordinal,
        State::Effect{snapshot->id, slot,
                      native::SpriteEffectCanvas(
                          s.content.seed(*group, pose, true),
                          reveal ? native::SpriteEffectDirection::Reveal
                                 : native::SpriteEffectDirection::Erase)});
    ++s.diagnostics.seeds;
    finish(cpu);
    return true;
  }
  std::optional<Record> found;
  for (unsigned i = 0; i < count; ++i) {
    const auto candidate = record(bus, l, i);
    if (cpu.accumulator == candidate.to &&
        (pc == l.upload ? cpu.x_index == candidate.actor
                        : cpu.x_index == candidate.from)) {
      require(!found, "Ambiguous sprite effect control record");
      found = candidate;
    }
  }
  require(bool(found), "Sprite effect helper does not match an authored fade");
  const auto &control = *found;
  auto effect = s.effects.find(control.ordinal);
  require(effect != s.effects.end(), "Sprite effect has no native seed");
  const auto current = runtime.snapshot(effect->second.byte_slot);
  require(current && current->id == effect->second.resource,
          "Sprite effect actor generation expired");
  auto &canvas = effect->second.canvas;
  if (pc == l.upload) {
    // Publication retains the displayed geometry latch, even if the most
    // recent ordinary selection was fully submerged and never changed it.
    const auto orientation =
        (word(ram, s.displayed + effect->second.byte_slot) & 1)
            ? native::SpriteOrientation::Mirrored
            : native::SpriteOrientation::Normal;
    runtime.replace_image(effect->second.byte_slot,
                          canvas.snapshot(orientation));
    ++s.diagnostics.uploads;
  } else if (pc == l.row) {
    const unsigned stride = control.width * 4;
    const auto offset = cpu.y_index % stride;
    require(offset < 16 && !(offset & 1) &&
                word(ram, std::uint16_t(cpu.direct_page + 14)) ==
                    control.width / 8,
            "Unsupported sprite effect row-copy geometry");
    canvas.copy_row(cpu.y_index / stride * 8 + offset / 2);
    ++s.diagnostics.rows;
  } else if (pc == l.column) {
    require(word(ram, std::uint16_t(cpu.direct_page + 14)) == control.height &&
                word(ram, std::uint16_t(cpu.direct_page + 16)) ==
                    control.width * 4,
            "Unsupported sprite effect column-copy geometry");
    canvas.copy_column(cpu.y_index);
    ++s.diagnostics.columns;
  } else {
    const auto tile = cpu.y_index / 32, row = cpu.y_index % 32;
    require(row < 16 && !(row & 1),
            "Unsupported sprite effect pixel-copy geometry");
    canvas.copy_tile_pixel(
        tile % (control.width / 8), tile / (control.width / 8),
        word(ram, std::uint16_t(cpu.direct_page + 14)), row / 2);
    ++s.diagnostics.pixels;
  }
  finish(cpu);
  return true;
}
} // namespace eb
