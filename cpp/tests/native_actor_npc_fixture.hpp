#pragma once
#define main prior_npc_world_runtime_test_main
#include "native_world_runtime_tests.cpp"
#undef main

namespace npc_service_test {
using namespace eb::native;
inline std::shared_ptr<const ActionScriptData> script(eb::GameVersion region, bool gift, bool live = false) {
  const unsigned helper = gift ? (region == eb::GameVersion::US ? 0xc0c353 : 0xc0c335)
                               : (region == eb::GameVersion::US ? 0xc46914 : 0xc44690);
  std::vector<std::uint8_t> bytes{0x42,std::uint8_t(helper),std::uint8_t(helper>>8),std::uint8_t(helper>>16)};
  if (live) bytes.insert(bytes.end(), {0x0a,7,0});
  bytes.insert(bytes.end(), {6,1,9});
  return std::make_shared<ActionScriptData>(bytes,0,std::vector<std::uint32_t>{0});
}
inline std::shared_ptr<const NpcCatalog> catalog(unsigned add = 0) {
  std::vector<std::uint8_t> bytes(0x3000);
  const NpcCatalogLayout layout{0,0x1000,0x1100,0x1100,0x2000,8,799};
  for(unsigned i=0;i<8;++i) {
    bytes[layout.definitions+i*17]=1;
    bytes[layout.definitions+i*17+3]=std::uint8_t((i+add)&7);
  }
  return std::make_shared<NpcCatalog>(bytes,layout);
}
inline void bind_catalog(Fixture &f, std::shared_ptr<const NpcCatalog> catalog) {
  f.npcs = std::move(catalog);
  f.activation = WorldActivation(f.npcs,f.sprites,f.actions,f.version,{0,8});
}
inline ActorId add(Fixture &f, std::optional<NpcId> npc, unsigned role=0) {
  auto spec=actor();spec.script=0;spec.npc=npc;spec.action.velocity={};
  const auto id=f.actors.create_authored(spec,{role,role+1});
  check(id.has_value(),"NPC service fixture failed actual role admission");return *id;
}
inline std::uint16_t run(Fixture &f,ActorId id) {
  f.actors.replace_script(id,0);
  auto op=f.runtime->begin(story::TickKind::ActorFrame);
  check(op->advance(0)==dialogue::Progress::BudgetExhausted,"Zero budget ran NPC service");
  check(next(*op)==dialogue::Progress::Suspended && op->service()==story::SceneService::Frame,
        "NPC service did not finish before real ActorFrame boundary");
  const auto value=f.actors.actor(id).tasks().at(0).temporary;
  check(op->advance()==dialogue::Progress::Suspended,"Repeated frame suspension resumed NPC task");
  op->complete_frame({});finish(*op);return value;
}
}
