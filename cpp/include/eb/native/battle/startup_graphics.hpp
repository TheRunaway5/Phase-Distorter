#pragma once

#include "eb/native/battle/background_loader.hpp"
#include "eb/native/dialogue/window_graphics.hpp"

namespace eb::native::battle {
// Borrowed source-data reads for the original sprite-zero pointer alias when
// it resolves outside immutable content. A call must perform the real read
// and its side effects after applying the given incoming data-bus value.
// There are no default register values or CPU execution in this interface.
class BattleSpriteReadSource {
public:
  virtual ~BattleSpriteReadSource() = default;
  virtual std::uint8_t read(std::uint32_t address, std::uint8_t incoming_bus) = 0;
  // Complete the actual preceding MULT16 hardware effects before any live
  // read. Implementations must retain its register writes and settled result;
  // the default rejects an absent arithmetic owner rather than acknowledging.
  virtual void multiply(std::uint16_t columns, std::uint16_t rows);
};
// Source allocation metadata accompanies the stable combatant scene. Unused
// records retain their prior bytes; each loaded picture initializes all16 map
// entries, including entries beyond its terminating large object.
struct BattleSpriteAllocation {
  std::uint16_t sprites{}, maps{};
  std::array<std::uint16_t, 4> enemy_ids{}, map_offsets{}, widths{}, heights{};
  std::array<std::array<std::uint8_t, 80>, 4> normal{}, alternate{};
  std::uint8_t object_size{};
  bool operator==(const BattleSpriteAllocation &) const = default;
};
// BATTLE_ROUTINE's graphical loading and initial publication. LOAD_BATTLE_BG
// runs between load_common and load_enemies, against the same raw owners.
// Loading requires forced blank and idle artwork/Frame owners. It copies real
// retained BUFFER bytes without clock/input work or consuming queued NMI DMA.
// Live decoding retains byte/index wrap but rejects a word store crossing
// beyond bank7F; the adjacent WRAM owner is not part of this graphics module.
class StartupGraphics {
public:
  StartupGraphics(const BattleCombatants &, BattleCombatantScene &,
      BattleSpriteAllocation &, dialogue::WindowGraphics &, dialogue::WindowHost &,
      const party::State &, PaletteBankState &, PsiScratch &, PsiDisplayState &,
      BackgroundDisplayState &, const WorldDisplayFade &, Frame &,
      BattleSpriteReadSource * = nullptr);
  void load_common(unsigned flavor);
  void load_enemies(unsigned group);
  // Complete C2F0D1: the first enemy whose cumulative width exceeds32 and all
  // following IDs are excluded. IDs remain in their authoritative caller list.
  unsigned admit_enemies(std::span<const std::uint16_t>) const;
  void publish_initial();
  void publish_window_palette(unsigned flavor, bool transitions_disabled);
  bool failed() const noexcept { return failed_; }
  const BattleSpriteAllocation& allocation() const noexcept { return allocation_; }
  bool uses(const BattleCombatantScene &, const PaletteBankState &,
            const PsiScratch &, const PsiDisplayState &, const Frame &) const noexcept;
  bool uses(const BattleCombatants &, const BattleCombatantScene &,
            const PaletteBankState &, const Frame &) const noexcept;
  bool uses(const BackgroundLoader& loader) const noexcept {
    return &loader.layout_ == &layout_ && frame_.uses(loader);
  }
  bool uses(const dialogue::WindowHost &, const party::State &,
            const WorldDisplayFade &) const noexcept;
private:
  void check_load() const;
  void copy(std::uint16_t source, std::uint16_t destination,
            std::uint16_t bytes, std::uint8_t mode = 0);
  const BattleCombatants &catalog_;
  BattleCombatantScene &objects_;
  BattleSpriteAllocation &allocation_;
  dialogue::WindowGraphics &artwork_;
  dialogue::WindowHost &windows_;
  const party::State &party_;
  PaletteBankState &colors_;
  PsiScratch &scratch_;
  PsiDisplayState &display_;
  BackgroundDisplayState &layout_;
  const WorldDisplayFade &fade_;
  Frame &frame_;
  BattleSpriteReadSource *reads_;
  bool failed_{};
};
} // namespace eb::native::battle
