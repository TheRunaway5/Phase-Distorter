#pragma once
#include "eb/native/saves/archive.hpp"

// An occupied, synthetic regional save. No user's battery file is read or
// modified by native-session acceptance tests.
inline eb::native::saves::SaveArchive native_session_save(eb::GameVersion version) {
    using namespace eb::native::saves;
    auto archive=SaveArchive::empty(version); archive.repair_integrity();
    PersistedState state;state.version=version;
    auto &g=state.game;
    g.favourite_thing[1]=1;g.text_speed=1;g.text_flavour=1;
    g.party_order={1};g.display_order={1};g.controlled_order={0};g.party_count=g.controlled_count=1;
    g.leader_x=6997;g.leader_y=7480;g.leader_direction=4;
    auto &c=state.characters[0];c.name={0x7e,0x95,0xa3,0xa3,0};
    c.values.level=20;c.values.maximum_hp=c.values.current_hp=c.values.target_hp=500;
    c.values.maximum_pp=c.values.current_pp=c.values.target_pp=200;
    c.values.base_offense=c.values.offense=40;c.values.base_defense=c.values.defense=20;
    c.values.base_speed=c.values.speed=10;c.values.base_vitality=c.values.vitality=5;
    c.values.base_iq=c.values.iq=10;
    archive.save(0,state,0);return archive;
}
