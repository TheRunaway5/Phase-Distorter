#pragma once
#include "eb/native/world_bootstrap.hpp"

namespace bootstrap_test {
using namespace eb::native;
struct Fixture {
  WorldBootstrapData data;
  WalkingData walking;
  ActorWorld actors;
  party::State party;
  WorldPartyState formation;
  PartyTrail trail;
  WorldControlState control;
  WorldMaintenanceState maintenance;
  WorldPartyFollowingState following;
  std::array<std::uint8_t, 128> flags;
  WorldBootstrap bootstrap;
  PreparedActorState prepared{
      0x1234, 0x9876, 0xfedc, 7, {11, 22, 33, 44, 55, 66, 77, 88}, 99, 0xabcd};
  Fixture(std::span<const std::uint8_t> image, eb::GameVersion version,
          std::shared_ptr<SpriteResources> sprites,
          std::shared_ptr<const ActionScriptData> scripts, bool pajamas)
      : data(image, version), walking(image, version),
        actors(std::move(sprites), std::move(scripts), version), party(version),
        bootstrap(data, walking, actors, party, formation, trail, control,
                  maintenance, following) {
    flags.fill(0xa5);
    const unsigned bit = data.pajamas_flag() - 1;
    flags[bit / 8] = (flags[bit / 8] & ~(1 << (bit % 8))) | unsigned(pajamas)
                                                                << (bit % 8);
    actors.scene().event_flags = flags;
    actors.scene().camera_x = 0x1122;
    actors.scene().camera_y = 0xaabb;
    party.party_order = {4, 2, 1, 3, 9, 17};
    party.display_order = {3, 4, 17, 1, 9, 2};
    party.controlled_order = {2, 3, 5, 0, 4, 1};
    party.party_count = 6;
    party.controlled_count = 4;
    party.party_status = 0xac;
    party.money_carried = 0x10203040;
    party.bank_balance = 0x87654321;
    formation.current_leader_role = 26;
    formation.roles = {26, 27, 29, 24, 28, 25};
    formation.trail_cursors = {11, 22, 33, 44, 55, 66};
    formation.hp_alert_shown = {0xffff, 1, 0, 0x8000, 7, 0x1234};
    formation.first_guest = {9, 1234};
    formation.second_guest = {17, 4567};
    trail.next_write = 0xff;
    for (unsigned i = 0; i < trail.points.size(); ++i)
      trail.points[i] = {
          std::uint16_t(0x7831 + i * 17), std::uint16_t(0xfe10 + i * 23),
          std::uint16_t(i * 3),           std::uint16_t(i % 14),
          std::uint16_t(i % 8),           std::uint16_t(0xa500 + i)};
    control.x_fraction = 0x1234;
    control.y_fraction = 0x5678;
    control.moved_this_tick = 9;
    control.automatic_mode = 3;
    control.automatic_ticks = 0xbeef;
    control.automatic_restore_style = 13;
    control.trodden_surface_flags = 7;
    control.camera_moved = true;
    control.camera_focus = CameraTarget{AuthoredRoleRef{7}};
    control.direction_interval_ticks = 987;
    control.direction_interval_previous_mode = 2;
    control.bicycle_turn_frames = 654;
    maintenance.possessed_players = 7;
    maintenance.enemy_touched = 8;
    control.encounter.mode = 9;
    maintenance.last_sector_x = 10;
    maintenance.last_sector_y = 11;
    maintenance.auto_sector_music = 12;
    maintenance.overworld_status_suppression = 13;
    following.pajamas = 0x9876;
    for (unsigned i = 1; i <= 6; ++i) {
      party.character(i).current_hp = i * 123;
      party.character(i).afflictions[0] = i;
    }
  }
};
} // namespace bootstrap_test
