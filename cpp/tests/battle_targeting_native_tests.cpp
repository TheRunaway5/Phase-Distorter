// Independent native BattleTargeting checkpoints against the frozen source.
// The fixture table below was captured from the retained Legacy executor before
// the native adapter existed (work/combat-native-audit). Each entry fixes
// source boundaries, instruction/cycle counts, DP penalties, and ROM/WRAM byte
// counts. No production targeting algorithm, layout, admission table or timing
// array is used to construct expectations. Synthetic powers-of-two data
// exercises whole original helpers without importing retail content or using
// observer hooks.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include "runtime_state_audit.hpp"
#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <set>
#include <stdexcept>
#include <string>
#include <tuple>
#include <vector>

namespace {
void require(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(message);
}
unsigned comparisons = 0, admissions = 0, declines = 0, whole_calls = 0;
std::uint64_t source_steps = 0, audio_callbacks = 0;
struct Cost {
  unsigned steps, cycles, dp, fetch, wram;
};
struct Fixture {
  bool japanese;
  const char *routine;
  const char *kind;
  unsigned start, end;
  unsigned conscious, side, npc, row, record_row, status, slot;
  std::uint32_t mask, bits;
  Cost cost;
};
// clang-format off
constexpr Fixture fixtures[]{
    {false,"target_all","predicate",0xc26e1e,0xc26e65,0,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,12,0,8,2}},
    {false,"target_all","predicate",0xc26e1e,0xc26e26,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {false,"target_all","predicate",0xc26e1e,0xc26e26,1,0,7,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {false,"target_all","predicate",0xc26e1e,0xc26e26,1,1,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {false,"target_all","predicate",0xc26e1e,0xc26e26,1,1,7,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {false,"target_all","predicate",0xc26e1e,0xc26e26,1,2,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {false,"target_all","predicate",0xc26e1e,0xc26e26,1,2,7,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {false,"target_all","predicate",0xc26e1e,0xc26e26,255,255,255,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {false,"target_all","clear",0xc26e08,0xc26e14,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{4,16,0,12,4}},
    {false,"target_all","advance",0xc26e65,0xc26e1e,1,0,0,0,0,0,0,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {false,"target_all","advance",0xc26e65,0xc26e1e,1,0,0,0,0,0,30,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {false,"target_all","advance",0xc26e65,0xc26e75,1,0,0,0,0,0,31,0xa5a50001u,0x80000000u,{9,24,2,16,4}},
    {false,"target_all","capture",0xc26e45,0xc26e4f,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {false,"target_all","combine",0xc26e4f,0xc26e65,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {false,"target_all","capture",0xc26e45,0xc26e4f,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {false,"target_all","combine",0xc26e4f,0xc26e65,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {false,"target_all","capture",0xc26e45,0xc26e4f,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {false,"target_all","combine",0xc26e4f,0xc26e65,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {false,"target_all","capture",0xc26e45,0xc26e4f,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {false,"target_all","combine",0xc26e4f,0xc26e65,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {false,"target_all","capture",0xc26e45,0xc26e4f,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {false,"target_all","combine",0xc26e4f,0xc26e65,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {false,"target_all","capture",0xc26e45,0xc26e4f,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {false,"target_all","combine",0xc26e4f,0xc26e65,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {false,"target_all","capture",0xc26e45,0xc26e4f,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {false,"target_all","combine",0xc26e4f,0xc26e65,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {false,"target_allies","predicate",0xc26c19,0xc26c70,0,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,12,0,8,2}},
    {false,"target_allies","predicate",0xc26c19,0xc26c31,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{6,23,0,16,4}},
    {false,"target_allies","predicate",0xc26c19,0xc26c31,1,0,7,0,0,0,7,0xa5a50001u,0x80000000u,{6,23,0,16,4}},
    {false,"target_allies","predicate",0xc26c19,0xc26c70,1,1,0,0,0,0,7,0xa5a50001u,0x80000000u,{9,34,0,24,6}},
    {false,"target_allies","predicate",0xc26c19,0xc26c31,1,1,7,0,0,0,7,0xa5a50001u,0x80000000u,{9,33,0,24,6}},
    {false,"target_allies","predicate",0xc26c19,0xc26c70,1,2,0,0,0,0,7,0xa5a50001u,0x80000000u,{9,34,0,24,6}},
    {false,"target_allies","predicate",0xc26c19,0xc26c31,1,2,7,0,0,0,7,0xa5a50001u,0x80000000u,{9,33,0,24,6}},
    {false,"target_allies","predicate",0xc26c19,0xc26c31,255,255,255,0,0,0,7,0xa5a50001u,0x80000000u,{9,33,0,24,6}},
    {false,"target_allies","clear",0xc26c03,0xc26c0f,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{4,16,0,12,4}},
    {false,"target_allies","advance",0xc26c70,0xc26c19,1,0,0,0,0,0,0,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {false,"target_allies","advance",0xc26c70,0xc26c19,1,0,0,0,0,0,30,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {false,"target_allies","advance",0xc26c70,0xc26c80,1,0,0,0,0,0,31,0xa5a50001u,0x80000000u,{9,24,2,16,4}},
    {false,"target_allies","capture",0xc26c50,0xc26c5a,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {false,"target_allies","combine",0xc26c5a,0xc26c70,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {false,"target_allies","capture",0xc26c50,0xc26c5a,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {false,"target_allies","combine",0xc26c5a,0xc26c70,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {false,"target_allies","capture",0xc26c50,0xc26c5a,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {false,"target_allies","combine",0xc26c5a,0xc26c70,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {false,"target_allies","capture",0xc26c50,0xc26c5a,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {false,"target_allies","combine",0xc26c5a,0xc26c70,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {false,"target_allies","capture",0xc26c50,0xc26c5a,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {false,"target_allies","combine",0xc26c5a,0xc26c70,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {false,"target_allies","capture",0xc26c50,0xc26c5a,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {false,"target_allies","combine",0xc26c5a,0xc26c70,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {false,"target_allies","capture",0xc26c50,0xc26c5a,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {false,"target_allies","combine",0xc26c5a,0xc26c70,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {false,"target_all_enemies","predicate",0xc26ca0,0xc26cf2,0,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,12,0,8,2}},
    {false,"target_all_enemies","predicate",0xc26ca0,0xc26cf2,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{7,26,0,19,4}},
    {false,"target_all_enemies","predicate",0xc26ca0,0xc26cf2,1,0,7,0,0,0,7,0xa5a50001u,0x80000000u,{7,26,0,19,4}},
    {false,"target_all_enemies","predicate",0xc26ca0,0xc26cb3,1,1,0,0,0,0,7,0xa5a50001u,0x80000000u,{7,25,0,19,4}},
    {false,"target_all_enemies","predicate",0xc26ca0,0xc26cb3,1,1,7,0,0,0,7,0xa5a50001u,0x80000000u,{7,25,0,19,4}},
    {false,"target_all_enemies","predicate",0xc26ca0,0xc26cf2,1,2,0,0,0,0,7,0xa5a50001u,0x80000000u,{7,26,0,19,4}},
    {false,"target_all_enemies","predicate",0xc26ca0,0xc26cf2,1,2,7,0,0,0,7,0xa5a50001u,0x80000000u,{7,26,0,19,4}},
    {false,"target_all_enemies","predicate",0xc26ca0,0xc26cf2,255,255,255,0,0,0,7,0xa5a50001u,0x80000000u,{7,26,0,19,4}},
    {false,"target_all_enemies","clear",0xc26c8a,0xc26c96,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{4,16,0,12,4}},
    {false,"target_all_enemies","advance",0xc26cf2,0xc26ca0,1,0,0,0,0,0,0,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {false,"target_all_enemies","advance",0xc26cf2,0xc26ca0,1,0,0,0,0,0,30,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {false,"target_all_enemies","advance",0xc26cf2,0xc26d02,1,0,0,0,0,0,31,0xa5a50001u,0x80000000u,{9,24,2,16,4}},
    {false,"target_all_enemies","capture",0xc26cd2,0xc26cdc,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {false,"target_all_enemies","combine",0xc26cdc,0xc26cf2,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {false,"target_all_enemies","capture",0xc26cd2,0xc26cdc,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {false,"target_all_enemies","combine",0xc26cdc,0xc26cf2,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {false,"target_all_enemies","capture",0xc26cd2,0xc26cdc,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {false,"target_all_enemies","combine",0xc26cdc,0xc26cf2,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {false,"target_all_enemies","capture",0xc26cd2,0xc26cdc,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {false,"target_all_enemies","combine",0xc26cdc,0xc26cf2,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {false,"target_all_enemies","capture",0xc26cd2,0xc26cdc,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {false,"target_all_enemies","combine",0xc26cdc,0xc26cf2,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {false,"target_all_enemies","capture",0xc26cd2,0xc26cdc,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {false,"target_all_enemies","combine",0xc26cdc,0xc26cf2,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {false,"target_all_enemies","capture",0xc26cd2,0xc26cdc,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {false,"target_all_enemies","combine",0xc26cdc,0xc26cf2,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,0,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,0,0,0,1,0,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,0,0,0,1,1,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,0,0,0,2,0,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,0,0,0,2,1,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,0,0,0,3,0,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,0,0,0,65535,1,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {false,"target_row","predicate",0xc26d28,0xc26d50,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{9,33,1,21,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,0,0,1,0,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,0,0,1,1,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,0,0,2,0,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,0,0,2,1,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,0,0,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,0,0,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","predicate",0xc26d28,0xc26d50,1,0,7,0,0,0,7,0xa5a50001u,0x80000000u,{9,33,1,21,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,0,7,1,0,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,0,7,1,1,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,0,7,2,0,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,0,7,2,1,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,0,7,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,0,7,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,1,0,0,0,0,7,0xa5a50001u,0x80000000u,{10,35,1,24,6}},
    {false,"target_row","predicate",0xc26d28,0xc26daa,1,1,0,1,0,0,7,0xa5a50001u,0x80000000u,{19,63,3,43,12}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,1,0,1,1,0,7,0xa5a50001u,0x80000000u,{19,64,3,43,12}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,1,0,2,0,0,7,0xa5a50001u,0x80000000u,{21,69,3,48,12}},
    {false,"target_row","predicate",0xc26d28,0xc26daa,1,1,0,2,1,0,7,0xa5a50001u,0x80000000u,{21,68,3,48,12}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,1,0,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,1,0,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,1,7,0,0,0,7,0xa5a50001u,0x80000000u,{10,35,1,24,6}},
    {false,"target_row","predicate",0xc26d28,0xc26daa,1,1,7,1,0,0,7,0xa5a50001u,0x80000000u,{19,63,3,43,12}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,1,7,1,1,0,7,0xa5a50001u,0x80000000u,{19,64,3,43,12}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,1,7,2,0,0,7,0xa5a50001u,0x80000000u,{21,69,3,48,12}},
    {false,"target_row","predicate",0xc26d28,0xc26daa,1,1,7,2,1,0,7,0xa5a50001u,0x80000000u,{21,68,3,48,12}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,1,7,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,1,7,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,0,0,0,0,7,0xa5a50001u,0x80000000u,{10,35,1,24,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,0,1,0,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,0,1,1,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,0,2,0,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,0,2,1,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,0,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,0,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,7,0,0,0,7,0xa5a50001u,0x80000000u,{10,35,1,24,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,7,1,0,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,7,1,1,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,7,2,0,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,7,2,1,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,7,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,1,2,7,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,255,255,255,0,0,0,7,0xa5a50001u,0x80000000u,{10,35,1,24,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,255,255,255,1,0,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,255,255,255,1,1,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,255,255,255,2,0,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,255,255,255,2,1,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,255,255,255,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","predicate",0xc26d28,0xc26de9,255,255,255,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {false,"target_row","clear",0xc26d11,0xc26d1d,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{4,16,0,12,4}},
    {false,"target_row","advance",0xc26de9,0xc26d28,1,0,0,0,0,0,0,0xa5a50001u,0x80000000u,{11,29,2,21,4}},
    {false,"target_row","advance",0xc26de9,0xc26d28,1,0,0,0,0,0,30,0xa5a50001u,0x80000000u,{11,29,2,21,4}},
    {false,"target_row","advance",0xc26de9,0xc26dfe,1,0,0,0,0,0,31,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {false,"target_row","capture",0xc26d6f,0xc26d79,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26d79,0xc26d8f,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {false,"target_row","capture",0xc26d6f,0xc26d79,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26d79,0xc26d8f,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {false,"target_row","capture",0xc26d6f,0xc26d79,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26d79,0xc26d8f,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {false,"target_row","capture",0xc26d6f,0xc26d79,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26d79,0xc26d8f,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {false,"target_row","capture",0xc26d6f,0xc26d79,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26d79,0xc26d8f,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {false,"target_row","capture",0xc26d6f,0xc26d79,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26d79,0xc26d8f,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {false,"target_row","capture",0xc26d6f,0xc26d79,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26d79,0xc26d8f,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {false,"target_row","capture",0xc26dc9,0xc26dd3,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26dd3,0xc26de9,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {false,"target_row","capture",0xc26dc9,0xc26dd3,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26dd3,0xc26de9,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {false,"target_row","capture",0xc26dc9,0xc26dd3,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26dd3,0xc26de9,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {false,"target_row","capture",0xc26dc9,0xc26dd3,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26dd3,0xc26de9,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {false,"target_row","capture",0xc26dc9,0xc26dd3,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26dd3,0xc26de9,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {false,"target_row","capture",0xc26dc9,0xc26dd3,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26dd3,0xc26de9,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {false,"target_row","capture",0xc26dc9,0xc26dd3,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {false,"target_row","combine",0xc26dd3,0xc26de9,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {false,"remove_npc_targetting","predicate",0xc26e89,0xc26ee6,0,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,12,0,8,2}},
    {false,"remove_npc_targetting","predicate",0xc26e89,0xc26ee6,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{6,23,0,16,4}},
    {false,"remove_npc_targetting","predicate",0xc26e89,0xc26e99,1,0,7,0,0,0,7,0xa5a50001u,0x80000000u,{6,22,0,16,4}},
    {false,"remove_npc_targetting","predicate",0xc26e89,0xc26ee6,1,1,0,0,0,0,7,0xa5a50001u,0x80000000u,{6,23,0,16,4}},
    {false,"remove_npc_targetting","predicate",0xc26e89,0xc26e99,1,1,7,0,0,0,7,0xa5a50001u,0x80000000u,{6,22,0,16,4}},
    {false,"remove_npc_targetting","predicate",0xc26e89,0xc26ee6,1,2,0,0,0,0,7,0xa5a50001u,0x80000000u,{6,23,0,16,4}},
    {false,"remove_npc_targetting","predicate",0xc26e89,0xc26e99,1,2,7,0,0,0,7,0xa5a50001u,0x80000000u,{6,22,0,16,4}},
    {false,"remove_npc_targetting","predicate",0xc26e89,0xc26e99,255,255,255,0,0,0,7,0xa5a50001u,0x80000000u,{6,22,0,16,4}},
    {false,"remove_npc_targetting","advance",0xc26ee6,0xc26e89,1,0,0,0,0,0,0,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {false,"remove_npc_targetting","advance",0xc26ee6,0xc26e89,1,0,0,0,0,0,30,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {false,"remove_npc_targetting","advance",0xc26ee6,0xc26ef6,1,0,0,0,0,0,31,0xa5a50001u,0x80000000u,{9,24,2,16,4}},
    {false,"remove_npc_targetting","capture",0xc26ec6,0xc26ed0,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {false,"remove_npc_targetting","combine",0xc26ed0,0xc26ee6,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {false,"remove_npc_targetting","capture",0xc26ec6,0xc26ed0,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {false,"remove_npc_targetting","combine",0xc26ed0,0xc26ee6,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {false,"remove_npc_targetting","capture",0xc26ec6,0xc26ed0,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {false,"remove_npc_targetting","combine",0xc26ed0,0xc26ee6,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {false,"remove_npc_targetting","capture",0xc26ec6,0xc26ed0,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {false,"remove_npc_targetting","combine",0xc26ed0,0xc26ee6,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {false,"remove_npc_targetting","capture",0xc26ec6,0xc26ed0,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {false,"remove_npc_targetting","combine",0xc26ed0,0xc26ee6,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {false,"remove_npc_targetting","capture",0xc26ec6,0xc26ed0,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {false,"remove_npc_targetting","combine",0xc26ed0,0xc26ee6,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {false,"remove_npc_targetting","capture",0xc26ec6,0xc26ed0,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {false,"remove_npc_targetting","combine",0xc26ed0,0xc26ee6,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {false,"target_battler","capture",0xc27007,0xc27011,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {false,"target_battler","combine",0xc27011,0xc27027,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {false,"target_battler","capture",0xc27007,0xc27011,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {false,"target_battler","combine",0xc27011,0xc27027,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {false,"target_battler","capture",0xc27007,0xc27011,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {false,"target_battler","combine",0xc27011,0xc27027,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {false,"target_battler","capture",0xc27007,0xc27011,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {false,"target_battler","combine",0xc27011,0xc27027,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {false,"target_battler","capture",0xc27007,0xc27011,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {false,"target_battler","combine",0xc27011,0xc27027,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {false,"target_battler","capture",0xc27007,0xc27011,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {false,"target_battler","combine",0xc27011,0xc27027,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {false,"target_battler","capture",0xc27007,0xc27011,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {false,"target_battler","combine",0xc27011,0xc27027,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {false,"remove_target","capture",0xc270c2,0xc270cc,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {false,"remove_target","combine",0xc270cc,0xc270e2,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {false,"remove_target","capture",0xc270c2,0xc270cc,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {false,"remove_target","combine",0xc270cc,0xc270e2,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {false,"remove_target","capture",0xc270c2,0xc270cc,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {false,"remove_target","combine",0xc270cc,0xc270e2,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {false,"remove_target","capture",0xc270c2,0xc270cc,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {false,"remove_target","combine",0xc270cc,0xc270e2,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {false,"remove_target","capture",0xc270c2,0xc270cc,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {false,"remove_target","combine",0xc270cc,0xc270e2,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {false,"remove_target","capture",0xc270c2,0xc270cc,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {false,"remove_target","combine",0xc270cc,0xc270e2,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {false,"remove_target","capture",0xc270c2,0xc270cc,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {false,"remove_target","combine",0xc270cc,0xc270e2,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {false,"is_char_targetted","capture",0xc27057,0xc27061,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {false,"is_char_targetted","intersection",0xc27061,0xc2706d,1,0,0,0,0,0,7,0x0u,0x0u,{6,24,6,12,12}},
    {false,"is_char_targetted","boolean",0xc2706d,0xc27087,1,0,0,0,0,0,7,0x0u,0x0u,{11,37,6,23,12}},
    {false,"is_char_targetted","capture",0xc27057,0xc27061,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {false,"is_char_targetted","intersection",0xc27061,0xc2706d,1,0,0,0,0,0,7,0x0u,0x1u,{6,24,6,12,12}},
    {false,"is_char_targetted","boolean",0xc2706d,0xc27087,1,0,0,0,0,0,7,0x0u,0x1u,{11,37,6,23,12}},
    {false,"is_char_targetted","capture",0xc27057,0xc27061,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {false,"is_char_targetted","intersection",0xc27061,0xc2706d,1,0,0,0,0,0,7,0x1u,0x1u,{6,24,6,12,12}},
    {false,"is_char_targetted","boolean",0xc2706d,0xc27087,1,0,0,0,0,0,7,0x1u,0x1u,{12,39,6,26,12}},
    {false,"is_char_targetted","capture",0xc27057,0xc27061,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {false,"is_char_targetted","intersection",0xc27061,0xc2706d,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{6,24,6,12,12}},
    {false,"is_char_targetted","boolean",0xc2706d,0xc27087,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,32,4,22,8}},
    {false,"is_char_targetted","capture",0xc27057,0xc27061,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {false,"is_char_targetted","intersection",0xc27061,0xc2706d,1,0,0,0,0,0,7,0x80000000u,0x1u,{6,24,6,12,12}},
    {false,"is_char_targetted","boolean",0xc2706d,0xc27087,1,0,0,0,0,0,7,0x80000000u,0x1u,{11,37,6,23,12}},
    {false,"is_char_targetted","capture",0xc27057,0xc27061,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {false,"is_char_targetted","intersection",0xc27061,0xc2706d,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{6,24,6,12,12}},
    {false,"is_char_targetted","boolean",0xc2706d,0xc27087,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,32,4,22,8}},
    {false,"is_char_targetted","capture",0xc27057,0xc27061,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {false,"is_char_targetted","intersection",0xc27061,0xc2706d,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{6,24,6,12,12}},
    {false,"is_char_targetted","boolean",0xc2706d,0xc27087,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{11,37,6,23,12}},
    {false,"check_if_valid_target","valid",0xc4a1ff,0xc4a227,0,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{4,15,0,11,2}},
    {false,"check_if_valid_target","valid",0xc4a1ff,0xc4a227,1,0,1,0,0,0,7,0xa5a50001u,0x80000000u,{7,26,0,19,4}},
    {false,"check_if_valid_target","valid",0xc4a1ff,0xc4a227,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{14,47,0,37,6}},
    {false,"check_if_valid_target","valid",0xc4a1ff,0xc4a227,1,0,0,0,0,1,7,0xa5a50001u,0x80000000u,{11,40,0,30,6}},
    {false,"check_if_valid_target","valid",0xc4a1ff,0xc4a227,1,0,0,0,0,2,7,0xa5a50001u,0x80000000u,{13,45,0,35,6}},
    {false,"check_if_valid_target","valid",0xc4a1ff,0xc4a227,1,0,0,0,0,3,7,0xa5a50001u,0x80000000u,{14,47,0,37,6}},
    {false,"check_if_valid_target","valid",0xc4a1ff,0xc4a227,1,0,0,0,0,255,7,0xa5a50001u,0x80000000u,{14,47,0,37,6}},
    {true,"target_all","predicate",0xc26d5d,0xc26da4,0,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,12,0,8,2}},
    {true,"target_all","predicate",0xc26d5d,0xc26d65,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {true,"target_all","predicate",0xc26d5d,0xc26d65,1,0,7,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {true,"target_all","predicate",0xc26d5d,0xc26d65,1,1,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {true,"target_all","predicate",0xc26d5d,0xc26d65,1,1,7,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {true,"target_all","predicate",0xc26d5d,0xc26d65,1,2,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {true,"target_all","predicate",0xc26d5d,0xc26d65,1,2,7,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {true,"target_all","predicate",0xc26d5d,0xc26d65,255,255,255,0,0,0,7,0xa5a50001u,0x80000000u,{3,11,0,8,2}},
    {true,"target_all","clear",0xc26d47,0xc26d53,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{4,16,0,12,4}},
    {true,"target_all","advance",0xc26da4,0xc26d5d,1,0,0,0,0,0,0,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {true,"target_all","advance",0xc26da4,0xc26d5d,1,0,0,0,0,0,30,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {true,"target_all","advance",0xc26da4,0xc26db4,1,0,0,0,0,0,31,0xa5a50001u,0x80000000u,{9,24,2,16,4}},
    {true,"target_all","capture",0xc26d84,0xc26d8e,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {true,"target_all","combine",0xc26d8e,0xc26da4,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {true,"target_all","capture",0xc26d84,0xc26d8e,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {true,"target_all","combine",0xc26d8e,0xc26da4,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {true,"target_all","capture",0xc26d84,0xc26d8e,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {true,"target_all","combine",0xc26d8e,0xc26da4,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {true,"target_all","capture",0xc26d84,0xc26d8e,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {true,"target_all","combine",0xc26d8e,0xc26da4,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {true,"target_all","capture",0xc26d84,0xc26d8e,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {true,"target_all","combine",0xc26d8e,0xc26da4,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {true,"target_all","capture",0xc26d84,0xc26d8e,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {true,"target_all","combine",0xc26d8e,0xc26da4,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {true,"target_all","capture",0xc26d84,0xc26d8e,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {true,"target_all","combine",0xc26d8e,0xc26da4,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {true,"target_allies","predicate",0xc26b58,0xc26baf,0,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,12,0,8,2}},
    {true,"target_allies","predicate",0xc26b58,0xc26b70,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{6,23,0,16,4}},
    {true,"target_allies","predicate",0xc26b58,0xc26b70,1,0,7,0,0,0,7,0xa5a50001u,0x80000000u,{6,23,0,16,4}},
    {true,"target_allies","predicate",0xc26b58,0xc26baf,1,1,0,0,0,0,7,0xa5a50001u,0x80000000u,{9,34,0,24,6}},
    {true,"target_allies","predicate",0xc26b58,0xc26b70,1,1,7,0,0,0,7,0xa5a50001u,0x80000000u,{9,33,0,24,6}},
    {true,"target_allies","predicate",0xc26b58,0xc26baf,1,2,0,0,0,0,7,0xa5a50001u,0x80000000u,{9,34,0,24,6}},
    {true,"target_allies","predicate",0xc26b58,0xc26b70,1,2,7,0,0,0,7,0xa5a50001u,0x80000000u,{9,33,0,24,6}},
    {true,"target_allies","predicate",0xc26b58,0xc26b70,255,255,255,0,0,0,7,0xa5a50001u,0x80000000u,{9,33,0,24,6}},
    {true,"target_allies","clear",0xc26b42,0xc26b4e,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{4,16,0,12,4}},
    {true,"target_allies","advance",0xc26baf,0xc26b58,1,0,0,0,0,0,0,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {true,"target_allies","advance",0xc26baf,0xc26b58,1,0,0,0,0,0,30,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {true,"target_allies","advance",0xc26baf,0xc26bbf,1,0,0,0,0,0,31,0xa5a50001u,0x80000000u,{9,24,2,16,4}},
    {true,"target_allies","capture",0xc26b8f,0xc26b99,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {true,"target_allies","combine",0xc26b99,0xc26baf,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {true,"target_allies","capture",0xc26b8f,0xc26b99,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {true,"target_allies","combine",0xc26b99,0xc26baf,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {true,"target_allies","capture",0xc26b8f,0xc26b99,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {true,"target_allies","combine",0xc26b99,0xc26baf,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {true,"target_allies","capture",0xc26b8f,0xc26b99,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {true,"target_allies","combine",0xc26b99,0xc26baf,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {true,"target_allies","capture",0xc26b8f,0xc26b99,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {true,"target_allies","combine",0xc26b99,0xc26baf,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {true,"target_allies","capture",0xc26b8f,0xc26b99,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {true,"target_allies","combine",0xc26b99,0xc26baf,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {true,"target_allies","capture",0xc26b8f,0xc26b99,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {true,"target_allies","combine",0xc26b99,0xc26baf,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {true,"target_all_enemies","predicate",0xc26bdf,0xc26c31,0,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,12,0,8,2}},
    {true,"target_all_enemies","predicate",0xc26bdf,0xc26c31,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{7,26,0,19,4}},
    {true,"target_all_enemies","predicate",0xc26bdf,0xc26c31,1,0,7,0,0,0,7,0xa5a50001u,0x80000000u,{7,26,0,19,4}},
    {true,"target_all_enemies","predicate",0xc26bdf,0xc26bf2,1,1,0,0,0,0,7,0xa5a50001u,0x80000000u,{7,25,0,19,4}},
    {true,"target_all_enemies","predicate",0xc26bdf,0xc26bf2,1,1,7,0,0,0,7,0xa5a50001u,0x80000000u,{7,25,0,19,4}},
    {true,"target_all_enemies","predicate",0xc26bdf,0xc26c31,1,2,0,0,0,0,7,0xa5a50001u,0x80000000u,{7,26,0,19,4}},
    {true,"target_all_enemies","predicate",0xc26bdf,0xc26c31,1,2,7,0,0,0,7,0xa5a50001u,0x80000000u,{7,26,0,19,4}},
    {true,"target_all_enemies","predicate",0xc26bdf,0xc26c31,255,255,255,0,0,0,7,0xa5a50001u,0x80000000u,{7,26,0,19,4}},
    {true,"target_all_enemies","clear",0xc26bc9,0xc26bd5,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{4,16,0,12,4}},
    {true,"target_all_enemies","advance",0xc26c31,0xc26bdf,1,0,0,0,0,0,0,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {true,"target_all_enemies","advance",0xc26c31,0xc26bdf,1,0,0,0,0,0,30,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {true,"target_all_enemies","advance",0xc26c31,0xc26c41,1,0,0,0,0,0,31,0xa5a50001u,0x80000000u,{9,24,2,16,4}},
    {true,"target_all_enemies","capture",0xc26c11,0xc26c1b,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {true,"target_all_enemies","combine",0xc26c1b,0xc26c31,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {true,"target_all_enemies","capture",0xc26c11,0xc26c1b,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {true,"target_all_enemies","combine",0xc26c1b,0xc26c31,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {true,"target_all_enemies","capture",0xc26c11,0xc26c1b,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {true,"target_all_enemies","combine",0xc26c1b,0xc26c31,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {true,"target_all_enemies","capture",0xc26c11,0xc26c1b,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {true,"target_all_enemies","combine",0xc26c1b,0xc26c31,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {true,"target_all_enemies","capture",0xc26c11,0xc26c1b,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {true,"target_all_enemies","combine",0xc26c1b,0xc26c31,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {true,"target_all_enemies","capture",0xc26c11,0xc26c1b,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {true,"target_all_enemies","combine",0xc26c1b,0xc26c31,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {true,"target_all_enemies","capture",0xc26c11,0xc26c1b,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {true,"target_all_enemies","combine",0xc26c1b,0xc26c31,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,0,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,0,0,0,1,0,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,0,0,0,1,1,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,0,0,0,2,0,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,0,0,0,2,1,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,0,0,0,3,0,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,0,0,0,65535,1,0,7,0xa5a50001u,0x80000000u,{4,14,0,11,2}},
    {true,"target_row","predicate",0xc26c67,0xc26c8f,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{9,33,1,21,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,0,0,1,0,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,0,0,1,1,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,0,0,2,0,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,0,0,2,1,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,0,0,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,0,0,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","predicate",0xc26c67,0xc26c8f,1,0,7,0,0,0,7,0xa5a50001u,0x80000000u,{9,33,1,21,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,0,7,1,0,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,0,7,1,1,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,0,7,2,0,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,0,7,2,1,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,0,7,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,0,7,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,1,0,0,0,0,7,0xa5a50001u,0x80000000u,{10,35,1,24,6}},
    {true,"target_row","predicate",0xc26c67,0xc26ce9,1,1,0,1,0,0,7,0xa5a50001u,0x80000000u,{19,63,3,43,12}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,1,0,1,1,0,7,0xa5a50001u,0x80000000u,{19,64,3,43,12}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,1,0,2,0,0,7,0xa5a50001u,0x80000000u,{21,69,3,48,12}},
    {true,"target_row","predicate",0xc26c67,0xc26ce9,1,1,0,2,1,0,7,0xa5a50001u,0x80000000u,{21,68,3,48,12}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,1,0,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,1,0,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,1,7,0,0,0,7,0xa5a50001u,0x80000000u,{10,35,1,24,6}},
    {true,"target_row","predicate",0xc26c67,0xc26ce9,1,1,7,1,0,0,7,0xa5a50001u,0x80000000u,{19,63,3,43,12}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,1,7,1,1,0,7,0xa5a50001u,0x80000000u,{19,64,3,43,12}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,1,7,2,0,0,7,0xa5a50001u,0x80000000u,{21,69,3,48,12}},
    {true,"target_row","predicate",0xc26c67,0xc26ce9,1,1,7,2,1,0,7,0xa5a50001u,0x80000000u,{21,68,3,48,12}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,1,7,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,1,7,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,0,0,0,0,7,0xa5a50001u,0x80000000u,{10,35,1,24,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,0,1,0,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,0,1,1,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,0,2,0,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,0,2,1,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,0,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,0,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,7,0,0,0,7,0xa5a50001u,0x80000000u,{10,35,1,24,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,7,1,0,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,7,1,1,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,7,2,0,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,7,2,1,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,7,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,1,2,7,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,255,255,255,0,0,0,7,0xa5a50001u,0x80000000u,{10,35,1,24,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,255,255,255,1,0,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,255,255,255,1,1,0,7,0xa5a50001u,0x80000000u,{12,41,1,29,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,255,255,255,2,0,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,255,255,255,2,1,0,7,0xa5a50001u,0x80000000u,{14,46,1,34,6}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,255,255,255,3,0,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","predicate",0xc26c67,0xc26d28,255,255,255,65535,1,0,7,0xa5a50001u,0x80000000u,{11,33,1,26,4}},
    {true,"target_row","clear",0xc26c50,0xc26c5c,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{4,16,0,12,4}},
    {true,"target_row","advance",0xc26d28,0xc26c67,1,0,0,0,0,0,0,0xa5a50001u,0x80000000u,{11,29,2,21,4}},
    {true,"target_row","advance",0xc26d28,0xc26c67,1,0,0,0,0,0,30,0xa5a50001u,0x80000000u,{11,29,2,21,4}},
    {true,"target_row","advance",0xc26d28,0xc26d3d,1,0,0,0,0,0,31,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {true,"target_row","capture",0xc26cae,0xc26cb8,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26cb8,0xc26cce,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {true,"target_row","capture",0xc26cae,0xc26cb8,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26cb8,0xc26cce,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {true,"target_row","capture",0xc26cae,0xc26cb8,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26cb8,0xc26cce,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {true,"target_row","capture",0xc26cae,0xc26cb8,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26cb8,0xc26cce,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {true,"target_row","capture",0xc26cae,0xc26cb8,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26cb8,0xc26cce,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {true,"target_row","capture",0xc26cae,0xc26cb8,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26cb8,0xc26cce,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {true,"target_row","capture",0xc26cae,0xc26cb8,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26cb8,0xc26cce,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {true,"target_row","capture",0xc26d08,0xc26d12,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26d12,0xc26d28,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {true,"target_row","capture",0xc26d08,0xc26d12,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26d12,0xc26d28,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {true,"target_row","capture",0xc26d08,0xc26d12,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26d12,0xc26d28,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {true,"target_row","capture",0xc26d08,0xc26d12,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26d12,0xc26d28,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {true,"target_row","capture",0xc26d08,0xc26d12,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26d12,0xc26d28,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {true,"target_row","capture",0xc26d08,0xc26d12,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26d12,0xc26d28,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {true,"target_row","capture",0xc26d08,0xc26d12,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {true,"target_row","combine",0xc26d12,0xc26d28,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {true,"remove_npc_targetting","predicate",0xc26dc8,0xc26e25,0,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{3,12,0,8,2}},
    {true,"remove_npc_targetting","predicate",0xc26dc8,0xc26e25,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{6,23,0,16,4}},
    {true,"remove_npc_targetting","predicate",0xc26dc8,0xc26dd8,1,0,7,0,0,0,7,0xa5a50001u,0x80000000u,{6,22,0,16,4}},
    {true,"remove_npc_targetting","predicate",0xc26dc8,0xc26e25,1,1,0,0,0,0,7,0xa5a50001u,0x80000000u,{6,23,0,16,4}},
    {true,"remove_npc_targetting","predicate",0xc26dc8,0xc26dd8,1,1,7,0,0,0,7,0xa5a50001u,0x80000000u,{6,22,0,16,4}},
    {true,"remove_npc_targetting","predicate",0xc26dc8,0xc26e25,1,2,0,0,0,0,7,0xa5a50001u,0x80000000u,{6,23,0,16,4}},
    {true,"remove_npc_targetting","predicate",0xc26dc8,0xc26dd8,1,2,7,0,0,0,7,0xa5a50001u,0x80000000u,{6,22,0,16,4}},
    {true,"remove_npc_targetting","predicate",0xc26dc8,0xc26dd8,255,255,255,0,0,0,7,0xa5a50001u,0x80000000u,{6,22,0,16,4}},
    {true,"remove_npc_targetting","advance",0xc26e25,0xc26dc8,1,0,0,0,0,0,0,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {true,"remove_npc_targetting","advance",0xc26e25,0xc26dc8,1,0,0,0,0,0,30,0xa5a50001u,0x80000000u,{9,25,2,16,4}},
    {true,"remove_npc_targetting","advance",0xc26e25,0xc26e35,1,0,0,0,0,0,31,0xa5a50001u,0x80000000u,{9,24,2,16,4}},
    {true,"remove_npc_targetting","capture",0xc26e05,0xc26e0f,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {true,"remove_npc_targetting","combine",0xc26e0f,0xc26e25,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {true,"remove_npc_targetting","capture",0xc26e05,0xc26e0f,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {true,"remove_npc_targetting","combine",0xc26e0f,0xc26e25,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {true,"remove_npc_targetting","capture",0xc26e05,0xc26e0f,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {true,"remove_npc_targetting","combine",0xc26e0f,0xc26e25,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {true,"remove_npc_targetting","capture",0xc26e05,0xc26e0f,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {true,"remove_npc_targetting","combine",0xc26e0f,0xc26e25,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {true,"remove_npc_targetting","capture",0xc26e05,0xc26e0f,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {true,"remove_npc_targetting","combine",0xc26e0f,0xc26e25,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {true,"remove_npc_targetting","capture",0xc26e05,0xc26e0f,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {true,"remove_npc_targetting","combine",0xc26e0f,0xc26e25,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {true,"remove_npc_targetting","capture",0xc26e05,0xc26e0f,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {true,"remove_npc_targetting","combine",0xc26e0f,0xc26e25,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {true,"target_battler","capture",0xc26f46,0xc26f50,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {true,"target_battler","combine",0xc26f50,0xc26f66,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {true,"target_battler","capture",0xc26f46,0xc26f50,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {true,"target_battler","combine",0xc26f50,0xc26f66,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {true,"target_battler","capture",0xc26f46,0xc26f50,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {true,"target_battler","combine",0xc26f50,0xc26f66,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {true,"target_battler","capture",0xc26f46,0xc26f50,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {true,"target_battler","combine",0xc26f50,0xc26f66,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {true,"target_battler","capture",0xc26f46,0xc26f50,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {true,"target_battler","combine",0xc26f50,0xc26f66,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {true,"target_battler","capture",0xc26f46,0xc26f50,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {true,"target_battler","combine",0xc26f50,0xc26f66,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {true,"target_battler","capture",0xc26f46,0xc26f50,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {true,"target_battler","combine",0xc26f50,0xc26f66,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {true,"remove_target","capture",0xc27001,0xc2700b,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {true,"remove_target","combine",0xc2700b,0xc27021,1,0,0,0,0,0,7,0x0u,0x0u,{10,42,8,22,20}},
    {true,"remove_target","capture",0xc27001,0xc2700b,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {true,"remove_target","combine",0xc2700b,0xc27021,1,0,0,0,0,0,7,0x0u,0x1u,{10,42,8,22,20}},
    {true,"remove_target","capture",0xc27001,0xc2700b,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {true,"remove_target","combine",0xc2700b,0xc27021,1,0,0,0,0,0,7,0x1u,0x1u,{10,42,8,22,20}},
    {true,"remove_target","capture",0xc27001,0xc2700b,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {true,"remove_target","combine",0xc2700b,0xc27021,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,42,8,22,20}},
    {true,"remove_target","capture",0xc27001,0xc2700b,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {true,"remove_target","combine",0xc2700b,0xc27021,1,0,0,0,0,0,7,0x80000000u,0x1u,{10,42,8,22,20}},
    {true,"remove_target","capture",0xc27001,0xc2700b,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {true,"remove_target","combine",0xc2700b,0xc27021,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,42,8,22,20}},
    {true,"remove_target","capture",0xc27001,0xc2700b,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {true,"remove_target","combine",0xc2700b,0xc27021,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{10,42,8,22,20}},
    {true,"is_char_targetted","capture",0xc26f96,0xc26fa0,1,0,0,0,0,0,7,0x0u,0x0u,{4,18,2,10,8}},
    {true,"is_char_targetted","intersection",0xc26fa0,0xc26fac,1,0,0,0,0,0,7,0x0u,0x0u,{6,24,6,12,12}},
    {true,"is_char_targetted","boolean",0xc26fac,0xc26fc6,1,0,0,0,0,0,7,0x0u,0x0u,{11,37,6,23,12}},
    {true,"is_char_targetted","capture",0xc26f96,0xc26fa0,1,0,0,0,0,0,7,0x0u,0x1u,{4,18,2,10,8}},
    {true,"is_char_targetted","intersection",0xc26fa0,0xc26fac,1,0,0,0,0,0,7,0x0u,0x1u,{6,24,6,12,12}},
    {true,"is_char_targetted","boolean",0xc26fac,0xc26fc6,1,0,0,0,0,0,7,0x0u,0x1u,{11,37,6,23,12}},
    {true,"is_char_targetted","capture",0xc26f96,0xc26fa0,1,0,0,0,0,0,7,0x1u,0x1u,{4,18,2,10,8}},
    {true,"is_char_targetted","intersection",0xc26fa0,0xc26fac,1,0,0,0,0,0,7,0x1u,0x1u,{6,24,6,12,12}},
    {true,"is_char_targetted","boolean",0xc26fac,0xc26fc6,1,0,0,0,0,0,7,0x1u,0x1u,{12,39,6,26,12}},
    {true,"is_char_targetted","capture",0xc26f96,0xc26fa0,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{4,18,2,10,8}},
    {true,"is_char_targetted","intersection",0xc26fa0,0xc26fac,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{6,24,6,12,12}},
    {true,"is_char_targetted","boolean",0xc26fac,0xc26fc6,1,0,0,0,0,0,7,0x80000000u,0x80000000u,{10,32,4,22,8}},
    {true,"is_char_targetted","capture",0xc26f96,0xc26fa0,1,0,0,0,0,0,7,0x80000000u,0x1u,{4,18,2,10,8}},
    {true,"is_char_targetted","intersection",0xc26fa0,0xc26fac,1,0,0,0,0,0,7,0x80000000u,0x1u,{6,24,6,12,12}},
    {true,"is_char_targetted","boolean",0xc26fac,0xc26fc6,1,0,0,0,0,0,7,0x80000000u,0x1u,{11,37,6,23,12}},
    {true,"is_char_targetted","capture",0xc26f96,0xc26fa0,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{4,18,2,10,8}},
    {true,"is_char_targetted","intersection",0xc26fa0,0xc26fac,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{6,24,6,12,12}},
    {true,"is_char_targetted","boolean",0xc26fac,0xc26fc6,1,0,0,0,0,0,7,0xffffffffu,0x80000001u,{10,32,4,22,8}},
    {true,"is_char_targetted","capture",0xc26f96,0xc26fa0,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{4,18,2,10,8}},
    {true,"is_char_targetted","intersection",0xc26fa0,0xc26fac,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{6,24,6,12,12}},
    {true,"is_char_targetted","boolean",0xc26fac,0xc26fc6,1,0,0,0,0,0,7,0xa5a50001u,0x5a5afffeu,{11,37,6,23,12}},
    {true,"check_if_valid_target","valid",0xc4766c,0xc47694,0,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{4,15,0,11,2}},
    {true,"check_if_valid_target","valid",0xc4766c,0xc47694,1,0,1,0,0,0,7,0xa5a50001u,0x80000000u,{7,26,0,19,4}},
    {true,"check_if_valid_target","valid",0xc4766c,0xc47694,1,0,0,0,0,0,7,0xa5a50001u,0x80000000u,{14,47,0,37,6}},
    {true,"check_if_valid_target","valid",0xc4766c,0xc47694,1,0,0,0,0,1,7,0xa5a50001u,0x80000000u,{11,40,0,30,6}},
    {true,"check_if_valid_target","valid",0xc4766c,0xc47694,1,0,0,0,0,2,7,0xa5a50001u,0x80000000u,{13,45,0,35,6}},
    {true,"check_if_valid_target","valid",0xc4766c,0xc47694,1,0,0,0,0,3,7,0xa5a50001u,0x80000000u,{14,47,0,37,6}},
    {true,"check_if_valid_target","valid",0xc4766c,0xc47694,1,0,0,0,0,255,7,0xa5a50001u,0x80000000u,{14,47,0,37,6}},
    {false,"get_shield_targetting","shield",0xc23fec,0xc24008,1,0,0,0,0,0,7,0x0u,0x0u,{9,24,0,23,0}},
    {false,"get_shield_targetting","shield",0xc23fec,0xc24008,1,0,0,0,0,0,7,0x0u,0x29u,{9,24,0,23,0}},
    {false,"get_shield_targetting","shield",0xc23fec,0xc24008,1,0,0,0,0,0,7,0x0u,0x2au,{4,12,0,10,0}},
    {false,"get_shield_targetting","shield",0xc23fec,0xc24008,1,0,0,0,0,0,7,0x0u,0x2bu,{6,17,0,15,0}},
    {false,"get_shield_targetting","shield",0xc23fec,0xc24008,1,0,0,0,0,0,7,0x0u,0x2cu,{9,24,0,23,0}},
    {false,"get_shield_targetting","shield",0xc23fec,0xc24008,1,0,0,0,0,0,7,0x0u,0x2eu,{8,22,0,20,0}},
    {false,"get_shield_targetting","shield",0xc23fec,0xc24008,1,0,0,0,0,0,7,0x0u,0x2fu,{10,26,0,25,0}},
    {false,"get_shield_targetting","shield",0xc23fec,0xc24008,1,0,0,0,0,0,7,0x0u,0x30u,{9,24,0,23,0}},
    {false,"get_shield_targetting","shield",0xc23fec,0xc24008,1,0,0,0,0,0,7,0x0u,0xffffu,{9,24,0,23,0}},
    {true,"get_shield_targetting","shield",0xc23ea0,0xc23ebc,1,0,0,0,0,0,7,0x0u,0x0u,{9,24,0,23,0}},
    {true,"get_shield_targetting","shield",0xc23ea0,0xc23ebc,1,0,0,0,0,0,7,0x0u,0x29u,{9,24,0,23,0}},
    {true,"get_shield_targetting","shield",0xc23ea0,0xc23ebc,1,0,0,0,0,0,7,0x0u,0x2au,{4,12,0,10,0}},
    {true,"get_shield_targetting","shield",0xc23ea0,0xc23ebc,1,0,0,0,0,0,7,0x0u,0x2bu,{6,17,0,15,0}},
    {true,"get_shield_targetting","shield",0xc23ea0,0xc23ebc,1,0,0,0,0,0,7,0x0u,0x2cu,{9,24,0,23,0}},
    {true,"get_shield_targetting","shield",0xc23ea0,0xc23ebc,1,0,0,0,0,0,7,0x0u,0x2eu,{8,22,0,20,0}},
    {true,"get_shield_targetting","shield",0xc23ea0,0xc23ebc,1,0,0,0,0,0,7,0x0u,0x2fu,{10,26,0,25,0}},
    {true,"get_shield_targetting","shield",0xc23ea0,0xc23ebc,1,0,0,0,0,0,7,0x0u,0x30u,{9,24,0,23,0}},
    {true,"get_shield_targetting","shield",0xc23ea0,0xc23ebc,1,0,0,0,0,0,7,0x0u,0xffffu,{9,24,0,23,0}},
};
// clang-format on
struct Scenario {
  const Fixture *fixture;
  bool fast = false, enhanced = false;
  unsigned direct_page = 0x1e00, flags = 0x45;
};
eb::GameVersion version(const Scenario &s) {
  return s.fixture->japanese ? eb::GameVersion::JP : eb::GameVersion::US;
}
unsigned record_base(const Scenario &s) {
  return s.fixture->japanese ? 0xa1ae : 0x9fac;
}
unsigned mask_address(const Scenario &s) {
  return s.fixture->japanese ? 0xab6e : 0xa96c;
}
unsigned cycles(const Scenario &s) {
  return s.fixture->cost.cycles +
         ((s.direct_page & 255) ? s.fixture->cost.dp : 0);
}
unsigned clocks(const Scenario &s) {
  return 6 * cycles(s) + 2 * s.fixture->cost.wram +
         (s.fast ? 0 : 2 * s.fixture->cost.fetch);
}
std::span<const std::uint8_t> test_rom(eb::GameVersion version) {
  static const auto make = [](eb::GameVersion v) {
    std::vector<std::uint8_t> rom(eb::rom_data(v),
                                  eb::rom_data(v) + eb::rom_size(v));
    const auto at = v == eb::GameVersion::JP ? 0x476e6u : 0x4a279u;
    require(rom.size() > at + 128, "Regional ROM template too short");
    for (unsigned i = 0; i < 32; ++i)
      for (unsigned b = 0; b < 4; ++b)
        rom[at + i * 4 + b] = std::uint8_t((std::uint32_t(1) << i) >> (b * 8));
    return rom;
  };
  static const auto us = make(eb::GameVersion::US),
                    jp = make(eb::GameVersion::JP);
  return version == eb::GameVersion::JP ? std::span(jp) : std::span(us);
}
auto cpu_state(const eb::MainCpu65816 &c) {
  return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index,
                  c.stack_pointer, c.direct_page, c.status_register,
                  c.data_bank, c.emulation_mode, c.is_stopped, c.is_waiting,
                  c.instruction_count, c.cycle_count);
}
auto audio_state(const eb::Spc700AudioCpu &c) {
  return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index,
                  c.stack_pointer, c.status_register, c.is_stopped,
                  c.is_sleeping, c.instruction_count, c.cycle_count);
}
struct Picture {
  unsigned width;
  std::uint64_t frame, clock;
  double aspect;
  std::vector<std::uint32_t> native, pixels, reference;
  std::vector<std::uint8_t> mask;
  bool operator==(const Picture &) const = default;
};
struct Machine {
  eb::SnesBus bus;
  eb::Spc700AudioCpu audio;
  eb::MainCpu65816 cpu;
  std::vector<std::pair<unsigned, std::uint64_t>> audio_slices;
  std::vector<Picture> pictures;
  std::vector<std::pair<unsigned, unsigned>> writes;
  std::vector<std::tuple<bool, unsigned, unsigned>> accesses;
  Machine(const Scenario &s, eb::MainCpuRuntime runtime)
      : bus(test_rom(version(s)), version(s)), audio(bus), cpu(bus) {
    cpu.set_runtime(runtime);
    cpu.set_gameplay_timing(s.enhanced);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e;
    cpu.stack_pointer = 0x1ffa;
    bus.work_ram.fill(0xa7);
    const auto &q = eb::source_profile(version(s)).dma_queue;
    bus.work_ram[q.write_index] = bus.work_ram[q.last_completed_index] = 0;
    checkpoint(s);
    bus.write_byte(0x420d, s.fast);
    audio.write_byte(0xfa, 3);
    audio.write_byte(0xfb, 5);
    audio.write_byte(0xfc, 7);
    audio.write_byte(0xf1, 0x87);
    audio.advance_dsp_clocks = [this](unsigned value) {
      audio_slices.emplace_back(value, bus.master_clocks());
    };
    bus.on_presentation_frame = [this](auto pixels, unsigned width,
                                       std::uint64_t frame) {
      const auto reference = bus.presentation_effect_reference();
      const auto mask = bus.presentation_effect_mask();
      pictures.push_back(
          {width,
           frame,
           bus.master_clocks(),
           bus.presentation_fixed_aspect(),
           {bus.native_framebuffer.begin(), bus.native_framebuffer.end()},
           {pixels.begin(), pixels.end()},
           {reference.begin(), reference.end()},
           {mask.begin(), mask.end()}});
    };
    bus.advance_master_clocks_with_refresh(32);
  }
  void word(unsigned address, std::uint32_t value) {
    bus.work_ram.at(address) = std::uint8_t(value);
    bus.work_ram.at(address + 1) = std::uint8_t(value >> 8);
  }
  void long_value(unsigned address, std::uint32_t value) {
    word(address, value);
    word(address + 2, value >> 16);
  }
  std::uint32_t value(unsigned address, unsigned size = 4) const {
    std::uint32_t result = 0;
    for (unsigned i = 0; i < size; ++i)
      result |= std::uint32_t(bus.work_ram.at(address + i)) << (8 * i);
    return result;
  }
  void checkpoint(const Scenario &s) {
    const auto &f = *s.fixture;
    const std::string kind = f.kind;
    cpu.program_counter = f.start;
    cpu.direct_page = s.direct_page;
    cpu.status_register = s.flags;
    cpu.accumulator = kind == "shield" ? f.bits : 0xa5a5;
    cpu.x_index = kind == "valid" ? 78 * f.slot
                  : std::string(f.routine) == "is_char_targetted"
                      ? 0
                      : record_base(s) + 78 * f.slot;
    cpu.y_index = 0x5a5a;
    const unsigned record = record_base(s) + 78 * f.slot;
    bus.work_ram[record + 12] = f.conscious;
    bus.work_ram[record + 14] = f.side;
    bus.work_ram[record + 15] = f.npc;
    bus.work_ram[record + 16] = f.record_row;
    bus.work_ram[record + 29] = f.status;
    word(s.direct_page + 14, f.slot);
    word(s.direct_page + 16, f.row);
    long_value(s.direct_page + 6, kind == "combine" || kind == "intersection"
                                      ? f.mask
                                  : kind == "boolean" ? f.mask & f.bits
                                                      : 0xdeadbeef);
    long_value(s.direct_page + 10, f.bits);
    long_value(mask_address(s), f.mask);
  }
  void clock_position(unsigned target) {
    for (unsigned i = 0; i < 3000 && bus.scanline_clock() != target; ++i)
      bus.advance_master_clocks_with_refresh(1);
    require(bus.scanline_clock() == target,
            "Could not position hardware clock");
  }
  void long_window() {
    for (unsigned i = 0; bus.scanline_index() < 225; ++i) {
      require(i < 400, "Could not reach vblank");
      bus.advance_master_clocks_with_refresh(1000);
    }
    clock_position(600);
  }
  void prime_budget(const Scenario &s) {
    cpu.program_counter =
        eb::source_profile(version(s)).gameplay_timing.entity_update_call;
    cpu.step_instruction();
    require(cpu.timing_snapshot().entity_update_active,
            "Entity timing scope was not entered");
    for (unsigned i = 0;
         cpu.timing_snapshot().entity_update_master_clocks < 140000; ++i) {
      require(i < 5000, "Could not enter accelerated timing scope");
      cpu.program_counter = s.fixture->japanese ? 0xc09445 : 0xc09466;
      cpu.step_instruction();
    }
    checkpoint(s);
    clock_position(32);
  }
};
struct Pair {
  Scenario scenario;
  std::unique_ptr<Machine> legacy, native;
  explicit Pair(Scenario s)
      : scenario(s),
        legacy(std::make_unique<Machine>(s, eb::MainCpuRuntime::Legacy)),
        native(std::make_unique<Machine>(s, eb::MainCpuRuntime::Ported)) {}
  template <class Setup> void configure(Setup setup) {
    setup(*legacy);
    setup(*native);
  }
  void compare() const {
    const auto &a = *legacy;
    const auto &b = *native;
    require(cpu_state(a.cpu) == cpu_state(b.cpu),
            "CPU architectural state differs");
    require(a.cpu.timing_snapshot() == b.cpu.timing_snapshot(),
            "Private CPU timing state differs");
    require(
        eb::RuntimeStateAudit::bus_controls(a.bus) ==
            eb::RuntimeStateAudit::bus_controls(b.bus),
        "Private hardware registers, clocks, latches, DMA or open bus differ");
    require(a.bus.work_ram == b.bus.work_ram &&
                a.bus.save_ram == b.bus.save_ram,
            "WRAM/SRAM differs");
    require(a.bus.video_ram == b.bus.video_ram &&
                a.bus.palette_ram == b.bus.palette_ram &&
                a.bus.object_attributes == b.bus.object_attributes,
            "PPU memory differs");
    require(a.bus.audio_to_main_ports == b.bus.audio_to_main_ports &&
                a.bus.main_to_audio_ports == b.bus.main_to_audio_ports,
            "Audio ports differ");
    require(a.bus.completed_frames == b.bus.completed_frames &&
                a.bus.native_framebuffer == b.bus.native_framebuffer &&
                a.pictures == b.pictures,
            "Frames, pixels or presentation callbacks differ");
    const auto ap = a.bus.presentation_pixels(),
               bp = b.bus.presentation_pixels();
    const auto am = a.bus.presentation_effect_mask(),
               bm = b.bus.presentation_effect_mask();
    const auto ar = a.bus.presentation_effect_reference(),
               br = b.bus.presentation_effect_reference();
    require(a.bus.presentation_width() == b.bus.presentation_width() &&
                a.bus.presentation_fixed_aspect() ==
                    b.bus.presentation_fixed_aspect() &&
                std::equal(ap.begin(), ap.end(), bp.begin(), bp.end()) &&
                std::equal(am.begin(), am.end(), bm.begin(), bm.end()) &&
                std::equal(ar.begin(), ar.end(), br.begin(), br.end()),
            "Presentation canvas/reference/mask differs");
    require(audio_state(a.audio) == audio_state(b.audio) &&
                a.audio.audio_ram == b.audio.audio_ram &&
                a.audio.dsp_registers == b.audio.dsp_registers &&
                eb::RuntimeStateAudit::audio_controls(a.audio) ==
                    eb::RuntimeStateAudit::audio_controls(b.audio) &&
                a.audio_slices == b.audio_slices,
            "APU state or timestamped DSP clock slices differ");
    require(a.writes == b.writes && a.accesses == b.accesses,
            "Fallback observers differ");
  }
  void advance(unsigned maximum, bool admitted) {
    compare();
    const auto batches = native->cpu.native_gameplay_batches();
    const auto before_cycles = native->cpu.cycle_count;
    const auto before_clocks = native->bus.master_clocks();
    const auto before_timing = native->cpu.timing_snapshot();
    const auto before_audio = native->audio_slices.size();
    const auto retired = native->cpu.advance_gameplay(maximum);
    require(retired == (admitted ? scenario.fixture->cost.steps
                                 : (maximum ? 1u : 0u)) &&
                retired <= maximum,
            "Wrong frozen source instruction count or exceeded quota");
    for (unsigned i = 0; i < retired; ++i)
      legacy->cpu.step_instruction();
    compare();
    require(native->cpu.native_gameplay_batches() ==
                batches + unsigned(admitted),
            "Unexpected native admission count");
    require(legacy->cpu.native_gameplay_batches() == 0,
            "Legacy oracle used native gameplay");
    if (admitted) {
      require(native->cpu.program_counter == scenario.fixture->end,
              "Wrong source continuation");
      require(native->cpu.cycle_count - before_cycles == cycles(scenario),
              "Frozen source cycle count differs");
      const auto &q = eb::source_profile(version(scenario)).dma_queue;
      const bool scaled = before_timing.entity_update_active &&
                          !before_timing.interrupt_nesting_depth &&
                          before_timing.entity_update_master_clocks >= 140000 &&
                          native->bus.work_ram[q.write_index] ==
                              native->bus.work_ram[q.last_completed_index];
      const auto expected = scaled
                                ? (clocks(scenario) +
                                   before_timing.extra_budget_clock_remainder) /
                                      8
                                : clocks(scenario);
      require(native->bus.master_clocks() - before_clocks == expected,
              "Frozen source master clocks differ");
    }
    ++comparisons;
    admitted ? ++admissions : ++declines;
    source_steps += retired;
    audio_callbacks += native->audio_slices.size() - before_audio;
  }
  void admitted() {
    if (clocks(scenario) >= native->bus.native_execution_budget())
      configure([](Machine &m) { m.long_window(); });
    require(clocks(scenario) < native->bus.native_execution_budget(),
            "No hardware window for expected admission");
    advance(scenario.fixture->cost.steps, true);
  }
};
template <class Work>
void checked(const Scenario &s, const char *label, Work work) {
  try {
    work();
  } catch (const std::exception &e) {
    throw std::runtime_error(std::string(s.fixture->japanese ? "JP " : "US ") +
                             s.fixture->routine + " " + s.fixture->kind + " " +
                             label + " PC=" + std::to_string(s.fixture->start) +
                             " D=" + std::to_string(s.direct_page) +
                             " fast=" + std::to_string(s.fast) + " flags=" +
                             std::to_string(s.flags) + ": " + e.what());
  }
}
void effects(const Pair &p) {
  const auto &s = p.scenario;
  const auto &f = *s.fixture;
  const auto &m = *p.native;
  const std::string kind = f.kind;
  if (kind == "clear")
    require(m.value(mask_address(s)) == 0,
            "Clear did not publish all32 mask bits");
  if (kind == "capture")
    require(m.value(s.direct_page + 6) == f.mask,
            "Mask capture did not preserve live32 value");
  if (kind == "combine") {
    const bool remove = std::string(f.routine) == "remove_target" ||
                        std::string(f.routine) == "remove_npc_targetting";
    const auto expected = remove ? f.mask & f.bits : f.mask | f.bits;
    require(m.value(mask_address(s)) == expected &&
                m.value(s.direct_page + 6) == expected,
            "Mask combine/publication differs");
  }
  if (kind == "intersection")
    require(m.value(s.direct_page + 6) == (f.mask & f.bits) &&
                m.value(mask_address(s)) == f.mask,
            "Target test modified authoritative mask or wrong intersection");
  if (kind == "boolean")
    require(m.cpu.accumulator == unsigned((f.mask & f.bits) != 0) &&
                m.value(s.direct_page + 10) == 0,
            "32-bit target test result/scratch differs");
  if (kind == "valid")
    require(m.cpu.accumulator == unsigned(f.conscious && !f.npc &&
                                          f.status != 1 && f.status != 2),
            "Valid target result differs");
  if (kind == "shield")
    require(m.cpu.accumulator == unsigned(f.bits == 42 || f.bits == 43 ||
                                          f.bits == 46 || f.bits == 47),
            "Shield targeting result differs");
}
void admission_matrix() {
  for (const auto &f : fixtures)
    for (bool fast : {false, true})
      for (unsigned d : {0x1e00u, 0x1e01u}) {
        Scenario s{&f, fast, false, d, (f.bits & 1) ? 0x45u : 0x86u};
        checked(s, "frozen path", [&] {
          Pair p(s);
          p.admitted();
          effects(p);
        });
      }
}
void fallback_and_enhanced() {
  std::set<std::pair<bool, unsigned>> seen;
  for (const auto &f : fixtures) {
    if (!seen.emplace(f.japanese, f.start).second)
      continue;
    Scenario s{&f};
    auto reject = [&](const char *label, auto setup, unsigned quota = 64) {
      checked(s, label, [&] {
        Pair p(s);
        p.configure(setup);
        p.advance(quota, false);
      });
    };
    reject("zero quota", [](Machine &) {}, 0);
    reject("short quota", [](Machine &) {}, f.cost.steps - 1);
    reject("decimal", [](Machine &m) {
      m.cpu.status_register |= eb::MainCpu65816::Decimal;
    });
    reject("CPU write observer", [](Machine &m) {
      m.cpu.observe_memory_write = [&m](unsigned a, unsigned v) {
        m.writes.emplace_back(a, v);
      };
    });
#ifdef EB_GAMEPLAY_AUDIT
    reject("bus observer", [](Machine &m) {
      m.bus.observe_bus_access = [&m](bool w, unsigned a, unsigned v) {
        m.accesses.emplace_back(w, a, v);
      };
    });
#endif
    reject("pending hardware event", [](Machine &m) { m.clock_position(530); });
    if (std::string(f.kind) != "valid" && std::string(f.kind) != "shield") {
      reject("unsafe low DP", [](Machine &m) { m.cpu.direct_page = 0x1bff; });
      reject("unsafe high DP", [](Machine &m) { m.cpu.direct_page = 0x1eee; });
    }
    if (std::string(f.kind) == "predicate" ||
        std::string(f.kind) == "advance" || std::string(f.kind) == "valid")
      reject("noncanonical record", [](Machine &m) { ++m.cpu.x_index; });
    // Test both actual timing policies after crossing the entity threshold.
    for (bool fast : {false, true}) {
      Scenario accelerated{&f, fast, true, 0x1e01, 0x45};
      checked(accelerated, "accelerated budget", [&] {
        Pair p(accelerated);
        p.configure([&](Machine &m) { m.prime_budget(accelerated); });
        p.admitted();
        effects(p);
      });
    }
  }
}
void captured_masks() {
  for (bool jp : {false, true})
    for (const char *routine : {"target_battler", "remove_target"}) {
      const Fixture *capture = nullptr;
      const Fixture *combine = nullptr;
      for (const auto &f : fixtures)
        if (f.japanese == jp && std::string(f.routine) == routine &&
            f.mask == 0xa5a50001 && f.bits == 0x5a5afffe) {
          if (std::string(f.kind) == "capture")
            capture = &f;
          if (std::string(f.kind) == "combine")
            combine = &f;
        }
      require(capture && combine, "Missing frozen capture continuation");
      Scenario s{capture};
      checked(s, "captured mask survives global mutation", [&] {
        Pair p(s);
        p.admitted();
        p.configure(
            [&](Machine &m) { m.long_value(mask_address(s), 0x13572468); });
        p.scenario.fixture = combine;
        p.admitted();
        effects(p);
      });
    }
}
void whole_helpers() {
  struct Whole {
    const char *name;
    unsigned us, jp, input;
  };
  constexpr Whole helpers[]{{"all", 0xc26e00, 0xc26d3f, 0},
                            {"allies", 0xc26bfb, 0xc26b3a, 0},
                            {"enemies", 0xc26c82, 0xc26bc1, 0},
                            {"row0", 0xc26d04, 0xc26c43, 0},
                            {"row1", 0xc26d04, 0xc26c43, 1},
                            {"row2", 0xc26d04, 0xc26c43, 2},
                            {"removeNPCs", 0xc26e77, 0xc26db6, 0},
                            {"add", 0xc26fdc, 0xc26f1b, 31},
                            {"remove", 0xc27089, 0xc26fc8, 31},
                            {"contains", 0xc27029, 0xc26f68, 31},
                            {"valid", 0xc4a1f5, 0xc47662, 7},
                            {"shield", 0xc23fea, 0xc23e9e, 42}};
  for (bool jp : {false, true})
    for (bool fast : {false, true})
      for (const auto &call : helpers) {
        const auto fixture =
            std::find_if(std::begin(fixtures), std::end(fixtures),
                         [&](const Fixture &f) { return f.japanese == jp; });
        Scenario s{fixture, fast};
        checked(s, call.name, [&] {
          Pair p(s);
          p.configure([&](Machine &m) {
            for (unsigned i = 0; i < 32; ++i) {
              const unsigned at = record_base(s) + 78 * i;
              m.bus.work_ram[at + 12] = i % 5 ? 1 : 0;
              m.bus.work_ram[at + 14] = i < 8 ? 0 : 1;
              m.bus.work_ram[at + 15] = i % 7 == 0 ? 3 : 0;
              m.bus.work_ram[at + 16] = i & 1;
              m.bus.work_ram[at + 29] = i % 4;
            }
            m.cpu.program_counter = jp ? call.jp : call.us;
            m.cpu.accumulator = call.input;
            m.cpu.direct_page = 0x1e00;
            m.cpu.stack_pointer = 0x1ffc;
            m.cpu.status_register = 0x75;
            m.word(0x1ffd, 0xfeff);
            m.bus.work_ram[0x1fff] = 0xc1;
            m.long_value(mask_address(s), std::string(call.name) == "add"
                                              ? 0x25a50001
                                              : 0xa5a50001);
            // A short helper can otherwise hit both checkpoint entries too
            // close to refresh/scanline events and legitimately never batch.
            // Start the complete call in a real post-refresh vblank window.
            m.long_window();
          });
          unsigned count = 0;
          const auto before_audio = p.native->audio_slices.size();
          while (p.native->cpu.program_counter != 0xc1ff00 ||
                 p.native->cpu.stack_pointer != 0x1fff) {
            require(count < 10000, "Whole original helper failed to return");
            const auto retired = p.native->cpu.advance_gameplay(64);
            require(retired > 0 && retired <= 64,
                    "Whole helper exceeded source quota");
            for (unsigned i = 0; i < retired; ++i)
              p.legacy->cpu.step_instruction();
            p.compare();
            count += retired;
            ++comparisons;
          }
          require(p.native->cpu.direct_page == 0x1e00,
                  "Whole helper did not restore source D frame");
          require(p.native->cpu.native_gameplay_batches() > 0,
                  "Whole helper never exercised native targeting");
          require(p.legacy->cpu.native_gameplay_batches() == 0,
                  "Whole helper Legacy oracle was not independent");
          if (std::string(call.name) == "add")
            require(p.native->value(mask_address(s)) == 0xa5a50001,
                    "Whole add used wrong imported bit");
          if (std::string(call.name) == "remove")
            require(p.native->value(mask_address(s)) == 0x25a50001,
                    "Whole remove used wrong imported bit");
          if (std::string(call.name) == "contains")
            require(p.native->cpu.accumulator == 1,
                    "Whole contains missed high-word bit");
          if (std::string(call.name) == "shield")
            require(p.native->cpu.accumulator == 1,
                    "Whole shield result differs");
          admissions += p.native->cpu.native_gameplay_batches();
          source_steps += count;
          audio_callbacks += p.native->audio_slices.size() - before_audio;
          ++whole_calls;
        });
      }
}
} // namespace
int main() {
  try {
    admission_matrix();
    fallback_and_enhanced();
    captured_masks();
    whole_helpers();
    require(admissions && declines && whole_calls && audio_callbacks,
            "Coverage counters unexpectedly empty");
    std::cout << "Battle targeting native: " << comparisons << " comparisons, "
              << admissions << " batches, " << declines << " fallback checks, "
              << whole_calls << " whole original helper calls, " << source_steps
              << " source instructions, " << audio_callbacks
              << " timestamped APU slices\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
