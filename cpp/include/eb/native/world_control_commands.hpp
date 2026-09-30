#pragma once

#include <cstdint>

namespace eb::native {
class WorldAutomatic;
class ActorWorld;

// Authored text commands CC1FED/EE/EF. The parser gathers the two focus
// operand bytes before yielding this value; zero is a literal selector.
// These are semantic operations, never source function addresses.
enum class WorldControlCommandKind { FocusNpc, FocusSprite, StopAutomatic };
struct WorldControlCommand {
  WorldControlCommandKind kind{};
  std::uint16_t selector{};
  bool operator==(const WorldControlCommand &) const = default;
};

// Scene depends on this semantic boundary without linking a world-controller
// implementation into the standalone story library. The bound service must
// operate on that Scene's authoritative actors and outlive the Scene.
class WorldControlCommandService {
public:
  virtual ~WorldControlCommandService() = default;
  virtual void apply(const WorldControlCommand &) = 0;
  virtual bool uses(const ActorWorld &) const noexcept = 0;
};

// Executes the actual camera-focus/start/stop producer against the same
// automatic movement owner used by the scene's controller. The interpreter
// resumes only after apply returns. This service never consumes a frame,
// advances an actor or manufactures an acknowledgment for missing work.
class WorldControlCommands final : public WorldControlCommandService {
public:
  explicit WorldControlCommands(WorldAutomatic &automatic)
      : automatic_(automatic) {}
  WorldControlCommands(const WorldControlCommands &) = delete;
  WorldControlCommands &operator=(const WorldControlCommands &) = delete;
  bool uses(const WorldAutomatic &automatic) const noexcept {
    return &automatic_ == &automatic;
  }
  bool uses(const ActorWorld &) const noexcept override;
  void apply(const WorldControlCommand &) override;

private:
  WorldAutomatic &automatic_;
};
} // namespace eb::native
