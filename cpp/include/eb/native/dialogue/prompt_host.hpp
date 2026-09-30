#pragma once

#include "eb/native/dialogue/window_host.hpp"
#include <variant>

namespace eb::native::dialogue {
class Conversation;
class MenuHost;
enum class PromptAction { Delay, TimedWait, Prompt, FrameDelay };
struct PromptCommand {
  PromptAction action{};
  std::uint16_t count{}, show_prompt = 1, force_wait{};
};
// C12E42 advances meters and the world/input wrapper without redrawing windows.
// WINDOW_TICK and frame-only waits retain their separate WindowEffect kinds.
enum class PromptEffectKind { WorldTick };
struct PromptEffect {
  PromptEffectKind kind = PromptEffectKind::WorldTick;
  bool operator==(const PromptEffect &) const = default;
};
using PromptEvent = std::variant<WindowEffect, PromptEffect>;

// Native C100D6/C102DC fixed delay, C100FE/C10303 timed wait,
// CC_13_14 (C10166/C1036B) and SKIPPABLE_PAUSE (C4C567/C4983F).
// The window host, state and output must outlive this host and its operations.
// Destroying unfinished work invalidates the shared output execution tree.
class PromptHost {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    Progress advance(unsigned work_budget = 4096);
    const std::optional<PromptEvent> &event() const;
    // Omission retains the adapter's shared PAD_PRESS snapshot.
    void respond(std::optional<std::uint16_t> pressed = {});
    bool complete() const;
    std::uint16_t result() const;

  private:
    friend class PromptHost;
    friend class Conversation;
    friend class MenuHost;
    TextOutput::Owner callback_owner(TextOutput &) const;
    struct Execution;
    explicit Operation(std::unique_ptr<Execution>);
    std::unique_ptr<Execution> execution_;
  };
  explicit PromptHost(WindowHost &);
  WindowHost &windows();
  PromptState &state();
  std::unique_ptr<Operation> begin(PromptCommand);
  std::unique_ptr<Operation> begin_nested(PromptCommand, Conversation &);
  std::unique_ptr<Operation> begin_nested(PromptCommand, Operation &);
  std::unique_ptr<WindowHost::Operation> begin_window(WindowCommand,
                                                      Operation &);

private:
  friend class Conversation;
  std::unique_ptr<Operation> begin(PromptCommand, TextOutput::Owner,
                                   bool owns_activation);
  WindowHost &windows_;
};
} // namespace eb::native::dialogue
