// This reference-only executable borrows the independently linked original
// callback oracle and imported staff text. Production contains no source CPU.
#include "native_ending_text_oracle.hpp"

using namespace ending_text_reference;

namespace {
void callback_after_host_limit(const eb::GameAssets &assets, bool named) {
    const auto resources = CreditsResources::import(assets.image, assets.version);
    const auto layout = reference_layout(assets.version);
    CreditsTextScene scene(resources);
    Oracle oracle(assets.image, assets.version, layout.staff);
    const std::array<std::uint8_t, 4> bytes = assets.version == eb::GameVersion::JP
        ? std::array<std::uint8_t, 4>{0x41, 0x42, 0x43, 0x44}
        : std::array<std::uint8_t, 4>{0x71, 0x72, 0x73, 0x74};
    const auto name = named ? std::span<const std::uint8_t>(bytes)
                            : std::span<const std::uint8_t>{};
    while (!scene.scroll_complete()) {
        require(oracle.publish_next() == scene.publish_next_row(), "Ending text row publication differs");
        oracle.tick(name);
        scene.advance_callback(name);
        oracle.compare(scene);
    }
    const auto stopped = scene.state();
    require(!scene.advance_tick(name) && scene.state() == stopped,
            "Bounded credits convenience tick changed its stopped state");
    for (unsigned i = 0; i < 512; ++i) {
        require(oracle.publish_next() == scene.publish_next_row(), "Late ending text row publication differs");
        oracle.tick(name);
        scene.advance_callback(name);
        oracle.compare(scene);
    }
    require(scene.state().ticks == stopped.ticks + 512 && scene.script_ended() &&
                scene.state().cursor == layout.staff_bytes + 1,
            "Actual ending callback stopped at the caller's scroll threshold");
    std::cout << "PASS " << assets.title << (named ? " named" : " unnamed")
              << " ending callback beyond host limit: ticks=" << scene.state().ticks
              << " extra_NMIs=512 publications=" << oracle.publications << '\n';
}
}

int main(int argc, char **argv) {
    if (argc < 2) return 77;
    try {
        for (int i = 1; i < argc; ++i) {
            const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
            callback_after_host_limit(assets, false);
            callback_after_host_limit(assets, true);
        }
        return 0;
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
