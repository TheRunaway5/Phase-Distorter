#pragma once

#include "eb/native/battle/enemy_resources.hpp"
#include "eb/native/party/state.hpp"

namespace eb::native::battle {
// Semantic source-width values for the complete 78-byte battler record.
// This is native state, not a packed WRAM image. Raw status/side bytes remain
// bytes: different source consumers deliberately use different predicates.
struct Battler {
    std::uint16_t id{}, sprite{}, action{};
    std::uint8_t action_order{}, action_item_slot{}, action_argument{}, targeting{}, target{}, label{};
    std::uint8_t consciousness{}, taken_turn{}, side{}, npc{}, row{};
    std::uint16_t hp{}, target_hp{}, maximum_hp{}, pp{}, target_pp{}, maximum_pp{};
    std::array<std::uint8_t, 7> afflictions{};
    std::uint8_t guarding{}, shield_hp{};
    std::uint16_t offense{}, defense{}, speed{}, guts{}, luck{};
    std::uint8_t vitality{}, iq{}, base_offense{}, base_defense{}, base_speed{}, base_guts{}, base_luck{};
    std::uint8_t paralysis_resistance{}, freeze_resistance{}, flash_resistance{}, fire_resistance{},
                 brainshock_resistance{}, hypnosis_resistance{};
    std::uint16_t money{};
    std::uint32_t experience{};
    std::uint8_t resource{}, x{}, y{}, initiative{}, unknown71{}, blink{}, alternate_flash{},
                 targeted{}, alternate{};
    // Original unknown76/id2 is read and written as one enemy-ID word.
    std::uint16_t original_enemy{};
    bool operator==(const Battler&) const = default;
};
class Formation;
// The sole native owner of all32 live battler records. Record identity moves
// with complete formation swaps; a physical slot does not follow identity.
// Encounter counts and action selectors have separate source producers and
// are not guessed from consciousness or initialized by these helpers.
class Roster {
public:
    static constexpr unsigned size = 32;
    explicit Roster(std::shared_ptr<const EnemyResources>);
    Roster(const Roster&) = delete;
    Roster& operator=(const Roster&) = delete;
    Roster(Roster&&) = delete;
    Roster& operator=(Roster&&) = delete;
    GameVersion version() const { return resources_->version(); }
    Battler& at(unsigned slot) { return records_.at(slot).value; }
    const Battler& at(unsigned slot) const { return records_.at(slot).value; }
    std::uint64_t identity(unsigned slot) const { return records_.at(slot).identity; }
    std::uint16_t highest_enemy_level() const { return highest_enemy_level_; }
    // Complete C2B66A read: all32 live records participate. Unlike an enemy
    // initializer, no destination has been cleared or excluded from this scan.
    std::uint8_t next_available_label(unsigned enemy) const;
    // Original BATTLE_ROUTINE's record-clear/highest-level reset prefix only.
    void clear();
    void initialize_player(unsigned slot, const party::State&, unsigned character);
    void initialize_enemy(unsigned slot, unsigned enemy);
    // Complete C2C32C: reinitialize slot8, retain only XY, mark taken-turn.
    void replace_primary_enemy(unsigned enemy);
    // Complete COPY_MIRROR_DATA. Destination identity, meters, side, row,
    // character ID and taken-turn survive; all other record fields are copied.
    void mirror(unsigned destination, unsigned source);
    // The original restore path reads its separate MIRROR_BATTLER_BACKUP.
    // Its action/timer owner can supply that retained value through this seam.
    void mirror(unsigned destination, const Battler& source);
private:
    friend class Formation;
    struct Record {
        Battler value;
        std::uint64_t identity{};
    };
    std::uint8_t next_label(unsigned enemy, unsigned replacing_slot) const;
    std::uint64_t next_identity();
    std::shared_ptr<const EnemyResources> resources_;
    std::array<Record, size> records_{};
    std::uint16_t highest_enemy_level_{};
    std::uint64_t identity_counter_{};
};
} // namespace eb::native::battle
