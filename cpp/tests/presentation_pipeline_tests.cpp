#include "eb/presentation_pipeline.hpp"

#include <algorithm>
#include <chrono>
#include <cmath>
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
using Pipeline = eb::PresentationPipeline;
using Time = Pipeline::Time;
using namespace std::chrono_literals;
constexpr unsigned height = eb::DisplaySettings::native_height;

void require(bool condition, const char* message) {
    if (!condition)
        throw std::runtime_error(message);
}

struct Canvas {
    unsigned width;
    std::vector<std::uint32_t> pixels;
    std::vector<std::uint8_t> mask;
    std::vector<std::uint32_t> reference;
    explicit Canvas(unsigned width = 64, std::uint32_t color = 0xff203040)
        : width(width), pixels(width * height, color) {}
    eb::PresentationFrame view(std::uint64_t frame, double aspect = 0) const {
        return {pixels, width, aspect, frame, mask, reference};
    }
    void flashing() {
        std::fill(pixels.begin(), pixels.end(), 0xffffffff);
        mask.assign(pixels.size(), 1);
        reference.assign(pixels.size(), 0xff000000);
    }
};

auto copy(eb::PresentationPicture picture) {
    return std::vector<std::uint32_t>(picture.pixels.begin(), picture.pixels.end());
}

void native_and_headless() {
    Canvas canvas;
    eb::DisplaySettings settings;
    Pipeline native(Time{}, settings, 60, 60, true, canvas.view(0));
    require(native.current_picture().pixels.data() == canvas.pixels.data(),
            "Startup lost its original borrowed picture");
    native.completed_frame(canvas.view(1));
    native.simulation_finished(canvas.view(1), 1, Time{} + 1ms);
    require(native.simulation_due(Time{} + 1ms), "Native simulation unexpectedly gained an independent clock");
    require(native.presentation_due(Time{} + 1ms), "Native picture was not offered after simulation");
    require(native.picture(Time{} + 1ms).pixels.data() == canvas.pixels.data(),
            "Disabled native filter copied or changed pixels");
    native.presented(Time{} + 2ms);
    require(!native.presentation_due(Time{} + 2ms) && native.presented_frames() == 1,
            "Native picture was offered twice without another simulation step");
    require(native.wake_time(Time{}) > Time{} + 16ms && native.wake_time(Time{}) < Time{} + 17ms,
            "Native deadline no longer follows its selected monitor rate");
    native.simulation_finished(canvas.view(2), 1, Time{} + 100ms);
    require(native.presentation_due(Time{} + 100ms) && native.catch_up_frames() == 1,
            "Catch-up failed to offer a fresh picture after a long gap");
    require(native.wake_time(Time{} + 100ms) == Time{} + 100ms, "Dropped native presentation added a wait");

    settings.frame_limit = 0;
    Pipeline headless(Time{}, settings, eb::FramePacer::frame_rate, 0, false, canvas.view(0));
    headless.completed_frame(canvas.view(1));
    canvas.pixels[0] = 0xffabcdef;
    headless.simulation_finished(canvas.view(1), 1, Time{});
    require(headless.simulation_due(Time{}) && !headless.high_frame_rate() && !headless.presentation_due(Time{}),
            "Uncapped settings throttled or drew headless simulation");
    require(headless.current_picture().pixels.data() == canvas.pixels.data() &&
                headless.current_picture().pixels[0] == 0xffabcdef,
            "Headless partial-canvas identity changed");
    require(headless.wake_time(Time{}) == Time{}, "Headless run gained a presentation wait");
}

