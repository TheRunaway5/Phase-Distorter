#pragma once

#include "eb/native/dialogue/menu_resources.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include <variant>

namespace eb::native::dialogue {
class MenuHost;
enum class MenuPrintAction { Page, Position, UnselectedMarker, FixedGlyph, Highlight, HighlightRemainder };
struct MenuPrintCommand {
    MenuPrintAction action = MenuPrintAction::Page;
    unsigned option{};
    std::uint16_t x_delta{}, character{}, limit = 0xffff;
    bool selected = true;
};
using MenuPrintEffect = std::variant<TextEffect, WindowEffect>;

// PRINT_MENU_ITEMS and its source text helpers. Each operation preserves its
// own continuation while sharing the host's current windows, options, style
// and composition. Resource, output and window owners outlive this printer.
class MenuPrinter {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        OutputProgress advance();
        const std::optional<MenuPrintEffect> &effect() const;
        void respond();
        bool complete() const;

      private:
        friend class MenuPrinter;
        friend class MenuHost;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    MenuPrinter(WindowHost &, std::shared_ptr<const MenuResources>);
    ~MenuPrinter();
    MenuPrinter(const MenuPrinter &) = delete;
    MenuPrinter &operator=(const MenuPrinter &) = delete;
    std::unique_ptr<Operation> begin(MenuPrintCommand);
    const MenuResources &resources() const;
    bool bound_to(const WindowHost &) const;

  private:
    friend class MenuHost;
    friend class MenuCommands;
    friend class Inventory;
    std::unique_ptr<Operation> begin(MenuPrintCommand, TextOutput::Owner);
    struct Execution;
    std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::dialogue
