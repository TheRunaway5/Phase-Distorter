#pragma once
#include "eb/game_version.hpp"
#include "eb/render_distance.hpp"
#include <algorithm>
#include <cstdint>

namespace eb {
class SnesBus;
class MainCpu65816;
class SnapshotArchive;
// Source loaders own appearance conditions, selection and actor creation.
// The desktop path widens their queries with shared actor/task admission checks.
class EntityPreload {
public:
  void set_width(unsigned width) {
    guarded_world_ = false;
    width = std::clamp(width, 256u, 1024u);
    const unsigned margin = (width - 256 + 1) / 2;
    extra_pixels_ = margin ? ((margin + 63) / 64 + 1) * 64 : 0;
  }
  // Guarded desktop policy; set_width retains the older source-test experiment.
  void set_world_width(unsigned width, PixelBounds artwork = {}) {
    guarded_world_ = true;
    width = std::clamp(width, 256u, 1024u) & ~1u;
    extra_pixels_ = RenderDistance(width).activation_extension(artwork);
  }
  bool enabled() const { return extra_pixels_ != 0 || column_.phase != 0 || legacy_row_; }
  // Source rows/columns finish canonical activation before a wider scan.
  // Static NPCs deliberately retain the original activation limits.
  void begin_column(MainCpu65816 &cpu, std::uint8_t opcode, unsigned length,
                    std::uint32_t operand, const SnesBus *hardware);
  void finish_column(MainCpu65816 &cpu);
  void snapshot_columns(SnapshotArchive &archive, unsigned maximum_extension, const MainCpu65816 &cpu);
  void reset_columns() { column_ = {}; legacy_row_ = false; }
  void adapt(GameVersion version, std::uint32_t pc, std::uint8_t opcode,
             unsigned length, std::uint32_t &operand,
             std::uint16_t &accumulator, const SnesBus *hardware = nullptr,
             std::uint16_t direct_page = 0);

private:
  friend class MainCpu65816;
  unsigned extra_pixels_{};
  bool guarded_world_{};
  bool legacy_row_{}; // Finish a row already started by a pre-format-9 build.
  struct Registers {
    std::uint16_t a{}, x{}, y{}, direct{};
    std::uint8_t status{}, bank{};
  };
  struct Column {
    unsigned phase{}; // 0 idle, 1 canonical call, 2 additional call
    std::uint32_t site{};
    std::uint16_t stack{}, extended_x{}; // Column coordinate or frozen row extension in tiles.
    Registers input{}, canonical_return{};
  } column_;
};
} // namespace eb
