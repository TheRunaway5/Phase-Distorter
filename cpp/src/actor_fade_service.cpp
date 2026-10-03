#include "eb/actor_fade_service.hpp"
#include "eb/snapshot_archive.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/frame_fade.hpp"
#include "eb/snes_bus.hpp"
#include <algorithm>
#include <array>
#include <stdexcept>

namespace eb {
namespace {
unsigned normalized(unsigned pc) {
    const auto bank = pc >> 16;
    return bank != 0x7e && bank != 0x7f && ((bank & 0x40) || (pc & 0x8000)) ? pc | 0xc00000 : pc;
}
bool actor_producer(unsigned call, bool jp) {
    // Source contracts: MAIN_LOOP; C4D989 attract exits; C0E815/C0E897
    // teleport actor-fade loops; SHOW_TITLE_SCREEN; quick title EF04DC;
    // PLAY_CREDITS; PLAY_CAST_SCENE; DEBUG_Y_BUTTON_MENU.
    // Every listed producer continues through explicit RUN_ACTIONSCRIPT_FRAME
    // or C1004E loops. Town-map/text/map-loading/battle/unknown producers retain
    // their hardware clock, even when called from an actor's outer stack.
    constexpr std::array us{0xc0b801u, 0xc4dab0u, 0xc0e88eu, 0xc0e8b5u, 0xc0e952u,
                            0xc3f510u, 0xef051eu, 0xc4f570u, 0xc4ed22u, 0xefe6b3u};
    constexpr std::array jpn{0xc0b7e7u, 0xc4ad90u, 0xc0e853u, 0xc0e87au, 0xc0e91cu,
                             0xc0ee66u, 0xc0eeafu, 0xc4c5b0u, 0xc4bf7du, 0xefcfd6u};
    return jp ? std::find(jpn.begin(), jpn.end(), call) != jpn.end()
              : std::find(us.begin(), us.end(), call) != us.end();
}
void advance(SnesBus &bus) {
    const auto &ram = bus.work_ram;
    const auto state = native::advance_frame_fade({ram[0x0d], ram[0x28], ram[0x29], ram[0x2a], ram[0x1f]});
    bus.work_ram[0x0d] = state.brightness;
    bus.work_ram[0x28] = state.step;
    bus.work_ram[0x2a] = state.remaining;
    bus.work_ram[0x1f] = state.hdma;
}
} // namespace

bool ActorFadeService::try_execute(MainCpu65816 &cpu, SnesBus &bus) {
    const auto pc = normalized(cpu.program_counter);
    const bool jp = bus.game_version() == GameVersion::JP;
    const unsigned body = jp ? 0xc0944f : 0xc09470;
    const unsigned completed = jp ? 0xc094ae : 0xc094cf;
    if (pc == body) {
        actor_entry_stack_ = cpu.stack_pointer;
    } else if (pc == completed && actor_entry_stack_ == cpu.stack_pointer) {
        actor_entry_stack_.reset();
        if (owner_ == FadeClockOwner::ActorPass && bus.work_ram[0x28]) {
            advance(bus);
            ++actor_fade_ticks_;
            last_actor_fade_frame_ = bus.completed_frames;
        }
    } else if (actor_entry_stack_ && cpu.stack_pointer > *actor_entry_stack_) {
        // Nonlocal returns abandon an unfinished pass; never invent a tick.
        actor_entry_stack_.reset();
    }
    if (pc == (jp ? 0xc0944au : 0xc0946bu)) {
        // A controller that actually disables its actor updates cannot drive an
        // actor clock. Relinquish to the standalone clock without crediting an
        // unexecuted pass; this is an explicit guard transition, not a timeout.
        owner_ = FadeClockOwner::HardwareFrame;
    }
    if (pc == (jp ? 0xc087c4u : 0xc087ceu) || pc == (jp ? 0xc0880au : 0xc08814u)) {
        // Mosaic controllers cancel the asynchronous fade and own their own
        // synchronous wait loop. Neither that loop nor its NMI advances an
        // outstanding actor-owned asynchronous countdown.
        owner_ = FadeClockOwner::HardwareFrame;
        script_fade_stack_.reset();
        last_actor_fade_frame_.reset();
    }
    if (pc == (jp ? 0xc09f96u : 0xc09fb7u) || pc == (jp ? 0xc09fa3u : 0xc09fc4u)) {
        // Script helpers tail-jump; the inherited return address names the VM,
        // so bind at the exact authored tail operation instead of guessing.
        script_fade_stack_ = cpu.stack_pointer;
    }
    const bool fade_in = pc == (jp ? 0xc0885eu : 0xc0886cu);
    const bool fade_out = pc == (jp ? 0xc0886cu : 0xc0887au);
    if (fade_in || fade_out) {
        const unsigned at = std::uint16_t(cpu.stack_pointer + 1);
        const auto &ram = bus.work_ram;
        const unsigned return_pc = unsigned(ram.at(at)) | unsigned(ram.at(std::uint16_t(at + 1))) << 8 |
                                   unsigned(ram.at(std::uint16_t(at + 2))) << 16;
        const unsigned call = normalized((return_pc & 0xff0000) | std::uint16_t(return_pc - 3));
        const bool script = script_fade_stack_ == cpu.stack_pointer;
        script_fade_stack_.reset();
        last_actor_fade_frame_.reset();
        owner_ =
            script || actor_producer(call, jp) ? FadeClockOwner::ActorPass : FadeClockOwner::HardwareFrame;
        if (owner_ == FadeClockOwner::HardwareFrame)
            return false;
        // PHP/SEP/PLP preserves P and A's hidden high byte, but SEP clears the
        // high bytes of BOTH index registers even when PLP restores 16-bit X.
        if (cpu.emulation_mode || (cpu.data_bank != 0x7e && (cpu.data_bank & 0x40)))
            throw std::runtime_error("Actor fade start requires native mode and the authored global bank");
        const auto step = std::uint8_t(fade_out ? -std::uint8_t(cpu.accumulator) : cpu.accumulator);
        bus.work_ram[0x28] = step;
        bus.work_ram[0x29] = bus.work_ram[0x2a] = std::uint8_t(cpu.x_index);
        cpu.accumulator = (cpu.accumulator & 0xff00) | step;
        cpu.x_index &= 0xff;
        cpu.y_index &= 0xff;
        cpu.execute_instruction<0x6b>(0, 1); // source far-return transport only
        return true;
    }
    if (pc == 0xc081f9 &&
        (owner_ == FadeClockOwner::ActorPass || last_actor_fade_frame_ == bus.completed_frames)) {
        // NMI still publishes INIDISP and processes audio, OAM, palettes and
        // queued transfers. Only the asynchronous countdown is actor-owned.
        cpu.program_counter = (cpu.program_counter & 0xff0000) | 0x821f;
        return true;
    }
    return false;
}
void ActorFadeService::snapshot_io(SnapshotArchive &archive) {
    archive(owner_, actor_entry_stack_, script_fade_stack_, last_actor_fade_frame_, actor_fade_ticks_);
    if (archive.loading() && owner_ != FadeClockOwner::HardwareFrame && owner_ != FadeClockOwner::ActorPass)
        throw std::runtime_error("Invalid snapshot actor fade clock");
}
} // namespace eb
