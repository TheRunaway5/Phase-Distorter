#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/ambient/layout.hpp"
#include "eb/native/actor_world.hpp"
#include "native_dialogue_test_assets.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool ok,const char* message){++checks;if(!ok)throw std::runtime_error(message);}
template<class F> void rejects(F&& fn,const char* message){bool failed{};try{fn();}catch(const std::exception&){failed=true;}check(failed,message);}
struct Fixture {
  // This is the actual caller-owned retained BUFFER lifetime, before the host.
  std::array<std::uint8_t,65536> scratch{},foreign{};
  std::array<std::uint8_t,8192> animation{},foreign_animation{};
  dialogue_test_assets::WindowInput content;
  State state;
  std::shared_ptr<const FontResources> fonts;
  TextOutput output;
  WindowHost windows;
  explicit Fixture(eb::GameVersion region):content(region),fonts(make_fonts(content)),output(fonts,state),windows(content.import(),state,output) {}
  static std::shared_ptr<const FontResources> make_fonts(dialogue_test_assets::WindowInput& input){dialogue_test_assets::add_text_fonts(input);for(unsigned id=0;id<3;++id)input.put(input.configs+id*8+6,6);return FontResources::import(input.image,input.version);}
  void alias(unsigned slot){const unsigned at=windows.version()==eb::GameVersion::JP?0x8c24:0x88e2;scratch[at]=std::uint8_t(slot);scratch[at+1]=std::uint8_t(slot>>8);}
  void command(WindowAction action,unsigned id){auto op=windows.begin({action,WindowId{id},{},0});while(op->advance()==OutputProgress::Suspended)op->respond();check(op->complete(),"Window fixture operation failed");}
};
void aliases(eb::GameVersion region) {
  Fixture f(region);f.windows.bind_ambient_register_source(f.scratch);f.windows.bind_ambient_register_source(f.scratch);
  rejects([&]{f.windows.bind_ambient_register_source(f.foreign);},"Foreign ambient storage replaced bound owner");
  f.command(WindowAction::Open,0);f.command(WindowAction::Open,1);
  f.state.registers_at(0).active.working=0x11112222;f.state.registers_at(1).active.working=0x33334444;
  f.state.dummy.active.working=0x55556666;f.state.focus.reset();f.state.unfocused_register_slot=7;
  f.alias(0);check(f.state.window().active.working==0x11112222,"Ambient lookup ignored actual shared BUFFER");
  f.alias(1);check(f.state.window().active.working==0x33334444,"Ambient lookup cached a previous word");
  const unsigned wrapped=region==eb::GameVersion::JP?0x4000:0x8000;
  f.alias(wrapped);check(f.state.ambient_lookup()==wrapped && f.state.ambient_slot()==0 && f.state.window().active.working==0x11112222,
                       "Raw footer word and wrapped register address were conflated");
  f.alias(0xffff);check(&f.state.window()==&f.state.dummy,"FFFF register multiplication did not select dummy bank");
  f.command(WindowAction::Open,2);
  if(region==eb::GameVersion::JP)check(f.state.window().active.working==0x55556666,"JP CREATE did not inherit actual ambient bank");
  f.command(WindowAction::Close,0);f.state.focus.reset();f.alias(0);
  check(f.state.window().active.working==0x11112222,"Closed ambient register bank was discarded");
  f.alias(8);rejects([&]{(void)f.state.window();},"Out-of-owner register address silently admitted");
  f.state.focus=WindowId{1};check(f.state.window().active.working==0x33334444,"Focused path inspected unrelated ambient alias");
  f.command(WindowAction::Close,1);f.command(WindowAction::Close,2);
  check(&f.state.window()==&f.state.dummy,"Empty-window GET_ACTIVE unnecessarily inspected invalid alias");
}
void rejection(eb::GameVersion region) {
  Fixture f(region);f.windows.bind_ambient_register_source(f.scratch);f.command(WindowAction::Open,0);
  f.state.focus.reset();f.alias(8);const auto order=std::vector<WindowId>(f.windows.draw_order().begin(),f.windows.draw_order().end());
  if(region==eb::GameVersion::JP) {
    rejects([&]{auto op=f.windows.begin({WindowAction::Open,WindowId{1},{},0});(void)op->advance();},"JP invalid incoming ambient bank was bypassed");
    check(f.windows.draw_order().size()==order.size() && std::equal(order.begin(),order.end(),f.windows.draw_order().begin()) && !f.windows.slot_for({1}) && !f.state.focus,
          "Rejected ambient CREATE mutated window admission");
  }
  Fixture idle(region);idle.command(WindowAction::Open,0);Request glyph;glyph.kind=RequestKind::Glyph;glyph.glyph=region==eb::GameVersion::JP?0x41:0x71;idle.output.begin(glyph);
  rejects([&]{idle.windows.bind_ambient_register_source(idle.scratch);},"Active text allowed new ambient storage binding");
  check(!idle.state.unfocused_register_alias,"Failed bind changed ambient owner");
}
void animation_registers() {
  Fixture f(eb::GameVersion::JP);
  f.windows.bind_ambient_register_source(f.scratch);
  f.windows.bind_ambient_animation_source(f.animation);
  f.windows.bind_ambient_animation_source(f.animation);
  rejects([&]{f.windows.bind_ambient_animation_source(f.foreign_animation);},
          "Foreign animation owner replaced retained staging");
  f.command(WindowAction::Open,0);
  for(unsigned pass=0;pass<2;++pass) {
    for(unsigned i=0;i<f.animation.size();++i)f.animation[i]=std::uint8_t(i*29+pass*113);
    const auto before=f.animation;
    f.state.focus.reset();f.alias(0x80c3); // Actual JP Pokey path: address C3A6.
    rejects([&]{f.state.window().active.working=0;},"Animation alias permitted foreign writes");
    auto word=[&](unsigned at){return unsigned(f.animation[at])|unsigned(f.animation[at+1])<<8;};
    auto dword=[&](unsigned at){return std::uint32_t(word(at))|std::uint32_t(word(at+2))<<16;};
    WindowState expected{{dword(0x3bd),dword(0x3c1),std::uint16_t(word(0x3c5))},
                         {dword(0x3c7),dword(0x3cb),std::uint16_t(word(0x3cf))}};
    f.command(WindowAction::Open,1);
    check(f.state.window()==expected,"JP CREATE did not read the actual retained animation registers");
    check(f.animation==before,"JP CREATE mutated read-only animation staging");
  }
  const auto before=f.animation;
  auto selector=[](unsigned address) {
    for(unsigned raw=0;raw<65536;++raw)
      if(std::uint16_t(0x89c2+raw*76)==address)return raw;
    throw std::runtime_error("Fixture address is not reachable by actual window arithmetic");
  };
  for(unsigned address:{0xbfeau,0xdfd2u}) {
    f.state.focus.reset();f.alias(selector(address));
    f.command(WindowAction::Open,1);
    const auto at=address+23-0xc000;
    const auto value=unsigned(f.animation[at])|unsigned(f.animation[at+1])<<8|
        unsigned(f.animation[at+2])<<16|unsigned(f.animation[at+3])<<24;
    check(f.state.window().active.working==value,
          "Valid edge snapshot did not read actual animation bytes");
  }
  f.state.focus.reset();f.alias(8);
  rejects([&]{auto op=f.windows.begin({WindowAction::Open,WindowId{2},{},0});(void)op->advance();},
          "Bound animation staging permitted an unrelated foreign address");
  check(!f.windows.slot_for({2})&&!f.state.focus&&f.animation==before,
        "Rejected foreign snapshot mutated admission or retained staging");
  for(unsigned address:{0xbfe6u,0xdfd6u}) {
    // Abandoning a rejected operation intentionally poisons its output owner;
    // each independent boundary failure therefore uses its own real host.
    Fixture bad(eb::GameVersion::JP);
    bad.windows.bind_ambient_register_source(bad.scratch);
    bad.windows.bind_ambient_animation_source(bad.animation);
    bad.command(WindowAction::Open,0);
    bad.state.focus.reset();bad.alias(selector(address));
    const auto incoming=bad.animation;
    rejects([&]{auto op=bad.windows.begin({WindowAction::Open,WindowId{2},{},0});(void)op->advance();},
            "Partial foreign register snapshot crossed the retained owner boundary");
    check(!bad.windows.slot_for({2})&&!bad.state.focus&&bad.animation==incoming,
          "Rejected boundary snapshot mutated actual owners");
  }
}
void animation_text_x() {
  Fixture f(eb::GameVersion::JP);
  f.windows.bind_ambient_register_source(f.scratch);
  f.windows.bind_ambient_animation_source(f.animation);
  f.command(WindowAction::Open,0);
  f.state.focus.reset();f.alias(0x80c3);
  for(unsigned value=0;value<65536;++value) {
    f.animation[0x3b4]=std::uint8_t(value);f.animation[0x3b5]=std::uint8_t(value>>8);
    const auto before=f.animation;
    check(f.windows.aliased_text_x()==value,"GET_TEXT_X did not read its live animation owner");
    check(f.animation==before,"GET_TEXT_X changed the retained animation owner");
  }
  for(unsigned raw:{0u,1u,0xffffu,0x4000u}) {
    f.alias(raw);check(!f.windows.aliased_text_x(),"Owned text bank was replaced by a foreign layout");
  }
  f.alias(8);rejects([&]{(void)f.windows.aliased_text_x();},"Unowned text X address was admitted");
  f.alias(0x80c3);f.animation[0x3b4]=f.animation[0x3b5]=0;
  f.state.focus=WindowId{0};
  auto program=std::make_shared<const Program>(eb::GameVersion::JP,
      std::vector<ContentBlock>{{0,0,{1,0x13,2}}},std::vector<Location>{{0,0}});
  Conversation text(program,f.windows);text.start(EntryId{0});
  f.state.focus.reset();
  const auto before=f.animation;
  const auto composition=f.output.composition_snapshot();
  const auto frame=f.windows.frame();
  check(text.advance()==Progress::Suspended,"Zero aliased X did not reach the following prompt");
  check(text.snapshot().consumed_bytes==2,"Conditional newline changed authored cursor consumption");
  check(f.animation==before&&f.output.composition_snapshot()==composition&&
        f.windows.frame()->pixels==frame->pixels&&!f.state.focus,
        "Zero aliased X drew or changed a foreign window");
  Fixture nonzero(eb::GameVersion::JP);
  nonzero.windows.bind_ambient_register_source(nonzero.scratch);
  nonzero.windows.bind_ambient_animation_source(nonzero.animation);
  nonzero.command(WindowAction::Open,0);
  Conversation rejected(program,nonzero.windows);rejected.start(EntryId{0});
  nonzero.state.focus.reset();nonzero.alias(0x80c3);nonzero.animation[0x3b4]=1;
  const auto incoming=nonzero.animation;
  rejects([&]{(void)rejected.advance();},"Nonzero foreign X invented a mutable newline layout");
  check(nonzero.animation==incoming&&!nonzero.state.focus,"Rejected foreign newline mutated storage");
  Fixture us(eb::GameVersion::US);us.command(WindowAction::Open,0);us.state.focus.reset();us.alias(8);
  check(!us.windows.aliased_text_x(),"US no-focus GET_TEXT_X inspected a Japanese alias");
}
void mutable_animation_newline() {
  Fixture f(eb::GameVersion::JP);
  rejects([&]{f.windows.bind_ambient_animation_layout(f.animation);},
          "Mutable layout admitted without its read owner");
  f.windows.bind_ambient_register_source(f.scratch);
  f.windows.bind_ambient_animation_source(f.animation);
  rejects([&]{f.windows.bind_ambient_animation_layout(f.foreign_animation);},
          "Mutable layout accepted a different actual owner");
  f.windows.bind_ambient_animation_layout(f.animation);
  f.windows.bind_ambient_animation_layout(f.animation);
  f.command(WindowAction::Open,0);
  f.alias(0x80c3);
  auto put=[&](unsigned offset,unsigned value){
    f.animation[offset]=std::uint8_t(value);
    f.animation[offset+1]=std::uint8_t(value>>8);
  };
  for(std::uint8_t newline:{std::uint8_t(0),std::uint8_t(1)})
    for(unsigned incoming_x:{0u,255u}) {
    auto program=std::make_shared<const Program>(eb::GameVersion::JP,
        std::vector<ContentBlock>{{0,0,{newline,0x13,2}}},std::vector<Location>{{0,0}});
    for(unsigned font:{0u,1u,0xff00u,0xffffu})
      for(unsigned height:{0u,1u,2u,255u,0xffffu})
        for(unsigned y:{0u,126u,255u,0xfffeu,0xffffu}) {
          if(y==std::uint16_t(height/2u-1u))continue;
          for(unsigned i=0;i<f.animation.size();++i)f.animation[i]=std::uint8_t(i*31+7);
          put(0x3b2,height);put(0x3b4,incoming_x);put(0x3b6,y);put(0x3bb,font);
          f.state.focus=WindowId{0};
          Conversation text(program,f.windows);text.start(EntryId{0});
          f.state.focus.reset();
          const auto before=f.animation;
          const auto composition=f.output.composition_snapshot();
          const auto ring=f.output.publication_snapshot();
          const auto frame=f.windows.frame();
          check(text.advance()==Progress::Suspended,"Raw newline did not reach next prompt");
          auto expected=before;
          const bool executed = !newline || incoming_x;
          if (executed) {
            expected[0x3b4]=expected[0x3b5]=0;
            expected[0x3b6]=std::uint8_t(y+1);expected[0x3b7]=std::uint8_t((y+1)>>8);
          }
          check(f.animation==expected,"Raw newline changed more than its live cursor");
          check(f.output.publication_snapshot().current_column==
                    (ring.current_column+(font&&executed?1:0))%48,
                "Raw nonzero font did not reset the actual shared publication ring");
          if(!font || !executed)check(f.output.composition_snapshot()==composition,
                        "Raw zero font unexpectedly reset composition");
          else check(f.output.fractional_offset()==0 && !f.output.saturn_composition_active(),
                     "Raw nonzero font did not clear shared composition state");
          check(f.windows.frame()->pixels==frame->pixels&&!f.state.focus &&
                text.snapshot().consumed_bytes==2,"Raw newline invented a window/effect/operand");
          f.state.focus=WindowId{0};text.respond();
          check(text.advance()==Progress::Finished,"Raw newline conversation did not finish");
        }
  }
}

