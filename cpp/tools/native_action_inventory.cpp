// Diagnostic import report only. No source CPU/runtime is linked or executed.
#include "eb/native/action_program.hpp"
#include "generated_assets.hpp"
#include <array>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <stdexcept>
#include <string_view>
#include <utility>

namespace {
using namespace eb::native;
std::string_view name(ActionRequestKind kind) {
    constexpr std::array names{
        "CallEngine", "SetTickCallback", "ClearTickCallback", "SetDrawCallback",
        "SetProjectionCallback", "SetPhysicsCallback", "SetAnimationResource",
        "ReadGameVariable", "WriteGameByte", "WriteGameWord", "ModifyGameByte",
        "ModifyGameWord", "SetBackgroundX", "SetBackgroundY", "SetBackgroundVelocityX",
        "SetBackgroundVelocityY", "AddBackgroundVelocityX", "AddBackgroundVelocityY",
        "AddBackgroundX", "AddBackgroundY", "StopBackground"};
    return names.at(unsigned(kind));
}
struct Sites {
    std::set<std::uint32_t> known, opaque;
};
void report(const eb::GameAssets &assets) {
    const CompiledActionProgram program(import_action_scripts(assets.image, assets.version), assets.version);
    std::map<std::pair<ActionRequestKind, std::uint32_t>, Sites> requests;
    for (std::size_t token = 0; token < program.stats().operations; ++token) {
        if (program.operation(token).operation != NativeAction::Unsupported)
            continue;
        const auto &at = program.diagnostic(token);
        auto &sites = requests[{at.kind, at.authored_identifier}];
        (at.inline_length_known ? sites.known : sites.opaque).insert(at.instruction);
    }
    const auto region = assets.version == eb::GameVersion::JP ? "JP" : "US";
    for (const auto &[request, sites] : requests) {
        std::cout << region << '\t' << name(request.first) << '\t' << "0x" << std::hex
                  << std::setw(6) << std::setfill('0') << request.second << std::dec << '\t'
                  << sites.known.size() << '\t' << sites.opaque.size() << '\t';
        std::set<std::uint32_t> all = sites.known;
        all.insert(sites.opaque.begin(), sites.opaque.end());
        bool first = true;
        for (const auto instruction : all) {
            if (!std::exchange(first, false)) std::cout << ',';
            std::cout << "0x" << std::hex << std::setw(6) << std::setfill('0') << instruction << std::dec;
        }
        std::cout << '\n';
    }
}
} // namespace

int main(int argc, char **argv) {
    try {
        if (argc < 2) throw std::invalid_argument("native_action_inventory pack.ebpak ...");
        std::cout << "region\trequest_kind\tauthored_identifier\tknown_length_sites\topaque_sites\tcontent_offsets\n";
        for (int i = 1; i < argc; ++i) report(eb::load_game_assets(argv[i], eb::asset_profiles()));
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
