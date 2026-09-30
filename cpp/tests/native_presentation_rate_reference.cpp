// Optional asset-backed presentation isolation proof. The pure pipeline tests
// own scheduling/deadline policy; this test owns the real native producer and
// immutable artwork boundary under extra 60/120/240 Hz presentation samples.
#include "eb/asset_store.hpp"
#include "eb/game_debug.hpp"
#include "eb/game_session.hpp"
#include "eb/input_replay.hpp"
#include "eb/presentation_pipeline.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <tuple>
#include <vector>

namespace {
using Pipeline = eb::PresentationPipeline;
using Time = Pipeline::Time;
void require(bool condition, const std::string &message) {
    if (!condition) throw std::runtime_error(message);
}
template<class A, class B> bool same(const A &a, const B &b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}
auto state(const eb::SessionDiagnostics &d) {
    return std::tie(d.frames, d.steps, d.master_clocks, d.cpu_instructions,
                    d.audio_cpu_instructions, d.audio_frames, d.native_gameplay_batches,
                    d.source_width, d.cpu_state, d.audio_cpu_state);
}
void compare_scene(const std::shared_ptr<const eb::DirectSceneFrame> &a,
                   const std::shared_ptr<const eb::DirectSceneFrame> &b) {
    require(bool(a) == bool(b), "Direct scene eligibility changed");
    if (!a) return;
    require(std::tie(a->width, a->atlas_width, a->atlas_height, a->frame, a->scene_identity) ==
            std::tie(b->width, b->atlas_width, b->atlas_height, b->frame, b->scene_identity) &&
            a->atlas == b->atlas && a->motions.size() == b->motions.size() && a->quads.size() == b->quads.size(),
            "Direct scene artwork/metadata changed");
    for (unsigned i = 0; i < a->motions.size(); ++i) {
        const auto &x = a->motions[i], &y = b->motions[i];
        require(std::tie(x.identity, x.x, x.y) == std::tie(y.identity, y.x, y.y),
                "Direct scene actor motion changed");
    }
    for (unsigned i = 0; i < a->quads.size(); ++i) {
        const auto &x = a->quads[i], &y = b->quads[i];
        require(std::tie(x.u, x.v, x.width, x.height, x.x, x.y, x.priority, x.motion, x.object,
                         x.clip.left, x.clip.top, x.clip.right, x.clip.bottom) ==
                std::tie(y.u, y.v, y.width, y.height, y.x, y.y, y.priority, y.motion, y.object,
                         y.clip.left, y.clip.top, y.clip.right, y.clip.bottom),
                "Direct scene draw commands changed");
    }
}
struct CapturedFrame {
    unsigned width;
    double aspect;
    std::uint64_t frame;
    std::vector<std::uint32_t> pixels, effect_reference;
    std::vector<std::uint8_t> effect_mask;
    std::shared_ptr<const eb::DirectSceneFrame> scene;
    explicit CapturedFrame(eb::PresentationFrame f)
        : width(f.width), aspect(f.fixed_aspect), frame(f.frame),
          pixels(f.pixels.begin(), f.pixels.end()),
          effect_reference(f.effect_reference.begin(), f.effect_reference.end()),
          effect_mask(f.effect_mask.begin(), f.effect_mask.end()), scene(std::move(f.scene)) {}
    void compare(const CapturedFrame &b) const {
        require(std::tie(width, aspect, frame, pixels, effect_reference, effect_mask) ==
                std::tie(b.width, b.aspect, b.frame, b.pixels, b.effect_reference, b.effect_mask),
                "Completed-frame pixels/effect metadata changed");
        compare_scene(scene, b.scene);
    }
};
void compare(eb::GameSession &a, eb::GameSession &b) {
    const auto x = a.diagnostics(true), y = b.diagnostics(true);
    require(state(x) == state(y), "CPU/APU/DSP/step/master-clock state changed");
    require(same(a.native_pixels(), b.native_pixels()), "Native framebuffer changed");
    require(same(a.save_memory(), b.save_memory()), "Save memory changed");
    CapturedFrame(a.presentation_frame()).compare(CapturedFrame(b.presentation_frame()));
}
std::vector<std::uint8_t> read_save(const std::string &path) {
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    require(bool(file) && file.tellg() == 8192, "Save must contain 8192 bytes");
    std::vector<std::uint8_t> bytes(8192);
    file.seekg(0); file.read(reinterpret_cast<char *>(bytes.data()), bytes.size());
    require(bool(file), "Cannot read save");
    return bytes;
}
struct Sampler {
    unsigned rate;
    eb::DisplaySettings settings;
    std::unique_ptr<Pipeline> pipeline;
    std::uint64_t samples{}, direct_samples{}, owned_direct_samples{}, rasters{};
    explicit Sampler(unsigned hz, eb::PresentationFrame initial) : rate(hz) {
        settings.frame_limit = int(hz);
        settings.interpolate_frames = false;
        settings.direct_rendering = true;
        pipeline = std::make_unique<Pipeline>(Time{}, settings, eb::FramePacer::frame_rate,
                                              double(hz), true, initial);
    }
    void draw(Time now) {
        auto picture = pipeline->picture(now);
        require(picture.width && picture.pixels.size() == std::size_t(picture.width) * 224,
                "Rate sampling returned invalid canvas");
        // Sample twice at the same time, including the high-rate position
        // sampler. Repeating a draw must not accumulate motion or mutate art.
        const std::vector<std::uint32_t> before(picture.pixels.begin(), picture.pixels.end());
        const auto artwork = picture.scene ? picture.scene->artwork : nullptr;
        std::vector<eb::DirectScenePicture::Offset> offsets;
        if (picture.scene) offsets = picture.scene->offsets;
        const auto again = pipeline->picture(now);
        require(same(before, again.pixels) && bool(again.scene) == bool(picture.scene),
                "Repeated same-time presentation sample changed pixels/scene");
        if (again.scene) {
            require(again.scene->artwork == artwork && again.scene->offsets.size() == offsets.size(),
                    "Repeated sample replaced immutable artwork");
            for (unsigned i = 0; i < offsets.size(); ++i)
                require(offsets[i].x == again.scene->offsets[i].x && offsets[i].y == again.scene->offsets[i].y,
                        "Repeated sample accumulated scene motion");
            ++direct_samples;
            const bool owned = std::any_of(artwork->motions.begin(), artwork->motions.end(),
                [](const auto &motion) { return bool(motion.identity >> 63); });
            owned_direct_samples += owned;
            if (owned && (owned_direct_samples == 1 || owned_direct_samples % 120 == 0)) {
                const auto raster = eb::rasterize_direct_scene(*again.scene);
                require(raster == eb::rasterize_direct_scene(*pipeline->picture(now).scene),
                        "Repeated direct raster changed pixels");
                ++rasters;
            }
        }
        pipeline->presented(now);
        ++samples;
    }
};
void run(const eb::GameAssets &assets, std::uint64_t frames, bool probe, bool world,
         const std::string &save_path, const std::string &input_path) {
    eb::GameSession baseline(assets.image, assets.version), sampled(assets.image, assets.version);
    for (auto *session : {&baseline, &sampled}) {
        session->set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
        session->enable_native_sprite_runtime();
        session->configure_presentation(522, false, true);
    }
    std::vector<std::uint8_t> save;
    if (world) {
        save = read_save(save_path);
        std::copy(save.begin(), save.end(), baseline.save_memory().begin());
        std::copy(save.begin(), save.end(), sampled.save_memory().begin());
    }
    std::array samplers{Sampler(60, sampled.presentation_frame()), Sampler(120, sampled.presentation_frame()),
                        Sampler(240, sampled.presentation_frame())};
    std::vector<CapturedFrame> expected, actual;
    baseline.observe_completed_frames([&](auto frame) { expected.emplace_back(frame); });
    sampled.observe_completed_frames([&](auto frame) {
        actual.emplace_back(frame);
        for (auto &sampler : samplers) sampler.pipeline->completed_frame(frame);
    });
    std::uint64_t callbacks = 0, audio_frames = 0, phase_start = 0, walking_frames = 0, nonblank = 0;
    unsigned phase = 0;
    eb::InputReplay input(eb::input_script(input_path));
    const auto epoch = [](std::uint64_t frame) { return Time{} + eb::FramePacer::period() * frame; };
    compare(baseline, sampled);
    while (baseline.frames() < frames) {
        const auto frame = baseline.frames();
        unsigned buttons = 0;
        if (world) {
            const auto a = baseline.debug().snapshot(), b = sampled.debug().snapshot();
            require(std::tie(a.ready, a.busy, a.party, a.status) ==
                    std::tie(b.ready, b.busy, b.party, b.status), "Native route debug state changed");
            if (phase == 0) {
                buttons = input_path.empty() ? (frame > 600 && frame % 60 < 5 ? 0x1080 : 0)
                                             : input.buttons_for_frame(frame);
                if (a.ready) { phase = 1; phase_start = frame; }
            } else if (phase == 1 && frame >= phase_start + 180) {
                for (auto *session : {&baseline, &sampled}) {
                    session->debug().configure({true, true, true, true});
                    session->debug().request({eb::GameDebugRequest::Kind::Teleport, 2, {}});
                }
                phase = 2; phase_start = frame;
            } else if (phase == 2) {
                buttons = a.status.starts_with("Waiting") && frame % 30 < 5 ? 0x80 : 0;
                if (frame >= phase_start + 300 && !a.busy) {
                    require(a.ready && a.status == "Teleported to Twoson.", "Twoson route was not entered");
                    phase = 3; phase_start = frame;
                }
            } else if (phase == 3) {
                constexpr unsigned direction[]{0x100, 0x200, 0x900, 0x600, 0};
                buttons = direction[((frame - phase_start) / 180) % 5];
                ++walking_frames;
            }
        }
        const auto elapsed = baseline.advance_frame(buttons);
        require(sampled.advance_frame(buttons) == elapsed, "Presentation samples changed completed frame count");
        require(expected.size() == actual.size() && actual.size() == elapsed,
                "Completed-frame callback count changed");
        for (unsigned i = 0; i < expected.size(); ++i) {
            expected[i].compare(actual[i]);
            require(expected[i].frame == ++callbacks, "Completed-frame callback sequence has a gap");
            nonblank += std::any_of(expected[i].pixels.begin(), expected[i].pixels.end(),
                                    [](auto pixel) { return (pixel & 0xffffff) != 0; });
        }
        compare(baseline, sampled);
        const auto before_sampling = sampled.diagnostics(true);
        const auto now = epoch(frame), end = epoch(sampled.frames());
        for (auto &sampler : samplers) {
            sampler.pipeline->simulation_finished(sampled.presentation_frame(), elapsed, now);
            // Host sampling only; native tick scheduling is covered separately.
            // Exact 60/120/240 Hz sample times are independent of the 60.0988 Hz
            // producer. Extra draws deliberately bypass presentation_due here.
            for (;;) {
                const auto draw_time = Time{} + std::chrono::duration_cast<Time::duration>(
                    std::chrono::duration<double>(double(sampler.samples) / sampler.rate));
                if (draw_time >= end) break;
                sampler.draw(draw_time);
            }
        }
        require(state(before_sampling) == state(sampled.diagnostics(true)),
                "Drawing advanced the native game or audio clocks");
        compare(baseline, sampled);
        const auto pcm = baseline.take_audio_samples();
        require(pcm == sampled.take_audio_samples(), "Presentation rate changed exact interleaved PCM");
        audio_frames += pcm.size() / 2;
        require(audio_frames == sampled.diagnostics().audio_frames, "PCM accounting lost samples");
        expected.clear(); actual.clear();
        if (sampled.frames() % 1000 == 0)
            std::cout << "  frame=" << sampled.frames() << " samples=" << samplers[0].samples << ','
                      << samplers[1].samples << ',' << samplers[2].samples << " native_direct="
                      << samplers[1].owned_direct_samples << ',' << samplers[2].owned_direct_samples << '\n'
                      << std::flush;
    }
    baseline.observe_completed_frames({}); sampled.observe_completed_frames({});
    require(audio_frames > 0 && nonblank > 0, "Replay never produced audio and visible frames");
    if (!probe) {
        if (world) {
            require(phase == 3 && walking_frames >= 900, "World rate proof did not exercise the complete route");
            for (unsigned i : {1u, 2u})
                require(samplers[i].owned_direct_samples >= 100 && samplers[i].rasters > 0,
                        "High-rate proof never sampled real native actor artwork through direct rendering");
        } else require(frames >= 6000, "Full demo proof requires 6000 frames; use --probe for a partial run");
    }
    if (world) require(read_save(save_path) == save, "Rate test modified its source save file");
    std::cout << (probe ? "PARTIAL" : "PASS") << " native presentation isolation "
              << (assets.version == eb::GameVersion::US ? "US" : "JP") << ' '
              << (world ? "Twoson" : "title-demo") << " frames=" << callbacks
              << " steps=" << sampled.steps() << " PCM_frames=" << audio_frames;
    for (const auto &s : samplers)
        std::cout << " rate" << s.rate << "={samples:" << s.samples << ",direct:" << s.direct_samples
                  << ",native_art:" << s.owned_direct_samples << ",rasters:" << s.rasters << '}';
    std::cout << " exact CPU/APU/clocks/PCM/native/presentation/callback comparison\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        std::vector<std::filesystem::path> packs;
        std::uint64_t frames = 6000;
        bool probe = false, world = false;
        std::string save, input;
        for (int i = 1; i < argc; ++i) {
            const std::string option = argv[i];
            if (option == "--assets" && i + 1 < argc) packs.emplace_back(argv[++i]);
            else if (option == "--frames" && i + 1 < argc) frames = std::stoull(argv[++i]);
            else if (option == "--save" && i + 1 < argc) save = argv[++i];
            else if (option == "--input-script" && i + 1 < argc) input = argv[++i];
            else if (option == "--probe") probe = true;
            else if (option == "--world-replay") world = true;
            else throw std::invalid_argument("Usage: native_presentation_rate_reference --assets pack.ebpak [--assets pack] [--frames 6000] [--probe] [--world-replay --save game.srm [--input-script new_game.input]]");
        }
        require(!packs.empty() && frames > 0 && (!world || !save.empty()), "Assets/frames/save arguments are incomplete");
        require(world || (save.empty() && input.empty()), "Save/input are only supported by --world-replay");
        for (const auto &pack : packs) run(eb::load_game_assets(pack, eb::asset_profiles()), frames, probe, world, save, input);
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