void typed_retained_layout() {
  Fixture f(eb::GameVersion::JP);
  f.windows.bind_ambient_register_source(f.scratch);
  eb::native::PartyTrail trail,foreign;
  f.windows.bind_ambient_party_trail(trail);
  f.windows.bind_ambient_party_trail(trail);
  rejects([&]{f.windows.bind_ambient_party_trail(foreign);},"Rebinding replaced the actual follower owner");
  ambient::Layout layout(f.windows.menu_options());layout.bind(trail);
  trail.next_write=211;
  for(unsigned i=0;i<trail.points.size();++i)
    trail.points[i]={std::uint16_t(i*13),std::uint16_t(i*17),std::uint16_t(i*19),
                     std::uint16_t(i*23),std::uint16_t(i*29),std::uint16_t(i*31)};
  // These are the real regional café/Gumi CC00 aliases after the authored
  // Talk/Yes caller closes its window, including a cross-field font read.
  for(unsigned raw:{0x0cdcu,0x0d98u})
    for(std::uint8_t newline:{std::uint8_t(0),std::uint8_t(1)})
      for(unsigned x:{0u,3u,0xffffu}) {
        const auto base=std::uint16_t(0x89c2u+std::uint16_t(raw*76u));
        layout.store_word(std::uint16_t(base+12),255);
        layout.store_word(std::uint16_t(base+14),std::uint16_t(x));
        layout.store_word(std::uint16_t(base+16),19);
        layout.store_word(std::uint16_t(base+21),0xff00);
        const auto before_trail=trail;
        const auto before_menus=f.windows.menu_options();
        const auto ring=f.output.publication_snapshot();
        f.alias(raw);
        auto program=std::make_shared<const Program>(eb::GameVersion::JP,
            std::vector<ContentBlock>{{0,0,{newline,0x13,2}}},std::vector<Location>{{0,0}});
        Conversation text(program,f.windows);text.start(EntryId{0});
        check(!f.state.focus&&f.state.windows.empty(),"Retained alias fixture has an open window");
        check(text.advance()==Progress::Suspended,"Typed newline did not reach its actual prompt");
        const bool executed=!newline||x;
        check(layout.word(std::uint16_t(base+14))==(executed?0:x)&&
              layout.word(std::uint16_t(base+16))==(executed?20:19),
              "Typed newline missed its actual cross-record fields");
        check(f.output.publication_snapshot().current_column==
              (ring.current_column+(executed?1:0))%48,
              "Typed newline changed actual composition at the wrong branch");
        auto expected_trail=before_trail;
        auto expected_menus=before_menus;
        ambient::Layout expected(expected_menus);expected.bind(expected_trail);
        if(executed) {expected.store_word(std::uint16_t(base+16),20);expected.store_word(std::uint16_t(base+14),0);}
        check(trail==expected_trail&&f.windows.menu_options()==expected_menus,
              "Typed newline changed another follower/menu/head owner");
        text.respond();check(text.advance()==Progress::Finished,"Typed newline retained its conversation");
      }
  check(!layout.contains_word(0x54db)&&!layout.contains_word(0x60db)&&
        !layout.contains_word(0x8d12+14)&&!layout.contains_word(0x8d12+15)&&
        !layout.contains_word(0x8d12+18)&&!layout.contains_word(0x9919),
        "Typed layout admitted an absent neighbor or raw script pointer");
  const auto before=trail;
  rejects([&]{layout.store_word(0x60db,42);},"Split follower boundary accepted a partial word write");
  check(trail==before,"Rejected partial word changed its actual follower owner");
}

