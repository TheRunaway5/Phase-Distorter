#include "eb/native/world_sprite_fade.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned checks;
void check(bool value,const char *message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F f) {
    bool rejected=false;
    try { f(); } catch(const std::exception&) { rejected=true; }
    check(rejected,"Invalid fade ownership/domain was accepted");
}
struct Graphics : native_sprite_test::Fixture {
    Graphics() {
        bytes.resize(16384);
        layout.shapes=256;
        pointer(256,128);
        word(256-170,16);
        for(unsigned pose=0;pose<16;++pose) {
            const unsigned at=512+pose*256;
            word(41+pose*2,at | (pose&1));
            for(unsigned i=0;i<194;++i) bytes[at+i]=std::uint8_t(i*17+pose*29+3);
        }
    }
};
struct Fixture {
    Graphics graphics;
    std::shared_ptr<SpriteResources> sprites=std::make_shared<SpriteResources>(graphics.bytes,graphics.layout);
    SpriteEffectContent content{graphics.bytes,graphics.layout,sprites};
    std::shared_ptr<const ActionScriptData> scripts=std::make_shared<ActionScriptData>(
        std::vector<std::uint8_t>{6,1,9},0,std::vector<std::uint32_t>(860,0));
    ActorWorld actors;
    story::RandomState random{0x1234,0x5678};
    PreparedActorState prepared;
    battle::PsiScratch scratch;
    WorldSpriteFade fade;
    Fixture(eb::GameVersion version):actors(sprites,scripts,version),fade(content,actors,random,prepared,scratch) {
        scratch.bytes.fill(0xa5);
        prepared.x=12;prepared.y=34;prepared.height=56;prepared.direction=7;
        prepared.variables.fill(0x1234);prepared.priority=3;prepared.phase_id=29;
    }
    ActorId actor(unsigned role=4,unsigned direction=2) {
        WorldActorSpec spec;
        spec.action.animation=0;
        spec.action.priority=1;
        spec.behavior.direction=std::uint16_t(direction);
        spec.behavior.projected_x=100;spec.behavior.projected_y=100;
        const auto result=actors.create_authored(spec,{role,role+1});
        check(bool(result),"Fixture could not admit graphical actor");
        actors.actor(*result).appearance.select_four(direction,0);
        return *result;
    }
    std::uint16_t word(unsigned at) const { return scratch.bytes.at(at)|std::uint16_t(scratch.bytes.at(at+1))<<8; }
    std::shared_ptr<const eb::DirectSceneFrame> draw() {
        SpritePalettes colors{};
        for(auto &palette:colors) for(unsigned i=1;i<16;++i) palette[i]=0xff000000|i*0x111111;
        return actors.draw(256,colors,1);
    }
    auto call(WorldSpriteFadeTask task) { return fade.step(task,*fade.controller()); }
};
void unchanged_modes(eb::GameVersion version) {
    Fixture f(version);const auto bytes=f.scratch.bytes;const auto random=f.random;
    for(unsigned mode:{0,1,6}) f.fade.apply(0xffff,std::uint16_t(mode));
    check(!f.fade.controller()&&f.fade.count()==0&&f.actors.size()==0&&
          f.random==random&&f.scratch.bytes==bytes,"Immediate fade modes mutated owners");
    WorldActorSpec empty;const auto id=f.actors.create_authored_script(0,{}, {4,5});
    check(bool(id),"Fixture did not create script-only role");f.fade.apply(4,4);
    check(!f.fade.controller(),"Zero-height role created a fade controller");
}
void producer(eb::GameVersion version) {
    Fixture f(version);const auto id=f.actor();const auto initial=f.draw();const auto image=f.actors.actor(id).appearance.image();
    const auto random=f.random;f.fade.apply(4,4);
    check(f.fade.controller()&&f.fade.count()==1&&f.fade.allocated_bytes()==384,"Producer allocation differs");
    auto &controller=f.actors.actor(*f.fade.controller());
    check(controller.script_style()==(version==eb::GameVersion::JP?855:859)&&controller.script_only()&&
          controller.action().variables==std::array<std::uint16_t,8>{0,0,1,0,1,0,0,0},"Wrong real controller/script variables");
    check(controller.action().position==AuthoredActorPosition{0x8000,0x8000,0x8000}&&
          f.prepared.x==12&&f.prepared.y==34&&f.prepared.height==0&&f.prepared.direction==7&&
          f.prepared.phase_id==29&&f.prepared.priority==0&&
          f.prepared.variables==std::array<std::uint16_t,8>{},"INIT_ENTITY_WIPE prepared/position ordering differs");
    check(f.word(0x7c00)==4&&f.word(0x7c02)==4&&f.word(0x7c04)==3&&f.word(0x7c06)==16&&
          f.word(0x7c08)==24&&f.word(0x7c0a)==0&&f.word(0x7c0c)==192&&f.word(0x7c0e)==192&&
          f.word(0x7c10)==0&&f.word(0x7c12)==0,"Raw fade record is not actual source layout");
    const auto seed=f.content.planar_seed(0,four_direction_pose(2,0));
    check(std::equal(seed.begin(),seed.end(),f.scratch.bytes.begin())&&f.word(192)!=0&&
          f.word(194)==0&&f.scratch.bytes[384]==0xa5,"Inclusive seed or retained scratch tail differs");
    check(f.actors.actor(id).appearance.image()==image&&f.draw()->quads.empty()&&
          !initial->quads.empty()&&f.random==random,"Producer uploaded pixels or consumed RNG/frame");
    const auto other=f.actor(5);f.actors.set_authored_pause(5,false,true);
    f.call(WorldSpriteFadeTask::PauseActors);
    check(!f.actors.actor(id).scripts_and_physics_enabled&&!f.actors.actor(id).tick_callback_enabled&&
          controller.scripts_and_physics_enabled,"Controller did not pause other actual actors");
    f.call(WorldSpriteFadeTask::ShowSprites);
    check(!f.actors.actor(id).appearance.fade_hidden()&&!f.draw()->quads.empty(),"Source hidden gate not cleared");
    f.call(WorldSpriteFadeTask::RestoreActors);
    check(f.actors.actor(id).scripts_and_physics_enabled&&!f.actors.actor(other).scripts_and_physics_enabled&&
          f.actors.actor(other).tick_callback_enabled,"Authored pause backup was not restored exactly");
    const auto owner=*f.fade.controller();f.call(WorldSpriteFadeTask::ReleaseController);
    check(!f.fade.controller()&&f.actors.actor(owner).action().alive,"Global controller release retired VM itself");
    f.fade.apply(4,8);check(f.fade.controller()!=owner&&f.fade.count()==1,"Fresh producer did not reset owned buffers");
}
void pixel_modes(eb::GameVersion version) {
    for(unsigned mode:{3,4,5,8,9,10}) for(unsigned role:{4,24}) {
        Fixture f(version);const auto id=f.actor(role,3);auto &actor=f.actors.actor(id);
        actor.action().animation=2;
        f.fade.apply(std::uint16_t(role),std::uint16_t(mode));f.call(WorldSpriteFadeTask::ShowSprites);
        const auto original_frame=f.draw();const auto original_atlas=original_frame->atlas;
        const auto source=unsigned(f.word(0x7c0a)),destination=unsigned(f.word(0x7c0c));
        const auto pose=role>=24?eight_direction_pose(3,2):four_direction_pose(3,0);
        const auto seed=f.content.planar_seed(0,pose);
        check(std::equal(seed.begin(),seed.end(),f.scratch.bytes.begin()+(mode<6?source:destination)),
              "Role-specific seed frame/format differs");
        auto expected=f.scratch.bytes;
        unsigned total= mode==3||mode==8?24:mode==4||mode==9?16:64;
        const auto kind=mode==3||mode==8?WorldSpriteFadeTask::Rows:
                        mode==4||mode==9?WorldSpriteFadeTask::Columns:WorldSpriteFadeTask::Dissolve;
        if(kind==WorldSpriteFadeTask::Dissolve) f.call(WorldSpriteFadeTask::ResetDissolve);
        std::array<bool,64> phases{};auto random=f.random;
        for(unsigned step=0;step<total;++step) {
            const auto saved=actor.appearance.image();
            const auto saved_pixels=*saved->canvas;
            unsigned row=999,column=999,phase=999;
            if(kind==WorldSpriteFadeTask::Rows) row=step<12?step*2:(step-12)*2+1;
            else if(kind==WorldSpriteFadeTask::Columns) {
                const auto at=step%8;column=(step<8)==bool(at&1)?at:15-at;
            } else {
                phase=story::next_random(random)&63;
                while(phases[phase]) phase=(phase+1)&63;
                phases[phase]=true;
            }
            // Model only the selected physical bits, independently of Canvas.
            for(unsigned y=0;y<24;++y) for(unsigned x=0;x<16;++x)
                if(y==row||x==column||(phase<64&&((y&7)*8+(x&7)==phase)))
                    for(unsigned plane=0;plane<4;++plane) {
                        const auto at=((y/8)*2+x/8)*32+(y&7)*2+(plane/2)*16+(plane&1);
                        const auto bit=std::uint8_t(1<<(7-(x&7)));
                        expected[destination+at]=(expected[destination+at]&~bit)|(expected[source+at]&bit);
                    }
            const auto result=f.call(kind);
            check((kind==WorldSpriteFadeTask::Dissolve?!result:result==1),"Final copying call changed entry-count semantics");
            check(std::equal(expected.begin()+destination,expected.begin()+destination+192,
                             f.scratch.bytes.begin()+destination),"Physical sprite copy bits differ");
            check(*saved->canvas==saved_pixels&&original_frame->atlas==original_atlas,
                  "New sprite upload mutated retained artwork/frame");
            check(actor.appearance.image()!=saved&&f.draw()->quads.size()==original_frame->quads.size(),
                  "Actual fade upload did not replace retained native artwork");
        }
        if(kind!=WorldSpriteFadeTask::Dissolve) {
            const auto saved=actor.appearance.image();
            check(f.call(kind)==0&&actor.appearance.image()==saved,"Completed fade replayed its last upload");
        } else {
            check(f.random==random,"Dissolve did not consume exactly one shared RNG per phase");
            rejects([&]{f.call(kind);});
        }
        check(actor.appearance.image()->canvas&&original_frame->atlas==original_atlas,"Retained capture lost artwork lifetime");
        actor.appearance.select_four(3,0);
        check(actor.appearance.image()==f.sprites->acquire(0,four_direction_pose(3,0)),
              "Real source refresh failed to replace retained effect image");
    }
}
void live_buffers_and_generations(eb::GameVersion version) {
    Fixture f(version);const auto id=f.actor();f.fade.apply(4,3);f.call(WorldSpriteFadeTask::ShowSprites);
    // Reached callbacks must read current BUFFER, not a private seed snapshot.
    f.scratch.bytes[0]=0xff;f.scratch.bytes[1]=0xff;
    f.scratch.bytes[16]=0xff;f.scratch.bytes[17]=0xff;
    check(f.call(WorldSpriteFadeTask::Rows)==1&&f.word(192)==0xffff&&f.word(208)==0xffff,
          "Row helper ignored live shared source scratch");
    const auto old=f.draw();const auto atlas=old->atlas;f.actors.erase(id);const auto replacement=f.actor();
    check(replacement!=id,"Fixture reused a retired host generation");
    const auto retained=f.actors.actor(replacement).appearance.image();
    check(f.call(WorldSpriteFadeTask::Columns)==0,"Unrelated fade class acquired a target");
    rejects([&]{f.call(WorldSpriteFadeTask::Rows);});
    check(f.actors.actor(replacement).appearance.image()==retained&&old->atlas==atlas,
          "Stale fade mutated a reused role or previous frame");
}
void shared_dissolve(eb::GameVersion version) {
    Fixture f(version);const auto reveal=f.actor(4,2),erase=f.actor(24,4);
    f.fade.apply(4,5);f.fade.apply(24,10);
    const auto controller=*f.fade.controller();
    check(f.fade.count()==2&&f.fade.allocated_bytes()==768&&
          f.actors.actor(controller).action().variables[4]==1,
          "Two dissolve records allocated separate tasks instead of one class");
    f.call(WorldSpriteFadeTask::ShowSprites);f.call(WorldSpriteFadeTask::ResetDissolve);
    auto expected_random=f.random;unsigned phase=story::next_random(expected_random)&63;
    // The actual retained mark produces a source linear-probe collision.
    f.scratch.bytes[0x7f00+phase*2]=1;phase=(phase+1)&63;
    const auto before=f.scratch.bytes;
    const auto reveal_old=f.actors.actor(reveal).appearance.image();
    const auto erase_old=f.actors.actor(erase).appearance.image();
    f.call(WorldSpriteFadeTask::Dissolve);
    check(f.random==expected_random&&f.word(0x7f00+phase*2)==1,
          "Multiple dissolve records consumed separate RNG or ignored shared marks");
    for(unsigned record=0;record<2;++record) {
        const auto src=f.word(0x7c0a+record*20),dst=f.word(0x7c0c+record*20);
        auto expected=before;
        for(unsigned tile=0;tile<6;++tile) for(unsigned plane=0;plane<4;++plane) {
            const auto offset=tile*32+(phase/8)*2+(plane/2)*16+(plane&1);
            const auto bit=std::uint8_t(1<<(7-(phase&7)));
            expected[dst+offset]=(before[dst+offset]&~bit)|(before[src+offset]&bit);
        }
        check(std::equal(expected.begin()+dst,expected.begin()+dst+192,
                         f.scratch.bytes.begin()+dst),
              "Simultaneous dissolve records did not share one selected phase");
    }
    check(f.actors.actor(reveal).appearance.image()!=reveal_old&&
          f.actors.actor(erase).appearance.image()!=erase_old,
          "Shared dissolve failed to publish both actual generation images");
}
void blink_and_mixed(eb::GameVersion version) {
    Fixture f(version);const auto blink=f.actor(4),rows=f.actor(5),columns=f.actor(6);
    f.fade.apply(4,2);f.fade.apply(5,3);f.fade.apply(6,4);
    const auto owner=*f.fade.controller();
    check(f.actors.actor(owner).action().variables[4]==3&&f.fade.count()==3,"Multiple fade classes lost shared controller");
    f.call(WorldSpriteFadeTask::HideBlinkSprites);
    check(f.actors.actor(blink).action().animation==0xffff&&f.actors.actor(rows).action().animation==0,
          "Blink helper hid a different fade class");
    f.call(WorldSpriteFadeTask::Columns);
    const auto column_image=f.actors.actor(columns).appearance.image();
    f.call(WorldSpriteFadeTask::RefreshSprites);
    check(f.actors.actor(blink).action().animation==0&&
          f.actors.actor(columns).appearance.image()!=column_image,
          "Blink refresh did not restore all actual source records");
    rejects([&]{f.fade.step(WorldSpriteFadeTask::Rows,blink);});
}
} // namespace
int main() {
    try {
        for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {
            unchanged_modes(version);producer(version);pixel_modes(version);
            live_buffers_and_generations(version);blink_and_mixed(version);shared_dissolve(version);
        }
        std::cout<<"Native world sprite fade tests: "<<checks<<" checks passed\n";
    } catch(const std::exception &e) { std::cerr<<e.what()<<'\n';return 1; }
}
