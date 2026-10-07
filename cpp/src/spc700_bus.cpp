#include "eb/spc700_audio_cpu.hpp"
#include "eb/snes_bus.hpp"

namespace eb {
Spc700AudioCpu::Spc700AudioCpu(SnesBus &bus)
    : Spc700AudioCpu(bus.main_to_audio_ports, bus.audio_to_main_ports) {
    host_clock_callback_ = &bus.advance_audio_master_clocks;
    *host_clock_callback_ = [this](unsigned clocks) { advance_master_clocks(clocks); };
}
} // namespace eb
