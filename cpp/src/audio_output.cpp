#include "eb/audio_output.hpp"
#include "eb/frame_pacer.hpp"
#include "eb/snes_audio_dsp.hpp"
#include <SDL.h>
#include <cmath>
#include <stdexcept>

namespace eb {
WaveFileWriter::WaveFileWriter(const std::string &path)
    : path_(path), output_(path, std::ios::binary | std::ios::trunc) {
    if (!output_)
        throw std::runtime_error("Cannot create WAV file: " + path);
    header();
}

WaveFileWriter::~WaveFileWriter() {
    if (!finished_) {
        try {
            finish();
        } catch (...) {
        }
    }
}

void WaveFileWriter::append(std::span<const std::int16_t> samples) {
    if (samples.size() > (0xffffffffu - 36 - bytes_) / 2)
        throw std::runtime_error("WAV recording exceeds the RIFF size limit");
    for (auto sample : samples)
        little16(static_cast<std::uint16_t>(sample));
    bytes_ += static_cast<std::uint32_t>(samples.size() * 2);
    if (!output_)
        throw std::runtime_error("Cannot write WAV audio: " + path_);
}

void WaveFileWriter::finish() {
    if (finished_)
        return;
    // RIFF lengths are unknown until recording ends; rewrite the placeholder
    // header after all interleaved stereo samples have been appended.
    output_.seekp(0);
    header();
    output_.close();
    finished_ = true;
    if (!output_)
        throw std::runtime_error("Cannot finalize WAV file: " + path_);
}

void WaveFileWriter::little16(std::uint16_t value) {
    const char bytes[] = {static_cast<char>(value), static_cast<char>(value >> 8)};
    output_.write(bytes, sizeof bytes);
}

void WaveFileWriter::little32(std::uint32_t value) {
    little16(static_cast<std::uint16_t>(value));
    little16(value >> 16);
}

void WaveFileWriter::header() {
    output_.write("RIFF", 4);
    little32(bytes_ + 36);
    output_.write("WAVEfmt ", 8);
    little32(16);
    little16(1);
    little16(2);
    little32(eb::SnesAudioDsp::output_sample_rate);
    little32(eb::SnesAudioDsp::output_sample_rate * 4);
    little16(4);
    little16(16);
    output_.write("data", 4);
    little32(bytes_);
}

DeviceAudioQueue::DeviceAudioQueue(double frame_rate) {
    if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0)
        throw std::runtime_error(std::string("SDL audio initialization: ") + SDL_GetError());
    SDL_AudioSpec desired{}, obtained{};
    // SDL converts this source rate to the physical device rate. The DSP
    // and WAV remain native; only playback follows the selected host cadence.
    desired.freq =
        int(std::lround(eb::SnesAudioDsp::output_sample_rate * frame_rate / eb::FramePacer::frame_rate));
    desired.format = AUDIO_S16SYS;
    desired.channels = 2;
    desired.samples = 1024;
    // Keep the DSP's sample format; SDL resamples to the hardware device.
    // Playback remains a consumer and never controls the simulation.
    device_ = SDL_OpenAudioDevice(nullptr, 0, &desired, &obtained, 0);
    if (!device_) {
        const std::string error = SDL_GetError();
        SDL_QuitSubSystem(SDL_INIT_AUDIO);
        throw std::runtime_error("SDL audio device: " + error + " (use --no-audio to disable playback)");
    }
}

DeviceAudioQueue::~DeviceAudioQueue() {
    SDL_CloseAudioDevice(device_);
    SDL_QuitSubSystem(SDL_INIT_AUDIO);
}

void DeviceAudioQueue::append(std::span<const std::int16_t> samples) {
    if (samples.empty())
        return;
    if (SDL_QueueAudio(device_, samples.data(), static_cast<Uint32>(samples.size_bytes())) != 0)
        throw std::runtime_error(std::string("SDL audio queue: ") + SDL_GetError());
    if (!started_ && SDL_GetQueuedAudioSize(device_) >= 4096) {
        // Prime a small buffer before unpausing to avoid a startup underrun.
        SDL_PauseAudioDevice(device_, 0);
        started_ = true;
    }
}

} // namespace eb
