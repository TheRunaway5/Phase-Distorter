// Reuses the complete owner fixture; executes independent full C2EEE7 bodies.
// Hardware variants are matching caller inputs, never copied tested outputs.
#define main startup_reference_main
#include "native_encounter_turns_reference.cpp"
#undef main
int main(int argc, char **argv) {
  if (argc < 2)
    return 77;
  try {
    for (int arg = 1; arg < argc; ++arg) {
      auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
      Resources r(assets);
      for (unsigned group : {475u, 476u, 477u, 478u})
        for (unsigned warm : {0u, 1u, 2u}) {
          Source source(assets);
          Native native(r);
          source.bus->work_ram[0x1e] = 0;
          source.bus->write_byte(0x4200, 0);
          source.fixed_buttons = warm == 2 ? 0xa580 : 0;
          for (unsigned i = 0; i < 65536; ++i) {
            source.bus->work_ram[0x10000 + i] = native.scratch.bytes[i] =
                std::uint8_t(i * 13 + warm * 73);
            source.bus->video_ram[i] = std::uint8_t(i * 7 + warm * 39);
            native.display.set_vram_byte(std::uint16_t(i),
                                         source.bus->video_ram[i]);
          }
          const auto hardware = [&](eb::SnesBus &bus) {
            bus.write_byte(0x2100, 0x80);
            bus.write_byte(0x4200, 0);
            bus.set_buttons(warm == 2 ? 0xa580 : 0);
            if (warm == 2) {
              bus.write_byte(0x4016, 1);
              bus.write_byte(0x4016, 0);
            }
            if (warm) {
              const std::array<unsigned, 11> dma{0, 0x22, 0,   4,   0,  0,
                                                 0, 255,  255, 255, 255};
              for (unsigned i = 0; i < dma.size(); ++i)
                bus.write_byte(0x4300 + i, dma[i]);
              bus.write_byte(0x4202, 13);
              bus.write_byte(0x4203, 27);
              while (bus.math_pending())
                bus.advance_cpu_cycles(1);
            }
          };
          hardware(*source.bus);
          hardware(*native.graphics_bus);
          source.put(source.jp ? 0x4e12 : 0x4a8c, group);
          source.call(source.jp ? 0xc2ee00 : 0xc2eee7);
          native.graphics.load_enemies(group);
          SourceGraphics result{
              {source.bus->work_ram.begin(), source.bus->work_ram.end()},
              {source.bus->video_ram.begin(), source.bus->video_ram.end()},
              true};
          std::cout << (source.jp ? "JP" : "US") << " group=" << group
                    << " warm=" << warm << std::endl;
          compare_graphics(result, native, source.jp);
          std::cout << "passed actual C2EEE7 instructions="
                    << source.cpu.instruction_count << std::endl;
        }
    }
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
