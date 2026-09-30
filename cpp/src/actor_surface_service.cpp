#include "eb/actor_surface_service.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"
#include <stdexcept>

namespace eb {
ActorSurfaceService::ActorSurfaceService(std::span<const std::uint8_t> assets, GameVersion version)
    : version_(version), collision_(assets, native::world_collision_layout(version)) {}

bool ActorSurfaceService::try_execute(MainCpu65816 &cpu, SnesBus &bus) const {
    unsigned pc = cpu.program_counter;
    const unsigned bank = pc >> 16;
    if (bank != 0x7e && bank != 0x7f && ((bank & 0x40) || (pc & 0x8000)))
        pc |= 0xc00000;
    const bool jp = version_ == GameVersion::JP;
    if (pc != (jp ? 0xc0c7bdu : 0xc0c7dbu))
        return false;
    if (cpu.game_version != version_ || bus.game_version() != version_)
        throw std::invalid_argument("Native actor surface query region mismatch");
    if (cpu.emulation_mode || cpu.data_bank != 0x7e || (cpu.status_register & MainCpu65816::Decimal))
        throw std::runtime_error("Native actor surface query requires the authored binary actor context");
    // The original C workspace descends sixty bytes from D across the nested
    // query helpers. Outside mirrored WRAM it is not a valid actor invocation.
    if (cpu.direct_page < 60 || cpu.direct_page > 0x2000)
        throw std::runtime_error("Native actor surface query requires a valid actor workspace");
    const auto word = [&](unsigned at) {
        return unsigned(bus.work_ram.at(at)) | unsigned(bus.work_ram.at(at + 1)) << 8;
    };
    const auto store = [&](unsigned at, unsigned value) {
        cpu.write_byte(0x7e0000 | at, value);
        cpu.write_byte(0x7e0000 | (at + 1), value >> 8);
    };
    const auto &profile = source_profile(version_);
    const unsigned actor = word(jp ? 0x1a38 : 0x1a42);
    if (actor >= 30)
        throw std::out_of_range("Native actor surface query has an invalid logical actor");
    const unsigned slot = actor * 2;
    const unsigned shape = word((jp ? 0x2f6c : 0x2b6e) + slot);
    const native::CollisionPoint position{
        std::uint16_t(word(profile.wram_entity_world_coordinates.x + slot)),
        std::uint16_t(word(profile.wram_entity_world_coordinates.y + slot))};
    const auto origin = collision_.origin(position, shape);
    const auto flags = collision_.vertical_surfaces(
        [&](native::CollisionCell cell) {
            return bus.work_ram[0xe000 + (unsigned(cell.y) & 63) * 64 + (unsigned(cell.x) & 63)];
        },
        position, shape);
    const unsigned temporary_flags = jp ? 0x612a : 0x5da4;
    store(temporary_flags + 8, origin.x);
    store(temporary_flags + 10, origin.y);
    store(temporary_flags, flags);
    store(profile.wram_entity_surface_flags + slot, flags);
    // Source's final right-edge accumulator stays in Y, and the caller reloads
    // its byte slot into X. REP widens A/X and the bounded loop's last CMP sets
    // carry. Positive-height paths finish with masked cell-address arithmetic;
    // zero-height paths instead retain V from the last topY+7 rounding sum.
    // The final PLD supplies N/Z from the restored caller direct page.
    cpu.accumulator = cpu.y_index = flags;
    cpu.x_index = slot;
    cpu.status_register &= ~(MainCpu65816::Accumulator8Bit | MainCpu65816::Index8Bit |
                             MainCpu65816::Overflow | MainCpu65816::Negative | MainCpu65816::Zero);
    cpu.status_register |= MainCpu65816::Carry;
    if (!collision_.shape(shape).height_cells && origin.y >= 0x7ff9 && origin.y <= 0x7fff)
        cpu.status_register |= MainCpu65816::Overflow;
    if (!cpu.direct_page)
        cpu.status_register |= MainCpu65816::Zero;
    if (cpu.direct_page & 0x8000)
        cpu.status_register |= MainCpu65816::Negative;
    cpu.execute_instruction<0x6b>(0, 1);
    return true;
}
} // namespace eb
