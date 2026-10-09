// Complete original OAM_CLEAR/C08CD5/UPDATE_SCREEN byte emission and pure
// hardware object sampling. Original instructions exist only in this test.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/entities/graphics/objects.hpp"
#include "eb/native/entities/graphics/object_display.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/story/input.hpp"
#include "eb/native/world_overlay_playback.hpp"
#include "eb/native/sprite_resources.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_original_object_instructions.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
namespace {
struct Layout {
    unsigned map, map_builder, upload, graphics_low, graphics_high, graphics_bank, direction, vram,
        byte_width, tile_height, pose, draw, surface;
};
constexpr Layout us{0x467e, 0xc01d38, 0xc0a4c4, 0x29ca, 0x2a06,   0x2a42, 0x2af6,
                    0x298e, 0x2a7e,   0x2aba,   0x2892, 0xc08cd5, 0x2baa};
constexpr Layout jp{0x4a04, 0xc01d4e, 0xc0a4a3, 0x2dc8, 0x2e04,   0x2e40, 0x2ef4,
                    0x2d8c, 0x2e7c,   0x2eb8,   0x2c90, 0xc08cc6, 0x2fa8};
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    Layout layout;
    eb::native_reference::OriginalObjectInstructions::Reaches original_object_instruction_reaches{};
    Oracle(const eb::GameAssets &a)
        : bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus),
          layout(a.version == eb::GameVersion::JP ? jp : us) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = 0;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        bus->work_ram[0x0d] = 0x80;
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value;
        bus->work_ram[at + 1] = value >> 8;
    }
    void call(unsigned address, unsigned a, unsigned x, unsigned y, bool far = true) {
        const unsigned trampoline = (address & 0xff0000) | 0xff00;
        cpu.program_counter = trampoline;
        cpu.accumulator = a;
        cpu.x_index = x;
        cpu.y_index = y;
        if (far)
            cpu.execute_instruction<0x22>(address, 4);
        else
            cpu.execute_instruction<0x20>(address & 0xffff, 3);
        unsigned steps = 0;
        std::array<unsigned,32> trace{};
        while (cpu.program_counter != trampoline + (far ? 4 : 3) || cpu.stack_pointer != 0x1fff) {
            if (++steps > 1000000)
                throw std::runtime_error("Reference routine stuck: " + cpu.describe_registers());
            trace[steps%trace.size()]=cpu.program_counter;
            try {eb::native_reference::OriginalObjectInstructions::step(cpu,*bus,layout.draw==jp.draw,original_object_instruction_reaches);}catch(const std::exception &e){std::cerr<<"SOURCE last PCs:";for(unsigned i=0;i<trace.size();++i)std::cerr<<" "<<std::hex<<trace[(steps+1+i)%trace.size()];std::cerr<<std::dec<<"\n";throw std::runtime_error(std::string(e.what())+" helper="+std::to_string(address));}
        }
    }
};
}
namespace {
using namespace eb::native::entities::graphics;
void require(bool b,const std::string &s){if(!b)throw std::runtime_error(s);}
void run_emitter(const eb::GameAssets &assets){
  Oracle source(assets);source.cpu.direct_page=0;source.bus->write_byte(0x4200,0);
  ObjectFrame frame;ObjectEmitter emitter(frame);unsigned cases{};
  const bool jp=assets.version==eb::GameVersion::JP;
  const unsigned queue=jp?0x2800:0x2400;
  auto seed=[&]{for(unsigned i=0;i<544;++i){frame.bytes[i]=std::uint8_t(i*73+91);source.bus->work_ram[0x500+i]=frame.bytes[i];}
    source.bus->work_ram[0x720]=0xa9;source.bus->work_ram[0x2e]=1;
    emitter.clear();source.call(jp?0xc088a3:0xc088b1,0,0,0);};
  auto compare=[&]{for(unsigned i=0;i<544;++i)require(frame.bytes[i]==source.bus->work_ram[0x500+i],"OAM byte differs case="+std::to_string(cases)+" byte="+std::to_string(i)+" native="+std::to_string(frame.bytes[i])+" source="+std::to_string(source.bus->work_ram[0x500+i]));
    require(source.bus->work_ram[3]+unsigned(source.bus->work_ram[4])*256==0x500+emitter.count()*4,"OAM cursor differs");
    require(source.bus->work_ram[0xa]==emitter.high_buffer(),"OAM high packing buffer differs");};
  auto append=[&](std::span<const std::uint8_t> bytes,unsigned x,unsigned y){std::copy(bytes.begin(),bytes.end(),source.bus->work_ram.begin()+0x6000);
    source.put(0xb,0x7e);emitter.append({bytes,0x6000,0x6000},std::uint16_t(x),std::uint16_t(y));source.call(jp?0xc08cc6:0xc08cd5,0x6000,x,y);compare();};
  auto finish=[&]{emitter.finish();source.call(jp?0xc08b17:0xc08b26,0,0,0);compare();
    if(emitter.count()==128)require(source.bus->work_ram[0x720]==emitter.trailing_high_byte(),"Full-capacity adjacent high flush differs");};
  for(unsigned x:{0xfefeu,0xfeffu,0xff00u,0xff01u,0xff7fu,0xffffu,0u,1u,127u,255u,256u,257u,320u,0x7fffu,0x8000u})
    for(unsigned y:{0xffdeu,0xffdfu,0xffe0u,0xffe1u,0xffffu,0u,1u,223u,224u,225u,255u,256u,0x7fffu,0x8000u})
      for(unsigned xo:{0u,1u,127u,128u,129u,255u})for(unsigned yo:{0u,1u,127u,129u,255u})for(unsigned size:{0u,1u}){
        seed();const std::array<std::uint8_t,5> map{std::uint8_t(yo),0x93,0xed,std::uint8_t(xo),std::uint8_t(0x80|size)};
        append(map,x,y);finish();++cases;}
  for(unsigned count:{1u,2u,3u,4u,5u,7u,8u,31u,32u,33u,127u,128u,129u}){
    seed();std::vector<std::uint8_t> map(count*5);for(unsigned i=0;i<count;++i){map[i*5]=0;map[i*5+1]=std::uint8_t(i);map[i*5+2]=std::uint8_t(i*31);map[i*5+3]=std::uint8_t(i&1?255:0);map[i*5+4]=std::uint8_t((i&1)|((i+1==count)?0x80:0));}
    append(map,0,20);finish();++cases;
  }
  seed();std::array<std::uint8_t,45> linked{};linked[0]=0x80;linked[1]=0x20;linked[2]=0x60;linked[32]=0;linked[33]=0xab;linked[34]=0xfe;linked[35]=0;linked[36]=0x80;
  append(linked,0,20);finish();++cases;
  require(source.bus->work_ram[queue+0x104]==0,"Emitter proof fabricated priority queue input");
  std::cout<<"PASS "<<assets.title<<" C08CD5 clipping/link/capacity/full544byte cases="<<cases<<'\n';
}
}


