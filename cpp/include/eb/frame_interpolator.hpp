#pragma once
#include <cstdint>
#include <span>
#include <vector>

namespace eb {
// Host-only frame generation from completed, already-filtered pictures. Motion
// is estimated conservatively in small blocks; uncertain motion holds a source
// picture instead of dissolving unrelated silhouettes into translucent ghosts.
// No game memory, input, CPU clocks, or audio are accessible to this class.
class FrameInterpolator {
public:
    void reset();
    void submit(std::span<const uint32_t> pixels, unsigned width, unsigned height,
                uint64_t frame, double fixed_aspect, bool interpolate);
    std::span<const uint32_t> sample(double fraction);
    unsigned width() const { return width_; }
    double fixed_aspect() const { return aspect_; }
private:
    struct Motion { int x{}, y{}; };
    unsigned width_{}, height_{}, columns_{};
    uint64_t frame_{};
    double aspect_{};
    bool interpolate_{}, unchanged_{};
    std::vector<uint32_t> previous_, current_, output_;
    std::vector<Motion> motion_, sample_offsets_;
    void estimate_motion();
    uint32_t sample_pixel(const std::vector<uint32_t>& image, int x, int y) const;
};
} // namespace eb
