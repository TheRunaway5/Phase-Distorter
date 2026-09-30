#pragma once
#include <cstdint>
#include <span>

namespace eb { class MainCpu65816; }
namespace eb::game::runtime {
// Source clock slices are separate from native algorithm decisions. Direct
// page penalties and ROM/WRAM wait states are applied by the common scheduler.
struct NativeTimingSlice {
    unsigned cycles, fetched_bytes, wram_bytes;
    bool direct_page;
};
// Private bridge between named gameplay algorithms and the source machine.
// Admission is effect-free; a declined chunk leaves exact stepping available.
class NativeGameplay {
  public:
    static unsigned try_advance(MainCpu65816& cpu, unsigned maximum_steps);
  private:
    static unsigned try_npc_collision(MainCpu65816& cpu, unsigned maximum_steps);
    static unsigned try_dialogue_registers(MainCpu65816& cpu, unsigned maximum_steps);
    static unsigned try_credits_state(MainCpu65816& cpu, unsigned maximum_steps);
    static unsigned try_battle_targeting(MainCpu65816& cpu, unsigned maximum_steps);
    static bool admit(MainCpu65816& cpu, std::span<const NativeTimingSlice> timing, unsigned maximum_steps);
    // A successful batch keeps D and timing-policy inputs stable, and must not
    // write the DMA queue indices. Admission precedes every architectural edit.
    static void retire(MainCpu65816& cpu, std::span<const NativeTimingSlice> timing, std::uint32_t code_address);
};
}
