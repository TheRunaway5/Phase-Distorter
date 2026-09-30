#include "eb/actor_draw_order_service.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/actor_draw_order.hpp"
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"
#include <array>
#include <stdexcept>

namespace eb {
bool try_native_actor_draw_order(MainCpu65816 &cpu, SnesBus &bus) {
    unsigned pc = cpu.program_counter;
    const unsigned bank = pc >> 16;
    if (bank != 0x7e && bank != 0x7f && ((bank & 0x40) || (pc & 0x8000)))
        pc |= 0xc00000;
    const bool jp = cpu.game_version == GameVersion::JP;
    if (pc != (jp ? 0xc0db4au : 0xc0db82u))
        return false;
    if (cpu.emulation_mode || cpu.data_bank != 0x7e ||
        (cpu.status_register & (MainCpu65816::Accumulator8Bit | MainCpu65816::Index8Bit)) ||
        cpu.direct_page > 0x1fe8 || cpu.game_version != bus.game_version())
        throw std::runtime_error("Native depth selection requires its actor draw caller");
    const auto word = [&](unsigned at) {
        return unsigned(bus.work_ram.at(at)) | unsigned(bus.work_ram.at(at + 1)) << 8;
    };
    const auto store = [&](unsigned offset, unsigned value) {
        cpu.write_byte(0x7e0000 | (cpu.direct_page + offset), value);
        cpu.write_byte(0x7e0000 | (cpu.direct_page + offset + 1), value >> 8);
    };
    const auto &profile = source_profile(cpu.game_version);
    const unsigned links = jp ? 0x2c0c : 0x280c;
    const unsigned first = word(cpu.direct_page + 0x16);
    std::array<native::DepthCandidate, 30> actors;
    unsigned current = first;
    for (unsigned visited = 0; current != 0xffff; ++visited) {
        if (current >= actors.size() || visited >= actors.size())
            throw std::runtime_error("Invalid or cyclic current actor draw list");
        const unsigned next = word(links + current * 2);
        actors[current] = {std::uint16_t(word(profile.wram_entity_world_coordinates.y + current * 2)),
                           next == 0xffff ? std::nullopt : std::optional<std::size_t>(next)};
        current = next;
    }
    const auto selected = native::select_actor_depth(actors, first);
    store(0x10, selected.actor);
    store(0x0e, selected.depth);
    store(0x04, selected.previous.value_or(0xffff));
    store(0x02, selected.last);
    cpu.accumulator = selected.actor;
    cpu.x_index = selected.last * 2;
    cpu.y_index = 0xffff;
    // Final list-index ASL clears C; the caller's LDA selected supplies N/Z.
    // The scan never writes V, decimal mode, or interrupt/width flags.
    cpu.status_register &= ~(MainCpu65816::Carry | MainCpu65816::Negative | MainCpu65816::Zero);
    if (!selected.actor)
        cpu.status_register |= MainCpu65816::Zero;
    // Preserve the original callback transport and return site. No callback is
    // run here, no pass is dropped, and removed search work costs no fake clocks.
    cpu.program_counter = (cpu.program_counter & 0xff0000) | (jp ? 0xdb85 : 0xdbbd);
    return true;
}
} // namespace eb