// A busy host can finish successive ticks just behind their deadlines. The
// catch-up path must keep showing fresh pictures while preserving every tick.
void sustained_lateness() {
    for (int fps : {60, 240}) {
        Canvas canvas;
        eb::DisplaySettings settings; settings.frame_limit = fps;
        settings.interpolate_frames = false;
        Pipeline pipeline(Time{}, settings, 60, fps, true, canvas.view(0));
        Time now{}, previous{};
        auto largest_gap = 0ms;
        unsigned draws = 0;
        for (unsigned tick = 1; tick <= 120; ++tick) {
            now += 22ms;
            canvas.pixels[0] = 0xff000000 | tick;
            pipeline.completed_frame(canvas.view(tick));
            pipeline.simulation_finished(canvas.view(tick), 1, now);
            if (pipeline.presentation_due(now)) {
                require(pipeline.picture(now).pixels[0] == canvas.pixels[0], "Catch-up presented an obsolete frame");
                largest_gap = std::max(largest_gap, std::chrono::duration_cast<std::chrono::milliseconds>(now - previous));
                previous = now; pipeline.presented(now); ++draws;
            }
        }
        std::cout << "late ticks: limit=" << fps << " draws=" << draws << " max_gap_ms=" << largest_gap.count() << '\n';
        require(draws >= 59 && largest_gap <= 44ms, "Catch-up starved visible frames during sustained lateness");
    }
}

void independent_rates() {
    Canvas canvas;
    const auto end = Time{} + 2s;
    for (double draw_rate : {300., 0., 141.57}) {
        eb::DisplaySettings settings;
        settings.frame_limit = draw_rate == 0 ? 0 : 300;
        settings.variable_refresh = draw_rate == 141.57;
        settings.interpolate_frames = false;
        Pipeline pipeline(Time{}, settings, eb::FramePacer::frame_rate, draw_rate, true);
        Time now{};
        std::uint64_t simulations = 0;
        while (now < end) {
            require(!pipeline.configure(settings, eb::FramePacer::frame_rate, draw_rate, now),
                    "Unchanged display configuration reported an audio-rate change");
            if (pipeline.simulation_due(now)) {
                ++simulations;
                pipeline.completed_frame(canvas.view(simulations));
                now += 100us;
                pipeline.simulation_finished(canvas.view(simulations), 1, now);
            }
            if (pipeline.presentation_due(now)) {
                require(copy(pipeline.picture(now)) == canvas.pixels, "Extra host draw changed a static picture");
                now += 100us;
                pipeline.presented(now);
            }
            now = std::max(now, pipeline.wake_time(now));
        }
        require(simulations == 121, "Presentation cap/VRR changed the number of native game ticks");
        require(draw_rate == 0 ? pipeline.presented_frames() > 600
                               : std::abs(double(pipeline.presented_frames()) - draw_rate * 2) <= 2,
                "Selected presentation rate was not respected");
        require(pipeline.catch_up_frames() == 0, "Ordinary high-rate simulation generated false catch-up work");
    }
}

void callbacks_and_picture_lifetime() {
    Canvas canvas;
    eb::DisplaySettings settings;
    settings.frame_limit = 300;
    settings.interpolate_frames = false;
    Pipeline pipeline(Time{}, settings, eb::FramePacer::frame_rate, 300, true);
    const auto original = canvas.pixels;
    pipeline.completed_frame(canvas.view(1, 4.0 / 3));
    canvas.pixels.assign(canvas.pixels.size(), 0xffabcdef);
    pipeline.simulation_finished(canvas.view(1, 0), 1, Time{});
    require(copy(pipeline.picture(Time{} + 1ms)) == original,
            "High-rate completed picture retained borrowed storage after callback return");
    require(pipeline.picture(Time{}).fixed_aspect == 4.0 / 3,
            "High-rate picture adopted the next frame's aspect metadata");
    require(pipeline.current_picture().pixels.data() == canvas.pixels.data(),
            "Diagnostic native picture no longer describes current producer storage");

    settings.reduce_flashing = true;
    pipeline.configure(settings, eb::FramePacer::frame_rate, 300, Time{});
    canvas.flashing();
    for (std::uint64_t frame = 2; frame <= 4; ++frame)
        pipeline.completed_frame(canvas.view(frame));
    pipeline.simulation_finished(canvas.view(4), 3, Time{});
    require(pipeline.current_picture().pixels[0] == 0xff181818,
            "Long DMA did not filter every completed frame exactly once");
    require(!pipeline.simulation_due(Time{} + eb::FramePacer::period() * 3),
            "Multiple completed frames lost simulation clock debt");
    const auto filtered = copy(pipeline.current_picture());
    for (int i = 1; i <= 5; ++i) {
        const auto now = Time{} + std::chrono::milliseconds(i);
        (void)pipeline.picture(now);
        pipeline.presented(now);
    }
    require(copy(pipeline.current_picture()) == filtered, "Host redraws advanced effect-filter history");
}

