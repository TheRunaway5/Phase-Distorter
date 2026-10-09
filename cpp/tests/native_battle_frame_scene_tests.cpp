#include "native_battle_frame_fixture.hpp"

namespace {
using namespace battle_frame_test;
using eb::GameVersion;

std::vector<BattleCombatantDraw> commands(const battle::FrameDisplay::Screen &screen) {
    if (!screen.objects) return {};
    return {screen.objects->commands().begin(), screen.objects->commands().end()};
}
void queue_enemy(FrameFixture &a, unsigned x) {
    std::array<BattleCombatantPresentation,1> records{};
    records[0].slot=8; records[0].resource=0; records[0].identity=63;
    records[0].x=std::uint8_t(x); records[0].y=100;
    a.objects.publish(records);
    a.frame_display.update_screen(a.objects.snapshot());
}
void transport(GameVersion version,unsigned depth) {
    FrameFixture a(version,depth);
    check(!a.frame_display.pending() && !a.frame_display.screen().objects,
          "Cold display fabricated an OAM publication");
    for(unsigned i=0;i<4;++i) a.display.staged_scroll[i]={std::uint16_t(100+i),std::uint16_t(200+i)};
    queue_enemy(a,80);
    const auto first=a.frame_display.preview_screen();
    check(first.display_id==1 && first.scroll==a.display.staged_scroll &&
          a.frame_display.next_buffer_id()==2 && !commands(first).empty(),
          "UPDATE_SCREEN did not queue all scroll planes with its OAM buffer");
    a.display.staged_scroll[3]={0xffff,0x8123};
    check(a.frame_display.preview_screen().scroll==first.scroll,
          "A later generator write leaked into queued scroll");
    queue_enemy(a,130);
    const auto second=a.frame_display.preview_screen();
    check(second.display_id==2 && a.frame_display.next_buffer_id()==1 &&
          second.scroll[3]==a.display.staged_scroll[3] && commands(first)!=commands(second),
          "A second UPDATE_SCREEN failed to replace the pending buffer");
    a.frame_display.commit_publication();
    check(!a.frame_display.pending() && a.frame_display.pending_display_id()==0 &&
          a.display.scroll==second.scroll && a.frame_display.screen().display_id==2 && commands(a.frame_display.screen())==commands(second),
          "NMI failed to publish queued OAM and scroll together");
    a.display.staged_scroll.fill({1234,5678});
    a.frame_display.commit_publication();
    check(a.display.scroll==second.scroll && a.frame_display.screen().display_id==2 && commands(a.frame_display.screen())==commands(second),
          "An NMI with no pending screen latched new scroll or lost retained OAM");
    check(commands(first)!=commands(second),"Retained pending screen mutated after replacement");
    a.frame_display.request_retained_screen();
    check(a.frame_display.display_request()==1 && commands(a.frame_display.preview_screen())==commands(first),
          "Retained request redrew objects or failed to select the first physical buffer");
    a.frame_display.commit_publication();
    check(commands(a.frame_display.screen())==commands(first) && a.display.scroll==first.scroll && a.frame_display.screen().display_id==1,
          "Retained request lost the saved OAM/scroll pair");
    for(unsigned i=0;i<256;++i)a.frame_display.request_retained_screen();
    check(a.frame_display.display_request()==256 && !a.frame_display.pending(),
          "Display request did not retain source16bit wrap and lowbyte NMI gate");
    a.frame_display.commit_publication();
    check(a.frame_display.display_request()==256 && !a.frame_display.pending() && a.frame_display.screen().display_id==1 && commands(a.frame_display.screen())==commands(first),
          "Lowbyte-zero publication selected a buffer or lost the upper request byte");

    EncounterWindowMask low{},high{};
    for(unsigned y=0;y<224;++y) {
        low[y]={EncounterWindowInterval{10,100},EncounterWindowInterval{20,120}};
        high[y]={EncounterWindowInterval{30,130},EncounterWindowInterval{40,140}};
    }
    a.frame_display.replace_swirl(0,1,high,true);
    a.frame_display.install_oval(low); // Source enables3 without disabling4.
    auto rows=a.frame_display.windows(a.visual,a.frame_display.hdma_enable,true);
    check(rows[0]==high[0] && rows.back()==high.back(),
          "Higher enabled window HDMA channel did not win over a new oval");
    a.frame_display.disable_swirl(1);
    rows=a.frame_display.windows(a.visual,a.frame_display.hdma_enable,true);
    check(rows[0][0]==low[0][0] && rows[0][1]==EncounterWindowInterval{255,0},
          "First-window-only oval failed to preserve the NMI second-window reset");
    a.frame_display.install_background(0);a.frame_display.install_background(1);
    a.frame_display.install_letterbox();
    check(a.frame_display.hdma_enable==0x6c,"Installed HDMA streams lost physical channel identity");
    a.frame_display.commit_publication(false,true);
    check(a.frame_display.hdma_enable==0x6c && !a.frame_display.displayed_hdma_enable,
          "Forced blank incorrectly erased the HDMA mirror");
    a.frame_display.commit_publication(true,true);
    check(!a.frame_display.hdma_enable && !a.frame_display.displayed_hdma_enable,
          "Fade underflow failed to clear every HDMA stream");
    rejects([&]{a.frame_display.install_background(2);},"Invalid background HDMA channel was accepted");
    rejects([&]{a.frame_display.replace_swirl(0,2);},"Invalid swirl HDMA channel was accepted");
}
void windows(GameVersion version) {
    FrameFixture a(version,4);
    auto &w=a.f.windows;
    const auto full=w.full_frame(), visible=w.frame(), tail=w.tail_frame();
    check(full->height==256 && visible->height==224 && tail->height==8,
          "Full retained UI capture changed legacy frame extents");
    check(std::equal(visible->pixels.begin(),visible->pixels.end(),full->pixels.begin()) &&
          std::equal(tail->pixels.begin(),tail->pixels.end(),full->pixels.begin()+224*256),
          "Full UI tilemap reordered visible or fixed-tail rows");
    const auto old_pixels=full->pixels;
    std::array<dialogue::WindowArtwork, 1> artwork{};
    artwork[0].fill(3);
    a.f.graphics->retain_prepared_artwork(100,artwork);
    auto upload=a.f.graphics->begin_publication(version==GameVersion::US ?
        dialogue::ArtworkPublication::CommonThenGenerated : dialogue::ArtworkPublication::All);
    while(upload->advance()!=dialogue::Progress::Finished) {
        check(upload->effect().has_value(),"Actual retained artwork upload lost its copy boundary");
        upload->respond(dialogue::ArtworkDisposition::Published);
    }
    check(w.full_frame()->pixels[232*256]==3 && full->pixels==old_pixels,
          "Retained lower UI row lost live artwork or mutated prior snapshots");
    std::array<dialogue::ArtworkCellReference,96> invalid{};
    invalid.back().artwork_cell=65535;
    const auto before=w.full_frame()->pixels;
    rejects([&]{w.restore_lower_rows(invalid);},"Invalid retained artwork was accepted");
    check(w.full_frame()->pixels==before,"Failed retained UI restore partially replaced lower rows");
    w.queue_scene();while(w.publish_next()){}
    check(w.full_frame()->pixels[232*256]==3,"Ordinary window publication erased lower retained rows");
}
void display_sampling_and_fade(GameVersion version,unsigned depth) {
    FrameFixture a(version,depth);
    std::array<dialogue::WindowArtwork,1> artwork{};
    for(unsigned n=0;n<64;++n) artwork[0][n]=std::uint8_t(1+(n%3));
    a.f.graphics->retain_prepared_artwork(100,artwork);
    auto upload=a.f.graphics->begin_publication(version==GameVersion::US ?
        dialogue::ArtworkPublication::CommonThenGenerated : dialogue::ArtworkPublication::All);
    while(upload->advance()!=dialogue::Progress::Finished) {
        check(upload->effect().has_value(),"Wrapped UI artwork lost its actual upload boundary");
        upload->respond(dialogue::ArtworkDisposition::Published);
    }
    std::array<dialogue::ArtworkCellReference,96> lower{};
    for(unsigned n=0;n<lower.size();++n) {
        lower[n].artwork_cell=100;lower[n].style.priority=true;
        lower[n].style.flip_horizontal=(n&1)!=0;
    }
    a.f.windows.restore_lower_rows(lower);
    const auto full=a.f.windows.full_frame();
    for(unsigned i=1;i<16;++i) a.colors.staged[0][i]=std::uint16_t(i|(i<<5)|(i<<10));
    a.colors.upload_mode=24;
    const unsigned ui=depth==2?0:2;
    a.display.staged_scroll[ui]={0xffff,0xfffe};
    a.frame_display.update_screen(a.objects.snapshot());
    const auto stamp=a.f.scene->frame();
    const auto shown=a.publication.capture_next(*stamp);
    const auto pixels=eb::rasterize_direct_scene({shown,{}});
    unsigned visible=0;
    for(unsigned y=0;y<4;++y) for(unsigned x=0;x<256;++x) {
        const auto index=full->pixels[((y+1+0xfffe)&255)*256+((x+0xffff)&255)];
        if(!index) continue;
        const auto word=a.colors.displayed[index/16][index%16];
        const auto expand=[](unsigned v){return (v<<3)|(v>>2);};
        const auto color=0xff000000u|(expand(word&31)<<16)|(expand((word>>5)&31)<<8)|expand((word>>10)&31);
        check(pixels[y*320+x+32]==color,"Battle UI failed full32-row wrapping or source y+1 registration");
        ++visible;
    }
    check(visible>0,"Wrapped lower UI publication check was vacuous");
    EncounterWindowMask oval{};for(auto &row:oval)row[0]={20,200};
    a.frame_display.install_oval(oval);a.frame_display.install_background(0);
    a.frame_display.install_background(1);a.frame_display.install_letterbox();
    a.fade.begin_out(16,0);
    queue_enemy(a,170);
    const auto fade=a.fade.state();const auto clock=a.f.clock.frame_counter;
    const auto serial=a.display.publication_serial();
    a.colors.upload_mode=7;
    rejects([&]{a.publication.capture_next(*stamp);},"Invalid capture accepted an active-fade publication");
    check(a.fade.state()==fade && a.frame_display.hdma_enable==0x6c && a.frame_display.pending() &&
          a.display.publication_serial()==serial,"Failed capture consumed fade, global HDMA or pending screen");
    a.colors.upload_mode=0;
    const auto black=a.publication.capture_next(*stamp);
    const auto black_pixels=eb::rasterize_direct_scene({black,{}});
    check(std::all_of(black_pixels.begin(),black_pixels.end(),[](auto c){return c==0xff000000;}) &&
          !a.frame_display.hdma_enable && !a.frame_display.displayed_hdma_enable &&
          !a.frame_display.pending() && a.fade.state().brightness==0x80 &&
          a.f.clock.frame_counter==clock,"Fade underflow did not blank and disable all streams without its own clock");
    check(eb::rasterize_direct_scene({shown,{}})==pixels,"Fade publication mutated retained UI pixels");
}
void scene_frames(GameVersion version,unsigned depth) {
    FrameFixture a(version,depth);
    auto &f=a.f;
    const auto initial=f.scene->frame();
    const auto random=f.random;
    auto first=f.scene->begin_battle_frame();
    service(*first,story::SceneService::Frame);
    check(!a.frame_display.pending() && f.clock.input_polls==0,
          "Battle body ran before C43568 WAIT");
    first->complete_frame({0x8000,0});finish(*first);
    check(f.clock.frame_counter==0 && f.clock.input_polls==1 && f.input.held[0]==0x8000 &&
          f.actors.ticks()==0 && f.random==random && a.frame_display.pending(),
          "Complete battle frame duplicated WAIT, ran actors/RNG or missed UPDATE_SCREEN");
    check(object_quads(*f.scene->frame())==0,"Pre-body NMI displayed future combatants");
    const auto queued=a.frame_display.preview_screen();
    a.roster.at(8).x=175;
    auto second=f.scene->begin_battle_frame();service(*second,story::SceneService::Frame);
    second->complete_frame({0,0});finish(*second);
    check(commands(a.frame_display.screen())==commands(queued) &&
          commands(a.frame_display.preview_screen())!=commands(queued) &&
          object_quads(*f.scene->frame())>0 && f.clock.input_polls==2,
          "Battle body failed its one-frame queued OAM ordering");
    const auto displayed=f.scene->frame();
    const auto pixels=eb::rasterize_direct_scene({displayed,{}});
    a.f.windows.prompt_state().battle_mode=0;
    auto flush=f.scene->begin(story::TickKind::Frame);service(*flush,story::SceneService::Frame);
    flush->complete_frame({0,0});finish(*flush);
    check(!a.frame_display.pending(),"Raw WAIT unexpectedly queued battle objects");
    const auto retained=commands(a.frame_display.screen());
    a.colors.staged[8][15]=0x001f;a.colors.upload_mode=16;
    auto recolor=f.scene->begin(story::TickKind::Frame);service(*recolor,story::SceneService::Frame);
    recolor->complete_frame({0,0});finish(*recolor);
    bool red=false;
    for(const auto &q:f.scene->frame()->quads) if(q.object)
        red|=f.scene->frame()->atlas[q.v*f.scene->frame()->atlas_width+q.u]==0xffff0000;
    check(red && !a.frame_display.pending() && commands(a.frame_display.screen())==retained,
          "Palette-only NMI failed to recolor retained OAM without replaying rows");
    check(eb::rasterize_direct_scene({displayed,{}})==pixels && initial,
          "Later battle publication mutated an immutable earlier frame");
}
void letterbox_admission(GameVersion version,unsigned depth) {
    FrameFixture a(version,depth);
    a.frame_display.install_letterbox();
    a.frame_display.letterbox.visible=depth==2?0x0817:0x0215;
    a.frame_display.letterbox.nonvisible=depth==2?0x0013:0x0014;
    queue_enemy(a,96);
    a.colors.staged[8][15]=0x3e0;a.colors.upload_mode=16;
    a.fade.begin_out(1,0);
    const auto fade=a.fade.state();
    const auto colors=a.colors.displayed;
    const auto scroll=a.display.scroll;
    const auto serial=a.display.publication_serial();
    const auto stamp=a.f.scene->frame();
    for(const auto edges:{std::array<unsigned,2>{129,200},{256,224},{30,29},{1,225}}) {
        a.frame_display.letterbox.top_end=std::uint16_t(edges[0]);
        a.frame_display.letterbox.bottom_start=std::uint16_t(edges[1]);
        rejects([&]{a.publication.capture_next(*stamp);},"Unsupported raw letterbox count was treated as a rectangle");
        check(a.fade.state()==fade && a.colors.displayed==colors && a.colors.upload_mode==16 &&
              a.display.scroll==scroll && a.display.publication_serial()==serial && a.frame_display.pending(),
              "Rejected letterbox capture consumed fade, palette or queued screen");
    }
    a.frame_display.letterbox.top_end=0;a.frame_display.letterbox.bottom_start=65535;
    (void)a.publication.capture_next(*stamp);
    check(!a.frame_display.pending() && a.fade.state().brightness==14,
          "Zero letterbox terminator failed to ignore unreachable later counters");
    for(const auto edges:{std::array<unsigned,2>{1,224},{56,168},{112,112},{128,224}}) {
        a.frame_display.letterbox.top_end=std::uint16_t(edges[0]);
        a.frame_display.letterbox.bottom_start=std::uint16_t(edges[1]);
        const auto frame=a.publication.capture_next(*stamp);
        check(bool(frame),"Valid constant-segment letterbox count was rejected");
    }
}
void shared_animation_admission(GameVersion version,unsigned depth) {
    for(unsigned variation=0;variation<3;++variation) for(bool reverse:{false,true}) {
        FrameFixture a(version,depth,!reverse);
        const auto resources=animation_resources(version);
        battle::PsiAnimationState foreign_state;
        battle::Roster foreign_roster(battle::EnemyResources::import(std::vector<std::uint8_t>(0x160000),version));
        WorldSwirlState foreign_swirl;
        battle::ActionState action;
        auto &state=variation==0?foreign_state:a.psi_state;
        auto &roster=variation==1?foreign_roster:a.roster;
        auto &swirl=variation==2?foreign_swirl:a.swirl;
        battle::PsiSetup setup(resources,state,a.scratch,a.display,a.effects,a.background,roster,action,a.catalog,a.fade,a.f.clock);
        battle::AnimationCommands commands(setup,*resources,roster,action,a.background,a.colors,a.swirl_data,swirl,a.visual);
        const auto clock=a.f.clock.frame_counter;
        const auto polls=a.f.clock.input_polls;
        if(reverse) {
            a.f.scene->bind_publication(a.publication);
            a.f.scene->bind_battle_animations(commands);
            rejects([&]{a.f.scene->bind_battle_frame(a.frame);},"Frame accepted mismatched bound animation owners");
        } else rejects([&]{a.f.scene->bind_battle_animations(commands);},"Animations accepted mismatched bound frame owners");
        check(a.f.clock.frame_counter==clock && a.f.clock.input_polls==polls && !a.frame_display.pending() &&
              !a.f.scene->failed(),"Cross-owner rejection consumed input or poisoned Scene");
        // A successfully bound command must outlive Scene, including the
        // rejected reverse-order admission path.
        a.f.scene.reset();
    }
    FrameFixture a(version,depth);
    const auto resources=animation_resources(version);battle::ActionState action;
    battle::PsiSetup setup(resources,a.psi_state,a.scratch,a.display,a.effects,a.background,a.roster,action,a.catalog,a.fade,a.f.clock);
    battle::AnimationCommands commands(setup,*resources,a.roster,action,a.background,a.colors,a.swirl_data,a.swirl,a.visual);
    a.f.scene->bind_battle_animations(commands);
    a.f.scene->bind_battle_frame(a.frame);
    check(!a.f.scene->failed(),"Matching frame and animation owners could not share a Scene");
    a.f.scene.reset();
}
void transfer_and_retry(GameVersion version,unsigned depth) {
    FrameFixture a(version,depth);auto &f=a.f;
    // Existing work fits COPY's raw byte counter, but leaves no budget for
    // PSI's first1024-byte map descriptor after its real prefix has run.
    a.display.queue_graphics(0,0x1200,0);
    a.psi_state.time_until_next_frame=1;a.psi_state.total_frames=2;
    a.psi_state.frame_hold=3;a.psi_state.palette_base=depth==2?48:64;
    f.clock.new_frame_started=1; // WAIT consumes this existing frame without DMA.
    auto operation=f.scene->begin_battle_frame();service(*operation,story::SceneService::Frame);
    operation->complete_frame({0x4000,0});
    service(*operation,story::SceneService::Publication);
    check(f.clock.input_polls==1 && f.scene->completed_frames()==0 && a.frame_display.pending(),
          "COPY contention invented a poll or skipped real pre-PSI OAM staging");
    const auto pending=a.frame_display.preview_screen();
    const auto fade=a.fade.state();
    const auto serial=a.display.publication_serial();
    a.colors.upload_mode=7;
    rejects([&]{operation->complete_publication();},"Invalid palette capture accepted pending COPY");
    check(a.frame_display.pending() && a.display.publication_serial()==serial &&
          a.fade.state()==fade && f.clock.input_polls==1 && f.scene->completed_frames()==0,
          "Failed battle publication partially consumed queued OAM, fade or transport");
    a.colors.upload_mode=0;
    operation->complete_publication();
    finish(*operation);
    check(commands(a.frame_display.screen())==commands(pending) && !a.frame_display.pending() &&
          f.clock.input_polls==1 && f.scene->completed_frames()==1 &&
          a.psi_state.frame_offset==0x400 && a.psi_state.total_frames==1,
          "Actual transfer publication failed to resume PSI without another input poll");
}
void actual_tick_admission(GameVersion version,unsigned depth) {
    for(bool early:{false,true}) {
        if(early && version!=GameVersion::US) continue;
        for(bool busy:{false,true}) {
            FrameFixture a(version,depth);auto &f=a.f;
            auto held=busy?a.frame.begin():std::unique_ptr<battle::Frame::Operation>{};
            a.frame_state.hp_pp_blink_duration=1;a.frame_state.hp_pp_blink_target=4;
            if(early) f.windows.menu_state().early_tick_exit=1;
            else f.output.policy().instant=true;
            const auto clock=f.clock.frame_counter;const auto random=f.random;
            auto skipped=f.scene->begin(story::TickKind::Window);finish(*skipped);
            check(f.clock.frame_counter==clock && f.clock.input_polls==0 && !a.frame_display.pending() &&
                  f.random!=random,"Window early exit speculated into invalid or busy battle body");
            a.frame_state.hp_pp_blink_duration=0;
            if(held) check(held->advance(),"Held real frame failed its explicit cleanup operation");
        }
    }
    for(bool busy:{false,true}) {
        FrameFixture a(version,depth);auto &f=a.f;
        auto held=busy?a.frame.begin():std::unique_ptr<battle::Frame::Operation>{};
        if(!busy) {a.frame_state.hp_pp_blink_duration=1;a.frame_state.hp_pp_blink_target=4;}
        auto operation=f.scene->begin(story::TickKind::WorldFrame);
        const auto clock=f.clock.frame_counter;
        rejects([&]{(void)operation->advance();},"Actual battle WAIT admitted invalid or busy body");
        check(f.clock.frame_counter==clock && f.clock.input_polls==0 &&
              f.scene->completed_frames()==0 && !a.frame_display.pending(),
              "Battle body admission failed after publication or input");
        a.frame_state.hp_pp_blink_duration=0;
        if(held) check(held->advance(),"Held body failed to complete before valid retry");
        service(*operation,story::SceneService::Frame);
        operation->complete_frame({0,0});finish(*operation);
        check(f.clock.input_polls==1 && !f.scene->failed(),
              "Actual battle-boundary admission could not retry after owner recovery");
    }
}
void late_wait_admission(GameVersion version,unsigned depth) {
    FrameFixture a(version,depth);
    struct Callback final : story::FrameBoundaryService {
        battle::FrameState &state;
        unsigned publications{}, polls{};
        explicit Callback(battle::FrameState &value):state(value){}
        void validate_publication() const override {}
        void after_publication() override {
            ++publications;state.hp_pp_blink_duration=1;state.hp_pp_blink_target=4;
        }
        void validate_input() const override {}
        std::array<std::uint16_t,2> read_input(std::array<std::uint16_t,2> raw) override {
            ++polls;return raw;
        }
    } callback(a.frame_state);
    auto operation=a.f.scene->begin_battle_frame();service(*operation,story::SceneService::Frame);
    operation->complete_frame({0x4000,0},callback);
    const auto clock=a.f.clock.frame_counter;const auto serial=a.display.publication_serial();
    rejects([&]{(void)operation->advance();},"Post-WAIT invalid frame was admitted");
    check(callback.publications==1 && callback.polls==1 && a.f.clock.input_polls==1 &&
          !operation->complete() && !a.f.scene->failed() && !a.frame_display.pending(),
          "Post-WAIT admission lost or silently completed its continuation");
    a.frame_state.hp_pp_blink_duration=0;
    finish(*operation);
    check(a.f.clock.frame_counter==clock && a.display.publication_serial()==serial &&
          callback.publications==1 && callback.polls==1 && a.f.clock.input_polls==1 &&
          a.frame_display.pending(),"Repaired post-WAIT admission repeated input/publication or omitted body");
}
void nested_and_admission(GameVersion version,unsigned depth) {
    FrameFixture a(version,depth);auto &f=a.f;
    f.windows.prompt_state().battle_mode=0;
    const auto id=f.actors.create(actor(1));
    auto parent=f.scene->begin(story::TickKind::WorldFrame);
    service(*parent,story::SceneService::ActorEngine);
    f.windows.prompt_state().battle_mode=1;
    auto child=f.scene->begin_nested_battle_frame(*parent);
    service(*child,story::SceneService::Frame);
    rejects([&]{parent->respond_actor();},"Parent actor callback escaped its live battle child");
    child->complete_frame({0,0});finish(*child);
    check(f.actors.ticks()==0 && f.clock.action_scripts_disabled==1,
          "Nested battle frame pumped actors or released their guard");
    check(f.actors.erase(id),"Actual suspended actor could not be erased");
    service(*parent,story::SceneService::Frame);parent->complete_frame({0,0});finish(*parent);
    check(f.actors.ticks()==1 && !f.clock.action_scripts_disabled,
          "Nested battle frame failed to return to its actual actor continuation");
    FrameFixture foreign(version,depth);
    const auto before=f.clock.frame_counter;
    rejects([&]{f.scene->bind_battle_frame(foreign.frame);},"Scene accepted foreign battle owners");
    check(f.clock.frame_counter==before,"Foreign frame binding advanced the clock");
    battle::PsiDisplayState other;
    battle::FrameDisplay wrong(other);
    rejects([&]{a.publication.bind_frame_display(wrong);},"Publisher accepted foreign scroll/OAM transport");
    a.frame_state.hp_pp_blink_duration=1;a.frame_state.hp_pp_blink_target=4;
    const auto polls=f.clock.input_polls;
    rejects([&]{f.scene->begin_battle_frame();},"Invalid frame began before initial WAIT admission");
    check(f.clock.input_polls==polls && !f.scene->failed(),"Rejected frame consumed input or poisoned idle Scene");
}
} // namespace
int main() {
    try {
        for(const auto version:{GameVersion::US,GameVersion::JP}) {
            windows(version);
            for(unsigned depth:{2u,4u}) {
                transport(version,depth);display_sampling_and_fade(version,depth);scene_frames(version,depth);
                letterbox_admission(version,depth);shared_animation_admission(version,depth);
                transfer_and_retry(version,depth);actual_tick_admission(version,depth);late_wait_admission(version,depth);nested_and_admission(version,depth);
            }
        }
        std::cout<<"native battle frame scene: "<<checks<<" checks passed\n";
    } catch(const std::exception &error) { std::cerr<<error.what()<<'\n';return 1; }
}
