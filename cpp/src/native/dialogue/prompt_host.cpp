#include "eb/native/dialogue/prompt_host.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native::dialogue {
namespace {
void require(bool condition, const char *message) {
  if (!condition)
    throw std::logic_error(message);
}
constexpr std::uint16_t confirm = 0xa0a0; // B, Select, A, L; only PAD_PRESS.
constexpr std::uint16_t debug_unlock = 0x8010; // B + R together.
} // namespace
struct PromptHost::Operation::Execution {
  enum class Stage {
    Start,
    PromptLock,
    PromptTick,
    AfterPromptTick,
    DelayCheck,
    TimedStart,
    TimedLock,
    TimedCheck,
    InputOnly,
    ManualCheck,
    BlinkOn,
    BlinkCheck,
    BlinkReturned,
    FrameCheck,
    FrameReturned,
    ResumeMeters,
    Finish,
    Complete
  };
  WindowHost &windows;
  TextOutput &output;
  PromptState &shared;
  PromptCommand command;
  TextOutput::Owner owner{};
  bool owns_activation{};
  Stage stage = Stage::Start;
  std::uint16_t remaining{}, value{};
  std::optional<unsigned> slot;
  unsigned blink_phase{};
  std::optional<PromptEvent> event;

  Execution(PromptHost &host, PromptCommand c, TextOutput::Owner o, bool owns)
      : windows(host.windows()), output(windows.output()), shared(host.state()),
        command(c), owner(o), owns_activation(owns), remaining(c.count) {}
  bool unlocked() {
    if (!shared.input_lock)
      return true;
    if (shared.debug && (shared.pressed & debug_unlock) == debug_unlock) {
      shared.input_lock = 0;
      return true;
    }
    return false;
  }
  void world(Stage next) {
    stage = next;
    event = PromptEffect{};
  }
  void step() {
    switch (stage) {
    case Stage::Start:
      switch (command.action) {
      case PromptAction::Delay:
        output.policy().instant = false;
        event = WindowEffect{WindowEffectKind::WindowTick};
        stage = Stage::DelayCheck;
        break;
      case PromptAction::TimedWait:
        stage = Stage::TimedStart;
        break;
      case PromptAction::Prompt:
        stage = Stage::PromptLock;
        break;
      case PromptAction::FrameDelay:
        stage = Stage::FrameCheck;
        break;
      }
      break;
    case Stage::PromptLock:
      // Source spins without ticking. A bounded scheduler yield lets the
      // outer host release the shared lock without inventing a frame.
      if (unlocked())
        stage = Stage::PromptTick;
      break;
    case Stage::PromptTick:
      output.policy().instant = false;
      event = WindowEffect{WindowEffectKind::WindowTick};
      stage = Stage::AfterPromptTick;
      break;
    case Stage::AfterPromptTick:
      if (!command.force_wait && output.policy().prompt_mode &&
          shared.text_speed_based_wait) {
        command.count = 0;
        stage = Stage::TimedStart;
        break;
      }
      if (output.policy().prompt_mode)
        shared.rolling_disabled = 1;
      if (const auto id = windows.state().focus)
        slot = windows.slot_for(*id);
      else if (const auto ambient = windows.state().unfocused_register_slot;
               ambient && *ambient < 8)
        slot = *ambient;
      if (command.show_prompt) {
        require(slot.has_value(),
                "Visible prompt requires a valid physical window slot");
        stage = Stage::BlinkOn;
      } else
        stage = Stage::ManualCheck;
      break;
    case Stage::DelayCheck: {
      const auto old = remaining--;
      if (!old)
        stage = Stage::Finish;
      else
        world(Stage::DelayCheck);
      break;
    }
    case Stage::TimedStart:
      // This branch is captured on entry, before examining the lock.
      stage = shared.debug && !shared.battle_mode ? Stage::InputOnly
                                                  : Stage::TimedLock;
      break;
    case Stage::TimedLock:
      if (unlocked()) {
        remaining =
            command.count ? command.count : shared.text_speed_based_wait;
        stage = Stage::TimedCheck;
      }
      break;
    case Stage::TimedCheck: {
      const auto old = remaining--;
      if (!old || (shared.pressed & confirm))
        stage = Stage::Finish;
      else
        world(Stage::TimedCheck);
      break;
    }
    case Stage::InputOnly:
      if (shared.pressed & confirm)
        stage = Stage::Finish;
      else
        world(Stage::InputOnly);
      break;
    case Stage::ManualCheck:
      if (shared.pressed & confirm)
        stage = Stage::ResumeMeters;
      else
        world(Stage::ManualCheck);
      break;
    case Stage::BlinkOn:
      blink_phase = 0;
      remaining = 15;
      windows.publish_prompt(*slot, 0);
      stage = Stage::BlinkCheck;
      break;
    case Stage::BlinkCheck:
      if (shared.pressed & confirm) {
        if (!blink_phase)
          windows.publish_prompt(*slot, 2);
        stage = Stage::ResumeMeters;
      } else
        world(Stage::BlinkReturned);
      break;
    case Stage::BlinkReturned:
      if (--remaining)
        stage = Stage::BlinkCheck;
      else if (!blink_phase) {
        windows.publish_prompt(*slot, 1);
        blink_phase = 1;
        remaining = 10;
        stage = Stage::BlinkCheck;
      } else
        stage = Stage::BlinkOn;
      break;
    case Stage::FrameCheck:
      if (!remaining)
        stage = Stage::Finish;
      else if (shared.pressed) {
        value = 0xffff;
        stage = Stage::Finish;
      } else {
        event = WindowEffect{WindowEffectKind::FrameWait};
        stage = Stage::FrameReturned;
      }
      break;
    case Stage::FrameReturned:
      --remaining;
      stage = Stage::FrameCheck;
      break;
    case Stage::ResumeMeters:
      shared.half_meter_speed = 0;
      shared.rolling_disabled = 0;
      stage = Stage::Finish;
      break;
    case Stage::Finish:
      if (owns_activation)
        output.leave(owner);
      owner = 0;
      stage = Stage::Complete;
      break;
    case Stage::Complete:
      break;
    }
  }
};

