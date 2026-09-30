#pragma once

#include "eb/native/dialogue/menu_printer.hpp"
#include "eb/native/dialogue/substitution_resources.hpp"
#include "eb/native/party/view.hpp"

namespace eb::native::dialogue {
class MenuHost;
// CC1A05 / INVENTORY_GET_ITEM_NAME. Party values are borrowed live; windows,
// menu options, printer and temporary text remain owned by the existing host.
class Inventory {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        Progress advance(unsigned work_budget = 4096);
        const std::optional<MenuPrintEffect> &effect() const;
        void respond(std::optional<std::uint16_t> pressed = {});
        bool complete() const;

      private:
        friend class Inventory;
        friend class Conversation;
        TextOutput::Owner callback_owner(TextOutput &) const;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    ~Inventory();
    Inventory(const Inventory &) = delete;
    Inventory &operator=(const Inventory &) = delete;
    // The borrowed party owner must outlive this service and its operations.
    void configure(std::shared_ptr<const SubstitutionResources>, party::View);
    WindowHost &windows();
    // Direct helper entry uses an already resolved one-based character ID.
    // The authored command separately preserves its conditional US wrapper.
    std::unique_ptr<Operation> begin(WindowId, std::uint16_t character);
    std::unique_ptr<Operation> begin_nested(WindowId, std::uint16_t character, Conversation &);
    std::unique_ptr<Operation> begin_nested(WindowId, std::uint16_t character, Operation &);

  private:
    friend class MenuHost;
    friend class Conversation;
    Inventory(WindowHost &, MenuPrinter &);
    std::unique_ptr<Operation> begin(const Request &, TextOutput::Owner);
    std::unique_ptr<Operation> begin(WindowId, std::uint16_t, TextOutput::Owner, bool owns_activation);
    struct Execution;
    std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::dialogue
