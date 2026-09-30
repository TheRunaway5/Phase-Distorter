#pragma once
#include <algorithm>
#include <cstdint>
#include <span>
#include <utility>
#include <vector>

namespace eb {
// A consumer-side jitter buffer. It never changes, resamples, or drops DSP
// samples. The SDL device lock serializes append and consume in the frontend.
class AudioPlaybackBuffer {
public:
    static constexpr unsigned reserve_frames = 2048; // 64 ms at the native 32 kHz rate.
    void append(std::span<const std::int16_t> samples) {
        if (queued_ + samples.size() > samples_.size()) {
            std::vector<std::int16_t> larger(std::max(samples_.size() * 2, queued_ + samples.size()));
            copy_queued({larger.data(), queued_});
            samples_ = std::move(larger);
            read_ = 0;
        }
        const auto write = (read_ + queued_) % samples_.size();
        const auto first = std::min(samples.size(), samples_.size() - write);
        std::copy_n(samples.begin(), first, samples_.begin() + write);
        std::copy(samples.begin() + first, samples.end(), samples_.begin());
        queued_ += samples.size();
    }
    void consume(std::span<std::int16_t> output) {
        std::fill(output.begin(), output.end(), 0);
        if (priming_) {
            if (queued_ < std::max<std::size_t>(reserve_frames * 2, output.size() * 2))
                return;
            priming_ = false;
        }
        const auto count = std::min(output.size(), queued_);
        copy_queued(output.first(count));
        read_ = (read_ + count) % samples_.size();
        queued_ -= count;
        if (count < output.size()) {
            ++underruns_;
            priming_ = true; // Recover once, instead of alternating tiny packets and silence.
        }
    }
    std::uint64_t underruns() const { return underruns_; }
    std::size_t queued_frames() const { return queued_ / 2; }
private:
    // Only append may allocate. The audio callback performs two bounded copies,
    // with no allocation, deallocation, I/O, or resampling on its real-time thread.
    void copy_queued(std::span<std::int16_t> output) const {
        const auto first = std::min(output.size(), samples_.size() - read_);
        std::copy_n(samples_.begin() + read_, first, output.begin());
        std::copy_n(samples_.begin(), output.size() - first, output.begin() + first);
    }
    std::vector<std::int16_t> samples_ = std::vector<std::int16_t>(8192);
    std::size_t read_{}, queued_{};
    bool priming_ = true;
    std::uint64_t underruns_{};
};
} // namespace eb
