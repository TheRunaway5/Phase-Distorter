#pragma once

#include "eb/native/dialogue/menu_host.hpp"
#include "eb/native/dialogue/menu_commands.hpp"
#include "eb/native/dialogue/window_commands.hpp"
#include "eb/native/dialogue/text_animations.hpp"
#include "eb/native/dialogue/inventory.hpp"
#include "eb/native/dialogue/substitutions.hpp"
#include <variant>

namespace eb::native::dialogue {
// Output effects are completed by the world/audio host. Other dialogue
// requests retain their original typed arguments. Attached window, menu and
// prompt hosts consume their native services; others remain explicit requests.
using ConversationEvent = MenuEvent;

// Connects authored execution, word measurement and native text output. A
// glyph is acknowledged only after every source-ordered effect completes.
// Presentation samples output().frame() independently of this logical work.
class Conversation {
  public:
    // All conversations in one host share its renderer, including recursive
    // menu text. Its composition/windows must not be recreated per stream.
    // State and TextOutput must outlive every borrowing conversation. Destroying
    // an unfinished conversation invalidates its whole output execution tree;
    // the host must rebuild the scene instead of resuming a partially lost call.
    Conversation(std::shared_ptr<const Program>, State&, TextOutput&);
    Conversation(std::shared_ptr<const Program>, WindowHost&);
    Conversation(std::shared_ptr<const Program>, MenuHost&);
    Conversation(std::shared_ptr<const Program>, PromptHost&);
    ~Conversation();
    Conversation(const Conversation&) = delete;
    Conversation& operator=(const Conversation&) = delete;
    Conversation(Conversation&&) = delete;
    Conversation& operator=(Conversation&&) = delete;
    // A root start requires unowned, idle output. A nested start identifies the
    // currently suspended parent explicitly. Only WindowTick, Pause, Prompt and
    // Selection host events can call back into dialogue; audio and budget yields
    // cannot. The parent retains its event until the child returns and the host
    // explicitly responds. Advancing/responding out of order throws.
    void start(EntryId);
    void start(Location);
    // Producer coordinators can validate output/stream ownership before
    // publishing shared values. These checks reserve or mutate nothing.
    void validate_start() const;
    void validate_start_nested(Conversation &parent) const;
    void start_nested(EntryId, Conversation& parent);
    void start_nested(Location, Conversation& parent);
    void start_nested(EntryId, WindowHost::Operation& parent);
    void start_nested(Location, WindowHost::Operation& parent);
    void start_nested(EntryId, MenuHost::Operation& parent);
    void start_nested(Location, MenuHost::Operation& parent);
    void start_nested(EntryId, PromptHost::Operation& parent);
    void start_nested(Location, PromptHost::Operation& parent);
    void start_nested(EntryId, TextSubstitutions::Operation& parent);
    void start_nested(Location, TextSubstitutions::Operation& parent);
    void start_nested(EntryId, MenuCommands::Operation& parent);
    void start_nested(Location, MenuCommands::Operation& parent);
    void start_nested(EntryId, WindowCommands::Operation& parent);
    void start_nested(Location, WindowCommands::Operation& parent);
    void start_nested(EntryId, TextAnimations::Operation& parent);
    void start_nested(Location, TextAnimations::Operation& parent);
    void start_nested(EntryId, Inventory::Operation& parent);
    void start_nested(Location, Inventory::Operation& parent);
    // Each unit advances at most one parser dispatch, one scanned character,
    // or one output stage. Budget exhaustion is a scheduling yield, not a
    // world tick: resume without mutating game state. Suspended effects mark
    // the source's actual game/audio boundaries where host changes are valid.
    // An inactive/finished conversation returns Finished without executing or
    // acquiring output, even while another conversation is active.
    Progress advance(unsigned work_budget = 4096);
    const std::optional<ConversationEvent>& event() const;
    // An omitted input snapshot retains shared prompt input written by callbacks.
    void respond();
    void respond(Response);
    bool finished() const;
    TextOutput& output();
    const TextOutput& output() const;
    Snapshot snapshot() const;
    void observe(std::function<void(const Event&)>);

  private:
    friend class WindowHost;
    friend class MenuHost;
    friend class PromptHost;
    friend class WindowGraphics;
    friend class TextSubstitutions;
    friend class MenuCommands;
    friend class WindowCommands;
    friend class TextAnimations;
    friend class Inventory;
    TextOutput::Owner callback_owner(TextOutput &) const;
    TextOutput::Owner active_owner() const;
    enum class Phase { Interpreter, Output, Word, Window, Menu, Prompt, Substitution, MenuCommands, WindowCommands, TextAnimation, Inventory, Complete };
    std::shared_ptr<const Program> program_;
    State& state_;
    Runtime runtime_;
    TextOutput& output_;
    WindowHost* windows_{};
    MenuHost* menus_{};
    PromptHost* prompts_{};
    std::unique_ptr<PromptHost::Operation> prompt_operation_;
    std::unique_ptr<WindowHost::Operation> window_operation_;
    std::unique_ptr<MenuHost::Operation> menu_operation_;
    std::unique_ptr<TextSubstitutions::Operation> substitution_operation_;
    std::unique_ptr<MenuCommands::Operation> menu_commands_operation_;
    std::unique_ptr<WindowCommands::Operation> window_commands_operation_;
    std::unique_ptr<TextAnimations::Operation> animation_operation_;
    std::unique_ptr<Inventory::Operation> inventory_operation_;
    std::optional<WordScanner> word_;
    std::optional<ConversationEvent> event_;
    Phase phase_ = Phase::Complete;
    TextOutput::Owner owner_{};
    void start(Location, TextOutput::Owner parent);
    void validate_start(TextOutput::Owner parent) const;
};
} // namespace eb::native::dialogue
