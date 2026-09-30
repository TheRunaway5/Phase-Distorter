#include "eb/native/npc_sprite_readiness.hpp"
#include "eb/native/sprite_appearance.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void check(bool good, const char *message) {
  if (!good)
    throw std::runtime_error(message);
}
template <class F> void rejects(F &&call) {
  bool rejected = false;
  try {
    call();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, "Invalid readiness request was accepted");
}
struct Content {
  std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0x3000);
  NpcCatalogLayout layout{0, 0x1000, 0x1100, 0x1200, 0x2000, 4, 799};
  void word(unsigned at, unsigned value) {
    bytes[at] = value;
    bytes[at + 1] = value >> 8;
  }
  Content() {
    std::fill(bytes.begin() + 0x2000, bytes.begin() + 0x2a00, 3 * 8);
    for (unsigned id = 0; id < 4; ++id) {
      const auto at = layout.definitions + id * 17;
      bytes[at] = unsigned(NpcType::Person);
      word(at + 1, id < 2 ? 0 : id == 2 ? 1 : 999);
      word(at + 4,
           16); // Wandering script: resources are prepared, never simulated.
    }
    word(layout.definitions + 17 + 6, 1);
    bytes[layout.definitions + 17 + 8] = unsigned(NpcAppearance::FlagOff);
    word(0, 0x1000);
    word(2, 0x1010);
    word(4, 0x1020);
    word(0x1000, 2);
    word(0x1002, 0);
    bytes[0x1004] = 25;
    bytes[0x1005] = 10;
    word(0x1006, 1);
    bytes[0x1008] = 25;
    bytes[0x1009] = 20;
    word(0x1010, 1);
    word(0x1012, 2);
    bytes[0x1014] = 25;
    bytes[0x1015] = 10;
    word(0x1020, 1);
    word(0x1022, 3);
    bytes[0x1024] = 25;
    bytes[0x1025] = 10;
  }
};
void run() {
  Content data;
  native_sprite_test::Fixture art;
  auto catalog = std::make_shared<const NpcCatalog>(data.bytes, data.layout);
  auto resources = std::make_shared<SpriteResources>(art.bytes, art.layout);
  NpcSpriteReadiness ready(catalog, resources);
  std::fill(data.bytes.begin(), data.bytes.end(), 0);
  std::fill(art.bytes.begin(), art.bytes.end(), 0);
  std::array<std::uint8_t, 1> flags{};
  std::array<NpcId, 1> active{0};
  NpcVisibility state{3, flags, active};
  const NpcRectangle first{0, 0, 256, 256};
  ready.prepare(first, state);
  check(ready.stats().npcs == 2 && ready.stats().groups == 1 &&
            ready.stats().images == 16 * 3 && ready.stats().image_bytes > 0,
        "Active/wandering NPC artwork was excluded or format aliases were not "
        "deduplicated");
  const auto stable_stats = ready.stats();
  const std::vector stable_images(ready.images().begin(), ready.images().end());
  for (unsigned frame = 0; frame < 16; ++frame)
    for (auto format :
         {SpriteFrameFormat::FourDirection, SpriteFrameFormat::EightDirection})
      for (auto surface : {SpriteSurface::Normal, SpriteSurface::Shallow,
                           SpriteSurface::Deep}) {
        const auto image = resources->acquire(0, frame, surface, format);
        check(std::find(stable_images.begin(), stable_images.end(), image) !=
                  stable_images.end(),
              "Authored variant was not retained in the shared resource owner");
      }
  ready.prepare(first, state);
  check(ready.stats() == stable_stats &&
            std::equal(ready.images().begin(), ready.images().end(),
                       stable_images.begin(), stable_images.end()),
        "Repeated readiness reallocated immutable artwork");
  flags[0] = 1;
  ready.prepare(first, state);
  check(ready.stats().npcs == 1 && ready.stats().groups == 1,
        "Readiness ignored event eligibility changes");
  flags[0] = 0;
  ready.prepare(first, state);
  for (const auto footprint :
       {NpcRectangle{0, 0, 768, 256}, NpcRectangle{256, 0, 0, 256}}) {
    rejects([&] { ready.prepare(footprint, state); });
    check(ready.stats() == stable_stats &&
              std::equal(ready.images().begin(), ready.images().end(),
                         stable_images.begin(), stable_images.end()),
          "Failed preparation changed committed leases");
  }
  auto invalid = state;
  invalid.event_flags = {};
  rejects([&] { ready.prepare(first, invalid); });
  check(ready.stats() == stable_stats,
        "Invalid flag storage changed readiness");
  NpcSpriteReadiness capped(catalog, resources, {48, 64 * 1024 * 1024});
  capped.prepare(first, state);
  const auto capped_before = capped.stats();
  rejects([&] { capped.prepare({0, 0, 512, 256}, state); });
  check(capped.stats() == capped_before,
        "Image-limit failure evicted previous leases");
  NpcSpriteReadiness byte_capped(catalog, resources,
                                 {4096, stable_stats.image_bytes});
  byte_capped.prepare(first, state);
  rejects([&] { byte_capped.prepare({0, 0, 512, 256}, state); });
  check(byte_capped.stats() == stable_stats,
        "Byte-limit failure evicted previous leases");
  // A renderer/appearance adopts the same immutable resource, independently
  // of later footprint eviction. Copies own independent lease sets.
  auto active_image = resources->acquire(0, 5, SpriteSurface::Deep,
                                         SpriteFrameFormat::EightDirection);
  auto copied = ready;
  ready.prepare({0, 0, 0, 0}, state);
  check(ready.images().empty() && ready.groups().empty() &&
            copied.stats() == stable_stats && active_image->parts.size() == 2 &&
            !active_image->indices.empty(),
        "Footprint eviction invalidated active art or another cache copy");
  // A fresh group has no external strong owners: the last readiness lease
  // must expire after departure instead of making a permanent image cache.
  copied.prepare({256, 0, 512, 256}, state);
  std::weak_ptr<const SpriteImage> departed = resources->acquire(1, 0);
  check(!departed.expired(), "Prepared group lacks strong image ownership");
  copied.prepare({0, 0, 0, 0}, state);
  check(departed.expired(),
        "Departed NPC image leaked a strong readiness lease");
  {
    native_sprite_test::Fixture fresh_art;
    auto owner =
        std::make_shared<SpriteResources>(fresh_art.bytes, fresh_art.layout);
    NpcSpriteReadiness before_creation(catalog, owner);
    before_creation.prepare(first, state);
    std::weak_ptr<const SpriteImage> prepared = owner->acquire(
        0, 5, SpriteSurface::Deep, SpriteFrameFormat::EightDirection);
    auto appearance = std::make_unique<SpriteAppearance>(owner, 0);
    appearance->select_eight(
        4, 2, 12); // Actual actor appearance selects prepared pose5.
    check(prepared.lock() == owner->acquire(0, 5, SpriteSurface::Deep,
                                            SpriteFrameFormat::EightDirection),
          "First authored appearance did not adopt the prepared image");
    before_creation.prepare({0, 0, 0, 0}, state);
    check(!prepared.expired(),
          "Footprint eviction invalidated the active appearance");
    appearance.reset();
    check(prepared.expired(),
          "Released appearance and readiness retained orphan artwork");
  }
  {
    native_sprite_test::Fixture flagged;
    flagged.word(41, 514); // Source flag2 suppresses every surface transform.
    auto owner =
        std::make_shared<SpriteResources>(flagged.bytes, flagged.layout);
    NpcSpriteReadiness aliases(catalog, owner);
    aliases.prepare(first, state);
    check(aliases.stats().images == 47,
          "Surface/loader aliases inflated readiness leases");
  }
  rejects([&] { NpcSpriteReadiness bad({}, resources); });
  rejects([&] { NpcSpriteReadiness bad(catalog, {}, {}); });
  rejects([&] { NpcSpriteReadiness bad(catalog, resources, {0, 1}); });
  check(flags[0] == 0 && active[0] == 0,
        "Readiness mutated external flags or active identities");
}
} // namespace
int main() {
  try {
    run();
    std::cout << "PASS NPC artwork readiness: all variants, active handoff, "
                 "aliases, budgets, rollback, copy and eviction\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
