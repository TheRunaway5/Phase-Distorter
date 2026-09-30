#include "eb/native/party/meter_window_resources.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
using namespace eb::native::party;
unsigned checks{};
void check(bool ok, const char* message) { ++checks; if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F operation) {
    bool rejected = false;
    try { operation(); } catch (const std::invalid_argument&) { rejected = true; }
    check(rejected, "Malformed meter resource input was accepted");
}
void region(eb::GameVersion version) {
    const unsigned labels = version == eb::GameVersion::US ? 0x3e3f8 : 0x3e3da;
    const unsigned status = version == eb::GameVersion::US ? 0x45a27 : 0x43806;
    std::vector<std::uint8_t> image(status + 294);
    const auto put = [&](unsigned at, unsigned value) { image[at] = value & 255; image[at + 1] = value >> 8; };
    for (unsigned i = 0; i < 8; ++i) image[labels + i] = std::uint8_t(i * 29 + 17);
    for (unsigned i = 0; i < 49; ++i) {
        put(status + i * 2, 0x1200 + i * 11);
        put(status + 98 + i * 2, 0xffff); // Adjacent alternate-text table is not the palette table.
        put(status + 196 + i * 2, 0xab00 + i * 13);
    }
    const auto resources = MeterWindowResources::import(image, version);
    check(resources->version() == version, "Meter resource region changed");
    for (unsigned i = 0; i < 8; ++i) check(resources->labels()[i] == std::uint8_t(i * 29 + 17), "Wrong meter label resource extent");
    std::array<std::uint8_t, 7> conditions{};
    check(resources->status(conditions) == MeterStatusArtwork{7, 4}, "Healthy meter fallback differs from source");
    for (unsigned group = 0; group < 7; ++group) {
        for (unsigned value = 1; value <= 49 - group * 7; ++value) {
            conditions.fill(0);
            conditions[group] = std::uint8_t(value);
            const auto index = group * 7 + value - 1;
            check(resources->status(conditions) == MeterStatusArtwork{std::uint16_t(0x1200 + index * 11),
                                                                      std::uint16_t(0xab00 + index * 13)},
                  "Meter status lost full words or bounded linear table indexing");
        }
        conditions.fill(0);
        conditions[group] = std::uint8_t(50 - group * 7);
        rejects([&] { resources->status(conditions); });
    }
    conditions.fill(1);
    check(resources->status(conditions).character == 0x1200, "Group0 did not take status precedence");
    conditions[0] = 0;
    check(resources->status(conditions).character == 0x1200 + 21 * 11, "Group3 did not take status precedence");
    conditions[3] = 0;
    check(resources->status(conditions).character == 0x1200 + 7 * 11, "Remaining status groups lost source order");
    const auto retained = resources->status(conditions);
    std::fill(image.begin(), image.end(), 0);
    check(resources->status(conditions) == retained && resources->labels()[0] == 17,
          "Meter resources borrowed mutable source image bytes");
    image.pop_back();
    rejects([&] { MeterWindowResources::import(image, version); });
    rejects([&] { MeterWindowResources::import({}, version); });
    rejects([&] { MeterWindowResources::import(image, eb::GameVersion(99)); });
}
} // namespace
int main() {
    try {
        region(eb::GameVersion::US); region(eb::GameVersion::JP);
        std::cout << "Native meter resources: " << checks << " checks passed\n";
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
