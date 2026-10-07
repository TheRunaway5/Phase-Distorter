#pragma once
// Real native ActorWorld + imported synthetic map/sprite/palette content.
// No original code or authored assets, mock actor advancement, or GPU proof.
#include "eb/native/story/scene.hpp"
#include "eb/native/story/battle_publication.hpp"
#include "eb/native/battle/animation_commands.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/battle/action_state.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#include <stdexcept>

#include "eb/native/battle/frame.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/world_layers.hpp"
namespace battle_frame_test {
using namespace eb::native;
namespace dialogue = eb::native::dialogue;
namespace story = eb::native::story;
inline unsigned checks{};
inline void check(bool ok, const char* message) { ++checks; if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F operation, const char* message) {
    bool rejected = false;
    try { operation(); } catch (const std::exception&) { rejected = true; }
    check(rejected, message);
}
inline void put(std::vector<std::uint8_t>& bytes, unsigned at, unsigned value) {
    bytes.at(at) = std::uint8_t(value); bytes.at(at + 1) = std::uint8_t(value >> 8);
}
inline void pointer(std::vector<std::uint8_t>& bytes, unsigned at, unsigned offset) {
    const unsigned value = 0xc00000 + offset;
    put(bytes,at,value); put(bytes,at+2,value>>16);
}
inline void zero_run(std::vector<std::uint8_t>& bytes, unsigned& at, unsigned count) {
    while (count) {
        const unsigned length = std::min(count,1024u), encoded = length - 1;
        bytes.at(at++) = std::uint8_t(0xe4 | (encoded >> 8));
        bytes.at(at++) = std::uint8_t(encoded); bytes.at(at++) = 0;
        count -= length;
    }
    bytes.at(at) = 0xff;
}
inline WorldMapArea make_area() {
    // Same bounded source data shapes exercised by native_world_map_tests,
    // reduced to one visible arrangement with no external event dependencies.
    std::vector<std::uint8_t> bytes(0x20000);
    WorldMapLayout layout{{},0x1a000,0x1aa00,0x1c000,0x1c100,0x1c104,0x1c108,
                          0x1c400,0x1c430,0x1c600,0x1c10c,0x1c110,1};
    for (unsigned i=0;i<10;++i) layout.block_chunks[i]=i*0x2800;
    pointer(bytes,layout.graphics,0x1d000);
    pointer(bytes,layout.arrangements,0x1d500);
    pointer(bytes,layout.collision_pointers,0x1e000);
    pointer(bytes,layout.animation_properties,0x1c800);
    put(bytes,layout.event_pointers,0xc700);
    unsigned at=0x1d000;
    bytes[at++]=31;
    for(unsigned y=0;y<8;++y) { bytes[at++]=std::uint8_t(y&1?0xaa:0x55);bytes[at++]=0; }
    for(unsigned i=0;i<16;++i) bytes[at++]=0;
    zero_run(bytes,at,0x7001-32);
    at=0x1d500;bytes[at++]=31;
    for(unsigned tile=0;tile<16;++tile) { put(bytes,at,0x0800);at+=2; }
    bytes[at++]=31;
    for(unsigned tile=0;tile<16;++tile) { put(bytes,at,0x0801);at+=2; }
    bytes[at]=0xff;
    bytes[layout.block_chunks[0]]=1; // Origin uses blank block1; out-of-map uses striped block0.
    return WorldMap(bytes,layout).prepare(0,{});
}
inline AreaPalettes make_palettes() {
    std::vector<std::uint8_t> bytes(0x6000);
    WorldPaletteLayout layout{0x1000,0x200,0x4000+32*192,0x2000};
    for(unsigned group=0;group<32;++group) {
        const unsigned first=0x4000+group*192;
        pointer(bytes,layout.groups+group*4,first);
        for(unsigned i=1;i<96;++i) put(bytes,first+i*2,i%16?0x421:0);
    }
    for(unsigned p=0;p<8;++p)
        for(unsigned color=1;color<16;++color)
            put(bytes,layout.sprites+(p*16+color)*2,0x0010+color+(color<<10));
    return WorldPalettes(bytes,layout).resolve({0,0},{});
}
inline std::shared_ptr<SpriteResources> make_sprites() {
    // Local adaptation of native_sprite_fixture's two-part synthetic sprite.
    std::vector<std::uint8_t> bytes(4096);
    SpriteCatalogLayout layout{0,73,8,2,1};
    pointer(bytes,0,32);pointer(bytes,4,32);pointer(bytes,8,128);
    bytes[32]=3;bytes[33]=0x20;bytes[34]=0;bytes[35]=0x1a;bytes[40]=0xc0;
    for(unsigned i=0;i<16;++i) put(bytes,41+i*2,512|(i&1));
    bytes[128]=2;bytes[129]=1;
    for(unsigned mirror=0;mirror<2;++mirror)
        for(unsigned part=0;part<2;++part) {
            const unsigned at=130+(mirror*2+part)*5;
            bytes[at]=std::uint8_t(-24+part*16);bytes[at+2]=mirror?0x40:0;
            bytes[at+3]=std::uint8_t(-8);bytes[at+4]=part?0x80:0;
        }
    for(unsigned y=0;y<24;++y) for(unsigned x=0;x<16;++x) {
        const unsigned color=(x+y*3)%16;
        for(unsigned plane=0;plane<4;++plane) if(color&(1u<<plane))
            bytes[512+((y/8)*2+x/8)*32+(y&7)*2+(plane/2)*16+(plane&1)]|=1u<<(7-(x&7));
    }
    return std::make_shared<SpriteResources>(bytes,layout);
}
inline std::shared_ptr<const ActionScriptData> make_scripts() {
    // Increment variable0, wait one tick, jump to entry0. The second entry
    // exposes an opaque real engine instruction whose continuation is unknown.
    const std::vector<std::uint8_t> bytes{0x14,0,2,1,0,0x06,1,0x19,0,0,
                                         0x42,0x34,0x12,0xc0,0x06,1,0x09};
    return std::make_shared<ActionScriptData>(bytes,0,std::vector<std::uint32_t>{0,10,14});
}
inline WorldActorSpec actor(unsigned script=0) {
    WorldActorSpec result;
    result.script=script;
    result.action.position={100*65536+0x8000,100*65536+0x8000,0x8000};
    result.action.velocity[0]=65536;
    result.action.animation=0;
    result.action.priority=3;
    return result;
}

struct Assets {
    dialogue_test_assets::WindowInput input;
    std::shared_ptr<const dialogue::FontResources> fonts;
    std::shared_ptr<const party::MeterWindowResources> meters;
    explicit Assets(eb::GameVersion version) : input(version) {
        dialogue_test_assets::add_text_fonts(input);
        input.put(input.configs,1); input.put(input.configs+2,1);
        input.put(input.configs+4,28); input.put(input.configs+6,6);
        fonts=dialogue::FontResources::import(input.image,version);
        meters=party::MeterWindowResources::import(input.image,version);
    }
};
inline const Assets& assets(eb::GameVersion version) {
    static const Assets us(eb::GameVersion::US), jp(eb::GameVersion::JP);
    return version==eb::GameVersion::US?us:jp;
}
inline std::shared_ptr<const dialogue::Program> program(eb::GameVersion version,std::vector<std::uint8_t> bytes) {
    return std::make_shared<const dialogue::Program>(version,
        std::vector<dialogue::ContentBlock>{{0,0,std::move(bytes)}},std::vector<dialogue::Location>{{0,0}});
}
struct Fixture {
    eb::GameVersion version;
    party::State party;
    dialogue::State text;
    dialogue::TextOutput output;
    dialogue::WindowHost windows;
    std::shared_ptr<dialogue::WindowGraphics> graphics;
    party::MeterWindows meters;
    story::RandomState random{1,2};
    story::TickState clock;
    story::InputState input;
    ActorWorld actors;
    WorldMapArea area=make_area();
    AreaPalettes palettes=make_palettes();
    std::unique_ptr<story::Scene> scene;
    explicit Fixture(eb::GameVersion region,bool meter_art=false, std::shared_ptr<const dialogue::WindowResources> menu_windows={}):version(region),party(region),output(assets(region).fonts,text),
        windows(menu_windows ? std::move(menu_windows) : assets(region).input.import(),text,output),meters(windows,party,assets(region).meters),
        actors(make_sprites(),make_scripts(),region) {
        party.controlled_count=1;party.controlled_order[0]=0;party.party_order[0]=1;
        clock.frame_counter=255;
        if (meter_art) {
            std::array<dialogue::WindowArtwork,1184> retained;
            for (unsigned cell=0;cell<retained.size();++cell) retained[cell]=dialogue_test_assets::pattern(cell);
            graphics=std::make_shared<dialogue::WindowGraphics>(
                dialogue::WindowInitializationResources::import(assets(region).input.image,region),output,retained);
            windows.set_graphics(graphics);
            auto publication=graphics->begin_publication(region==eb::GameVersion::US ?
                dialogue::ArtworkPublication::CommonThenGenerated : dialogue::ArtworkPublication::All);
            while (publication->advance()!=dialogue::Progress::Finished) {
                check(publication->effect().has_value(),"Meter scene artwork did not expose its actual publication");
                publication->respond();
            }
        }
        auto open=windows.begin({dialogue::WindowAction::Open,dialogue::WindowId{0},{},0});
        check(open->advance()==dialogue::OutputProgress::Suspended && open->effect() &&
              open->effect()->kind==dialogue::WindowEffectKind::ClearPartyBlink,
              "Fixture opening did not retain its real party-blink service");
        auto clear=meters.begin_clear_selection();
        check(clear->advance()==dialogue::OutputProgress::Complete,"Initially unselected meters unexpectedly waited");
        open->respond();
        check(open->advance()==dialogue::OutputProgress::Complete && open->succeeded(),"Fixture window did not finish after its real service");
        output.policy().instant=true;
        output.begin_glyph(0x71);
        check(output.advance()==dialogue::OutputProgress::Complete,"Instant fixture glyph unexpectedly yielded");
        output.policy().instant=false;output.policy().sound_mode=3;
    }
    void start() {
        // Scene activation supplies the first displayed pose; the real actor
        // script and physics still own every subsequent tick/movement here.
        for(auto id:actors.actors()) actors.actor(id).appearance.select_four(0,0,0);
        scene=std::make_unique<story::Scene>(windows,party,random,meters,clock,input,actors,area,palettes,
                                            story::SceneView{320,64,917,0xff000000,true});
    }
};
inline dialogue::Progress next(story::Scene::Operation& op,unsigned budget=1) {
    for(unsigned i=0;i<10000;++i) {
        const auto p=op.advance(budget);
        if(p!=dialogue::Progress::BudgetExhausted) return p;
    }
    throw std::runtime_error("Scene failed to reach a concrete service within its work bound");
}
inline void service(story::Scene::Operation& op,story::SceneService wanted) {
    check(next(op)==dialogue::Progress::Suspended && op.service()==wanted,"Scene yielded the wrong service");
}
inline void finish(story::Scene::Operation& op) {
    check(next(op)==dialogue::Progress::Finished && op.complete() && !op.service(),"Scene continuation did not finish exactly once");
    check(op.advance(0)==dialogue::Progress::Finished,"Completed scene operation resumed work");
}
inline unsigned object_quads(const eb::DirectSceneFrame& frame) {
    return std::count_if(frame.quads.begin(),frame.quads.end(),[](const auto& q){return q.object;});
}
inline BattleBackgroundScene battle_background(unsigned depth) {
    std::vector<std::uint8_t> bytes(0x110000);
    const auto layout=battle_background_layout(eb::GameVersion::US);
    for(unsigned i=0;i<327;++i) bytes[layout.configurations+i*17+2]=std::uint8_t(depth);
    for(unsigned i=0;i<103;++i) {
        pointer(bytes,layout.graphics+i*4,0x1000);
        pointer(bytes,layout.arrangements+i*4,0x1100);
    }
    for(unsigned i=0;i<114;++i) pointer(bytes,layout.palettes+i*4,0x1200);
    unsigned at=0x1000;zero_run(bytes,at,32);
    at=0x1100;zero_run(bytes,at,2048);
    return BattleBackgroundScenes(bytes,eb::GameVersion::US).prepare(BattleBackgroundPair{0,0,0});
}
inline BattleCombatants battle_catalog() {
    std::vector<std::uint8_t> bytes(84);
    BattleCombatantLayout layout{0,16,48,56,64,68,4,0,2,1,1,1,1};
    pointer(bytes,0,80);bytes[4]=1;
    put(bytes,48,1);pointer(bytes,56,64);
    bytes[64]=1;bytes[67]=255;
    // One actual compressed512-byte4bpp sprite; every texel is color15.
    bytes[80]=0xe5;bytes[81]=0xff;bytes[82]=0xff;bytes[83]=0xff;
    return BattleCombatants(bytes,layout);
}
inline BattleCombatantScene battle_objects() { return battle_catalog().prepare(0); }

inline std::shared_ptr<const battle::PsiResources> animation_resources(eb::GameVersion version) {
    std::vector<std::uint8_t> bytes(0xd0000);
    const unsigned shift=version==eb::GameVersion::JP?0x117:0;
    const std::array<unsigned,4> graphics{0xcac25+shift,0xcb613+shift,0xcdb27+shift,0xce31d+shift};
    for(unsigned at:graphics) {
        bytes[at++]=15;
        for(unsigned n=0;n<16;++n) bytes[at++]=std::uint8_t(n*13+1);
        zero_run(bytes,at,4096-16);
    }
    for(unsigned id=0;id<34;++id) {
        const unsigned config=0xcf04d+shift+id*12;
        put(bytes,config,graphics[0]);bytes[config+2]=2;bytes[config+3]=3;
        bytes[config+4]=1;bytes[config+5]=3;bytes[config+6]=1;
        pointer(bytes,0xcf58f+shift+id*4,0x2000);
        for(unsigned color=0;color<4;++color) put(bytes,0xcf47f+shift+id*8+color*2,color*0x421);
    }
    bytes[0x2000]=0xe7;bytes[0x2001]=0xff;bytes[0x2002]=1;bytes[0x2003]=0xff;
    return battle::PsiResources::import(bytes,version);
}
struct FrameFixture {
    Fixture f;
    BattleBackgroundScene background;
    BattleCombatants catalog = battle_catalog();
    battle::PaletteBankState colors;
    BattleCombatantScene objects = catalog.prepare(0);
    battle::PsiAnimationState psi_state;
    battle::PsiScratch scratch;
    battle::PsiDisplayState display;
    battle::FrameDisplay frame_display{display};
    battle::PaletteEffectState ramps;
    battle::PaletteEffects effects{colors, ramps};
    battle::PsiAnimation psi{psi_state, scratch, display, effects, background};
    battle::Roster roster;
    WorldDisplayFade fade{WorldDisplayFadeState{15}};
    WorldSwirlData swirl_data;
    WorldEncounterEffectData swirl_effects{{}, {}, {}};
    WorldSwirlState swirl;
    WorldEncounterVisualState visual;
    WorldLayerConfigurations layers;
    WorldLayerSelection layer;
    battle::FrameState frame_state;
    story::BattlePublication publication;
    battle::Frame frame;
    explicit FrameFixture(eb::GameVersion version, unsigned depth, bool bind = true,
                          std::shared_ptr<const dialogue::WindowResources> menu_windows = {})
        : f(version, true, std::move(menu_windows)), background(battle_background(depth)),
          roster(battle::EnemyResources::import(std::vector<std::uint8_t>(0x160000), version)),
          layers(std::vector<std::uint8_t>(0x100000), version),
          publication(colors, scratch, display, background, objects, f.windows, visual, fade),
          frame(frame_state, background, roster, objects, psi, effects, colors, display,
                frame_display, fade, f.clock, f.windows, f.party, f.meters,
                swirl_data, swirl_effects, swirl, visual, layers, layer) {
        f.windows.prompt_state().battle_mode = 1;
        visual.visible_layers.fill(true);
        colors.staged[8][15] = 0x7fff;
        colors.upload_mode = 24;
        colors.publish_pending();
        auto &enemy = roster.at(8);
        enemy.consciousness = 1;
        enemy.side = 1;
        enemy.sprite = 1;
        enemy.x = 120;
        enemy.y = 100;
        enemy.row = 0;
        // Nonzero retained pixels make wrapped UI scrolling observable. These
        // are actual shared artwork identities, not renderer-only colors.
        std::array<dialogue::ArtworkCellReference, 96> retained;
        for (unsigned n = 0; n < retained.size(); ++n) {
            retained[n].artwork_cell = 100 + n;
            retained[n].style.priority = true;
        }
        f.windows.restore_lower_rows(retained);
        f.windows.publish_scene();
        f.start();
        publication.bind_frame_display(frame_display);
        if (bind) {
            f.scene->bind_publication(publication);
            f.scene->bind_battle_frame(frame);
        }
    }
    ~FrameFixture() { f.scene.reset(); }
};
} // namespace battle_frame_test
