#pragma once

#include "eb/display_settings.hpp"
#include "eb/direct_scene.hpp"
#include "eb/frame_interpolator.hpp"
#include "eb/frame_pacer.hpp"
#include "eb/photosensitivity_filter.hpp"
#include "eb/presentation_clock.hpp"
#include "eb/presentation_frame.hpp"

#include <optional>

namespace eb {
// Owns picture history and presentation scheduling, independent of SDL, audio
// devices and game execution. The host supplies selected monitor/VRR rates;
// neither extra draws nor filtering can advance the producer's simulation.
class PresentationPipeline {
public:
    using Time = FramePacer::Time;

    PresentationPipeline(Time now, const DisplaySettings& settings, double native_rate, double presentation_rate,
                         bool presentation_enabled, PresentationFrame initial_frame = {});
    PresentationPipeline(const PresentationPipeline&) = delete;
    PresentationPipeline& operator=(const PresentationPipeline&) = delete;

    // Returns true when native playback cadence changed, so the host can reopen
    // its audio device. Identical settings preserve deadlines and frame history.
    bool configure(const DisplaySettings& settings, double native_rate, double presentation_rate, Time now);

    // Rebase native pacing after a blocking host-device reopen. Its setup time
    // is not missed native presentation work; high-rate clock debt is retained.
    void reset_native_deadline(Time now);
    // A restored producer replaces every borrowed canvas. Discard motion and
    // filter history and rebase both clocks before exposing the restored frame.
    void restored_frame(PresentationFrame frame, Time now);

    // Call at every completed hardware frame, including each frame crossed by
    // one DMA operation. High-rate endpoints are copied before this returns.
    void completed_frame(PresentationFrame frame);

    // Call once after the host advances simulation. A zero completed-frame delta
    // retains the prior partial-step policy: one scheduling slot is consumed.
    // Native pictures without filtering borrow the producer's canvas unchanged.
    void simulation_finished(PresentationFrame current_frame, std::uint64_t elapsed_frames, Time now);

    bool simulation_due(Time now);
    bool presentation_due(Time now) const;
    // Returned history is pipeline-owned in high-rate mode; consume it before
    // the next picture/configure/completed_frame call. Native mode borrows the
    // producer canvas until its next mutation, as current_picture does.
    PresentationPicture picture(Time now);
    void presented(Time now);
    Time wake_time(Time now) const;

    // The latest native/filtered canvas, including partial-step results, rather
    // than an interpolated host picture. Valid until the next producer canvas
    // mutation/resize or pipeline update. Use after simulation for captures.
    PresentationPicture current_picture() const { return current_picture_; }
    // An exception can leave a resized or partly drawn canvas. Refresh borrowed
    // storage unconditionally, retaining the selected filter as before.
    void refresh_after_error(PresentationFrame current_frame);

    bool high_frame_rate() const { return high_rate_; }
    double frame_rate() const { return native_rate_; }
    double presentation_limit() const { return high_rate_ ? presentation_rate_ : native_rate_; }
    std::uint64_t presented_frames() const { return presented_frames_; }
    std::uint64_t catch_up_frames() const { return catch_up_frames_; }

private:
    void refresh_current_picture(PresentationFrame frame, bool force);
    static double validated_native_rate(double native_rate, double presentation_rate);

    const bool presentation_enabled_;
    bool high_rate_{};
    bool reduce_flashing_{};
    bool interpolate_frames_{};
    bool direct_rendering_{};
    DirectSceneMotion scene_motion_;
    double native_rate_{};
    double presentation_rate_{};
    FramePacer native_pacer_;
    PresentationClock presentation_clock_;
    PhotosensitivityFilter photosensitivity_filter_;
    FrameInterpolator interpolator_;
    PresentationPicture current_picture_;
    std::optional<std::uint64_t> filtered_frame_;
    bool native_picture_pending_{};
    bool native_wait_pending_{};
    // Bound visible starvation while simulation catches up. A fresh picture
    // can be displayed at least every two native periods even when still late.
    bool fresh_picture_pending_{};
    Time last_presented_{};
    std::uint64_t presented_frames_{};
    std::uint64_t catch_up_frames_{};
};
} // namespace eb
