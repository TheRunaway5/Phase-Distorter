#include "eb/native/appearance_service.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool value, const char *message) {
    if (!value)
        throw std::runtime_error(message);
}
template <class F> void rejects(F &&function) {
    try {
        function();
    } catch (const std::exception &) {
        return;
    }
    throw std::runtime_error("Invalid appearance service input accepted");
}
void check_gate() {
    AppearanceData data;
    data.shape_extents[0] = {8, 24};
    require(appearance_refresh_visible(data, 0, 8, 24) && appearance_refresh_visible(data, 0, 263, 247),
            "Visible refresh gate bounds differ");
    for (auto pair : {std::pair{7, 24}, {264, 24}, {8, 23}, {8, 248}, {-1, 30}, {8, -1}})
        require(!appearance_refresh_visible(data, 0, pair.first, pair.second),
                "Invisible refresh gate bounds differ");
    require(appearance_refresh_visible(data, 0, 65544, 65560), "Authored gate lost coordinate wrapping");
    rejects([&] { appearance_refresh_visible(data, 17, 8, 24); });
    rejects([&] { import_appearance_data({}, eb::GameVersion::US); });
}
void check_service() {
    native_sprite_test::Fixture fixture;
    auto resources = std::make_shared<SpriteResources>(fixture.bytes, fixture.layout);
    SpriteAppearance appearance(resources, 0);
    ActionActorState actor;
    actor.animation = 0;
    ActorActionContext action;
    AppearanceActorContext context;
    AppearanceSceneContext scene;
    AppearanceData data;
    data.shape_extents[0] = {8, 24};
    data.footstep_sounds[4] = 0x15;
    data.footstep_sounds[5] = 0x0f;
    const auto run = [&](NativeAction operation) {
        return apply_appearance_action({operation}, actor, action, context, scene, data, appearance);
    };
    require(!run(NativeAction::Unsupported).handled && !appearance.displayed(),
            "Unsupported service mutated appearance");
    action.projected_x = 7;
    action.projected_y = 24;
    require(run(NativeAction::CheckAppearanceVisible).script_value == 0,
            "Offscreen predicate did not return false");
    auto result = run(NativeAction::SelectFourFirst);
    require(result.handled && result.refreshed && !result.script_value && appearance.displayed()->pose == 0,
            "Authored first-frame entry incorrectly gated its offscreen refresh");
    action.projected_x = 8;
    require(run(NativeAction::CheckAppearanceVisible).script_value == 0xffff,
            "Gate predicate did not return authored true");
    result = run(NativeAction::SelectFourSecond);
    require(result.refreshed && !result.script_value && appearance.displayed()->pose == 1,
            "Visible second frame did not retain unknown transport return");
    action.projected_x = -1000;
    action.direction = 2;
    result = run(NativeAction::SelectFourInitial);
    require(result.refreshed && !result.script_value && appearance.displayed()->pose == 2,
            "Unconditional initial frame incorrectly used visibility gate");
    actor.animation = 0xffff;
    result = run(NativeAction::SelectFourAnimation);
    require(result.refreshed && !result.script_value && appearance.displayed()->pose == 3,
            "Actor animation did not select second frame");
    context.walking_style = 0x101;
    context.phase_id = 1;
    scene.movement_counter = 7;
    result = run(NativeAction::StepFourWalk);
    require(result.refreshed && !result.script_value, "Walking refresh transport result invented");
    result = run(NativeAction::StepFourWalk);
    require(!result.refreshed && result.script_value == 0x105,
            "Walking fingerprint cache-hit return differs");

    actor.animation = 0;
    actor.variables[2] = 1;
    actor.variables[3] = 1;
    context.walking_style = 0;
    context.footstep_owner = true;
    scene.footstep_kind = 4;
    result = run(NativeAction::StepEightAnimation);
    require(result.refreshed && !result.script_value && !result.sound && actor.variables[2] == 1,
            "Changed eight-direction fingerprint advanced timers or returned fabricated value");
    result = run(NativeAction::StepEightAnimation);
    require(result.refreshed && result.script_value == 0 && !result.sound && actor.animation == 2,
            "Eight-direction second-phase contract differs");
    result = run(NativeAction::StepEightAnimation);
    require(result.refreshed && result.script_value == 0 && result.sound == 0x15 && actor.animation == 0,
            "Authored footstep sound not produced");
    scene.footstep_override = 5;
    run(NativeAction::StepEightAnimation);
    result = run(NativeAction::StepEightAnimation);
    require(result.sound == 0x0f, "Footstep override was ignored");
    scene.transitions_disabled = true;
    run(NativeAction::StepEightAnimation);
    require(!run(NativeAction::StepEightAnimation).sound, "Disabled transitions emitted a footstep");
    scene.transitions_disabled = false;
    scene.intangibility_ticks = 44;
    result = run(NativeAction::StepEightAnimation);
    require(!result.script_value && appearance.flashing_hidden(),
            "Flashing returned a fabricated graphics-storage value");
    scene.teleport_destination = 3;
    scene.intangibility_ticks = 1;
    result = run(NativeAction::StepEightAnimation);
    require(result.script_value == 3 && appearance.flashing_hidden(),
            "Teleport tail did not retain visibility or exact return");

    actor.animation = 2;
    actor.variables[2] = 1;
    scene.footstep_override = 10;
    const auto selection = appearance.displayed();
    rejects([&] { run(NativeAction::StepEightAnimation); });
    require(actor.animation == 2 && actor.variables[2] == 1 && appearance.displayed() == selection,
            "Failed sound lookup committed partial appearance changes");
}
} // namespace
int main() {
    try {
        check_gate();
        check_service();
        std::cout
            << "PASS native appearance services, visibility gates, return contracts and sound intents\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
