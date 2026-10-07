#include "eb/native/world_scene_presentation.hpp"
#include "eb/native/story/window_layer.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/battle/palette_effects.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
using namespace eb::native;
namespace {
unsigned checks{};
void check(bool ok, const char *message) { ++checks; if (!ok) throw std::runtime_error(message); }
PaletteColor decode(unsigned c) { return {std::uint8_t(c &31),std::uint8_t((c>>5)&31),std::uint8_t((c>>10)&31)}; }
void run(eb::GameVersion region) {
  std::vector<std::uint8_t> content(0xb100);
  const unsigned base = region == eb::GameVersion::US ? 0xaff1 : 0xafd0;
  for (unsigned i=0;i<10;++i) { content[base+i]=23; content[base+11+i]=8; content[base+21+i]=2; content[base+31+i]=0x64; }
  WorldLayerConfigurations configs(content,region);
  WorldLayerSelection selected;
  ScenePalette colors;
  colors.fill({7,8,9});
  WorldEncounterVisualState visual;
  WorldScenePresentation presentation(colors,visual,configs,selected);
  presentation.restore_selected_layer_configuration();
  check(visual.visible_layers == std::array<bool,5>{true,true,true,false,true} && visual.subscreen_layers[3] &&
        visual.use_subscreen && visual.half_intensity && visual.color_math_layers[2] && visual.color_math_layers[5], "Selected scene layer policy was not restored");
  AreaPalettes area;
  for (unsigned p=0;p<6;++p) {
    area.scenery_zero[p]=0x8101+p;
    area.scenery_high_bits[p]=0xaaaa;
    for(unsigned i=1;i<16;++i) area.scenery[p][i]=palette_argb({std::uint8_t(p),std::uint8_t(i),31});
  }
  for (unsigned p=0;p<8;++p) {
    area.sprite_zero[p]=0x8201+p;
    area.sprite_high_bits[p]=0x5554;
    for(unsigned i=1;i<16;++i) area.sprites[p][i]=palette_argb({31,std::uint8_t(p),std::uint8_t(i)});
  }
  presentation.publish_area(area);
  check(colors[0]==PaletteColor{7,8,9},"Area publication overwrote window/backdrop colors");
  for(unsigned p=0;p<6;++p) check(colors[32+p*16]==decode(area.scenery_zero[p]),"Map transparent control word lost in palette publication");
  for(unsigned p=0;p<8;++p) check(colors[128+p*16]==decode(area.sprite_zero[p]),"Sprite transparent color lost in palette publication");
  dialogue_test_assets::WindowInput input(region);
  dialogue_test_assets::add_text_fonts(input);
  auto fonts=dialogue::FontResources::import(input.image,region);
  auto resources=input.import();
  dialogue::State state;
  dialogue::TextOutput text(fonts,state);
  dialogue::WindowHost host(resources,state,text);
  host.bind_palette_publication(presentation);
  const auto original=colors;
  host.publish_palette(1);
  for(unsigned i=0;i<32;++i) check(colors[i]==decode(host.palette()[i]),"Window theme failed to publish real shared colors");
  for(unsigned i=32;i<256;++i) check(colors[i]==original[i],"Window theme wrote scenery or actor palette");
  // An equal authored write must still replace a contact grayscale change.
  colors[3]={31,31,31}; host.publish_palette(1);
  check(colors[3]==decode(host.palette()[3]),"Equal theme write was incorrectly elided");
  colors[3]={31,31,31}; host.animate_palette(1,17);
  check(colors[3]==PaletteColor{31,31,31},"Palette animation overwrote unrelated contact colors");
  for(unsigned i=20;i<24;++i) check(colors[i]==decode(host.palette()[i]),"Animated window colors did not publish their actual range");

  eb::DirectSceneFrame world;
  world.width=398; world.frame=13; world.scene_identity=44;
  world.atlas_width=2; world.atlas_height=1;
  world.atlas={0xff00ff00,0}; world.palette_indices={129,129};
  world.quads={{0,0,2,1,20,10,7,0,true}};
  world.quads.back().layer=eb::DirectSceneFrame::Layer::Actors;
  dialogue::TextFrame window;
  window.width=256;window.height=224;
  window.pixels.resize(256*224);window.priority.resize(256*224);
  window.pixels[0]=3;window.priority[0]=1;
  auto merged=story::with_window_layer(world,window,host.palette());
  check(merged->palette_indices[0]==129 && merged->palette_indices[merged->atlas_width]==3,
        "Window atlas repack lost sprite or text palette identities");
  auto first=presentation.capture(*merged);
  colors[129]={29,3,7}; colors[3]={1,2,3};
  auto second=presentation.capture(*merged);
  check(first->frame==13 && second->frame==13 && second->quads.size()==merged->quads.size(),"Palette capture advanced frame or geometry");
  check(second->atlas[0]==palette_argb(colors[129]) && second->atlas[1]==0 &&
        second->atlas[second->atlas_width]==palette_argb(colors[3]),"Shared palette failed to recolor cached sprite and text artwork");
  check(first->atlas[0]!=second->atlas[0] && merged->atlas[0]==0xff00ff00,"Capture mutated a previous immutable frame");
  host.clear_palette_publication(presentation);
  auto detached=colors;host.publish_palette(2);
  check(colors==detached,"Detached window host retained publication owner");

  battle::PaletteBankState transport;
  presentation.bind_palette_transport(transport);
  presentation.stage_world_palette();
  auto unpublished=presentation.capture(*merged);
  check(unpublished->atlas[0]==palette_argb({0,0,0}) && transport.upload_mode==24,
        "Sampling consumed a staged world palette");
  auto published=presentation.capture_next(*merged);
  check(published->atlas[0]==palette_argb(colors[129]) && !transport.upload_mode,
        "World NMI did not publish the actual palette transport");
  const auto old_picture=published->atlas;
  transport.staged_color(129)=0x801f;
  transport.upload_mode=8; // Only lower colors, preserving actor colors.
  auto lower=presentation.capture_next(*merged);
  check(lower->atlas[0]==published->atlas[0] && transport.staged_color(129)==0x801f,
        "Background-only upload consumed actor staging/high bits");
  transport.upload_mode=16;
  auto upper=presentation.capture_next(*merged);
  check(upper->atlas[0]==palette_argb({31,0,0}) && transport.displayed_palette(8)[1]==31,
        "Upper palette upload missed its NMI or retained CGRAM bit15");
  check(published->atlas==old_picture,"Later native palette publication changed an immutable frame");
  // Real C0A1F2/C0A1A7 producers touch their own palette ranges only.
  for(unsigned i=0;i<256;++i) transport.staged_color(i)=std::uint16_t(0x8000+i);
  const auto before_scenery=transport.staged;
  const auto before_display=transport.displayed;
  presentation.publish_scenery(area);
  for(unsigned i=0;i<256;++i) {
    const auto expected=i>=32&&i<128?(i%16?std::uint16_t(colors[i].red|(colors[i].green<<5)|(colors[i].blue<<10)|((i<128?0xaaaa:0x5554)>>(i%16)&1)<<15):area.scenery_zero[(i-32)/16]):before_scenery[i/16][i%16];
    check(transport.staged_color(i)==expected,"Scenery animation overwrote unrelated raw palette staging");
  }
  check(transport.upload_mode==8&&transport.displayed==before_display,"Scenery animation published outside its actual NMI");
  presentation.publish_area(area);
  for(unsigned i=0;i<256;++i) {
    const auto expected=i>=32?(i%16?std::uint16_t(colors[i].red|(colors[i].green<<5)|(colors[i].blue<<10)|((i<128?0xaaaa:0x5554)>>(i%16)&1)<<15):(i<128?area.scenery_zero[(i-32)/16]:area.sprite_zero[(i-128)/16])):before_scenery[i/16][i%16];
    check(transport.staged_color(i)==expected,"Area palette producer overwrote retained window colors");
  }
  check(transport.upload_mode==24&&transport.displayed==before_display,"Area palette producer skipped shared publication staging");
  const auto displayed=transport.displayed;
  transport.upload_mode=7;
  bool rejected=false;
  try { (void)presentation.capture_next(*merged); } catch(const std::exception &) { rejected=true; }
  check(rejected && transport.displayed==displayed && transport.upload_mode==7,
        "Rejected native palette mode consumed pending publication");
}
}
int main(){try{run(eb::GameVersion::US);run(eb::GameVersion::JP);std::cout<<"Native scene palette publication: "<<checks<<" checks\n";}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
