#include "eb/native/sprite_appearance.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const char *message) {
    if (!ok)
        throw std::runtime_error(message);
}
template <class F> void rejects(F &&operation) {
    bool rejected = false;
    try {
        operation();
    } catch (const std::exception &) {
        rejected = true;
    }
    require(rejected, "Invalid appearance state accepted");
}
} // namespace

int main() {
    try {
        native_sprite_test::Fixture fixture;
        auto resources = std::make_shared<SpriteResources>(fixture.bytes, fixture.layout);
        SpriteAppearance appearance(resources, 0);
        ActionActorState actor;
        actor.position[1] = 0x00638000;
        actor.priority = 1;
        require(!appearance.draw(actor, 12, 30).visible && !appearance.displayed(),
                "New actor invented displayed artwork");
        actor.animation = 0;
        require(!appearance.draw(actor, 12, 30).visible, "Animation index implicitly loaded a pose");
        constexpr unsigned four_expected[]{0, 0, 2, 4, 4, 4, 6, 0, 8, 10, 12, 14};
        constexpr unsigned eight_expected[]{0, 8, 2, 10, 4, 12, 6, 14};
        for (unsigned direction = 0; direction < 12; ++direction) {
            appearance.select_four(direction, 0, 0);
            require(appearance.displayed()->pose == four_expected[direction], "Four-direction first pose differs");
            appearance.select_four(direction, 0xffff, 0);
            require(appearance.displayed()->pose == four_expected[direction] + 1,
                    "Four-direction nonzero animation did not select second pose");
        }
        for (unsigned direction = 0; direction < 8; ++direction) {
            appearance.select_eight(direction, 0, 0);
            require(appearance.displayed()->pose == eight_expected[direction], "Eight-direction first pose differs");
            appearance.select_eight(direction, 2, 0);
            require(appearance.displayed()->pose == eight_expected[direction] + 1,
                    "Eight-direction byte-offset selection differs");
            require(appearance.draw(actor, 0, 0).format == SpriteFrameFormat::EightDirection,
                    "Eight-direction artwork format was lost before drawing");
        }
        appearance.select_four(2, 0, 8);
        const auto latched = appearance.displayed();
        appearance.set_sprite(1);
        actor.animation = 1;
        const auto unchanged = appearance.draw(actor, 12, 30, 3);
        require(appearance.displayed() == latched && unchanged.sprite == 0 && unchanged.pose == 2 &&
                    unchanged.surface == SpriteSurface::Shallow && unchanged.upper_layer == 7 &&
                    unchanged.lower_layer == 7 && unchanged.palette == 5 && unchanged.depth_y == 99,
                "Draw changed latched artwork or used stale scenery priority/depth");
        appearance.select_four(4, actor.animation, 12);
        require(appearance.displayed() == SpriteFrameSelection{1, 5, SpriteSurface::Deep},
                "Explicit refresh did not latch requested artwork/surface");
        actor.animation = 0x8000;
        require(!appearance.draw(actor, 0, 0).visible, "Negative animation did not hide the actor");
        actor.animation = 0;
        actor.alive = false;
        require(!appearance.draw(actor, 0, 0).visible, "Ended actor stayed visible");
        actor.alive = true;

        SpriteAppearance walk(resources, 0);
        FourDirectionWalk input{2, 0, 0, 0, 0};
        require(walk.step_four_walk(input) && walk.displayed()->pose == 2, "First walking frame missing");
        input.surface_flags = 12;
        require(!walk.step_four_walk(input) && walk.displayed()->surface == SpriteSurface::Normal,
                "Unchanged walking fingerprint uploaded new surface artwork");
        input.movement_counter = 7;
        input.phase_id = 1;
        require(walk.step_four_walk(input) && walk.displayed()->pose == 3, "Walking phase offset ignored");
        input.movement_counter = 0xffff;
        require(walk.step_four_walk(input) && walk.displayed()->pose == 2, "Walking counter did not wrap");

        SpriteAppearance eight(resources, 0);
        actor.variables = {};
        actor.animation = 0;
        actor.variables[2] = 2;
        actor.variables[3] = 3;
        EightDirectionAnimation context{1, 0, 0, 0, 44, false, true};
        require(eight.step_eight(actor, context).refreshed && actor.variables[2] == 2 &&
                    !eight.flashing_hidden(),
                "Changed fingerprint did not skip timer/flashing");
        require(!eight.step_eight(actor, context).refreshed && actor.variables[2] == 1 &&
                    eight.flashing_hidden(),
                "Timer or short invulnerability flicker differs");
        auto tick = eight.step_eight(actor, context);
        require(tick.refreshed && !tick.footstep && actor.animation == 2 && actor.variables[2] == 3 &&
                    eight.displayed()->pose == 9,
                "Animation toggle/reload differs");
        actor.variables[2] = 1;
        tick = eight.step_eight(actor, context);
        require(tick.refreshed && tick.footstep && actor.animation == 0, "First-phase footstep intent missing");
        actor.variables[7] = 0xa000;
        actor.animation = 2;
        tick = eight.step_eight(actor, context);
        require(tick.refreshed && actor.variables[7] == 0x2000 && actor.animation == 2,
                "Force-refresh did not precede standing pose");
        tick = eight.step_eight(actor, context);
        require(tick.refreshed && actor.animation == 0, "Standing pose did not reset animation");
        require(!eight.step_eight(actor, context).refreshed, "Standing pose re-uploaded unchanged artwork");
        actor.variables[7] = 0;
        actor.variables[2] = 1;
        context.battle_swirl_ticks = 1;
        require(!eight.step_eight(actor, context).refreshed && actor.variables[2] == 1,
                "Battle swirl advanced the walking timer");
        for (unsigned remaining = 1; remaining <= 60; ++remaining) {
            context.intangibility_ticks = remaining;
            eight.step_eight(actor, context);
            require(eight.flashing_hidden() == (remaining >= 45 ? remaining % 2 == 0 : remaining % 4 == 0),
                    "Invulnerability flashing cadence differs");
        }
        context.teleporting = true;
        context.intangibility_ticks = 1;
        eight.step_eight(actor, context);
        require(eight.flashing_hidden(), "Teleportation unexpectedly changed the previous flashing state");

        const auto before = eight.displayed();
        rejects([&] { eight.select_eight(1, 1); });
        rejects([&] { eight.select_eight(8, 0); });
        rejects([&] { eight.select_four(12, 0); });
        rejects([&] { eight.select_eight(7, 4); });
        rejects([&] { eight.set_sprite(2); });
        require(eight.displayed() == before, "Rejected appearance operation damaged a displayed frame");

        // The two authored loaders mask frame-reference low bits differently.
        // Surface opt-out is retained by both, including the eight-direction
        // loader's two-byte-shifted artwork for an opted-out frame.
        fixture.word(41, 514);
        SpriteResources flagged(fixture.bytes, fixture.layout);
        const auto four = flagged.acquire(0, 0, SpriteSurface::Normal, SpriteFrameFormat::FourDirection);
        const auto eight_image = flagged.acquire(0, 0, SpriteSurface::Normal, SpriteFrameFormat::EightDirection);
        require(four != eight_image && four->indices != eight_image->indices,
                "Distinct four/eight-direction frame payloads were aliased");
        require(four == flagged.acquire(0, 0, SpriteSurface::Deep, SpriteFrameFormat::FourDirection) &&
                    eight_image == flagged.acquire(0, 0, SpriteSurface::Deep, SpriteFrameFormat::EightDirection),
                "Frame format lost its surface opt-out behavior");
        const auto ordinary = flagged.acquire(0, 1);
        require(ordinary == flagged.acquire(0, 1, SpriteSurface::Normal, SpriteFrameFormat::EightDirection),
                "Equivalent four/eight-direction payloads lost image sharing");
        std::cout << "PASS native sprite direction maps, display latches, walking timers, flags, visibility and footsteps\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
