// Complete original BATTLE_INIT_PLAYER_STATS / BATTLE_INIT_ENEMY_STATS,
// C2C32C replacement and COPY_MIRROR_DATA versus the native authoritative
// roster, plus initialized full-record formation application. Original helpers
// and their memory/math/status/label/random closures execute
// instruction by instruction, with no intercepts or success acknowledgments.
// Test-only serializers below explicitly map named semantic values to all78
// source bytes. Native production does not pack WRAM or run an original CPU.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/battle/formation.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <span>
#include <stdexcept>
#include <string>
#include <vector>
namespace {
namespace battle = eb::native::battle;
namespace party = eb::native::party;
using Bytes = std::array<std::uint8_t, 78>;
std::string context;
void require(bool okay, const std::string &why) {
  if (!okay)
    throw std::runtime_error(context + ": " + why);
}
struct Counts {
  std::uint64_t instructions{}, calls{}, snapshots{}, record_bytes{}, players{},
      enemies{}, replacements{}, mirrors{}, labels{}, shields{},
      damage_modifiers{}, resistance_modifiers{}, explicit_seeds{},
      party_bytes{}, selector_checks{}, synthetic_catalogs{}, identity_checks{},
      backup_copies{}, formations{}, formation_swaps{}, formation_rows_full{},
      formation_random{};
} counts;
unsigned word(std::span<const std::uint8_t> bytes, unsigned offset) {
  return bytes[offset] | (unsigned(bytes[offset + 1]) << 8);
}
std::uint32_t wide(std::span<const std::uint8_t> bytes, unsigned offset) {
  return word(bytes, offset) | (std::uint32_t(word(bytes, offset + 2)) << 16);
}
void put(std::span<std::uint8_t> bytes, unsigned offset, unsigned value) {
  bytes[offset] = std::uint8_t(value);
  bytes[offset + 1] = std::uint8_t(value >> 8);
}
void put32(std::span<std::uint8_t> bytes, unsigned offset,
           std::uint32_t value) {
  put(bytes, offset, value);
  put(bytes, offset + 2, value >> 16);
}
// Independent source offsets from include/structs.asm::battler. Neither packing
// nor conversion routines from the new implementation generate expected bytes.
Bytes encode(const battle::Battler &v) {
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
battle::Battler decode(const Bytes &b) {
  battle::Battler v;
  v.id = word(b, 0);
  v.sprite = word(b, 2);
  v.action = word(b, 4);
  v.action_order = b[6];
  v.action_item_slot = b[7];
  v.action_argument = b[8];
  v.targeting = b[9];
  v.target = b[10];
  v.label = b[11];
  v.consciousness = b[12];
  v.taken_turn = b[13];
  v.side = b[14];
  v.npc = b[15];
  v.row = b[16];
  v.hp = word(b, 17);
  v.target_hp = word(b, 19);
  v.maximum_hp = word(b, 21);
  v.pp = word(b, 23);
  v.target_pp = word(b, 25);
  v.maximum_pp = word(b, 27);
  std::copy_n(b.begin() + 29, 7, v.afflictions.begin());
  v.guarding = b[36];
  v.shield_hp = b[37];
  v.offense = word(b, 38);
  v.defense = word(b, 40);
  v.speed = word(b, 42);
  v.guts = word(b, 44);
  v.luck = word(b, 46);
  v.vitality = b[48];
  v.iq = b[49];
  v.base_offense = b[50];
  v.base_defense = b[51];
  v.base_speed = b[52];
  v.base_guts = b[53];
  v.base_luck = b[54];
  v.paralysis_resistance = b[55];
  v.freeze_resistance = b[56];
  v.flash_resistance = b[57];
  v.fire_resistance = b[58];
  v.brainshock_resistance = b[59];
  v.hypnosis_resistance = b[60];
  v.money = word(b, 61);
  v.experience = wide(b, 63);
  v.resource = b[67];
  v.x = b[68];
  v.y = b[69];
  v.initiative = b[70];
  v.unknown71 = b[71];
  v.blink = b[72];
  v.alternate_flash = b[73];
  v.targeted = b[74];
  v.alternate = b[75];
  v.original_enemy = word(b, 76);
  return v;
}
Bytes dirty(unsigned slot, unsigned seed) {
  Bytes b;
  for (unsigned i = 0; i < b.size(); ++i)
    b[i] = std::uint8_t(seed * 31 + slot * 71 + i * 13);
  b[14] = 2;
  return b;
}
struct Layout {
  unsigned player, enemy, replace, mirror, label, damage, resistance, shield,
      records, highest, attacker, target, count, characters, letters, catalog,
      stride;
};
Layout layout(eb::GameVersion v) {
  if (v == eb::GameVersion::US)
    return {0xc2b930, 0xc2b6eb, 0xc2c32c, 0xc2af1f, 0xc2b66a, 0xc2b608,
            0xc2b639, 0xc29cdc, 0x9fac,   0xaa0c,   0xa970,   0xa972,
            0x9f8a,   0x99ce,   0xaa98,   0x159589, 94};
  return {0xc2b8d9, 0xc2b692, 0xc2c2e6, 0xc2aed3, 0xc2b60f, 0xc2b5ad,
          0xc2b5de, 0xc29c85, 0xa1ae,   0xabe1,   0xab72,   0xab74,
          0xa18c,   0x9c7f,   0xac6d,   0x15a440, 77};
}
class Source {
public:
  eb::GameVersion version;
  Layout p;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  static constexpr unsigned stack = 0x1fdf, direct = 0x1e00;
  std::array<std::uint8_t, 32> caller;
  unsigned random_draws{};
  explicit Source(const eb::GameAssets &a)
      : version(a.version), p(layout(a.version)),
        bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e;
    cpu.stack_pointer = stack;
    cpu.direct_page = direct;
    for (unsigned i = 0; i < caller.size(); ++i) {
      caller[i] = std::uint8_t(0xa5 ^ (37 * i));
      bus->work_ram[stack + 1 + i] = caller[i];
    }
  }
  unsigned get(unsigned at) const { return word(bus->work_ram, at); }
  void put(unsigned at, unsigned value) { ::put(bus->work_ram, at, value); }
  void put32(unsigned at, std::uint32_t value) {
    ::put32(bus->work_ram, at, value);
  }
  unsigned record(unsigned slot) const { return p.records + 78 * slot; }
  void seed(unsigned slot, const Bytes &b) {
    std::copy(b.begin(), b.end(), bus->work_ram.begin() + record(slot));
  }
  void call(unsigned entry, bool far, unsigned a = 0, unsigned x = 0) {
    require(cpu.stack_pointer == stack && cpu.direct_page == direct,
            "source caller frame changed");
    cpu.program_counter = (entry & 0xff0000) | 0xff00;
    const auto returning = cpu.program_counter + (far ? 4 : 3);
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = 0;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    if (far)
      cpu.execute_instruction<0x22>(entry, 4);
    else
      cpu.execute_instruction<0x20>(entry & 65535, 3);
    ++counts.calls;
    for (unsigned i = 0; i < 1000000; ++i) {
      if (cpu.program_counter == returning && cpu.stack_pointer == stack) {
        require(cpu.direct_page == direct && cpu.data_bank == 0x7e,
                "source helper did not restore ABI");
        require(std::equal(caller.begin(), caller.end(),
                           bus->work_ram.begin() + stack + 1),
                "source changed caller stack bytes");
        return;
      }
      const auto pc = cpu.program_counter;
      if (pc == (version == eb::GameVersion::US ? 0xc269efu : 0xc2692eu))
        ++random_draws;
      if (pc == p.label)
        ++counts.labels;
      if (pc == p.shield)
        ++counts.shields;
      if (pc == p.damage)
        ++counts.damage_modifiers;
      if (pc == p.resistance)
        ++counts.resistance_modifiers;
      cpu.step_instruction();
      ++counts.instructions;
    }
    throw std::runtime_error(context + ": source helper bound " +
                             cpu.describe_registers());
  }
};
struct Pair {
  Source source;
  std::shared_ptr<const battle::EnemyResources> resources;
  battle::Roster roster;
  party::State party;
  std::vector<std::uint8_t> party_bytes;
  unsigned expected_count = 0xa531;
  explicit Pair(const eb::GameAssets &a)
      : source(a),
        resources(battle::EnemyResources::import(a.image, a.version)),
        roster(resources), party(a.version) {
    source.put(source.p.attacker, source.record(3));
    source.put(source.p.target, source.record(29));
    source.put(source.p.count, 0xa531);
    source.put(source.p.records - 2, 0x1234);
    source.put(source.p.records + 32 * 78, 0x89ab);
    source.put(source.p.records + 32 * 78 + 2, 0xcdef);
    for (unsigned i = 0; i < 32; ++i)
      seed(i, dirty(i, 19));
  }
  void seed(unsigned slot, const Bytes &b) {
    roster.at(slot) = decode(b);
    source.seed(slot, b);
    require(encode(roster.at(slot)) == b,
            "fixture serializer lost input field");
    ++counts.explicit_seeds;
  }
  void seed_party(unsigned input) {
    const bool jp = source.version == eb::GameVersion::JP;
    const unsigned stride = jp ? 94 : 95, shift = jp ? 1 : 0;
    for (unsigned id = 1; id <= 6; ++id) {
      std::vector<std::uint8_t> b(stride);
      for (unsigned n = 0; n < stride; ++n)
        b[n] = std::uint8_t(input * 17 + id * 31 + n * 7);
      // Sweep all raw resistance bytes, including values outside0..3.
      for (unsigned n = 0; n < 5; ++n)
        b[82 - shift + n] = std::uint8_t(input + n * 53);
      auto &c = party.character(id);
      c.maximum_hp = word(b, 10 - shift);
      c.maximum_pp = word(b, 12 - shift);
      std::copy_n(b.begin() + 14 - shift, 7, c.afflictions.begin());
      c.offense = b[21 - shift];
      c.defense = b[22 - shift];
      c.speed = b[23 - shift];
      c.guts = b[24 - shift];
      c.luck = b[25 - shift];
      c.vitality = b[26 - shift];
      c.iq = b[27 - shift];
      c.current_hp = word(b, 69 - shift);
      c.target_hp = word(b, 71 - shift);
      c.current_pp = word(b, 75 - shift);
      c.target_pp = word(b, 77 - shift);
      c.fire_resistance = b[82 - shift];
      c.freeze_resistance = b[83 - shift];
      c.flash_resistance = b[84 - shift];
      c.paralysis_resistance = b[85 - shift];
      c.hypnosis_brainshock_resistance = b[86 - shift];
      std::copy(b.begin(), b.end(),
                source.bus->work_ram.begin() + source.p.characters +
                    (id - 1) * stride);
    }
    party_bytes.assign(source.bus->work_ram.begin() + source.p.characters,
                       source.bus->work_ram.begin() + source.p.characters +
                           6 * stride);
  }
  void compare() {
    for (unsigned slot = 0; slot < 32; ++slot) {
      const auto actual = encode(roster.at(slot));
      for (unsigned offset = 0; offset < 78; ++offset) {
        const auto expected =
            source.bus->work_ram[source.record(slot) + offset];
        require(actual[offset] == expected,
                "record mismatch slot=" + std::to_string(slot) +
                    " byte=" + std::to_string(offset) +
                    " native=" + std::to_string(actual[offset]) +
                    " source=" + std::to_string(expected));
        ++counts.record_bytes;
      }
    }
    require(roster.highest_enemy_level() == source.get(source.p.highest),
            "highest enemy level differs");
    require(source.get(source.p.attacker) == source.record(3) &&
                source.get(source.p.target) == source.record(29) &&
                source.get(source.p.count) == expected_count,
            "helper changed action selectors/count");
    require(source.get(source.p.records - 2) == 0x1234 &&
                source.get(source.p.records + 32 * 78) == 0x89ab &&
                source.get(source.p.records + 32 * 78 + 2) == 0xcdef,
            "helper overran roster boundaries");
    if (!party_bytes.empty()) {
      require(std::equal(party_bytes.begin(), party_bytes.end(),
                         source.bus->work_ram.begin() + source.p.characters),
              "helper changed source party inputs");
      counts.party_bytes += party_bytes.size();
    }
    ++counts.selector_checks;
    ++counts.snapshots;
  }
  void player(unsigned slot, unsigned character) {
    source.call(source.p.player, true, character, source.record(slot));
    roster.initialize_player(slot, party, character);
    compare();
    ++counts.players;
  }
  void enemy(unsigned slot, unsigned id) {
    source.call(source.p.enemy, true, id, source.record(slot));
    roster.initialize_enemy(slot, id);
    compare();
    ++counts.enemies;
  }
  void replace(unsigned id) {
    source.call(source.p.replace, false, id);
    roster.replace_primary_enemy(id);
    compare();
    ++counts.replacements;
  }
  void mirror(unsigned destination, unsigned from) {
    source.put32(Source::direct + 14, 0x7e0000 + source.record(destination));
    source.put32(Source::direct + 18, 0x7e0000 + source.record(from));
    const auto identity = roster.identity(destination);
    source.call(source.p.mirror, true);
    roster.mirror(destination, from);
    compare();
    require(roster.identity(destination) == identity,
            "mirror replaced destination identity");
    ++counts.identity_checks;
    ++counts.mirrors;
  }
  void mirror_backup(unsigned destination, unsigned from) {
    const unsigned backup_address =
        source.version == eb::GameVersion::US ? 0xaa14 : 0xabe9;
    const unsigned copy_entry =
        source.version == eb::GameVersion::US ? 0xc08eed : 0xc08ede;
    const auto retained = roster.at(from);
    source.put32(Source::direct + 14, 0x7e0000 + backup_address);
    source.put32(Source::direct + 18, 0x7e0000 + source.record(from));
    source.call(copy_entry, true, 78);
    ++counts.backup_copies;
    // Mutating the former live source must not change either retained copy.
    seed(from, dirty(from, 231));
    const auto identity = roster.identity(destination);
    source.put32(Source::direct + 14, 0x7e0000 + source.record(destination));
    source.put32(Source::direct + 18, 0x7e0000 + backup_address);
    source.call(source.p.mirror, true);
    roster.mirror(destination, retained);
    compare();
    const auto bytes = encode(retained);
    require(std::equal(bytes.begin(), bytes.end(),
                       source.bus->work_ram.begin() + backup_address),
            "mirror changed retained source backup");
    require(roster.identity(destination) == identity,
            "backup restore replaced destination identity");
    ++counts.identity_checks;
    ++counts.mirrors;
  }
};
void player_cases(const eb::GameAssets &assets) {
  Pair pair(assets);
  for (unsigned seed = 0; seed < 256; ++seed) {
    pair.seed_party(seed);
    for (unsigned character = 1; character <= 6; ++character) {
      const auto slot = (seed + character * 5) % 32;
      context = "player seed=" + std::to_string(seed) +
                " character=" + std::to_string(character) +
                " slot=" + std::to_string(slot);
      pair.seed(slot, dirty(slot, seed));
      pair.player(slot, character);
    }
  }
}
void enemy_cases(const eb::GameAssets &assets) {
  Pair pair(assets);
  for (unsigned id = 0; id < battle::EnemyResources::count; ++id)
    for (unsigned slot : {0u, 8u, 31u}) {
      context = "catalog enemy=" + std::to_string(id) +
                " slot=" + std::to_string(slot);
      // All other records remain valid unrelated inputs; a prior same-id
      // initializer is genuine state consumed by the next label allocation.
      pair.seed(slot, dirty(slot, id));
      pair.enemy(slot, id);
    }
  for (unsigned id : {0u, 1u, 100u, 230u}) {
    context = "replacement enemy=" + std::to_string(id);
    pair.seed(8, dirty(8, id));
    pair.replace(id);
  }
}
void label_cases(const eb::GameAssets &assets) {
  for (unsigned occupancy : {0u, 1u, 5u, 25u, 26u})
    for (unsigned target : {0u, 8u, 31u}) {
      context = "labels occupancy=" + std::to_string(occupancy) +
                " destination=" + std::to_string(target);
      Pair pair(assets);
      unsigned used = 0;
      for (unsigned slot = 0; slot < 32; ++slot) {
        auto b = dirty(slot, 7);
        put(b, 0, 19);
        put(b, 76, 42);
        if (slot != target && used < occupancy) {
          b[12] = 255;
          b[14] = 1;
          b[11] = std::uint8_t(++used);
        }
        pair.seed(slot, b);
      }
      // Invalid old label is harmless because the initializer clears its
      // destination before the complete duplicate scan.
      auto destination = dirty(target, 3);
      put(destination, 76, 42);
      destination[12] = 1;
      destination[14] = 1;
      destination[11] = 255;
      pair.seed(target, destination);
      pair.enemy(target, 42);
    }
  for (unsigned excluded = 0; excluded < 3; ++excluded) {
    context = "label predicate exclusion=" + std::to_string(excluded);
    Pair pair(assets);
    for (unsigned slot = 0; slot < 8; ++slot) {
      auto b = dirty(slot, 11);
      b[12] = 1;
      b[14] = 1;
      b[11] = std::uint8_t(slot * 2 + 1);
      put(b, 76, 42);
      pair.seed(slot, b);
    }
    auto b = dirty(30, 11);
    b[12] = excluded == 0 ? 0 : 1;
    b[14] = excluded == 1 ? 2 : 1;
    b[11] = 0;
    put(b, 76, excluded == 2 ? 43 : 42);
    pair.seed(30, b);
    pair.enemy(31, 42);
  }
}
void mirror_cases(const eb::GameAssets &assets) {
  Pair pair(assets);
  pair.seed_party(19);
  pair.player(0, 4);
  pair.enemy(8, 42);
  for (unsigned from : {0u, 8u, 31u})
    for (unsigned to : {0u, 1u, 8u, 31u}) {
      context = "mirror source=" + std::to_string(from) +
                " destination=" + std::to_string(to);
      for (unsigned slot : {0u, 1u, 8u, 31u})
        pair.seed(slot, dirty(slot, from * 37 + to));
      pair.mirror(to, from);
    }
  for (unsigned from : {0u, 8u, 31u})
    for (unsigned to : {1u, 8u, 31u}) {
      context = "retained mirror backup source=" + std::to_string(from) +
                " destination=" + std::to_string(to);
      for (unsigned slot : {0u, 1u, 8u, 31u})
        pair.seed(slot, dirty(slot, from * 31 + to));
      pair.mirror_backup(to, from);
    }
}
void synthetic_cases(const eb::GameAssets &input) {
  const auto p = layout(input.version);
  const unsigned shift = input.version == eb::GameVersion::JP ? 17 : 0;
  for (unsigned status = 0; status < 256; ++status) {
    context = "synthetic status/resistance=" + std::to_string(status);
    auto assets = input;
    const auto at = p.catalog + 42 * p.stride;
    put(assets.image, at + 28 - shift, 0xabcd);
    put(assets.image, at + 56 - shift, 0xfea7);
    put(assets.image, at + 58 - shift, 0xedb9);
    assets.image[at + 54 - shift] = std::uint8_t(status);
    assets.image[at + 89 - shift] = std::uint8_t(status);
    assets.image[at + 91 - shift] = std::uint8_t(status * 3);
    for (unsigned n = 0; n < 5; ++n)
      assets.image[at + 63 - shift + n] = std::uint8_t(status + n * 53);
    Pair pair(assets);
    pair.enemy(8, 42);
    pair.replace(42);
    ++counts.synthetic_catalogs;
  }
}
void formation_cases(const eb::GameAssets &assets) {
  eb::native::BattleCombatants catalog(assets.image, assets.version);
  const bool jp = assets.version == eb::GameVersion::JP;
  const unsigned entry = jp ? 0xc2f03e : 0xc2f121;
  const unsigned group = jp ? 0x4e12 : 0x4a8c;
  const unsigned resource_ids = jp ? 0xac93 : 0xaabe;
  const unsigned widths = jp ? 0xb0c5 : 0xaef0;
  const auto swaps_before = counts.formation_swaps;
  for (unsigned battle_id : {3u, 7u, 425u})
    for (unsigned n : {3u, 5u})
      for (unsigned seed : {0u, 1u, 2u}) {
        context = "initialized formation battle=" + std::to_string(battle_id) +
                  " count=" + std::to_string(n) +
                  " seed=" + std::to_string(seed);
        Pair pair(assets);
        // Empty roster is a matched input, not a claim that BATTLE_ROUTINE's
        // graphics/combat startup has run. Every populated record below is then
        // produced by a complete original and native initializer.
        for (unsigned slot = 0; slot < 32; ++slot)
          pair.seed(slot, Bytes{});
        pair.seed_party(seed);
        for (unsigned id = 1; id <= 4; ++id)
          pair.player(id - 1, id);
        const auto scene = catalog.prepare(battle_id);
        require(!scene.resources().empty(),
                "formation has no prepared resources");
        for (unsigned i = 0; i < n; ++i) {
          const auto slot = i + 8;
          pair.enemy(
              slot,
              scene.resources()[(i + seed) % scene.resources().size()].enemy);
          // Explicit distinct battle-action/stat inputs make complete-record
          // moves observable after genuine initialization. These are not
          // action-producer claims and do not replace the checked initializer
          // result.
          pair.roster.at(slot).action = std::uint16_t(0x5100 + i);
          pair.source.put(pair.source.record(slot) + 4, 0x5100 + i);
          pair.roster.at(slot).target_hp = std::uint16_t(0x8200 + i);
          pair.source.put(pair.source.record(slot) + 19, 0x8200 + i);
          ++counts.explicit_seeds;
        }
        auto scratch = dirty(31, seed);
        scratch[12] = scratch[14] = scratch[16] = 0;
        pair.seed(
            31,
            scratch); // Source scratch must clear only on complete formation.
        pair.expected_count = n;
        pair.source.put(pair.source.p.count, n);
        pair.source.put(group, battle_id);
        for (unsigned i = 0; i < 4; ++i)
          pair.source.put(resource_ids + i * 2, i < scene.resources().size()
                                                    ? scene.resources()[i].enemy
                                                    : 0xffff);
        eb::native::story::RandomState random{std::uint16_t(seed * 517 + 3),
                                              std::uint16_t(seed * 71 + 913)};
        pair.source.put(0x24, random.primary_word);
        pair.source.put(0x26, random.secondary_word);
        std::array<std::uint64_t, 24> identities{};
        for (unsigned i = 0; i < 24; ++i)
          identities[i] = pair.roster.identity(i + 8);
        battle::Formation plan(pair.roster, battle_id, n, catalog,
                               scene.resources(), random);
        pair.source.call(entry, true);
        plan.apply();
        pair.compare();
        require(random ==
                    eb::native::story::RandomState{
                        std::uint16_t(pair.source.get(0x24)),
                        std::uint16_t(pair.source.get(0x26))},
                "formation RNG state differs");
        require(plan.random_draws() == pair.source.random_draws,
                "formation random draw count differs");
        for (unsigned row = 0; row < 2; ++row)
          require(plan.row_widths()[row] == pair.source.get(widths + row * 2),
                  "formation row widths differ");
        if (plan.outcome() == eb::native::BattleFormationOutcome::Complete) {
          require(pair.roster.at(31) == battle::Battler{} &&
                      pair.roster.identity(31) == 0,
                  "complete formation retained scratch31 state");
        } else
          ++counts.formation_rows_full;
        for (unsigned i = 0; i < n; ++i) {
          const auto &record = pair.roster.at(i + 8);
          require(record.action >= 0x5100 && record.action < 0x5100 + n,
                  "formation lost action marker");
          const unsigned previous = record.action - 0x5100;
          require(
              pair.roster.identity(i + 8) == identities[previous] &&
                  record.target_hp == 0x8200 + previous,
              "formation did not move identity and complete state together");
          counts.formation_swaps += previous != i;
          ++counts.identity_checks;
        }
        counts.formation_random += plan.random_draws();
        ++counts.formations;
      }
  require(counts.formation_swaps > swaps_before,
          "formation corpus did not exercise a whole-record swap");
}

void run(const eb::GameAssets &assets) {
  const auto before = counts;
  player_cases(assets);
  enemy_cases(assets);
  label_cases(assets);
  mirror_cases(assets);
  synthetic_cases(assets);
  formation_cases(assets);
  std::cout << (assets.version == eb::GameVersion::US ? "US" : "JP") << ": "
            << counts.players - before.players << " players, "
            << counts.enemies - before.enemies << " enemies, "
            << counts.replacements - before.replacements << " replacements, "
            << counts.mirrors - before.mirrors << " mirrors, "
            << counts.formations - before.formations
            << " initialized formations; "
            << counts.instructions - before.instructions
            << " original instructions, " << counts.snapshots - before.snapshots
            << " all32-record snapshots.\n";
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2) {
    std::cout << "SKIP: local US/JP packs required for battle roster source "
                 "reference\n";
    return 77;
  }
  try {
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    std::cout << "PASS complete roster helpers: " << counts.calls << " calls, "
              << counts.labels << " label scans, " << counts.shields
              << " shield calls, " << counts.damage_modifiers
              << " damage conversions, " << counts.resistance_modifiers
              << " resistance conversions, " << counts.backup_copies
              << " genuine backup copies; " << counts.record_bytes
              << " record bytes, " << counts.party_bytes
              << " retained party bytes, " << counts.selector_checks
              << " selector/count/neighbor guards.\n";
    std::cout << "Formation bridge: " << counts.formations << " cases, "
              << counts.formation_swaps << " moved records, "
              << counts.formation_rows_full << " rows-full prefixes, "
              << counts.formation_random << " real RNG draws.\n";
    std::cout << "Inputs: " << counts.explicit_seeds
              << " explicit record seeds, " << counts.synthetic_catalogs
              << " explicitly modified catalog cases. Scope excludes battle "
                 "startup, encounter count/action-selector producers, "
                 "dialogue, audio, frames and GPU.\n";
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
