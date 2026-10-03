// Optional imported-asset integration proof, deliberately not registered with
// CTest without local assets (returns 77). Example arguments:
// --assets game.ebpak --replay new_game.input --frames 14500.
#include "eb/asset_store.hpp"
#include "eb/direct_scene.hpp"
#include "eb/game_debug.hpp"
#include "eb/game_session.hpp"
#include "eb/input_replay.hpp"
#include "generated_assets.hpp"

#include <algorithm>
#include <array>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <tuple>
#include <vector>

namespace {
void require(bool value, const char *message) {
    if (!value) throw std::runtime_error(message);
}
template<class A, class B> bool equal(const A &a, const B &b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}
auto diagnostics(const eb::SessionDiagnostics &d) {
    return std::tie(d.frames, d.steps, d.master_clocks, d.cpu_instructions,
                    d.audio_cpu_instructions, d.audio_frames, d.native_gameplay_batches,
                    d.source_width, d.cpu_state, d.audio_cpu_state);
}
void compare_scene(const std::shared_ptr<const eb::DirectSceneFrame> &a,
                   const std::shared_ptr<const eb::DirectSceneFrame> &b) {
    require(bool(a) == bool(b), "Restored direct scene eligibility differs");
    if (!a) return;
    require(std::tie(a->width, a->atlas_width, a->atlas_height, a->frame, a->scene_identity) ==
            std::tie(b->width, b->atlas_width, b->atlas_height, b->frame, b->scene_identity) &&
            a->atlas == b->atlas && a->motions.size() == b->motions.size() && a->quads.size() == b->quads.size(),
            "Restored direct scene artwork or metadata differs");
    for (std::size_t i = 0; i < a->motions.size(); ++i) {
        const auto &x = a->motions[i], &y = b->motions[i];
        require(std::tie(x.identity, x.x, x.y) == std::tie(y.identity, y.x, y.y),
                "Restored direct scene actor motion differs");
    }
    for (std::size_t i = 0; i < a->quads.size(); ++i) {
        const auto &x = a->quads[i], &y = b->quads[i];
        require(std::tie(x.u, x.v, x.width, x.height, x.x, x.y, x.priority, x.motion, x.object,
                         x.clip.left, x.clip.top, x.clip.right, x.clip.bottom) ==
                std::tie(y.u, y.v, y.width, y.height, y.x, y.y, y.priority, y.motion, y.object,
                         y.clip.left, y.clip.top, y.clip.right, y.clip.bottom),
                "Restored direct scene draw commands differ");
    }
}
struct Frame {
    unsigned width;
    double aspect;
    std::uint64_t number;
    std::vector<std::uint32_t> pixels, references;
    std::vector<std::uint8_t> effects;
    std::shared_ptr<const eb::DirectSceneFrame> scene;
    explicit Frame(eb::PresentationFrame f)
        : width(f.width), aspect(f.fixed_aspect), number(f.frame),
          pixels(f.pixels.begin(), f.pixels.end()),
          references(f.effect_reference.begin(), f.effect_reference.end()),
          effects(f.effect_mask.begin(), f.effect_mask.end()), scene(std::move(f.scene)) {}
    void compare(const Frame &other) const {
        require(std::tie(width, aspect, number, pixels, references, effects) ==
                std::tie(other.width, other.aspect, other.number, other.pixels, other.references, other.effects),
                "Restored picture or flashing-effect metadata differs");
        compare_scene(scene, other.scene);
    }
};
void compare(eb::GameSession &a, eb::GameSession &b) {
    const auto x = a.diagnostics(true), y = b.diagnostics(true);
    require(diagnostics(x) == diagnostics(y), "Restored CPU/APU/DSP/step/master-clock state differs");
    require(a.logical_clock_policy() == b.logical_clock_policy(), "Restored logical clock policy differs");
    require(equal(a.native_pixels(), b.native_pixels()), "Restored native framebuffer differs");
    require(equal(a.save_memory(), b.save_memory()), "Restored SRAM differs");
    Frame(a.presentation_frame()).compare(Frame(b.presentation_frame()));
}
std::vector<std::uint8_t> read_save(const std::filesystem::path &path) {
    std::ifstream input(path, std::ios::binary | std::ios::ate);
    require(bool(input) && input.tellg() == 8192, "Input save must contain 8192 bytes");
    std::vector<std::uint8_t> bytes(8192);
    input.seekg(0);
    input.read(reinterpret_cast<char *>(bytes.data()), bytes.size());
    require(bool(input), "Cannot read input save");
    return bytes;
}
std::uint16_t input_at(const std::vector<eb::InputChange> &script, std::uint64_t frame) {
    const auto found = std::upper_bound(script.begin(), script.end(), frame,
        [](std::uint64_t at, const eb::InputChange &change) { return at < change.frame; });
    return found == script.begin() ? 0 : std::prev(found)->buttons;
}
void continuation(const eb::GameAssets &assets, eb::GameSession &reference,
                  const std::vector<eb::InputChange> &script, bool partial, bool native) {
    if (partial)
        reference.advance_frame(input_at(script, reference.frames()), reference.steps() + 17);
    const auto checkpoint = reference.save_snapshot();
    require(checkpoint == reference.save_snapshot(), "Exporting a snapshot changed the running state");
    eb::GameSession restored(assets.image, assets.version, !native);
    // Opposite startup/presentation settings prove restoration is self-contained.
    restored.configure_presentation(640, false, false);
    std::vector<Frame> actual, expected;
    restored.observe_completed_frames([&](eb::PresentationFrame f) { actual.emplace_back(f); });
    reference.observe_completed_frames([&](eb::PresentationFrame f) { expected.emplace_back(f); });
    restored.load_snapshot(checkpoint);
    compare(reference, restored);
    require(checkpoint == restored.save_snapshot(), "Fresh-session restoration changed archived state");
    const auto pending = reference.take_audio_samples();
    require(pending == restored.take_audio_samples(), "Snapshot lost pending PCM samples");
    std::uint64_t pcm_frames = pending.size() / 2;
    const auto stop = reference.frames() + 48;
    for (unsigned iteration = 0; reference.frames() < stop; ++iteration) {
        const auto buttons = input_at(script, reference.frames());
        const auto limit = iteration % 11 == 0 ? reference.steps() + 23 : 0;
        const auto a = reference.advance_frame(buttons, limit);
        const auto b = restored.advance_frame(buttons, limit);
        require(a == b && expected.size() == actual.size(), "Restored completed-frame sequence differs");
        compare(reference, restored);
        for (std::size_t i = 0; i < expected.size(); ++i) expected[i].compare(actual[i]);
        expected.clear();
        actual.clear();
        const auto audio = reference.take_audio_samples();
        require(audio == restored.take_audio_samples(), "Restored DSP continuation PCM differs");
        pcm_frames += audio.size() / 2;
    }
    require(reference.save_snapshot() == restored.save_snapshot(),
            "Restored complete state diverged after continued source execution");
    require(pcm_frames > 0, "Continuation generated no PCM");
    reference.observe_completed_frames({});
    restored.observe_completed_frames({});
    std::cout << (assets.version == eb::GameVersion::US ? "US" : "JP")
              << (native ? " native wide/direct" : " original source")
              << (partial ? " partial-step" : " completed-frame")
              << " frame=" << reference.frames() << " bytes=" << checkpoint.size()
              << " PCM_frames=" << pcm_frames << " exact restart/continuation match\n";
}
void run(const eb::GameAssets &assets, const std::vector<std::uint8_t> &save,
         const std::vector<eb::InputChange> &script, std::uint64_t checkpoint_frame,
         bool native, bool require_gameplay, bool rescue_bootstrap) {
    eb::GameSession session(assets.image, assets.version, native);
    if (!save.empty()) std::copy(save.begin(), save.end(), session.save_memory().begin());
    session.enable_native_sprite_runtime(native);
    session.set_logical_clock_policy(native ? eb::LogicalClockPolicy::ActorFrames
                                           : eb::LogicalClockPolicy::SourceTiming);
    session.configure_presentation(native ? 426 : 256, native, native);
    bool teleported = false;
    while (session.frames() < checkpoint_frame) {
        const auto frame = session.frames();
        std::uint16_t buttons = 0;
        if (rescue_bootstrap) {
            if (frame > 600 && frame < 1260 && frame % 60 < 5) buttons = 0x1080;
            if (frame >= 1600 && frame < 1900 && frame % 60 < 5) buttons = 0x8000;
            if (frame >= 2000 && !teleported) {
                session.debug().request({eb::GameDebugRequest::Kind::Teleport, 1217, {}});
                teleported = true;
            }
            const auto debug = session.debug().snapshot();
            if (debug.busy && debug.status.starts_with("Waiting") && frame % 30 < 5) buttons = 0x80;
        }
        if (!rescue_bootstrap || (!script.empty() && frame >= script.front().frame))
            buttons = input_at(script, frame);
        session.advance_frame(buttons);
        // Leave the last frame's pending PCM in the snapshot.
        if (session.frames() < checkpoint_frame) (void)session.take_audio_samples();
    }
    const auto world = session.debug().snapshot();
    std::cout << "Checkpoint frame=" << session.frames() << " ready=" << world.ready << " party=";
    for (const auto member : world.party) std::cout << member;
    std::cout << '\n' << std::flush;
    require(!require_gameplay || world.ready, "Replay did not reach a loaded gameplay world");
    require(!rescue_bootstrap || (world.ready && world.party[1]), "Rescue replay did not recruit Paula");
    continuation(assets, session, script, false, native);
    continuation(assets, session, script, true, native);
}
} // namespace
int main(int argc, char **argv) {
    if (argc == 1) return 77;
    try {
        std::vector<std::filesystem::path> packs;
        std::string script_path, save_path, mode = "both";
        std::uint64_t frames = 900;
        bool require_gameplay = false, rescue_bootstrap = false;
        for (int i = 1; i < argc; ++i) {
            const std::string arg = argv[i];
            if (arg == "--assets" && i + 1 < argc) packs.emplace_back(argv[++i]);
            else if (arg == "--replay" && i + 1 < argc) script_path = argv[++i];
            else if (arg == "--save" && i + 1 < argc) save_path = argv[++i];
            else if (arg == "--frames" && i + 1 < argc) frames = eb::parse_unsigned_integer(argv[++i], arg);
            else if (arg == "--mode" && i + 1 < argc) mode = argv[++i];
            else if (arg == "--require-gameplay") require_gameplay = true;
            else if (arg == "--party-rescue-bootstrap") rescue_bootstrap = true;
            else throw std::runtime_error("Unknown or incomplete argument: " + arg);
        }
        require(!packs.empty() && frames > 0, "Supply --assets FILE and a positive --frames count");
        require(mode == "both" || mode == "native" || mode == "source", "Mode must be both, native or source");
        const auto script = eb::input_script(script_path);
        const auto save = save_path.empty() ? std::vector<std::uint8_t>{} : read_save(save_path);
        for (const auto &pack : packs) {
            const auto assets = eb::load_game_assets(pack, eb::asset_profiles());
            if (mode != "native") run(assets, save, script, frames, false, require_gameplay, rescue_bootstrap);
            if (mode != "source") run(assets, save, script, frames, true, require_gameplay, rescue_bootstrap);
        }
    } catch (const std::exception &error) {
        std::cerr << "game_session_snapshot_reference: " << error.what() << '\n';
        return 1;
    }
}
