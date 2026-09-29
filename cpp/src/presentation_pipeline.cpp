#include "eb/presentation_pipeline.hpp"

#include <algorithm>
#include <cmath>
#include <stdexcept>

namespace eb {
double PresentationPipeline::validated_native_rate(double native_rate, double presentation_rate) {
    if (!std::isfinite(native_rate) || native_rate <= 0 || !std::isfinite(presentation_rate) || presentation_rate < 0)
        throw std::invalid_argument("Presentation rates must be finite; native rate must be positive");
    return native_rate;
}

PresentationPipeline::PresentationPipeline(Time now, const DisplaySettings& settings, double native_rate,
                                           double presentation_rate, bool presentation_enabled,
                                           PresentationFrame initial_frame)
    : presentation_enabled_(presentation_enabled), high_rate_(presentation_enabled && settings.high_frame_rate()),
      reduce_flashing_(settings.reduce_flashing), interpolate_frames_(settings.interpolate_frames),
      native_rate_(native_rate), presentation_rate_(presentation_rate),
      native_pacer_(now, validated_native_rate(native_rate, presentation_rate)),
      presentation_clock_(now, presentation_rate),
      current_picture_{initial_frame.pixels, initial_frame.width, initial_frame.fixed_aspect} {
}

bool PresentationPipeline::configure(const DisplaySettings& settings, double native_rate, double presentation_rate,
                                     Time now) {
    validated_native_rate(native_rate, presentation_rate);
    const bool high_rate = presentation_enabled_ && settings.high_frame_rate();
    if (high_rate != high_rate_ || presentation_rate != presentation_rate_) {
        high_rate_ = high_rate;
        presentation_rate_ = presentation_rate;
        presentation_clock_.reset(now, presentation_rate);
        native_pacer_.set_rate(now, native_rate);
        interpolator_.reset();
        native_picture_pending_ = native_wait_pending_ = false;
    }
    if (reduce_flashing_ != settings.reduce_flashing) {
        reduce_flashing_ = settings.reduce_flashing;
        interpolator_.reset(); // Never mix filtered and unfiltered endpoints.
    }
    interpolate_frames_ = settings.interpolate_frames;
    const bool changed_native_rate = native_rate != native_rate_;
    if (changed_native_rate) {
        native_rate_ = native_rate;
        native_pacer_.set_rate(now, native_rate);
        native_picture_pending_ = native_wait_pending_ = false;
    }
    return changed_native_rate;
}

void PresentationPipeline::reset_native_deadline(Time now) {
    native_pacer_.set_rate(now, native_rate_);
    native_picture_pending_ = native_wait_pending_ = false;
}

void PresentationPipeline::completed_frame(PresentationFrame frame) {
    if (reduce_flashing_) {
        current_picture_ = {photosensitivity_filter_.apply(frame.pixels, int(frame.width),
                                                           DisplaySettings::native_height, true, frame.effect_mask,
                                                           frame.effect_reference),
                            frame.width, frame.fixed_aspect};
        filtered_frame_ = frame.frame;
    }
    if (high_rate_)
        interpolator_.submit(reduce_flashing_ ? current_picture_.pixels : frame.pixels, frame.width,
                             DisplaySettings::native_height, frame.frame, frame.fixed_aspect, interpolate_frames_);
}

void PresentationPipeline::refresh_current_picture(PresentationFrame frame, bool force) {
    if (force) {
        current_picture_ = {photosensitivity_filter_.apply(frame.pixels, int(frame.width),
                                                           DisplaySettings::native_height, reduce_flashing_,
                                                           frame.effect_mask, frame.effect_reference),
                            frame.width, frame.fixed_aspect};
    } else if (!reduce_flashing_) {
        current_picture_ = {
            photosensitivity_filter_.apply(frame.pixels, int(frame.width), DisplaySettings::native_height, false),
            frame.width, frame.fixed_aspect};
        filtered_frame_.reset();
    } else if (filtered_frame_ != frame.frame) {
        current_picture_ = {photosensitivity_filter_.apply(frame.pixels, int(frame.width),
                                                           DisplaySettings::native_height, true, frame.effect_mask,
                                                           frame.effect_reference),
                            frame.width, frame.fixed_aspect};
        filtered_frame_ = frame.frame;
    }
}

void PresentationPipeline::simulation_finished(PresentationFrame current_frame, std::uint64_t elapsed_frames,
                                               Time now) {
    refresh_current_picture(current_frame, false);
    if (!presentation_enabled_)
        return;
    elapsed_frames = std::max<std::uint64_t>(elapsed_frames, 1);
    native_wait_pending_ = false;
    if (high_rate_) {
        presentation_clock_.simulated(elapsed_frames);
        if (presentation_clock_.simulation_due(now))
            catch_up_frames_ += elapsed_frames;
    } else {
        native_picture_pending_ = native_pacer_.advance(now, elapsed_frames);
        if (!native_picture_pending_)
            catch_up_frames_ += elapsed_frames;
    }
}

bool PresentationPipeline::simulation_due(Time now) {
    if (!high_rate_)
        return true;
    presentation_clock_.resume(now);
    return presentation_clock_.simulation_due(now);
}

bool PresentationPipeline::presentation_due(Time now) const {
    if (!presentation_enabled_)
        return false;
    return high_rate_ ? interpolator_.width() && presentation_clock_.presentation_due(now) : native_picture_pending_;
}

PresentationPicture PresentationPipeline::picture(Time now) {
    if (high_rate_ && interpolator_.width())
        return {interpolator_.sample(presentation_clock_.fraction(now)), interpolator_.width(),
                interpolator_.fixed_aspect()};
    return current_picture_;
}

void PresentationPipeline::presented(Time now) {
    ++presented_frames_;
    if (high_rate_)
        presentation_clock_.presented(now);
    else {
        native_picture_pending_ = false;
        native_wait_pending_ = true;
    }
}

PresentationPipeline::Time PresentationPipeline::wake_time(Time now) const {
    if (!presentation_enabled_)
        return now;
    if (high_rate_)
        return presentation_clock_.wake(now);
    return native_wait_pending_ ? native_pacer_.deadline() : now;
}

void PresentationPipeline::refresh_after_error(PresentationFrame current_frame) {
    refresh_current_picture(current_frame, true);
}
} // namespace eb