void changes_and_discontinuities() {
    Canvas dark(64, 0xff000000), light(64, 0xffffffff), wider(80, 0xff336699);
    eb::DisplaySettings settings;
    Pipeline pipeline(Time{}, settings, 60, 60, true);
    settings.frame_limit = 300;
    const auto change = Time{} + 10s;
    require(!pipeline.configure(settings, 60, 300, change), "Presentation-only change requested audio resampling");
    require(pipeline.simulation_due(change), "Switching modes retained a previous clock backlog");
    pipeline.completed_frame(dark.view(1));
    pipeline.completed_frame(light.view(2));
    pipeline.simulation_finished(light.view(2), 2, change);
    require(copy(pipeline.picture(change + 1ms)) == light.pixels, "A hard scene cut reused outgoing pixels");
    pipeline.completed_frame(wider.view(3, 4.0 / 3));
    pipeline.simulation_finished(wider.view(3, 4.0 / 3), 1, change);
    require(copy(pipeline.picture(change)) == wider.pixels && pipeline.picture(change).width == 80 &&
                pipeline.picture(change).fixed_aspect == 4.0 / 3,
            "Geometry/aspect transition retained stale history");

    settings.variable_refresh = true;
    require(pipeline.configure(settings, 59.4, 59.4, change + 1s),
            "VRR native-rate change did not reach audio boundary");
    require(pipeline.frame_rate() == 59.4 && pipeline.presentation_limit() == 59.4,
            "Selected VRR rates were recomputed or discarded by the pipeline");
    require(!pipeline.presentation_due(change + 1s), "Display-rate change exposed stale interpolator storage");
    pipeline.completed_frame(light.view(4));
    pipeline.simulation_finished(light.view(4), 1, change + 1s);
    require(!pipeline.simulation_due(change + 1s + 1ms), "Rate change accelerated simulation");
    require(pipeline.simulation_due(change + 8s), "Host suspension failed to resume at a fresh epoch");

    settings.frame_limit = 60;
    require(!pipeline.configure(settings, 59.4, 59.4, change + 8s), "Mode change with same native rate reopened audio");
    pipeline.simulation_finished(light.view(4), 0, change + 8s);
    pipeline.presented(change + 8s);
    require(pipeline.wake_time(change + 8s) > change + 8s + 16ms,
            "Partial-step completion lost its native scheduling slot");
}

