// Real boot timing probe. Count enabled actor passes at the shared source
// entry, not sprite selections, presentation frames, or guessed CPU costs.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include <array>
#include <iostream>
#include <limits>
#include <map>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
unsigned normalized(unsigned pc) {
    const unsigned bank = pc >> 16;
    return bank != 0x7e && bank != 0x7f && ((bank & 0x40) || (pc & 0x8000)) ? pc | 0xc00000 : pc;
}
struct Fade {
    unsigned caller{}, initial_brightness{}, step{}, delay{};
    std::uint64_t first_frame{}, last_frame{}, passes{}, complete_frames{};
    std::map<unsigned, unsigned> pass_histogram;
};
void run(const eb::GameAssets &assets, unsigned frames, bool native, unsigned timeline_epoch) {
    auto hardware = std::make_unique<eb::SnesBus>(assets.image, assets.version);
    auto &bus = *hardware;
    eb::Spc700AudioCpu apu(bus);
    eb::SnesAudioDsp dsp(apu);
    eb::MainCpu65816 cpu(bus);
    if (native) {
        bus.set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
        bus.enable_native_sprite_runtime(true);
    }
    cpu.reset_from_vector();
    cpu.set_gameplay_timing(true);
    bus.set_presentation_width(522);
    const bool jp = assets.version == eb::GameVersion::JP;
    const unsigned actor_body = jp ? 0xc0944f : 0xc09470;
    const unsigned actor_end = jp ? 0xc094ae : 0xc094cf;
    const unsigned fade_out = jp ? 0xc0886c : 0xc0887a;
    const unsigned attract = jp ? 0xc4ac5c : 0xc4d989;
    const auto word = [&](unsigned at) {
        return unsigned(bus.work_ram.at(at)) | unsigned(bus.work_ram.at(at + 1)) << 8;
    };
    unsigned epoch = 0, pending_caller = 0, pending_return_stack = 0;
    std::map<unsigned, Fade> fades;
    std::uint64_t passes = 0, multiple_pass_frames = 0, active_frames = 0, fading_frames = 0;
    std::map<unsigned, unsigned> all_histogram;
    bool had_actor = false;
    std::uint64_t completed_passes = 0, epoch_start_passes = 0, epoch_start_completed = 0;
    std::uint64_t nmi_ticks = 0, epoch_start_nmi = 0;
    bool nmi_started = false, nmi_traced = false;
    const auto trace = [&](const char *label, unsigned pc) {
        std::cout << "Timeline " << (native ? "native" : "source") << ' ' << label << " pc=" << std::hex << pc
                  << std::dec << " epoch=" << epoch << " frame=" << bus.completed_frames
                  << " line=" << bus.scanline_index() << " clock=" << bus.master_clocks()
                  << " started=" << passes << " completed=" << completed_passes
                  << " epoch_starts=" << passes - epoch_start_passes
                  << " epoch_completions=" << completed_passes - epoch_start_completed
                  << " nmi_ticks=" << nmi_ticks - epoch_start_nmi << " fade=" << unsigned(bus.work_ram[0x28])
                  << ',' << unsigned(bus.work_ram[0x29]) << ',' << unsigned(bus.work_ram[0x2a])
                  << " brightness=" << unsigned(bus.work_ram[0x0d]) << " AXY=" << cpu.accumulator << ','
                  << cpu.x_index << ',' << cpu.y_index << '\n';
    };
    while (bus.completed_frames < frames) {
        const auto frame = bus.completed_frames;
        const auto before_passes = passes;
        const auto before_epoch = epoch;
        const auto before_step = bus.work_ram[0x28];
        bool actor_this_frame = false;
        do {
            if (cpu.is_stopped)
                throw std::runtime_error("CPU stopped in native tick probe");
            const unsigned pc = normalized(cpu.program_counter);
            const bool actor = pc == actor_body;
            const bool trace_active =
                timeline_epoch &&
                (epoch == timeline_epoch || (!epoch && fades.size() + 1 == timeline_epoch && pc == fade_out));
            if (trace_active && (pc == actor_end || pc == 0xc081f9 || pc == fade_out))
                trace(pc == actor_end  ? "completion_before"
                      : pc == 0xc081f9 ? "nmi_before"
                                       : "begin_entry",
                      pc);
            unsigned caller = 0;
            const auto fade_return_stack = std::uint16_t(cpu.stack_pointer + 3);
            if (pc == fade_out) {
                const auto at = std::uint16_t(cpu.stack_pointer + 1);
                caller = word(at) | unsigned(bus.work_ram[std::uint16_t(at + 2)]) << 16;
                caller = normalized(caller);
                if (caller < attract || caller >= attract + 0x200)
                    caller = 0;
            }
            const auto instructions = cpu.instruction_count;
            cpu.advance_gameplay(std::numeric_limits<unsigned>::max());
            if (pc == 0xc081f9 &&
                (instructions != cpu.instruction_count || normalized(cpu.program_counter) == 0xc0821f)) {
                nmi_started = true;
                nmi_traced = timeline_epoch && epoch == timeline_epoch;
            }
            if (nmi_started && normalized(cpu.program_counter) == 0xc0821f) {
                ++nmi_ticks;
                nmi_started = false;
                if (nmi_traced)
                    trace("nmi_after", 0xc0821f);
                nmi_traced = false;
            }
            if (instructions != cpu.instruction_count) {
                if (actor) {
                    ++passes;
                    actor_this_frame = true;
                    if (epoch)
                        ++fades[epoch].passes;
                    if (timeline_epoch && epoch == timeline_epoch)
                        trace("actor_started", pc);
                }
                if (pc == actor_end) {
                    ++completed_passes;
                    if (timeline_epoch && epoch == timeline_epoch)
                        trace("completion_after", pc);
                }
                if (caller) {
                    pending_caller = caller;
                    // Observe the declared far-return boundary, whether source
                    // PHP starts it or the native typed fade begins atomically.
                    pending_return_stack = fade_return_stack;
                }
            }
            if (pending_caller && normalized(cpu.program_counter) == pending_caller + 1 &&
                cpu.stack_pointer == pending_return_stack && bus.work_ram[0x28]) {
                epoch = fades.size() + 1;
                auto &fade = fades[epoch];
                fade.caller = pending_caller;
                fade.first_frame = frame;
                fade.initial_brightness = bus.work_ram[0x0d];
                fade.step = bus.work_ram[0x28];
                fade.delay = bus.work_ram[0x29];
                epoch_start_passes = passes;
                epoch_start_completed = completed_passes;
                epoch_start_nmi = nmi_ticks;
                if (timeline_epoch && epoch == timeline_epoch)
                    trace("begin_return", pending_caller + 1);
                pending_caller = 0;
            }
            if (epoch && bus.work_ram[0x28] == 0) {
                if (timeline_epoch && epoch == timeline_epoch)
                    trace("fade_finished", normalized(cpu.program_counter));
                fades[epoch].last_frame = bus.completed_frames;
                epoch = 0;
            }
        } while (bus.completed_frames == frame);
        dsp.take_stereo_samples();
        had_actor |= actor_this_frame;
        if (had_actor) {
            const unsigned count = passes - before_passes;
            ++all_histogram[count];
            ++active_frames;
            multiple_pass_frames += count > 1;
        }
        if (before_epoch && epoch == before_epoch && before_step && bus.work_ram[0x28]) {
            auto &fade = fades[epoch];
            ++fade.complete_frames;
            const unsigned count = passes - before_passes;
            ++fade.pass_histogram[count];
            ++fading_frames;
            if (count != 1)
                std::cout << "Fade cadence frame=" << frame << " epoch=" << epoch << " passes=" << count
                          << " brightness=" << unsigned(bus.work_ram[0x0d])
                          << " countdown=" << unsigned(bus.work_ram[0x2a]) << '\n';
        }
        if (bus.completed_frames % 1000 == 0)
            std::cout << "frame=" << bus.completed_frames << " actor_passes=" << passes
                      << " fade_epochs=" << fades.size() << '\n'
                      << std::flush;
    }
    bool fade_one_pass = !fades.empty();
    for (const auto &[id, fade] : fades) {
        std::cout << "Fade " << id << " caller=" << std::hex << fade.caller << std::dec
                  << " frames=" << fade.first_frame << '-' << fade.last_frame
                  << " initial=" << fade.initial_brightness << " step=" << fade.step
                  << " delay=" << fade.delay << " passes=" << fade.passes
                  << " full_frames=" << fade.complete_frames << " histogram=";
        for (const auto &[count, occurrences] : fade.pass_histogram) {
            std::cout << count << ':' << occurrences << ',';
            fade_one_pass &= count == 1;
        }
        fade_one_pass &= fade.last_frame > fade.first_frame && fade.complete_frames > 0;
        // These authored attract exits request brightness15, step-1, delay1:
        // the exact source byte countdown takes32 ticks to reach forced blank.
        fade_one_pass &=
            fade.initial_brightness == 15 && fade.step == 255 && fade.delay == 1 && fade.passes == 32;
        std::cout << '\n';
    }
    std::cout << (native ? "Native" : "Source") << " regional=" << (jp ? "JP" : "US")
              << " actor_frames=" << active_frames << " fade_full_frames=" << fading_frames
              << " multiple_pass_frames=" << multiple_pass_frames << " pass_histogram=";
    for (const auto &[count, occurrences] : all_histogram)
        std::cout << count << ':' << occurrences << ',';
    std::cout << '\n';
    if (!had_actor || fades.empty())
        throw std::runtime_error("Timing probe did not reach enabled actor updates and attract fade exits");
    if (native && (!fade_one_pass || multiple_pass_frames))
        throw std::runtime_error("Native actor/fade cadence is not one authored pass per physical frame");
    std::cout << "PASS " << (native ? "native tick contract" : "source timing observation")
              << ": renderer cost does not substitute for logical ticks in this probe\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        if (argc < 2 || argc > 5)
            throw std::invalid_argument(
                "native_sprite_tick_reference pack.ebpak [frames] [--source] [--timeline=N]");
        const auto frames = argc >= 3 ? std::stoul(argv[2]) : 9000;
        bool native = true;
        unsigned timeline_epoch = 0;
        for (int i = 3; i < argc; ++i) {
            const std::string arg = argv[i];
            if (arg == "--source")
                native = false;
            else if (arg.starts_with("--timeline="))
                timeline_epoch = std::stoul(arg.substr(11));
            else
                throw std::invalid_argument("Unknown tick reference option: " + arg);
        }
        run(eb::load_game_assets(argv[1], eb::asset_profiles()), frames, native, timeline_epoch);
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
