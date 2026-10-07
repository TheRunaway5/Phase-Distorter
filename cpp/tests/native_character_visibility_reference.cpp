// Complete original C4608C/C463F4/C4645A helper comparison. No callee hooks,
// graphical fade acknowledgment, source-output seeding, or original CPU in the
// native module. The actor flags below are independent declared caller inputs.
#include "eb/native/world_character_visibility.hpp"
#include "generated_assets.hpp"
#include "native_battle_frame_fixture.hpp"
#include "native_encounter_source_fixture.hpp"
#include <iostream>

namespace {
using namespace eb::native;
using Source = encounter_reference::Source;
std::uint64_t checks{};
void same(unsigned a, unsigned b, const char* what) {
    ++checks;
    if (a != b) throw std::runtime_error(std::string(what) + " original=" + std::to_string(a) + " native=" + std::to_string(b));
}
void run(const eb::GameAssets& assets) {
    Source source(assets);
    party::State party(assets.version);
    WorldPartyState formation;
    ActorWorld actors(battle_frame_test::make_sprites(), battle_frame_test::make_scripts(), assets.version);
    WorldCharacterVisibility visibility(party, formation, actors);
    const unsigned game = source.jp ? 0x9aa9 : 0x97f5, shift = source.jp ? 3 : 0;
    const unsigned flags = source.jp ? 0x1160 : 0x116a, intangible = source.jp ? 0x60de : 0x5d58;
    party.display_order = {1, 2, 1, 0, 4, 0};
    formation.roles = {29, 26, 24, 25, 27, 28};
    formation.current_leader_role = 23;
    source.put(game + 148 - shift, formation.current_leader_role);
    for (unsigned i = 0; i < 6; ++i) {
        source.bus->work_ram[game + 150 - shift + i] = party.display_order[i];
        source.put(game + 162 - shift + 2 * i, formation.roles[i]);
    }
    unsigned lookups{}, mutations{};
    for (unsigned member = 0; member < 65536; ++member) {
        source.call(source.jp ? 0xc43dda : 0xc4608c, member);
        same(source.cpu.accumulator, visibility.role(std::uint16_t(member)), "Complete member-role helper");
        ++lookups;
    }
    for (unsigned count = 0; count <= 6; ++count)
        for (unsigned blinking : {0u, 1u, 0xffffu})
            for (unsigned member = 0; member < 258; ++member)
                for (bool visible : {false, true}) {
                    const auto selector = member == 256 ? 0xffffu : member == 257 ? 0x100u : member;
                    party.party_count = std::uint8_t(count);
                    source.bus->work_ram[game + 174 - shift] = std::uint8_t(count);
                    source.put(intangible, blinking);
                    actors.appearance_scene().intangibility_ticks = std::uint16_t(blinking);
                    std::array<unsigned, 30> incoming{};
                    for (unsigned role = 0; role < 30; ++role) {
                        const bool hidden = ((role + member) & 1) != 0;
                        incoming[role] = ((role * 0x123) & 0x7fff) | (hidden ? 0x8000 : 0);
                        source.put(flags + role * 2, incoming[role]);
                        actors.set_authored_sprite_hidden(role, hidden);
                    }
                    source.call(visible ? (source.jp ? 0xc441c4 : 0xc4645a)
                                        : (source.jp ? 0xc4415a : 0xc463f4), selector);
                    if (visible) visibility.show(std::uint16_t(selector));
                    else visibility.hide(std::uint16_t(selector));
                    for (unsigned role = 0; role < 30; ++role) {
                        const auto actual = source.word(flags + role * 2);
                        if (((actual & 0x8000) != 0) != actors.authored_sprite_hidden(role))
                            throw std::runtime_error("Visibility mismatch region=" + std::string(source.jp ? "JP" : "US") +
                                " count=" + std::to_string(count) + " blinking=" + std::to_string(blinking) +
                                " selector=" + std::to_string(selector) + " show=" + std::to_string(visible) +
                                " role=" + std::to_string(role) + " word=" + std::to_string(actual));
                        same((actual & 0x8000) != 0, actors.authored_sprite_hidden(role), "Complete visibility flags");
                        same(actual & 0x7fff, incoming[role] & 0x7fff, "Original retained low descriptor bits");
                    }
                    same(source.word(intangible), actors.appearance_scene().intangibility_ticks, "Complete hide/show intangibility");
                    ++mutations;
                }
    std::cout << (source.jp ? "JP" : "US") << " complete character-visibility lookups=" << lookups
              << " mutations=" << mutations << " cumulative_checks=" << checks << '\n';
}
}
int main(int argc, char** argv) {
    if (argc < 2) return 77;
    try {
        for (int i = 1; i < argc; ++i) run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
