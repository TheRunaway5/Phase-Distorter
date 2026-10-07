#include "native_actor_npc_fixture.hpp"

namespace {
void directions(eb::GameVersion region) {
  Fixture f(region,false,npc_service_test::script(region,false));
  npc_service_test::bind_catalog(f,npc_service_test::catalog());
  // Changing another shared_ptr cannot replace the catalog inside activation.
  f.npcs=npc_service_test::catalog(3);
  f.start();
  for(unsigned npc=0;npc<9;++npc) {
    const auto id=npc_service_test::add(f,npc==8?std::nullopt:std::optional<NpcId>{NpcId(npc)});
    auto& a=f.actors.actor(id);a.behavior.direction=0x1234;a.action().animation=2;
    const auto random=f.random;const auto flags=f.text.event_flags;
    check(npc_service_test::run(f,id)==(npc==8?4:npc),"Initial direction ignored actual activation catalog or FFFF sentinel");
    check(a.behavior.direction==0x1234 && a.action().animation==2 && f.random==random && f.text.event_flags==flags,
          "Initial direction mutated pose, animation, RNG or flags");
    check(f.activation.initial_direction(f.actors,id)==(npc==8?4:npc),"Repeated direction query changed result");
    f.actors.release_appearance(id);
    check(f.activation.initial_direction(f.actors,id)==4,"Released NPC selector did not become source FFFF");
    f.actors.erase(id);
    rejects([&]{f.activation.initial_direction(f.actors,id);},"Erased actor accepted as a current NPC");
  }
}
void direction_refresh(eb::GameVersion region) {
  const unsigned initial=region==eb::GameVersion::US?0xc46914:0xc44690;
  const unsigned refresh=region==eb::GameVersion::US?0xc46957:0xc446d3;
  const auto script=[&](bool live) {
    std::vector<std::uint8_t> bytes{0x42,std::uint8_t(initial),std::uint8_t(initial>>8),std::uint8_t(initial>>16),
      0x42,std::uint8_t(refresh),std::uint8_t(refresh>>8),std::uint8_t(refresh>>16)};
    if(live)bytes.insert(bytes.end(),{0x0a,11,0});
    bytes.insert(bytes.end(),{6,1,9});
    return std::make_shared<ActionScriptData>(bytes,0,std::vector<std::uint32_t>{0});
  };
  Fixture f(region,false,script(false));npc_service_test::bind_catalog(f,npc_service_test::catalog());
  const auto id=npc_service_test::add(f,4);f.start();auto& a=f.actors.actor(id);
  a.behavior.direction=2;a.action().animation=2;a.behavior.path_state=0x8000;
  const auto fingerprint=a.appearance.fingerprint();npc_service_test::run(f,id);
  check(a.behavior.direction==4 && a.appearance.displayed()->pose==5 && a.action().animation==2 &&
        a.appearance.fingerprint()==fingerprint,"Conditional facing refresh lost input or obeyed unrelated path lock");
  a.appearance.select_four(0,0,0);const auto retained=a.appearance.displayed();
  npc_service_test::run(f,id);
  check(a.appearance.displayed()==retained,"Unchanged facing spuriously uploaded artwork");
  Fixture pending(region,false,script(true));npc_service_test::bind_catalog(pending,npc_service_test::catalog());
  const auto current=npc_service_test::add(pending,4);pending.start();
  pending.actors.actor(current).behavior.direction=2;
  auto op=pending.runtime->begin(story::TickKind::ActorFrame);
  check(next(*op)==dialogue::Progress::Suspended && op->service()==story::SceneService::ActorEngine &&
        op->actor_request()->binding.operation==NativeAction::SetDirectionAndRefresh,
        "Live conditional graphics return was fabricated");
  check(pending.actors.actor(current).behavior.direction==2,"Unadmitted facing refresh mutated actor");
}
void gifts(eb::GameVersion region) {
  Fixture f(region,false,npc_service_test::script(region,true));
  interaction_test_assets::Content content(region);content.npc(1,2,42,17);content.npc(2,2,43,25);
  npcs::Interactions interactions(npcs::InteractionResources::import(content.bytes,region),
      npcs::MapTextResources::import(content.bytes,region),content.program(region),
      f.windows,f.actors,f.collision,f.area);
  interactions.bind_event_flags();
  const auto id=npc_service_test::add(f,1);
  f.start();f.runtime->bind_interactions(interactions);
  interactions.state().interacting_npc=2;interactions.state().current_event_flag=25;
  auto& a=f.actors.actor(id);a.behavior.moving_direction=6;
  for(bool open:{false,true}) for(unsigned phase:{0u,2u,0xffffu}) for(unsigned surface:{0u,8u,12u}) {
    f.text.set_flag(17,open);f.text.set_flag(25,!open);
    a.action().animation=std::uint16_t(phase);a.behavior.direction=6;a.behavior.surface_flags=std::uint16_t(surface);
    const auto flags=f.text.event_flags;const auto fingerprint=a.appearance.fingerprint();const auto random=f.random;
    npc_service_test::run(f,id);
    check(a.behavior.direction==(open?0:4) && a.appearance.displayed()->pose==(open?0u:4u)+(phase!=0),
          "Runtime gift refresh used the selected NPC/flag or advanced animation");
    check(a.action().animation==phase && a.behavior.moving_direction==6 && a.appearance.fingerprint()==fingerprint &&
          f.text.event_flags==flags && f.random==random,"Gift refresh mutated unrelated state");
  }
  // A caller that reads the incidental graphics return remains pending. No
  // placeholder return or early pose mutation is permitted.
  Fixture live(region,false,npc_service_test::script(region,true,true));
  npcs::Interactions live_interactions(npcs::InteractionResources::import(content.bytes,region),
      npcs::MapTextResources::import(content.bytes,region),content.program(region),
      live.windows,live.actors,live.collision,live.area);
  live_interactions.bind_event_flags();const auto current=npc_service_test::add(live,1);
  live.start();live.runtime->bind_interactions(live_interactions);
  live.actors.actor(current).behavior.direction=6;
  const auto pose=live.actors.actor(current).appearance.displayed();
  auto pending=live.runtime->begin(story::TickKind::ActorFrame);
  check(next(*pending)==dialogue::Progress::Suspended && pending->service()==story::SceneService::ActorEngine,
        "Live incidental graphics return was fabricated");
  check(live.actors.actor(current).behavior.direction==6 && live.actors.actor(current).appearance.displayed()==pose,
        "Pending live-result gift request changed appearance");
}
}
int main() {
  try { for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}) {directions(region);direction_refresh(region);gifts(region);}
    std::cout<<"Native actor NPC services: "<<checks<<" checks passed\n";return 0;
  } catch(const std::exception& e) {std::cerr<<e.what()<<'\n';return 1;}
}
