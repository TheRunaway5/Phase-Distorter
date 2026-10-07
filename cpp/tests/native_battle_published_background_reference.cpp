#define main prior_startup_reference_main
#include "native_battle_startup_reference.cpp"
#undef main

std::vector<std::uint32_t> retained_case(Shared &shared, unsigned group, bool warm) {
  Rig r(shared);
  if (warm)
    for (unsigned i = 0x7800; i < 0x8000; ++i) {
      // An explicit incoming hardware state, independently installed before
      // either LOAD. These bytes lie beyond the secondary's fixed0x1800 copy.
      const auto value = std::uint8_t(i * 13 + (i >> 4) + 7);
      r.p.display.set_vram_byte(std::uint16_t(i), value);
      r.p.source.bus->video_ram[i] = value;
    }
  const auto retained_bytes = r.p.display.vram();
  r.blank_helper(DisplayBlankKind::Reset);
  const auto retained = r.scene.frame();
  const auto retained_pixels = eb::rasterize_direct_scene({retained, {}});
  const auto pair = shared.backgrounds.selection(group);
  require(shared.backgrounds.artwork_dependency(pair).has_value(), "Missing retained-artwork witness");
  r.p.load(pair, group, true);
  for (unsigned i = 0x7800; i < 0x8000; ++i)
    require(r.p.display.vram_byte(std::uint16_t(i)) == retained_bytes[i], "LOAD overwrote retained physical tail");
  r.scene.handoff_publication(r.world, r.battle, r.p.fade, {&r.frame, nullptr});
  r.p.colors.upload_mode = r.p.source.bus->work_ram[0x30] = 24;
  r.blank_helper(DisplayBlankKind::Retain);
  r.p.source.call(r.p.source.jp ? 0xc0885e : 0xc0886c, 1, 1);
  r.p.fade.begin_in(1, 1);
  r.caller();
  for (unsigned i = 0; i < 30; ++i) r.publish_visible();
  r.p.compare("Retained physical background visible publication");
  const auto original = r.p.source.pixels();
  const auto native = eb::rasterize_direct_scene({r.scene.frame(), {}});
  require(original.size() == native.size(), "Retained images differ in size");
  unsigned nonblack = 0;
  for (unsigned i = 0; i < original.size(); ++i) {
    ++counts.pixels;
    nonblack += original[i] != 0xff000000;
    require(original[i] == native[i], "Retained PPU group="+std::to_string(group)+
        " warm="+std::to_string(warm)+" pixel="+std::to_string(i)+
        " original="+std::to_string(original[i])+" native="+std::to_string(native[i]));
  }
  require(nonblack != 0, "Retained PPU comparison is vacuously black");
  counts.nonblack += nonblack;
  require(eb::rasterize_direct_scene({retained, {}}) == retained_pixels,
          "World frame changed across retained background publication");
  std::cout << (shared.assets.version == eb::GameVersion::JP ? "JP" : "US")
            << " group=" << group << " warm=" << warm << " pixels=" << original.size()
            << " nonblack=" << nonblack << '\n';
  return original;
}
int main(int argc, char **argv) {
  if (argc < 2) return 77;
  try {
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      Shared shared(assets);
      counts = {};
      for (unsigned group : {476u,477u}) {
        const auto cold = retained_case(shared, group, false);
        const auto warm = retained_case(shared, group, true);
        unsigned different = 0;
        for (unsigned pixel = 0; pixel < cold.size(); ++pixel) different += cold[pixel] != warm[pixel];
        std::cout << "retained pixel witnesses group=" << group << " count=" << different << '\n';
        require(different != 0, "Patterned retained artwork had no visible source pixel witness");
      }
      std::cout << "region totals pixels=" << counts.pixels << " vram_bytes=" << counts.vram_bytes
                << " instructions=" << counts.instructions << '\n';
    }
    return 0;
  } catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
