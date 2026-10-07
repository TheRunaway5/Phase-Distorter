#include "native_battle_frame_fixture.hpp"

namespace {
using namespace battle_frame_test;
using eb::GameVersion;

std::shared_ptr<const ActionScriptData> yielding_script(GameVersion version) {
    const auto address = version == GameVersion::US ? 0xc46e46u : 0xc44bcau;
    // An actual actor waits three visits, then executes EVENT_YIELD_TO_TEXT.
    return std::make_shared<ActionScriptData>(
        std::vector<std::uint8_t>{0x06, 3, 0x42, std::uint8_t(address),
                                 std::uint8_t(address >> 8), std::uint8_t(address >> 16), 0x09},
        0, std::vector<std::uint32_t>{0});
}

void actor_producer(GameVersion version) {
    Fixture f(version);
    ActorWorld actors(make_sprites(), yielding_script(version), version);
    const auto id = actors.create(actor());
    actors.actor(id).appearance.select_four(0, 0, 0);
    story::Scene scene(f.windows, f.party, f.random, f.meters, f.clock, f.input,
                       actors, f.area, f.palettes);
    actors.scene().action_script_state = 0xbeef;
    f.output.policy().instant = true;
    auto random = f.random;
    story::next_random(random);
    auto& registers = f.text.window().active;
    registers.working = 0x12345678;
    registers.argument = 0x87654321;
    registers.secondary = 0x5a;
    dialogue::Conversation text(program(version, {0x1f, 0x61, 0x02}), f.windows);
    text.start(dialogue::EntryId{0});
    auto op = scene.begin(text);
    unsigned polls = 0;
    while (next(*op) != dialogue::Progress::Finished) {
        check(op->service() == story::SceneService::Frame,
              "The typed actor yield escaped to an opaque host service");
        check(!f.output.policy().instant, "Wait did not clear instant printing");
        check(f.random == random, "Wait repeated WINDOW_TICK random work");
        check(text.snapshot().consumed_bytes == 2, "Wait consumed following dialogue early");
        if (!polls) check(actors.scene().action_script_state == 0, "Wait accepted a stale yield");
        const auto ticks = actors.ticks();
        for (unsigned repeat = 0; repeat < 3; ++repeat)
            check(op->advance() == dialogue::Progress::Suspended && actors.ticks() == ticks,
                  "Unanswered frame replayed action scripts");
        op->complete_frame({0, 0});
        check(++polls < 10, "Actual actor producer did not terminate the dialogue wait");
    }
    check(polls == 4 && actors.ticks() == 4, "Actor sleep/yield visits changed");
    check(actors.scene().action_script_state == 0 && text.finished(), "Yield was not consumed once");
    check(f.clock.input_polls == polls && !f.clock.action_scripts_disabled,
          "Wait changed input or leaked the actor guard");
    check(registers.working == 0x12345678 && registers.argument == 0x87654321 &&
              registers.secondary == 0x5a, "Wait changed dialogue registers");
}

void debug_input(GameVersion version) {
    for (bool debug : {false, true}) {
        Fixture f(version);
        f.start();
        f.windows.prompt_state().debug = debug ? 0xffff : 0;
        dialogue::Conversation text(program(version, {0x1f, 0x61, 0x02}), f.windows);
        text.start(dialogue::EntryId{0});
        auto op = f.scene->begin(text);
        service(*op, story::SceneService::Frame);
        op->complete_frame({0x1000, 0});
        service(*op, story::SceneService::Frame);
        // Source tests the held PAD_STATE, not edge-triggered PAD_PRESS.
        f.input.state[0] = 0x3000;
        op->complete_frame({0x3000, 0});
        check(f.input.pressed[0] == 0, "Held-button fixture unexpectedly generated an edge");
        if (!debug) {
            service(*op, story::SceneService::Frame);
            f.actors.scene().action_script_state = 0x8000;
            op->complete_frame({0, 0});
        }
        finish(*op);
        check(f.actors.scene().action_script_state == 0, "Live nonboolean signal was retained");
        check(f.clock.input_polls == (debug ? 2u : 3u), "Debug exit consumed an extra input frame");
    }
}

void early_window(GameVersion version) {
    if (version != GameVersion::US) return;
    Fixture f(version);
    f.start();
    f.windows.menu_state().early_tick_exit = 1;
    f.windows.prompt_state().debug = 1;
    f.input.state[0] = 0x3000;
    f.actors.scene().action_script_state = 9;
    dialogue::Conversation text(program(version, {0x1f, 0x61, 0x02}), f.windows);
    text.start(dialogue::EntryId{0});
    auto op = f.scene->begin(text);
    finish(*op);
    check(!f.clock.input_polls && !f.actors.ticks() && !f.actors.scene().action_script_state,
          "Early WINDOW_TICK/debug exit invented a publication or accepted stale signal");
}
}

int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            actor_producer(version);
            debug_input(version);
            early_window(version);
        }
        std::cout << "Native action-script wait tests passed " << checks << " checks\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "Native action-script wait failure after " << checks << ": " << error.what() << '\n';
        return 1;
    }
}
