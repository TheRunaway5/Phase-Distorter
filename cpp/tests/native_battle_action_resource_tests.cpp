#include "eb/native/battle/action_resources.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
using eb::GameVersion;
using eb::native::battle::ActionResources;
using eb::native::battle::ShieldMessage;
unsigned checks{};
void check(bool value, const char* message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F operation, const char* message) {
    bool rejected{};
    try { operation(); } catch (const std::exception&) { rejected = true; }
    check(rejected, message);
}
void region(GameVersion version) {
    const unsigned table = version == GameVersion::US ? 0x157b68 : 0x158b1e;
    std::vector<std::uint8_t> input(table + 318 * 12, 0xda);
    // Include every raw byte value. Unknown action kinds are data, not an
    // importer error or an excuse to reinterpret the adjacent code pointer.
    for (unsigned action = 0; action < 318; ++action)
        input[table + action * 12 + 2] = std::uint8_t(action);
    const auto imported = ActionResources::import(input, version);
    check(imported->version() == version, "Action region changed");
    std::fill(input.begin(), input.end(), 0);
    for (unsigned action = 0; action < 318; ++action)
        check(imported->type(action) == std::uint8_t(action), "Raw action type or owned import differs");
    const std::array<std::array<std::uint8_t, 4>, 3> us{{
        {0xd2, 0x70, 0xef, 0}, {0xfa, 0x70, 0xef, 0}, {0x99, 0x70, 0xef, 0}}};
    const std::array<std::array<std::uint8_t, 4>, 3> jp{{
        {0xa8, 0x35, 0xc7, 0}, {0xce, 0x35, 0xc7, 0}, {0x6e, 0x35, 0xc7, 0}}};
    for (unsigned message = 0; message < 3; ++message)
        check(imported->message(static_cast<ShieldMessage>(message)) ==
                  (version == GameVersion::US ? us : jp)[message], "Regional shield reference differs");
    rejects([&]{ imported->type(318); }, "Action outside the table was accepted");
    rejects([&]{ imported->type(~0u); }, "Wrapped action was accepted");
    rejects([&]{ imported->message(static_cast<ShieldMessage>(3)); }, "Invalid shield message was accepted");
    for (const auto size : {0u, table - 1, table, table + 318 * 12 - 1})
        rejects([&]{ ActionResources::import(std::span(input).first(size), version); },
                "Truncated final action record was accepted");
}
}
int main() {
    try {
        region(GameVersion::US);
        region(GameVersion::JP);
        rejects([]{ ActionResources::import({}, static_cast<GameVersion>(0xff)); },
                "Unsupported action region was accepted");
        std::cout << "native battle action resources: " << checks << " checks passed\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
