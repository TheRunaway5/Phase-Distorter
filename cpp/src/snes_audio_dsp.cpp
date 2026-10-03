#include "eb/snes_audio_dsp.hpp"
#include "SPC_DSP.h"
#include "eb/spc700_audio_cpu.hpp"
#include "eb/snapshot_archive.hpp"

#include <algorithm>
#include <array>
#include <cstring>
#include <stdexcept>
#include <utility>

namespace eb {
// The synthesis core advances the original DSP machinery (BRR decoding,
// voices, envelopes, and echo). This wrapper only connects clocks, registers,
// shared RAM, and the frontend's sample queue; it does not remix the output.
struct SnesAudioDsp::SynthesisState {
    SPC_DSP processor;
    std::array<SPC_DSP::sample_t, 128> sample_buffer{};
};

namespace {
thread_local unsigned char *dsp_archive_end{};
void write_dsp_state(unsigned char **io, void *state, std::size_t count) {
    if (count > static_cast<std::size_t>(dsp_archive_end - *io))
        throw std::runtime_error("DSP snapshot exceeds its processor state limit");
    std::memcpy(*io, state, count);
    *io += count;
}
void read_dsp_state(unsigned char **io, void *state, std::size_t count) {
    if (count > static_cast<std::size_t>(dsp_archive_end - *io))
        throw std::runtime_error("DSP snapshot is truncated");
    std::memcpy(state, *io, count);
    *io += count;
}
} // namespace

void SnesAudioDsp::snapshot_io(SnapshotArchive &archive) {
    std::vector<std::uint8_t> state;
    if (!archive.loading()) {
        state.resize(SPC_DSP::state_size);
        auto *cursor = state.data();
        dsp_archive_end = cursor + state.size();
        synthesis_->processor.copy_state(&cursor, write_dsp_state);
        state.resize(static_cast<std::size_t>(cursor - state.data()));
    }
    archive(state, queued_stereo_samples_, generated_stereo_frames_);
    if (archive.loading()) {
        if (state.empty() || state.size() > SPC_DSP::state_size || (queued_stereo_samples_.size() & 1))
            throw std::runtime_error("Invalid DSP snapshot state");
        auto *cursor = state.data();
        dsp_archive_end = cursor + state.size();
        // The supported DSP state copier restores its internal pointers onto
        // this candidate's initialized SPC RAM and voice/register ownership.
        synthesis_->processor.copy_state(&cursor, read_dsp_state);
        if (cursor != dsp_archive_end) throw std::runtime_error("DSP snapshot contains trailing data");
        synthesis_->processor.set_output(synthesis_->sample_buffer.data(),
                                         static_cast<int>(synthesis_->sample_buffer.size()));
    }
    dsp_archive_end = nullptr;
}

SnesAudioDsp::SnesAudioDsp(std::span<std::uint8_t, 65536> audio_ram) : synthesis_(std::make_unique<SynthesisState>()) {
    static_assert(sizeof(SPC_DSP::sample_t) == sizeof(std::int16_t));
    synthesis_->processor.init(audio_ram.data());
    queued_stereo_samples_.reserve(2048);
}

// Binding to the SPC keeps every register access and elapsed sound-CPU cycle
// on one ordered path. Declare the DSP after its SPC owner so it is destroyed
// first and can safely remove these callbacks.
SnesAudioDsp::SnesAudioDsp(Spc700AudioCpu& audio_cpu)
    : SnesAudioDsp(std::span<std::uint8_t, 65536>(audio_cpu.audio_ram)) {
    audio_cpu_ = &audio_cpu;
    audio_cpu.read_dsp_register = [this](std::uint8_t address) { return read_register(address); };
    audio_cpu.write_dsp_register = [this](std::uint8_t address, std::uint8_t value) { write_register(address, value); };
    audio_cpu.advance_dsp_clocks = [this](unsigned audio_clocks) { advance_audio_clocks(audio_clocks); };
}

SnesAudioDsp::~SnesAudioDsp() {
    if (audio_cpu_) {
        audio_cpu_->read_dsp_register = {};
        audio_cpu_->write_dsp_register = {};
        audio_cpu_->advance_dsp_clocks = {};
    }
}

// The DSP's address latch has asymmetric behavior: reads mirror bit 7, while
// writes with bit 7 set are ignored. Keep that rule at this boundary as well
// as at the SPC register port.
std::uint8_t SnesAudioDsp::read_register(std::uint8_t address) const {
    return static_cast<std::uint8_t>(synthesis_->processor.read(address & 127));
}

void SnesAudioDsp::write_register(std::uint8_t address, std::uint8_t value) {
    if (!(address & 128))
        synthesis_->processor.write(address, value);
}

// Feed bounded clock chunks because the processor writes into a fixed output
// buffer. sample_count counts individual interleaved samples, whereas the
// public counter counts stereo frames; neither depends on frontend playback.
void SnesAudioDsp::advance_audio_clocks(unsigned audio_clocks) {
    while (audio_clocks) {
        // At most 64 samples plus a pending sample pair fit in the 128-entry buffer.
        const auto chunk_clocks = std::min(audio_clocks, 1024u);
        synthesis_->processor.set_output(synthesis_->sample_buffer.data(),
                                         static_cast<int>(synthesis_->sample_buffer.size()));
        synthesis_->processor.run(static_cast<int>(chunk_clocks));
        const auto produced_sample_count = synthesis_->processor.sample_count();
        queued_stereo_samples_.insert(queued_stereo_samples_.end(), synthesis_->sample_buffer.begin(),
                                      synthesis_->sample_buffer.begin() + produced_sample_count);
        generated_stereo_frames_ += produced_sample_count / 2;
        audio_clocks -= chunk_clocks;
    }
}

// Transfer queue ownership to the caller so device queuing or WAV export can
// run without holding a reference into mutable synthesis storage. The running
// total is intentionally unaffected by draining the pending sample vector.
std::vector<std::int16_t> SnesAudioDsp::take_stereo_samples() {
    auto pending_samples = std::move(queued_stereo_samples_);
    queued_stereo_samples_.clear();
    queued_stereo_samples_.reserve(2048);
    return pending_samples;
}
} // namespace eb
