#include "eb/native/world_floating_sprites.hpp"
#include "eb/native/world_party_movement.hpp"
#include "eb/native/dialogue/runtime.hpp"
#include "eb/direct_scene.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
namespace d = eb::native::dialogue;
unsigned checks{};
void check(bool value, const char *message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F &&operation) {
    bool failed = false;
    try { operation(); } catch (const std::exception &) { failed = true; }
    check(failed, "Invalid floating sprite domain was accepted");
}
std::shared_ptr<const d::Program> program(eb::GameVersion version, std::vector<std::uint8_t> bytes) {
    return std::make_shared<d::Program>(version, std::vector<d::ContentBlock>{{0, 0, std::move(bytes)}},
                                      std::vector<d::Location>{{0, 0}});
}
void parser(eb::GameVersion version) {
    using K = WorldControlCommandKind;
    struct Case { std::vector<std::uint8_t> bytes; WorldControlCommand command; };
    const std::array<Case, 8> cases{{
        {{0x1f, 0x1a, 0x34, 0x12, 0, 2}, {K::CreateFloatingNpc, 0x1234, 0, 0}},
        {{0x1f, 0x1a, 0, 0, 255, 2}, {K::CreateFloatingNpc, 0, 0, 255}},
        {{0x1f, 0x1b, 0xcd, 0xab, 2}, {K::DeleteFloatingNpc, 0xabcd, 0, 0}},
        {{0x1f, 0x1b, 0, 0, 2}, {K::DeleteFloatingNpc, 0, 0, 0}},
        {{0x1f, 0xf3, 0x34, 0x12, 0, 2}, {K::CreateFloatingSprite, 0x1234, 0, 0}},
        {{0x1f, 0xf3, 0, 0, 255, 2}, {K::CreateFloatingSprite, 0, 0, 255}},
        {{0x1f, 0xf4, 0xcd, 0xab, 2}, {K::DeleteFloatingSprite, 0xabcd, 0, 0}},
        {{0x1f, 0xf4, 0, 0, 2}, {K::DeleteFloatingSprite, 0, 0, 0}}
    }};
    for (const auto &test : cases) {
        d::State state;
        state.dummy.active = {0x12345678, 0x90abcdef, 0x5678};
        state.dummy.saved = {0xfedcba98, 0x76543210, 0x1234};
        const auto before = state.dummy;
        d::Runtime runtime(program(version, test.bytes), state);
        runtime.start(d::EntryId{0});
        check(runtime.advance(0) == d::Progress::BudgetExhausted, "Zero budget consumed floating operands");
        while (runtime.advance(1) == d::Progress::BudgetExhausted) {}
        check(runtime.request() && runtime.request()->kind == d::RequestKind::WorldControl &&
              runtime.request()->world_control == test.command, "Floating operands differ from the literal source bytes");
        const auto consumed = runtime.snapshot().consumed_bytes;
        check(runtime.advance() == d::Progress::Suspended && runtime.snapshot().consumed_bytes == consumed,
              "Pending floating producer consumed a following text byte");
        runtime.respond();
        while (runtime.advance(1) != d::Progress::Finished) {}
        check(runtime.returned_cursor() == d::Location{0, std::uint16_t(test.bytes.size())} &&
              state.dummy.active == before.active && state.dummy.saved == before.saved,
              "Floating command changed registers or byte alignment");
        for (unsigned size = 2; size < test.bytes.size() - 1; ++size) {
            d::State truncated;
            d::Runtime partial(program(version, {test.bytes.begin(), test.bytes.begin() + size}), truncated);
            partial.start(d::EntryId{0});
            rejects([&] { while (partial.advance(1) != d::Progress::Finished) {} });
        }
    }
}
void resources(eb::GameVersion version) {
    const unsigned icons = version == eb::GameVersion::JP ? 0x40d34 : 0x40de8;
    const unsigned widths = version == eb::GameVersion::JP ? 0x4295d : 0x42a1f;
    const unsigned heights = version == eb::GameVersion::JP ? 0x4297f : 0x42a41;
    std::vector<std::uint8_t> bytes(heights + 34);
    const auto word = [&](unsigned at, unsigned value) { bytes[at] = std::uint8_t(value); bytes[at + 1] = std::uint8_t(value >> 8); };
    for (unsigned i = 0; i < 12; ++i) {
        word(icons + i * 5, 0x1234 + i);
        bytes[icons + i * 5 + 2] = std::uint8_t(i);
        bytes[icons + i * 5 + 3] = std::uint8_t(0x80 + i);
        bytes[icons + i * 5 + 4] = std::uint8_t(0x7f - i);
    }
    for (unsigned i = 0; i < 17; ++i) { word(widths + i * 2, 0xab00 + i); word(heights + i * 2, 0xcd00 + i); }
    const auto imported = import_world_floating_sprite_data(bytes, version);
    check(imported.event_script == 785, "Regional floating event identity differs");
    for (unsigned i = 0; i < 12; ++i)
        check(imported.icons[i] == FloatingSpriteDefinition{std::uint16_t(0x1234 + i), std::uint8_t(i),
                  std::int8_t(-128 + int(i)), std::int8_t(127 - int(i))}, "Floating table import lost a word, literal placement or signed offset");
    for (unsigned i = 0; i < 17; ++i)
        check(imported.half_widths[i] == 0xab00 + i && imported.heights[i] == 0xcd00 + i,
              "Shape placement import lost a full word");
    bytes.pop_back();
    rejects([&] { (void)import_world_floating_sprite_data(bytes, version); });
}
struct Fixture {
    native_sprite_test::Fixture graphics;
    std::shared_ptr<SpriteResources> sprites = std::make_shared<SpriteResources>(graphics.bytes, graphics.layout);
    std::shared_ptr<const ActionScriptData> scripts;
    WorldFloatingSpriteData data;
    PreparedActorState prepared;
    WorldFloatingSpriteState state{0xaaaa, 0xbbbb};
    ActorWorld actors;
    party::State party;
    WorldPartyState formation;
    story::RandomState random{0x1234, 0x5678};
    WorldPartyMovementData movement_data;
    WorldPartyMovement movement;
    WorldFloatingSprites floating;
    static std::shared_ptr<const ActionScriptData> event(eb::GameVersion version) {
        const auto screen = version == eb::GameVersion::JP ? 0xa018 : 0xa039;
        const auto physics = version == eb::GameVersion::JP ? 0xa24a : 0xa26b;
        const auto first = version == eb::GameVersion::JP ? 0xc0a487 : 0xc0a4a8;
        std::vector<std::uint8_t> bytes{9, 0x23, std::uint8_t(screen), std::uint8_t(screen >> 8),
            0x25, std::uint8_t(physics), std::uint8_t(physics >> 8), 0x3b, 0,
            0x42, std::uint8_t(first), std::uint8_t(first >> 8), std::uint8_t(first >> 16), 9};
        std::vector<std::uint32_t> entries(786, 0);
        entries[785] = 1;
        return std::make_shared<ActionScriptData>(std::move(bytes), 0, std::move(entries));
    }
    explicit Fixture(eb::GameVersion version)
        : scripts(event(version)), actors(sprites, scripts, version, AppearanceData{}), party(version),
          movement(actors, party, formation, random, movement_data),
          floating(data, actors, prepared, state) {
        data.half_widths.fill(24); data.heights.fill(32);
        for (unsigned i = 0; i < data.icons.size(); ++i) data.icons[i] = {0, std::uint8_t(i), -8, 12};
        prepared.x = 100; prepared.y = 200; prepared.height = 56; prepared.direction = 7;
        prepared.variables.fill(0x1800); prepared.priority = 3; prepared.phase_id = 29;
        formation.projection.leader_role = 23;
        actors.bind_party_movement(movement);
        (void)parent(23, 0xffff);
    }
    ActorId parent(unsigned role = 4, std::uint16_t npc = 77, unsigned sprite = 0) {
        PreparedActorState input;
        input.x = 3; input.y = 5;
        auto spec = actors.prepare_actor(sprite, 0, input);
        spec.npc = npc == 0xffff ? std::optional<NpcId>{} : std::optional<NpcId>{npc};
        spec.action.animation = 0; spec.behavior.surface_flags = 3;
        const auto id = actors.create_authored(spec, {role, role + 1});
        check(bool(id), "Fixture did not create its real parent role");
        actors.actor(*id).appearance.select_four(0, 0, 3);
        return *id;
    }
};
void lifecycle(eb::GameVersion version) {
    Fixture fixture(version);
    const auto parent = fixture.parent();
    const auto parent_before = fixture.actors.actor(parent).action();
    const auto before = fixture.prepared;
    const std::array<std::array<std::uint16_t, 2>, 8> coordinates{{
        {65531, 17}, {65515, 65513}, {65531, 65529}, {65499, 65513},
        {65515, 17}, {65531, 17}, {65499, 17}, {65531, 17}
    }};
    SpritePalettes colors{};
    for (auto &palette : colors)
        for (unsigned i = 1; i < palette.size(); ++i) palette[i] = 0xff000000 | i * 0x111111;
    for (unsigned icon = 0; icon < coordinates.size(); ++icon) {
        const auto created = fixture.floating.create_at_npc(77, std::uint8_t(icon));
        check(bool(created), "Actual floating actor was not created");
        const auto &child = fixture.actors.actor(*created);
        check(child.script_style() == 785 && child.action().position == AuthoredActorPosition{
                 std::uint32_t(coordinates[icon][0]) << 16 | 0x8000,
                 std::uint32_t(coordinates[icon][1]) << 16 | 0x8000, 0x00388000},
              "Floating anchor, wrapping or prepared height/fractions differ");
        check(child.action().variables == before.variables && child.action().priority == 0xc004 &&
              child.behavior.surface_flags == 3 && child.behavior.direction == 0 &&
              child.action().animation == 0xffff, "Creation ran its event early or lost source prepared/attachment metadata");
        check(fixture.state == WorldFloatingSpriteState{coordinates[icon][0], coordinates[icon][1]} &&
              fixture.prepared.priority == 1 && fixture.prepared.x == before.x && fixture.prepared.y == before.y &&
              fixture.prepared.variables == before.variables && fixture.prepared.direction == before.direction,
              "Floating creation changed unrelated prepared globals");
        check(fixture.actors.advance_tick() == WorldTickResult::Complete, "The real Event785 did not complete its initial scheduler pass");
        check(child.behavior.physics == ActorPhysics::PartyFollower && child.behavior.projection == ActorProjection::Unchanged &&
              child.action().animation == 0 && child.appearance.displayed()->pose == 0 && child.action().priority == 0xc004,
              "Event785 callbacks/first pose or persistent attachment changed");
        const auto retained = fixture.actors.draw(256, colors, 1);
        const auto retained_pixels = eb::rasterize_direct_scene({retained, {}});
        check(bool(retained), "Floating raw attachment priority could not be drawn");
        const auto child_role = *child.authored_role();
        fixture.floating.remove_at_npc(77);
        check(!fixture.actors.actor_for_role(child_role), "Floating removal did not retire its actual role");
        check(fixture.actors.actor(parent).action().position == parent_before.position &&
              fixture.actors.actor(parent).action().variables == parent_before.variables,
              "Floating lifecycle mutated its parent");
        (void)fixture.actors.draw(256, colors, 1);
        check(eb::rasterize_direct_scene({retained, {}}) == retained_pixels,
              "Floating deletion mutated a retained completed picture");
    }
}
void sprite_selectors(eb::GameVersion version) {
    Fixture fixture(version);
    const auto parent=fixture.parent(4,77,1);
    const auto before=fixture.actors.actor(parent).action().position;
    const auto child=fixture.floating.create_at_sprite(1,1);
    check(child && fixture.actors.actor(*child).action().priority==0xc004 &&
          fixture.state==WorldFloatingSpriteState{65515,65513} && fixture.actors.ticks()==0,
          "Sprite selector did not reuse the actual placement/creation/attachment producer");
    check(fixture.actors.advance_tick()==WorldTickResult::Complete &&
          fixture.actors.actor(*child).script_style()==785,
          "Sprite selector bypassed the real Event785 scheduler");
    const auto child_role=*fixture.actors.actor(*child).authored_role();
    fixture.actors.retire(parent);
    fixture.floating.remove_at_sprite(1);
    check(!fixture.actors.actor_for_role(child_role) && fixture.actors.authored_draw_priority(child_role)==0 &&
          fixture.actors.authored_position(4)==before && fixture.actors.ticks()==1,
          "Sprite cleanup skipped a retained parent or changed parent geometry/time");
    Fixture duplicate(version);
    const auto earlier=duplicate.parent(0,79,1);
    duplicate.actors.retire(earlier);
    (void)duplicate.parent(4,77,1);
    const auto state=duplicate.state;
    check(!duplicate.floating.create_at_sprite(1,255) && !duplicate.floating.create_at_sprite(65000,255) &&
          duplicate.state==state && duplicate.actors.size()==2 && duplicate.actors.ticks()==0,
          "Sprite lookup skipped the first dormant role or inspected icon data after an absent parent");
}
void boundaries(eb::GameVersion version) {
    Fixture fixture(version);
    (void)fixture.parent();
    const auto before = fixture.state;
    const auto prepared = fixture.prepared;
    check(!fixture.floating.create_at_npc(99, 255) && !fixture.floating.create_at_role(0xffff, 255),
          "Absent parent did not short-circuit before the icon lookup");
    rejects([&] { (void)fixture.floating.create_at_npc(77, 12); });
    rejects([&] { (void)fixture.floating.create_at_role(30, 0); });
    fixture.actors.actor(*fixture.actors.actor_for_role(4)).appearance_context.shape = 17;
    rejects([&] { (void)fixture.floating.create_at_npc(77, 0); });
    check(fixture.state == before && fixture.prepared.priority == prepared.priority &&
          fixture.actors.size() == 2, "Invalid floating indices mutated the producer or scheduled an actor");
    fixture.actors.actor(*fixture.actors.actor_for_role(4)).appearance_context.shape = 0;
    auto spec = fixture.actors.prepare_actor(0, 0, PreparedActorState{});
    spec.npc = 77;
    const auto earlier = fixture.actors.create_prepared_npc(spec);
    check(bool(earlier) && *fixture.actors.actor(*earlier).authored_role() == 0, "Duplicate selector fixture failed");
    fixture.actors.retire(*earlier);
    check(!fixture.floating.create_at_npc(77, 0) && fixture.state == before && fixture.actors.size() == 2,
          "Lookup skipped the first dormant source selector in favor of a later living NPC");
    fixture.floating.remove_at_role(0xffff);
    rejects([&] { fixture.floating.remove_at_role(30); });
}
} // namespace
int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            parser(version); resources(version); lifecycle(version); sprite_selectors(version); boundaries(version);
        }
        std::cout << "PASS " << checks << " floating sprite parser/import/real Event785/attachment/removal/domain checks\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
