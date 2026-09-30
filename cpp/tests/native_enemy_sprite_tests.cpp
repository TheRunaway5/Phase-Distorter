#include "eb/native/enemy_sprite_readiness.hpp"
#include "native_enemy_sprite_fixture.hpp"
#include "native_sprite_fixture.hpp"
#include <array>
#include <climits>
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
  check(rejected, "Malformed enemy readiness was accepted");
}
void run() {
  enemy_sprite_test::Fixture f;
  auto catalog = std::make_shared<const EnemySpriteCatalog>(f.bytes, f.layout);
  std::fill(f.bytes.begin(), f.bytes.end(), 0);
  std::array<std::uint8_t, 1> flags{};
  EnemySpriteEligibility state{3, flags};
  check(catalog->encounter(0, 0) == 1 && catalog->encounter(1, 0) == 2,
        "Encounter grid import differs");
  check(catalog->query({0, 0, 64, 64}, state) == std::vector<unsigned>{0},
        "Base encounter art differs");
  flags[0] = 1;
  check(catalog->query({0, 0, 64, 64}, state) == std::vector<unsigned>{1},
        "Conditional slot8 branch differs");
  flags[0] = 2;
  check(catalog->query({64, 0, 128, 64}, state) == std::vector<unsigned>{1},
        "Zero-base alternate slot0 or zero-count member differs");
  flags[0] = 0;
  check(catalog->query({64, 0, 192, 64}, state).empty(),
        "Zero-chance encounter prepared artwork");
  check(catalog->query({256, 0, 320, 64}, state) == std::vector<unsigned>{3},
        "Encounter0 omitted authored butterfly art");
  state.tileset = 7;
  check(catalog->query({0, 0, 64, 64}, state).empty() &&
            catalog->query({256, 0, 320, 64}, state) ==
                std::vector<unsigned>{3},
        "Butterfly incorrectly uses regular area gate");
  state.tileset = 3;
  for (unsigned gate = 0; gate < 3; ++gate) {
    auto gated = state;
    if (gate == 0)
      gated.spawns_enabled = false;
    if (gate == 1)
      gated.monsters_disabled = true;
    if (gate == 2)
      gated.final_boss_defeated = true;
    check(catalog->query({0, 0, 320, 64}, gated).empty(),
          "Global spawn gate ignored");
  }
  check(catalog->query({63, 0, 64, 64}, state) == std::vector<unsigned>{0} &&
            catalog->query({64, 0, 65, 64}, state).empty() &&
            catalog->query({64, 0, 64, 64}, state).empty(),
        "Exclusive cell boundary differs");
  check(catalog->query({INT_MIN, INT_MIN, INT_MAX, INT_MAX}, state) ==
            std::vector<unsigned>({0, 3}),
        "World clamp differs");
  rejects([&] { catalog->query({1, 0, 0, 0}, state); });
  rejects([&] { catalog->query({0, 0, 64, 64}, {3, {}}); });
  rejects([&] { catalog->encounter(128, 0); });
  native_sprite_test::Fixture graphics;
  auto resources =
      std::make_shared<SpriteResources>(graphics.bytes, graphics.layout);
  EnemySpriteReadiness ready(catalog, resources, {48, 64 * 1024 * 1024});
  ready.prepare({0, 0, 64, 64}, state);
  const auto image = resources->acquire(0, 3);
  check(ready.leases().images.size() == 48 &&
            std::find(ready.leases().images.begin(),
                      ready.leases().images.end(),
                      image) != ready.leases().images.end(),
        "Enemy variant leases were not shared");
  const auto before = ready.leases().images;
  flags[0] = 2;
  rejects([&] {
    ready.prepare({0, 0, 128, 64}, state);
  }); // Two groups exceed one-group budget.
  check(ready.leases().images == before && ready.groups().size() == 1,
        "Failed enemy preparation lost old leases");
  rejects([&] {
    ready.prepare({256, 0, 320, 64}, state);
  }); // Unsupported imported artwork group.
  check(ready.leases().images == before,
        "Unsupported enemy artwork destroyed current readiness");
  auto copy = ready;
  ready.prepare({0, 0, 0, 0}, state);
  check(ready.leases().images.empty() && copy.leases().images == before &&
            image->parts.size() == 2,
        "Enemy cache eviction invalidated another owner");
  for (unsigned bad = 0; bad < 11; ++bad) {
    enemy_sprite_test::Fixture broken;
    if (bad == 0)
      broken.bytes.resize(10);
    if (bad == 1)
      broken.word(0, 4);
    if (bad == 2)
      broken.pointer(0xa004, 0xa0ff);
    if (bad == 3)
      broken.bytes[0xa112] = 101;
    if (bad == 4)
      broken.bytes[0xa117] = 17;
    if (bad == 5)
      broken.word(0xa118, 4);
    if (bad == 6)
      broken.word(0xa301, 4);
    if (bad == 7)
      broken.bytes[0xa303] = 1;
    if (bad == 8)
      broken.word(0xc000, 6);
    if (bad == 9)
      broken.layout.enemy_sprite_offset = 4;
    if (bad == 10)
      broken.pointer(0xa200, 0xa320);
    rejects([&] { EnemySpriteCatalog rejected(broken.bytes, broken.layout); });
  }
}
} // namespace
int main() {
  try {
    run();
    std::cout << "PASS enemy artwork catalog/readiness: branches, zero "
                 "weights/counts, butterfly, gates, bounds, leases, rollback "
                 "and malformed content\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
