#include "eb/game/runtime/native_execution.hpp"

#include "eb/game/enemies/battle/targeting.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include <array>
#include <initializer_list>
#include <span>

namespace eb::game::runtime {
namespace {
using enemies::battle::TargetGroup;
using enemies::battle::Targeting;
using enemies::battle::TargetingLayout;
class BattleMemory final : public enemies::battle::TargetingMemory {
public:
  explicit BattleMemory(std::span<std::uint8_t> bytes) : bytes_(bytes) {}
  // Native checkpoints below only borrow WRAM. Imported bit-table lookup,
  // hardware multiply and RNG remain explicit source continuations.
  std::uint8_t read_byte(std::uint32_t address) const override {
    return bytes_[address - 0x7e0000];
  }
  void write_byte(std::uint32_t address, std::uint8_t value) override {
    bytes_[address - 0x7e0000] = value;
  }
  std::uint16_t word(unsigned address) const {
    return bytes_[address] | (std::uint16_t(bytes_[address + 1]) << 8);
  }
  std::uint32_t wide(unsigned address) const {
    return word(address) | (std::uint32_t(word(address + 2)) << 16);
  }
  void word(unsigned address, std::uint16_t value) {
    bytes_[address] = value;
    bytes_[address + 1] = value >> 8;
  }
  void wide(unsigned address, std::uint32_t value) {
    word(address, value);
    word(address + 2, value >> 16);
  }

private:
  std::span<std::uint8_t> bytes_;
};
struct Loop {
  unsigned predicate, accept, advance, end;
  TargetGroup group;
  bool remove_npcs;
};
constexpr std::array loops{
    Loop{0xc26e1e, 0xc26e26, 0xc26e65, 0xc26e75, TargetGroup::All, false},
    Loop{0xc26c19, 0xc26c31, 0xc26c70, 0xc26c80, TargetGroup::Allies, false},
    Loop{0xc26ca0, 0xc26cb3, 0xc26cf2, 0xc26d02, TargetGroup::Enemies, false},
    Loop{0xc26d28, 0xc26d50, 0xc26de9, 0xc26dfe, TargetGroup::Row, false},
    Loop{0xc26e89, 0xc26e99, 0xc26ee6, 0xc26ef6, TargetGroup::All, true},
};
constexpr std::array mask_loads{0xc26e45u, 0xc26c50u, 0xc26cd2u,
                                0xc26d6fu, 0xc26dc9u, 0xc26ec6u,
                                0xc27007u, 0xc270c2u, 0xc27057u};
constexpr NativeTimingSlice immediate{3, 3, 0, false}, implied{2, 1, 0, false},
    direct{4, 2, 2, true}, absolute{5, 3, 2, false}, indexed{6, 3, 2, false},
    jump{3, 3, 0, false};
constexpr NativeTimingSlice branch(bool taken) {
  return {taken ? 3u : 2u, 2, 0, false};
}
// This is ABI/timing bookkeeping, not an instruction executor. The domain
// chooses eligible records and resulting masks; the adapter retains observable
// source scratch, final flags and individual audio clock slices at safe yields.
struct Checkpoint {
  std::array<NativeTimingSlice, 32> slices{};
  unsigned count = 0;
  std::uint16_t a, x, y;
  std::uint8_t flags;
  unsigned next = 0, last_access = 0;
  void timing(std::initializer_list<NativeTimingSlice> values) {
    for (auto v : values)
      slices[count++] = v;
  }
  void flag(unsigned bit, bool set) {
    flags = (flags & ~bit) | (set ? bit : 0);
  }
  void nz(std::uint16_t value) {
    flag(MainCpu65816::Negative, value & 0x8000);
    flag(MainCpu65816::Zero, value == 0);
  }
  void compare(std::uint16_t left, std::uint16_t right) {
    flag(MainCpu65816::Carry, left >= right);
    nz(left - right);
  }
  std::span<const NativeTimingSlice> timing() const {
    return {slices.data(), count};
  }
};
} // namespace

unsigned NativeGameplay::try_battle_targeting(MainCpu65816 &cpu,
                                              unsigned maximum_steps) {
  const auto start = cpu.program_counter;
  const bool japanese = cpu.game_version == GameVersion::JP;
  // C2 targeting helpers share one relocation. The distant valid-target and
  // shield helpers have separate regional locations.
  const auto shield = japanese ? 0xc23ea0u : 0xc23fecu;
  const auto valid = japanese ? 0xc4766cu : 0xc4a1ffu;
  const auto pc = start == shield  ? 0xc23fecu
                  : start == valid ? 0xc4a1ffu
                                   : start + (japanese ? 0xc1u : 0u);
  const auto regional = [=](unsigned address) {
    return address - (japanese ? 0xc1u : 0u);
  };
  if (cpu.status_register & MainCpu65816::Decimal)
    return 0;
  const bool no_scratch = pc == 0xc23fec || pc == 0xc4a1ff;
  const auto dp = cpu.direct_page;
  // Compiler locals must not alias live battlers, target flags, DMA queue or
  // one another. Noncanonical frames remain on exact source execution.
  if (!no_scratch && (dp < 0x1c00 || dp > 0x1eed))
    return 0;
  auto &hardware = *cpu.hardware_;
  BattleMemory memory(hardware.work_ram);
  Targeting targeting(memory, cpu.game_version);
  const auto &layout = TargetingLayout::for_version(cpu.game_version);
  const auto table = std::uint16_t(layout.battlers);
  Checkpoint plan{{},          0,           cpu.accumulator,
                  cpu.x_index, cpu.y_index, cpu.status_register};
  const auto canonical = [&](unsigned address) {
    return address >= table &&
           address <
               table + Targeting::battler_count * Targeting::battler_size &&
           (address - table) % Targeting::battler_size == 0;
  };
  bool publish_mask = false, write_wide = false, write_row = false,
       write_index = false;
  unsigned wide_offset = 0;
  std::uint32_t result = 0;
  const Loop *loop = nullptr;
  for (const auto &candidate : loops)
    if (pc == candidate.predicate || pc == candidate.advance)
      loop = &candidate;
  unsigned mask_start = 0;
  for (auto address : mask_loads)
    if (pc == address || pc == address + 0x0a)
      mask_start = address;

  if (mask_start) {
    if (pc == mask_start) {
      result = targeting.mask();
      plan.timing({absolute, direct, absolute, direct});
      plan.next = start + 0x0a;
      plan.last_access = 0x7e0000 + dp + 9;
    } else {
      // The source captured this mask earlier. Never reread the global
      // here: a resumed checkpoint must combine the captured operands.
      const auto captured = memory.wide(dp + 6), bits = memory.wide(dp + 0x0a);
      const bool remove = mask_start == 0xc26ec6 || mask_start == 0xc270c2 ||
                          mask_start == 0xc27057;
      result = remove ? Targeting::intersect_mask(captured, bits)
                      : Targeting::include_mask(captured, bits);
      plan.timing({direct, direct, direct, direct, direct, direct});
      plan.next = start + 0x0c;
      plan.last_access = 0x7e0000 + dp + 9;
      if (mask_start != 0xc27057) {
        plan.timing({direct, absolute, direct, absolute});
        publish_mask = true;
        plan.next += 0x0a;
        plan.last_access = layout.target_flags + 3;
      }
    }
    write_wide = true;
    wide_offset = dp + 6;
    plan.a = result >> 16;
    plan.nz(plan.a);
  } else if (pc == 0xc2706d) {
    // Convert the already captured intersection to the source boolean.
    const auto captured = memory.wide(dp + 6);
    plan.timing({immediate, direct, immediate, direct, direct, direct,
                 branch((captured >> 16) != 0)});
    if (!(captured >> 16))
      plan.timing({direct, direct});
    const bool matched = Targeting::contains_mask(captured, 0xffffffffu);
    plan.timing({branch(!matched)});
    if (matched) {
      plan.timing({immediate});
      plan.x = 1;
    }
    plan.timing({implied});
    plan.a = plan.x;
    plan.nz(plan.a);
    plan.flag(MainCpu65816::Carry, true);
    write_wide = true;
    wide_offset = dp + 0x0a;
    result = 0;
    plan.next = regional(0xc27087);
    plan.last_access = regional(0xc27086);
  } else if (pc == 0xc26e08 || pc == 0xc26c03 || pc == 0xc26c8a ||
             pc == 0xc26d11) {
    plan.timing({immediate, absolute, immediate, absolute});
    publish_mask = true;
    result = 0;
    plan.a = 0;
    plan.nz(0);
    plan.next = start + 12;
    plan.last_access = layout.target_flags + 3;
  } else if (loop && pc == loop->advance) {
    if (!canonical(plan.x) ||
        memory.word(dp + 0x0e) >= Targeting::battler_count)
      return 0;
    const auto previous_x = plan.x;
    plan.x += Targeting::battler_size;
    plan.flag(MainCpu65816::Overflow, (~(previous_x ^ Targeting::battler_size) &
                                       (previous_x ^ plan.x) & 0x8000) != 0);
    plan.a = memory.word(dp + 0x0e) + 1;
    plan.compare(plan.a, 32);
    write_index = true;
    plan.timing({implied, implied, immediate, implied, direct, implied, direct,
                 immediate});
    const bool repeat = plan.a < 32;
    if (loop->group == TargetGroup::Row) {
      plan.timing({branch(!repeat)});
      if (repeat)
        plan.timing({branch(false), jump});
      plan.last_access = regional(repeat ? 0xc26dfd : 0xc26df8);
    } else {
      plan.timing({branch(repeat)});
      plan.last_access = regional(loop->end - 1);
    }
    plan.next = regional(repeat ? loop->predicate : loop->end);
  } else if (loop) {
    if (!canonical(plan.x))
      return 0;
    const auto conscious = memory.read_byte(0x7e0000 + plan.x + 12);
    const auto side = memory.read_byte(0x7e0000 + plan.x + 14);
    const auto npc = memory.read_byte(0x7e0000 + plan.x + 15);
    const auto row = memory.word(dp + 0x10);
    const bool accept =
        loop->remove_npcs
            ? targeting.npc_candidate_at(plan.x)
            : targeting.candidate_matches_at(plan.x, loop->group, row);
    plan.next = regional(accept ? loop->accept : loop->advance);
    plan.a = conscious;
    plan.nz(plan.a);
    if (loop->group != TargetGroup::Row) {
      plan.timing({indexed, immediate, branch(!conscious)});
      plan.last_access = regional(loop->predicate + 7);
      if (conscious && (loop->remove_npcs || loop->group != TargetGroup::All)) {
        plan.a = loop->remove_npcs ? npc : side;
        plan.nz(plan.a);
        plan.timing({indexed, immediate});
        if (loop->group == TargetGroup::Enemies) {
          plan.compare(plan.a, 1);
          plan.timing({immediate, branch(!accept)});
          plan.last_access = regional(loop->accept - 1);
        } else {
          plan.timing({branch(plan.a == 0)});
          plan.last_access = regional(loop->predicate + 15);
          if (loop->group == TargetGroup::Allies && side) {
            plan.a = npc;
            plan.nz(plan.a);
            plan.timing({indexed, immediate, branch(!npc)});
            plan.last_access = regional(loop->accept - 1);
          }
        }
      }
    } else {
      plan.timing({indexed, immediate, branch(conscious != 0)});
      if (!conscious) {
        plan.timing({jump});
        plan.last_access = regional(0xc26d32);
      } else {
        plan.y = row;
        plan.a = row;
        plan.nz(row);
        plan.timing({direct, implied, branch(row == 0)});
        if (!row) {
          plan.a = side;
          plan.nz(side);
          plan.timing({indexed, immediate, branch(side == 0)});
          plan.last_access = regional(0xc26d4c);
          if (side) {
            plan.timing({jump});
            plan.last_access = regional(0xc26d4f);
          }
        } else {
          plan.compare(row, 1);
          plan.timing({immediate, branch(row == 1)});
          if (row != 1) {
            plan.compare(row, 2);
            plan.timing({immediate, branch(row == 2)});
          }
          if (row != 1 && row != 2) {
            plan.timing({jump});
            plan.last_access = regional(0xc26d44);
          } else {
            plan.a = side;
            plan.compare(side, 1);
            plan.timing({indexed, immediate, immediate, branch(side != 1)});
            plan.last_access = regional(0xc26d9b);
            if (side == 1) {
              write_row = true;
              plan.a = memory.read_byte(0x7e0000 + plan.x + 16);
              plan.compare(plan.a, row - 1);
              plan.timing({implied, implied, direct, indexed, immediate, direct,
                           branch(!accept)});
              plan.last_access = regional(0xc26da9);
              if (accept)
                plan.next = regional(0xc26daa);
            }
          }
        }
      }
    }
  } else if (pc == 0xc4a1ff) {
    if (plan.x >= Targeting::battler_count * Targeting::battler_size ||
        plan.x % Targeting::battler_size)
      return 0;
    const auto record = table + plan.x;
    const auto conscious = memory.read_byte(0x7e0000 + record + 12);
    const auto npc = memory.read_byte(0x7e0000 + record + 15);
    const auto status = memory.read_byte(0x7e0000 + record + 29);
    const bool valid_target = targeting.valid_battler(record);
    plan.timing({indexed, immediate, branch(!conscious)});
    if (conscious) {
      plan.timing({indexed, immediate, branch(npc != 0)});
      if (!npc) {
        plan.compare(status, 1);
        plan.timing({indexed, immediate, immediate, branch(status == 1)});
        if (status != 1) {
          plan.compare(status, 2);
          plan.timing({immediate, branch(status == 2)});
        }
      }
    }
    plan.a = valid_target;
    plan.nz(plan.a);
    plan.timing({immediate});
    if (valid_target)
      plan.timing({branch(true)});
    plan.next = valid + 0x28;
    plan.last_access = valid + (valid_target ? 0x24 : 0x27);
  } else if (pc == 0xc23fec) {
    const auto action = plan.a;
    constexpr std::array<unsigned, 4> shield_actions{42, 43, 46, 47};
    for (unsigned i = 0; i < shield_actions.size(); ++i) {
      const bool equal = action == shield_actions[i];
      plan.compare(action, shield_actions[i]);
      plan.timing({immediate, branch(i == 3 ? !equal : equal)});
      if (equal)
        break;
    }
    plan.a = Targeting::shield_targets_npcs(action);
    plan.nz(plan.a);
    plan.timing({immediate});
    if (plan.a)
      plan.timing({branch(true)});
    plan.next = shield + 0x1c;
    plan.last_access = shield + (plan.a ? 0x18 : 0x1b);
  } else
    return 0;

  if (!admit(cpu, plan.timing(), maximum_steps))
    return 0;
  if (write_wide)
    memory.wide(wide_offset, result);
  if (publish_mask)
    targeting.set_mask(result);
  if (write_row)
    memory.word(dp + 2, plan.y - 1);
  if (write_index)
    memory.word(dp + 0x0e, plan.a);
  cpu.accumulator = plan.a;
  cpu.x_index = plan.x;
  cpu.y_index = plan.y;
  cpu.status_register = plan.flags;
  cpu.program_counter = plan.next;
  hardware.read_byte(plan.last_access);
  retire(cpu, plan.timing(), start);
  return plan.count;
}
} // namespace eb::game::runtime
