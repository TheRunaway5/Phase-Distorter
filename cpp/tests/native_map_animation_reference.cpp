// Complete original LOAD_TILESET_ANIM, including its real decompressor, paired
// with the animation phase of the actual native WorldMapLoad owner. No source
// helper is intercepted and no source output is copied into native state.
#include "native_world_startup_oracle.hpp"
#include "native_world_map_load_fixture.hpp"
#include <algorithm>
#include <map>

namespace {
using namespace startup_oracle;
void animation_reference(const eb::GameAssets &assets) {
  startup_test::Resources resources(assets.version, assets.image);
  map_load_test::Fixture native(resources);
  native.party.controlled_count = native.party.party_count = 1;
  native.party.party_order[0] = 1;
  native.party.character(1).current_hp = native.party.character(1).target_hp = 100;
  Oracle source(assets);
  const bool jp = assets.version == eb::GameVersion::JP;
  std::map<unsigned, CameraPosition> selections;
  for (unsigned y = 0; y < 80; ++y)
    for (unsigned x = 0; x < 32; ++x)
      selections.try_emplace(resources.map->sector(x, y).tileset,
                             CameraPosition{std::uint16_t(x * 256), std::uint16_t(y * 128)});
  check(selections.size() == resources.map->tileset_count(),
        "Animation proof does not reach every authored tileset through the real map");
  const auto before_checks = checks, before_instructions = instructions;
  unsigned loaded{}, retained{}, partial{};
  for (unsigned pattern : {7u, 193u}) {
    for (unsigned i = 0; i < native.load_state.animation_staging.size(); ++i)
      source.bus->work_ram[0xc000 + i] = native.load_state.animation_staging[i] =
          std::uint8_t(i * 29 + pattern);
    // Repeated reloads keep the same global buffer. A zero-track map therefore
    // inherits earlier decoded bytes, while short decodes preserve their tail.
    for (const auto &[tileset, center] : selections) {
      context = assets.title + " tileset=" + std::to_string(tileset) +
                " pattern=" + std::to_string(pattern);
      const auto before = native.load_state.animation_staging;
      source.put(jp ? 0x46f8 : 0x4372, tileset);
      source.cpu.emulation_mode = false;
      source.cpu.status_register = eb::MainCpu65816::InterruptDisable;
      source.cpu.data_bank = 0x7e;
      source.cpu.direct_page = 0x1e00;
      source.cpu.stack_pointer = 0x1fff;
      source.cpu.accumulator = source.cpu.x_index = source.cpu.y_index = 0;
      source.cpu.program_counter = 0xc0ff00;
      source.cpu.execute_instruction<0x20>(0x0085, 3);
      source.run(0xc0ff03);
      const auto frames = native.runtime->completed_frames(), actor_ticks = native.actors.ticks();
      auto operation = native.loader->begin_reload(center);
      check(!operation->advance(1) && operation->stage() == WorldMapLoadStage::PublishColors,
            "Native map loader did not execute exactly its preparation phase");
      const auto &imported = resources.map->tileset(tileset);
      check(native.area.tileset_id() == tileset, "Native map selected another animation tileset");
      for (unsigned i = 0; i < before.size(); ++i)
        check(source.bus->work_ram[0xc000 + i] == native.load_state.animation_staging[i],
              "Complete source animation staging differs from actual native map producer");
      if (imported.animations.empty()) {
        check(native.load_state.animation_staging == before,
              "Zero-track map did not retain the complete incoming staging owner");
        ++retained;
      } else {
        check(!imported.animation_bytes.empty(), "Animated tileset lacks exact decompression bytes");
        check(std::equal(imported.animation_bytes.begin(), imported.animation_bytes.end(),
                         native.load_state.animation_staging.begin()),
              "Native producer omitted decoded bytes outside animation frame ranges");
        check(std::equal(before.begin() + imported.animation_bytes.size(), before.end(),
                         native.load_state.animation_staging.begin() + imported.animation_bytes.size()),
              "Short animation decompression changed its retained tail");
        partial += imported.animation_bytes.size() < before.size();
        ++loaded;
      }
      check(native.runtime->completed_frames() == frames && native.actors.ticks() == actor_ticks,
            "Animation preparation invented a frame or actor tick");
      while (!operation->advance(1)) {}
    }
  }
  check(loaded && retained, "Animation proof lacks decode or retained-buffer coverage");
  std::cout << (jp ? "JP" : "US") << " map animation staging: " << selections.size()
            << " authored tilesets, " << loaded << " decoded / " << retained
            << " retained loads, " << partial << " short prefixes, "
            << checks - before_checks << " checks, " << instructions - before_instructions
            << " original instructions\n";
}
}
int main(int argc, char **argv) {
  try {
    if (argc < 2) return 77;
    for (int i = 1; i < argc; ++i)
      animation_reference(eb::load_game_assets(argv[i], eb::asset_profiles()));
    return 0;
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
