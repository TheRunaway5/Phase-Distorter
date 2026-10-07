// Asset-backed replay of the actual prayer cutscene, return, and damage wait.
#include "eb/asset_store.hpp"
#include "eb/game_debug.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snapshot_archive.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <memory>
#include <vector>
struct Machine {
  eb::SnesBus bus;
  eb::Spc700AudioCpu apu;
  eb::SnesAudioDsp dsp;
  eb::MainCpu65816 cpu;
  eb::GameDebug debug;
  std::uint64_t steps{};
  Machine(const eb::GameAssets &a)
      : bus(a.image, a.version, true), apu(bus), dsp(apu), cpu(bus),
        debug(bus, cpu) {}
  void load(const std::vector<std::uint8_t> &state) {
    eb::SnapshotArchive file(state);
    std::array<std::uint8_t, 8> magic{};
    std::uint32_t format;
    eb::GameVersion v;
    std::uint64_t content, checksum;
    std::vector<std::uint8_t> p;
    file(magic, format, v, content, checksum);
    file.blob(p);
    file.finish();
    if (magic != std::array<std::uint8_t, 8>{'P', 'D', 'S', 'N', 'A', 'P', '0',
                                             '1'} ||
        format < 1 || format > 8 || v != bus.game_version() ||
        content != eb::snapshot_checksum(bus.cartridge_image()) ||
        checksum != eb::snapshot_checksum(p))
      throw std::runtime_error("Invalid prayer reference snapshot");
    eb::SnapshotArchive machine(p, format);
    machine(bus, apu, dsp, cpu, debug, steps);
    machine.finish();
  }
  unsigned word(unsigned a) {
    return bus.work_ram[a] | (unsigned(bus.work_ram[a + 1]) << 8);
  }
};
int main(int argc, char **argv) {
  try {
    if (argc != 3 && argc != 4)
      throw std::runtime_error(
          "Usage: prayer_return_reference ASSETS PRE_PRAYER_SNAPSHOT [WIDTH]");
    auto assets = eb::load_game_assets(argv[1], eb::asset_profiles());
    auto m = std::make_unique<Machine>(assets);
    std::ifstream in(argv[2], std::ios::binary);
    std::vector<std::uint8_t> state((std::istreambuf_iterator<char>(in)), {});
    m->load(state);
    const bool jp = assets.version == eb::GameVersion::JP;
    const unsigned resume = jp ? 0xc2c383 : 0xc2c3c9,
                   tick = jp ? 0xc432ea : 0xc43568;
    const unsigned phase_at = jp ? 0xab7c : 0xa97a;
    const unsigned initial_phase = m->word(phase_at);
    const unsigned width = argc == 4 ? std::stoul(argv[3]) : 256;
    m->bus.set_presentation_width(width);
    unsigned radius = 0, aperture_frames = 0, left_visible = 0,
             right_visible = 0;
    m->bus.on_presentation_frame = [&](auto pixels, unsigned columns, auto) {
      const auto regs = m->bus.ppu_registers();
      if (width == 256 || radius < 160 || regs[7] != 0x39 || regs[8] != 0x59 ||
          !(regs[0x2e] & 0x13) || !(regs[0x23] & 2) || (regs[0] & 0x80))
        return;
      ++aperture_frames;
      unsigned left = 0, right = 0;
      const unsigned margin = (columns - 256) / 2;
      for (unsigned y = 0; y < 224; ++y)
        for (unsigned x = 0; x < columns; ++x)
          if (pixels[y * columns + x] != 0xff000000) {
            left += x < margin;
            right += x >= margin + 256;
          }
      left_visible = std::max(left_visible, left);
      right_visible = std::max(right_visible, right);
    };
    bool returned = false;
    unsigned observed = 0, gap = 0, longest = 0, ticks = 0;
    unsigned last = 0;
    for (unsigned i = 0; i < 6000 && observed < 600; ++i) {
      m->bus.set_buttons(i % 30 < 5 ? 0x80 : 0);
      auto frame = m->bus.completed_frames;
      do {
        auto pc = m->cpu.program_counter | 0xc00000;
        if (pc == (jp ? 0xc0b128u : 0xc0b149u))
          radius = m->cpu.y_index;
        if (pc == resume && !returned) {
          returned = true;
          last = unsigned(m->bus.completed_frames);
        }
        if (returned && pc == tick) {
          gap = unsigned(m->bus.completed_frames) - last;
          longest = std::max(longest, gap);
          last = unsigned(m->bus.completed_frames);
          ++ticks;
        }
        m->debug.before_step();
        m->cpu.step_instruction();
        ++m->steps;
      } while (m->bus.completed_frames == frame);
      (void)m->dsp.take_stereo_samples();
      if (returned)
        ++observed;
    }
    if (width > 256 &&
        (aperture_frames < 10 || left_visible < 100 || right_visible < 100))
      throw std::runtime_error(
          "Prayer aperture cropped: width=" + std::to_string(width) +
          " frames=" + std::to_string(aperture_frames) +
          " left=" + std::to_string(left_visible) +
          " right=" + std::to_string(right_visible));
    if (!returned || observed != 600 || longest > 12 || ticks < 500 ||
        m->word(phase_at) <= initial_phase)
      throw std::runtime_error(
          "Prayer return froze: frames=" + std::to_string(observed) +
          " ticks=" + std::to_string(ticks) +
          " maximum_tick_gap=" + std::to_string(longest));
    std::cout << assets.title << ": prayer return PASS frames=" << observed
              << " battle_ticks=" << ticks << " maximum_tick_gap=" << longest
              << " phase=" << initial_phase << "->" << m->word(phase_at)
              << " width=" << width << " aperture_frames=" << aperture_frames
              << " side_pixels=" << left_visible << ',' << right_visible
              << "\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << "\n";
    return 1;
  }
}
