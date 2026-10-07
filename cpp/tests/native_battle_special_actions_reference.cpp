// Complete original special-action entries and their native counterparts.
// Startup supplies real battle/video owners. Direct helper entry is explicit;
// these cases do not pretend to execute intervening turns or the final teardown.
#define NATIVE_BATTLE_ACTIONS_REFERENCE_NO_MAIN
#include "native_battle_actions_reference.cpp"
#undef NATIVE_BATTLE_ACTIONS_REFERENCE_NO_MAIN
#include "native_battle_party_context.hpp"
#include <cstdlib>

namespace eb {
struct RuntimeStateAudit {
    static bool vblank_latch(const SnesBus &bus) { return bus.nmi_flag_; }
};
} // namespace eb
namespace {
struct SpecialCase {
    Kind kind;
    unsigned us, jp;
    const char *name;
    unsigned group;
};
constexpr SpecialCase special_cases[] = {
    {Kind::BTLACT_CLUMSYDEATH, 0xc29298, 0xc2922f, "BTLACT_CLUMSYDEATH", 1},
    {Kind::BTLACT_TELEPORT_BOX, 0xc2ab71, 0xc2ab24, "BTLACT_TELEPORT_BOX", 1},
    {Kind::BTLACT_MASTERBARFDEATH, 0xc292ee, 0xc29285, "BTLACT_MASTERBARFDEATH", 1},
    {Kind::BTLACT_POKEY_SPEECH, 0xc2c4c0, 0xc2c47a, "BTLACT_POKEY_SPEECH", 475},
    {Kind::BTLACT_POKEY_SPEECH_2, 0xc2c516, 0xc2c4d0, "BTLACT_POKEY_SPEECH_2", 475},
    {Kind::BTLACT_GIYGAS_PRAYER_1, 0xc2c572, 0xc2c52c, "BTLACT_GIYGAS_PRAYER_1", 478},
    {Kind::BTLACT_GIYGAS_PRAYER_2, 0xc2c5d1, 0xc2c58b, "BTLACT_GIYGAS_PRAYER_2", 479},
    {Kind::BTLACT_GIYGAS_PRAYER_3, 0xc2c5fa, 0xc2c5b4, "BTLACT_GIYGAS_PRAYER_3", 479},
    {Kind::BTLACT_GIYGAS_PRAYER_4, 0xc2c623, 0xc2c5dd, "BTLACT_GIYGAS_PRAYER_4", 479},
    {Kind::BTLACT_GIYGAS_PRAYER_5, 0xc2c64c, 0xc2c606, "BTLACT_GIYGAS_PRAYER_5", 479},
    {Kind::BTLACT_GIYGAS_PRAYER_6, 0xc2c675, 0xc2c62f, "BTLACT_GIYGAS_PRAYER_6", 479},
    {Kind::BTLACT_GIYGAS_PRAYER_7, 0xc2c69e, 0xc2c658, "BTLACT_GIYGAS_PRAYER_7", 479},
    {Kind::BTLACT_GIYGAS_PRAYER_8, 0xc2c6d0, 0xc2c68a, "BTLACT_GIYGAS_PRAYER_8", 480},
    {Kind::BTLACT_GIYGAS_PRAYER_9, 0xc2c6f0, 0xc2c6aa, "BTLACT_GIYGAS_PRAYER_9", 480},
};
void collect_group(Source &source, Native &n, unsigned group) {
    unsigned pointer = 0;
    for (unsigned byte = 0; byte < 3; ++byte)
        pointer |= unsigned(source.bus->read_byte(0xd0c60d + group * 8 + byte)) << (byte * 8);
    n.encounter.group = static_cast<std::uint16_t>(group);
    n.encounter.roster.clear();
    for (unsigned at = 0; at < 256; ++at) {
        const auto count = source.bus->read_byte(pointer + at * 3);
        if (count == 255)
            break;
        const auto enemy = source.bus->read_byte(pointer + at * 3 + 1) |
                           unsigned(source.bus->read_byte(pointer + at * 3 + 2)) << 8;
        for (unsigned i = 0; i < count; ++i)
            n.encounter.roster.push_back(static_cast<std::uint16_t>(enemy));
    }
    require(!n.encounter.roster.empty() && n.encounter.roster.size() <= 24,
            "Special-action prerequisite group has no owned encounter expansion");
    source.put(source.jp ? 0x4e12 : 0x4a8c, group);
    source.put(source.jp ? 0xa18c : 0x9f8a, n.encounter.roster.size());
    for (unsigned i = 0; i < n.encounter.roster.size(); ++i)
        source.put((source.jp ? 0xa18e : 0x9f8c) + i * 2, n.encounter.roster[i]);
}
void open_battle_window(Source &source, SessionRig &rig) {
    auto &n = rig.n;
    source.call(source.jp ? 0xc1db24 : 0xc1dd47, 14);
    auto window = n.windows.begin({dialogue::WindowAction::Open, dialogue::WindowId{14}, {}, 0});
    while (window->advance() == dialogue::OutputProgress::Suspended) {
        auto scene = n.scene.begin(*window->effect());
        while (scene->advance() != dialogue::Progress::Finished)
            if (scene->service())
                rig.service(*scene);
        scene.reset();
        window->respond();
    }
}
void special_action(const eb::GameAssets &assets, const SpecialCase &test) {
    std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US") << " special=" << test.name
              << " group=" << test.group << std::endl;
    counts = {};
    Resources resources(assets);
    Source source(assets);
    source.initialize();
    SessionRig rig(resources, test.group == 475);
    auto &n = rig.n;
    n.host_input = &source.raw_inputs;
    battle_party_reference::prepare_party_context(source, rig);
    collect_group(source, n, test.group);
    source.start_main();
    source.until(source.jp ? 0xc24f02 : 0xc24fcf);
    auto startup = n.startup->begin();
    n.drive(*startup);
    require(startup->complete(), "Special action prerequisite startup incomplete");
    startup.reset();
    compare_roster(source, n, "Special prerequisite");
    open_battle_window(source, rig);
    const unsigned records = source.jp ? 0xa1ae : 0x9fac;
    const unsigned attacker = source.jp ? 0xab72 : 0xa970;
    const unsigned target = source.jp ? 0xab74 : 0xa972;
    n.action.attacker = 0;
    n.action.target = 8;
    source.put(attacker, records);
    source.put(target, records + 8 * 78);
    n.action.target_flags = 1u << 8;
    source.put(target - 6, 1u << 8);
    source.put(target - 4, 0);
    if (test.kind == Kind::BTLACT_TELEPORT_BOX) {
        unsigned item = 0;
        // Action185 exists in the imported action table without an item
        // selecting it. Supply an explicit real item-parameter input to this
        // complete direct helper instead of inventing a Teleport Box item.
        for (unsigned i = 1; i < 254; ++i) {
            if (resources.substitutions->item_properties(i).parameters[0] >= 128) {
                item = i;
                break;
            }
        }
        require(item != 0, "Imported signed-strength helper input is missing");
        auto &actor = n.roster.at(0);
        actor.action_argument = static_cast<std::uint8_t>(item);
        actor.action_item_slot = 1;
        n.party.character(1).items[0] = static_cast<std::uint8_t>(item);
        source.bus->work_ram[(source.jp ? 0x9c7f : 0x99ce) + 35 - (source.jp ? 1 : 0)] = item;
        const auto bytes = encode(actor);
        std::copy(bytes.begin(), bytes.end(), source.bus->work_ram.begin() + records);
    }
    source.call(source.jp ? 0xc23ab9 : 0xc23bcf, 0);
    source.call(source.jp ? 0xc23bf4 : 0xc23d05);
    n.names.fix_attacker(0);
    n.names.fix_target();
    // The complete action starts from a declared fully visible, quiescent
    // fade. Both actual fade helpers configure the same incoming parameters;
    // this does not claim equivalence of the preceding startup's CPU duration.
    source.call(source.jp ? 0xc0885e : 0xc0886c, 0, 0);
    n.fade.begin_in(0, 0);
    source.bus->work_ram[0xd] = 15;
    source.bus->write_byte(0x2100, 15);
    n.fade.write_brightness(15);
    // Peripheral phase, including the genuine pending byte and RDNMI latch,
    // is an explicit direct-helper input. RNG/input/battle state is unchanged.
    n.clock.frame_counter = source.bus->work_ram[2];
    n.clock.new_frame_started = source.bus->work_ram[0x2b];
    n.clock.interrupt_mask = source.bus->work_ram[0x1e];
    const unsigned phase = story::AudioFrameClock::physical_phase(
        source.bus->scanline_index(), source.bus->scanline_clock(), source.bus->completed_frames);
    rig.bind_audio_clock(phase, source.bus->completed_frames,
                         eb::RuntimeStateAudit::vblank_latch(*source.bus),
                         [](std::uint64_t frame) { return std::uint16_t(frame & 2 ? 0x80 : 0); });
    source.call(source.jp ? test.jp : test.us);
    auto operation = rig.executor.begin_action(test.kind);
    drive_action(rig, *operation);
    require(operation->complete(), "Special action helper did not complete");
    compare_roster(source, n, test.name);
    compare_party(source, n);
    if (test.kind != Kind::BTLACT_GIYGAS_PRAYER_9)
        compare_action_shared(source, n);
    check_equal(source.word(source.jp ? 0xa141 : 0x9f3f),
                n.actors.appearance_scene().teleport_destination, "Special teleport destination");
    check_equal(source.word(source.jp ? 0xa143 : 0x9f41), rig.session.teleport_style,
                "Special teleport style");
    check_equal(source.word(source.jp ? 0xb6ec : 0xb53b), rig.audio.current_track(),
                "Actual completed music transfer");
    check_equal(source.bus->work_ram[0xd], n.fade.state().brightness, "Special display brightness");
    const std::array fade{n.fade.state().step, n.fade.state().delay, n.fade.state().remaining};
    for (unsigned i = 0; i < fade.size(); ++i)
        check_equal(source.bus->work_ram[0x28 + i], fade[i], "Special live fade field");
    for (unsigned i = 0; i < 256; ++i)
        check_equal(source.word(0x200 + i * 2), n.colors.staged_palette(i / 16)[i % 16],
                    "Special staged palette color=" + std::to_string(i));
    const auto vram = n.display.vram();
    for (unsigned i = 0; i < vram.size(); ++i)
        check_equal(source.bus->video_ram[i], vram[i],
                    "Special actual VRAM byte=" + std::to_string(i));
    for (unsigned i = 0; i < n.scratch.bytes.size(); ++i)
        check_equal(source.bus->work_ram[0x10000 + i], n.scratch.bytes[i],
                    "Special shared scratch byte=" + std::to_string(i));
    check_equal(source.polls, n.clock.input_polls, "Special action input polls");
    check_equal(source.word(source.jp ? 0xab7c : 0xa97a), n.frame_state.giygas_phase,
                "Actual Giygas phase");
    check_equal(source.word(source.jp ? 0xabe3 : 0xaa0e), n.encounter_state.special_defeat,
                "Actual special outcome");
    check_equal(source.word(source.jp ? 0x4e12 : 0x4a8c), n.encounter.group,
                "Actual replacement battle group");
    check_equal(source.word(attacker), records + *n.action.attacker * 78,
                "Special current attacker");
    check_equal(source.word(target), records + *n.action.target * 78, "Special current target");
    std::cout << (source.jp ? "JP" : "US") << " completed " << test.name
              << " checks=" << counts.words << " polls=" << source.polls
              << " instructions=" << source.cpu.instruction_count << std::endl;
}
} // namespace
int main(int argc, char **argv) {
    (void)&action_helpers;
    (void)&complete_session;
    if (argc < 2)
        return 77;
    try {
        const char *selected = std::getenv("EB_SPECIAL_REFERENCE_CASE");
        for (int arg = 1; arg < argc; ++arg) {
            const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
            unsigned executed = 0;
            for (const auto &test : special_cases) {
                if (selected && std::string_view(selected) != test.name)
                    continue;
                special_action(assets, test);
                ++executed;
            }
            require(executed != 0, "Selected special helper does not exist");
            std::cout << "Complete special helpers=" << executed << '\n';
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
