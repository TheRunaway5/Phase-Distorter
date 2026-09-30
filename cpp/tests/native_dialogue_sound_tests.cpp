// Script sound service intent plus real CPU-free Scene/ActorWorld progression.
// Synthetic assets only. The external audio acknowledgment is not PCM proof.
#include "native_interaction_test_assets.hpp"

namespace {
using namespace interaction_test_assets;
using dialogue::Progress;
auto program(eb::GameVersion region,std::vector<std::uint8_t> bytes) {
    return std::make_shared<dialogue::Program>(region,
        std::vector<dialogue::ContentBlock>{{0,0,std::move(bytes)}},std::vector<dialogue::Location>{{0,0}});
}
void reach(dialogue::Runtime& runtime,unsigned budget) {
    for(unsigned i=0;i<100;++i)if(runtime.advance(budget)!=Progress::BudgetExhausted)return;
    throw std::runtime_error("Sound parser exceeded work bound");
}
Progress reach(story::Scene::Operation& operation) {
    for(unsigned i=0;i<10000;++i){auto p=operation.advance(i%2?1:7);if(p!=Progress::BudgetExhausted)return p;}
    throw std::runtime_error("Sound Scene exceeded work bound");
}
void parser(eb::GameVersion region) {
    for(unsigned literal=0;literal<256;++literal)for(unsigned budget:{1u,4096u})
        for(std::uint32_t argument:{0u,0xabcd0100u,0xffff0080u,0x12345678u}) {
        dialogue::State state;state.dummy.active={0x98765432,argument,0x55aa};
        dialogue::Runtime vm(program(region,{0x1f,2,std::uint8_t(literal),0x71,2}),state);
        vm.start(dialogue::EntryId{0});reach(vm,budget);
        const auto request=*vm.request();const auto registers=state.window().active;
        const auto word=std::uint16_t(literal?literal:argument);const auto byte=std::uint8_t(word);
        check(request.kind==dialogue::RequestKind::ScriptSound && request.script_sound &&
              request.script_sound->source_value==word && request.script_sound->value==(byte?byte:0x57) &&
              request.script_sound->kind==(byte?dialogue::ScriptSoundKind::QueueEffect:
                                               dialogue::ScriptSoundKind::DirectDriverCommand) &&
              request.source==dialogue::Location{0,0} && request.command==0x1f && request.selector==2 &&
              vm.snapshot().consumed_bytes==3,"CC1F02 lost raw operand or low-word/byte sound semantics");
        for(unsigned b:{0u,1u,4096u})check(vm.advance(b)==Progress::Suspended && *vm.request()==request &&
            vm.snapshot().consumed_bytes==3 && state.window().active==registers,"Pending sound consumed data or changed registers");
        vm.respond({42,0xffff,0xffff});
        check(vm.request()->kind==dialogue::RequestKind::SoundWorldTick &&
              vm.request()->serial==request.serial+1 && vm.snapshot().consumed_bytes==3 &&
              state.window().active==registers,"Sound acknowledgment omitted world update or wrote a fake result");
        auto tick=*vm.request();for(unsigned b:{0u,1u,4096u})check(vm.advance(b)==Progress::Suspended && *vm.request()==tick,
                                                                 "Pending world service advanced twice");
        vm.respond();reach(vm,budget);check(vm.request()->kind==dialogue::RequestKind::Glyph && vm.request()->glyph==0x71,
                                           "CC1F02 consumed more than one operand byte");
        vm.respond();reach(vm,budget);check(vm.returned_cursor()==dialogue::Location{0,5},"Sound changed returned cursor");
    }
    // Capture the fallback only at the operand boundary, before host callbacks.
    dialogue::State state;state.dummy.active.argument=1;
    dialogue::Runtime vm(program(region,{0x1f,2,0,2}),state);vm.start(dialogue::EntryId{0});
    check(vm.advance(2)==Progress::BudgetExhausted,"Tree unexpectedly reached the audio frontier");
    state.dummy.active.argument=0x111180;reach(vm,1);
    check(vm.request()->script_sound->source_value==0x1180,"Fallback was sampled before the operand");
    state.dummy.active.argument=9;check(vm.request()->script_sound->source_value==0x1180,"Audio intent followed later argument changes");
    vm.respond();vm.respond();check(vm.advance()==Progress::Finished,"Captured operand failed to finish");
}
void streams(eb::GameVersion region) {
    std::vector<std::uint8_t> page(65536,2);page[65534]=0x1f;page[65535]=2;page[0]=0x15;page[1]=2;
    auto p=std::make_shared<dialogue::Program>(region,std::vector<dialogue::ContentBlock>{{4,0,std::move(page)}},
                                             std::vector<dialogue::Location>{{4,65534}});
    dialogue::State state;dialogue::Runtime vm(p,state);vm.start(dialogue::EntryId{0});reach(vm,1);
    check(vm.request()->script_sound->value==0x15 && vm.snapshot().frames.back().cursor==dialogue::Location{4,1},
          "Raw compression-prefix operand or low-word stream wrap changed");
    vm.respond();vm.respond();check(vm.advance()==Progress::Finished && vm.returned_cursor()==dialogue::Location{4,2},
                                   "Wrapped script sound did not resume at the next byte");
    if(region==eb::GameVersion::US) {
        auto dictionary=std::make_shared<dialogue::Program>(region,
            std::vector<dialogue::ContentBlock>{{0,0,{0x15,0,0x72,2}},{1,0,{0x1f,2,0x17,0x71,0}}},
            std::vector<dialogue::Location>{{0,0}},std::vector<dialogue::ReferenceBinding>{},
            std::vector<dialogue::Location>(768,dialogue::Location{1,0}));
        dialogue::Runtime d(dictionary,state);d.start(dialogue::EntryId{0});reach(d,1);
        check(d.request()->kind==dialogue::RequestKind::ScriptSound && d.request()->script_sound->value==0x17,
              "Dictionary operand incorrectly expanded its compression prefix");
        d.respond();d.respond();reach(d,1);check(d.request()->glyph==0x71,"World continuation lost dictionary tail");
        d.respond();reach(d,1);check(d.request()->glyph==0x72,"Dictionary tail did not return to primary stream");
        d.respond();check(d.advance()==Progress::Finished,"Dictionary sound did not finish");
    }
    dialogue::Runtime missing(program(region,{0x1f,2}),state);missing.start(dialogue::EntryId{0});
    rejects([&]{reach(missing,1);},"Truncated sound operand was silently supplied");
}
struct SoundFixture:Fixture {
    ActorId actor;
    explicit SoundFixture(eb::GameVersion region,std::vector<std::uint8_t> code)
        :Fixture(region,[&](Content& c){c.first_text=std::move(code);}) {
        actor=leader();start();window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
    }
};
void scene(eb::GameVersion region) {
    for(bool instant:{false,true})for(std::uint32_t argument:{0x0100u,0x0180u}) {
        SoundFixture f(region,{0x1f,2,0,2});
        f.output.policy().instant=instant;f.windows.menu_state().early_tick_exit=true;
        f.text.window().active={0x12345678,argument,0x55};const auto before=f.text.window().active;
        f.meters.state().area_dirty=1;f.meters.state().upload=0;
        const auto frames=f.scene->completed_frames(),ticks=f.actors.ticks();const auto random=f.random;
        const auto image=f.scene->frame();const auto image_copy=*image;
        dialogue::Conversation text(f.program,f.prompts);text.start(dialogue::EntryId{0});auto operation=f.scene->begin(text);
        check(reach(*operation)==Progress::Suspended && operation->service()==story::SceneService::ScriptSound,
              "Scene did not expose sound before world work");
        const auto request=operation->script_sound();
        for(unsigned b:{0u,1u,4096u})check(operation->advance(b)==Progress::Suspended && operation->script_sound()==request &&
            f.scene->completed_frames()==frames && f.actors.ticks()==ticks && f.meters.state().area_dirty==1 &&
            f.scene->frame()==image && f.random==random,"Pending sound ran world work or changed intent");
        rejects([&]{operation->complete_frame({0,0});},"Audio boundary accepted a frame acknowledgment");
        rejects([&]{operation->respond_dialogue({});},"Audio boundary accepted generic dialogue acknowledgment");
        {dialogue::Conversation child(f.program,f.prompts);rejects([&]{child.start_nested(dialogue::Location{0,64},text);},
                                                                  "Audio service allowed a recursive game callback");}
        operation->respond_script_sound();rejects([&]{operation->respond_script_sound();},"Sound was acknowledged twice");
        check(reach(*operation)==Progress::Suspended && operation->service()==story::SceneService::Frame &&
              f.actors.ticks()==ticks+1 && f.scene->completed_frames()==frames && f.meters.state().area_dirty==0 &&
              f.meters.state().upload==1 && f.random==random,"CC1F02 skipped world meters/actors or used WindowTick RAND/gates");
        operation->complete_frame({0x0080,0});
        check(reach(*operation)==Progress::Finished && f.scene->completed_frames()==frames+1 &&
              f.text.window().active==before && f.windows.prompt_state().pressed==f.input.pressed[0],
              "World completion lost input, wrote registers or skipped script return");
        check(image->frame==image_copy.frame && image->atlas==image_copy.atlas,"Sound world tick mutated an old frame");
    }
}
void nested(eb::GameVersion region) {
    SoundFixture f(region,{0x1f,2,3,2});
    f.window({dialogue::WindowAction::Open,dialogue::WindowId{2},{},0});
    f.window({dialogue::WindowAction::Focus,dialogue::WindowId{1},{},0});
    WorldActorSpec opaque;opaque.script=1;opaque.action.animation=0;
    opaque.action.position={100*65536+0x8000,100*65536+0x8000,0x8000};
    const auto blocked=f.actors.create(opaque); // Actual opaque engine instruction.
    dialogue::Conversation text(f.program,f.prompts);text.start(dialogue::EntryId{0});auto operation=f.scene->begin(text);
    check(reach(*operation)==Progress::Suspended && operation->service()==story::SceneService::ScriptSound,"Nested fixture lost sound");
    operation->respond_script_sound();
    check(reach(*operation)==Progress::Suspended && operation->service()==story::SceneService::ActorEngine,
          "World callback did not arise from the real actor runtime");
    auto child_program=program(region,{0x18,3,2,0x1f,2,4,2});
    dialogue::Conversation child(child_program,f.prompts);child.start_nested(dialogue::EntryId{0},text);
    auto nested=f.scene->begin_nested(child,*operation);
    check(reach(*nested)==Progress::Suspended && nested->service()==story::SceneService::ScriptSound &&
          f.text.focus==dialogue::WindowId{2},"Nested world dialogue lost current focus or its audio boundary");
    rejects([&]{operation->respond_actor();},"Parent actor resumed while child owns scene");
    const auto ticks=f.actors.ticks();nested->respond_script_sound();
    check(reach(*nested)==Progress::Suspended && nested->service()==story::SceneService::Frame && f.actors.ticks()==ticks,
          "Nested world sound pumped its parent's actor traversal");
    nested->complete_frame({0x8000,0});check(reach(*nested)==Progress::Finished,"Nested sound world did not return");
    f.windows.prompt_state().pressed=0x4080;
    check(f.actors.erase(blocked),"Prepared callback failed to remove suspended actor");
    check(reach(*operation)==Progress::Suspended && operation->service()==story::SceneService::Frame,"Parent lost pending world continuation");
    operation->complete_frame({0,0});f.windows.prompt_state().pressed=0x0080;
    check(reach(*operation)==Progress::Finished && f.text.focus==dialogue::WindowId{2} &&
          f.windows.prompt_state().pressed==0x0080,"Parent sound continuation restored stale focus/input");
}
}
int main() {
    try {for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}){parser(region);streams(region);scene(region);nested(region);}
         std::cout<<"Native script sound: "<<checks<<" checks passed\n";}
    catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
