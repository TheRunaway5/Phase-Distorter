#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
void check(bool condition, const char *message) {
    if (!condition)
        throw std::runtime_error(message);
}
void run(const eb::GameAssets &assets) {
    auto original = std::make_unique<eb::SnesBus>(assets.image, assets.version);
    const unsigned body = assets.version == eb::GameVersion::JP ? 0xc0944f : 0xc09470;
    check(!original->wait_for_native_actor_tick(body) && original->master_clocks() == 0,
          "Legacy mode changed actor timing");
    original->enable_native_sprite_runtime(true);
    check(original->logical_clock_policy() == eb::LogicalClockPolicy::SourceTiming &&
              !original->wait_for_native_actor_tick(body) && original->native_actor_tick_count() == 0,
          "Native resource ownership implicitly selected a different clock");
    original->enable_native_sprite_runtime(false);
    original->set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
    check(!original->wait_for_native_actor_tick(body) && original->native_actor_tick_count() == 1,
          "First actor-clock tick was not admitted with original sprite resources");
    original->enable_native_sprite_runtime(true);
    check(original->native_actor_tick_count() == 1 &&
              original->logical_clock_policy() == eb::LogicalClockPolicy::ActorFrames,
          "Enabling resources reset an already selected clock");
    original->enable_native_sprite_runtime(false);
    check(original->native_actor_tick_count() == 1 &&
              original->logical_clock_policy() == eb::LogicalClockPolicy::ActorFrames,
          "Disabling resources reset an independent logical clock");
    bool invalid = false;
    try { original->set_logical_clock_policy(static_cast<eb::LogicalClockPolicy>(99)); }
    catch (const std::invalid_argument &) { invalid = true; }
    check(invalid && original->native_actor_tick_count() == 1 &&
              original->logical_clock_policy() == eb::LogicalClockPolicy::ActorFrames,
          "Invalid policy changed the existing clock transaction");
    auto copy = std::make_unique<eb::SnesBus>(*original);
    auto reconfigured = std::make_unique<eb::SnesBus>(*original);
    reconfigured->set_logical_clock_policy(eb::LogicalClockPolicy::SourceTiming);
    check(reconfigured->native_actor_tick_count() == 0 &&
              !reconfigured->wait_for_native_actor_tick(body) && original->native_actor_tick_count() == 1,
          "Startup clock reconfiguration changed a copied owner or retained stale admission");
    check(!original->wait_for_native_actor_tick(body + 1) && original->master_clocks() == 0,
          "Non-boundary instruction changed actor clock");
    unsigned audio_clocks = 0, frames = 0;
    original->advance_audio_master_clocks = [&](unsigned elapsed) { audio_clocks += elapsed; };
    original->on_presentation_frame = [&](auto, auto, auto) { ++frames; };
    eb::MainCpu65816 cpu(*original);
    cpu.emulation_mode = false;
    cpu.program_counter = body & ~0x400000;
    cpu.accumulator = 0x1234;
    cpu.x_index = 0x5678;
    cpu.y_index = 0x9abc;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1ffc;
    cpu.data_bank = 0x7e;
    cpu.status_register = eb::MainCpu65816::Carry;
    const auto registers = cpu.describe_registers();
    cpu.step_instruction();
    check(cpu.describe_registers() == registers && cpu.instruction_count == 0 && cpu.cycle_count == 0 &&
              original->master_clocks() > 0,
          "Queued native tick altered CPU state or manufactured instruction cycles");
    original->write_byte(0x004200, 0x80);
    unsigned waits = 0;
    while (original->wait_for_native_actor_tick(body & ~0x400000)) {
        ++waits;
        check(waits < 10000, "Tick admission did not progress to the next frame");
        check(original->native_actor_tick_count() == 1, "Waiting consumed an extra authored tick");
    }
    check(original->completed_frames == 1 && original->native_actor_tick_count() == 2 && waits > 1,
          "Early pass was not queued until exactly the next frame");
    check(original->master_clocks() == audio_clocks && frames == 1,
          "Waiting failed to advance hardware/audio/presentation exactly once");
    check(original->native_actor_wait_clocks() == original->master_clocks(),
          "Scheduler wait clocks did not account for actual elapsed time");
    check(original->take_nmi(), "Native actor wait consumed or missed the pending NMI");
    bool rejected = false;
    try { original->set_logical_clock_policy(eb::LogicalClockPolicy::SourceTiming); }
    catch (const std::logic_error &) { rejected = true; }
    check(rejected && original->logical_clock_policy() == eb::LogicalClockPolicy::ActorFrames &&
              original->native_actor_tick_count() == 2,
          "Live policy change was accepted or partially reset the clock");
    original->set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
    check(original->native_actor_tick_count() == 2, "Idempotent live policy selection reset clock state");
    check(copy->completed_frames == 0 && copy->master_clocks() == 0 && copy->native_actor_tick_count() == 1,
          "Native tick state leaked into an independent bus snapshot");
    check(copy->wait_for_native_actor_tick(body) && copy->native_actor_tick_count() == 1,
          "Bus copy lost its already-consumed actor tick");
    // Execute the real regional NMI handler during the admission wait, then
    // return to the same actor body. Only actual handler/body instructions may
    // retire, and interrupt stack/register preservation must remain intact.
    auto interrupted = std::make_unique<eb::SnesBus>(assets.image, assets.version);
    interrupted->enable_native_sprite_runtime(true);
    interrupted->set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
    const auto first = eb::source_profile(assets.version).wram_first_entity;
    interrupted->work_ram[first] = interrupted->work_ram[first + 1] = 0xff;
    check(!interrupted->wait_for_native_actor_tick(body), "NMI fixture failed initial admission");
    eb::MainCpu65816 resumed(*interrupted);
    resumed.emulation_mode = false;
    resumed.program_counter = body & ~0x400000;
    resumed.accumulator = 0x1234;
    resumed.x_index = 0x5678;
    resumed.y_index = 0x9abc;
    resumed.direct_page = 0x1e00;
    resumed.stack_pointer = 0x1ffc;
    resumed.data_bank = 0x7e;
    resumed.status_register = eb::MainCpu65816::Carry;
    interrupted->write_byte(0x004200, 0x80);
    bool nmi_seen = false;
    for (unsigned steps = 0; interrupted->native_actor_tick_count() < 2; ++steps) {
        check(steps < 100000, "Actual NMI did not return to the queued actor pass");
        resumed.step_instruction();
        nmi_seen |= resumed.timing_snapshot().interrupt_nesting_depth != 0;
    }
    check(nmi_seen && resumed.timing_snapshot().interrupt_nesting_depth == 0 &&
              resumed.program_counter == (body & ~0x400000) + 2 && resumed.accumulator == 0x1234 &&
              resumed.x_index == 0x5678 && resumed.y_index == 0x9abc && resumed.direct_page == 0x1e00 &&
              resumed.stack_pointer == 0x1ffc && resumed.data_bank == 0x7e &&
              resumed.status_register == eb::MainCpu65816::Carry && resumed.instruction_count > 0,
          "Native admission did not resume its actor body intact after actual NMI service");
    // The same fade producer must be intercepted without any native graphics
    // owner. Execute its real JSL/entry through the CPU dispatcher, then finish
    // one explicitly admitted actor pass and verify the shared logical clock.
    auto source_graphics = std::make_unique<eb::SnesBus>(assets.image, assets.version);
    source_graphics->set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
    eb::MainCpu65816 clock_cpu(*source_graphics);
    const bool jp = assets.version == eb::GameVersion::JP;
    clock_cpu.emulation_mode = false; clock_cpu.status_register = 0;
    clock_cpu.stack_pointer = 0x1fff; clock_cpu.direct_page = 0x1e00; clock_cpu.data_bank = 0x7e;
    clock_cpu.accumulator = 1; clock_cpu.x_index = 0;
    const unsigned producer = jp ? 0xc0b7e7 : 0xc0b801;
    clock_cpu.program_counter = producer;
    clock_cpu.execute_instruction<0x22>(jp ? 0xc0885e : 0xc0886c, 4);
    clock_cpu.step_instruction();
    check(!source_graphics->native_sprite_runtime() && !source_graphics->native_sprite_effects() &&
              clock_cpu.program_counter == producer + 4 &&
              source_graphics->native_actor_fades().owner() == eb::FadeClockOwner::ActorPass &&
              source_graphics->work_ram[0x28] == 1,
          "Original graphics path did not execute the independent actor fade service");
    check(!source_graphics->wait_for_native_actor_tick(body), "Source-graphics fade pass was not admitted");
    clock_cpu.program_counter = body;
    source_graphics->try_execute_clock_operation(clock_cpu);
    auto fade_copy = std::make_unique<eb::SnesBus>(*source_graphics);
    clock_cpu.program_counter = jp ? 0xc094ae : 0xc094cf;
    source_graphics->try_execute_clock_operation(clock_cpu);
    check(source_graphics->native_actor_fades().actor_fade_ticks() == 1 &&
              source_graphics->work_ram[0x0d] == 1 &&
              fade_copy->native_actor_fades().actor_fade_ticks() == 0 && fade_copy->work_ram[0x0d] == 0,
          "Actor fade completion required native graphics or changed a copied clock");
    std::cout << "PASS native actor admission " << (assets.version == eb::GameVersion::JP ? "JP" : "US")
              << ": orthogonal graphics/clock policies, transactional startup, live rejection, queued pass, "
                 "ROM alias, audio/frame progress, actual NMI return, independent admission/fade copies\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::invalid_argument("native_actor_tick_tests pack.ebpak [pack.ebpak]");
        for (int i = 1; i < argc; ++i)
            run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