namespace {
std::uint32_t rgb(unsigned c){const unsigned r=c&31,g=(c>>5)&31,b=(c>>10)&31;return 0xff000000u|((r<<3|r>>2)<<16)|((g<<3|g>>2)<<8)|(b<<3|b>>2);}
void run_original_comparisons(const eb::GameAssets &assets){
  Oracle source(assets);const bool jp=assets.version==eb::GameVersion::JP;
  constexpr std::array<unsigned,6> us{0xc6f3,0xc6f8,0xc6fd,0xc702,0xdb49,0xdb4e};
  constexpr std::array<unsigned,6> japanese{0xc6d5,0xc6da,0xc6df,0xc6e4,0xdb11,0xdb16};
  unsigned cases{};
  for(unsigned bank:{0xc00000u,0x800000u})for(unsigned site=0;site<us.size();++site)for(bool byte:{false,true}){
    source.cpu.program_counter=bank|(jp?japanese[site]:us[site]);source.cpu.emulation_mode=false;
    source.cpu.status_register=std::uint8_t(4|(byte?0x30:0));source.cpu.accumulator=0x1234;source.cpu.x_index=0x1234;
    const unsigned pc=source.cpu.program_counter,operand=source.bus->read_byte(pc+1)|unsigned(source.bus->read_byte(pc+2))<<8;
    const unsigned mask=byte?255:65535,expected=((0x1234&mask)-(operand&mask))&mask;
    const auto instructions=source.cpu.instruction_count,clocks=source.bus->master_clocks();
    eb::native_reference::OriginalObjectInstructions::step(source.cpu,*source.bus,jp,source.original_object_instruction_reaches);
    require(source.cpu.program_counter==pc+(byte?2:3)&&source.cpu.instruction_count==instructions+1&&source.bus->master_clocks()>clocks,"Original literal guard skipped actual instruction work");
    require(bool(source.cpu.status_register&1)==((0x1234&mask)>=(operand&mask))&&bool(source.cpu.status_register&2)==(expected==0)&&bool(source.cpu.status_register&128)==bool(expected&(byte?128:32768)),"Original CMP/CPX width or flags differ");++cases;
  }
  // Interrupt arbitration must happen before deciding whether to execute a
  // corrected CMP. The pending NMI consumes a source boundary, not a compare.
  source.cpu.program_counter=jp?0xc0db11:0xc0db49;source.cpu.status_register=4;source.cpu.stack_pointer=0x1fff;
  source.bus->write_byte(0x4200,0x80);source.bus->advance_master_clocks_with_refresh(400000);
  const auto before=source.original_object_instruction_reaches;const auto instructions=source.cpu.instruction_count;
  eb::native_reference::OriginalObjectInstructions::step(source.cpu,*source.bus,jp,source.original_object_instruction_reaches);
  require(source.original_object_instruction_reaches==before&&source.cpu.instruction_count==instructions&&source.cpu.stack_pointer<0x1fff,"Original literal guard bypassed pending NMI preparation");
  std::cout<<"PASS "<<assets.title<<" original ROM comparison width/bank-alias cases="<<cases<<" pending-NMI=1\n";
}
void run_sampler(const eb::GameAssets &assets){
  Oracle source(assets);unsigned cases{};
  ObjectFrame objects;
  std::array<std::uint16_t,256> palette;
  for(unsigned i=0;i<65536;++i)source.bus->video_ram[i]=std::uint8_t(i*73+91);
  for(unsigned i=0;i<256;++i){palette[i]=std::uint16_t((i*799+3)&0x7fff);source.bus->palette_ram[i*2]=std::uint8_t(palette[i]);source.bus->palette_ram[i*2+1]=std::uint8_t(palette[i]>>8);}
  for(unsigned size=0;size<8;++size)for(unsigned select:{0u,1u,9u,31u})for(unsigned mode:{0u,1u,7u})for(unsigned pattern=0;pattern<4;++pattern){
    const auto obsel=std::uint8_t(size*32+select);source.bus->write_byte(0x2101,obsel);source.bus->write_byte(0x2105,std::uint8_t(mode));
    objects.bytes.fill(0);for(unsigned i=0;i<128;++i){
      objects.bytes[i*4]=std::uint8_t(pattern==0?i*73:pattern==1?i%5*8:pattern==2?255-i%3:i*131);
      objects.bytes[i*4+1]=std::uint8_t(pattern==0?i*19:pattern==1?112:pattern==2?255:i<6?224:32);
      objects.bytes[i*4+2]=std::uint8_t(i*47+13);objects.bytes[i*4+3]=std::uint8_t(i*71+pattern*17);
      objects.bytes[512+i/4]|=std::uint8_t(((i+pattern)&3)<<((i&3)*2));objects.identities[i]=i+1;
    }
    source.bus->object_attributes=objects.bytes;
    const auto clocks=source.bus->master_clocks(),instructions=source.cpu.instruction_count;
    const auto frame=sample_objects(objects,source.bus->video_ram,palette,obsel,cases,13,std::uint8_t(mode));
    const auto actual=eb::rasterize_direct_scene({frame,{}});std::vector<std::uint32_t> expected(256*224,0xff000000u);
    const auto view=source.bus->scene_read_view();for(unsigned y=0;y<224;++y){std::array<eb::PpuPixel,256> pixels{};view.sample_sprite_pixels(y,pixels,0);for(unsigned x=0;x<256;++x)if(pixels[x].priority>=0)expected[y*256+x]=rgb(pixels[x].color);}
    for(unsigned i=0;i<expected.size();++i)require(expected[i]==actual[i],"Pure object sample differs case="+std::to_string(cases)+" pixel="+std::to_string(i)+" native="+std::to_string(actual[i])+" source="+std::to_string(expected[i]));
    require(clocks==source.bus->master_clocks()&&instructions==source.cpu.instruction_count,"Pure object capture advanced clock or original CPU");
    const auto old=frame->atlas;source.bus->video_ram[0]^=255;(void)sample_objects(objects,source.bus->video_ram,palette,obsel,cases+1,13,std::uint8_t(mode));require(old==frame->atlas,"Later VRAM sampling mutated older published objects");source.bus->video_ram[0]^=255;++cases;
  }
  std::cout<<"PASS "<<assets.title<<" pure currentVRAM/retainedOAM/OBSEL/flip/wrap/32OBJ34tile cases="<<cases<<'\n';
}
}

