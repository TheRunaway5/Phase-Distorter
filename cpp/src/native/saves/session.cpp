#include "eb/native/saves/session.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::saves {
namespace {
std::uint16_t word(const std::uint8_t *p) {
  return p[0] | std::uint16_t(p[1]) << 8;
}
std::uint32_t dword(const std::uint8_t *p) {
  return word(p) | std::uint32_t(word(p + 2)) << 16;
}
std::uint16_t pixels(std::uint16_t tiles) {
  return static_cast<std::uint16_t>(tiles * 8u);
}
std::span<const std::uint8_t> table(std::span<const std::uint8_t> image,
                                    std::size_t at, std::size_t size) {
  if (at > image.size() || size > image.size() - at)
    throw std::invalid_argument("Truncated native continue resources");
  return image.subspan(at, size);
}
template <class Source, class Destination>
void copy_field(const Source &from, Destination &&to) {
  std::copy_n(from.begin(), to.size(), to.begin());
}
std::array<std::uint8_t, 4> content_reference(std::uint32_t value) {
  return {static_cast<std::uint8_t>(value),
          static_cast<std::uint8_t>(value >> 8),
          static_cast<std::uint8_t>(value >> 16),
          static_cast<std::uint8_t>(value >> 24)};
}
constexpr std::array steps{ContinueStep::CloseMenuWindows,
                           ContinueStep::RebuildTimedItemTransformations,
                           ContinueStep::ConfigureTextTiming,
                           ContinueStep::PreGameStartDialogue,
                           ContinueStep::ResetWorldActorsAndGraphics,
                           ContinueStep::InitializeWorldControl,
                           ContinueStep::RebuildPartyActors,
                           ContinueStep::ResetScenePalettes,
                           ContinueStep::PrepareMapAndActivateActors,
                           ContinueStep::BuzzBuzzDialogue,
                           ContinueStep::RestoreTimedDeliveryActors,
                           ContinueStep::LoadWindowGraphics,
                           ContinueStep::PositionAndProjectParty,
                           ContinueStep::FirstActorTick,
                           ContinueStep::BeginFadeIn,
                           ContinueStep::PublishFirstFrame};
} // namespace

