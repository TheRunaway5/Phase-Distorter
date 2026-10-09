#include "eb/native_session.hpp"
#include "eb/asset_store.hpp"
#include "eb/direct_scene.hpp"
#include "eb/display_settings.hpp"
#include "eb/native/npc_catalog.hpp"
#include "eb/native/cutscenes/coffee/scene.hpp"
#include "../src/native/session/state.hpp"
#include "generated_assets.hpp"
#include "native_session_fixture.hpp"
#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <stdexcept>
#include <tuple>
namespace {
void check(bool v,const std::string &m){if(!v)throw std::runtime_error(m);}
struct PictureCase {const char *name;unsigned width;};
std::vector<PictureCase> picture_cases() {
  using A=eb::AspectRatio;
  std::vector<PictureCase> cases;
  const auto add=[&](const char *name,A aspect,float custom=16.f/9.f,int w=1600,int h=700) {
    eb::DisplaySettings settings;settings.widescreen=true;settings.aspect=aspect;settings.custom_aspect=custom;
    const unsigned width=unsigned(settings.render_width(w,h));
    check(width>=256&&width<=1024&&!(width&1),"DisplaySettings produced an unsupported coffee width");
    cases.push_back({name,width});
  };
  add("Native",A::Native);add("4:3",A::FourThree);add("16:10",A::SixteenTen);
  add("16:9",A::SixteenNine);add("21:9",A::TwentyOneNine);add("Window",A::Window);
  add("Custom32:9",A::Custom,32.f/9.f);add("Maximum1024",A::Custom,10.f);
  for(unsigned width:{320u,402u,640u,1000u})add("EvenIntermediate",A::Custom,float(width)/224.f);
  eb::DisplaySettings disabled;disabled.widescreen=false;disabled.aspect=A::Custom;disabled.custom_aspect=10;
  check(disabled.render_width(4096,224)==256,"Disabled widescreen cropped the authored center");
  cases.push_back({"DisabledWidescreen",unsigned(disabled.render_width(4096,224))});
  check(cases[6].width==796&&cases[7].width==1024,"Custom32:9/maximum coffee widths differ");
  return cases;
}
bool same_state(const eb::SessionDiagnostics &a,const eb::SessionDiagnostics &b) {
  const auto state=[](const eb::SessionDiagnostics &d) {
    return std::tie(d.frames,d.steps,d.master_clocks,d.cpu_instructions,d.audio_cpu_instructions,d.audio_frames,
      d.native_gameplay_batches,d.native_encounters_started,d.native_encounters_completed,d.native_battle_mode,
      d.native_battle_mode_flag,d.native_world_menus_opened,d.native_world_menus_completed,
      d.native_item_uses_started,d.native_item_uses_completed,d.native_doors_started,d.native_doors_completed,
      d.native_world_menu_active,d.native_door_active,d.native_town_maps_started,d.native_town_maps_completed,
      d.native_town_map_active,d.native_cutscenes_started,d.native_cutscenes_completed,d.native_cutscene_active,
      d.native_cutscene_last,d.native_travel_started,d.native_travel_completed,d.native_travel_active,
      d.machine_debug_available,d.cpu_state,d.audio_cpu_state);
  };
  // source_width is the requested presentation setting, not game state.
  return state(a)==state(b);
}
constexpr std::uint64_t coffee_identity=0x434f46464545;
void centered_picture(const eb::PresentationFrame &picture,std::span<const std::uint32_t> native) {
  check(picture.pixels.size()==std::size_t(picture.width)*224,"Coffee presentation extent differs");
  const unsigned left=(picture.width-256)/2;
  for(unsigned y=0;y<224;++y)
    check(std::equal(picture.pixels.begin()+y*picture.width+left,
      picture.pixels.begin()+y*picture.width+left+256,native.begin()+y*256),
      "Coffee/tea widened picture changed its canonical center");
}
void coffee_geometry(const eb::DirectSceneFrame &scene,unsigned width,bool inspect_text_texels=true) {
  check(scene.width==width&&scene.atlas_width>=256&&scene.atlas_width<=1024&&scene.atlas_height>=448&&
        scene.atlas.size()==std::size_t(scene.atlas_width)*scene.atlas_height,
        "Coffee/tea lost its latched source atlas");
  const unsigned text_top=scene.atlas_height-448;
  const float center=float(width-256)/2;
  using Plane=std::tuple<unsigned,int,eb::DirectSceneFrame::Layer>;
  std::map<Plane,std::vector<std::pair<float,float>>> coverage;
  unsigned text{};
  for(const auto &quad:scene.quads) {
    if(quad.v<text_top) {
      check(!quad.object&&quad.u==0&&quad.width==scene.atlas_width&&quad.height==224&&quad.y==0,
            "Coffee/tea changed its retained source background plane");
      coverage[{quad.v,quad.priority,quad.layer}].push_back({std::max(quad.x,quad.clip.left),
        std::min(quad.x+float(quad.width),quad.clip.right)});
    } else {
      check(quad.layer==eb::DirectSceneFrame::Layer::Background3&&!quad.object&&quad.width==256&&
            quad.height==224&&quad.x==center&&quad.y==0&&(quad.v==text_top||quad.v==text_top+224),
            "Coffee/tea repeated or shifted its canonical BG3 text plane");
      ++text;
    }
  }
  check(coverage.size()>=2&&text==2,"Coffee/tea lost its source background or two BG3 priority planes");
  for(auto &[plane,intervals]:coverage) {
    (void)plane;std::sort(intervals.begin(),intervals.end());float right=0;
    for(const auto &[left,end]:intervals) {
      if(end<=0||left>=float(width))continue;
      check(left<=right,"Coffee/tea background quads leave a widescreen margin gap");right=std::max(right,end);
    }
    check(right>=float(width),"Coffee/tea retained background does not cover the right widescreen margin");
  }
  // BG3 owns only256 columns, regardless of the background atlas width.
  // This also rejects packing successive text rows into wider atlas margins.
  if(inspect_text_texels)for(unsigned y=text_top;y<scene.atlas_height;++y)for(unsigned x=256;x<scene.atlas_width;++x)
    check(scene.atlas[std::size_t(y)*scene.atlas_width+x]==0,
          "Coffee/tea BG3 text leaked into retained background margin texels");
}
std::uint32_t color(std::uint16_t word) {
  const auto c=[](unsigned v){return (v<<3)|(v>>2);};
  return 0xff000000u|(c(word&31)<<16)|(c((word>>5)&31)<<8)|c((word>>10)&31);
}
void latched_render_inputs(const eb::GameAssets &assets) {
  using namespace eb::native;
  // A declared render-component input, separate from the real NPC route below.
  // Construct the actual native owners; capture never starts a scene or clock.
  session::Content content(assets.image,assets.version);eb::NativeAudio audio(assets.image,assets.version);
  cutscenes::DisplayState display_state;
  session::World world(content,audio);session::BattleContent battle_content(assets.image,assets.version);
  session::Battle battle(battle_content,world,assets.image);
  cutscenes::Display display(assets.version,display_state,{*world.runtime,world.interactions,world.actors,
    *world.map_load,world.map_state,world.windows,*world.window_graphics,world.party,world.clock,
    world.presentation,world.visual,world.music,world.music_state,world.palette,world.scratch,world.display,
    world.frame_display,world.fade,battle.background,battle.loader,battle.video,battle.blank,battle.frame,
    battle.frame_state,content.layers,world.layer,audio});
  cutscenes::coffee::Resources resources(assets.image,assets.version);
  cutscenes::coffee::Text text(resources);cutscenes::coffee::State state;
  cutscenes::coffee::Scene scene(resources,text,state,display);
  // The persistent Battle starts with an unloaded two-bit record. Establish
  // coffee's real bound four-bit owner through its forced-blank producer.
  battle.loader.load(BattleBackgroundPair{231,232,4});
  const unsigned depth=battle.background.snapshot().bitdepth;
  check(depth==4,"Declared coffee capture requires its actual four-bit background owner");
  battle.video={1,{0x24,0x20,0,0},{0x10,0}};
  std::array<std::uint8_t,65536> video{};
  const auto word=[&](unsigned at,unsigned value){video[at]=std::uint8_t(value);video[at+1]=std::uint8_t(value>>8);};
  const auto bg_index=[](unsigned x,unsigned y){return (x+2*y)%15+1;};
  const auto text_index=[](unsigned tile,unsigned x,unsigned y){return (tile+x+3*y)%4;};
  const auto tile=[&](unsigned base,unsigned number,unsigned planes,const auto &index) {
    for(unsigned y=0;y<8;++y)for(unsigned x=0;x<8;++x)for(unsigned plane=0;plane<planes;++plane)
      if(index(x,y)&(1u<<plane))video[base+number*planes*8+(plane/2)*16+y*2+(plane&1)]|=std::uint8_t(1u<<(7-x));
  };
  tile(0x2000,1,4,bg_index);
  for(unsigned tile_id=1;tile_id<=2;++tile_id)
    tile(0xc000,tile_id,2,[&](unsigned x,unsigned y){return text_index(tile_id,x,y);});
  for(unsigned y=0;y<32;++y)for(unsigned x=0;x<32;++x) {
    word(0x4000+(y*32+x)*2,1|(((x+y)%8)<<10)|((x&1)<<13));
    word(0x4800+(y*32+x)*2,1|(((x+y+3)%8)<<10)|((x&1)<<13));
    word(0xf800+(y*32+x)*2,(1+(y&1))|(((x+2*y)%8)<<10)|((y&1)<<13)|((x&1)<<14)|((y&1)<<15));
  }
  cutscenes::DisplayView view{video,{}, {},0,71};
  view.scroll[1]={13,27};view.scroll[2]={5,9};
  for(unsigned i=0;i<256;++i)view.palette[i]=std::uint16_t((i*3&31)|((i*7&31)<<5)|((i*11&31)<<10));
  const auto clock=world.clock;
  const auto video_before=video;
  const auto palette=world.palette.staged;
  const auto audio_clocks=audio.master_clocks(),audio_instructions=audio.instructions(),audio_frames=audio.sample_frames();
  const auto verify=[&](const eb::DirectSceneFrame &capture,bool wide_map) {
    coffee_geometry(capture,256);
    const unsigned text_top=capture.atlas_height-448;
    std::set<unsigned> bg_planes;
    for(const auto &quad:capture.quads)if(quad.v<text_top&&quad.layer==eb::DirectSceneFrame::Layer::Background2) {
      bg_planes.insert(quad.v);const unsigned high=unsigned(quad.priority>=8);
      for(unsigned y:{0u,1u,7u,55u,223u})
        for(unsigned u:{0u,127u,255u,capture.atlas_width/2,capture.atlas_width-1}) {
          const unsigned sx=unsigned(int(quad.x)+int(u)+13)&(wide_map?511u:255u),sy=(y+1+27)&255;
          const unsigned expected_high=(sx/8)&1;
          const unsigned pal=(((sx/8)%32+sy/8+3*(sx/256))%8)*16+bg_index(sx&7,sy&7);
          const auto expected=high==expected_high?color(view.palette[pal]):0u;
          check(capture.atlas[(quad.v+y)*capture.atlas_width+u]==expected,
                "Coffee/tea margin texel differs from declared latched BG2 map/tile/scroll/palette");
        }
    }
    check(bg_planes.size()==2,"Declared coffee capture lost its two BG2 priority planes");
    for(unsigned high=0;high<2;++high)for(unsigned y=0;y<224;++y)for(unsigned x=0;x<256;++x) {
      const unsigned sx=(x+5)&255,sy=(y+1+9)&255,mx=sx/8,my=sy/8;
      const unsigned tx=mx&1?7-(sx&7):sx&7,ty=my&1?7-(sy&7):sy&7;
      const unsigned index=text_index(1+(my&1),tx,ty),pal=((mx+2*my)%8)*4+index;
      const auto expected=index&&high==(my&1)?color(view.palette[pal]):0u;
      check(capture.atlas[(text_top+high*224+y)*capture.atlas_width+x]==expected,
            "Coffee/tea BG3 row stride, flips, palette or transparent priority differs from latched input");
    }
  };
  const auto captured=scene.capture_display(view);verify(*captured,false);
  const auto retained=eb::rasterize_direct_scene({captured,{}});
  const auto widths=[&](const std::shared_ptr<const eb::DirectSceneFrame> &source) {
    const auto canonical=eb::rasterize_direct_scene({source,{}});
    for(const auto &setting:picture_cases()) {
      const auto widened=eb::crop_native_scene(*source,setting.width);
      coffee_geometry(*widened,setting.width,false);
      const auto pixels=eb::rasterize_direct_scene({widened,{}});
      eb::PresentationFrame picture{};picture.pixels=pixels;picture.width=setting.width;
      centered_picture(picture,canonical);
    }
  };
  widths(captured);
  check(eb::rasterize_direct_scene({scene.capture_display(view),{}})==retained&&video==video_before&&
        world.palette.staged==palette&&world.clock.frame_counter==clock.frame_counter&&
        world.clock.publications==clock.publications&&world.clock.input_polls==clock.input_polls&&
        audio.master_clocks()==audio_clocks&&audio.instructions()==audio_instructions&&audio.sample_frames()==audio_frames&&
        state.fraction==0&&state.script_offset==0&&state.row_count==0&&state.battle_frames==0&&
        state.waits==0&&state.scroll_updates==0&&!scene.busy()&&!scene.failed(),
        "Repeated coffee component capture changed actual parser/display/time owners");
  video[0xc000+16]=std::uint8_t(~video[0xc000+16]);
  (void)scene.capture_display(view);
  check(eb::rasterize_direct_scene({captured,{}})==retained,"Latched input changes mutated an earlier coffee frame");
  video=video_before;
  //64 source columns contain a distinct second map page, so256 repetition is
  // insufficient. The declared fallback must retain the full supported canvas.
  battle.video.maps[1]=0x21;
  const auto fallback=scene.capture_display(view);
  check(fallback->atlas_width==1024,"Nonperiodic coffee tilemap did not retain the maximum-width fallback");
  verify(*fallback,true);widths(fallback);
  std::cout<<"PASS "<<assets.title<<" declared latched BG2/BG3 VRAM/scroll/palette texels,13aspect cases,64column fallback,repeat/retained purity\n";
}
void run(const eb::GameAssets &assets,unsigned selector) {
  using namespace eb::native;
  auto archive=native_session_save(assets.version);auto saved=archive.load(0);
  const bool jp=assets.version==eb::GameVersion::JP;
  const unsigned caller=selector?(jp?0xc9cb31:0xc9dbd6):(jp?0xc99c63:0xc7edf1);
  const auto layout=npc_catalog_layout(assets.version);NpcCatalog catalog(assets.image,layout);
  unsigned npc=layout.definition_count;
  for(unsigned i=0;i<layout.definition_count;++i) {
    const unsigned at=layout.definitions+i*17+9;
    const unsigned pointer=assets.image[at]|(unsigned(assets.image[at+1])<<8)|(unsigned(assets.image[at+2])<<16);
    if(pointer==caller){npc=i;break;}
  }
  check(npc<layout.definition_count,"Coffee/tea fixture lacks its authored regional NPC");
  std::optional<NpcPlacement> placement;
  for(unsigned y=0;y<40;++y)for(unsigned x=0;x<32;++x)for(const auto &p:catalog.cell(x,y))if(p.npc==npc)placement=p;
  check(bool(placement),"Coffee/tea NPC lacks its authored placement");
  saved.game.leader_x=std::uint16_t(placement->x-12);saved.game.leader_y=std::uint16_t(placement->y);saved.game.leader_direction=2;
  for(unsigned flag:{71u,155u})saved.event_flags[(flag-1)/8]|=std::uint8_t(1u<<((flag-1)&7));
  saved.event_flags[219/8]&=std::uint8_t(~(1u<<(219&7)));
  for(unsigned member=0;member<4;++member)for(unsigned i=0;i<4;++i)saved.characters[member].name[i]=std::uint8_t((jp?0x41:0x71)+member*4+i);
  archive.save(0,saved,0);
  eb::NativeSession plain(assets.image,assets.version,archive.bytes(),1),sampled(assets.image,assets.version,archive.bytes(),1);
  const auto pictures=picture_cases();
  std::shared_ptr<const eb::DirectSceneFrame> retained;std::vector<std::uint32_t> retained_pixels;
  std::uint64_t observed_started{},observed_completed{};unsigned calls{},sampling_boundaries{},coffee_samples{};
  std::vector<unsigned> coffee_widths(pictures.size());
  const auto sample=[&] {
    const auto before=sampled.diagnostics(true);
    const std::vector<std::uint8_t> save_before(sampled.save_memory().begin(),sampled.save_memory().end());
    const std::vector<std::uint32_t> native_before(sampled.native_pixels().begin(),sampled.native_pixels().end());
    bool inspected_text{};
    for(unsigned i=0;i<pictures.size();++i) {
      const auto &setting=pictures[i];sampled.configure_presentation(setting.width,false,true);
      const auto picture=sampled.presentation_frame();
      check(picture.width==setting.width,"Coffee/tea ignored its DisplaySettings aspect "+std::string(setting.name));
      centered_picture(picture,native_before);
      const std::vector<std::uint32_t> pixels(picture.pixels.begin(),picture.pixels.end());
      const auto again=sampled.presentation_frame();
      check(again.width==picture.width&&again.frame==picture.frame&&again.scene==picture.scene&&
            std::equal(pixels.begin(),pixels.end(),again.pixels.begin(),again.pixels.end()),
            "Repeated coffee/tea presentation sampling changed the retained picture");
      if(picture.scene&&picture.scene->scene_identity==coffee_identity) {
        coffee_geometry(*picture.scene,setting.width,!inspected_text);inspected_text=true;++coffee_widths[i];
        check(eb::rasterize_direct_scene({picture.scene,{}})==pixels,
              "Coffee/tea sampled pixels differ from their retained source commands");
      }
    }
    if(inspected_text)++coffee_samples;
    check(same_state(before,sampled.diagnostics(true))&&
          std::equal(native_before.begin(),native_before.end(),sampled.native_pixels().begin())&&
          std::equal(save_before.begin(),save_before.end(),sampled.save_memory().begin(),sampled.save_memory().end()),
          "Coffee/tea presentation changed gameplay, input/audio state, canonical pixels or battery save");
    if(retained)check(eb::rasterize_direct_scene({retained,{}})==retained_pixels,"Coffee/tea mutated a retained earlier scene");
    ++sampling_boundaries;
  };
  auto frame=[&](std::uint16_t buttons) {
    if(calls++%257==0)sample();
    const auto count=plain.advance_frame(buttons);check(count&&sampled.advance_frame(buttons)==count,"Coffee/tea physical cadence depends on sampling");
    check(std::equal(plain.native_pixels().begin(),plain.native_pixels().end(),sampled.native_pixels().begin()),"Coffee/tea canonical pictures depend on sampling");
    check(plain.take_audio_samples()==sampled.take_audio_samples(),"Coffee/tea PCM depends on sampling");
    const auto after=sampled.diagnostics();
    if(after.native_cutscenes_started!=observed_started||after.native_cutscenes_completed!=observed_completed) {
      sample();observed_started=after.native_cutscenes_started;observed_completed=after.native_cutscenes_completed;
    }
  };
  for(unsigned call=0;call<100;++call)frame(0);
  frame(0x20); // Actual L shortcut enters the real nearby Talk/Check caller.
  unsigned resumed{};
  for(unsigned call=0;call<30000;++call) {
    frame(resumed?0:call%16==0?0x80:0);
    const auto d=sampled.diagnostics();
    if(call%1000==0)std::cerr<<"TRACE "<<assets.title<<' '<<(selector?"tea":"coffee")<<" call="<<call
        <<" frames="<<d.frames<<" started="<<d.native_cutscenes_started<<" completed="<<d.native_cutscenes_completed
        <<" active="<<unsigned(d.native_cutscene_active)<<'\n';
    if(d.native_cutscenes_started&&!retained) {
      const auto picture=sampled.presentation_frame();
      if(picture.scene&&picture.scene->scene_identity==coffee_identity) {
        retained=picture.scene;retained_pixels=eb::rasterize_direct_scene({retained,{}});
      }
    }
    if(d.native_cutscenes_completed&&d.native_world_menus_completed) {
      check(d.native_world_menus_opened==1&&d.native_world_menus_completed==1&&!d.native_world_menu_active,
            "Actual coffee/tea Talk caller did not return exactly once");
      if(++resumed<120)continue;
      check(d.native_cutscenes_started==1&&d.native_cutscenes_completed==1&&!d.native_cutscene_active&&d.native_cutscene_last==selector+1,
            "Actual coffee/tea caller duplicated or retained the wrong scene");
      check(d.cpu_instructions==0&&!d.machine_debug_available&&d.native_world_menu_active==false,"Coffee/tea failed to return to its native world owner");
      check(std::equal(sampled.save_memory().begin(),sampled.save_memory().end(),archive.bytes().begin()),"Coffee/tea silently overwrote battery save");
      check(coffee_samples&&std::all_of(coffee_widths.begin(),coffee_widths.end(),[](unsigned count){return count!=0;}),
            "Actual coffee/tea route did not exercise every DisplaySettings aspect on its source scene");
      std::cout<<"PASS "<<assets.title<<' '<<(selector?"tea":"coffee")<<" actualNPC="<<npc<<" position="<<placement->x<<','<<placement->y<<" Talk/Yes -> authored cinematic -> caller returned ->120 worldcalls frames="<<d.frames
               <<" CPU=0 canonicalpictures/PCM everyframe identical all"<<pictures.size()<<"aspect cases source_scene_samples="<<coffee_samples
               <<" sampled_boundaries="<<sampling_boundaries<<" (every257calls+admission/completion)"<<std::endl;return;
    }
  }
  throw std::runtime_error("Actual regional coffee/tea NPC caller did not complete npc="+std::to_string(npc)+" position="+std::to_string(placement->x)+","+std::to_string(placement->y));
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  bool presentation_only{};
  for(int i=1;i<argc;++i)if(std::string(argv[i])=="--presentation-only")presentation_only=true;
  unsigned failures{},packs{};
  for(int i=1;i<argc;++i) {
    if(std::string(argv[i])=="--presentation-only")continue;
    ++packs;
    try {
      const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
      latched_render_inputs(assets);
      if(presentation_only)continue;
      for(unsigned selector=0;selector<2;++selector) {
        try{run(assets,selector);}
        catch(const std::exception &e){std::cerr<<"FAIL "<<assets.title<<' '<<(selector?"tea":"coffee")<<": "<<e.what()<<'\n';++failures;}
      }
    } catch(const std::exception &e){std::cerr<<"FAIL pack "<<argv[i]<<": "<<e.what()<<'\n';++failures;}
  }
  return !packs?77:failures?1:0;
}
