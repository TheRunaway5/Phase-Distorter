#include "eb/desktop_presentation.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
void require(bool ok, const char *message) {
    if (!ok) throw std::runtime_error(message);
}
void preferences(eb::GameVersion region, int rate) {
    std::vector<std::uint8_t> cartridge(0x300000);
    const unsigned entry = region == eb::GameVersion::US ? 0x875f : 0x8755;
    cartridge[0xfffc] = entry;
    cartridge[0xfffd] = entry >> 8;
    eb::GameSession session(cartridge, region);
    eb::DisplaySettings settings;
    settings.frame_limit = rate;
    eb::configure_desktop_presentation(session, settings, 398);
    require(session.presentation_frame().unfiltered_mask.empty(), "Disabled filter allocated UI metadata");
    const auto disabled = session.save_snapshot();
    settings.reduce_flashing = true;
    eb::configure_desktop_presentation(session, settings, 398);
    require(session.presentation_frame().unfiltered_mask.size() == 398 * 224,
            "Desktop photosensitivity preference did not enable the text/menu exemption");
    session.advance_frame(0);
    session.load_snapshot(disabled);
    eb::configure_desktop_presentation(session, settings, 522);
    require(session.presentation_frame().unfiltered_mask.size() == 522 * 224,
            "Snapshot restoration lost the desktop text/menu exemption");
    settings.reduce_flashing = false;
    eb::configure_desktop_presentation(session, settings, 522);
    require(session.presentation_frame().unfiltered_mask.empty(), "Disabling filter retained UI metadata");
}
} // namespace
int main() {
    try {
        for (auto region : {eb::GameVersion::US, eb::GameVersion::JP})
            for (int rate : {60, 144, 300}) preferences(region, rate);
        std::cout << "Desktop photosensitivity settings preserve UI exemptions through toggles and restoration\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
