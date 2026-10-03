// Original helper and explicitly named BATTLE_ROUTINE continuation proof.
// Every invoked callee executes normally. Continuation inputs below are
// declared fixtures, not evidence of a complete battle menu or action executor.
// The real BATTLE_ROUTINE prologue creates the stack frame; each tested segment
// stops at a named next phase before an unported menu/action is requested.
#include "eb/native/battle/grammar.hpp"
#include "eb/native/battle/turn_scheduler.hpp"
#include "generated_assets.hpp"
#include "native_encounter_source_fixture.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <set>
#include <string>
namespace {
using namespace eb::native;
using namespace eb::native::battle;
using encounter_reference::Source;
std::string context;
unsigned checks{}, rounds{}, selections{}, ais{}, escapes{}, actors{},
    helpers{}, synthetic{};
std::uint64_t instructions{};
void require(bool value, const std::string &message) {
  ++checks;
  if (!value)
    throw std::runtime_error(context + ": " + message);
}
void put(std::span<std::uint8_t> b, unsigned p, unsigned value) {
  b[p] = std::uint8_t(value);
  b[p + 1] = std::uint8_t(value >> 8);
}
void put32(std::span<std::uint8_t> b, unsigned p, std::uint32_t value) {
  put(b, p, value);
  put(b, p + 2, value >> 16);
}
using Bytes = std::array<std::uint8_t, 78>;
Bytes encode(const Battler &v) {
  Bytes b{};
  put(b, 0, v.id);
  put(b, 2, v.sprite);
  put(b, 4, v.action);
  b[6] = v.action_order;
  b[7] = v.action_item_slot;
  b[8] = v.action_argument;
  b[9] = v.targeting;
  b[10] = v.target;
  b[11] = v.label;
  b[12] = v.consciousness;
  b[13] = v.taken_turn;
  b[14] = v.side;
  b[15] = v.npc;
  b[16] = v.row;
  put(b, 17, v.hp);
  put(b, 19, v.target_hp);
  put(b, 21, v.maximum_hp);
  put(b, 23, v.pp);
  put(b, 25, v.target_pp);
  put(b, 27, v.maximum_pp);
  std::copy(v.afflictions.begin(), v.afflictions.end(), b.begin() + 29);
  b[36] = v.guarding;
  b[37] = v.shield_hp;
  put(b, 38, v.offense);
  put(b, 40, v.defense);
  put(b, 42, v.speed);
  put(b, 44, v.guts);
  put(b, 46, v.luck);
  b[48] = v.vitality;
  b[49] = v.iq;
  b[50] = v.base_offense;
  b[51] = v.base_defense;
  b[52] = v.base_speed;
  b[53] = v.base_guts;
  b[54] = v.base_luck;
  b[55] = v.paralysis_resistance;
  b[56] = v.freeze_resistance;
  b[57] = v.flash_resistance;
  b[58] = v.fire_resistance;
  b[59] = v.brainshock_resistance;
  b[60] = v.hypnosis_resistance;
  put(b, 61, v.money);
  put32(b, 63, v.experience);
  b[67] = v.resource;
  b[68] = v.x;
  b[69] = v.y;
  b[70] = v.initiative;
  b[71] = v.unknown71;
  b[72] = v.blink;
  b[73] = v.alternate_flash;
  b[74] = v.targeted;
  b[75] = v.alternate;
  put(b, 76, v.original_enemy);
  return b;
}
struct Layout {
  unsigned BATTLERS_TABLE;
  unsigned PARTY_CHARACTERS;
  unsigned GAME_STATE;
  unsigned MIRROR_ENEMY;
  unsigned BATTLE_ITEM_USED;
  unsigned CURRENT_ATTACKER;
  unsigned CURRENT_TARGET;
  unsigned BATTLE_MODE;
  unsigned BATTLE_MENU_SELECTION;
  unsigned PARTY_MEMBERS_WITH_SELECTED_ACTIONS;
  unsigned STEALABLE_ITEM_CANDIDATES;
  unsigned NUM_BATTLERS_IN_FRONT_ROW;
  unsigned NUM_BATTLERS_IN_BACK_ROW;
  unsigned FRONT_ROW_BATTLERS;
  unsigned BACK_ROW_BATTLERS;
  unsigned BATTLER_FRONT_ROW_X_POSITIONS;
  unsigned BATTLER_FRONT_ROW_Y_POSITIONS;
  unsigned BATTLER_BACK_ROW_X_POSITIONS;
  unsigned BATTLER_BACK_ROW_Y_POSITIONS;
  unsigned CURRENT_FOCUS_WINDOW;
  unsigned UNKNOWN_C2F917;
  unsigned CHOOSE_TARGET;
  unsigned FIND_TARGETTABLE_NPC;
  unsigned FIND_STEALABLE_ITEMS;
  unsigned SELECT_STEALABLE_ITEM;
  unsigned FIFTY_PERCENT_VARIANCE;
  unsigned REDIRECT_C10FA3;
  std::map<unsigned, unsigned> labels;
};
Layout layout(bool jp) {
  if (!jp)
    return {
        0x7E9FAC,
        0x7E99CE,
        0x7E97F5,
        0x7EAA12,
        0x7EA97C,
        0x7EA970,
        0x7EA972,
        0x7E4DC2,
        0x7EA97D,
        0x7EAA64,
        0x7EA9D4,
        0x7EAD56,
        0x7EAD58,
        0x7EAD7A,
        0x7EAD82,
        0x7EAD5A,
        0x7EAD62,
        0x7EAD6A,
        0x7EAD72,
        0x7E8958,
        0xC2F917,
        0xC24477,
        0xC23F6C,
        0xC241DC,
        0xC24316,
        0xC26A44,
        0xC1DD53,
        {{2, 0xC248E0},   {71, 0xC24FCF},  {77, 0xC2504F},  {78, 0xC25069},
         {83, 0xC250E6},  {84, 0xC25110},  {87, 0xC25134},  {91, 0xC25171},
         {105, 0xC2527C}, {106, 0xC25280}, {108, 0xC2529B}, {132, 0xC254E4},
         {134, 0xC2550A}, {142, 0xC255F1}, {143, 0xC25604}, {144, 0xC25614},
         {145, 0xC25619}, {148, 0xC2564A}, {150, 0xC25679}, {154, 0xC256D6},
         {157, 0xC25765}, {234, 0xC26081}, {235, 0xC26088}, {237, 0xC26093}}};
  return {0x7EA1AE,
          0x7E9C7F,
          0x7E9AA9,
          0x7EABE7,
          0x7EAB7E,
          0x7EAB72,
          0x7EAB74,
          0x7E5148,
          0x7EAB7F,
          0x7EAC39,
          0x7EABA9,
          0x7EAF2B,
          0x7EAF2D,
          0x7EAF4F,
          0x7EAF57,
          0x7EAF2F,
          0x7EAF37,
          0x7EAF3F,
          0x7EAF47,
          0x7E8C96,
          0xC2F830,
          0xC24344,
          0xC23E1C,
          0xC24090,
          0xC241D3,
          0xC26983,
          0xC1DB30,
          {{2, 0xC247B5},   {71, 0xC24F02},  {77, 0xC24F82},  {78, 0xC24F9C},
           {83, 0xC2501E},  {84, 0xC25048},  {87, 0xC2506C},  {91, 0xC250A9},
           {105, 0xC251B0}, {106, 0xC251B4}, {108, 0xC251CD}, {132, 0xC25403},
           {134, 0xC25429}, {142, 0xC25510}, {143, 0xC25523}, {144, 0xC25533},
           {145, 0xC25538}, {148, 0xC2556B}, {150, 0xC2559E}, {154, 0xC255FB},
           {157, 0xC2568A}, {234, 0xC25FAD}, {235, 0xC25FB4}, {237, 0xC25FBF}}};
}
struct Resources {
  std::shared_ptr<const EnemyResources> enemies;
  std::shared_ptr<const ActionResources> actions;
  std::shared_ptr<const dialogue::SubstitutionResources> substitutions;
  BattleCombatants sprites;
  explicit Resources(const eb::GameAssets &a)
      : enemies(EnemyResources::import(a.image, a.version)),
        actions(ActionResources::import(a.image, a.version)),
        substitutions(
            dialogue::SubstitutionResources::import(a.image, a.version)),
        sprites(a.image, a.version) {}
};
struct Pair {
  Source source;
  Layout p;
  Roster roster;
  party::State party;
  story::RandomState random{0x1234, 0xabcd};
  RowState rows;
  StealState steals;
  TurnState state;
  ActionState action;
  EncounterState encounter;
  TargetSelection targets;
  TurnScheduler turns;
  explicit Pair(const eb::GameAssets &a, Resources &r)
      : source(a), p(layout(source.jp)), roster(r.enemies), party(a.version),
        targets(roster, party, random, rows, steals, *r.actions,
                *r.substitutions, r.sprites),
        turns(state, roster, party, action, random, *r.actions, encounter,
              targets) {
    p.labels.emplace(1000,
                     p.labels.at(84) - 17); // main line1268: LDA BATTLE_MODE.
    require(
        a.image.at(p.labels.at(1000) - 0xc00000) == 0xad &&
            a.image.at(p.labels.at(1000) - 0xc00000 + 1) ==
                std::uint8_t(p.BATTLE_MODE) &&
            a.image.at(p.labels.at(1000) - 0xc00000 + 2) ==
                std::uint8_t(p.BATTLE_MODE >> 8),
        "Post-menu source entry does not match the verified LDA BATTLE_MODE");
    source.put(p.BATTLE_MODE & 65535, 1);
    source.start_main();
    source.until(p.labels.at(2));
    source.put(p.CURRENT_FOCUS_WINDOW & 65535, 0xffff);
    source.bus->work_ram[0xd] = 0;
    source.bus->write_byte(0x4200, 0);
    party.party_order = {1, 2, 0, 0, 0, 0};
    for (unsigned slot = 0; slot < 2; ++slot) {
      auto &actor = roster.at(slot);
      actor.id = std::uint16_t(slot + 1);
      actor.row = std::uint8_t(slot);
      actor.consciousness = 1;
      actor.speed = std::uint16_t(300 + slot * 300);
      actor.hp = 99;
      actor.pp = 40;
      party.character(slot + 1).current_hp = 99;
      party.character(slot + 1).current_pp = 40;
    }
    for (unsigned slot = 8; slot < 12; ++slot) {
      auto &actor = roster.at(slot);
      actor.id = 1;
      actor.sprite = 1;
      actor.consciousness = actor.side = 1;
      actor.row = std::uint8_t(slot & 1);
      actor.x = std::uint8_t(32 + (slot - 8) * 32);
      actor.speed = std::uint16_t(600 + slot * 20);
    }
    rows.front.fill(0xa1);
    rows.back.fill(0xa2);
    rows.front_x.fill(0xa3);
    rows.front_y.fill(0xa4);
    rows.back_x.fill(0xa5);
    rows.back_y.fill(0xa6);
    steals.candidates.fill(0xc7);
    encounter.mode = 1;
  }
  ~Pair() { instructions += source.cpu.instruction_count; }
  unsigned ram(unsigned address) const { return address & 65535; }
  unsigned d() const { return source.cpu.direct_page; }
  unsigned initiative_offset() const { return source.jp ? 0x23 : 0x1d; }
  unsigned round_offset() const { return source.jp ? 0x27 : 0x25; }
  unsigned flee_offset() const { return source.jp ? 0x29 : 0x27; }
  void local(unsigned at, unsigned value) { source.put(d() + at, value); }
  unsigned local(unsigned at) const { return source.word(d() + at); }
  void bytes(unsigned address, std::span<const std::uint8_t> values) {
    std::copy(values.begin(), values.end(),
              source.bus->work_ram.begin() + ram(address));
  }
  void seed() {
    for (unsigned slot = 0; slot < 32; ++slot)
      bytes(p.BATTLERS_TABLE + slot * 78, encode(roster.at(slot)));
    const unsigned shift = source.jp ? 1 : 0, stride = source.jp ? 94 : 95;
    for (unsigned id = 1; id <= 6; ++id) {
      const auto &c = party.character(id);
      const auto at = ram(p.PARTY_CHARACTERS) + (id - 1) * stride;
      bytes(at + 14 - shift, c.afflictions);
      bytes(at + 35 - shift, c.items);
      bytes(at + 49 - shift, c.equipment);
      source.put(at + 69 - shift, c.current_hp);
      source.put(at + 75 - shift, c.current_pp);
      source.bus->work_ram[at + 94 - shift] = c.battle_selection;
    }
    bytes(p.GAME_STATE + 122 - (source.jp ? 3 : 0), party.party_order);
    source.put(0x24, random.primary_word);
    source.put(0x26, random.secondary_word);
    source.put(ram(p.MIRROR_ENEMY), state.mirror_enemy);
    source.put(ram(p.BATTLE_MODE), encounter.mode);
    source.bus->work_ram[ram(p.BATTLE_ITEM_USED)] = state.item_used;
    auto at = ram(p.BATTLE_MENU_SELECTION);
    source.bus->work_ram[at] = state.menu.user;
    source.bus->work_ram[at + 1] = state.menu.param;
    source.put(at + 2, state.menu.action);
    source.bus->work_ram[at + 4] = state.menu.targeting;
    source.bus->work_ram[at + 5] = state.menu.target;
    for (unsigned i = 0; i < 6; ++i)
      source.put(ram(p.PARTY_MEMBERS_WITH_SELECTED_ACTIONS) + i * 2,
                 state.selected_party_slots[i]);
    source.put(ram(p.NUM_BATTLERS_IN_FRONT_ROW), rows.front_count);
    source.put(ram(p.NUM_BATTLERS_IN_BACK_ROW), rows.back_count);
    bytes(p.FRONT_ROW_BATTLERS, rows.front);
    bytes(p.BACK_ROW_BATTLERS, rows.back);
    bytes(p.BATTLER_FRONT_ROW_X_POSITIONS, rows.front_x);
    bytes(p.BATTLER_FRONT_ROW_Y_POSITIONS, rows.front_y);
    bytes(p.BATTLER_BACK_ROW_X_POSITIONS, rows.back_x);
    bytes(p.BATTLER_BACK_ROW_Y_POSITIONS, rows.back_y);
    bytes(p.STEALABLE_ITEM_CANDIDATES, steals.candidates);
    local(initiative_offset(), state.initiative);
    local(round_offset(), state.round_number);
    local(flee_offset(), state.flee_requested);
    local(0x19, state.selected_count);
  }
  void compare() {
    for (unsigned slot = 0; slot < 32; ++slot) {
      const auto native = encode(roster.at(slot));
      for (unsigned i = 0; i < 78; ++i)
        require(native[i] ==
                    source.bus->work_ram[ram(p.BATTLERS_TABLE) + slot * 78 + i],
                "record slot=" + std::to_string(slot) +
                    " byte=" + std::to_string(i) + " source=" +
                    std::to_string(source.bus->work_ram[ram(p.BATTLERS_TABLE) +
                                                        slot * 78 + i]) +
                    " native=" + std::to_string(native[i]));
    }
    require(source.word(0x24) == random.primary_word &&
                source.word(0x26) == random.secondary_word,
            "RNG words differ");
    require(source.word(ram(p.MIRROR_ENEMY)) == state.mirror_enemy,
            "Mirror owner differs");
  }
  void compare_rows() {
    require(source.word(ram(p.NUM_BATTLERS_IN_FRONT_ROW)) == rows.front_count &&
                source.word(ram(p.NUM_BATTLERS_IN_BACK_ROW)) == rows.back_count,
            "Row counts differ");
    const auto compare_array = [&](unsigned at, const auto &values) {
      for (unsigned i = 0; i < values.size(); ++i)
        require(source.bus->work_ram[ram(at) + i] == values[i],
                "Row retained byte differs");
    };
    compare_array(p.FRONT_ROW_BATTLERS, rows.front);
    compare_array(p.BACK_ROW_BATTLERS, rows.back);
    compare_array(p.BATTLER_FRONT_ROW_X_POSITIONS, rows.front_x);
    compare_array(p.BATTLER_FRONT_ROW_Y_POSITIONS, rows.front_y);
    compare_array(p.BATTLER_BACK_ROW_X_POSITIONS, rows.back_x);
    compare_array(p.BATTLER_BACK_ROW_Y_POSITIONS, rows.back_y);
  }
  unsigned run(unsigned entry, std::initializer_list<unsigned> stops) {
    source.cpu.program_counter = p.labels.at(entry);
    source.cpu.status_register = eb::MainCpu65816::InterruptDisable;
    for (unsigned n = 0; n < 1000000; ++n) {
      for (auto label : stops)
        if (source.cpu.program_counter == p.labels.at(label))
          return label;
      source.step();
    }
    throw std::runtime_error(context + ": continuation bound " +
                             source.cpu.describe_registers());
  }
  void near_call(unsigned entry, unsigned argument, unsigned second = 0) {
    const auto stack = source.cpu.stack_pointer;
    const auto direct = source.cpu.direct_page;
    const auto returning = (entry & 0xff0000) | 0xff03;
    source.cpu.program_counter = (entry & 0xff0000) | 0xff00;
    source.cpu.accumulator = argument;
    source.cpu.x_index = second;
    source.cpu.status_register = eb::MainCpu65816::InterruptDisable;
    source.cpu.execute_instruction<0x20>(entry & 65535, 3);
    for (unsigned n = 0; n < 1000000; ++n) {
      if (source.cpu.program_counter == returning &&
          source.cpu.stack_pointer == stack) {
        require(source.cpu.direct_page == direct, "Near helper changed ABI");
        return;
      }
      source.step();
    }
    throw std::runtime_error("Near helper did not return");
  }
  void native_selection() {
    turns.begin_round();
    for (unsigned i = 0; i < 12; ++i) {
      const auto step = turns.inspect_player();
      if (step == PlayerStep::Finished)
        return;
      require(step != PlayerStep::PartyDefeated,
              "Native party unexpectedly defeated");
      if (step == PlayerStep::Selection)
        turns.submit_player(4);
    }
    throw std::runtime_error("Native selection did not finish");
  }
};
void helper_cases(const eb::GameAssets &assets, Resources &r) {
  Pair q(assets, r);
  for (unsigned seed = 0; seed < 256; ++seed)
    for (unsigned value : {0u, 1u, 255u, 256u, 0x8000u, 0xffffu}) {
      context =
          "variance " + std::to_string(seed) + "/" + std::to_string(value);
      q.random = {std::uint16_t(seed * 257),
                  std::uint16_t(0xff00 | ((seed * 71 + 13) & 255))};
      q.seed();
      q.near_call(q.p.FIFTY_PERCENT_VARIANCE, value);
      const auto actual =
          fifty_percent_variance(q.random, std::uint16_t(value));
      require(actual == q.source.cpu.accumulator, "Variance result differs");
      q.compare();
      ++helpers;
    }
  for (unsigned duplicate = 0; duplicate < 2; ++duplicate) {
    context = "rows duplicate=" + std::to_string(duplicate);
    q.roster.at(10).x = duplicate ? 32 : 96;
    q.seed();
    q.source.call(q.p.UNKNOWN_C2F917);
    q.targets.rebuild_rows();
    q.compare();
    q.compare_rows();
    ++helpers;
  }
  for (unsigned id = 0; id < 318; ++id)
    for (unsigned side = 0; side < 2; ++side) {
      context = "target action=" + std::to_string(id) +
                " side=" + std::to_string(side);
      const unsigned slot = side ? 8 : 0;
      q.roster.at(10).x = 96;
      q.targets.rebuild_rows();
      q.roster.at(slot).action = std::uint16_t(id);
      q.roster.at(slot).target = 0xa5;
      q.roster.at(slot).targeting = 0xbe;
      q.random = {0x1234, std::uint16_t(0xab00 + id)};
      q.seed();
      q.source.call(q.p.CHOOSE_TARGET, q.ram(q.p.BATTLERS_TABLE) + slot * 78);
      q.targets.choose(slot);
      q.compare();
      q.compare_rows();
      ++helpers;
    }
  for (unsigned npc = 5; npc < 19; ++npc)
    for (unsigned present = 0; present < 2; ++present) {
      context = "NPC id=" + std::to_string(npc) +
                " present=" + std::to_string(present);
      q.party.party_order = {std::uint8_t(npc), 0, 0, 0, 0, 0};
      q.roster.at(2).consciousness = std::uint8_t(present);
      q.roster.at(2).npc = std::uint8_t(npc);
      q.random = {0x1234, 0x5678};
      q.seed();
      q.source.call(q.p.FIND_TARGETTABLE_NPC);
      require(q.targets.find_npc() == q.source.cpu.accumulator,
              "NPC lookup result differs");
      q.compare();
      ++helpers;
    }
  q.roster.at(2) = {};
  q.party.party_order = {1, 2, 0, 0, 0, 0};
  unsigned item_count{};
  for (unsigned item = 1;
       item < r.substitutions->item_count() && item_count < 14; ++item)
    if (r.substitutions->item_cost(item) > 0 &&
        r.substitutions->item_cost(item) < 290 &&
        (r.substitutions->item_properties(item).type & 0x30) == 0x20)
      q.party.character(1).items[item_count++] = std::uint8_t(item);
  require(item_count >= 5,
          "Actual item catalog did not provide steal candidates");
  q.party.character(1).equipment = {2, 4, 0, 0};
  q.roster.at(0).action_item_slot = 5;
  q.seed();
  q.near_call(q.p.FIND_STEALABLE_ITEMS, 0);
  require(q.targets.find_stealable_items() == q.source.cpu.accumulator,
          "Steal count differs");
  for (unsigned i = 0; i < 56; ++i)
    require(
        q.steals.candidates[i] ==
            q.source.bus->work_ram[q.ram(q.p.STEALABLE_ITEM_CANDIDATES) + i],
        "Steal retained array differs");
  ++helpers;
  unsigned stolen{}, skipped{};
  for (unsigned seed = 0; seed < 32; ++seed) {
    q.random = {std::uint16_t(0x1234 + seed * 331),
                std::uint16_t(0xabcd + seed * 91)};
    q.seed();
    q.source.call(q.p.SELECT_STEALABLE_ITEM);
    const auto item = q.targets.select_stealable_item();
    require(item == q.source.cpu.accumulator, "Steal selected item differs");
    q.compare();
    ++helpers;
    item ? ++stolen : ++skipped;
  }
  require(stolen && skipped,
          "Steal random refusal/selection coverage was vacuous");
}
void round_cases(const eb::GameAssets &assets, Resources &r) {
  for (unsigned seed = 0; seed < 32; ++seed) {
    context = "round " + std::to_string(seed);
    Pair q(assets, r);
    q.state.round_number = seed == 31 ? 0xffff : std::uint16_t(seed);
    q.random = {std::uint16_t(0x1283 + seed * 733),
                std::uint16_t(0xbca7 + seed * 281)};
    for (unsigned slot = 0; slot < 32; ++slot) {
      q.roster.at(slot).taken_turn = std::uint8_t(1 + slot);
      q.roster.at(slot).speed = std::uint16_t(seed * 2047 + slot * 97);
      q.roster.at(slot).initiative = 0x34;
      q.roster.at(slot).unknown71 = 0xa2;
    }
    for (unsigned id = 1; id <= 6; ++id)
      q.party.character(id).battle_selection = std::uint8_t(0xf0 + id);
    q.seed();
    q.run(71, {77});
    q.turns.begin_round();
    q.compare();
    q.compare_rows();
    require(q.local(q.round_offset()) == q.state.round_number,
            "Round counter differs");
    for (unsigned id = 1; id <= 6; ++id)
      require(q.source.bus->work_ram[q.ram(q.p.PARTY_CHARACTERS) +
                                     (id - 1) * (q.source.jp ? 94 : 95) +
                                     (q.source.jp ? 93 : 94)] ==
                  q.party.character(id).battle_selection,
              "Round character reset differs");
    ++rounds;
  }
}
void player_cases(const eb::GameAssets &assets, Resources &r) {
  for (unsigned temporary : {0u, 1u, 2u, 3u, 4u, 255u})
    for (unsigned initiative : {0u, 1u, 2u, 3u, 4u}) {
      context = "player temporary=" + std::to_string(temporary) +
                " initiative=" + std::to_string(initiative);
      Pair q(assets, r);
      q.state.initiative = std::uint16_t(initiative);
      q.party.character(1).afflictions[2] = std::uint8_t(temporary);
      q.state.menu = {1, 19, 91, 1, 2};
      q.state.item_used = 22;
      q.turns.begin_round();
      q.seed();
      q.local(2, 0);
      q.local(4, 1);
      const auto stop = q.run(78, {83, 106});
      const auto result = q.turns.inspect_player();
      require((stop == 83) == (result == PlayerStep::Selection),
              "Player admission differs");
      q.compare();
      if (stop == 106)
        require(q.local(2) == q.turns.player_list_index(),
                "Disabled visit index differs");
      ++selections;
    }
  for (unsigned returned : {0u, 1u, 8u, 279u, 0xffffu})
    for (unsigned mode : {0u, 1u})
      for (unsigned selected : {0u, 1u}) {
        context = "menu return=" + std::to_string(returned) +
                  " mode=" + std::to_string(mode) +
                  " selected=" + std::to_string(selected);
        Pair q(assets, r);
        q.encounter.mode = std::uint16_t(mode);
        q.state.menu = {1, 17, 93, 1, 2};
        q.state.item_used = 22;
        q.turns.begin_round();
        require(q.turns.inspect_player() == PlayerStep::Selection,
                "Missing menu input");
        q.state.selected_count = std::uint16_t(selected);
        q.state.selected_party_slots[0] = 0;
        q.seed();
        q.local(2, 0);
        q.local(4, 1);
        q.local(0x1f, returned);
        const auto stop = q.run(1000, {77, 106, 2, 237});
        const auto result = q.turns.submit_player(std::uint16_t(returned));
        if (returned == 0xffff)
          require(result == (mode ? SelectionResult::CancelBattle
                                  : SelectionResult::RestartBattle) &&
                      stop == (mode ? 237u : 2u),
                  "FFFF branch differs stop=" + std::to_string(stop) +
                      " result=" + std::to_string(unsigned(result)));
        else {
          q.compare();
          require(q.local(0x19) == q.state.selected_count,
                  "Selected history count differs");
          require(q.local(q.initiative_offset()) == q.state.initiative,
                  "Running initiative differs");
          require(q.local(q.flee_offset()) == unsigned(q.state.flee_requested),
                  "Running request differs");
          for (unsigned i = 0; i < 6; ++i)
            require(
                q.source.word(q.ram(q.p.PARTY_MEMBERS_WITH_SELECTED_ACTIONS) +
                              i * 2) == q.state.selected_party_slots[i],
                "Selected history tail differs");
        }
        ++selections;
      }
}
void ai_cases(const eb::GameAssets &assets) {
  for (unsigned pattern : {0u, 1u, 2u, 3u, 4u, 255u})
    for (unsigned initiative = 0; initiative < 5; ++initiative) {
      auto input = assets;
      const bool jp = input.version == eb::GameVersion::JP;
      const unsigned table = jp ? 0x15a440 : 0x159589, stride = jp ? 77 : 94,
                     shift = jp ? 17 : 0;
      for (unsigned id : {1u, 2u, 3u}) {
        auto at = table + id * stride;
        input.image[at + 69 - shift] = std::uint8_t(pattern);
        for (unsigned i = 0; i < 4; ++i) {
          put(input.image, at + 70 - shift + i * 2, 103);
          input.image[at + 80 - shift + i] = std::uint8_t(21 + i);
        }
      }
      // Explicit synthetic extender input reaches a second real table record.
      put(input.image, table + stride + 70 - shift, 245);
      input.image[table + stride + 80 - shift] = 2;
      Resources resources(input);
      Pair q(input, resources);
      ++synthetic;
      context = "AI pattern=" + std::to_string(pattern) +
                " initiative=" + std::to_string(initiative);
      q.state.initiative = std::uint16_t(initiative);
      q.state.mirror_enemy = 3;
      q.roster.at(1).id = 4;
      q.party.party_order[1] = 4;
      q.roster.at(2) = q.roster.at(8);
      q.roster.at(2).side = 0;
      q.roster.at(2).npc = 5;
      q.roster.at(2).consciousness = 0;
      for (unsigned slot = 8; slot < 12; ++slot)
        q.roster.at(slot).action_order = std::uint8_t((slot - 8) % 2);
      q.native_selection();
      q.seed();
      q.local(2, 6);
      q.local(0x21, 0);
      q.source.cpu.program_counter = q.p.labels.at(106);
      q.source.cpu.status_register = eb::MainCpu65816::InterruptDisable;
      bool done{};
      for (unsigned n = 0; n < 2000000; ++n) {
        if (q.source.cpu.program_counter == q.p.labels.at(132) &&
            q.source.cpu.y_index == 32) {
          done = true;
          break;
        }
        q.source.step();
      }
      require(done, "AI source bound");
      q.turns.choose_other_actions();
      q.compare();
      q.compare_rows();
      ++ais;
    }
}
void raw_ai_cases(const eb::GameAssets &assets) {
  for (unsigned pattern : {2u, 3u, 255u}) {
    auto input = assets;
    const bool jp = input.version == eb::GameVersion::JP;
    const unsigned table = jp ? 0x15a440 : 0x159589, stride = jp ? 77 : 94,
                   shift = jp ? 17 : 0, at = table + stride;
    input.image[at + 69 - shift] = std::uint8_t(pattern);
    put(input.image, at + 78 - shift, 103); // index4 aliases final_action.
    input.image[at + 80 - shift] = 103;
    input.image[at + 81 - shift] = 0; // index5 aliases argument bytes.
    input.image[at + 84 - shift] = 103;
    input.image[at + 85 - shift] = 0; // index7 aliases final argument + IQ.
    input.image[at + 87 - shift] = 0x72;
    Resources resources(input);
    Pair q(input, resources);
    ++synthetic;
    context = "raw AI alias pattern=" + std::to_string(pattern);
    for (unsigned slot = 9; slot < 12; ++slot)
      q.roster.at(slot).consciousness = 0;
    q.roster.at(8).action_order = std::uint8_t(pattern == 2 ? 4 : 2);
    if (pattern == 255)
      q.party.party_order[5] = 7;
    q.native_selection();
    q.seed();
    q.local(2, 6);
    q.local(0x21, pattern == 255 ? 7 : 0);
    q.source.cpu.program_counter = q.p.labels.at(106);
    q.source.cpu.status_register = eb::MainCpu65816::InterruptDisable;
    bool done{};
    for (unsigned n = 0; n < 2000000; ++n) {
      if (q.source.cpu.program_counter == q.p.labels.at(132) &&
          q.source.cpu.y_index == 32) {
        done = true;
        break;
      }
      q.source.step();
    }
    require(done, "Raw AI source bound");
    q.turns.choose_other_actions();
    q.compare();
    q.compare_rows();
    require(q.roster.at(8).action == 103,
            "Raw action-order input did not read the intended adjacent field");
    ++ais;
  }
}
void grammar_cases(const eb::GameAssets &assets, Resources &resources) {
  if (assets.version != eb::GameVersion::US)
    return;
  Pair q(assets, resources);
  q.party.display_order = {1, 2, 3, 4, 5, 6};
  q.action.attacker = 8;
  q.action.target = 0;
  const auto compare = [&](bool target, unsigned operand) {
    q.seed();
    q.source.put(0x88e0,
                 0xffff); // Actual empty window list selects DUMMY_WINDOW.
    q.source.put(q.ram(q.p.CURRENT_ATTACKER),
                 q.ram(q.p.BATTLERS_TABLE) + *q.action.attacker * 78);
    q.source.put(q.ram(q.p.CURRENT_TARGET),
                 q.ram(q.p.BATTLERS_TABLE) + *q.action.target * 78);
    q.source.put(0x9f8a, q.action.enemy_count);
    q.bytes(q.p.GAME_STATE + 150, q.party.display_order);
    q.source.bus->work_ram[q.ram(q.p.GAME_STATE) + 175] =
        q.party.controlled_count;
    q.source.put(0x85fe + 23, 0xabcd);
    q.source.put(0x85fe + 25, 0x9876);
    q.near_call(target ? 0xc151fc : 0xc1516b, 0, operand);
    const auto value =
        grammar(q.roster, q.party, q.action, target, std::uint8_t(operand));
    require(q.source.word(0x85fe + 23) == value &&
                q.source.word(0x85fe + 25) == 0,
            "US grammar working32 differs");
    require(q.source.cpu.accumulator == 0,
            "Grammar CC did not return NULL continuation");
    ++helpers;
  };
  for (unsigned enemy = 0; enemy < EnemyResources::count; ++enemy)
    for (bool target : {false, true}) {
      context = "grammar enemy=" + std::to_string(enemy);
      auto &actor = q.roster.at(target ? 0 : 8);
      actor.side = 1;
      actor.id = std::uint16_t(enemy);
      compare(target, 1);
    }
  for (unsigned side : {0u, 1u, 2u, 255u})
    for (unsigned count : {0u, 1u, 2u, 3u, 4u, 0xffffu})
      for (unsigned operand : {0u, 1u, 2u, 255u})
        for (bool target : {false, true}) {
          context = "grammar side=" + std::to_string(side) +
                    " count=" + std::to_string(count);
          auto &actor = q.roster.at(target ? 0 : 8);
          actor.side = std::uint8_t(side);
          actor.id = 2;
          q.action.enemy_count = std::uint16_t(count);
          q.party.controlled_count = std::uint8_t(count % 7);
          q.party.character(1).afflictions[0] = 1;
          q.party.character(2).afflictions[0] = 2;
          compare(target, operand);
        }
}
void flee_and_actor_cases(const eb::GameAssets &assets, Resources &r) {
  unsigned boss_id{};
  for (unsigned id = 1; id < EnemyResources::count; ++id)
    if (r.enemies->enemy(id).boss) {
      boss_id = id;
      break;
    }
  require(boss_id != 0, "Actual catalog has no boss flag for escape proof");
  for (unsigned variant = 0; variant < 13; ++variant) {
    context = "escape " + std::to_string(variant);
    Pair q(assets, r);
    q.state.initiative = 1;
    q.native_selection();
    q.turns.choose_other_actions();
    q.state.initiative = variant == 0 ? 4 : 3;
    q.state.flee_requested = variant != 12;
    q.state.round_number =
        std::uint16_t(variant == 11 ? 0xffff : variant * 10 + 1);
    for (unsigned slot = 8; slot < 12; ++slot) {
      q.roster.at(slot).speed = std::uint16_t(100 + variant * 100);
      q.roster.at(slot).afflictions[0] = variant == 1 ? 3 : 0;
      q.roster.at(slot).afflictions[2] = std::uint8_t(variant == 2 ? 4 : 0);
      if (variant == 3)
        q.roster.at(slot).id = std::uint16_t(boss_id);
    }
    q.seed();
    const auto stop = q.run(134, {142, 143, 144});
    const auto result = q.turns.attempt_flee();
    require((stop == 142) == (result == FleeResult::Escaped),
            "Escape branch differs");
    q.compare();
    if (result != FleeResult::Escaped) {
      if (stop == 143)
        q.source.step(); // Real STZ of the local flee request, before its
                         // actual message.
      require(q.local(q.flee_offset()) == unsigned(q.state.flee_requested),
              "Failed escape did not clear request");
      q.run(144, {234});
      q.turns.finish_selection();
      require(q.local(q.initiative_offset()) == q.state.initiative,
              "Post-message initiative reset differs");
    }
    ++escapes;
  }
  for (unsigned variant = 0; variant < 11; ++variant) {
    context = "actor " + std::to_string(variant);
    Pair q(assets, r);
    q.state.initiative = 1;
    q.native_selection();
    q.turns.choose_other_actions();
    q.turns.attempt_flee();
    q.turns.finish_selection();
    // CHECK_DEAD_PLAYERS genuinely scans its first six slots and skips
    // them. COUNT_CHARS still sees the declared healthy player in slot6.
    q.roster.at(6) = q.roster.at(0);
    q.roster.at(0).consciousness = q.roster.at(1).consciousness = 0;
    for (unsigned slot = 0; slot < 32; ++slot) {
      q.roster.at(slot).initiative = std::uint8_t(variant ? 0xff : 0);
      q.roster.at(slot).unknown71 = std::uint8_t(variant ? variant : 1);
      q.roster.at(slot).taken_turn = variant == 7 ? 1 : 0;
    }
    q.seed();
    const auto mutate = [&] {
      if (variant >= 8) {
        const auto at = q.ram(q.p.BATTLERS_TABLE) + 11 * 78;
        q.source.bus->work_ram[at + 29] = std::uint8_t(variant == 8   ? 1
                                                       : variant == 9 ? 2
                                                                      : 0);
        q.source.bus->work_ram[at + 12] = 0;
      }
    };
    q.source.observer = [&](Source &original) {
      if (original.cpu.program_counter == q.p.REDIRECT_C10FA3)
        mutate();
    };
    const auto stop = q.run(145, {154, 157, 234, 235});
    const auto selected = q.turns.next_actor();
    if (variant == 7)
      require(stop == 235 && selected.step == ActorStep::RoundComplete,
              "Empty actor scan differs");
    else {
      require(selected.slot == 11,
              "Equal initiative did not choose final physical slot");
      if (variant >= 8) {
        q.roster.at(11).afflictions[0] = std::uint8_t(variant == 8   ? 1
                                                      : variant == 9 ? 2
                                                                     : 0);
        q.roster.at(11).consciousness = 0;
      }
      const auto permit = q.turns.dispatch_actor();
      require(permit == (variant != 8 && variant != 9) &&
                  stop == (permit ? 157u : 234u),
              "Live actor dispatch differs");
      require(q.source.word(q.ram(q.p.CURRENT_ATTACKER)) ==
                  q.ram(q.p.BATTLERS_TABLE) + *q.action.attacker * 78,
              "Current attacker producer differs");
    }
    q.compare();
    ++actors;
  }
}
void run(const eb::GameAssets &assets) {
  Resources resources(assets);
  const auto before = checks;
  helper_cases(assets, resources);
  round_cases(assets, resources);
  player_cases(assets, resources);
  ai_cases(assets);
  raw_ai_cases(assets);
  flee_and_actor_cases(assets, resources);
  grammar_cases(assets, resources);
  std::cout << (assets.version == eb::GameVersion::US ? "US" : "JP") << ": "
            << checks - before << " source comparisons\n";
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2) {
    std::cout
        << "SKIP: local US/JP packs required for turn scheduling reference\n";
    return 77;
  }
  try {
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    std::cout << "PASS scheduling source segments: " << helpers << " helpers, "
              << rounds << " round prefixes, " << selections
              << " player visits/results, " << ais << " complete AI passes, "
              << escapes << " escape decisions, " << actors << " actor scans; "
              << synthetic << " declared catalog variants; " << instructions
              << " original instructions.\n";
    std::cout << "Scope: named continuation inputs and complete callees; "
                 "battle startup, command-menu UI, action execution and "
                 "post-action recovery remain separate proofs.\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
