// Complete C06B3D and C4954C source bodies; real math hardware, no callee
// skips.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/battle/outcomes.hpp"
#include "eb/native/peripheral_state.hpp"
#include "eb/native/world_interaction_queue.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "eb/native/world_encounter_effects.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
using namespace eb::native;
namespace {
std::uint64_t checks{};
void require(bool v, const char *message) {
  if (!v)
    throw std::runtime_error(message);
  ++checks;
}
struct Layout {
  unsigned doors, brightness, records, current, next, pending, type, scratch,
      alias;
};
constexpr Layout us{0xc06b3d, 0xc4954c, 0x5dea, 0x5e02, 0x5e04,
                    0x5d9a,   0x5dc0,   0x5e58, 0x5e6c};
constexpr Layout jp{0xc06d6b, 0xc46b96, 0x6170, 0x6188, 0x618a,
                    0x6120,   0x6146,   0x61de, 0x61e4};

struct Original {
  Layout l;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  std::uint64_t instructions{}, calls{};
  Original(const eb::GameAssets &a)
      : l(a.version == eb::GameVersion::JP ? jp : us),
        bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    bus->write_byte(0x2100, 128);
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value;
    bus->work_ram.at(at + 1) = value >> 8;
  }
  void call(unsigned target, unsigned a = 0) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.program_counter = 0xc0ff00;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.accumulator = a;
    cpu.x_index = cpu.y_index = 0;
    cpu.execute_instruction<0x22>(target, 4);
    for (unsigned n = 0; n < 200000; ++n) {
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff) {
        ++calls;
        return;
      }
      cpu.step_instruction();
      ++instructions;
    }
    throw std::runtime_error("Original transition helper did not return");
  }
  void seed(const npcs::InteractionQueueState &s) {
    for (unsigned i = 0; i < 4; ++i) {
      put(l.records + 6 * i, s.records[i].type);
      std::copy(s.records[i].key.begin(), s.records[i].key.end(),
                bus->work_ram.begin() + l.records + 6 * i + 2);
    }
    put(l.current, s.current);
    put(l.next, s.next);
    put(l.pending, s.pending);
    put(l.type, s.current_type);
  }
  void compare(const WorldInteractionQueue &q) {
    const auto &s = q.state();
    for (unsigned i = 0; i < 4; ++i) {
      require(word(l.records + 6 * i) == s.records[i].type,
              "Queue record type mismatch");
      require(std::equal(s.records[i].key.begin(), s.records[i].key.end(),
                         bus->work_ram.begin() + l.records + 6 * i + 2),
              "Queue key mismatch");
    }
    require(word(l.current) == s.current && word(l.next) == s.next &&
                word(l.pending) == s.pending && word(l.type) == s.current_type,
            "Queue index/latch mismatch");
    auto scratch = q.door_scratch();
    require(std::equal(scratch.begin(), scratch.end(),
                       bus->work_ram.begin() + l.scratch),
            "Retained door scratch mismatch");
  }
};
void doors(const eb::GameAssets &assets) {
  Original s(assets);
  npcs::InteractionQueueState state;
  npcs::DadPhoneState phone{876, 543};
  std::uint16_t intangible = 0x5533;
  WorldInteractionQueue native(assets.version, state, intangible, phone);
  unsigned calls = 0, rejections = 0;
  std::fill_n(s.bus->work_ram.begin() + s.l.scratch, 20, 0);
  for (unsigned current = 0; current < 4; ++current)
    for (unsigned next = 0; next < 4; ++next)
      for (unsigned pattern = 0; pattern < 81; ++pattern)
        for (unsigned null_at : {0u, 1u, 2u, 3u, 4u})
          for (unsigned current_type : {0u, 10u, 65535u}) {
            state.current = current;
            state.next = next;
            state.pending = std::uint16_t(0x4000 + pattern);
            state.current_type = current_type;
            unsigned digits = pattern;
            for (unsigned i = 0; i < 4; ++i) {
              const unsigned digit = digits % 3;
              digits /= 3;
              state.records[i].type = digit == 0 ? 0 : digit == 1 ? 10 : 65535;
              state.records[i].key =
                  i == null_at
                      ? dialogue::ReferenceKey{}
                      : dialogue::ReferenceKey{std::uint8_t(1 + i),
                                               std::uint8_t(0xc0 + pattern),
                                               0xd5, 0};
            }
            s.seed(state);
            const auto before = state;
            const auto retained = std::vector<std::uint8_t>(
                native.door_scratch().begin(), native.door_scratch().end());
            bool rejected = false;
            try {
              native.preflight_retain_doors();
            } catch (const std::logic_error &) {
              rejected = true;
            }
            if (rejected) {
              require(assets.version == eb::GameVersion::JP,
                      "Unexpected US door admission failure");
              require(state == before &&
                          std::equal(retained.begin(), retained.end(),
                                     native.door_scratch().begin()),
                      "Door preflight mutated state");
              ++rejections;
              continue;
            }
            s.call(s.l.doors);
            native.retain_doors();
            s.compare(native);
            require(phone == npcs::DadPhoneState{876, 543} &&
                        intangible == 0x5533,
                    "Door filter changed phone/appearance");
            ++calls;
          }
  // Named unsupported JP case really writes adjacent dialogue bytes; rejection
  // above is not a fictitious source hang or an ignored helper completion.
  if (assets.version == eb::GameVersion::JP) {
    state = {};
    state.next = 1;
    state.records[0] = {10, {1, 2, 3, 4}};
    s.seed(state);
    s.bus->work_ram[s.l.alias] = 0xa5;
    s.bus->work_ram[s.l.alias + 1] = 0x5a;
    s.call(s.l.doors);
    require(s.bus->work_ram[s.l.alias] == 0 &&
                s.bus->work_ram[s.l.alias + 1] == 0,
            "JP adjacent-global frontier lacks original witness");
  }
  require(calls != 0 &&
              (assets.version != eb::GameVersion::JP || rejections != 0),
          "Missing queue coverage");
  std::cout << "PASS " << assets.title << " retained-door calls=" << calls
            << " preflight_rejections=" << rejections
            << " source_instructions=" << s.instructions
            << "; full admitted helper, JP adjacent dialogue alias explicit\n";
}
void brightness(const eb::GameAssets &assets) {
  Original s(assets);
  battle::PsiScratch scratch;
  battle::PaletteBankState colors;
  PeripheralState peripherals;
  std::uint64_t calls = 0, words = 0;
  for (unsigned i = 0; i < 65536; ++i)
    scratch.bytes[i] = s.bus->work_ram[65536 + i] = std::uint8_t(i * 17 + 31);
  for (unsigned i = 0; i < 256; ++i)
    colors.displayed[i / 16][i % 16] = std::uint16_t((i * 73) & 0x7fff);
  const auto displayed = colors.displayed;
  std::vector<unsigned> styles;
  for (unsigned i = 0; i <= 51; ++i)
    styles.push_back(i);
  for (unsigned i : {100u, 255u, 32768u, 65535u})
    styles.push_back(i);
  for (unsigned style : styles)
    for (unsigned base = 0; base < 65536; base += 256) {
      for (unsigned i = 0; i < 256; ++i) {
        colors.staged_palette(i / 16)[i % 16] = std::uint16_t(base + i);
        s.put(0x200 + 2 * i, base + i);
      }
      const auto staged = colors.staged;
      colors.upload_mode = 16;
      s.bus->work_ram[0x30] = 16;
      // Matched incoming completed hardware division; styles50+ must retain it.
      s.bus->write_byte(0x4204, 0x57);
      s.bus->write_byte(0x4205, 0x93);
      s.bus->write_byte(0x4206, 37);
      s.bus->advance_cpu_cycles(32);
      peripherals.divide_word(0x9357, 37);
      s.put(0x1e0e, 0x200);
      s.put(0x1e10, 0x7e);
      s.call(s.l.brightness, style);
      battle::prepare_palette_brightness(scratch, colors, std::uint16_t(style),
                                         &peripherals);
      for (unsigned i = 0; i < 256; ++i) {
        require(s.word(0x10000 + 2 * i) ==
                    unsigned(scratch.bytes[2 * i] |
                             unsigned(scratch.bytes[2 * i + 1]) << 8),
                "Packed brightness target mismatch");
        require(s.word(0x200 + 2 * i) == staged[i / 16][i % 16],
              "Original brightness changed its input palette");
      ++words;
      }
      require(colors.staged == staged && colors.displayed == displayed &&
                  colors.upload_mode == 16 && s.bus->work_ram[0x30] == 16,
              "Brightness published or changed source palette");
      require(std::equal(scratch.bytes.begin() + 512, scratch.bytes.end(),
                         s.bus->work_ram.begin() + 0x10200),
              "Brightness changed retained BUFFER tail");
      require((s.bus->read_byte(0x4214) | unsigned(s.bus->read_byte(0x4215))
                                              << 8) == peripherals.quotient() &&
                  (s.bus->read_byte(0x4216) | unsigned(s.bus->read_byte(0x4217))
                                                  << 8) ==
                      peripherals.product(),
              "Brightness math hardware retention mismatch");
      ++calls;
    }
  require(calls == 56 * 256 && words == 56 * 65536,
          "Brightness full RGB555+bit15 matrix incomplete");
  std::cout << "PASS " << assets.title
            << " complete brightness helpers=" << calls
            << " raw_words=" << words
            << " source_instructions=" << s.instructions
            << "; all65536 rawcolors at56styles, no publication\n";
}
void cleanup(const eb::GameAssets &assets) {
  Original source(assets);
  const bool jp=assets.version==eb::GameVersion::JP;
  const unsigned base=jp?0xb097:0xaec2,buffer=jp?0x4356:0x3fd0;
  const auto definitions=import_world_swirl_data(assets.image);
  const auto data=import_world_encounter_effect_data(assets.image,assets.version);
  WorldSwirlState swirl;
  ScenePalette colors;
  WorldEncounterVisualState visual;
  WorldLayerConfigurations layers(assets.image,assets.version);
  WorldLayerSelection selected;
  WorldScenePresentation presentation(colors,visual,layers,selected);
  WorldEncounterEffects native(definitions,data,swirl,colors,visual,presentation);
  battle::PsiDisplayState display;
  battle::FrameDisplay frames(display);
  native.bind_display(frames);
  for(unsigned bits=0;bits<256;++bits) {
    for(unsigned i=0;i<64;++i)source.bus->work_ram[base+i]=std::uint8_t(i*17+bits);
    for(unsigned i=0;i<2048;++i)source.bus->work_ram[buffer+i]=std::uint8_t(i*23+bits);
    source.bus->work_ram[0x1f]=std::uint8_t(bits);
    for(unsigned i=0x23;i<=0x2b;++i)source.bus->write_byte(0x2100+i,std::uint8_t(bits+i));
    const auto old_registers=source.bus->scene_read_view().ppu_registers;
    const auto old_source=source.bus->work_ram;
    swirl.update_in=std::uint8_t(bits);swirl.oval=true;swirl.interval=91;swirl.invert=true;
    swirl.masked_layers.fill(true);swirl.hdma_channel_offset=1;swirl.oval_state={1,2,3,4,5,6,7,8,9,10,11};
    visual.window_pattern=data.clips[bits%data.clips.size()].rows;visual.window_rows_enabled=bool(bits&1);
    visual.writes_second_window=true;visual.window_layers.fill(true);visual.window_invert=true;
    visual.window_left={12,34};visual.window_right={56,78};
    frames.hdma_enable=std::uint8_t(bits);frames.displayed_hdma_enable=0xa5;
    auto expected_swirl=swirl;expected_swirl.update_in=0;expected_swirl.oval=false;
    auto expected_visual=visual;expected_visual.window_layers.fill(false);expected_visual.window_invert=false;
    ++expected_visual.window_revision;
    source.call(jp?0xc2e9c3:0xc2eaaa);
    native.clear_battle_window();
    require(source.bus->work_ram[base]==swirl.update_in&&source.word(base+10)==0&&source.word(base+12)==0&&
            swirl==expected_swirl,"Battle-window cleanup swirl retention mismatch");
    for(unsigned i=1;i<64;++i)if(i<10||i>13)
      require(source.bus->work_ram[base+i]==old_source[base+i],"Cleanup changed retained source swirl data");
    const auto registers=source.bus->scene_read_view().ppu_registers;
    require(source.bus->work_ram[0x1f]==frames.hdma_enable&&frames.hdma_enable==(bits&~8u)&&
            frames.displayed_hdma_enable==0xa5,"Cleanup disabled unrelated HDMA or invented publication");
    require(registers[0x23]==0&&registers[0x24]==0&&registers[0x25]==0&&registers[0x2a]==0x55&&registers[0x2b]==0x55&&
            registers[0x2e]==0&&registers[0x2f]==0&&visual==expected_visual,"Cleanup window mask mismatch");
    for(unsigned i=0x26;i<=0x29;++i)require(registers[i]==old_registers[i],"Cleanup changed terminal window intervals");
    require(std::equal(old_source.begin()+buffer,old_source.begin()+buffer+2048,source.bus->work_ram.begin()+buffer),
            "Cleanup erased retained original window rows");
    require(std::equal(old_source.begin()+0x200,old_source.begin()+0x400,source.bus->work_ram.begin()+0x200),
            "Cleanup restored or changed source palettes");
    native.advance();
    require(swirl==expected_swirl&&visual==expected_visual,"Cleared swirl advanced again");
  }
  std::cout<<"PASS "<<assets.title<<" complete battle-window cleanup helpers=256; all HDMA bits, retained row/interval/palette ownership\n";
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2)
    return 77;
  try {
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      doors(assets);
      brightness(assets);
      cleanup(assets);
    }
    std::cout << "PASS transition helper comparisons=" << checks << '\n';
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
