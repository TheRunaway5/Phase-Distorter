#pragma once
#include "eb/native/dialogue/program.hpp"
#include "eb/native/party/state.hpp"
#include <array>

namespace eb::native::world::menu {
// Original command-window text/spacing, PSI eligibility and caller fallbacks.
// Import owns data only; there are no source instruction readers at runtime.
class Resources {
public:
    static std::shared_ptr<const Resources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const noexcept { return version_; }
    std::span<const std::uint8_t> command(unsigned one_based) const;
    std::array<std::uint16_t,2> position(unsigned one_based) const;
    unsigned first_psi_character(const party::State &) const;
    dialogue::ReferenceKey no_person() const noexcept { return no_person_; }
    dialogue::ReferenceKey no_problem() const noexcept { return no_problem_; }
    std::span<const std::uint8_t> item_command(unsigned one_based) const { return item_commands_.at(one_based-1); }
    std::span<const std::uint8_t> target_prompt(unsigned index) const { return target_prompts_.at(index); }
    dialogue::ReferenceKey item_help(unsigned item) const { return help_.at(item); }
    dialogue::ReferenceKey drop() const noexcept { return drop_; }
    dialogue::ReferenceKey cannot_give() const noexcept { return cannot_give_; }
    dialogue::ReferenceKey give(unsigned index) const { return give_.at(index); }
    struct Item {std::uint8_t type{},flags{};std::uint16_t effect{};};
    const Item &item(unsigned index) const { return items_.at(index); }
    struct Action {std::uint8_t direction{},target{},pp_cost{};dialogue::ReferenceKey description{};bool function{};};
    const Action &action(unsigned index) const { return actions_.at(index); }
    bool can_use(unsigned character,unsigned item) const {return (usable_.at(character-1)&items_.at(item).flags)!=0;}
    dialogue::ReferenceKey use_text(unsigned index) const {return use_text_.at(index);}
    std::span<const std::uint8_t> equipment_text(unsigned index) const {return equipment_text_.at(index);}
    std::span<const std::uint8_t> equipment_title(unsigned index) const {return equipment_titles_.at(index);}
    std::span<const std::uint8_t> item_name(unsigned index) const {return item_names_.at(index);}
    std::span<const std::uint8_t,4> item_parameters(unsigned index) const {return item_parameters_.at(index);}
    struct Psi {std::uint8_t name{},level{},category{},usability{};std::uint16_t action{};std::array<std::uint8_t,3> levels{};std::uint8_t x{},y{};dialogue::ReferenceKey description{};};
    const Psi &psi(unsigned index) const {return psi_.at(index);}
    std::span<const std::uint8_t> psi_category(unsigned index) const {return psi_categories_.at(index);}
    std::span<const std::uint8_t> psi_suffix(unsigned level) const {return psi_suffixes_.at(level-1);}
    std::span<const std::uint8_t> psi_target(unsigned index) const {return psi_targets_.at(index);}
    std::span<const std::uint8_t> psi_cost() const {return psi_cost_;}
    std::span<const std::uint8_t> psi_name(unsigned index) const {return psi_names_.at(index-1);}
    unsigned psi_character_count(const party::State &) const;
    bool psi_eligible(const party::State &,unsigned who) const;
    dialogue::ReferenceKey status_text() const {return status_text_;}
    std::span<const std::uint8_t> status_instruction() const {return status_instruction_;}
    std::span<const std::uint8_t> status_label(unsigned index) const {return status_labels_.at(index);}
    std::uint16_t status_icon(const party::Character &) const;
    std::uint32_t required_experience(unsigned who,const party::Character &) const;
    dialogue::ReferenceKey psi_no_pp() const {return psi_no_pp_;}
    struct TeleportDestination {std::vector<std::uint8_t> name;std::uint16_t event_flag{};};
    const TeleportDestination &teleport_destination(unsigned index) const {return teleport_destinations_.at(index);}
    std::span<const std::uint8_t> teleport_title() const {return teleport_title_;}
    dialogue::ReferenceKey teleport_blocked() const {return teleport_blocked_;}
private:
    explicit Resources(GameVersion v):version_(v){}
    GameVersion version_;
    std::array<std::vector<std::uint8_t>,6> commands_;
    std::array<std::array<std::uint16_t,2>,6> positions_{};
    std::array<Psi,54> psi_{};
    std::array<std::uint16_t,49> restrictions_{};
    dialogue::ReferenceKey no_person_{},no_problem_{};
    std::array<std::vector<std::uint8_t>,4> item_commands_;
    std::array<std::vector<std::uint8_t>,5> target_prompts_;
    std::array<dialogue::ReferenceKey,256> help_{};
    dialogue::ReferenceKey drop_{};
    dialogue::ReferenceKey cannot_give_{};
    std::array<dialogue::ReferenceKey,10> give_{};
    std::array<Item,256> items_{};
    std::array<Action,318> actions_{};
    std::array<std::uint8_t,4> usable_{};
    std::array<dialogue::ReferenceKey,5> use_text_{};
    std::array<std::vector<std::uint8_t>,8> equipment_text_;
    std::array<std::vector<std::uint8_t>,4> equipment_titles_;
    std::array<std::vector<std::uint8_t>,256> item_names_;
    std::array<std::array<std::uint8_t,4>,256> item_parameters_{};
    std::array<std::vector<std::uint8_t>,4> psi_categories_;
    std::array<std::vector<std::uint8_t>,5> psi_suffixes_;
    std::array<std::vector<std::uint8_t>,10> psi_targets_;
    std::array<std::vector<std::uint8_t>,17> psi_names_;
    std::vector<std::uint8_t> psi_cost_,status_instruction_;
    std::array<std::vector<std::uint8_t>,10> status_labels_;
    std::array<std::uint16_t,49> status_icons_{};
    std::array<std::array<std::uint32_t,100>,4> experience_{};
    dialogue::ReferenceKey status_text_{},psi_no_pp_{};
    std::array<TeleportDestination,17> teleport_destinations_;
    std::vector<std::uint8_t> teleport_title_;
    dialogue::ReferenceKey teleport_blocked_{};
};
} // namespace eb::native::world::menu
