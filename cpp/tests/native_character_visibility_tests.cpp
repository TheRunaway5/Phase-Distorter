#include "eb/native/world_character_visibility.hpp"
#include "native_battle_frame_fixture.hpp"
#include "native_world_control_commands_fixture.hpp"

namespace {
using namespace eb::native;
using battle_frame_test::check;
using battle_frame_test::rejects;
void role_visibility(eb::GameVersion version) {
    party::State party(version);
    WorldPartyState formation;
    ActorWorld actors(battle_frame_test::make_sprites(), battle_frame_test::make_scripts(), version);
    WorldCharacterVisibility visibility(party, formation, actors);
    party.display_order = {1, 2, 1, 0, 4, 0};
    party.party_count = 4;
    formation.roles = {29, 26, 24, 25, 27, 28};
    formation.current_leader_role = 27;
    check(visibility.uses(actors), "Visibility lost its actual actor owner");
    check(visibility.role(1) == 29 && visibility.role(0x101) == 29,
          "Member resolution lost low-byte/first-match semantics");
    check(visibility.role(0xff) == 27 && visibility.role(77) == 0xffff,
          "Member resolution confused current leader with party position");
    for (unsigned role = 0; role < 30; ++role) actors.set_authored_sprite_hidden(role, true);
    actors.appearance_scene().intangibility_ticks = 9;
    visibility.hide(2);
    check(actors.appearance_scene().intangibility_ticks == 0, "Hide did not clear intangibility");
    for (unsigned role = 0; role < 30; ++role)
        check(actors.authored_sprite_hidden(role) == (role < 24 || role == 26),
              "Hide did not clear exactly the six retained physical party flags");
    visibility.hide(0xff);
    for (unsigned i = 0; i < 4; ++i)
        check(actors.authored_sprite_hidden(formation.roles[i]), "Hide FF lost a counted formation role");
    actors.set_authored_sprite_hidden(27, true);
    visibility.show(0xff);
    check(actors.authored_sprite_hidden(27) && !actors.authored_sprite_hidden(29),
          "Byte FF show must update counted roles, retaining the independent leader");
    actors.appearance_scene().intangibility_ticks = 7;
    visibility.show(0xffff);
    check(actors.appearance_scene().intangibility_ticks == 7, "Show changed intangibility");
    for (unsigned i = 0; i < 4; ++i)
        check(!actors.authored_sprite_hidden(formation.roles[i]), "All-party show lost a counted role");
    visibility.hide(77);
    check(actors.appearance_scene().intangibility_ticks == 0, "Missing member skipped the real hide prefix");
    formation.roles[0] = 30;
    actors.appearance_scene().intangibility_ticks = 3;
    rejects([&] { visibility.hide(0xff); }, "Out-of-owned role silently aliased another field");
    check(actors.appearance_scene().intangibility_ticks == 3, "Rejected role mutated the hide prefix");
    formation.roles[0] = 29;
    party.party_count = 7;
    rejects([&] { visibility.show(0xff); }, "Overlong party list was silently truncated");
    party.party_count = 4;
    for (std::uint8_t mode : {0, 1, 6}) {
        visibility.apply(1, mode, false);
        check(actors.authored_sprite_hidden(29), "Nonanimated hide mode did not publish real visibility");
        visibility.apply(1, mode, true);
        check(!actors.authored_sprite_hidden(29), "Nonanimated show mode did not publish real visibility");
    }
}
void player_lock(eb::GameVersion version) {
    party::State party(version); WorldPartyState formation;
    ActorWorld actors(battle_frame_test::make_sprites(), battle_frame_test::make_scripts(), version);
    WorldCharacterVisibility visibility(party,formation,actors);
    party.party_count=4;party.display_order={1,2,1,0,4,0};
    formation.roles={29,26,24,25,27,28};formation.current_leader_role=27;
    for(bool lock : {false,true}) for(std::uint8_t selector : {0,1,2,4,77,255}) {
        for(unsigned role=0;role<30;++role) actors.set_authored_pause(role,lock,lock);
        if(lock) visibility.set_player_lock(selector);
        else visibility.clear_player_lock(selector);
        for(unsigned role=0;role<30;++role) {
            const bool paused=selector==255 ? (role==23||role==29||role==26||role==24||role==25)
                : selector==0 ? role==25 : selector==1 ? role==29 : selector==2 ? role==26
                : selector==4 ? role==27 : false;
            check(actors.authored_pause(role)==AuthoredActorPause{paused ? !lock : lock,paused ? !lock : lock},
                  "Literal player lock selected leader/all-party/missing role incorrectly");
        }
    }
    for(unsigned role=0;role<30;++role) actors.set_authored_pause(role,true,true);
    formation.roles[3]=30;
    rejects([&]{visibility.set_player_lock(255);},"Unowned all-party player lock accepted");
    for(unsigned role=0;role<30;++role)
        check(actors.authored_pause(role)==AuthoredActorPause{true,true},
              "Rejected player lock partially disabled counted roles/controller");
    for(unsigned role=0;role<30;++role) actors.set_authored_pause(role,false,false);
    rejects([&]{visibility.clear_player_lock(255);},"Unowned all-party player unlock accepted");
    for(unsigned role=0;role<30;++role)
        check(actors.authored_pause(role)==AuthoredActorPause{false,false},
              "Rejected player unlock partially enabled counted roles/controller");
}
void entity_lock(eb::GameVersion version) {
    using K=WorldControlCommandKind;
    control_command_test::Fixture fixture(version);
    party::State party(version);
    party.party_count=4;
    fixture.formation.roles={24,25,26,27,28,29};
    WorldCharacterVisibility visibility(party,fixture.formation,fixture.actors);
    WorldControlCommands commands(fixture.automatic,visibility);
    const auto first=fixture.create(4,1,255);
    fixture.actors.retire(first);
    (void)fixture.create(10,1,255);
    (void)fixture.create(2,0,0x1234);
    for (unsigned command : {0xe6u,0xe7u,0xe9u,0xeau}) {
        const bool sprite=command==0xe7 || command==0xea;
        const bool paused=command==0xe6 || command==0xe7;
        const auto kind=command==0xe6?K::SetNpcLock:command==0xe7?K::SetSpriteLock:
                        command==0xe9?K::ClearNpcLock:K::ClearSpriteLock;
        for (unsigned selector : {0u,1u,255u,256u,0x1234u,0x4321u,65535u}) {
            std::optional<unsigned> selected;
            for (unsigned role=0;role<30;++role)
                if ((sprite?fixture.actors.authored_sprite_selector(role):fixture.actors.authored_npc_selector(role))==selector) {
                    selected=role;break;
                }
            for (unsigned role=0;role<30;++role) fixture.actors.set_authored_pause(role,true,false);
            dialogue::State state;
            state.dummy.active={0xaabbccdd,0x12345678,0x9abc};
            state.dummy.saved={0x87654321,0xddccbbaa,0x1234};
            const auto registers=state.dummy;
            dialogue::Runtime runtime(battle_frame_test::program(version,
                {0x1f,std::uint8_t(command),std::uint8_t(selector),std::uint8_t(selector>>8),0x41,2}),state);
            runtime.start(dialogue::EntryId{0});
            check(runtime.advance(0)==dialogue::Progress::BudgetExhausted,"Zero budget consumed entity lock operands");
            while(runtime.advance(1)==dialogue::Progress::BudgetExhausted){}
            check(runtime.request() && runtime.request()->world_control==WorldControlCommand{kind,std::uint16_t(selector)} &&
                  runtime.snapshot().consumed_bytes==4,"Entity lock lost a literal word or used a register/party shortcut");
            const auto pending=runtime.request();
            check(runtime.advance()==dialogue::Progress::Suspended && runtime.request()==pending &&
                  runtime.snapshot().consumed_bytes==4,"Entity lock replayed or swallowed the following byte");
            commands.apply(*runtime.request()->world_control);
            for (unsigned role=0;role<30;++role)
                check(fixture.actors.authored_pause(role)==(selected==role ? AuthoredActorPause{!paused,!paused}
                                                                         : AuthoredActorPause{true,false}),
                      "Entity lock skipped retained first match, changed a callback, or applied FF to the party");
            check(fixture.actors.ticks()==0 && !fixture.actors.in_tick(),"Entity lock advanced the actual scheduler");
            runtime.respond();
            check(state.dummy.active==registers.active && state.dummy.saved==registers.saved,
                  "Entity lock changed working/argument/saved registers");
            while(runtime.advance(1)==dialogue::Progress::BudgetExhausted){}
            check(runtime.request()->kind==dialogue::RequestKind::Glyph && runtime.request()->glyph==0x41,
                  "Entity lock swallowed its following glyph");
        }
        for (unsigned extent : {2u,3u}) {
            dialogue::State state;
            std::vector<std::uint8_t> truncated{0x1f,std::uint8_t(command),0x34};
            truncated.resize(extent);
            dialogue::Runtime runtime(battle_frame_test::program(version,truncated),state);
            runtime.start(dialogue::EntryId{0});
            rejects([&]{while(runtime.advance(1)!=dialogue::Progress::Finished){};},
                    "Truncated entity lock command was accepted");
        }
    }
    rejects([&]{fixture.commands.apply({K::SetSpriteLock,255});},"Entity lock accepted no real visibility owner");
}
void fade_bindings(eb::GameVersion version) {
    using A = NativeAction;
    const std::array<std::array<unsigned, 2>, 10> identifiers{{
        {0xc09f43, 0xc09f22}, {0xc09f71, 0xc09f50}, {0xc4cb4f, 0xc49e1f},
        {0xc4cb8f, 0xc49e5f}, {0xc4cbe3, 0xc49eb3}, {0xc4cc2f, 0xc49eff},
        {0xc4cd44, 0xc4a014}, {0xc4ceb0, 0xc4a180}, {0xc4ced8, 0xc4a1a8},
        {0xc4cc2c, 0xc49efc}}};
    const std::array operations{A::FadePauseActors, A::FadeRestoreActors, A::FadeShowSprites,
        A::FadeRefreshSprites, A::FadeHideBlinkSprites, A::FadeRows, A::FadeColumns,
        A::FadeResetDissolve, A::FadeDissolve, A::FadeFinishTask};
    ActionBindings bindings(version);
    const std::array<std::uint8_t, 1> bytes{};
    ActionScriptData data(bytes, 0);
    for (unsigned i = 0; i < operations.size(); ++i) {
        ActionEngineRequest request;
        request.kind = ActionRequestKind::CallEngine;
        request.identifier = identifiers[i][version == eb::GameVersion::JP];
        const auto bound = bindings.compile(request, data);
        check(bound.operation == operations[i] && bound.parameter_bytes == 0 &&
                  bound.temporary_input == ActionTemporaryInput::Independent,
              "Fade helper did not import its regional operation and input contract");
        ActionActorState actor;
        ActorActionContext context;
        ActionSceneContext scene;
        check(!apply_action(bound, 0x5678, actor, context, scene).handled,
              "Pure actor arithmetic falsely completed a fade owner callback");
    }
    ActionEngineRequest request;
    request.kind = ActionRequestKind::WriteGameWord;
    request.identifier = version == eb::GameVersion::JP ? 0xb67c : 0xb4a8;
    request.value = 0xffff;
    check(bindings.compile(request, data).operation == A::FadeReleaseController,
          "Fade controller release was not routed to its actual owner");
    ++request.identifier;
    check(bindings.compile(request, data).operation == A::Unsupported,
          "Fade release admitted an unrelated global write");
}
void parser(eb::GameVersion version) {
    for(unsigned command : {0xe5u,0xe8u}) for(unsigned value=0;value<256;++value) {
        dialogue::State state;state.dummy.active={0x12345678,0xabcdef00,0x4321};
        const auto before=state.dummy.active;
        dialogue::Runtime vm(battle_frame_test::program(version,
            {0x1f,std::uint8_t(command),std::uint8_t(value),0x41,2}),state);
        vm.start(dialogue::EntryId{0});
        while(vm.advance(1)==dialogue::Progress::BudgetExhausted){}
        check(vm.request() && vm.request()->kind==dialogue::RequestKind::WorldControl &&
              vm.request()->command==0x1f && vm.request()->selector==command &&
              vm.request()->world_control==WorldControlCommand{command==0xe5 ? WorldControlCommandKind::SetPlayerLock
                  : WorldControlCommandKind::ClearPlayerLock,std::uint16_t(value)} && vm.snapshot().consumed_bytes==3,
              "Player lock parser changed its literal byte or consumed another operand");
        const auto request=vm.request();
        check(vm.advance(32)==dialogue::Progress::Suspended && vm.request()==request &&
              vm.snapshot().consumed_bytes==3,"Pending player lock consumed or replayed content");
        vm.respond();
        check(state.dummy.active==before,"Player lock changed shared working registers");
        while(vm.advance(1)==dialogue::Progress::BudgetExhausted){}
        check(vm.request()->kind==dialogue::RequestKind::Glyph && vm.request()->glyph==0x41,
              "Player lock swallowed its following glyph");
    }

    for (std::uint8_t command : {0xeb, 0xec})
        for (std::uint8_t member : {0, 1, 255})
            for (std::uint8_t effect : {0, 1, 6, 255}) {
                dialogue::State state;
                state.focus = dialogue::WindowId{0};
                state.windows[*state.focus].active = {0x12345678, 0xabcdef00, 0x4321};
                const auto before = state.window().active;
                dialogue::Runtime runtime(battle_frame_test::program(
                    version, {0x1f, command, member, effect, 0x41, 2}), state);
                runtime.start(dialogue::EntryId{0});
                check(runtime.advance(32) == dialogue::Progress::Suspended,
                      "Character visibility command did not yield its actual service");
                const auto request = *runtime.request();
                check(request.kind == dialogue::RequestKind::WorldControl && request.world_control &&
                      request.world_control->kind == (command == 0xeb ? WorldControlCommandKind::HideCharacter
                                                                    : WorldControlCommandKind::ShowCharacter) &&
                      request.world_control->selector == member && request.world_control->effect == effect,
                      "Character command changed literal operands or service kind");
                check(state.window().active == before, "Visibility parser modified working registers");
                runtime.respond({});
                check(runtime.advance(32) == dialogue::Progress::Suspended && runtime.request()->kind == dialogue::RequestKind::Glyph &&
                      runtime.request()->glyph == 0x41, "Visibility parser consumed beyond its two operands");
                runtime.respond({});
                check(runtime.advance(32) == dialogue::Progress::Finished, "Visibility parser failed to resume");
            }
}
}
int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) { role_visibility(version); player_lock(version); entity_lock(version); fade_bindings(version); parser(version); }
        std::cout << "Native character visibility passed " << battle_frame_test::checks << " checks\n";
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
