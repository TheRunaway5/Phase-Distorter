#pragma once

#include "eb/native/character_growth.hpp"
#include <functional>
#include <memory>
#include <optional>
#include <vector>

namespace eb::native {
enum class GrowthMessage {
  Level,
  Offense,
  Defense,
  Speed,
  Guts,
  Vitality,
  IQ,
  Luck,
  HP,
  PP,
  PSI
};
enum class GrowthRequestKind { LevelUpMusic, Message, PromptMode };
enum class GrowthRequestTiming { Immediate, MaySuspend };
struct GrowthTargetName {
  // Copy exactly length bytes (including embedded zeros), then append a NUL.
  std::array<std::uint8_t, 5> bytes{};
  unsigned length{};
  // US clears the target enemy ID to ffff; JP has no such field.
  bool clear_enemy_id{};
};
struct GrowthPresentationRequest {
  GrowthRequestKind kind{};
  GrowthRequestTiming timing{};
  std::optional<std::uint16_t> prompt_mode;
  std::optional<GrowthTargetName> target_name;
  std::optional<std::uint32_t> number;
  std::optional<std::uint8_t> psi;
  std::optional<GrowthMessage> message;
  // Authored dialogue data reference, resolved by the native dialogue Program.
  // It is never executed as a processor address.
  std::array<std::uint8_t, 4> authored_message{};
};
enum class GrowthProgress { AwaitingRequest, Complete };

// Owns only imported presentation content and operation exclusivity. Existing
// party/RNG/context owners and this service must outlive borrowing operations.
// A response means the named host work is finished. Immediate requests cannot
// advance world/RNG/time; message/music hosts may suspend at their true source
// boundaries. No UI or audio implementation is hidden inside this owner.
class VisibleCharacterGrowth {
public:
  // Read-only and synchronous; it must not consume RNG or advance the world.
  using ContextReader = std::function<CharacterGrowthContext(unsigned)>;
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    GrowthProgress advance();
    const std::optional<GrowthPresentationRequest> &request() const noexcept {
      return request_;
    }
    void respond();
    bool complete() const noexcept;
    unsigned levels_gained() const noexcept { return levels_gained_; }

  private:
    friend class VisibleCharacterGrowth;
    enum class Phase {
      AddExperience,
      StartLevel,
      PromptAfterLevel,
      Stats,
      HP,
      PP,
      PSI,
      ClearPrompt,
      AfterLevel,
      Complete
    };
    Operation(VisibleCharacterGrowth &, unsigned, std::optional<std::uint32_t>);
    void message(GrowthMessage, std::optional<std::uint32_t> = {},
                 std::optional<std::uint8_t> = {});
    VisibleCharacterGrowth &owner_;
    unsigned character_, old_level_{}, stat_{}, psi_{1}, levels_gained_{};
    std::optional<std::uint32_t> experience_;
    Phase phase_;
    std::optional<GrowthPresentationRequest> request_;
  };

  VisibleCharacterGrowth(std::shared_ptr<const CharacterGrowth>,
                         std::span<const std::uint8_t> assets, party::State &,
                         story::RandomState &, ContextReader);
  VisibleCharacterGrowth(const VisibleCharacterGrowth &) = delete;
  VisibleCharacterGrowth &operator=(const VisibleCharacterGrowth &) = delete;
  std::unique_ptr<Operation> begin_level_up(unsigned character);
  std::unique_ptr<Operation> begin_experience(unsigned character,
                                              std::uint32_t amount);
  bool busy() const noexcept { return active_ != nullptr; }
  GameVersion version() const noexcept { return party_.version(); }
  const party::State &party() const noexcept { return party_; }
  const story::RandomState &random() const noexcept { return random_; }
  const std::array<std::uint8_t, 4> &message_reference(GrowthMessage message) const {
    return messages_.at(static_cast<unsigned>(message));
  }

private:
  friend class Operation;
  std::unique_ptr<Operation> begin(unsigned, std::optional<std::uint32_t>);
  std::shared_ptr<const CharacterGrowth> growth_;
  party::State &party_;
  story::RandomState &random_;
  ContextReader context_;
  std::vector<std::array<std::uint8_t, 3>> psi_levels_;
  std::array<std::array<std::uint8_t, 4>, 11> messages_{};
  Operation *active_{};
};
} // namespace eb::native
