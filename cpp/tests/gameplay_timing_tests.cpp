// Exercise the compiled entity dispatcher, script VM and movement callbacks.
// Synthetic scripts make the maximum roster's work deterministic without ROMs.
#include "eb/snes_bus.hpp"
#include "eb/main_cpu_65816.hpp"
#include <iostream>
#include <memory>
#include <stdexcept>
#include "generated_profile.hpp"
#include <vector>

namespace {
void require(bool ok, const char* message) { if (!ok) throw std::runtime_error(message); }
struct Result { std::uint64_t clocks, instructions; std::vector<std::pair<unsigned,unsigned>> writes; };
Result run(eb::GameVersion version, unsigned entities, bool improved, bool pending_upload = false) {
    const bool jp = version == eb::GameVersion::JP;
    const unsigned ram_shift = jp ? 10 : 0, code_shift = jp ? 33 : 0;
    std::vector<std::uint8_t> rom(0x300000);
    auto rom_word = [&](unsigned address, unsigned value) {
        rom[address & 0x3fffff] = value; rom[(address + 1) & 0x3fffff] = value >> 8;
    };
    rom_word(0xc09558 - code_shift+6*2, 0x96c3 - code_shift);
    rom_word(0xc09558 - code_shift+15*2, 0x9b09 - code_shift);
    auto bus = std::make_unique<eb::SnesBus>(rom, version);
    auto word = [&](unsigned address, unsigned value) {
        bus->work_ram[address] = value; bus->work_ram[address+1] = value >> 8;
    };
    word(0xa50 - ram_shift, 0);
    word(0xa5e - ram_shift, 0xa039 - code_shift); // empty draw callback
    // Forty ordinary VM commands followed by one frame of sleep. They clear
    // an optional tick callback but leave each actor's linear movement intact.
    for (unsigned i=0; i<40; ++i) bus->work_ram[0x8000+i] = 0x0f;
    bus->work_ram[0x8028] = 6; bus->work_ram[0x8029] = 1;
    for (unsigned i=0; i<entities; ++i) {
        const unsigned slot = i*2;
        word(0xa9e - ram_shift+slot, i+1==entities ? 0xffff : slot+2);
        word(0xada - ram_shift+slot, slot);
        word(0x125a - ram_shift+slot, 0xffff);
        word(0x13fe - ram_shift+slot, 0x8000);
        word(0x148a - ram_shift+slot, 0x7e);
        word(0x10b6 - ram_shift+slot, 0x8000);
        word(0x121e - ram_shift+slot, 0x9fc8 - code_shift);
        word(0x11a6 - ram_shift+slot, 0xa023 - code_shift);
        word(0xcf6 - ram_shift+slot, 1);
    }
    if(pending_upload) bus->work_ram[eb::source_profile(version).dma_queue.write_index]=8;
    eb::MainCpu65816 cpu(*bus);
    cpu.emulation_mode=false; cpu.status_register=0; cpu.data_bank=0x7e; cpu.direct_page=0x1e00; cpu.stack_pointer=0x1fff;
    const unsigned return_pc = jp ? 0xc0b7f7 : 0xc0b81c;
    require(eb::source_profile(version).gameplay_timing.entity_update_call==return_pc-4 &&
            eb::source_profile(version).gameplay_timing.entity_update_return==return_pc,
            "Generated timing boundaries do not match the compiled main loop");
    cpu.program_counter = return_pc-4;
    cpu.set_gameplay_timing(improved);
    Result result{};
    cpu.observe_memory_write = [&](unsigned address, unsigned value) { result.writes.emplace_back(address,value); };
    while (cpu.program_counter != return_pc) {
        require(cpu.instruction_count < 1'000'000, "Entity update did not return");
        cpu.step_instruction();
    }
    for (unsigned i=0; i<entities; ++i) {
        require(bus->work_ram[0xb8e - ram_shift+i*2]==1, "Movement callback was skipped or duplicated");
        require(bus->work_ram[0xb16 - ram_shift+i*2]==1, "Screen callback missed updated position");
    }
    result.clocks=bus->master_clocks(); result.instructions=cpu.instruction_count;
    std::cout << (jp ? "JP" : "US") << (improved ? " improved" : " original") << " pending_upload=" << pending_upload << " entities=" << entities << " clocks=" << result.clocks
              << " instructions=" << result.instructions << '\n';
    return result;
}
void boundaries(eb::GameVersion version) {
    std::vector<std::uint8_t> rom(0x300000);
    auto a=std::make_unique<eb::SnesBus>(rom,version), b=std::make_unique<eb::SnesBus>(rom,version);
    eb::MainCpu65816 native(*a), improved(*b);
    const auto& timing=eb::source_profile(version).gameplay_timing;
    const bool jp=version==eb::GameVersion::JP;
    for(auto* c:{&native,&improved}) {
        c->emulation_mode=false; c->status_register=0; c->data_bank=0; c->stack_pointer=0x1fff; c->program_counter=timing.entity_update_call;
    }
    improved.set_gameplay_timing(true);
    native.step_instruction(); improved.step_instruction(); // real JSL enters the entity pass
    auto step_clocks=[](eb::MainCpu65816& c, eb::SnesBus& bus) {
        const auto before=bus.master_clocks(); c.step_instruction(); return bus.master_clocks()-before;
    };
    // Consume the ordinary budget through a compiled WRAM read in this scope.
    // Normal passes below this threshold must remain cycle-for-cycle identical.
    for(unsigned i=0;i<6000;++i) {
        native.program_counter=improved.program_counter=jp?0xc09445:0xc09466;
        native.step_instruction(); improved.step_instruction();
    }
    // MULT8 uses two fixed NOPs to wait for the asynchronous multiplier.
    // Speeding those up used to read stale products and corrupt DMA sizes.
    for(auto* c:{&native,&improved}) {
        c->program_counter=jp?0xc08fcc:0xc08fe8; c->accumulator=0x0709;
        for(unsigned i=0;i<6;++i) c->step_instruction();
        require(c->accumulator==63, "Accelerated source MULT8 read a stale hardware result");
    }
    auto same_cost=[](std::uint64_t lhs,std::uint64_t rhs) {
        // The two clocks can encounter the 40-clock WRAM refresh pause on
        // different instructions after the accelerated computation above.
        return lhs==rhs || lhs==rhs+40 || rhs==lhs+40;
    };
    // Execute a compiled hardware poll inside the active scope. Both the
    // ordinary MMIO bank and its mirror must retain native instruction time.
    for(auto bank:{0u,0x80u}) {
        native.data_bank=improved.data_bank=bank;
        native.program_counter=improved.program_counter=jp?0xc0875f:0xc08769; // LDA f:HVBJOY
        require(same_cost(step_clocks(native,*a),step_clocks(improved,*b)), "Hardware polling was accelerated");
    }
    // A compiled indexed write triggers a real 16-byte DMA transfer. DMA and
    // the instruction touching its register must consume their full clocks.
    for(auto* bus:{a.get(),b.get()}) {
        bus->write_byte(0x4300,0); bus->write_byte(0x4301,0x18);
        bus->write_byte(0x4302,0); bus->write_byte(0x4303,0x80); bus->write_byte(0x4304,0x7e);
        bus->write_byte(0x4305,16); bus->write_byte(0x4306,0);
    }
    native.program_counter=improved.program_counter=jp?0xc09af7:0xc09b18;
    native.data_bank=improved.data_bank=0x80; native.x_index=improved.x_index=0x420b;
    native.accumulator=improved.accumulator=1; native.status_register=improved.status_register=eb::MainCpu65816::Accumulator8Bit;
    require(same_cost(step_clocks(native,*a),step_clocks(improved,*b)), "DMA was accelerated");
    native.service_interrupt(true); improved.service_interrupt(true);
    native.program_counter=improved.program_counter=jp?0xc09445:0xc09466;
    require(same_cost(step_clocks(native,*a),step_clocks(improved,*b)), "Interrupt handler was accelerated");
    native.execute_instruction<0x40>(0,1); improved.execute_instruction<0x40>(0,1);
    native.program_counter=improved.program_counter=jp?0xc09445:0xc09466;
    require(step_clocks(improved,*b)<step_clocks(native,*a), "RTI did not resume the entity budget");
    native.program_counter=improved.program_counter=timing.wait_for_next_frame;
    require(same_cost(step_clocks(native,*a),step_clocks(improved,*b)), "Frame wait was accelerated");
    native.program_counter=improved.program_counter=jp?0xc09445:0xc09466;
    const auto normal=step_clocks(native,*a), resumed=step_clocks(improved,*b);
    require(same_cost(normal,resumed), "Frame wait leaked acceleration into later work");
    std::cout<<(jp?"JP":"US")<<" peripheral and wait boundaries passed\n";
}
}
int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            boundaries(version);
            const auto upload_native=run(version,30,false,true);
            const auto upload_improved=run(version,30,true,true);
            require(upload_native.clocks==upload_improved.clocks && upload_native.writes==upload_improved.writes,
                    "Queued graphics transfers did not retain native producer timing");
            for (unsigned count : {1u, 30u}) {
                const auto original=run(version, count, false);
                const auto busy=run(version, count, true);
                require(original.writes==busy.writes && original.instructions==busy.instructions,
                    "Extra compute budget changed ordered writes or game instructions");
                if(count==1) require(original.clocks==busy.clocks, "Ordinary entity work changed timing");
                require(busy.clocks < 1364*224, "Full entity roster misses the video deadline and slows movement");
            }
        }
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
