#include "eb/game/entities/npc_collision.hpp"
#include "eb/game/runtime/native_execution.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include <array>
#include <span>

namespace eb::game::runtime {
namespace {
class CollisionMemory final : public entities::NpcCollisionMemory {
public:
  explicit CollisionMemory(std::span<std::uint8_t> bytes) : bytes_(bytes) {}
  std::uint16_t read_word(std::uint32_t address) const override {
    const auto offset = address - 0x7e0000;
    return bytes_[offset] | (std::uint16_t(bytes_[offset + 1]) << 8);
  }
  void publish_collision(std::uint32_t address, std::uint16_t value) override {
    const auto offset = address - 0x7e0000;
    bytes_[offset] = value;
    bytes_[offset + 1] = value >> 8;
  }

private:
  std::span<std::uint8_t> bytes_;
};
struct TimingPlan {
  std::array<NativeTimingSlice, 32> slices{};
  unsigned count{};
  void append(std::span<const NativeTimingSlice> values) {
    for (auto value : values)
      slices[count++] = value;
  }
  void jump() { slices[count++] = {3, 3, 0, false}; }
  void equality_branch(bool taken) {
    slices[count++] = {taken ? 3u : 2u, 2, 0, false};
  }
  void take_branch() { ++slices[count - 1].cycles; }
  std::span<const NativeTimingSlice> view() const {
    return {slices.data(), count};
  }
};
struct PendingWrites {
  struct Word {
    unsigned offset;
    std::uint16_t value;
  };
  std::array<Word, 8> words{};
  unsigned count{};
  void word(unsigned offset, std::uint16_t value) {
    words[count++] = {offset, value};
  }
  void commit(CollisionMemory &memory) const {
    for (unsigned i = 0; i < count; ++i)
      memory.publish_collision(0x7e0000 + words[i].offset, words[i].value);
  }
};
// Only timing metadata: each row retains one original source instruction's
// APU clock slice. The algorithm below performs domain decisions directly.
// Branch rows initially use the untaken cost; selected paths add one cycle.
constexpr std::array<NativeTimingSlice, 9> query_input_time{{
    {4, 2, 2, true},  // $6000
    {4, 2, 2, true},  // $6002
    {3, 3, 0, false}, // $6004
    {4, 2, 2, true},  // $6007
    {2, 1, 0, false}, // $6009
    {2, 1, 0, false}, // $600A
    {2, 1, 0, false}, // $600B
    {6, 3, 2, false}, // $600C
    {2, 2, 0, false}, // $600F
}};

constexpr std::array<NativeTimingSlice, 3> query_movement_time{{
    {5, 3, 2, false}, // $6014
    {3, 3, 0, false}, // $6017
    {2, 2, 0, false}, // $601A
}};

constexpr std::array<NativeTimingSlice, 3> query_style_time{{
    {5, 3, 2, false}, // $601F
    {3, 3, 0, false}, // $6022
    {2, 2, 0, false}, // $6025
}};

constexpr std::array<NativeTimingSlice, 2> query_demo_time{{
    {5, 3, 2, false}, // $602A
    {2, 2, 0, false}, // $602D
}};

constexpr std::array<NativeTimingSlice, 3> moving_direction_time{{
    {6, 3, 2, false}, // $6032
    {3, 3, 0, false}, // $6035
    {2, 2, 0, false}, // $6038
}};

constexpr std::array<NativeTimingSlice, 2> moving_left_time{{
    {3, 3, 0, false}, // $603A
    {2, 2, 0, false}, // $603D
}};

constexpr std::array<NativeTimingSlice, 8> moving_lateral_time{{
    {2, 1, 0, false}, // $603F
    {2, 1, 0, false}, // $6040
    {2, 1, 0, false}, // $6041
    {6, 3, 2, false}, // $6042
    {4, 2, 2, true},  // $6045
    {6, 3, 2, false}, // $6047
    {4, 2, 2, true},  // $604A
    {3, 2, 0, false}, // $604C
}};

constexpr std::array<NativeTimingSlice, 4> moving_vertical_time{{
    {6, 3, 2, false}, // $604E
    {4, 2, 2, true},  // $6051
    {6, 3, 2, false}, // $6053
    {4, 2, 2, true},  // $6056
}};

constexpr std::array<NativeTimingSlice, 14> query_geometry_time{{
    {4, 2, 2, true},  // $605E
    {2, 1, 0, false}, // $6060
    {4, 2, 2, true},  // $6061
    {4, 2, 2, true},  // $6063
    {4, 2, 2, true},  // $6065
    {2, 1, 0, false}, // $6067
    {4, 2, 2, true},  // $6068
    {4, 2, 2, true},  // $606A
    {2, 1, 0, false}, // $606C
    {4, 2, 2, true},  // $606D
    {4, 2, 2, true},  // $606F
    {3, 3, 0, false}, // $6071
    {4, 2, 2, true},  // $6074
    {4, 2, 2, true},  // $6076
}};

constexpr std::array<NativeTimingSlice, 6> candidate_script_time{{
    {4, 2, 2, true},  // $607B
    {2, 1, 0, false}, // $607D
    {2, 1, 0, false}, // $607E
    {6, 3, 2, false}, // $607F
    {3, 3, 0, false}, // $6082
    {2, 2, 0, false}, // $6085
}};

constexpr std::array<NativeTimingSlice, 3> candidate_marker_time{{
    {6, 3, 2, false}, // $608A
    {3, 3, 0, false}, // $608D
    {2, 2, 0, false}, // $6090
}};

constexpr std::array<NativeTimingSlice, 2> candidate_intangibility_time{{
    {5, 3, 2, false}, // $6095
    {2, 2, 0, false}, // $6098
}};

constexpr std::array<NativeTimingSlice, 4> candidate_identity_time{{
    {6, 3, 2, false}, // $609A
    {2, 1, 0, false}, // $609D
    {3, 3, 0, false}, // $609E
    {2, 2, 0, false}, // $60A1
}};

constexpr std::array<NativeTimingSlice, 5> candidate_enabled_time{{
    {4, 2, 2, true},  // $60A6
    {2, 1, 0, false}, // $60A8
    {2, 1, 0, false}, // $60A9
    {6, 3, 2, false}, // $60AA
    {2, 2, 0, false}, // $60AD
}};

constexpr std::array<NativeTimingSlice, 3> candidate_direction_time{{
    {6, 3, 2, false}, // $60AF
    {3, 3, 0, false}, // $60B2
    {2, 2, 0, false}, // $60B5
}};

constexpr std::array<NativeTimingSlice, 2> candidate_left_time{{
    {3, 3, 0, false}, // $60B7
    {2, 2, 0, false}, // $60BA
}};

constexpr std::array<NativeTimingSlice, 7> candidate_lateral_time{{
    {4, 2, 2, true},  // $60BC
    {2, 1, 0, false}, // $60BE
    {2, 1, 0, false}, // $60BF
    {6, 3, 2, false}, // $60C0
    {6, 3, 2, false}, // $60C3
    {4, 2, 2, true},  // $60C6
    {3, 2, 0, false}, // $60C8
}};

constexpr std::array<NativeTimingSlice, 3> candidate_vertical_time{{
    {6, 3, 2, false}, // $60CA
    {6, 3, 2, false}, // $60CD
    {4, 2, 2, true},  // $60D0
}};

constexpr std::array<NativeTimingSlice, 13> vertical_start_time{{
    {4, 2, 2, true},  // $60D2
    {2, 1, 0, false}, // $60D4
    {2, 1, 0, false}, // $60D5
    {4, 2, 2, true},  // $60D6
    {4, 2, 2, true},  // $60D8
    {6, 3, 2, false}, // $60DA
    {2, 1, 0, false}, // $60DD
    {4, 2, 2, true},  // $60DE
    {4, 2, 2, true},  // $60E0
    {2, 1, 0, false}, // $60E2
    {4, 2, 2, true},  // $60E3
    {4, 2, 2, true},  // $60E5
    {2, 2, 0, false}, // $60E7
}};

constexpr std::array<NativeTimingSlice, 5> vertical_end_time{{
    {4, 2, 2, true},  // $60E9
    {2, 1, 0, false}, // $60EB
    {4, 2, 2, true},  // $60EC
    {4, 2, 2, true},  // $60EE
    {2, 2, 0, false}, // $60F0
}};

constexpr std::array<NativeTimingSlice, 13> horizontal_start_time{{
    {4, 2, 2, true},  // $60F4
    {6, 3, 2, false}, // $60F6
    {2, 1, 0, false}, // $60F9
    {4, 2, 2, true},  // $60FA
    {4, 2, 2, true},  // $60FC
    {2, 1, 0, false}, // $60FE
    {2, 1, 0, false}, // $60FF
    {2, 1, 0, false}, // $6100
    {4, 2, 2, true},  // $6101
    {2, 1, 0, false}, // $6103
    {4, 2, 2, true},  // $6104
    {4, 2, 2, true},  // $6106
    {2, 2, 0, false}, // $6108
}};

constexpr std::array<NativeTimingSlice, 6> horizontal_end_time{{
    {4, 2, 2, true},  // $610A
    {4, 2, 2, true},  // $610C
    {2, 1, 0, false}, // $610E
    {4, 2, 2, true},  // $610F
    {4, 2, 2, true},  // $6111
    {2, 2, 0, false}, // $6113
}};

constexpr std::array<NativeTimingSlice, 4> record_hit_time{{
    {4, 2, 2, true},  // $6117
    {4, 2, 2, true},  // $6119
    {4, 2, 2, true},  // $611B
    {3, 2, 0, false}, // $611D
}};

constexpr std::array<NativeTimingSlice, 5> next_candidate_time{{
    {4, 2, 2, true}, // $611F
    {4, 2, 2, true}, // $6121
    {7, 2, 4, true}, // $6123
    {4, 2, 2, true}, // $6125
    {4, 2, 2, true}, // $6127
}};

constexpr std::array<NativeTimingSlice, 3> loop_condition_time{{
    {4, 2, 2, true},  // $6129
    {3, 3, 0, false}, // $612B
    {2, 2, 0, false}, // $612E
}};

constexpr std::array<NativeTimingSlice, 3> publish_result_time{{
    {4, 2, 2, true},  // $6133
    {5, 3, 2, false}, // $6135
    {4, 2, 2, true},  // $6138
}};

} // namespace

unsigned NativeGameplay::try_npc_collision(MainCpu65816 &cpu,
                                           unsigned maximum_steps) {
  const auto region_offset = cpu.game_version == GameVersion::JP ? 0x22eu : 0u;
  const auto site = cpu.program_counter - region_offset;
  switch (site) {
  case 0xc06000:
  case 0xc06014:
  case 0xc06032:
  case 0xc0605e:
  case 0xc0607b:
  case 0xc060a6:
  case 0xc060d2:
  case 0xc060e9:
  case 0xc060f4:
  case 0xc0610a:
  case 0xc06117:
  case 0xc0611f:
  case 0xc06129:
  case 0xc06133:
    break;
  default:
    return 0;
  }
  // The source reserves thirty bytes in its compiler C-stack. Valid actor
  // tables and the final collision publication are outside this arena.
  const unsigned dp = cpu.direct_page;
  if (dp < 0x1c00 || dp > 0x1ee2)
    return 0;
  auto &hardware = *cpu.hardware_;
  CollisionMemory memory(hardware.work_ram);
  const auto &layout = entities::npc_collision_layout(cpu.game_version);
  const auto local = [&](unsigned offset) {
    return memory.read_word(0x7e0000 + dp + offset);
  };
  const auto entity = [&](std::uint32_t table, unsigned index) {
    return memory.read_word(table + index * 2);
  };
  const auto code = [&](unsigned low_word) {
    return 0xc00000u + low_word + region_offset;
  };
  const auto candidate = local(0x12);
  if ((site == 0xc06000 && cpu.y_index >= 30) ||
      (site == 0xc06032 &&
       (cpu.y_index >= 30 || cpu.x_index != cpu.y_index * 2)) ||
      ((site == 0xc0607b || site == 0xc060a6 || site == 0xc060d2) &&
       (candidate >= 23 || local(2) != candidate)) ||
      (site == 0xc060f4 && (candidate >= 23 || cpu.x_index != candidate * 2)) ||
      ((site == 0xc06117 || site == 0xc0611f) && candidate >= 23) ||
      (site == 0xc06129 && (candidate > 23 || local(2) != candidate)))
    return 0;
  // Preserve the established unused-candidate optimization even in decimal
  // mode: it has no ADC/SBC. All expanded arithmetic paths require binary ABI.
  const bool unused =
      site == 0xc0607b &&
      !entities::candidate_has_script(memory, cpu.game_version, candidate);
  if ((cpu.status_register & MainCpu65816::Decimal) && !unused)
    return 0;

  // Compute a bounded phase before committing anything. This is ephemeral
  // planning only; all state needed after a yield stays in source WRAM and
  // registers, so subsequent phases observe intervening interrupts/changes.
  std::uint16_t a = cpu.accumulator, x = cpu.x_index, y = cpu.y_index;
  std::uint8_t flags = cpu.status_register;
  const auto flag = [&](unsigned bit, bool value) {
    flags = std::uint8_t(value ? flags | bit : flags & ~bit);
  };
  const auto nz = [&](std::uint16_t value) {
    flag(MainCpu65816::Negative, value & 0x8000);
    flag(MainCpu65816::Zero, value == 0);
  };
  const auto compare = [&](std::uint16_t left, std::uint16_t right) {
    flag(MainCpu65816::Carry, left >= right);
    nz(std::uint16_t(left - right));
  };
  const auto subtract = [&](std::uint16_t left, std::uint16_t right) {
    const auto result = std::uint16_t(left - right);
    flag(MainCpu65816::Carry, left >= right);
    flag(MainCpu65816::Overflow, (left ^ right) & (left ^ result) & 0x8000);
    nz(result);
    return result;
  };
  const auto add = [&](std::uint16_t left, std::uint16_t right) {
    const auto sum = unsigned(left) + right;
    const auto result = std::uint16_t(sum);
    flag(MainCpu65816::Carry, sum > 0xffff);
    flag(MainCpu65816::Overflow, ~(left ^ right) & (left ^ result) & 0x8000);
    nz(result);
    return result;
  };
  const auto twice = [&](std::uint16_t value) {
    flag(MainCpu65816::Carry, value & 0x8000);
    const auto result = std::uint16_t(value * 2);
    nz(result);
    return result;
  };
  TimingPlan timing;
  PendingWrites writes;
  unsigned continuation = 0, last_access = 0;
  const auto finish_loop = [&](std::uint16_t next) {
    timing.append(loop_condition_time);
    a = next;
    compare(a, 23);
    if (next == 23) {
      timing.take_branch();
      continuation = 0x6133;
      last_access = code(0x612f);
    } else {
      timing.jump();
      continuation = 0x607b;
      last_access = code(0x6132);
    }
  };
  const auto next_candidate = [&] {
    timing.append(next_candidate_time);
    writes.word(dp + 2, candidate);
    writes.word(dp + 2, std::uint16_t(candidate + 1));
    writes.word(dp + 0x12, std::uint16_t(candidate + 1));
    finish_loop(std::uint16_t(candidate + 1));
  };

  switch (site) {
  case 0xc06000: {
    timing.append(query_input_time);
    writes.word(dp + 0x1c, x);
    writes.word(dp + 2, a);
    writes.word(dp + 0x1a, 0xffff);
    x = twice(y);
    a = entity(layout.hitbox_enabled, y);
    nz(a);
    if (a) {
      timing.take_branch();
      continuation = 0x6014;
      last_access = code(0x6010);
    } else {
      timing.jump();
      continuation = 0x6133;
      last_access = code(0x6013);
    }
    break;
  }
  case 0xc06014: {
    timing.append(query_movement_time);
    a = memory.read_word(layout.movement_flags) & 2;
    nz(a);
    if (a) {
      timing.jump();
      continuation = 0x6133;
      last_access = code(0x601e);
      break;
    }
    timing.take_branch();
    timing.append(query_style_time);
    a = memory.read_word(layout.walking_style);
    compare(a, 12);
    if (a == 12) {
      timing.jump();
      continuation = 0x6133;
      last_access = code(0x6029);
      break;
    }
    timing.take_branch();
    timing.append(query_demo_time);
    a = memory.read_word(layout.demo_frames);
    nz(a);
    if (a) {
      timing.jump();
      continuation = 0x6133;
      last_access = code(0x6031);
    } else {
      timing.take_branch();
      continuation = 0x6032;
      last_access = code(0x602e);
    }
    break;
  }
  case 0xc06032: {
    const auto box =
        entities::read_npc_collision_hitbox(memory, cpu.game_version, y);
    timing.append(moving_direction_time);
    compare(box.direction, 2);
    if (box.direction == 2)
      timing.take_branch();
    else {
      timing.append(moving_left_time);
      compare(box.direction, 6);
    }
    if (box.direction == 2 || box.direction == 6) {
      timing.append(moving_lateral_time);
      x = twice(y);
      last_access = code(0x604d);
    } else {
      timing.take_branch();
      timing.append(moving_vertical_time);
      last_access = 0x7e0000 + dp + 5;
    }
    writes.word(dp + 0x18, box.half_width);
    writes.word(dp + 4, box.height);
    a = box.height;
    nz(a);
    continuation = 0x6058;
    break;
  }
  case 0xc0605e: {
    timing.append(query_geometry_time);
    writes.word(dp + 2, y);
    writes.word(dp + 0x16, subtract(a, y));
    writes.word(dp + 0x14, twice(local(0x18)));
    writes.word(dp + 0x1c, subtract(local(0x1c), local(4)));
    a = 0;
    nz(a);
    writes.word(dp + 2, a);
    writes.word(dp + 0x12, a);
    continuation = 0x6078;
    last_access = 0x7e0000 + dp + 0x13;
    break;
  }
  case 0xc0607b: {
    const auto observation =
        entities::inspect_npc_candidate(memory, cpu.game_version, candidate);
    timing.append(candidate_script_time);
    x = twice(candidate);
    a = observation.script;
    compare(a, 0xffff);
    if (observation.eligibility == entities::NpcCandidateEligibility::Unused) {
      timing.jump();
      next_candidate();
      break;
    }
    timing.take_branch();
    timing.append(candidate_marker_time);
    a = observation.collision_marker;
    compare(a, 0x8000);
    if (observation.eligibility ==
        entities::NpcCandidateEligibility::CollisionDisabled) {
      timing.jump();
      continuation = 0x611f;
      last_access = code(0x6094);
      break;
    }
    timing.take_branch();
    timing.append(candidate_intangibility_time);
    a = observation.intangibility;
    nz(a);
    if (!a) {
      timing.take_branch();
      continuation = 0x60a6;
      last_access = code(0x6099);
      break;
    }
    timing.append(candidate_identity_time);
    a = std::uint16_t(observation.npc_id + 1);
    compare(a, 0x8001);
    if (observation.eligibility ==
        entities::NpcCandidateEligibility::Intangible) {
      timing.jump();
      continuation = 0x611f;
      last_access = code(0x60a5);
    } else {
      timing.take_branch();
      continuation = 0x60a6;
      last_access = code(0x60a2);
    }
    break;
  }
  case 0xc060a6: {
    timing.append(candidate_enabled_time);
    x = twice(candidate);
    a = entity(layout.hitbox_enabled, candidate);
    nz(a);
    if (!a) {
      timing.take_branch();
      continuation = 0x611f;
      last_access = code(0x60ae);
      break;
    }
    const auto box = entities::read_npc_collision_hitbox(
        memory, cpu.game_version, candidate);
    timing.append(candidate_direction_time);
    compare(box.direction, 2);
    if (box.direction == 2)
      timing.take_branch();
    else {
      timing.append(candidate_left_time);
      compare(box.direction, 6);
    }
    if (box.direction == 2 || box.direction == 6) {
      timing.append(candidate_lateral_time);
      x = twice(candidate);
      last_access = code(0x60c9);
    } else {
      timing.take_branch();
      timing.append(candidate_vertical_time);
      last_access = 0x7e0000 + dp + 0x11;
    }
    y = box.half_width;
    a = box.height;
    nz(a);
    writes.word(dp + 0x10, a);
    continuation = 0x60d2;
    break;
  }
  case 0xc060d2: {
    timing.append(vertical_start_time);
    x = twice(candidate);
    const auto height = local(0x10), moving_height = local(4),
               moving_top = local(0x1c);
    writes.word(dp + 2, height);
    const auto top = subtract(entity(layout.world_y, candidate), height);
    writes.word(dp + 0x0e, top);
    a = subtract(top, moving_height);
    compare(a, moving_top);
    const bool separated =
        entities::NpcCollisionAxis{top, height}.separated_at_start(
            moving_top, moving_height);
    if (separated)
      timing.take_branch();
    continuation = separated ? 0x611f : 0x60e9;
    last_access = code(0x60e8);
    break;
  }
  case 0xc060e9: {
    timing.append(vertical_end_time);
    const auto top = local(0x0e), height = local(0x10),
               moving_top = local(0x1c);
    a = add(height, top);
    compare(a, moving_top);
    if (a < moving_top) {
      timing.take_branch();
      last_access = code(0x60f1);
    } else {
      timing.equality_branch(a == moving_top);
      last_access = code(0x60f3);
    }
    continuation =
        entities::NpcCollisionAxis{top, height}.separated_at_end(moving_top)
            ? 0x611f
            : 0x60f4;
    break;
  }
  case 0xc060f4: {
    timing.append(horizontal_start_time);
    writes.word(dp + 2, y);
    const auto left = subtract(entity(layout.world_x, candidate), y);
    writes.word(dp + 0x0e, left);
    x = twice(y);
    const auto moving_width = local(0x14), moving_left = local(0x16);
    a = subtract(left, moving_width);
    compare(a, moving_left);
    const bool separated =
        entities::NpcCollisionAxis{left, x}.separated_at_start(moving_left,
                                                               moving_width);
    if (separated)
      timing.take_branch();
    continuation = separated ? 0x611f : 0x610a;
    last_access = code(0x6109);
    break;
  }
  case 0xc0610a: {
    timing.append(horizontal_end_time);
    writes.word(dp + 2, x);
    const auto left = local(0x0e), moving_left = local(0x16);
    a = add(left, x);
    compare(a, moving_left);
    if (a < moving_left) {
      timing.take_branch();
      last_access = code(0x6114);
    } else {
      timing.equality_branch(a == moving_left);
      last_access = code(0x6116);
    }
    continuation =
        entities::NpcCollisionAxis{left, x}.separated_at_end(moving_left)
            ? 0x611f
            : 0x6117;
    break;
  }
  case 0xc06117:
    timing.append(record_hit_time);
    a = candidate;
    nz(a);
    writes.word(dp + 2, a);
    writes.word(dp + 0x1a, a);
    continuation = 0x6133;
    last_access = code(0x611e);
    break;
  case 0xc0611f:
    next_candidate();
    break;
  case 0xc06129:
    finish_loop(local(2));
    break;
  case 0xc06133:
    timing.append(publish_result_time);
    a = local(0x1a);
    nz(a);
    writes.word(layout.collided_object + 46 - 0x7e0000, a);
    continuation = 0x613a;
    last_access = 0x7e0000 + dp + 0x1b;
    break;
  }
  if (!admit(cpu, timing.view(), maximum_steps))
    return 0;
  writes.commit(memory);
  cpu.accumulator = a;
  cpu.x_index = x;
  cpu.y_index = y;
  cpu.status_register = flags;
  const auto start = cpu.program_counter;
  cpu.program_counter = code(continuation);
  hardware.read_byte(last_access);
  retire(cpu, timing.view(), start);
  return timing.count;
}
} // namespace eb::game::runtime
