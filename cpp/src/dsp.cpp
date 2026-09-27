#include "eb/dsp.hpp"
#include "eb/spc.hpp"
#include "SPC_DSP.h"

#include <algorithm>
#include <array>
#include <utility>

namespace eb {
// The synthesis core advances the original DSP machinery (BRR decoding,
// voices, envelopes, and echo). This wrapper only connects clocks, registers,
// shared RAM, and the frontend's sample queue; it does not remix the output.
struct Dsp::Impl {
    SPC_DSP dsp;
    std::array<SPC_DSP::sample_t, 128> buffer{};
};

Dsp::Dsp(std::span<std::uint8_t, 65536> ram): impl_(std::make_unique<Impl>()) {
    static_assert(sizeof(SPC_DSP::sample_t) == sizeof(std::int16_t));
    impl_->dsp.init(ram.data());
    samples_.reserve(2048);
}

// Binding to the SPC keeps every register access and elapsed sound-CPU cycle
// on one ordered path. Declare the DSP after its SPC owner so it is destroyed
// first and can safely remove these callbacks.
Dsp::Dsp(Spc& spc): Dsp(std::span<std::uint8_t, 65536>(spc.ram)) {
    spc_ = &spc;
    spc.dsp_read = [this](std::uint8_t address) { return read(address); };
    spc.dsp_write = [this](std::uint8_t address, std::uint8_t value) { write(address, value); };
    spc.dsp_tick = [this](unsigned clocks) { run(clocks); };
}

Dsp::~Dsp() {
    if (spc_) {
        spc_->dsp_read = {};
        spc_->dsp_write = {};
        spc_->dsp_tick = {};
    }
}

// The DSP's address latch has asymmetric behavior: reads mirror bit 7, while
// writes with bit 7 set are ignored. Keep that rule at this boundary as well
// as at the SPC register port.
std::uint8_t Dsp::read(std::uint8_t address) const {
    return static_cast<std::uint8_t>(impl_->dsp.read(address & 127));
}

void Dsp::write(std::uint8_t address, std::uint8_t value) {
    if (!(address & 128)) impl_->dsp.write(address, value);
}

// Feed bounded clock chunks because the processor writes into a fixed output
// buffer. sample_count counts individual interleaved samples, whereas the
// public counter counts stereo frames; neither depends on frontend playback.
void Dsp::run(unsigned clocks) {
    while (clocks) {
        // At most 64 samples plus a pending sample pair fit in the 128-entry buffer.
        const auto count = std::min(clocks, 1024u);
        impl_->dsp.set_output(impl_->buffer.data(), static_cast<int>(impl_->buffer.size()));
        impl_->dsp.run(static_cast<int>(count));
        const auto produced = impl_->dsp.sample_count();
        samples_.insert(samples_.end(), impl_->buffer.begin(), impl_->buffer.begin() + produced);
        sample_frames_ += produced / 2;
        clocks -= count;
    }
}

// Transfer queue ownership to the caller so device queuing or WAV export can
// run without holding a reference into mutable synthesis storage. The running
// total is intentionally unaffected by draining the pending sample vector.
std::vector<std::int16_t> Dsp::take_samples() {
    auto result = std::move(samples_);
    samples_.clear();
    samples_.reserve(2048);
    return result;
}
} // namespace eb
