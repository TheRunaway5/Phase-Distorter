#pragma once

#include "eb/native/dialogue/menu_printer.hpp"
#include "eb/native/dialogue/prompt_host.hpp"

namespace eb::native::dialogue {
class Conversation;
class MenuCommands;
class Inventory;
// Original PAD bits, kept at the input boundary so press and held snapshots
// remain distinct. Direction priority belongs to MenuHost, not the adapter.
enum class MenuButton : std::uint16_t {
    B = 0x8000,
    Select = 0x2000,
    Up = 0x0800,
    Down = 0x0400,
    Left = 0x0200,
    Right = 0x0100,
    A = 0x0080,
    L = 0x0020
};
enum class MenuEffectKind { Input, Sound, Callback, ShowMoneyMeters };
struct MenuEffect {
    MenuEffectKind kind{};
    std::uint16_t value{}; // Sound ID or callback argument.
    std::optional<MenuCallbackId> callback;
    bool operator==(const MenuEffect &) const = default;
};
using MenuEvent = std::variant<TextEffect, WindowEffect, Request, MenuEffect, PromptEffect>;
struct MenuResponse {
    std::uint16_t pressed{}, held{}, value{};
};

// Native SELECTION_MENU. Captured slot/option/ordinal and continuation are
// call-local; options, callbacks, focus and print policy remain shared. Input
// is polled only at the original world boundary, independently of sampling.
class MenuHost {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        Progress advance(unsigned work_budget = 4096);
        const std::optional<MenuEvent> &event() const;
        void respond();
        void respond(MenuResponse);
        bool complete() const;
        std::uint16_t result() const;

      private:
        friend class MenuHost;
        friend class Conversation;
        friend class WindowGraphics;
        friend class WindowCommands;
        TextOutput::Owner callback_owner(TextOutput &) const;
        TextOutput::Owner active_owner() const;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    MenuHost(std::shared_ptr<const Program>, WindowHost &, std::shared_ptr<const MenuResources>);
    MenuHost(std::shared_ptr<const Program>, PromptHost &, std::shared_ptr<const MenuResources>);
    ~MenuHost();
    MenuHost(const MenuHost &) = delete;
    MenuHost &operator=(const MenuHost &) = delete;
    WindowHost &windows();
    PromptHost *prompts();
    MenuCommands &commands();
    Inventory &inventory();
    std::unique_ptr<Operation> begin(std::uint16_t cancel_mode = 1);
    std::unique_ptr<Operation> begin_nested(std::uint16_t cancel_mode, Conversation &);
    std::unique_ptr<Operation> begin_nested(std::uint16_t cancel_mode, Operation &);
    std::unique_ptr<Operation> begin_nested(std::uint16_t cancel_mode, PromptHost::Operation &);
    std::unique_ptr<WindowHost::Operation> begin_window(WindowCommand, Operation &);

  private:
    friend class Conversation;
    friend class WindowCommands;
    std::unique_ptr<Operation> begin(std::uint16_t, TextOutput::Owner, bool owns_activation);
    struct Execution;
    std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::dialogue
