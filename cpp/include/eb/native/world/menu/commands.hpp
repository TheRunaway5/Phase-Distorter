#pragma once
#include "eb/native/world/menu/resources.hpp"
#include "eb/native/dialogue/menu_host.hpp"
#include "eb/native/npcs/interaction.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/native/world_sprite_fade.hpp"
#include "eb/native/party/inventory.hpp"

namespace eb::native {struct WorldPartyState;struct WorldSessionState;}
namespace eb::native::world::menu {
enum class Entry { Commands, CheckTalk, Meters };
enum class Choice : std::uint16_t { Goods=2, Psi=3, Equip=4, Status=6 };
struct ItemUse {
    std::uint16_t user{},slot{};
    std::uint8_t item{},target{};
    dialogue::ReferenceKey description{};
    bool execute{};
};
struct AbilityUse {std::uint16_t user{},action{};std::uint8_t ability{},target{};dialogue::ReferenceKey description{};bool teleport{};};
struct TargetSelect {std::uint16_t action{},user{};};
// OPEN_MENU_BUTTON, its L shortcut, and OPEN_HPPP_DISPLAY. Mutable state
// stays with the existing live owners; every yielded child must actually run.
class Commands {
public:
    class Operation {
    public:
        ~Operation();
        Operation(const Operation &)=delete;
        Operation &operator=(const Operation &)=delete;
        dialogue::Progress advance(unsigned budget=4096);
        story::Scene::Operation *scene() const noexcept;
        const std::optional<std::uint16_t> &sound() const noexcept;
        void respond_sound();
        const std::optional<ItemUse> &item_use() const noexcept;
        void respond_item_use(std::uint16_t result);
        const std::optional<AbilityUse> &ability_use() const noexcept;
        void respond_ability_use(std::uint16_t result);
        const std::optional<TargetSelect> &target_select() const noexcept;
        void respond_target_select(std::uint16_t result);
        party::Inventory::Operation *inventory_operation() const noexcept;
        // These branches stop before invoking their unported original owner.
        // There is no default result or acknowledgment that could skip them.
        const std::optional<Choice> &unported_choice() const noexcept;
        bool complete() const noexcept;
    private:
        friend class Commands;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    Commands(std::shared_ptr<const Resources>,std::shared_ptr<const dialogue::Program>,
             std::shared_ptr<const dialogue::FontResources>,dialogue::MenuHost &,
             party::State &,party::Inventory &,party::MeterWindows &,npcs::Interactions &,story::Scene &,
             story::InputState &,WorldSpriteFade &);
    ~Commands();
    std::unique_ptr<Operation> begin(Entry=Entry::Commands);
    bool busy() const noexcept;
    void bind_field_map(const WorldMap &);
    void bind_teleport(WorldPartyState &,WorldSessionState &);
private:
    struct Execution;
    std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::world::menu