ContinueResourceLayout continue_resource_layout(GameVersion version) {
  switch (version) {
  case GameVersion::US:
    return {0x15f2fb, 0x3fb1f, 0x15f5f5};
  case GameVersion::JP:
    return {0x15f25b, 0x3f664, 0x15f555};
  }
  throw std::invalid_argument("Unsupported native continue region");
}
ContinueResources::ContinueResources(std::span<const std::uint8_t> assets,
                                     GameVersion version)
    : version_(version) {
  const auto l = continue_resource_layout(version);
  const auto hotspots = table(assets, l.hotspots, hotspot_count * 8);
  const auto meters = table(assets, l.hp_meter_speeds, 12);
  const auto initial = table(assets, l.initial_stats, 80);
  dialogue_ = version == GameVersion::JP
                  ? BootstrapDialogue{content_reference(0xc93bf3),
                                      content_reference(0xc50425),
                                      content_reference(0xc5014f)}
                  : BootstrapDialogue{content_reference(0xc7de2b),
                                      content_reference(0xc5ea35),
                                      content_reference(0xc5e70b)};
  for (unsigned i = 0; i < hotspots_.size(); ++i)
    for (unsigned j = 0; j < 4; ++j)
      hotspots_[i][j] = word(hotspots.data() + i * 8 + j * 2);
  for (unsigned i = 0; i < meter_speeds_.size(); ++i)
    meter_speeds_[i] = dword(meters.data() + i * 4);
  new_game_.respawn = {pixels(word(initial.data())),
                       pixels(word(initial.data() + 2))};
  new_game_.money = word(initial.data() + 4);
  for (unsigned i = 0; i < 4; ++i) {
    const auto *p = initial.data() + i * 20;
    auto &character = new_game_.characters[i];
    character.level = word(p + 6);
    character.additional_experience = word(p + 8);
    std::copy_n(p + 10, 10, character.starting_items.begin());
  }
}
Hotspot ContinueResources::hotspot(std::uint8_t id, std::uint8_t mode,
                                   std::uint32_t reference) const {
  if (id >= hotspot_count)
    throw std::out_of_range("Saved hotspot ID is outside authored content");
  const auto &h = hotspots_[id];
  return {mode,         pixels(h[0]), pixels(h[1]),
          pixels(h[2]), pixels(h[3]), reference};
}
TextTiming ContinueResources::text_timing(std::uint8_t speed) const {
  if (speed < 1 || speed > 3)
    throw std::out_of_range(
        "Saved text speed must be 1..3 before native continuation");
  return {static_cast<std::uint16_t>(speed - 1),
          static_cast<std::uint16_t>(speed == 3 ? 0 : speed * 30),
          meter_speeds_[speed - 1]};
}
std::span<const ContinueStep> continue_steps() noexcept { return steps; }
ContinueHandoff prepare_continue(const PersistedState &state,
                                 const ContinueResources &resources) {
  if (state.version != resources.version())
    throw std::invalid_argument(
        "Native continue state/resource region mismatch");
  if (!state.occupied())
    throw std::invalid_argument(
        "Empty save requires new-game initialization, not continuation");
  const auto &g = state.game;
  ContinueHandoff result;
  result.respawn = {g.leader_x, g.leader_y};
  result.map.center = result.respawn;
  result.map.scroll = {static_cast<std::uint16_t>(g.leader_x - 128),
                       static_cast<std::uint16_t>(g.leader_y - 112)};
  result.map.top_left_tiles = {
      static_cast<std::uint16_t>((g.leader_x >> 3) - 16),
      static_cast<std::uint16_t>((g.leader_y >> 3) - 14)};
  result.map.sector_x = g.leader_x >> 8;
  result.map.sector_y = g.leader_y >> 7;
  result.leader_direction = g.leader_direction;
  for (unsigned i = 0; i < 2; ++i)
    if (g.hotspot_modes[i])
      result.hotspot_updates[i] =
          resources.hotspot(g.hotspot_ids[i], g.hotspot_modes[i],
                            g.hotspot_content_references[i]);
  result.text = resources.text_timing(g.text_speed);
  for (const auto member : g.party_order) {
    if (!member)
      break;
    result.party_members[result.party_member_count++] = member;
  }
  return result;
}
void restore_party(const PersistedState &s, party::State &live) {
  if (s.version != live.version())
    throw std::invalid_argument("Native party restore region mismatch");
  for (unsigned i = 0; i < 6; ++i) {
    live.character(i + 1) = s.characters[i].values;
    auto &c = live.character(i + 1);
    const auto &stored = s.characters[i];
    c.miss_rate = stored.miss_rate;
    c.boosted_speed = stored.boosted_speed;
    c.boosted_guts = stored.boosted_guts;
    c.boosted_vitality = stored.boosted_vitality;
    c.boosted_iq = stored.boosted_iq;
    c.boosted_luck = stored.boosted_luck;
    copy_field(s.characters[i].name, live.name_field(i + 1));
  }
  const auto &g = s.game;
  copy_field(g.mother2_player_name,
             live.name_field(party::NameField::Mother2Player));
  copy_field(g.earthbound_player_name,
             live.name_field(party::NameField::EarthBoundPlayer));
  copy_field(g.pet_name, live.name_field(party::NameField::Pet));
  copy_field(g.favourite_food,
             live.name_field(party::NameField::FavouriteFood));
  copy_field(g.favourite_thing,
             live.name_field(party::NameField::FavouriteThing));
  live.party_order = g.party_order;
  live.controlled_order = g.controlled_order;
  live.display_order = g.display_order;
  live.party_count = g.party_count;
  live.controlled_count = g.controlled_count;
  live.party_status = g.party_status;
  live.auto_fight = g.auto_fight;
  live.party_psi = g.party_psi;
  live.money_carried = g.money_carried;
  live.bank_balance = g.bank_balance;
  live.battle_money_deposited = 0;
  for (unsigned i = 0; i < g.reserved_c4.size(); ++i)
    live.battle_money_deposited |= std::uint32_t(g.reserved_c4[i]) << (8 * i);
}
PersistedState capture_party(const party::State &live, PersistedState s) {
  if (s.version != live.version())
    throw std::invalid_argument("Native party capture region mismatch");
  for (unsigned i = 0; i < 6; ++i) {
    s.characters[i].values = live.character(i + 1);
    const auto &c = live.character(i + 1);
    auto &stored = s.characters[i];
    stored.miss_rate = c.miss_rate;
    stored.boosted_speed = c.boosted_speed;
    stored.boosted_guts = c.boosted_guts;
    stored.boosted_vitality = c.boosted_vitality;
    stored.boosted_iq = c.boosted_iq;
    stored.boosted_luck = c.boosted_luck;
    s.characters[i].name.fill(0);
    const auto name = live.name_field(i + 1);
    std::copy(name.begin(), name.end(), s.characters[i].name.begin());
  }
  auto &g = s.game;
  copy_field(live.name_field(party::NameField::Mother2Player),
             g.mother2_player_name);
  copy_field(live.name_field(party::NameField::EarthBoundPlayer),
             g.earthbound_player_name);
  copy_field(live.name_field(party::NameField::Pet), g.pet_name);
  copy_field(live.name_field(party::NameField::FavouriteFood),
             g.favourite_food);
  g.favourite_thing.fill(0);
  const auto favourite = live.name_field(party::NameField::FavouriteThing);
  std::copy(favourite.begin(), favourite.end(), g.favourite_thing.begin());
  g.party_order = live.party_order;
  g.controlled_order = live.controlled_order;
  g.display_order = live.display_order;
  g.party_count = live.party_count;
  g.controlled_count = live.controlled_count;
  g.party_status = live.party_status;
  g.auto_fight = live.auto_fight;
  g.party_psi = live.party_psi;
  g.money_carried = live.money_carried;
  g.bank_balance = live.bank_balance;
  for (unsigned i = 0; i < g.reserved_c4.size(); ++i)
    g.reserved_c4[i] = std::uint8_t(live.battle_money_deposited >> (8 * i));
  return s;
}
Session::Session(SaveArchive archive,
                 std::shared_ptr<const ContinueResources> resources)
    : archive_(std::move(archive)), resources_(std::move(resources)) {
  if (!resources_ || archive_.version() != resources_->version())
    throw std::invalid_argument(
        "Native save session requires same-region continue resources");
}
IntegrityReport Session::repair_integrity() noexcept {
  selected_.reset();
  return archive_.repair_integrity();
}
ContinueSnapshot Session::continue_slot(unsigned slot) {
  auto snapshot = archive_.load(slot);
  auto handoff = prepare_continue(snapshot, *resources_);
  selected_ = slot;
  return {std::move(snapshot), std::move(handoff)};
}
void Session::save_current(const PersistedState &state, std::uint32_t timer) {
  if (!selected_)
    throw std::logic_error("Native save session has no selected game");
  archive_.save(*selected_, state, timer);
}
void Session::copy_slot(unsigned destination, unsigned source) {
  archive_.copy_slot(destination, source);
  if (destination != source && selected_ == destination)
    selected_.reset();
}
void Session::erase_slot(unsigned slot) {
  archive_.erase_slot(slot);
  if (selected_ == slot)
    selected_.reset();
}
} // namespace eb::native::saves