PromptHost::PromptHost(WindowHost &windows) : windows_(windows) {}
WindowHost &PromptHost::windows() { return windows_; }
PromptState &PromptHost::state() { return windows_.prompt_state(); }
PromptHost::Operation::Operation(std::unique_ptr<Execution> execution)
    : execution_(std::move(execution)) {}
PromptHost::Operation::~Operation() {
  if (execution_->owner)
    execution_->output.abandon(execution_->owner);
}
std::unique_ptr<PromptHost::Operation>
PromptHost::begin(PromptCommand command, TextOutput::Owner owner, bool owns) {
  windows_.output().require_owner(owner);
  return std::unique_ptr<Operation>(new Operation(
      std::make_unique<Operation::Execution>(*this, command, owner, owns)));
}
std::unique_ptr<PromptHost::Operation>
PromptHost::begin(PromptCommand command) {
  auto &output = windows_.output();
  const auto owner = output.enter();
  try {
    return begin(command, owner, true);
  } catch (...) {
    output.leave(owner);
    throw;
  }
}
std::unique_ptr<PromptHost::Operation>
PromptHost::begin_nested(PromptCommand command, Conversation &parent) {
  auto &output = windows_.output();
  const auto owner = output.enter(parent.callback_owner(output));
  try {
    return begin(command, owner, true);
  } catch (...) {
    output.leave(owner);
    throw;
  }
}
std::unique_ptr<PromptHost::Operation>
PromptHost::begin_nested(PromptCommand command, Operation &parent) {
  auto &output = windows_.output();
  const auto owner = output.enter(parent.callback_owner(output));
  try {
    return begin(command, owner, true);
  } catch (...) {
    output.leave(owner);
    throw;
  }
}
std::unique_ptr<WindowHost::Operation>
PromptHost::begin_window(WindowCommand command, Operation &parent) {
  auto &output = windows_.output();
  const auto owner = output.enter(parent.callback_owner(output));
  try {
    return windows_.begin(std::move(command), owner, true);
  } catch (...) {
    output.leave(owner);
    throw;
  }
}
TextOutput::Owner
PromptHost::Operation::callback_owner(TextOutput &output) const {
  const auto &e = *execution_;
  require(&output == &e.output && e.owner && e.event,
          "Nested prompt work requires a suspended parent sharing output");
  const auto *window = std::get_if<WindowEffect>(&*e.event);
  require(!window || window->kind == WindowEffectKind::WindowTick,
          "Frame-only prompt waits cannot call back into dialogue");
  output.require_owner(e.owner);
  return e.owner;
}
Progress PromptHost::Operation::advance(unsigned budget) {
  auto &e = *execution_;
  if (complete())
    return Progress::Finished;
  e.output.require_owner(e.owner);
  if (e.event)
    return Progress::Suspended;
  while (budget--) {
    e.step();
    if (e.event)
      return Progress::Suspended;
    if (complete())
      return Progress::Finished;
  }
  return Progress::BudgetExhausted;
}
const std::optional<PromptEvent> &PromptHost::Operation::event() const {
  return execution_->event;
}
void PromptHost::Operation::respond(std::optional<std::uint16_t> pressed) {
  auto &e = *execution_;
  require(e.event.has_value(), "Prompt has no pending host event");
  e.output.require_owner(e.owner);
  if (pressed)
    e.shared.pressed = *pressed;
  e.event.reset();
}
bool PromptHost::Operation::complete() const {
  return execution_->stage == Execution::Stage::Complete;
}
std::uint16_t PromptHost::Operation::result() const {
  require(complete(), "Prompt result is unavailable before completion");
  return execution_->value;
}
} // namespace eb::native::dialogue
