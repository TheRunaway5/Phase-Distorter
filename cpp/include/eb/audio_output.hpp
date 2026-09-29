#pragma once

#include <cstdint>
#include <fstream>
#include <span>
#include <string>

namespace eb {
// Streams native 32 kHz stereo samples and fixes RIFF lengths on finish.
// Explicit finish reports output failures; destruction performs best-effort close.
class WaveFileWriter {
  public:
    explicit WaveFileWriter(const std::string &path);
    ~WaveFileWriter();
    WaveFileWriter(const WaveFileWriter &) = delete;
    WaveFileWriter &operator=(const WaveFileWriter &) = delete;
    WaveFileWriter(WaveFileWriter &&) = delete;
    WaveFileWriter &operator=(WaveFileWriter &&) = delete;
    void append(std::span<const std::int16_t> samples);
    void finish();

  private:
    void little16(std::uint16_t value);
    void little32(std::uint32_t value);
    void header();
    std::string path_;
    std::ofstream output_;
    std::uint32_t bytes_{};
    bool finished_{};
};

// Owns one SDL audio subsystem reference and playback device. Playback consumes
// samples at the selected cadence without driving simulation or WAV generation.
class DeviceAudioQueue {
  public:
    explicit DeviceAudioQueue(double frame_rate);
    ~DeviceAudioQueue();
    DeviceAudioQueue(const DeviceAudioQueue &) = delete;
    DeviceAudioQueue &operator=(const DeviceAudioQueue &) = delete;
    DeviceAudioQueue(DeviceAudioQueue &&) = delete;
    DeviceAudioQueue &operator=(DeviceAudioQueue &&) = delete;
    void append(std::span<const std::int16_t> samples);

  private:
    std::uint32_t device_{};
    bool started_{};
};
} // namespace eb