void audio_reopen_deadline() {
    Canvas canvas;
    eb::DisplaySettings settings;
    Pipeline native(Time{}, settings, 60, 60, true);
    native.simulation_finished(canvas.view(1), 1, Time{} + 1ms);
    native.presented(Time{} + 2ms);
    require(native.configure(settings, 59.4, 59.4, Time{} + 3ms),
            "Native-rate change did not request an audio reopen");
    const auto device_ready = Time{} + 83ms;
    native.reset_native_deadline(device_ready);
    require(!native.presentation_due(device_ready) && native.wake_time(device_ready) == device_ready,
            "Device reopen retained a stale native picture/wait");
    native.simulation_finished(canvas.view(2), 1, device_ready + 1ms);
    require(native.presentation_due(device_ready + 1ms) && native.catch_up_frames() == 0,
            "Audio-device setup time became missed native presentation work");
    native.presented(device_ready + 2ms);
    const auto period = std::chrono::duration_cast<eb::FramePacer::Clock::duration>(
        std::chrono::duration<double>(1 / 59.4));
    require(native.wake_time(device_ready + 2ms) == device_ready + period,
            "Native deadline did not start from device readiness at the new rate");
    native.reset_native_deadline(device_ready + 3ms);
    require(native.wake_time(device_ready + 3ms) == device_ready + 3ms,
            "Native deadline reset retained a previous wait request");
    native.simulation_finished(canvas.view(3), 1, device_ready + 4ms);
    native.reset_native_deadline(device_ready + 5ms);
    require(!native.presentation_due(device_ready + 5ms),
            "Native deadline reset retained a previously pending picture");

    settings.frame_limit = 300;
    settings.interpolate_frames = false;
    Pipeline high(Time{}, settings, 60, 300, true);
    high.completed_frame(canvas.view(1));
    high.simulation_finished(canvas.view(1), 1, Time{} + 1ms);
    high.presented(Time{} + 1ms);
    require(high.configure(settings, 59.4, 300, Time{} + 3ms), "High-rate audio change was lost");
    high.reset_native_deadline(device_ready);
    high.completed_frame(canvas.view(2));
    high.simulation_finished(canvas.view(2), 1, device_ready);
    require(high.simulation_due(device_ready),
            "Native device reopen erased high-rate simulation clock debt");
    // Catch up to the fifth hardware tick. The next game deadline remains the
    // original epoch plus five native periods, not the audio-device ready time.
    for (std::uint64_t frame = 3; frame <= 5; ++frame) {
        high.completed_frame(canvas.view(frame));
        high.simulation_finished(canvas.view(frame), 1, device_ready);
    }
    require(!high.simulation_due(device_ready) && high.presentation_due(device_ready),
            "Native device reopen changed the independent high-rate draw clock");
    const auto next_tick = Time{} + eb::FramePacer::period() * 5;
    require(!high.simulation_due(next_tick - 1ns) && high.simulation_due(next_tick),
            "High-rate simulation cadence was rebased after audio setup");
    require(copy(high.picture(device_ready)) == canvas.pixels,
            "Native deadline reset discarded high-rate picture history");
}

void interpolation_setting_boundary() {
    Canvas canvas;
    const auto scroll = [&](unsigned shift) {
        for (unsigned y = 0; y < height; ++y)
            for (unsigned x = 0; x < canvas.width; ++x) {
                std::uint32_t value = (x - shift) * 0x9e3779b9u + y * 0x85ebca6bu;
                value ^= value >> 16;
                value *= 0x7feb352du;
                value ^= value >> 15;
                canvas.pixels[y * canvas.width + x] = 0xff000000 | (value & 0xffffff);
            }
    };
    eb::DisplaySettings settings;
    settings.frame_limit = 300;
    settings.direct_rendering = false;
    Pipeline pipeline(Time{}, settings, eb::FramePacer::frame_rate, 300, true);
    scroll(0);
    const auto first = canvas.pixels;
    pipeline.completed_frame(canvas.view(1));
    scroll(4);
    pipeline.completed_frame(canvas.view(2));
    pipeline.simulation_finished(canvas.view(2), 2, Time{});
    require(copy(pipeline.picture(Time{})) == first, "Pipeline did not retain continuous interpolation endpoints");
    settings.interpolate_frames = false;
    pipeline.configure(settings, eb::FramePacer::frame_rate, 300, Time{});
    scroll(8);
    pipeline.completed_frame(canvas.view(3));
    pipeline.simulation_finished(canvas.view(3), 1, Time{});
    require(copy(pipeline.picture(Time{})) == canvas.pixels,
            "Disabled interpolation still showed a preceding endpoint");
    settings.interpolate_frames = true;
    pipeline.configure(settings, eb::FramePacer::frame_rate, 300, Time{});
    scroll(12);
    pipeline.completed_frame(canvas.view(4));
    pipeline.simulation_finished(canvas.view(4), 1, Time{});
    require(copy(pipeline.picture(Time{})) == canvas.pixels, "Re-enabled interpolation reused incompatible history");
}

