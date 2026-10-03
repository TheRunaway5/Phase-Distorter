#include "eb/native/world_startup.hpp"
#include "eb/native/party/condition.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
void require(bool value, const char *message) {
  if (!value) throw std::logic_error(message);
}
std::uint16_t word(const std::uint8_t *p) {
  return p[0] | std::uint16_t(p[1]) << 8;
}
int signed_word(std::uint16_t value) {
  return value < 0x8000 ? int(value) : int(value) - 0x10000;
}
} // namespace
WorldStartupData::WorldStartupData(std::span<const std::uint8_t> image,
                                   GameVersion version) : version_(version) {
  require(version == GameVersion::US || version == GameVersion::JP,
          "Startup content requires a supported region");
  const unsigned table = version == GameVersion::JP ? 0x15f5a5 : 0x15f645;
  const unsigned sprites = version == GameVersion::JP ? 0x3f8eb : 0x3fdbd;
  require(image.size() >= table + 200 && image.size() >= sprites + 8,
          "Truncated startup delivery content");
  for (unsigned i = 0; i < deliveries_.size(); ++i) {
    deliveries_[i] = {word(image.data() + table + i * 20),
                      word(image.data() + table + i * 20 + 2)};
    require(deliveries_[i].event_flag >= 1 && deliveries_[i].event_flag <= 1024,
            "Startup delivery flag is outside authored event storage");
  }
  for (unsigned i = 0; i < fallback_sprites_.size(); ++i)
    fallback_sprites_[i] = word(image.data() + sprites + i * 2);
}
std::vector<ActorId> WorldStartupData::restore_deliveries(
    ActorWorld &actors, PreparedActorState &prepared,
    std::span<const std::uint8_t> flags, story::RandomState &random) const {
  require(actors.version() == version_ && !actors.in_tick() && flags.size() == 128 &&
              actors.scene().event_flags.data() == flags.data(),
          "Delivery restoration requires idle actors and their actual story flags");
  std::vector<ActorId> created;
  for (unsigned i = 0; i < deliveries_.size(); ++i) {
    const auto &delivery = deliveries_[i];
    const unsigned bit = delivery.event_flag - 1;
    if (!(flags[bit / 8] & (1u << (bit % 8)))) continue;
    prepared.variables[0] = std::uint16_t(i);
    const auto sprite = delivery.sprite ? delivery.sprite :
        fallback_sprites_[story::next_random(random) & 3];
    prepared.priority = 1;
    auto creation = prepared;
    creation.x = creation.y = 0;
    creation.direction = 0;
    const auto id = actors.create_authored(actors.prepare_actor(sprite, 500, creation));
    require(id.has_value(), "Delivery restoration exhausted its authored role domain");
    created.push_back(*id);
  }
  return created;
}
struct WorldStartup::Operation::State {
  WorldStartup &owner;
  saves::ContinueSnapshot restored;
  WorldStartupStage stage = WorldStartupStage::Restore;
  std::optional<WorldStartupService> pending;
  std::unique_ptr<dialogue::WindowHost::Operation> windows;
  std::unique_ptr<dialogue::Conversation> conversation;
  std::unique_ptr<WorldRuntime::Operation> runtime;
  std::unique_ptr<WorldPartyCreation::Operation> creation;
  std::unique_ptr<WorldMapLoad::Operation> map;
  std::unique_ptr<dialogue::WindowGraphics::Operation> graphics;
  std::unique_ptr<story::PartyFormation::TailOperation> tail;
  std::vector<WorldPartyCreatedActor> created;
  bool executing{};
  State(WorldStartup &o, saves::ContinueSnapshot s)
      : owner(o), restored(std::move(s)) {}
  void restore() {
    auto &o = owner.owners_;
    const auto &s = restored.state;
    const auto &g = s.game;
    saves::restore_party(s, o.party);
    std::copy(s.event_flags.begin(), s.event_flags.end(),
              o.windows.state().event_flags.begin());
    auto &leader = o.interactions.state();
    leader.leader_x = g.leader_x;
    leader.leader_y = g.leader_y;
    leader.leader_direction = g.leader_direction;
    leader.walking_style = g.walking_style;
    o.control.moved_this_tick = g.reserved_90;
    leader.movement_flags = g.reserved_92;
    o.control.x_fraction = g.reserved_80;
    o.control.y_fraction = g.reserved_84;
    o.control.trodden_surface_flags = g.trodden_tile_type;
    o.control.automatic_mode = g.reserved_b0;
    o.control.automatic_ticks = g.reserved_b2;
    o.control.automatic_restore_style = word(g.reserved_b4.data());
    o.trail.next_write = g.reserved_88;
    o.formation.current_leader_role = g.current_party_members;
    o.formation.first_guest = {g.guest_1, g.guest_1_hp};
    o.formation.second_guest = {g.guest_2, g.guest_2_hp};
    for (unsigned i = 0; i < 6; ++i) {
      o.formation.roles[i] = word(g.reserved_a2.data() + 2 * i);
      const auto &c = s.characters[i];
      o.formation.trail_cursors[i] = c.position_index;
      o.formation.character_startup[i] = {
          c.reserved_53_59[0], c.reserved_53_59[3], c.reserved_53_59[2],
          word(c.reserved_92_93.data())};
      o.formation.selected_styles[i] = c.reserved_53_59[1];
      o.formation.last_trail_styles[i] = c.reserved_65;
    }
    o.clock.flavor = g.text_flavour;
    o.session.elapsed_timer = g.elapsed_timer;
    // FILE_MENU_LOOP's actual Continue arm follows LOAD_GAME_SLOT.
    o.queue.reset_after_restore();
    o.hotspots.restore(g, owner.resources_);
    o.session.respawn = restored.handoff.respawn;
  }
};
WorldStartup::WorldStartup(const saves::ContinueResources &resources,
                           std::shared_ptr<const dialogue::Program> program,
                           WorldStartupOwners owners)
    : resources_(resources), program_(std::move(program)), owners_(owners) {
  auto &o = owners_;
  require(program_ && program_->version() == resources_.version() &&
              o.party.version() == resources_.version() &&
              o.actors.version() == resources_.version(),
          "Startup requires matching imported content and live regions");
  require(o.runtime.uses(o.windows, o.party, o.actors, o.clock, o.spawn) &&
              o.runtime.uses(o.interactions) &&
              o.runtime.compatible_world_state(o.formation, o.trail, o.control,
                                                o.maintenance, o.queue, o.following) &&
              &o.interactions.actors() == &o.actors &&
              &o.interactions.windows() == &o.windows &&
              program_->shares_content_with(o.interactions.program()) &&
              o.runtime.uses(o.inventory) &&
              o.refresh.bound_to(o.party, o.actors, o.interactions, o.clock) &&
              o.refresh.uses(o.updater) &&
              &o.area_character_style == &o.interactions.state().movement_flags &&
              o.bootstrap.uses(o.actors, o.party, o.formation, o.trail,
                               o.control, o.maintenance, o.following) &&
              o.creation.uses(o.party, o.actors, o.party_data, o.formation,
                              o.updater, o.spawn.prepared, o.trail,
                              o.area_character_style) &&
              o.hotspots.uses(o.interactions.state(), o.clock,
                              o.actors.appearance_scene(), o.queue),
          "Startup must borrow its real runtime, party, flags and service owners");
  preflight();
}
void WorldStartup::bind_map_load(WorldMapLoad &map,
    const WorldStartupData &data, dialogue::WindowGraphics &graphics) {
  preflight();
  const auto &o = owners_;
  require(!map_load_ && map.uses(o.runtime, o.actors, o.enemies, o.interactions,
                               o.spawn, o.windows, o.scene_colors) &&
              !map.busy() && !map.failed() && map.uses(o.random) && map.uses(graphics) && data.version() == resources_.version() &&
              o.windows.uses(graphics),
          "Startup map tail must use its actual map, content and window artwork");
  require(bool(program_->resolve(resources_.dialogue().buzz_buzz)),
          "Startup Buzz Buzz dialogue is absent from imported content");
  map_load_ = &map;
  startup_data_ = &data;
  graphics_ = &graphics;
}
void WorldStartup::preflight() const {
  const auto &o = owners_;
  require(!failed_ && !active_, "Startup owner is active or failed");
  o.runtime.require_idle();
  require(o.runtime.uses(o.windows, o.party, o.actors, o.clock, o.spawn) &&
              o.runtime.uses(o.inventory) && o.runtime.uses(o.interactions) &&
              o.runtime.compatible_world_state(o.formation, o.trail, o.control,
                                                o.maintenance, o.queue, o.following),
          "Startup runtime bindings changed after construction");
  require(!o.actors.in_tick() && !o.creation.busy() && !o.creation.failed() &&
              !o.updater.busy() && !o.updater.failed() &&
              !o.inventory.busy() && !o.inventory.failed() &&
              !o.queue.busy() && !o.queue.failed() && !o.enemies.busy() &&
              o.actors.uses_enemies(o.enemies),
          "Startup cannot consume unfinished or foreign world work");
  if (map_load_)
    require(!map_load_->busy() && !map_load_->failed() && o.windows.uses(*graphics_),
            "Startup map or window artwork owner is unavailable");
  const auto &flags = o.windows.state().event_flags;
  const auto bound = o.actors.scene().event_flags;
  require(flags.size() == 128 && bound.size() == flags.size() &&
              bound.data() == flags.data(),
          "Startup lost the authoritative event flag allocation");
}
std::unique_ptr<WorldStartup::Operation>
WorldStartup::begin(saves::ContinueSnapshot snapshot) {
  preflight();
  // Recompute from immutable imported resources rather than trusting mutable
  // handoff fields supplied beside the snapshot. Validation precedes restore.
  snapshot.handoff = saves::prepare_continue(snapshot.state, resources_);
  const auto &g = snapshot.state.game;
  require(g.controlled_count >= 1 && g.controlled_count <= 6 &&
              snapshot.handoff.party_member_count > 0 && g.text_flavour >= 1 &&
              g.text_flavour <= 5 && g.reserved_92 <= 7,
          "Saved startup values are outside their owned source domains");
  for (unsigned i = 0; i < g.controlled_count; ++i)
    require(g.party_order[i] >= 1 && g.party_order[i] <= 6,
            "Saved chosen-party inventory selector is invalid");
  for (unsigned i = 0; i < snapshot.handoff.party_member_count; ++i)
    (void)owners_.party_data.initial(snapshot.handoff.party_members[i]);
  require(bool(program_->resolve(resources_.dialogue().pre_game_start)),
          "Startup dialogue is absent from the actual imported program");
  auto op = std::unique_ptr<Operation>(
      new Operation(std::make_unique<Operation::State>(*this, std::move(snapshot))));
  active_ = op.get();
  return op;
}
WorldStartup::Operation::Operation(std::unique_ptr<State> state)
    : state_(std::move(state)) {}