void actor_variable_inheritance() {
  native_sprite_test::Fixture artwork;
  auto sprites=std::make_shared<eb::native::SpriteResources>(artwork.bytes,artwork.layout);
  auto scripts=std::make_shared<const eb::native::ActionScriptData>(
      std::vector<std::uint8_t>{9},0,std::vector<std::uint32_t>{0});
  eb::native::ActorWorld actors(sprites,scripts,eb::GameVersion::JP),foreign(sprites,scripts,eb::GameVersion::JP);
  Fixture f(eb::GameVersion::JP);
  f.windows.bind_ambient_register_source(f.scratch);
  f.windows.bind_ambient_actor_variables(actors);
  f.windows.bind_ambient_actor_variables(actors);
  rejects([&]{f.windows.bind_ambient_actor_variables(foreign);},
          "Rebinding replaced the actual actor-variable owner");
  eb::native::WorldActorSpec spec;spec.script=0;
  const auto live=actors.create_authored(spec,{28,29});
  check(bool(live),"Actor-variable fixture did not admit its real role");
  for(unsigned variable=0;variable<8;++variable)for(unsigned role=0;role<30;++role)
    actors.set_authored_variable(role,variable,std::uint16_t(role*613+variable*1093+7));
  // Change the live action owner after binding; the alias must observe this
  // value alongside the dormant roles without a cached table copy.
  actors.actor(*live).action().variables[3]=0x1234;
  ambient::Layout layout(f.windows.menu_options());layout.bind(actors);
  check(layout.word(0x0f40)==0x1234,"Ambient actor alias cached its live action variable");
  check(!layout.contains_word(0x0e53)&&!layout.contains_word(0x1033)&&
        !layout.contains_word(0x0a58)&&!layout.contains_word(0x8d21),
        "Actor alias admitted a partial table or raw script pointer");
  f.command(WindowAction::Open,0);f.state.focus.reset();f.alias(0x087e);
  auto word=[&](unsigned offset){return layout.word(std::uint16_t(0x0f41+offset));};
  auto dword=[&](unsigned offset){return std::uint32_t(word(offset))|std::uint32_t(word(offset+2))<<16;};
  const WindowState expected{{dword(0),dword(4),word(8)},
                             {dword(10),dword(14),word(18)}};
  std::array<std::uint16_t,240> before{};
  for(unsigned variable=0;variable<8;++variable)for(unsigned role=0;role<30;++role)
    before[variable*30+role]=actors.authored_variable(role,variable);
  f.command(WindowAction::Open,1);
  check(f.state.window()==expected,"Equip CREATE did not inherit all six live actor register fields");
  for(unsigned variable=0;variable<8;++variable)for(unsigned role=0;role<30;++role)
    check(actors.authored_variable(role,variable)==before[variable*30+role],
          "Readonly Equip CREATE mutated an actual actor variable");
  f.state.focus.reset();f.alias(0x087e);
  const auto argument=f.windows.capture_argument();
  check(argument.value()==expected.active.argument,"Character selector captured another actor argument");
  layout.store_word(0x0f45,0xaaaa);layout.store_word(0x0f47,0xbbbb);
  f.state.focus=WindowId{1};f.alias(8);
  f.state.window().active.argument=0x98765432;
  f.windows.restore_argument(argument);
  check(f.state.window().active.argument==0x98765432,
        "Captured actor argument restore followed the callback's new focus");
  for(unsigned variable=0;variable<8;++variable)for(unsigned role=0;role<30;++role)
    check(actors.authored_variable(role,variable)==before[variable*30+role],
          "Captured argument restore changed another actor field");
  Fixture another(eb::GameVersion::JP);
  rejects([&]{another.windows.restore_argument(argument);},"Foreign host restored another captured owner");
  f.state.focus=WindowId{0};f.state.window().active.argument=0x12345678;
  const auto physical=f.windows.capture_argument();const auto physical_slot=f.windows.slot_for({0});
  f.command(WindowAction::Close,0);f.alias(0x087e);f.command(WindowAction::Open,2);
  check(f.windows.slot_for({2})==physical_slot,"Character fixture did not reuse its actual physical slot");
  f.state.window().active.argument=0;
  f.windows.restore_argument(physical);
  check(f.state.window().active.argument==0x12345678,
        "Captured argument restore lost its closed/reused physical window owner");
  actors.retire(*live);
  check(layout.word(0x0f40)==0x1234,"Retired actor alias lost its actual retained variable");
  layout.store_word(0x0f43,0x5678);
  check(actors.authored_variable(29,3)==((before[3*30+29]&0xff)|0x7800)&&
        actors.authored_variable(0,4)==((before[4*30]&0xff00)|0x56),
        "Cross-table byte write replaced unrelated actor variable bits");
}