void direct_scene_boundary() {
    Canvas canvas;
    eb::DisplaySettings settings;
    settings.frame_limit = 300;
    Pipeline pipeline(Time{}, settings, 60, 300, true);
    auto artwork = [&](unsigned frame, float x) {
        auto scene = std::make_shared<eb::DirectSceneFrame>();
        scene->frame = frame; scene->scene_identity = 1; scene->width = canvas.width;
        scene->motions = {{1,x,0}};
        auto view = canvas.view(frame); view.scene = scene;
        pipeline.completed_frame(view);
        pipeline.simulation_finished(view, 1, Time{});
        return scene;
    };
    const auto first = artwork(1, 0), second = artwork(2, 1);
    auto picture = pipeline.picture(Time{});
    require(picture.scene && picture.scene->artwork == second && picture.scene->offsets[0].x == -1,
            "Direct mode did not retain source artwork and previous actor pose");
    pipeline.completed_frame(canvas.view(3));
    require(!pipeline.picture(Time{}).scene && copy(pipeline.picture(Time{})) == canvas.pixels,
            "Unsupported scene used stale geometry or image interpolation");
    artwork(4, 2);
    require(pipeline.picture(Time{}).scene->offsets[0].x == 0,
            "Recovery from unsupported scene retained stale movement");
    settings.reduce_flashing = true;
    pipeline.configure(settings, 60, 300, Time{});
    canvas.flashing(); artwork(5, 3);
    require(!pipeline.picture(Time{}).scene && pipeline.picture(Time{}).pixels[0] != 0xffffffff,
            "Direct artwork bypassed the flashing filter");
}

void filter_toggles_and_partial_failures() {
    Canvas canvas;
    canvas.flashing();
    eb::DisplaySettings settings;
    settings.frame_limit = 300;
    settings.reduce_flashing = true;
    Pipeline pipeline(Time{}, settings, eb::FramePacer::frame_rate, 300, true);
    pipeline.completed_frame(canvas.view(1));
    pipeline.simulation_finished(canvas.view(1), 1, Time{});
    require(pipeline.current_picture().pixels[0] == 0xff080808, "First filtered frame changed");
    settings.reduce_flashing = false;
    pipeline.configure(settings, eb::FramePacer::frame_rate, 300, Time{} + 1ms);
    require(!pipeline.presentation_due(Time{} + 1ms), "Filter toggle reused an incompatible interpolation endpoint");
    pipeline.completed_frame(canvas.view(2));
    pipeline.simulation_finished(canvas.view(2), 1, Time{} + 1ms);
    require(pipeline.current_picture().pixels.data() == canvas.pixels.data(),
            "Disabling filter did not restore identity");
    settings.reduce_flashing = true;
    pipeline.configure(settings, eb::FramePacer::frame_rate, 300, Time{} + 2ms);
    pipeline.completed_frame(canvas.view(3));
    pipeline.simulation_finished(canvas.view(3), 1, Time{} + 2ms);
    require(pipeline.current_picture().pixels[0] == 0xff080808,
            "Disabled filter history leaked into re-enabled output");

    Canvas partial(96, 0xff123456);
    pipeline.refresh_after_error(partial.view(3, 4.0 / 3));
    require(copy(pipeline.current_picture()) == partial.pixels && pipeline.current_picture().width == 96,
            "Exception snapshot reused stale pixels after a resize in the same hardware frame");
    require(pipeline.current_picture().fixed_aspect == 4.0 / 3, "Exception snapshot lost scene aspect");

    Pipeline headless(Time{}, settings, eb::FramePacer::frame_rate, 300, false);
    headless.simulation_finished(canvas.view(0), 0, Time{});
    require(headless.current_picture().pixels[0] == 0xff080808,
            "Step limit before the first frame omitted the filtered partial picture");
}
} // namespace

int main() {
    try {
        sustained_lateness();
        native_and_headless();
        independent_rates();
        callbacks_and_picture_lifetime();
        changes_and_discontinuities();
        audio_reopen_deadline();
        interpolation_setting_boundary();
        direct_scene_boundary();
        filter_toggles_and_partial_failures();
        std::cout
            << "Presentation pipeline: native/headless identity, independent caps, VRR changes, callback ownership, "
               "DMA frames, filter toggles, scene changes and partial/error captures passed\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
