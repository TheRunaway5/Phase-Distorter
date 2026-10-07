#include "eb/native/actor_world.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const char *message) {
    if (!ok)
        throw std::runtime_error(message);
}
template <class F> void rejects(F function, const char *message) {
    try {
        function();
    } catch (const std::exception &) {
        return;
    }
    throw std::runtime_error(message);
}
struct Fixture {
    native_sprite_test::Fixture graphics;
    std::shared_ptr<SpriteResources> sprites =
        std::make_shared<SpriteResources>(graphics.bytes, graphics.layout);
    std::shared_ptr<const ActionScriptData> scripts;
    SpritePalettes palettes{};
    Fixture() {
        // Script 0 increments a variable once per tick. Script 1 asks an
        // explicit game-variable service, then increments and waits forever.
        // Script 2 ends immediately. Script 3 selects a native physics callback
        // and velocity from authored data, then stays alive without callbacks.
        const std::vector<std::uint8_t> bytes{0x14, 0,    2,    1,    0,    0x06, 1,    0x19, 0,    0,
                                              0x1e, 0x34, 0x12, 0x14, 0,    2,    1,    0,    0x09, 0x00,
                                              0x25, 0x0c, 0xa0, 0x3f, 0x80, 0x00, 0x41, 0,    1,    0x09,
                                              0x1e, 0x34, 0x12, 0x0f, 0x14, 0,    2,    1,    0,    0x09};
        scripts = std::make_shared<ActionScriptData>(bytes, 0, std::vector<std::uint32_t>{0, 10, 19, 20, 30});
        for (unsigned p = 0; p < 8; ++p)
            for (unsigned c = 1; c < 16; ++c)
                palettes[p][c] = 0xff000000 | (c * 15 << 16) | (p * 30 << 8) | c;
    }
    ActorWorld world() { return ActorWorld(sprites, scripts, eb::GameVersion::US); }
};
WorldActorSpec spawn(unsigned script = 0, unsigned x = 100, unsigned y = 100) {
    WorldActorSpec spec;
    spec.script = script;
    spec.action.position = {x * 65536 + 0x8000, y * 65536 + 0x8000, 0x8000};
    spec.action.animation = 0;
    spec.action.priority = 1;
    return spec;
}
// This fixture deliberately has no scene activation. Acknowledge its camera
// boundary explicitly; production scene owners must consume the refresh first.
WorldTickResult advance_without_spawning(ActorWorld &world) {
    while (true) {
        const auto result = world.advance_tick();
        if (result != WorldTickResult::NeedsCameraRefresh)
            return result;
        world.respond_camera_refresh();
    }
}
void ordering_and_physics(Fixture &f) {
    auto world = f.world();
    auto first = spawn();
    first.action.velocity[0] = 65536;
    const auto a = world.create(first);
    auto camera = spawn(0, 200, 112);
    camera.action.velocity[0] = 2 * 65536;
    camera.behavior.tick = ActorTickCallback::CenterCamera;
    const auto b = world.create(camera);
    require(advance_without_spawning(world) == WorldTickResult::Complete, "Native first tick failed");
    require(world.scene().camera_x == 72 && world.actor(a).behavior.projected_x == 29 &&
                world.actor(b).behavior.projected_x == 130,
            "Movement/projection ran before all scripts and camera callbacks");
    require(world.actor(a).action().variables[0] == 1 && world.ticks() == 1,
            "Native script did not run once");
    world.actor(a).scripts_and_physics_enabled = false;
    world.actor(a).behavior.tick = ActorTickCallback::ProjectOffset;
    world.actor(a).action().variables[0] = 20;
    world.actor(a).behavior.projection = ActorProjection::Unchanged;
    advance_without_spawning(world);
    require(world.actor(a).action().position[0] == 101 * 65536 + 0x8000 &&
                world.actor(a).action().variables[0] == 20 && world.actor(a).behavior.projected_x == 49,
            "Script/physics pause stopped an enabled tick callback");
    world.actor(a).tick_callback_enabled = false;
    advance_without_spawning(world);
    require(world.actor(a).behavior.projected_x == 49, "Disabled callback still ran");

    auto callbacks = f.world();
    const auto moving = callbacks.create(spawn(3));
    require(callbacks.advance_tick() == WorldTickResult::Complete && !callbacks.request(),
            "Bound native callback required an external engine");
    require(callbacks.actor(moving).behavior.physics == ActorPhysics::Spatial &&
                callbacks.actor(moving).action().position[0] == 101 * 65536 &&
                callbacks.actor(moving).action().position[2] == 0x18000,
            "Authored native physics/velocity did not reach the world movement phase");
}
void camera_refresh_ordering(Fixture &f) {
    auto world = f.world();
    auto camera = spawn(0, 200, 112);
    camera.behavior.tick = ActorTickCallback::CenterCamera;
    camera.action.velocity[0] = 65536;
    const auto a = world.create(camera);
    const auto b = world.create(spawn());
    require(world.advance_tick() == WorldTickResult::NeedsCameraRefresh && !world.request(),
            "Camera callback did not expose its scene boundary");
    const auto refresh = *world.camera_refresh();
    require(refresh.actor == a && refresh.previous_x == 0 && refresh.previous_y == 0 &&
                refresh.camera_x == 72 && refresh.camera_y == 0 && refresh.tick == 1 &&
                world.scene().camera_x == 72 && world.actor(a).action().variables[0] == 1 &&
                world.actor(b).action().variables[0] == 0 && world.ticks() == 0 &&
                world.actor(a).action().position[0] == 200 * 65536 + 0x8000,
            "Camera refresh ran after a later actor or the movement pass");
    require(world.advance_tick() == WorldTickResult::NeedsCameraRefresh &&
                world.camera_refresh()->actor == a && world.actor(a).action().variables[0] == 1,
            "Unacknowledged camera callback repeated or advanced");
    rejects([&] { world.draw(522, f.palettes, 1); }, "Incomplete camera refresh published a frame");
    rejects([&] { world.take_sound_events(); }, "Incomplete camera refresh published sounds");
    rejects([&] { world.respond(); }, "Engine response acknowledged a camera boundary");
    const auto appended = world.create(spawn());
    world.respond_camera_refresh();
    require(world.advance_tick() == WorldTickResult::Complete && world.ticks() == 1 &&
                world.actor(a).action().variables[0] == 1 &&
                world.actor(b).action().variables[0] == 1 &&
                world.actor(appended).action().variables[0] == 1 &&
                world.actor(a).action().position[0] == 201 * 65536 + 0x8000,
            "Camera-triggered creation behind an unvisited tail changed scheduler order");
    rejects([&] { world.respond_camera_refresh(); }, "World accepted an unsolicited camera response");

    auto tail = f.world();
    const auto last = tail.create(camera);
    require(tail.advance_tick() == WorldTickResult::NeedsCameraRefresh, "Tail camera did not suspend");
    auto newcomer = spawn();
    newcomer.action.velocity[0] = 65536;
    const auto new_id = tail.create(newcomer);
    tail.erase(last);
    require(tail.camera_refresh() && tail.camera_refresh()->actor == last &&
                tail.advance_tick() == WorldTickResult::NeedsCameraRefresh,
            "Deleting a camera actor discarded its already-committed scene refresh");
    tail.respond_camera_refresh();
    require(tail.advance_tick() == WorldTickResult::Complete &&
                tail.actor(new_id).action().variables[0] == 0 &&
                tail.actor(new_id).action().position[0] == 101 * 65536 + 0x8000,
            "Camera tail creation violated captured-next traversal or later physics");
    require(tail.advance_tick() == WorldTickResult::Complete &&
                tail.actor(new_id).action().variables[0] == 1,
            "Actor appended during tail refresh never started");

    auto deletion = f.world();
    const auto deleted_camera = deletion.create(camera);
    const auto skipped = deletion.create(spawn());
    const auto survivor = deletion.create(spawn());
    deletion.advance_tick();
    deletion.erase(skipped);
    deletion.erase(deleted_camera);
    deletion.respond_camera_refresh();
    require(deletion.advance_tick() == WorldTickResult::Complete &&
                deletion.actor(survivor).action().variables[0] == 1,
            "Deleting the captured successor during refresh lost the remaining actors");

    auto multiple = f.world();
    camera.action.velocity[0] = 0;
    const auto first = multiple.create(camera);
    camera.behavior.tick = ActorTickCallback::CenterCameraOffset;
    camera.action.variables[0] = 3;
    camera.action.variables[1] = 7;
    const auto second = multiple.create(camera);
    require(multiple.advance_tick() == WorldTickResult::NeedsCameraRefresh &&
                multiple.camera_refresh()->actor == first, "First camera callback was reordered");
    multiple.respond_camera_refresh();
    require(multiple.advance_tick() == WorldTickResult::NeedsCameraRefresh &&
                multiple.camera_refresh()->actor == second &&
                multiple.camera_refresh()->previous_x == 72 &&
                multiple.camera_refresh()->camera_x == 76 && multiple.camera_refresh()->camera_y == 7 &&
                multiple.ticks() == 0,
            "Multiple cameras lost callback order, script offsets or previous position");
    multiple.respond_camera_refresh();
    require(multiple.advance_tick() == WorldTickResult::Complete, "Multiple cameras failed to resume");
    multiple.actor(first).tick_callback_enabled = false;
    multiple.actor(second).scripts_and_physics_enabled = false;
    require(multiple.advance_tick() == WorldTickResult::NeedsCameraRefresh &&
                multiple.camera_refresh()->actor == second &&
                multiple.camera_refresh()->previous_x == multiple.camera_refresh()->camera_x &&
                multiple.camera_refresh()->previous_y == multiple.camera_refresh()->camera_y,
            "Unchanged camera or script pause incorrectly suppressed scene refresh");
    multiple.respond_camera_refresh();
    require(multiple.advance_tick() == WorldTickResult::Complete, "Stationary camera did not resume");
    multiple.actor(second).tick_callback_enabled = false;
    require(multiple.advance_tick() == WorldTickResult::Complete && !multiple.camera_refresh(),
            "Disabled camera callback still requested refresh");
}
void requests_and_lifecycle(Fixture &f) {
    {
        // The byte after an opaque operation can independently be a legitimate
        // entrypoint. Its whitelist membership is not permission to guess the
        // unknown operation's inline operand length and continue execution.
        const std::vector<std::uint8_t> bytes{0x42, 0x34, 0x12, 0xc0, 0x06, 1, 0x09};
        auto scripts = std::make_shared<ActionScriptData>(bytes, 0, std::vector<std::uint32_t>{0, 4});
        ActorWorld opaque(f.sprites, scripts, eb::GameVersion::US);
        const auto id = opaque.create(spawn());
        require(opaque.advance_tick() == WorldTickResult::NeedsEngine &&
                    opaque.request()->diagnostic.authored_identifier == 0xc01234 &&
                    !opaque.request()->diagnostic.inline_length_known,
                "Opaque engine operation was not retained as an explicit boundary");
        rejects([&] { opaque.respond(); }, "Opaque inline operands were guessed from valid neighboring code");
        require(opaque.request().has_value() && !opaque.ticks(),
                "Rejected opaque response advanced the world");
        opaque.erase(id);
        require(opaque.advance_tick() == WorldTickResult::Complete,
                "Erasing an opaque actor did not cancel it");
    }
    auto world = f.world();
    const auto a = world.create(spawn(1));
    const auto b = world.create(spawn());
    require(world.advance_tick() == WorldTickResult::NeedsEngine && world.request()->actor == a,
            "Unknown world operation was silently accepted");
    require(world.advance_tick() == WorldTickResult::NeedsEngine && world.ticks() == 0 &&
                world.actor(b).action().variables[0] == 0,
            "Suspended tick advanced another actor");
    rejects([&] { world.draw(522, f.palettes, 1); }, "Partial world tick was rendered");
    const auto appended = world.create(spawn());
    world.respond();
    require(world.advance_tick() == WorldTickResult::Complete &&
                world.actor(appended).action().variables[0] == 1,
            "New actor behind an unvisited tail missed its authored first tick");
    require(world.actor(a).action().variables[0] == 1 && world.actor(b).action().variables[0] == 1,
            "Resuming a tick ran an actor twice");
    rejects([&] { world.respond(); }, "World accepted an unsolicited service response");

    auto pausing = f.world();
    auto pauses_itself = spawn(1);
    pauses_itself.action.velocity[0] = 65536;
    const auto paused = pausing.create(pauses_itself);
    pausing.advance_tick();
    pausing.actor(paused).scripts_and_physics_enabled = false;
    pausing.respond();
    pausing.advance_tick();
    require(pausing.actor(paused).action().variables[0] == 1 &&
                pausing.actor(paused).action().position[0] == 100 * 65536 + 0x8000,
            "A mid-script pause skipped current commands or moved in the later physics phase");

    auto clearing = f.world();
    pauses_itself.script = 4;
    const auto cleared = clearing.create(pauses_itself);
    clearing.advance_tick();
    clearing.actor(cleared).scripts_and_physics_enabled = false;
    clearing.actor(cleared).tick_callback_enabled = false;
    clearing.respond();
    clearing.advance_tick();
    require(clearing.actor(cleared).scripts_and_physics_enabled &&
                clearing.actor(cleared).tick_callback_enabled &&
                clearing.actor(cleared).action().variables[0] == 1 &&
                clearing.actor(cleared).action().position[0] == 101 * 65536 + 0x8000,
            "Clearing a tick callback did not restore the source pause controls");

    auto tail = f.world();
    const auto last = tail.create(spawn(1));
    tail.advance_tick();
    auto newcomer = spawn();
    newcomer.action.velocity[0] = 65536;
    const auto new_id = tail.create(newcomer);
    tail.respond();
    tail.advance_tick();
    require(tail.actor(new_id).action().variables[0] == 0 &&
                tail.actor(new_id).action().position[0] == 101 * 65536 + 0x8000,
            "Actor appended at the current tail violated captured-next traversal");
    tail.advance_tick();
    require(tail.actor(new_id).action().variables[0] == 1, "Appended actor never started its script");
    require(tail.erase(last) && !tail.erase(last), "Native deletion was not idempotent");

    auto deletion = f.world();
    const auto current = deletion.create(spawn(1));
    const auto skipped = deletion.create(spawn());
    const auto survivor = deletion.create(spawn());
    deletion.advance_tick();
    deletion.erase(skipped);
    deletion.erase(current);
    require(!deletion.request() && deletion.advance_tick() == WorldTickResult::Complete &&
                deletion.actor(survivor).action().variables[0] == 1 && deletion.size() == 1,
            "Deleting a suspended actor/successor broke the current traversal");
    const auto ended = deletion.create(spawn(2));
    deletion.advance_tick();
    require(deletion.actors() == std::vector<ActorId>{survivor}, "Ended actor retained world resources");
    require(!deletion.erase(ended), "Ended actor was not removed");

    auto identity = f.world();
    auto npc = spawn();
    npc.npc = 230;
    const auto npc_actor = identity.create(npc);
    require(identity.actor_for_npc(230) == npc_actor && identity.active_npcs() == std::vector<NpcId>{230},
            "Native NPC identity missing from active set");
    rejects([&] { identity.create(npc); }, "Duplicate NPC identity was activated");
    require(identity.size() == 1, "Rejected NPC activation allocated resources");
    identity.erase(npc_actor);
    const auto replacement = identity.create(npc);
    require(replacement != npc_actor && identity.actor_for_npc(230) == replacement,
            "NPC handoff reused stale graphical identity");
}
void retained_sprite_copy_and_attachment(Fixture &f) {
    auto world=f.world();
    auto source=spawn(0,0x1234,0xabcd);source.sprite=1;source.npc=17;
    const auto last=*world.create_authored(source,{25,26});
    source.npc=18;
    source.action.position={0xfedc1234u,0x98764321u,0x11112222u};
    const auto first=*world.create_authored(source,{4,5});
    const auto destination=*world.create_authored(spawn(),{2,3});
    auto &action=world.actor(destination).action();
    action.position={0x5555abcdu,0x44441234u,0x3333fedcu};
    action.velocity={1,2,3}; action.variables[6]=0x4567; action.priority=2;
    const auto before=action;
    require(world.first_authored_role_with_sprite(1)==4 &&
                world.first_authored_role_with_npc(18)==4,
            "Retained sprite/NPC lookup followed active creation order");
    require(world.copy_sprite_position(destination,1)==0x9876 &&
                action.position==AuthoredActorPosition{0xfedcabcdu,0x98761234u,0x3333fedcu} &&
                action.velocity==before.velocity && action.variables==before.variables && action.priority==2,
            "Sprite coordinate copy replaced fractions/Z/motion or selected wrong role");
    const auto captured_position=action.position, captured_velocity=action.velocity;
    require(world.capture_sprite_target(destination,1)==0x9876 &&
                action.variables[6]==0xfedc && action.variables[7]==0x9876 &&
                action.position==captured_position && action.velocity==captured_velocity,
            "Sprite target capture changed coordinates/motion or lost wholeXY VAR6/7");
    const auto saved_variables=action.variables;
    rejects([&]{world.capture_sprite_target(destination,0xffff);},"Missing target alias was invented");
    require(action.variables==saved_variables,"Rejected target selector partially changed VAR6/7");
    world.retire(first);
    require(world.first_authored_role_with_sprite(1)==4 &&
                world.first_authored_role_with_npc(18)==4 && world.copy_sprite_position(destination,1)==0x9876 &&
                world.capture_sprite_target(destination,1)==0x9876,
            "Dormant selector residue lost its source whole-coordinate ownership");
    const auto saved=action.position;
    rejects([&]{world.copy_sprite_position(destination,0xffff);},"Missing source alias was invented");
    require(action.position==saved,"Rejected sprite selector partially changed destination");
    world.release_authored_appearance(4);
    require(world.first_authored_role_with_sprite(1)==25 &&
                world.first_authored_role_with_sprite(0xffff)==4,
            "Retained released selector keys no longer follow numeric source order");
    world.set_authored_draw_priority(25,3);
    world.retire(last);
    require(world.authored_draw_priority(25)==3,"Dormant draw priority was not retained");

    auto attached=f.world();
    const auto parent=*attached.create_authored(spawn(),{5,6});
    const auto child=*attached.create_authored(spawn(),{1,2});
    attached.actor(parent).appearance.select_four(0,0,0);
    attached.actor(child).appearance.select_four(0,0,0);
    attached.actor(parent).action().priority=2;
    attached.actor(child).action().priority=0xc005;
    attached.draw(256,f.palettes,1);
    require(attached.actor(child).action().priority==0xc005 && !attached.ticks(),
            "Initial attached capture advanced/cleared authoritative priority");
    require(attached.advance_tick()==WorldTickResult::Complete &&
                attached.actor(child).action().priority==0xc005,
            "Persistent attachment draw cleared matching parent selector");
    attached.draw(256,f.palettes,1);attached.draw(522,f.palettes,1);
    require(attached.actor(child).action().priority==0xc005 && attached.ticks()==1,
            "Repeated presentation changed actual attachment state");
    attached.set_authored_draw_priority(1,0x8005);
    require(attached.advance_tick()==WorldTickResult::Complete &&
                attached.actor(child).action().priority==0,
            "One-shot attachment was not cleared in its actual draw pass");
    attached.draw(256,f.palettes,1);attached.draw(256,f.palettes,1);
    require(!attached.actor(child).action().priority && attached.ticks()==2,
            "Repeated one-shot capture ran another draw mutation");
    attached.retire(parent);
    attached.set_authored_draw_priority(1,0xc005);
    attached.advance_tick();attached.draw(256,f.palettes,1);
    require(attached.authored_draw_priority(5)==2 && attached.actor(child).action().priority==0xc005,
            "Attached drawing lost retained dormant parent priority");
}
void movement_bounds_script(Fixture &f) {
    for (const auto version : {eb::GameVersion::US,eb::GameVersion::JP}) {
        const auto call=version==eb::GameVersion::JP ? 0xc0a943u:0xc0a964u;
        const std::vector<std::uint8_t> bytes{
            0x42,std::uint8_t(call),std::uint8_t(call>>8),std::uint8_t(call>>16),
            0xff,0xff,0,0x80,0x1f,4,0x06,2,0x19,10,0};
        const auto scripts=std::make_shared<ActionScriptData>(bytes,0,std::vector<std::uint32_t>{0});
        ActorWorld world(f.sprites,scripts,version);
        auto spec=spawn();spec.action.position={0xffff1234u,0x8001abcdu,0x11112222u};
        const auto id=world.create(spec);
        require(world.advance_tick()==WorldTickResult::Complete && !world.request() && world.ticks()==1 &&
                    world.actor(id).action().variables==std::array<std::uint16_t,8>{0,0xfffe,1,1,1,0,0,0} &&
                    world.actor(id).action().position==spec.action.position,
                "Actual actor scheduler did not execute compound bounds and retain its observed scalar return");
        world.actor(id).action().variables[0]=0x1234;
        require(world.advance_tick()==WorldTickResult::Complete && !world.request() && world.ticks()==2 &&
                    world.actor(id).action().variables[0]==0x1234 &&
                    world.actor(id).action().position==spec.action.position,
                "Waiting bounds task repeated its state change or consumed an extra actor frame");
    }
}
void movement_bounds_query_script(Fixture &f) {
    for (const auto version : {eb::GameVersion::US,eb::GameVersion::JP}) {
        const auto call=version==eb::GameVersion::JP ? 0xc44fedu:0xc47269u;
        const std::vector<std::uint8_t> bytes{0x42,std::uint8_t(call),std::uint8_t(call>>8),
            std::uint8_t(call>>16),0x1f,4,0x06,2,0x19,6,0};
        const auto scripts=std::make_shared<ActionScriptData>(bytes,0,std::vector<std::uint32_t>{0});
        ActorWorld world(f.sprites,scripts,version);
        auto spec=spawn();spec.action.position={0x80001234u,0x0002abcdu,0x11112222u};
        spec.action.variables={0,0x7fff,1,3,55,66,77,88};
        const auto id=world.create(spec);
        require(world.advance_tick()==WorldTickResult::Complete && !world.request() && world.ticks()==1 &&
                    world.actor(id).action().variables==std::array<std::uint16_t,8>{0,0x7fff,1,3,7,66,77,88} &&
                    world.actor(id).action().position==spec.action.position,
                "Actual actor scheduler did not publish the unsigned bounds query result before continuing");
        world.actor(id).action().variables[4]=0x1234;
        require(world.advance_tick()==WorldTickResult::Complete && !world.request() && world.ticks()==2 &&
                    world.actor(id).action().variables[4]==0x1234 &&
                    world.actor(id).action().position==spec.action.position,
                "Waiting bounds query task repeated its continuation or consumed an extra frame");
    }
}
void sprite_script_replacement(Fixture &f) {
    for (const auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        const std::vector<std::uint8_t> bytes{
            0x1d,0x34,0x12,0x07,12,0,0x06,7,0x19,0,0,0x09,
            0x06,7,0x19,12,0,
            0x14,0,2,1,0,0x06,1,0x19,17,0};
        auto scripts=std::make_shared<ActionScriptData>(bytes,0,std::vector<std::uint32_t>{0,17});
        ActorWorld world(f.sprites,scripts,version);
        auto spec=spawn(); spec.sprite=1; spec.behavior.physics=ActorPhysics::Stationary;
        spec.action.position={0x1234abcd,0x5678cdef,0x9876fedc};
        spec.action.velocity={1,2,3};spec.action.variables[7]=0x4567;
        const auto later=*world.create_authored(spec,{14,15});
        const auto first=*world.create_authored(spec,{3,4});
        require(world.advance_tick()==WorldTickResult::Complete && world.actor(first).tasks().size()==2,
                "Sprite replacement fixture did not create its real primary and child tasks");
        auto &actor=world.actor(first);
        actor.behavior.tick=ActorTickCallback::ProjectOffset;
        actor.scripts_and_physics_enabled=false;actor.tick_callback_enabled=false;
        const auto action=actor.action();const auto tasks=actor.tasks();
        const auto later_tasks=world.actor(later).tasks();const auto order=world.actors();
        const auto ticks=world.ticks();
        world.replace_sprite_script(0x1234,0xffff);
        require(actor.tasks().size()==tasks.size() && actor.tasks()[0].cursor==tasks[0].cursor &&
                    !actor.scripts_and_physics_enabled && !actor.tick_callback_enabled,
                "Missing sprite replacement evaluated its invalid script or changed a live task");
        rejects([&]{world.replace_sprite_script(1,0xffff);},"Invalid replacement script was accepted");
        require(actor.tasks().size()==tasks.size() && actor.tasks()[0].cursor==tasks[0].cursor &&
                    actor.behavior.tick==ActorTickCallback::ProjectOffset &&
                    !actor.scripts_and_physics_enabled && !actor.tick_callback_enabled,
                "Rejected replacement partly cleared tasks or callback controls");
        world.replace_sprite_script(1,1);
        const auto replaced=actor.tasks();
        require(replaced.size()==1 && replaced[0].id==tasks[0].id &&
                    replaced[0].temporary==0x1234 && replaced[0].cursor==17 &&
                    !replaced[0].sleep_frames && !replaced[0].stack_depth &&
                    actor.behavior.tick==ActorTickCallback::None &&
                    actor.scripts_and_physics_enabled && actor.tick_callback_enabled &&
                    actor.action().position==action.position && actor.action().velocity==action.velocity &&
                    actor.action().variables==action.variables && actor.action().animation==action.animation &&
                    actor.action().priority==action.priority && actor.script_style()==0 &&
                    world.actor(later).tasks().size()==later_tasks.size() &&
                    world.actor(later).tasks()[0].cursor==later_tasks[0].cursor &&
                    world.actors()==order && world.ticks()==ticks,
                "Sprite replacement lost first numeric match, task identity/temporary, or retained actor state");
        world.retire(first);
        rejects([&]{world.replace_sprite_script(1,1);},"Dormant first sprite match revived or skipped its released script slot");
        require(world.actor(later).tasks().size()==later_tasks.size() &&
                    world.actor(later).tasks()[0].cursor==later_tasks[0].cursor && world.ticks()==ticks,
                "Rejected dormant replacement changed a later duplicate actor");
        rejects([&]{world.replace_sprite_script(0,1);},"Literal zero sprite selector was substituted for an active actor");
        spec.sprite=0;
        const auto zero=*world.create_authored(spec,{0,1});
        world.replace_sprite_script(0,1);
        require(world.actor(zero).tasks()[0].cursor==17,"Literal zero sprite did not select its actual role");
        world.release_appearance(zero);
        world.replace_sprite_script(0xffff,0);
        require(world.actor(zero).tasks()[0].cursor==0 && !world.actor(zero).has_appearance() &&
                    world.ticks()==ticks,"Literal FFFF sprite replacement changed selector or invented artwork/time");

        ActorWorld pending(f.sprites,f.scripts,version);
        const auto current=*pending.create_authored(spawn(1),{0,1});
        require(pending.advance_tick()==WorldTickResult::NeedsEngine,"Replacement fixture lacked its executing script boundary");
        const auto old_cursor=pending.actor(current).tasks()[0].cursor;
        rejects([&]{pending.replace_sprite_script(0,0);},"Executing sprite script was replaced across its retained continuation");
        require(pending.request() && pending.actor(current).tasks()[0].cursor==old_cursor && !pending.ticks(),
                "Rejected executing replacement advanced its pending actual continuation");
    }
}
void independent_target_frontiers(Fixture &f) {
    for (const auto version : {eb::GameVersion::US,eb::GameVersion::JP})
        for (const auto helper : {std::array<unsigned,2>{0xc0a92d,0xc0a90c},
                                  {0xc0a8c6,0xc0a8a5}}) {
            const bool jp=version==eb::GameVersion::JP;
            const auto pose=jp ? 0xc0a49eu:0xc0a4bfu, call=helper[jp];
            const std::vector<std::uint8_t> bytes{0x42,std::uint8_t(pose),std::uint8_t(pose>>8),
                std::uint8_t(pose>>16),0x42,std::uint8_t(call),std::uint8_t(call>>8),
                std::uint8_t(call>>16),0x1f,0,0x09};
            auto scripts=std::make_shared<ActionScriptData>(bytes,0,std::vector<std::uint32_t>{0});
            ActorWorld world(f.sprites,scripts,version,AppearanceData{});
            const auto id=world.create(spawn());
            require(world.advance_tick()==WorldTickResult::NeedsEngine &&
                        world.actor(id).appearance.displayed() &&
                        world.request()->binding.operation==NativeAction::Unsupported &&
                        world.request()->diagnostic.authored_identifier==call &&
                        !world.request()->diagnostic.inline_length_known && !world.ticks(),
                    "Shared pose proof bypassed its real independent unported target service");
            const auto action=world.actor(id).action();
            rejects([&]{world.respond();},"Independent target contract made an unported callee executable");
            require(world.request() && world.actor(id).action().position==action.position &&
                        world.actor(id).action().variables==action.variables && !world.ticks(),
                    "Rejected target response mutated actor or completed its tick");
        }
}
void velocity_task_response(Fixture &f) {
    for (const auto version : {eb::GameVersion::US,eb::GameVersion::JP}) {
        const auto call=version==eb::GameVersion::JP ? 0xc0ca30u:0xc0ca4eu;
        const std::vector<std::uint8_t> bytes{0x1d,6,0,0x42,std::uint8_t(call),
            std::uint8_t(call>>8),std::uint8_t(call>>16),0x14,0,2,1,0,0x09};
        auto scripts=std::make_shared<ActionScriptData>(bytes,0,std::vector<std::uint32_t>{0});
        ActorWorld world(f.sprites,scripts,version);
        auto spec=spawn();spec.action.velocity[0]=0x10000;
        const auto id=world.create(spec);
        require(world.advance_tick()==WorldTickResult::NeedsEngine &&
                    world.request()->binding.operation==NativeAction::VelocityDistanceSleep &&
                    world.request()->action.temporary==6,
                "Velocity wait did not suspend its actual authored task");
        rejects([&]{world.respond(6,1,6);},"Velocity wait accepted an invented inline operand");
        world.respond(6,0,6);
        require(world.actor(id).tasks().front().sleep_frames==6,
                "Velocity quotient was not published to the actual current task");
        require(world.advance_tick()==WorldTickResult::Complete &&
                    world.actor(id).tasks().front().sleep_frames==5 && world.actor(id).action().variables[0]==0,
                "Velocity quotient did not set the actual current task sleep");
        for(unsigned tick=0;tick<5;++tick) world.advance_tick();
        require(world.actor(id).action().variables[0]==0,"Velocity task resumed before exact countdown");
        world.advance_tick();
        require(world.actor(id).action().variables[0]==1,"Velocity task did not resume after exact countdown");
    }
}
void authored_roles(Fixture &f) {
    auto world = f.world();
    const auto untagged = world.create(spawn());
    require(!world.actor(untagged).authored_role(), "Generic actor acquired an authored role");
    const auto reserved = *world.create_authored(spawn(), {23, 24});
    require(world.actor(reserved).authored_role() == 23 && world.actor_for_role(23) == reserved &&
                world.actor(reserved).appearance_context.phase_id == 23,
            "Authored role did not retain its independent identity/animation phase");
    std::vector<ActorId> ordinary;
    for (unsigned role = 0; role < 22; ++role) {
        const auto id = *world.create_authored(spawn());
        ordinary.push_back(id);
        require(world.actor(id).authored_role() == role && world.actor_for_role(role) == id,
                "Initial authored role allocation order changed");
    }
    const auto order = world.actors();
    require(!world.create_authored(spawn()) && world.actors() == order,
            "Occupied role range overwrote an actor or changed world order");
    require(world.create_authored(spawn(), {0, 30}).has_value(),
            "Ordinary roles consumed the reserved range");
    world.erase(ordinary[3]);
    world.erase(ordinary[7]);
    const auto seven = *world.create_authored(spawn());
    require(world.actor(seven).authored_role() == 7 && seven != ordinary[7],
            "Released authored role did not return at the head with a fresh host ID");
    auto invalid = spawn();
    invalid.sprite = 999999;
    rejects([&] { world.create_authored(invalid); }, "Invalid actor creation succeeded");
    const auto three = *world.create_authored(spawn());
    require(world.actor(three).authored_role() == 3,
            "Failed native actor creation consumed an authored role");
    world.release_appearance(three);
    require(world.actor_for_role(3) == three && !world.create_authored(spawn(), {3, 4}),
            "Graphics release destroyed the authored actor/task role");
    world.erase(three);
    const auto ending = *world.create_authored(spawn(2), {3, 4});
    require(world.advance_tick() == WorldTickResult::Complete && !world.actor_for_role(3) &&
                !world.erase(ending), "Script termination did not release its authored role");
    require(world.actor(*world.create_authored(spawn())).authored_role() == 3,
            "Script termination changed free role order");
    rejects([&] { world.create_authored(spawn(), {3, 2}); }, "Inverted role range accepted");
    rejects([&] { world.create_authored(spawn(), {0, 31}); }, "Invalid reserved role accepted");
    rejects([&] { world.actor_for_role(30); }, "Out-of-range authored role lookup accepted");
    require(!world.create_authored(spawn(), {2, 2}), "Empty role range allocated an actor");
}
void appearance_release(Fixture &f) {
    auto world = f.world();
    auto spec = spawn();
    spec.npc = 230;
    spec.action.velocity[0] = 65536;
    const auto id = world.create(spec);
    world.actor(id).appearance.select_four(0, 0);
    world.advance_tick();
    const auto frame = world.draw(522, f.palettes, 11);
    require(!frame->quads.empty(), "Release fixture did not publish artwork");
    const auto pixels = eb::rasterize_direct_scene({frame, {}});
    const auto action = world.actor(id).action();
    const auto order = world.actors();
    require(world.release_appearance(id) && !world.release_appearance(id) &&
                !world.release_appearance(99999),
            "Native appearance release is not idempotent");
    const auto &released = world.actor(id);
    require(world.actors() == order && world.size() == 1 && !released.npc() &&
                !world.actor_for_npc(230) && world.active_npcs().empty() &&
                !released.has_appearance() && !released.appearance.available() &&
                released.action().position == action.position &&
                released.action().velocity == action.velocity &&
                released.action().variables == action.variables &&
                released.action().animation == action.animation && released.action().alive &&
                world.ticks() == 1 && world.draw(522, f.palettes, 11)->quads.empty(),
            "Appearance release changed simulation or retained NPC/art ownership");
    rejects([&] { world.actor(id).appearance.select_four(0, 0); },
            "Released appearance was refreshed");
    world.advance_tick();
    require(world.actor(id).action().variables[0] == action.variables[0] + 1 &&
                world.actor(id).action().position[0] == action.position[0] + 65536 &&
                eb::rasterize_direct_scene({frame, {}}) == pixels,
            "Appearance release destroyed the script, motion or published frame");
    // The newly activated NPC owns the identity. Erasing the older script-only
    // actor must not remove that identity or recycle its host graphical ID.
    const auto replacement = world.create(spec);
    require(replacement != id && world.actor_for_npc(230) == replacement,
            "Released NPC identity could not be activated independently");
    require(world.erase(id) && world.actor_for_npc(230) == replacement &&
                world.actors() == std::vector<ActorId>{replacement},
            "Old script cleanup removed a new actor's NPC identity");

    auto pending = f.world();
    const auto blocked = pending.create(spawn(1));
    require(pending.advance_tick() == WorldTickResult::NeedsEngine,
            "Release fixture did not suspend at an engine request");
    const auto request_id = pending.request()->action.identifier;
    pending.release_appearance(blocked);
    require(pending.advance_tick() == WorldTickResult::NeedsEngine &&
                pending.request()->action.identifier == request_id,
            "Appearance release discarded a pending script request");
    pending.respond(42);
    require(pending.advance_tick() == WorldTickResult::Complete && pending.size() == 1 &&
                pending.draw(522, f.palettes, 11)->quads.empty(),
            "Released actor could not resume its original script");
}
void rendering_isolation(Fixture &f) {
    auto native = f.world(), wide = f.world();
    const auto a = native.create(spawn(0, 450)), b = wide.create(spawn(0, 450));
    native.actor(a).appearance.select_four(0, 0);
    wide.actor(b).appearance.select_four(0, 0);
    for (unsigned frame = 0; frame < 32; ++frame) {
        native.advance_tick();
        wide.advance_tick();
        const auto before = wide.actor(b).action();
        for (unsigned sample = 0; sample < 8; ++sample)
            (void)wide.draw(522, f.palettes, 7);
        require(wide.actor(b).action().position == before.position &&
                    wide.actor(b).action().variables == before.variables &&
                    wide.actor(b).appearance.displayed()->pose == 0,
                "Presentation samples changed native simulation/animation");
        (void)native.draw(256, f.palettes, 7);
        require(native.actor(a).action().variables == wide.actor(b).action().variables &&
                    native.actor(a).action().position == wide.actor(b).action().position,
                "Widescreen changed native actor updates");
    }
    require(native.draw(256, f.palettes, 7)->quads.empty(), "Offscreen actor should be culled");
    native.scene().camera_x = 350;
    native.advance_tick();
    const auto picture = native.draw(256, f.palettes, 7);
    require(!picture->quads.empty() && native.size() == 1,
            "Camera arrival required a new activation or an unready image");
    const auto pixels = eb::rasterize_direct_scene({picture, {}});
    native.actor(a).behavior.draw_world = false;
    require(native.draw(256, f.palettes, 7)->quads.empty() && native.size() == 1,
            "Disabled native draw callback still published the actor");
    native.erase(a);
    require(native.draw(256, f.palettes, 7)->quads.empty() &&
                eb::rasterize_direct_scene({picture, {}}) == pixels,
            "Actor removal changed a published frame");

    auto crowded = f.world();
    for (unsigned i = 0; i < 2000; ++i) {
        const auto id = crowded.create(spawn());
        crowded.actor(id).appearance.select_four(0, 0);
    }
    crowded.advance_tick();
    const auto dense = crowded.draw(522, f.palettes, 9);
    require(crowded.size() == 2000 && dense->motions.size() == 2000 && dense->atlas_height == 16,
            "Native world retained a hardware actor/resource slot limit");
    for (const auto id : crowded.actors())
        require(crowded.actor(id).action().variables[0] == 1 && crowded.erase(id),
                "Crowded native script/lifecycle failed");
    require(crowded.size() == 0, "Host actor deletion leaked live identities");
}
void appearance_services(Fixture &f) {
    const std::vector<std::uint8_t> bytes{
        0x42, 0xbf, 0xa4, 0xc0, 0x06, 1, 0x3b, 1, 0x42, 0x80, 0xa4, 0xc0, 0x09,
        0x42, 0xbf, 0xa4, 0xc0, 0x1f, 0, 0x09,
        0x42, 0x11, 0xc7, 0xc0, 0x1f, 0, 0x09,
        0x42, 0xe3, 0xa6, 0xc0, 0x06, 1, 0x19, 27, 0};
    auto scripts = std::make_shared<ActionScriptData>(bytes, 0, std::vector<std::uint32_t>{0, 13, 20, 27});
    AppearanceData data;
    data.footstep_sounds[0] = 123;
    ActorWorld world(f.sprites, scripts, eb::GameVersion::US, data);
    auto spec = spawn();
    spec.behavior.projected_x = 128;
    spec.behavior.projected_y = 112;
    spec.appearance_context.shape = 999; // Geometry comes from owned sprite content.
    const auto id = world.create(spec);
    require(world.advance_tick() == WorldTickResult::Complete &&
                world.actor(id).appearance.displayed()->pose == 0 &&
                world.actor(id).appearance_context.shape == f.sprites->definition(0).shape,
            "Native initial appearance did not replace graphics-storage callback");
    require(world.advance_tick() == WorldTickResult::Complete &&
                world.actor(id).appearance.displayed()->pose == 1,
            "Authored animation command did not update native artwork");
    auto gated = spec;
    gated.script = 2;
    const auto visible = world.create(gated);
    require(world.advance_tick() == WorldTickResult::Complete &&
                world.actor(visible).action().variables[0] == 0xffff,
            "Defined appearance predicate result was not returned to authored script");

    ActorWorld live(f.sprites, scripts, eb::GameVersion::US, data);
    spec.script = 1;
    const auto blocked = live.create(spec);
    require(live.advance_tick() == WorldTickResult::NeedsEngine &&
                !live.request()->binding.discard_result && !live.actor(blocked).appearance.displayed(),
            "Observable graphics transport result was fabricated or mutated actor before suspension");
    rejects([&] { live.take_sound_events(); }, "Partial world tick published audio intents");
    require(live.advance_tick() == WorldTickResult::NeedsEngine && !live.actor(blocked).appearance.displayed(),
            "Repeated suspension applied appearance side effects twice");

    ActorWorld walking(f.sprites, scripts, eb::GameVersion::US, data);
    spec.script = 3;
    spec.action.variables[2] = spec.action.variables[3] = 1;
    spec.appearance_context.footstep_owner = true;
    const auto a = *walking.create_authored(spec,{0,1}), b = *walking.create_authored(spec,{1,2});
    require(walking.actor(a).authored_role()==0 && walking.actor(b).authored_role()==1,
            "Footstep ownership fixture lost its separate authored roles");
    walking.appearance_scene().footstep_role=1;
    for (unsigned tick = 1; tick <= 3; ++tick) {
        require(walking.advance_tick() == WorldTickResult::Complete, "Native eight-direction animation stopped");
        for (unsigned sample = 0; sample < 5; ++sample)
            (void)walking.draw(522, f.palettes, 1);
        const auto sounds = walking.take_sound_events();
        require(tick == 3 ? sounds.size() == 1 : sounds.empty(), "Animation audio followed render frequency");
        if (tick == 3)
            require(sounds[0].actor == b && sounds[0].tick == 3 && sounds[0].sound == 123,
                    "Native footstep intents lost actor execution order");
        require(walking.take_sound_events().empty(), "Native sound intent was published more than once");
    }
}
void appearance_transaction(Fixture &f) {
    // This call's result is observed by the script. With an established
    // fingerprint it advances the timer, changes the pose, emits a footstep,
    // and may flash. An unrepresentable return must roll back all those effects.
    const std::vector<std::uint8_t> bytes{0x42, 0xe3, 0xa6, 0xc0, 0x1f, 0, 0x09};
    const auto scripts =
        std::make_shared<ActionScriptData>(bytes, 0, std::vector<std::uint32_t>{0});
    AppearanceData data;
    data.footstep_sounds[0] = 123;
    auto spec = spawn();
    spec.action.animation = 2;
    spec.action.variables[0] = 0xaaaa;
    spec.action.variables[2] = 1;
    spec.action.variables[3] = 5;
    spec.appearance_context.footstep_owner = true;
    for (const bool incidental_return : {false, true}) {
        ActorWorld world(f.sprites, scripts, eb::GameVersion::US, data);
        const auto id = *world.create_authored(spec,{0,1});
        world.appearance_scene().footstep_role=0;
        auto &owned = world.actor(id);
        owned.appearance.step_eight(owned.action(), {0, 0, 0, 0, 0, false, true});
        const auto before = owned.action();
        const auto displayed = owned.appearance.displayed();
        const auto fingerprint = owned.appearance.fingerprint();
        world.appearance_scene().intangibility_ticks = incidental_return ? 45 : 0;
        const auto result = world.advance_tick();
        if (incidental_return) {
            require(result == WorldTickResult::NeedsEngine && !world.request()->binding.discard_result,
                    "Observed incidental appearance result did not suspend");
            require(owned.action().animation == before.animation &&
                        owned.action().variables == before.variables &&
                        owned.appearance.displayed() == displayed &&
                        owned.appearance.fingerprint() == fingerprint && !owned.appearance.flashing_hidden(),
                    "Suspended appearance committed timer, artwork or flash effects");
            require(world.advance_tick() == WorldTickResult::NeedsEngine &&
                        owned.action().variables == before.variables,
                    "Repeated suspension advanced appearance again");
            world.erase(id);
            require(world.advance_tick() == WorldTickResult::Complete && world.take_sound_events().empty(),
                    "Suspended appearance leaked a footstep after actor removal");
        } else {
            require(result == WorldTickResult::Complete && owned.action().animation == 0 &&
                        owned.action().variables[0] == 0 && owned.action().variables[2] == 5 &&
                        owned.appearance.displayed()->pose == 0,
                    "Defined zero appearance result failed to commit and resume its script");
            const auto sounds = world.take_sound_events();
            require(sounds.size() == 1 && sounds[0].actor == id && sounds[0].tick == 1 &&
                        sounds[0].sound == 123 && world.take_sound_events().empty(),
                    "Committed appearance did not publish exactly one footstep");
        }
    }
}
void bound_geometry(Fixture &f) {
    for (const auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        const bool jp = version == eb::GameVersion::JP;
        std::vector<std::uint8_t> bytes;
        const auto call = [&](unsigned identifier) {
            bytes.insert(bytes.end(), {0x42, std::uint8_t(identifier), std::uint8_t(identifier >> 8),
                                      std::uint8_t(identifier >> 16)});
        };
        call(jp ? 0xc449c9 : 0xc46c45);
        call(jp ? 0xc44a0b : 0xc46c87);
        bytes.insert(bytes.end(), {0x1f, 2, 0x1d, 6, 0});
        call(jp ? 0xc448b3 : 0xc46b37);
        bytes.insert(bytes.end(), {0x1f, 4});
        call(jp ? 0xc448a9 : 0xc46b2d);
        bytes.insert(bytes.end(), {0x1f, 5, 0x09});
        auto scripts = std::make_shared<ActionScriptData>(bytes, 0, std::vector<std::uint32_t>{0});
        auto program = std::make_shared<CompiledActionProgram>(scripts, version);
        require(program->stats().unsupported_operations == 0 && program->stats().opaque_call_boundaries == 0,
                "Geometry calls remain opaque after content import");
        ActorWorld world(f.sprites, program);
        auto spec = spawn();
        spec.action.position = {0x7fff1234u, 0xffff5678u, 0x9988abcdu};
        spec.action.variables[6] = 0xffff;
        spec.action.variables[7] = 0x8000;
        spec.behavior.physics = ActorPhysics::Stationary;
        const auto id = world.create(spec);
        require(world.advance_tick() == WorldTickResult::Complete && !world.request(),
                "Bound geometry did not execute within the native actor tick");
        const auto &actor = world.actor(id).action();
        require(actor.variables[0] == 0x7fff && actor.variables[1] == 0xffff &&
                    actor.variables[2] == 0x8000 && actor.variables[4] == 2 && actor.variables[5] == 0x4000 &&
                    actor.position == std::array<std::uint32_t, 3>{0xffff1234u, 0x80005678u, 0x9988abcdu},
                "Native geometry lost integer/fractional state or script return flow");
    }
}
void bound_shared_flags(Fixture &f) {
    for (const auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        const bool jp = version == eb::GameVersion::JP;
        const unsigned write = jp ? 0xc0a836 : 0xc0a857;
        const unsigned read = jp ? 0xc0a82b : 0xc0a84c;
        const std::vector<std::uint8_t> bytes{
            0x1d, 0, 0x80, 0x42, std::uint8_t(write), std::uint8_t(write >> 8), 0xc0, 8, 0,
            0x1f, 0, 0x42, std::uint8_t(read), std::uint8_t(read >> 8), 0xc0, 8, 0, 0x1f, 1, 0x09};
        auto scripts = std::make_shared<ActionScriptData>(bytes, 0, std::vector<std::uint32_t>{0});
        ActorWorld world(f.sprites, scripts, version);
        std::array<std::uint8_t, 128> flags{};
        flags[0] = 5;
        const auto id = world.create(spawn());
        require(world.advance_tick() == WorldTickResult::NeedsEngine &&
                    world.request()->binding.operation == NativeAction::WriteEventFlag && flags[0] == 5,
                "Unbound compiled flag call silently advanced");
        // Retrying an already yielded request requires its owner to respond;
        // binding cannot implicitly acknowledge a pending transaction.
        world.scene().event_flags = flags;
        const auto &request = *world.request();
        auto &actor = world.actor(id);
        const auto response = apply_action(request.binding, request.action.temporary, actor.action(),
                                           actor.behavior, world.scene());
        require(response.handled && response.value == 0x85 && flags[0] == 0x85,
                "Shared flag write did not commit to authoritative storage");
        world.respond(response.value, response.parameter_bytes);
        require(world.advance_tick() == WorldTickResult::Complete && !world.request() &&
                    actor.action().variables[0] == 0x85 && actor.action().variables[1] == 1,
                "Compiled actor did not resume and read its shared flag natively");
    }
}
} // namespace
int main() {
    try {
        Fixture fixture;
        ordering_and_physics(fixture);
        camera_refresh_ordering(fixture);
        requests_and_lifecycle(fixture);
        retained_sprite_copy_and_attachment(fixture);
        movement_bounds_script(fixture);
        movement_bounds_query_script(fixture);
        sprite_script_replacement(fixture);
        independent_target_frontiers(fixture);
        velocity_task_response(fixture);
        authored_roles(fixture);
        appearance_release(fixture);
        rendering_isolation(fixture);
        appearance_services(fixture);
        appearance_transaction(fixture);
        bound_geometry(fixture);
        bound_shared_flags(fixture);
        std::cout << "PASS native actor world: staged scripts/callbacks/motion, resumable requests, "
                     "creation/deletion order, NPC identity, view isolation and 2000 live actors\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
