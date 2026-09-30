// Independent complete OPEN_MENU_BUTTON_CHECKTALK / C10004 caller reference.
// Original actor/world-screen/audio and raw frame delivery are explicit service
// boundaries. Original WINDOW_TICK, dialogue, cleanup, meters and DMA execute.
// Prepared fade status changes prove late polling, not sprite-fade execution.
#include "native_interaction_reference_fixture.hpp"
#include "eb/native/story/interaction_calls.hpp"
#include "eb/native/world_palettes.hpp"

namespace {
using namespace interaction_reference;
namespace story=eb::native::story;
struct CallCase {
    std::string name;bool quick=true,instant=true,preopen{},full{},meters{};
    unsigned npc=10,pending_fade_reads{},intangibility=7;std::uint32_t queued{};
};
struct CallerCounts {std::uint64_t cases{},quick{},queued{},frames{},sounds{},source_actors{},source_screens{},source_ticks{},source_polls{},native_polls{},input_polls{},snapshots{},pixels{},retained_frames{},dialogue_entries{},hide_calls{},close_calls{},ppu_pixels{},ink_pixels{},blink_requests{},blink_noops{},sprite_words{};} callers;

// Execute a real original helper while preserving the suspended caller's
// registers, stack and direct-page frame, as the explicit frame service would.
template<class Function>void with_saved_cpu(Source& source,Function body) {
    auto& c=source.cpu;const auto pc=c.program_counter;const auto a=c.accumulator,x=c.x_index,y=c.y_index,s=c.stack_pointer,d=c.direct_page;
    const auto p=c.status_register,b=c.data_bank;
    body();require(c.stack_pointer==s,"Frame service unbalanced original caller stack");
    c.program_counter=pc;c.accumulator=a;c.x_index=x;c.y_index=y;c.stack_pointer=s;c.direct_page=d;c.status_register=p;c.data_bank=b;
}
void deliver(Source& source,std::array<std::uint16_t,2> raw) {
    with_saved_cpu(source,[&]{
        auto& c=source.cpu;c.program_counter=0xc0823c;c.direct_page=0;c.data_bank=0;
        c.status_register=eb::MainCpu65816::InterruptDisable|eb::MainCpu65816::Index8Bit;
        for(unsigned n=0;n<10000&&c.program_counter!=0xc08278;++n){c.step_instruction();++counts.instructions;}
        require(c.program_counter==0xc08278&&source.bus->work_ram[0]==source.bus->work_ram[1],"Original frame DMA queue did not drain");
    });
    source.put(0x99,0);source.byte(2,source.bus->work_ram[2]+1);
    with_saved_cpu(source,[&]{
        auto& c=source.cpu;const auto stack=c.stack_pointer;c.direct_page=0;c.data_bank=0;
        c.status_register=eb::MainCpu65816::InterruptDisable;c.program_counter=0xc0ff60;c.execute_instruction<0x20>(0x8496,3);
        unsigned seams{};
        for(unsigned n=0;n<1000&&(c.program_counter!=0xc0ff63||c.stack_pointer!=stack);++n){
            if(c.program_counter==0xc0841b){require(seams++==0,"Original raw input order differs");source.put(0x77,raw[0]);source.put(0x79,raw[1]);c.execute_instruction<0x60>(0,1);}
            else if(c.program_counter==0xc08456){require(seams++==1,"Original demo input order differs");c.execute_instruction<0x60>(0,1);}
            else{c.step_instruction();++counts.instructions;}
        }
        require(c.program_counter==0xc0ff63&&c.stack_pointer==stack&&seams==2,"Original C08496 failed to finish");++callers.input_polls;
    });
}
struct CallPair {
    Resources resources;Pair pair;party::MeterWindows meters;story::RandomState random{0x1234,0xfedc};story::TickState clock;story::InputState input;
    native::WorldPalettes palette_resources;native::AreaPalettes palettes;std::unique_ptr<story::Scene> scene;std::unique_ptr<story::InteractionCalls> calls;
    CallCase test;unsigned original_polls{},native_polls{},frame_count{},source_tick_count{},source_create_count{},source_check_count{};
    std::optional<std::uint32_t> selected;std::vector<std::string> stages;
    std::shared_ptr<const dialogue::TextFrame> held;std::vector<std::uint8_t> held_pixels;bool captured_ink{};std::array<std::uint16_t,6> prepared_sprite_words{};
    static InteractionCase setup(const eb::GameAssets& assets,const CallCase& c) {
        InteractionCase result;result.name=c.name;result.combination=assets.image[0x17a800]>>3;result.preopen=c.preopen;result.full_windows=c.full;result.intangibility=c.intangibility;
        if(c.npc){ActorInput a;a.npc=c.npc;a.sprite=image_word(assets.image,(actor_layout(assets.version).npc_table&0x3fffff)+c.npc*17+1);result.actors={a};}
        return result;
    }
    CallPair(const eb::GameAssets& assets,const CallCase& c):resources(assets),pair(resources,setup(assets,c)),
        meters(pair.windows,pair.party,party::MeterWindowResources::import(assets.image,assets.version)),
        palette_resources(assets.image,native::world_palette_layout(assets.version)),palettes(palette_resources.resolve(palette_resources.area_at(0,0),std::vector<std::uint8_t>(8192))),test(c) {
        auto& s=pair.original.source;const bool us=s.version==eb::GameVersion::US;
        // Seed actual party values rather than disabling HP/PP logic. Meters
        // may be hidden by real C200D9 state, or shown by their original helper.
        for(unsigned i=0;i<6;++i){auto& member=pair.party.character(i+1);member.maximum_hp=200;member.maximum_pp=100;member.current_hp=member.target_hp=100+i;member.current_pp=member.target_pp=50+i;}
        clock.disabled_transitions=1;clock.hp_speed=0x8000;s.put(us?0x9627:0x991f,0x8000);s.put(us?0x9629:0x9921,0);
        s.put(0x24,random.primary_word);s.put(0x26,random.secondary_word);s.put(2,0);
        const unsigned delta=us?0:10;std::vector<unsigned> slots;
        for(unsigned i=0;i<pair.ids.size();++i)if(pair.ids[i])slots.push_back(i);
        s.put(0xa50-delta,slots.front()*2);
        for(unsigned i=0;i<slots.size();++i){s.put(0xa9e - delta+slots[i]*2,i+1==slots.size()?0xffff:slots[i+1]*2);s.put(0x10b6-delta+slots[i]*2,0x00c0);}
        if(test.meters){s.call(us?0xc10a04:0xc10e5a,false);auto operation=meters.begin_show();while(operation->advance()==dialogue::OutputProgress::Suspended)operation->respond();require(operation->complete(),"Initial meter show failed");}
        pair.output.policy().instant=test.instant;s.byte(s.p.instant,test.instant);
        // Distinguish the sprite blink helper from meter-selection clearing.
        // These six source storage records are not fabricated active actors.
        meters.state().selected_phase=0;s.put(s.p.selected,0);
        for(unsigned i=0;i<prepared_sprite_words.size();++i){prepared_sprite_words[i]=std::uint16_t(0xa530+i);s.put((us?0x116a:0x1160)+(24+i)*2,prepared_sprite_words[i]);}
        pair.world.scene().camera_x=0;pair.world.scene().camera_y=0;
        scene=std::make_unique<story::Scene>(pair.windows,pair.party,random,meters,clock,input,pair.world,pair.area,palettes);
        calls=std::make_unique<story::InteractionCalls>(resources.program,pair.talk,pair.prompts,*scene,[&]{++native_polls;++callers.native_polls;return native_polls<=test.pending_fade_reads;});
        s.real_ticks=true;s.put(us?0xb4a8:0xb67c,test.pending_fade_reads?24:0xffff);
        const auto old_observer=s.observe;
        s.observe=[&,us,old_observer](unsigned pc){
            if(old_observer)old_observer(pc);
            if(pc==s.p.tick){++source_tick_count;++callers.source_ticks;stages.emplace_back("tick");}
            if(pc==s.p.create)++source_create_count;
            if(pc==(us?0xc1323bu:0xc13918u))++source_check_count;
            if(pc==s.p.display){if(!selected)selected=s.get32(s.cpu.direct_page+14);++callers.dialogue_entries;stages.emplace_back("display");}
            if(pc==(us?0xc10a1du:0xc10e72u)){++callers.hide_calls;stages.emplace_back("hide");}
            if(pc==(us?0xc1008eu:0xc102afu)){++callers.close_calls;stages.emplace_back("close");}
            const unsigned poll=test.quick?(us?0xc13c93:0xc140fe):(us?0xc10028:0xc10024);
            if(pc==poll){require(!stages.empty()&&stages.back()=="tick","Original fade sampled without preceding complete tick");++original_polls;++callers.source_polls;s.put(us?0xb4a8:0xb67c,original_polls<=test.pending_fade_reads?24:0xffff);stages.emplace_back("fade-read");}
        };
        s.external=[&,us](unsigned pc){
            // Explicit source-only unported world boundaries. The native Scene
            // executes its actual paused ActorWorld and scenery renderer.
            if(pc==(us?0xc09466u:0xc09445u)){++callers.source_actors;s.cpu.execute_instruction<0x6b>(0,1);return true;}
            if(pc==(us?0xc08b26u:0xc08b17u)){++callers.source_screens;s.cpu.execute_instruction<0x6b>(0,1);return true;}
            return false;
        };
        held=pair.windows.frame();held_pixels=held->pixels;
    }
    void compare() {
        auto& s=pair.original.source;const bool us=s.version==eb::GameVersion::US;const auto& m=meters.state();
        pair.compare_windows();
        require(random.primary_word==s.get(0x24)&&random.secondary_word==s.get(0x26),pair.context+" caller RNG/tick count differs");
        require(clock.frame_counter==s.bus->work_ram[2],pair.context+" frame phase differs");
        require(pair.output.policy().instant==bool(s.bus->work_ram[s.p.instant]),pair.context+" caller instant policy differs");
        require(m.render==s.bus->work_ram[s.p.render]&&m.drawn_mask==s.get(s.p.mask)&&m.selected_phase==s.get(s.p.selected)&&m.area_dirty==s.get(s.p.dirty)&&m.upload==s.bus->work_ram[s.p.upload],pair.context+" caller meter state differs");
        for(unsigned i=0;i<6;++i){const auto base=s.p.characters+i*s.p.stride+(us?67:66);const auto& v=pair.party.character(i+1);const std::array values{v.hp_fraction,v.current_hp,v.target_hp,v.pp_fraction,v.current_pp,v.target_pp};for(unsigned n=0;n<values.size();++n)require(values[n]==s.get(base+n*2),pair.context+" caller party meters differ");}
        for(unsigned i=0;i<2;++i)require(input.state[i]==s.get(0x65+i*2)&&input.held[i]==s.get(0x69+i*2)&&input.pressed[i]==s.get(0x6d+i*2)&&input.repeat_timer[i]==s.get(0x71+i*2),pair.context+" original frame input differs");
        require(input.player_activity==s.get(us?0xa34:0xa2a),pair.context+" input activity differs");
        for(unsigned i=0;i<pair.ids.size();++i)if(pair.ids[i]){const auto& actor=pair.world.actor(*pair.ids[i]);const auto flags=s.get((us?0x10b6:0x10ac)+i*2);require(actor.scripts_and_physics_enabled==!(flags&0x4000)&&actor.tick_callback_enabled==!(flags&0x8000),pair.context+" paused live actor flags differ");}
        require(held->pixels==held_pixels,pair.context+" retained published frame mutated");++callers.retained_frames;++callers.snapshots;
    }
    void pixels() {
        auto& s=pair.original.source;const auto frame=pair.windows.frame();require(frame->width==256&&frame->height==224,"Caller frame dimensions changed");
        for(unsigned y=0;y<224;++y)for(unsigned x=0;x<256;++x){const auto at=0xf800+((y/8)*32+x/8)*2,word=s.bus->video_ram[at]|unsigned(s.bus->video_ram[at+1])<<8,color=raster(s,word,x%8,y%8),index=y*256+x;
            require(frame->pixels[index]==color&&frame->priority[index]==(color?bool(word&0x2000):false),pair.context+" caller published pixel differs at "+std::to_string(index));++callers.pixels;callers.ink_pixels+=color!=0;}
        if(!captured_ink&&std::any_of(frame->pixels.begin(),frame->pixels.end(),[](auto pixel){return pixel!=0;})){held=frame;held_pixels=frame->pixels;captured_ink=true;}
    }
    void ppu() {
        auto& s=pair.original.source;auto display=std::make_unique<eb::SnesBus>(std::span(eb::rom_data(s.version),eb::rom_size(s.version)),s.version);
        display->video_ram=s.bus->video_ram;std::copy_n(s.bus->work_ram.begin()+0x200,64,display->palette_ram.begin());
        display->write_byte(0x2100,15);display->write_byte(0x2105,1);display->write_byte(0x2109,0x7c);display->write_byte(0x210c,6);display->write_byte(0x212c,4);display->write_byte(0x2112,255);display->write_byte(0x2112,255);
        while(display->completed_frames<2)display->advance_cpu_cycles(1000);
        const auto frame=pair.windows.frame();const auto expand=[](unsigned c){return(c<<3)|(c>>2);};
        for(unsigned i=0;i<256*224;++i){const unsigned color=pair.windows.palette()[frame->pixels[i]],rgba=0xff000000u|(expand(color&31)<<16)|(expand((color>>5)&31)<<8)|expand((color>>10)&31);
            require(display->native_framebuffer[i]==rgba,pair.context+" current original software PPU differs");++callers.ppu_pixels;}
    }
    void sprite_blink(bool requested) {
        auto& s=pair.original.source;const unsigned base=s.version==eb::GameVersion::US?0x116a:0x1160;
        require(s.pending==Effect::Blink,"Sprite service lost original boundary");
        require(requested==bool(s.get(pair.original.a.intangible)),"Sprite service ignored original intangibility guard");
        const auto selected_before=meters.state().selected_phase;const auto source_selected=s.get(s.p.selected);
        const auto before=s.get(base+23*2),after=s.get(base+30*2),frames=frame_count;
        require(selected_before==source_selected,"Sprite service already changed meter selection");
        if(requested)for(auto& word:prepared_sprite_words)word&=0x7fff;
        // The actual original helper runs; the native unresolved sprite owner
        // is an explicit, prepared callback, not an ActorWorld blink port.
        s.respond();++counts.effects;
        for(unsigned i=0;i<prepared_sprite_words.size();++i){require(s.get(base+(24+i)*2)==prepared_sprite_words[i],"Original sprite helper changed unexpected flag bits slot="+std::to_string(24+i)+" actual="+std::to_string(s.get(base+(24+i)*2))+" expected="+std::to_string(prepared_sprite_words[i]));++callers.sprite_words;}
        require(s.get(base+23*2)==before&&s.get(base+30*2)==after,"Sprite helper changed adjacent source records");
        require(s.get(s.p.selected)==source_selected&&meters.state().selected_phase==selected_before&&frame_count==frames,"Sprite helper changed meter selection or inserted frame");
        callers.blink_requests+=requested;callers.blink_noops+=!requested;
    }
    void run() {
        auto& s=pair.original.source;const bool us=s.version==eb::GameVersion::US;
        if(!test.quick)s.put32(s.expected_dp+14,test.queued);
        s.begin(test.quick?(us?0xc13c32:0xc1409e):(us?0xc10004:0xc10000),true);
        auto operation=test.quick?calls->begin_check_talk():calls->begin_queued_text(key(test.queued));
        for(unsigned n=0;n<1000000;++n){
            const auto progress=operation->advance(n&1?1:4096);if(progress==dialogue::Progress::BudgetExhausted)continue;
            auto expected=s.advance();
            // The original helper is a genuine no-op only at zero
            // intangibility. Otherwise a distinct sprite service must suspend.
            while(expected&&*expected==Effect::Blink&&!s.get(pair.original.a.intangible)){sprite_blink(false);expected=s.advance();}
            if(progress==dialogue::Progress::Finished){require(!expected&&!s.busy,pair.context+" native caller returned before original");compare();
                require(selected&&reference_value(operation->selected_reference())==*selected,pair.context+" caller selected reference differs");
                require(original_polls==native_polls&&native_polls==test.pending_fade_reads+1,pair.context+" mandatory/live fade polling differs");
                if(test.quick){require(source_create_count>=1&&pair.windows.draw_order().empty(),pair.context+" CheckTalk did not close windows");if(!test.npc)require(source_check_count==1&&source_create_count==2,pair.context+" no-target CheckTalk skipped its second create/search");}
                else require(source_create_count==0&&source_check_count==0,pair.context+" queued caller unexpectedly used interaction setup");
                if(test.quick){pair.compare();}pixels();ppu();++callers.cases;callers.quick+=test.quick;callers.queued+=!test.quick;return;
            }
            require(expected&&operation->service(),pair.context+" caller service count differs");
            if(*operation->service()==story::InteractionCallService::Sound){require(*expected==Effect::Sound&&operation->sound()==s.cpu.accumulator&&operation->sound()==1,pair.context+" caller cursor sound order differs");compare();s.respond();operation->respond_sound();++callers.sounds;continue;}
            auto& child=operation->scene_operation();require(child.service().has_value(),"Missing caller Scene boundary");
            if(*child.service()==story::SceneService::PartySpriteBlink){
                require(*expected==Effect::Blink,pair.context+" sprite service order differs");compare();sprite_blink(true);child.respond_party_sprite_blink();compare();
            }else if(*child.service()==story::SceneService::Frame){require(*expected==Effect::Frame,pair.context+" Scene frame differs from original service");compare();
                const std::array<std::uint16_t,2> raw{std::uint16_t(frame_count%4==0?0x80:0),0};deliver(s,raw);child.complete_frame(raw);s.respond();++frame_count;++callers.frames;pixels();
            }else if(*child.service()==story::SceneService::Dialogue){require(*expected==Effect::Sound,pair.context+" caller reached unsupported dialogue service");
                const auto& event=child.dialogue_event();require(event&&std::holds_alternative<dialogue::TextEffect>(*event)&&std::get<dialogue::TextEffect>(*event).kind==dialogue::TextEffectKind::TextSound,pair.context+" caller needs a real unimplemented dialogue owner");compare();s.respond();child.respond_dialogue({0,input.pressed[0],input.held[0]});++callers.sounds;
            }else throw std::runtime_error(pair.context+" native caller needs an unported actor/camera/battle service");
        }
        throw std::runtime_error(pair.context+" caller did not finish");
    }
};
void run(const eb::GameAssets& assets) {
    const bool us=assets.version==eb::GameVersion::US;std::vector<CallCase> tests;
    for(unsigned npc:{10u,163u,0u})for(bool instant:{false,true}){CallCase c;c.name="L npc="+std::to_string(npc)+" instant="+std::to_string(instant);c.npc=npc;c.instant=instant;c.intangibility=instant?0:7;tests.push_back(c);}
    {CallCase c;c.name="L full windows and visible meters";c.npc=0;c.full=true;c.meters=true;tests.push_back(c);}
    {CallCase c;c.name="L prepared fade owner pending twice";c.npc=0;c.pending_fade_reads=2;tests.push_back(c);}
    for(bool instant:{false,true})for(bool preopen:{false,true}){CallCase c;c.name="queued null instant="+std::to_string(instant)+" window="+std::to_string(preopen);c.quick=false;c.npc=0;c.instant=instant;c.preopen=preopen;c.pending_fade_reads=2;tests.push_back(c);}
    for(unsigned which=0;which<2;++which){CallCase c;c.name="queued imported text="+std::to_string(which);c.quick=false;c.preopen=true;c.npc=0;c.instant=which==0;c.meters=true;c.queued=which==0?(us?0xc7c59e:0xc925b8):(us?0xc74e8f:0xc58288);tests.push_back(c);}
    for(const auto& c:tests)try{CallPair pair(assets,c);pair.run();}catch(const std::exception& e){throw std::runtime_error(c.name+": "+e.what());}
    std::cout<<(us?"US":"JP")<<" complete interaction callers="<<tests.size()<<'\n';
}
}
int main(int argc,char**argv) {
    if(argc<2){std::cout<<"SKIP: local US/JP packs required for complete interaction callers\n";return 77;}
    try{for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));
        require(callers.ink_pixels>0,"Caller published-image proof never contained visible text/window ink");
        std::cout<<"PASS original/native interaction callers: "<<callers.cases<<" calls ("<<callers.quick<<" CheckTalk, "<<callers.queued<<" C10004), "<<callers.frames<<" frames, "<<callers.sounds<<" ordered audio boundaries, "<<callers.source_polls<<" original/"<<callers.native_polls<<" native prepared fade reads.\n";
        std::cout<<"Original: "<<counts.instructions<<" instructions including setup/cache/glyph/tick/input, "<<callers.source_ticks<<" complete WINDOW_TICK entries, "<<callers.source_actors<<" actor service boundaries, "<<callers.source_screens<<" world-screen boundaries, "<<callers.input_polls<<" full C08496 calls, "<<callers.dialogue_entries<<" DISPLAY_TEXT entries, "<<callers.hide_calls<<" hide and "<<callers.close_calls<<" close-all calls, "<<counts.caller_stack_checks<<" preserved caller-stack checks.\n";
        require(callers.blink_requests&&callers.blink_noops,"Both sprite service guard paths must execute");
        std::cout<<"Sprite boundary: "<<callers.blink_requests<<" explicit prepared callbacks, "<<callers.blink_noops<<" original zero-intangibility no-ops, "<<callers.sprite_words<<" original party flag-word checks; meter selection preserved.\n";
        std::cout<<"Native: "<<callers.snapshots<<" state/immutable-frame snapshots, "<<callers.pixels<<" independently decoded original published window pixels ("<<callers.ink_pixels<<" ink), "<<callers.ppu_pixels<<" current-VRAM original software-PPU pixels.\n";
        std::cout<<"Scope: real original caller/dialogue/window/meter/RNG/input routines and IRQ DMA queue slice; native actual Scene with explicitly paused ActorWorld. Original world actors/screen, sound, hardware/demo input and frame delivery are named seams. Party sprite blink is an explicit prepared external callback. JP font DMA readiness clears A031 at C439E2/C43BE8. Prepared fade-read callbacks test late sampling, not the fade engine. No natural spawns, full-world image parity, PCM, full NMI or GPU claim.\n";
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
