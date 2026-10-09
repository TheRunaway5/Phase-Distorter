#pragma once
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include <array>
#include <stdexcept>

namespace eb::native_reference {
// The inherited translated source widens two C0DB0F CMP operands for its
// software presentation, plus four WithinLoadingArea comparisons and three
// overlapping entries. These original-source oracles restore the six actual
// comparison literals and reject any overlapping-entry reach. This is neither a callee replacement nor
// an instruction/timing bypass: interrupt arbitration runs before dispatch.
class OriginalObjectInstructions {
public:
  using Reaches=std::array<std::uint64_t,9>;
  static void step(MainCpu65816 &cpu,SnesBus &bus,bool jp,Reaches &reaches) {
    if(!cpu.prepare_instruction())return;
    const auto pc=cpu.program_counter,bank=pc>>16,low=pc&0xffff;
    constexpr std::array<unsigned,9> us{0xc6f3,0xc6f8,0xc6f9,0xc6fd,0xc702,0xc703,0xdb49,0xdb4e,0xdb4f};
    constexpr std::array<unsigned,9> japanese{0xc6d5,0xc6da,0xc6db,0xc6df,0xc6e4,0xc6e5,0xdb11,0xdb16,0xdb17};
    constexpr std::array<unsigned,9> op{0xc9,0xc9,0x40,0xe0,0xe0,0x40,0xc9,0xc9,0xc0};
    constexpr std::array<unsigned,9> words{0xffc0,0x0140,0,0xffc0,0x0140,0,0x0140,0xffc0,0x90ff};
    const auto &sites=jp?japanese:us;
    if(bank==0xc0||bank==0x80)for(unsigned i=0;i<sites.size();++i)if(low==sites[i]) {
      ++reaches[i];
      if(bus.read_byte(pc)!=op[i])throw std::runtime_error("Original object instruction opcode differs from ROM");
      if(i==8&&(unsigned(bus.read_byte(pc+1))|unsigned(bus.read_byte(pc+2))<<8)!=words[i])
        throw std::runtime_error("Original overlapping CPY literal differs from ROM");
      if(i==2||i==5||i==8)throw std::runtime_error("Original object oracle reached an unsupported overlapping instruction at "+std::to_string(pc));
      const auto operand=unsigned(bus.read_byte(pc+1))|unsigned(bus.read_byte(pc+2))<<8;
      if(operand!=words[i])throw std::runtime_error("Original object comparison literal differs from ROM");
      const bool byte=op[i]==0xe0?cpu.index_is_8_bit():cpu.accumulator_is_8_bit();
      if(op[i]==0xe0)cpu.execute_instruction<0xe0>(byte?operand&255:operand,byte?2:3);
      else cpu.execute_instruction<0xc9>(byte?operand&255:operand,byte?2:3);
      return;
    }
    cpu.execute_prepared_instruction();
  }
};
}
