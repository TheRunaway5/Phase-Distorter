#include "eb/native/world_party_creation.hpp"

#include <stdexcept>

namespace eb::native {
namespace {
int signed_word(std::uint16_t value) {
  return value < 0x8000 ? int(value) : int(value) - 0x10000;
}
} // namespace
WorldPartyCreation::WorldPartyCreation(
    party::State &party, ActorWorld &actors, const WorldPartyData &data,
    WorldPartyState &formation, WorldParty &updater,
    PreparedActorState &prepared, PartyTrail &trail,
    const std::uint16_t &area_character_style)
    : party_(party), actors_(actors), data_(data), formation_(formation),
      updater_(updater), prepared_(prepared), trail_(trail),
      area_character_style_(area_character_style) {
  if (!updater.uses(party, actors, data, formation))
    throw std::invalid_argument(
        "Native party creation must share its updater's actual owners");
}
void WorldPartyCreation::check() const {
  if (failed_ || updater_.failed())
    throw std::logic_error(
        "Native party creation failed; replace this scene owner");
}
bool WorldPartyCreation::uses(
    const party::State &party, const ActorWorld &actors,
    const WorldPartyData &data, const WorldPartyState &formation,
    const WorldParty &updater, const PreparedActorState &prepared,
    const PartyTrail &trail, const std::uint16_t &style) const noexcept {
  return &party == &party_ && &actors == &actors_ && &data == &data_ &&
         &formation == &formation_ && &updater == &updater_ &&
         &prepared == &prepared_ && &trail == &trail_ &&
         &style == &area_character_style_;
}
void WorldPartyCreation::validate_formation() const {
  if (party_.party_count >= 6)
    throw std::invalid_argument(
        "Native party insertion requires fewer than six actors");
  for (unsigned i = 0; i < party_.party_count; ++i) {
    if (!party_.display_order[i] || party_.display_order[i] > 17 ||
        party_.controlled_order[i] >= 6 ||
        !actors_.actor_for_role(formation_.roles[i]))
      throw std::invalid_argument("Invalid native formation before insertion");
  }
  if (party_.display_order[party_.party_count])
    throw std::invalid_argument(
        "Native formation has no terminator at its declared count");
  if (trail_.next_write >= trail_.points.size() || area_character_style_ > 7)
    throw std::invalid_argument(
        "Invalid native party trail head or area character style");
}
std::unique_ptr<WorldPartyCreation::Operation>
WorldPartyCreation::begin_insert(unsigned member) {
  check();
  if (active_ || updater_.busy())
    throw std::logic_error("Native party already has an unfinished operation");
  (void)data_.initial(member);
  validate_formation();
  auto operation = std::unique_ptr<Operation>(new Operation(*this, member));
  active_ = operation.get();
  return operation;
}
std::unique_ptr<WorldPartyCreation::Operation>
WorldPartyCreation::begin_rebuild() {
  check();
  if (active_ || updater_.busy())
    throw std::logic_error("Native party already has an unfinished operation");
  if (trail_.next_write >= trail_.points.size() || area_character_style_ > 7)
    throw std::invalid_argument(
        "Invalid native party trail head or area character style");
  for (const auto member : party_.party_order) {
    if (!member)
      break;
    (void)data_.initial(member);
  }
  auto operation =
      std::unique_ptr<Operation>(new Operation(*this, std::nullopt));
  active_ = operation.get();
  return operation;
}
WorldPartyCreation::Operation::Operation(WorldPartyCreation &owner,
                                         std::optional<unsigned> member)
    : owner_(owner), single_member_(member) {
  created_.reserve(member ? 1 : 6);
}
WorldPartyCreation::Operation::~Operation() {
  if (owner_.active_ == this) {
    owner_.active_ = nullptr;
    if (!complete_)
      owner_.failed_ = true;
  }
}
void WorldPartyCreation::Operation::start_insertion(unsigned member) {
  owner_.validate_formation();
  (void)owner_.data_.initial(member);
  member_ = member;
  position_ = 0;
  phase_ = 1;
}
bool WorldPartyCreation::Operation::find_insertion() {
  while (position_ < owner_.party_.party_count) {
    const auto existing = owner_.party_.display_order[position_];
    if (member_ >= 5) {
      if (member_ <= existing)
        return true;
    } else {
      if (existing >= 5 || existing > member_)
        return true;
      // C0369B indexes ENTITY_VAR1 by membership ID, not formation role.
      // The authored role retains its actual variable even while vacant.
      const auto record = owner_.actors_.authored_variable(existing, 1);
      if (record >= 6)
        throw std::invalid_argument(
            "Party insertion role has invalid retained character mapping");
      if (owner_.party_.character(record + 1).afflictions[0] == 1)
        return true;
    }
    ++position_;
  }
  return true;
}
void WorldPartyCreation::Operation::insert() {
  const auto &initial = owner_.data_.initial(member_);
  auto role = unsigned(initial.preferred_role);
  if (owner_.actors_.actor_for_role(role))
    ++role; // Source tries exactly the next role, not the next free role.
  if (role >= 30 || owner_.actors_.actor_for_role(role))
    throw std::invalid_argument(
        "Native party creation's authored role is occupied");
  const auto record = role - 24;
  auto cursor = owner_.trail_.next_write;
  if (position_) {
    const auto previous =
        owner_.actors_.actor_for_role(owner_.formation_.roles[position_ - 1]);
    if (!previous)
      throw std::invalid_argument("Native party predecessor is missing");
    const auto mapped = owner_.actors_.actor(*previous).action().variables[1];
    if (mapped >= 6)
      throw std::invalid_argument(
          "Native party predecessor has invalid character mapping");
    cursor = owner_.formation_.trail_cursors[mapped];
  }
  if (cursor >= owner_.trail_.points.size())
    throw std::invalid_argument(
        "Native party character trail cursor is outside its ring");
  const auto &point = owner_.trail_.points[cursor ? cursor - 1 : 255];
  spawn_x_ = point.x;
  spawn_y_ = point.y;
  auto prepared = owner_.prepared_;
  prepared.x = spawn_x_;
  prepared.y = spawn_y_;
  // Bare CREATE_ENTITY initializes direction0; its caller does not apply
  // ambient prepared facing until the later party-startup service.
  prepared.direction = 0;
  prepared.variables[0] = member_ - 1;
  prepared.variables[1] = record;
  const auto sprite =
      owner_.area_character_style_ == 3 ? initial.small_sprite : initial.sprite;
  if (sprite == 0xffff)
    throw std::invalid_argument(
        "Native party member has no authored sprite for this area style");
  const auto spec =
      owner_.actors_.prepare_actor(sprite, initial.script, prepared);

  // These are source-visible mutations before CREATE and UPDATE_PARTY. A
  // later failure latches this owner; it never retries a half-created member.
  for (unsigned i = 5; i > position_; --i) {
    owner_.party_.display_order[i] = owner_.party_.display_order[i - 1];
    owner_.party_.controlled_order[i] = owner_.party_.controlled_order[i - 1];
    owner_.formation_.roles[i] = owner_.formation_.roles[i - 1];
  }
  owner_.party_.display_order[position_] = member_;
  ++owner_.party_.party_count;
  owner_.formation_.roles[position_] = role;
  owner_.party_.controlled_order[position_] = record;
  owner_.prepared_.variables[0] = member_ - 1;
  owner_.prepared_.variables[1] = record;
  owner_.formation_.trail_cursors[record] = cursor;
  const auto actor = owner_.actors_.create_authored(spec, {role, role + 1});
  if (!actor)
    throw std::logic_error("Native party creation lost its validated role");
  auto &context = owner_.actors_.actor(*actor).behavior;
  context.projected_x =
      signed_word(std::uint16_t(spawn_x_ - owner_.actors_.scene().camera_x));
  context.projected_y =
      signed_word(std::uint16_t(spawn_y_ - owner_.actors_.scene().camera_y));
  created_.push_back({std::uint8_t(member_), role, *actor});
  owner_.actors_.order_free_authored_roles();
  owner_.formation_.current_leader_role =
      owner_.data_.initial(owner_.party_.display_order[0]).preferred_role;
  owner_.updater_.refresh_guests();
  update_ = owner_.updater_.begin_update();
  phase_ = 2;
}
void WorldPartyCreation::Operation::finish_insertion() {
  owner_.prepared_.x = spawn_x_;
  owner_.prepared_.y = spawn_y_;
  // UPDATE_PARTY can run nested frames during dismount/window work. Preserve
  // their actor direction and prepared-variable changes at this boundary.
  owner_.prepared_.direction =
      owner_.actors_.actor(created_.back().actor).behavior.direction;
  update_.reset();
  if (single_member_) {
    complete_ = true;
    owner_.active_ = nullptr;
  } else {
    ++rebuild_index_;
    phase_ = 3;
  }
}
bool WorldPartyCreation::Operation::advance() {
  owner_.check();
  if (complete_)
    return true;
  if (service_)
    return false;
  try {
    while (!complete_ && !service_) {
      switch (phase_) {
      case 0:
        if (single_member_) {
          start_insertion(*single_member_);
        } else {
          owner_.party_.controlled_count = 0;
          owner_.party_.party_count = 0;
          owner_.party_.display_order.fill(0);
          owner_.party_.controlled_order.fill(0);
          owner_.formation_.roles.fill(0);
          phase_ = 3;
        }
        break;
      case 1:
        if (find_insertion())
          insert();
        break;
      case 2:
        if (update_->advance()) {
          finish_insertion();
        } else {
          service_ = {*update_->service() ==
                              WorldPartyService::RefreshMovementPolicy
                          ? WorldPartyCreationServiceKind::RefreshMovementPolicy
                          : WorldPartyCreationServiceKind::RefreshWindowPalette,
                      0};
        }
        break;
      case 3:
        if (rebuild_index_ < 6 && owner_.party_.party_order[rebuild_index_]) {
          start_insertion(owner_.party_.party_order[rebuild_index_]);
        } else {
          if (owner_.area_character_style_ > 7)
            throw std::invalid_argument(
                "Invalid native party area character style");
          owner_.actors_.appearance_scene().footstep_kind =
              owner_.area_character_style_;
          owner_.actors_.appearance_scene().footstep_override.reset();
          complete_ = true;
          owner_.active_ = nullptr;
        }
        break;
      default:
        throw std::logic_error("Invalid native party creation phase");
      }
    }
  } catch (...) {
    owner_.failed_ = true;
    throw;
  }
  return complete_;
}
void WorldPartyCreation::Operation::respond() {
  owner_.check();
  if (!service_ ||
      service_->kind == WorldPartyCreationServiceKind::CompareInsertionMember ||
      !update_)
    throw std::logic_error(
        "Native party creation has no pending update service");
  update_->respond();
  service_.reset();
}
void WorldPartyCreation::Operation::respond_comparison(bool unconscious) {
  owner_.check();
  if (!service_ ||
      service_->kind != WorldPartyCreationServiceKind::CompareInsertionMember)
    throw std::logic_error(
        "Native party creation has no pending insertion comparison");
  if (position_ >= owner_.party_.party_count ||
      owner_.party_.display_order[position_] != service_->existing_member) {
    owner_.failed_ = true;
    throw std::logic_error(
        "Native party formation changed during insertion comparison");
  }
  service_.reset();
  if (unconscious) {
    try {
      insert();
    } catch (...) {
      owner_.failed_ = true;
      throw;
    }
  } else {
    ++position_;
  }
}
} // namespace eb::native
