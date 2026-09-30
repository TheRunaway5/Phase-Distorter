#pragma once

#include "eb/native/world_collision.hpp"

namespace eb {
class MainCpu65816;
class SnesBus;

// Transitional input adapter for the native actor surface query. Shape content
// is imported once; the running world's current collision cells remain inputs
// from its existing loader, including dynamic overrides. This does not replace
// world-map loading or claim independence from that loader's current cache.
class ActorSurfaceService {
  public:
    ActorSurfaceService(std::span<const std::uint8_t> assets, GameVersion version);
    bool try_execute(MainCpu65816 &cpu, SnesBus &bus) const;

  private:
    GameVersion version_;
    native::WorldCollision collision_;
};
} // namespace eb
