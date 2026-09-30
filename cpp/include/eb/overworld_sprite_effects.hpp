#pragma once

#include "eb/game_version.hpp"
#include "eb/native/sprite_effects.hpp"
#include <memory>

namespace eb {
class MainCpu65816;
class SnesBus;
class OverworldSpriteRuntime;
struct NativeSpriteEffectDiagnostics {
  std::uint64_t seeds{}, rows{}, columns{}, pixels{}, uploads{}, clears{};
};

// Compatibility command adapter. Scheduling remains with the authored fade
// control records; every seed/patch/published image is owned indexed C++ data.
// Copies have independent mutable canvases. No source graphics buffer, VRAM
// allocation, or descriptor is read to construct an image.
class OverworldSpriteEffects {
public:
  OverworldSpriteEffects(std::span<const std::uint8_t> assets,
                         GameVersion version,
                         std::shared_ptr<native::SpriteResources> resources);
  ~OverworldSpriteEffects();
  OverworldSpriteEffects(const OverworldSpriteEffects &);
  OverworldSpriteEffects &operator=(const OverworldSpriteEffects &);
  OverworldSpriteEffects(OverworldSpriteEffects &&) noexcept;
  OverworldSpriteEffects &operator=(OverworldSpriteEffects &&) noexcept;
  bool try_execute(MainCpu65816 &cpu, SnesBus &bus,
                   OverworldSpriteRuntime &runtime);
  NativeSpriteEffectDiagnostics diagnostics() const;

private:
  struct State;
  std::unique_ptr<State> state_;
};
} // namespace eb