void mutable_animation_rejection() {
  Fixture f(eb::GameVersion::JP);
  f.windows.bind_ambient_register_source(f.scratch);
  f.windows.bind_ambient_animation_source(f.animation);
  f.windows.bind_ambient_animation_layout(f.animation);
  f.command(WindowAction::Open,0);f.alias(0x80c3);
  f.animation[0x3b2]=255;f.animation[0x3b4]=1;
  f.animation[0x3b6]=126;f.animation[0x3bc]=0xff;
  auto program=std::make_shared<const Program>(eb::GameVersion::JP,
      std::vector<ContentBlock>{{0,0,{1,0x13,2}}},std::vector<Location>{{0,0}});
  Conversation text(program,f.windows);text.start(EntryId{0});f.state.focus.reset();
  const auto before=f.animation;
  const auto composition=f.output.composition_snapshot();
  const auto ring=f.output.publication_snapshot();
  rejects([&]{(void)text.advance();},"Foreign scroll invented a drawable canvas");
  check(f.animation==before && f.output.composition_snapshot()==composition &&
        f.output.publication_snapshot()==ring,"Rejected scroll mutated shared owners");
}

}
int main(){try{for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}){aliases(region);rejection(region);}animation_registers();animation_text_x();mutable_animation_newline();typed_retained_layout();actor_variable_inheritance();mutable_animation_rejection();std::cout<<"Native ambient window registers: "<<checks<<" checks passed\n";return 0;}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