WorldStartup::Operation::~Operation() {
  if (state_->owner.active_ == this) {
    state_->owner.active_ = nullptr;
    // This owner has not reached a playable session. Discarding its consumed
    // prefix must not permit it to restore/replay into the same scene again.
    state_->owner.failed_ = true;
  }
}
WorldStartupStage WorldStartup::Operation::stage() const noexcept {
  return state_->stage;
}
const std::optional<WorldStartupService> &
WorldStartup::Operation::service() const noexcept { return state_->pending; }
WorldRuntime::Operation *WorldStartup::Operation::runtime_operation() noexcept {
  return state_->runtime.get();
}
std::span<const WorldPartyCreatedActor>
WorldStartup::Operation::created_party() const noexcept { return state_->created; }
dialogue::Progress WorldStartup::Operation::advance(unsigned budget) {
  auto &s = *state_;
  auto &o = s.owner.owners_;
  require(!s.owner.failed_ && !s.executing, "Startup is failed or reentrant");
  if (s.stage == WorldStartupStage::Complete) return dialogue::Progress::Finished;
  if (s.pending && *s.pending != WorldStartupService::Runtime)
    return dialogue::Progress::Suspended;
  s.executing = true;
  try {
    while (budget--) {
      if (s.runtime) {
        const auto p = s.runtime->advance(1);
        if (p == dialogue::Progress::Suspended) {
          s.pending = WorldStartupService::Runtime;
          s.executing = false;
          return p;
        }
        s.pending.reset();
        if (p != dialogue::Progress::Finished) continue;
        s.runtime.reset();
        if (s.windows) s.windows->respond();
        else if (s.conversation) {
          s.conversation.reset();
          s.stage = s.stage == WorldStartupStage::BuzzBuzzDialogue
                        ? WorldStartupStage::RestoreDeliveries
                        : WorldStartupStage::ResetWorld;
        }
        continue;
      }
      if (s.map) {
        if (s.map->advance(1)) {
          s.map.reset();
          s.stage = WorldStartupStage::BuzzBuzzDialogue;
          s.conversation = std::make_unique<dialogue::Conversation>(s.owner.program_, o.windows);
          s.conversation->start(*s.owner.program_->resolve(s.owner.resources_.dialogue().buzz_buzz));
          s.runtime = o.runtime.begin(*s.conversation);
        }
        continue;
      }
      // A caller may only service our owned continuation while Startup holds
      // these owners. Detect competing Runtime work before any phase writes.
      o.runtime.require_idle();
      require(o.runtime.uses(o.inventory) && o.runtime.uses(o.interactions) &&
                  o.runtime.compatible_world_state(o.formation, o.trail, o.control,
                                                    o.maintenance, o.queue, o.following),
              "Startup lost its exact runtime service bindings");
      switch (s.stage) {
      case WorldStartupStage::Restore:
        s.restore();
        s.stage = WorldStartupStage::CloseWindows;
        s.windows = o.windows.begin({dialogue::WindowAction::CloseAll, std::nullopt, {}, 0});
        break;
      case WorldStartupStage::CloseWindows:
        if (s.windows->advance() == dialogue::OutputProgress::Complete) {
          s.windows.reset();
          s.stage = WorldStartupStage::RescanItems;
        } else if (s.windows->effect())
          s.runtime = o.runtime.begin(*s.windows->effect());
        break;
      case WorldStartupStage::RescanItems:
        o.inventory.rescan_transformations();
        s.stage = WorldStartupStage::ConfigureText;
        break;
      case WorldStartupStage::ConfigureText:
        o.windows.output().policy().text_speed = s.restored.handoff.text.selected_speed;
        o.windows.prompt_state().text_speed_based_wait = s.restored.handoff.text.wait;
        o.clock.hp_speed = s.restored.handoff.text.hp_meter_speed;
        s.stage = WorldStartupStage::PreGameDialogue;
        s.conversation = std::make_unique<dialogue::Conversation>(s.owner.program_, o.windows);
        s.conversation->start(*s.owner.program_->resolve(s.owner.resources_.dialogue().pre_game_start));
        s.runtime = o.runtime.begin(*s.conversation);
        break;
      case WorldStartupStage::PreGameDialogue:
        throw std::logic_error("Startup lost its actual pre-game conversation");
      case WorldStartupStage::ResetWorld: {
        o.runtime.require_idle();
        const auto old = o.actors.actors();
        for (const auto id : old) o.interactions.detach(id);
        o.actors.reset_scripts();
        o.actors.initialize_scene_objects();
        o.clock.action_scripts_disabled = 0;
        o.windows.prompt_state().battle_mode = 0;
        o.session.input_disable_frames = 0;
        o.spawn.npcs = NpcSpawnMode::Initial;
        o.spawn.enemies = true;
        o.enemies.set_maximum(10);
        o.actors.appearance_scene().battle_swirl_ticks = 0;
        o.queue.initialize_world();
        o.maintenance.auto_sector_music = 1;
        o.session.teleport_style = 0;
        o.actors.appearance_scene().teleport_destination = 0;
        o.session.fading_actor.reset();
        s.stage = WorldStartupStage::CreateController;
        break;
      }
      case WorldStartupStage::CreateController:
        o.bootstrap.create_controller_and_initialize(o.spawn.prepared);
        s.creation = o.creation.begin_rebuild();
        s.stage = WorldStartupStage::RebuildParty;
        break;
      case WorldStartupStage::RebuildParty:
        if (s.tail) {
          if (s.tail->advance() == dialogue::Progress::Suspended) {
            s.pending = WorldStartupService::BicycleDismount;
            s.executing = false;
            return dialogue::Progress::Suspended;
          }
          s.tail.reset();
          s.creation->respond();
        }
        if (s.creation->advance()) {
          s.created.assign(s.creation->created().begin(), s.creation->created().end());
          s.creation.reset();
          s.stage = WorldStartupStage::ResetPalettes;
        } else {
          const auto kind = s.creation->service()->kind;
          require(kind != WorldPartyCreationServiceKind::CompareInsertionMember,
                  "Startup cannot invent a party insertion comparison");
          s.tail = o.refresh.begin_tail(
              kind == WorldPartyCreationServiceKind::RefreshMovementPolicy
                  ? WorldPartyService::RefreshMovementPolicy
                  : WorldPartyService::RefreshWindowPalette);
        }
        break;
      case WorldStartupStage::ResetPalettes:
        o.scene_colors.fill({});
        o.windows.publish_palette(o.clock.flavor,
            party::last_controlled_status(o.party) != 0,
            o.clock.disabled_transitions != 0);
        // C47F87 publishes the same first two palettes used by window output
        // into the scene's palette owner after the complete scene clear.
        for (unsigned i = 0; i < o.windows.palette().size(); ++i) {
          const auto color = o.windows.palette()[i];
          o.scene_colors[i] = {std::uint8_t(color & 31),
                              std::uint8_t((color >> 5) & 31),
                              std::uint8_t((color >> 10) & 31)};
        }
        s.stage = s.owner.map_load_ ? WorldStartupStage::InitializeMap
                                    : WorldStartupStage::MapPreparationRequired;
        break;
      case WorldStartupStage::InitializeMap:
        s.owner.map_load_->initialize_overworld();
        s.map = s.owner.map_load_->begin({o.interactions.state().leader_x,
                                         o.interactions.state().leader_y});
        s.stage = WorldStartupStage::LoadMap;
        break;
      case WorldStartupStage::LoadMap:
      case WorldStartupStage::BuzzBuzzDialogue:
        throw std::logic_error("Startup lost its map or Buzz Buzz continuation");
      case WorldStartupStage::RestoreDeliveries:
        s.owner.startup_data_->restore_deliveries(o.actors, o.spawn.prepared,
                                                  o.windows.state().event_flags,
                                                  o.random);
        s.stage = WorldStartupStage::PrepareWindowGraphics;
        break;
      case WorldStartupStage::PrepareWindowGraphics: {
        require(o.windows.uses(*s.owner.graphics_), "Startup lost its window artwork owner");
        std::array<std::vector<std::uint8_t>, 4> runs;
        dialogue::PartyNameInputs names;
        for (unsigned i = 0; i < 4; ++i) {
          const auto name = o.party.name_field(i + 1);
          runs[i].assign(name.begin(), name.end());
          if (o.party.version() == GameVersion::US &&
              std::find(runs[i].begin(), runs[i].end(), 0) == runs[i].end()) {
            const auto &c = o.party.character(i + 1);
            runs[i].push_back(c.level);
            for (unsigned byte = 0; byte < 4; ++byte)
              runs[i].push_back(std::uint8_t(c.experience >> (byte * 8)));
          }
          names.names[i] = runs[i];
        }
        s.owner.graphics_->prepare(names, o.clock.flavor);
        s.graphics = s.owner.graphics_->begin_publication(
            o.party.version() == GameVersion::JP ? dialogue::ArtworkPublication::All
                                                : dialogue::ArtworkPublication::GeneratedThenCommon);
        s.stage = WorldStartupStage::PublishWindowGraphics;
        break;
      }
      case WorldStartupStage::PublishWindowGraphics:
        if (s.graphics->advance(1) == dialogue::Progress::Finished) {
          s.graphics.reset();
          s.stage = WorldStartupStage::PositionParty;
        } else if (s.graphics->effect()) {
          require(s.graphics->effect()->delivery == dialogue::ArtworkDelivery::Copy,
                  "Startup window artwork unexpectedly requires synchronized transfer");
          // This response performs the actual atlas copy and updates subscribed
          // window cells. It is not an acknowledgment of external work.
          s.graphics->respond(dialogue::ArtworkDisposition::Published);
        }
        break;
      case WorldStartupStage::PositionParty:
        s.owner.position_and_project_party();
        o.runtime.refresh_world_capture();
        s.stage = WorldStartupStage::Complete;
        s.owner.active_ = nullptr;
        s.executing = false;
        return dialogue::Progress::Finished;
      case WorldStartupStage::Complete:
        s.executing = false;
        return dialogue::Progress::Finished;
      case WorldStartupStage::MapPreparationRequired:
        s.pending = WorldStartupService::MapPreparation;
        s.executing = false;
        return dialogue::Progress::Suspended;
      }
    }
    s.executing = false;
    return dialogue::Progress::BudgetExhausted;
  } catch (...) {
    s.executing = false;
    s.owner.failed_ = true;
    throw;
  }
}
void WorldStartup::position_and_project_party() {
  require(!failed_, "Failed startup cannot position the party");
  auto &o = owners_;
  o.runtime.require_idle();
  require(!o.actors.in_tick(), "Party positioning cannot interrupt actor work");
  // Resolve every selected role before mutation; the source's valid domain
  // contains a real actor for each nonzero display-list entry.
  std::array<std::optional<ActorId>, 6> selected;
  for (unsigned i = 0; i < 6; ++i)
    if (o.party.display_order[i]) {
      selected[i] = o.actors.actor_for_role(o.formation.roles[i]);
      require(bool(selected[i]), "Party positioning lacks its selected actor");
    }
  const auto &leader = o.interactions.state();
  for (const auto id : selected) if (id) {
    auto &actor = o.actors.actor(*id);
    actor.action().position[0] = std::uint32_t(leader.leader_x) << 16 |
                                 (actor.action().position[0] & 0xffff);
    actor.action().position[1] = std::uint32_t(leader.leader_y) << 16 |
                                 (actor.action().position[1] & 0xffff);
    actor.behavior.projected_x = signed_word(std::uint16_t(leader.leader_x - o.actors.scene().camera_x));
    actor.behavior.projected_y = signed_word(std::uint16_t(leader.leader_y - o.actors.scene().camera_y));
  }
}
} // namespace eb::native
