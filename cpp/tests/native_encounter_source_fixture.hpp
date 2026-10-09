#pragma once
// Optional reference-only original execution. No callee completion interception.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "native_original_object_instructions.hpp"
#include <functional>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>
#include <optional>
namespace encounter_reference {
class Source {
public:
  std::unique_ptr<eb::SnesBus> bus;
  eb::Spc700AudioCpu audio;
  eb::SnesAudioDsp dsp;
  eb::MainCpu65816 cpu;
  bool jp;
  unsigned nmis{}, polls{}, glyphs{}, music{};
  std::optional<std::uint16_t> fixed_buttons;
  // Opt in only for the original object-drawing oracles. Other existing
  // fixtures retain the inherited translated presentation policy.
  bool original_object_anchor_comparisons{};
  eb::native_reference::OriginalObjectInstructions::Reaches original_object_instruction_reaches{};
  std::function<void(Source&)> observer;
  std::vector<unsigned> music_requests, sound_requests;
  std::vector<std::array<std::uint16_t,2>> raw_inputs;
  Source(const eb::GameAssets &a)
      : bus(std::make_unique<eb::SnesBus>(a.image, a.version)), audio(*bus),
        dsp(audio), cpu(*bus), jp(a.version == eb::GameVersion::JP) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    bus->work_ram[0xd] = 0x80;
    bus->work_ram[0x2e] = 1;
    bus->write_byte(0x2100, 0x80);
  }
  unsigned word(unsigned a) const {return bus->work_ram.at(a)|unsigned(bus->work_ram.at(a+1))<<8;}
  void put(unsigned a, unsigned v) {
    bus->work_ram.at(a) = v;
    bus->work_ram.at(a + 1) = v >> 8;
  }
  void step() {
    if (observer) observer(*this);
    if(cpu.program_counter==(jp?0xc4cf5cu:0xc4fbbdu))music_requests.push_back(cpu.accumulator);
    if (cpu.program_counter == 0xc08170)
      ++nmis;
    if (cpu.program_counter == 0xc08496) {
      ++polls;
      std::array<std::uint16_t,2> raw{};
      for(unsigned pad=0;pad<2;++pad)raw[pad]=bus->read_byte(0x4218+pad*2)|unsigned(bus->read_byte(0x4219+pad*2))<<8;
      raw_inputs.push_back(raw);
    }
    if(cpu.program_counter==(jp?0xc0abbfu:0xc0abe0u))sound_requests.push_back(cpu.accumulator);
    if (cpu.program_counter == (jp ? 0xc111ecu : 0xc10cb6u))
      ++glyphs;
    bus->set_buttons(fixed_buttons.value_or((bus->completed_frames & 2) ? 0x80 : 0));
    if(original_object_anchor_comparisons)
      eb::native_reference::OriginalObjectInstructions::step(cpu,*bus,jp,original_object_instruction_reaches);
    else cpu.step_instruction();
    if ((cpu.instruction_count & 0xffff) == 0)
      dsp.take_stereo_samples();
  }
  void call(unsigned target, unsigned a = 0, unsigned x = 0, unsigned y = 0) {
    cpu.program_counter = (target & 0xff0000) | 0xff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    unsigned end = cpu.program_counter + 4, stack = cpu.stack_pointer;
    cpu.execute_instruction<0x22>(target, 4);
    for (unsigned n = 0; n < 100000000; ++n) {
      if (cpu.program_counter == end && cpu.stack_pointer == stack)
        return;
      step();
    }
    throw std::runtime_error("call did not finish " + std::to_string(target) +
                             " " + cpu.describe_registers() +
                             " audio=" + audio.describe_registers());
  }
  void initialize() {
    call(0xc08522);
    call(0xc200d9);
    call(jp ? 0xc43be8 : 0xc43f53);
    call(jp ? 0xc4cef7 : 0xc4fb58);

    const unsigned game = jp ? 0x9aa9 : 0x97f5, party = jp ? 0x9c7f : 0x99ce,
                   delta = jp ? 3 : 0, cd = jp ? 1 : 0;
    bus->work_ram[game + 122 - delta] = 1;
    bus->work_ram[game + 150 - delta] = 1;
    bus->work_ram[game + 174 - delta] = 1;
    bus->work_ram[game + 175 - delta] = 1;
    bus->work_ram[game + 193 - delta] = 1;
    bus->work_ram[game + 472 - delta] = 1;
    for (unsigned i = 0; i < (jp ? 4u : 5u); ++i)
      bus->work_ram[party + i] = !jp && i==4 ? 0 : (jp ? 0x41 : 0x71) + i;
    bus->work_ram[party + 5 - cd] = 10;
    put(party + 10 - cd, 99);
    put(party + 12 - cd, 40);
    for (unsigned i = 21; i < 35; ++i)
      bus->work_ram[party + i - cd] = 20;
    put(party + 69 - cd, 99);
    put(party + 71 - cd, 99);
    put(party + 75 - cd, 40);
    put(party + 77 - cd, 40);
    put(jp ? 0xa56 : 0xa60, 1); // Explicit recursive-action suppression caller input.
    put(jp ? 0x5148 : 0x4dc2, 1);
    put(jp ? 0x4e12 : 0x4a8c, 1);
    put(jp ? 0xa18c : 0x9f8a, 1);
    unsigned group_list=0;for(unsigned byte=0;byte<3;++byte)group_list|=unsigned(bus->read_byte(0xd0c60d+8+byte))<<(8*byte);
    const unsigned first=bus->read_byte(group_list+1)|unsigned(bus->read_byte(group_list+2))<<8;
    put(jp ? 0xa18e : 0x9f8c, first);
    put(game + 148 - delta, 24);
    put(game + 162 - delta, 24);
    put((jp?0xe90:0xe9a)+24*2, 0);
    put(0x24,0x1234);put(0x26,0xabcd);
    call(jp ? 0xc0870e : 0xc08715);
  }
  void start_main() {
    cpu.program_counter=0xc2ff00;
    cpu.status_register=eb::MainCpu65816::InterruptDisable;
    cpu.execute_instruction<0x22>(jp?0xc246ee:0xc24821,4);
  }
  void until(unsigned target) {
    for(unsigned n=0;n<30000000;++n) {
      if(cpu.program_counter==target)return;
      step();
    }
    throw std::runtime_error("Original encounter frontier not reached: "+cpu.describe_registers());
  }
};
}