namespace {
void run_object_motion(const eb::GameAssets &assets){
  using namespace eb;std::array<std::uint8_t,65536> video{};std::array<std::uint16_t,256> palette{};
  for(unsigned i=0;i<video.size();++i)video[i]=std::uint8_t(i*29+3);
  for(unsigned i=0;i<palette.size();++i)palette[i]=std::uint16_t(i*79&0x7fff);
  const std::array<std::uint8_t,15> body{0,1,0x30,248,0,0,2,0x30,0,0,0,3,0x30,8,0x80};
  const std::array<std::uint8_t,5> overlay{0,4,0x30,0,0x80};
  const auto frame=[&](unsigned tick,std::uint16_t x,std::uint16_t y){
    ObjectFrame objects;ObjectEmitter emitter(objects);emitter.clear();
    const ObjectAnchor anchor{std::int16_t(x),std::int16_t(y),true};
    emitter.append({overlay,0,0},x,std::uint16_t(y-10),42,anchor);
    emitter.append({body,0,0},x,y,42);emitter.finish();
    for(unsigned i=0;i<4;++i)require(objects.anchors[i].owned&&objects.anchors[i].x==x&&objects.anchors[i].y==y,"Body/overlay lost their actual shared anchor");
    return sample_objects(objects,video,palette,0x00,tick,0x4f424a);
  };
  const auto previous=frame(1,64,96),current=frame(2,65,97);
  require(previous->motions.size()==2&&current->motions.size()==2,"Multipart actor created duplicate motion identities");
  require(current->motions[1].identity==42&&current->motions[1].x==65&&current->motions[1].y==97,"Selected actor motion uses a part origin");
  for(const auto &quad:current->quads)require(quad.motion==1,"Overlay/body use different motion groups");
  DirectSceneMotion movement;movement.submit(previous);movement.submit(current);
  for(unsigned phase=0;phase<=4;++phase){
    const auto &picture=movement.sample(phase/4.);const auto expected=-1+phase/4.f;
    require(picture.offsets.size()==2&&picture.offsets[1].x==expected&&picture.offsets[1].y==expected,"Multipart actor deformed during interpolation");
    auto rigid=std::make_shared<DirectSceneFrame>(*current);rigid->motions.clear();for(auto &quad:rigid->quads){quad.x+=expected;quad.y+=expected;}
    require(rasterize_direct_scene(picture,4)==rasterize_direct_scene({rigid,{}},4),"Overlay/body fractional pictures differ from one rigid source translation");
  }
  require(previous->motions[1].x==64&&previous->motions[1].y==96&&current->motions[1].x==65,"Interpolation mutated an immutable object frame");
  std::cout<<"PASS "<<assets.title<<" multipart/overlay real-anchor rigid interpolation phases=5\n";
}
void run_producer(const eb::GameAssets &assets){
  using namespace eb::native;Oracle source(assets);source.bus->write_byte(0x4200,0);const bool jp=assets.version==eb::GameVersion::JP;
  auto sprites=std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));auto scripts=import_action_scripts(assets.image,assets.version);
  ActorWorld actors(sprites,scripts,assets.version);State cells;LifecycleState records;ObjectMapState map_state;ObjectDisplayState display_state;
  battle::PsiScratch scratch;battle::PsiDisplayState video;WorldDisplayFade fade(WorldDisplayFadeState{0x80});
  Transport transport(assets.image,assets.version,cells,*sprites,video,scratch,fade);Lifecycle lifecycle(records,actors,*sprites,transport);
  ObjectMaps maps(assets.image,assets.version,map_state,*sprites);lifecycle.bind_object_maps(maps);actors.bind_raw_graphics(lifecycle);ObjectDisplay display(display_state,actors,lifecycle,maps);
  story::InputState input;input.held={0x1234,0x5678};input.pressed={0x9abc,0xdef0};input.repeat_timer={7,11};input.player_activity=23;
  actors.bind_drawing_input(input);
  story::InputState other_input;bool rejected{};
  try{actors.bind_drawing_input(other_input);}catch(const std::logic_error&){rejected=true;}
  require(rejected,"Actor drawing replaced its actual input owner");actors.clear_drawing_input(other_input);
  unsigned cases{},select_cases{},before_pose_cases{};const unsigned queue=jp?0x2800:0x2400,shift=jp?10:0;
  for(unsigned group=0;group<sprites->size();++group){
    actors.reset_scripts();lifecycle.reset_allocations();source.cpu.direct_page=0x1e00;
    source.call(jp?0xc0925e:0xc0927c,0,0,0);source.call(jp?0xc01a9c:0xc01a86,0,0,0);source.call(jp?0xc01c27:0xc01c11,0x8000,0,0);
    WorldActorSpec spec;spec.sprite=group;spec.script=35;auto creation=lifecycle.begin_create(spec,{0,1});require(creation->advance(),"Producer forced-blank create suspended");const auto id=creation->actor();creation.reset();
    source.put(0x1e0e,0);source.put(0x1e10,0);source.call(jp?0xc01e5f:0xc01e49,group,35,0);
    auto &actor=actors.actor(id);actor.scripts_and_physics_enabled=false;actor.tick_callback_enabled=false;actor.behavior.projection=ActorProjection::Unchanged;
    actor.action().animation=0;source.put(0x10f2-(jp?10:0),0);
    // Bare CREATE does not upload or select a pose. C0A0E3 nevertheless
    // draws its retained physical map as soon as animation is nonnegative.
    require(!actor.appearance.displayed(),"CREATE selected a synthetic first pose");
    input.state={};source.put(0x65,0);source.put(0x67,0);const auto initial_input=input;
    actor.behavior.projected_x=0;actor.behavior.projected_y=109;actor.action().priority=std::uint16_t(group%4);
    actor.action().position[1]=109u<<16;records.roles[0].displayed_reference=0;
    source.put(0xb16 - shift,0);source.put(0xb52-shift,109);source.put(0xbca - shift,109);
    source.put(0x103e - shift,actor.action().priority);source.put(jp?0x1ab8:0x341a,0);
    require(actors.advance_tick()==WorldTickResult::Complete&&input==initial_input,"First-map draw acquired work or input");
    source.bus->work_ram[0x2e]=1;source.cpu.direct_page=0;source.call(jp?0xc088a3:0xc088b1,0,0,0);
    source.cpu.direct_page=0x1e00;source.call(jp?0x80dad7:0x80db0f,0,0,0,false);
    const auto initial_object=display.capture_objects(1);require(bool(initial_object),"First-map draw used logical artwork");
    for(unsigned i=0;i<1036;++i)require(display_state.working[i]==source.bus->work_ram[queue+i],"Before-first-pose queue differs group="+std::to_string(group)+" byte="+std::to_string(i));
    source.cpu.direct_page=0;source.call(jp?0xc08b17:0xc08b26,0,0,0);
    for(unsigned i=0;i<544;++i)require(initial_object->bytes[i]==source.bus->work_ram[0x500+i],"Before-first-pose OAM differs group="+std::to_string(group)+" byte="+std::to_string(i));
    require(std::equal(map_state.bytes.begin(),map_state.bytes.end(),source.bus->work_ram.begin()+maps.origin()),"Before-first-pose creation map differs");
    require(!actor.appearance.displayed(),"Physical draw fabricated a logical first pose");++before_pose_cases;
    actor.appearance.select_four(0,0);
    for(unsigned controller:{0u,1u,2u})for(unsigned mirror:{0u,1u})for(unsigned surface:{0u,1u,2u,3u})for(unsigned x:{0xffbfu,0xffc0u,0u,319u,320u,383u})for(unsigned y:{0xffbfu,0xffc0u,0u,223u,255u,256u,0x7fffu}){
      input.state={std::uint16_t(controller==1?0x2000:0),std::uint16_t(controller==2?0x2000:0)};
      source.put(0x65,input.state[0]);source.put(0x67,input.state[1]);const auto before_input=input;
      actor.behavior.projected_x=int(std::int16_t(x));actor.behavior.projected_y=int(std::int16_t(y));actor.behavior.surface_flags=std::uint16_t(surface);
      actor.action().priority=std::uint16_t(cases%4);actor.action().position[1]=y<<16;records.roles[0].displayed_reference=std::uint16_t(mirror);
      source.put(0xb16 - shift,x);source.put(0xb52-shift,y);source.put(0xbca - shift,y);
      source.put(0x103e - shift,actor.action().priority);source.put((jp?0x1ab8:0x341a),mirror);source.put(jp?0x2fa8:0x2baa,surface);
      require(actors.advance_tick()==WorldTickResult::Complete,"Producer fixture acquired a script callback");
      require(input==before_input,"Drawing polled or mutated actual input");if(controller==2)++select_cases;
      const unsigned buffer=1+(cases&1);source.bus->work_ram[0x2e]=std::uint8_t(buffer);source.cpu.direct_page=0;
      source.call(jp?0xc088a3:0xc088b1,0,0,0);source.cpu.direct_page=0x1e00;source.call(jp?0x80dad7:0x80db0f,0,0,0,false);
      const auto object=display.capture_objects(std::uint8_t(buffer));require(bool(object),"Actual producer fell back to logical artwork");
      for(unsigned i=0;i<1036;++i)require(display_state.working[i]==source.bus->work_ram[queue+i],"Completed priority queue differs case="+std::to_string(cases)+" byte="+std::to_string(i));
      source.cpu.direct_page=0;source.call(jp?0xc08b17:0xc08b26,0,0,0);
      const unsigned base=buffer==1?0x500:0x800;
      for(unsigned i=0;i<544;++i)require(object->bytes[i]==source.bus->work_ram[base+i],"Completed C0DB0F/C0A3A4/UPDATE_SCREEN differs case="+std::to_string(cases)+" byte="+std::to_string(i));
      require(std::equal(map_state.bytes.begin(),map_state.bytes.end(),source.bus->work_ram.begin()+maps.origin()),"Source drawing changed a different creation-map byte");++cases;
    }
  }
  // The real linked traversal defers priority1, sorts unsigned absolute Y,
  // resolves attached priorities, and queues the actual overlay before its body.
  OverlaySprites overlay_data(assets.image,assets.version,*sprites);
  WorldOverlayPlayback overlays(actors,overlay_data);actors.bind_overlays(overlays);
  actors.reset_scripts();lifecycle.reset_allocations();source.cpu.direct_page=0x1e00;
  source.call(jp?0xc0925e:0xc0927c,0,0,0);source.call(jp?0xc01a9c:0xc01a86,0,0,0);
  source.call(jp?0xc01c27:0xc01c11,0x8000,0,0);source.call(jp?0xc486d8:0xc4b26b,0,0,0);
  overlays.reset_after_map_load();
  constexpr std::array<unsigned,8> roles{27,2,23,0,24,4,25,6};
  for(unsigned index=0;index<roles.size();++index){
    const auto role=roles[index];WorldActorSpec spec;spec.sprite=index&1?254:1;spec.script=35;
    auto creation=lifecycle.begin_create(spec,{role,role+1});require(creation->advance(),"Linked producer create suspended");
    auto &actor=actors.actor(creation->actor());creation.reset();
    source.cpu.direct_page=0x1e00;source.put(0x1e0e,0);source.put(0x1e10,0);source.call(jp?0xc01e5f:0xc01e49,spec.sprite,35,role);
    actor.scripts_and_physics_enabled=false;actor.tick_callback_enabled=false;actor.behavior.projection=ActorProjection::Unchanged;
    actor.action().animation=0;actor.appearance.select_four(0,0);source.put(0x10f2-shift+role*2,0);
  }
  unsigned linked_cases{};
  for(unsigned controller:{0u,1u,2u})for(unsigned tick=0;tick<96;++tick){
    input.state={std::uint16_t(controller==1?0x2000:0),std::uint16_t(controller==2?0x2000:0)};
    source.put(0x65,input.state[0]);source.put(0x67,input.state[1]);const auto before_input=input;
    for(unsigned index=0;index<roles.size();++index){const auto role=roles[index];auto &actor=actors.actor(*actors.actor_for_role(role));
      const unsigned x=(tick+index)%9==0?320:48+index*24,y=(tick+index)%11==0?256:80+index*12;
      const unsigned surface=(tick/8+index)%16,flags=(tick/16+index)%4*0x4000;
      const unsigned priority=index==1?(tick&1?0xc01b:0x801b):index==2?1:(index+tick/4)%4;
      const unsigned world_y=index%3==0?0xfffe:index%3==1?120:120;
      actor.behavior.projected_x=int(x);actor.behavior.projected_y=int(y);actor.behavior.surface_flags=std::uint16_t(surface);
      actor.action().priority=std::uint16_t(priority);actor.action().position[1]=std::uint32_t(world_y)<<16;
      actor.appearance_context.overlay_flags=std::uint16_t(flags);records.roles[role].displayed_reference=std::uint16_t(tick&1);
      source.put(0xb16-shift+role*2,x);source.put(0xb52-shift+role*2,y);source.put(0xbca-shift+role*2,world_y);
      source.put(0x103e - shift+role*2,priority);source.put((jp?0x1ab8:0x341a)+role*2,tick&1);
      source.put((jp?0x2fa8:0x2baa)+role*2,surface);source.put((jp?0x3278:0x2e7a)+role*2,flags);
    }
    require(actors.advance_tick()==WorldTickResult::Complete,"Linked producer acquired a script callback");
    require(input==before_input,"Linked drawing polled or mutated actual input");
    const unsigned buffer=1+(tick&1);source.bus->work_ram[0x2e]=std::uint8_t(buffer);source.cpu.direct_page=0;
    source.call(jp?0xc088a3:0xc088b1,0,0,0);source.cpu.direct_page=0x1e00;source.call(jp?0x80dad7:0x80db0f,0,0,0,false);
    const auto object=display.capture_objects(std::uint8_t(buffer));require(bool(object),"Linked producer lost its raw owner");
    for(unsigned i=0;i<1036;++i)require(display_state.working[i]==source.bus->work_ram[queue+i],"Linked/overlay priority queue differs tick="+std::to_string(tick)+" byte="+std::to_string(i)+" native="+std::to_string(display_state.working[i])+" source="+std::to_string(source.bus->work_ram[queue+i]));
    source.cpu.direct_page=0;source.call(jp?0xc08b17:0xc08b26,0,0,0);
    const unsigned base=buffer==1?0x500:0x800;
    for(unsigned i=0;i<544;++i)require(object->bytes[i]==source.bus->work_ram[base+i],"Linked/overlay completed OAM differs tick="+std::to_string(tick)+" byte="+std::to_string(i));
    require(std::equal(map_state.bytes.begin(),map_state.bytes.end(),source.bus->work_ram.begin()+maps.origin()),"Linked draw changed a different creation-map byte");
    for(auto role:roles)require(actors.actor(*actors.actor_for_role(role)).action().priority==(source.bus->work_ram[0x103e - shift+role*2]|unsigned(source.bus->work_ram[0x103f-shift+role*2])<<8),"Attached drawing priority consumption differs");
    ++linked_cases;
  }
  actors.clear_drawing_input(input);
  for(unsigned i=0;i<1036;++i)display_state.working[i]=std::uint8_t(i*73+91);
  const auto old=display_state.working;display.clear_photograph_prefix();
  require(std::all_of(display_state.working.begin(),display_state.working.begin()+1024,[](auto b){return b==0;}),"Photograph prefix was not cleared");
  require(std::equal(display_state.working.begin()+1024,display_state.working.end(),old.begin()+1024),"Photograph prefix erased the retained12-byte suffix");
  std::cout<<"SOURCE original object instruction reaches "<<assets.title;for(auto count:source.original_object_instruction_reaches)std::cout<<' '<<count;std::cout<<'\n';
  require(!source.original_object_instruction_reaches[2]&&!source.original_object_instruction_reaches[5]&&!source.original_object_instruction_reaches[8],"An overlapping widened instruction escaped the original gate");
  std::cout<<"PASS "<<assets.title<<" complete C0DB0F/C0A3A4 queues/creationmaps/OAM/anchor-admission cases="<<cases<<" before-first-pose="<<before_pose_cases<<" second-controller-SELECT="<<select_cases<<" linked/overlay="<<linked_cases<<'\n';
}
}
int main(int argc,char **argv){if(argc<2)return 77;try{for(int i=1;i<argc;++i){const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());run_original_comparisons(assets);run_emitter(assets);run_sampler(assets);run_object_motion(assets);run_producer(assets);}}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}return 0;}
