// Executes complete original command-menu bodies with actual NMI, input,
// windows, battle frames and SPC/DSP. The prior startup fixture supplies real
// incoming owners; no menu callee is replaced or externally acknowledged.
#define main prior_encounter_reference_main
#include "native_encounter_turns_reference.cpp"
#undef main
#include "eb/native/battle/menu/command.hpp"
#include <set>
namespace {
// WindowHost::slot_frame is the logical staged canvas. Source text cells
// similarly reference live VWF bytes through pending DMA records; comparing
// them to earlier displayed VRAM would conflate this contract with PPU timing.
// Preview only actual queued glyph-range transfers into a private copy. The
// source machine, queue, clocks and physical display remain untouched.
std::array<std::uint8_t, 65536> staged_text_artwork(const Source &s) {
  auto pixels = s.bus->video_ram;
  const auto end = s.bus->work_ram[0];
  for (auto i = s.bus->work_ram[1]; i != end; i = std::uint8_t(i + 8)) {
    const unsigned at = 0x400 + i;
    const unsigned mode = s.bus->work_ram[at], size = s.word(at + 1),
                   source = s.word(at + 3), bank = s.bus->work_ram[at + 5],
                   destination = s.word(at + 6) * 2;
    if (destination < 0xc000)
      continue;
    require(mode == 0 && size > 0,
            "Menu staged glyph transfer has an unsupported DMA mode");
    for (unsigned byte = 0; byte < size; ++byte) {
      const auto address = std::uint16_t(source + byte);
      std::uint8_t value{};
      if (bank == 0x7e || bank == 0x7f)
        value = s.bus->work_ram[(bank - 0x7e) * 65536 + address];
      else if (bank >= 0xc0) {
        const auto offset = (bank - 0xc0) * 65536 + address;
        const auto image = s.bus->cartridge_image();
        require(offset < image.size(), "Queued text artwork leaves actual imported ROM");
        value = image[offset];
      } else
        throw std::runtime_error("Queued text artwork requires an unaudited hardware reader");
      pixels[std::uint16_t(destination + byte)] = value;
    }
  }
  return pixels;
}
dialogue::TextFrame menu_canvas(const Source &s, unsigned id) {
  const auto artwork = staged_text_artwork(s);
  const auto slot = s.word((s.jp ? 0x8c26 : 0x88e4) + id * 2);
  require(slot < 8, "Source menu canvas has no real slot");
  const unsigned at = (s.jp ? 0x89c2 : 0x8650) + slot * (s.jp ? 76 : 82),
                 columns = s.word(at + 10), rows = s.word(at + 12),
                 tilemap = s.word(at + 53);
  dialogue::TextFrame result{columns * 8, rows * 8, {}, {}};
  result.pixels.resize(result.width * result.height);
  result.priority.resize(result.pixels.size());
  for (unsigned y = 0; y < result.height; ++y)
    for (unsigned x = 0; x < result.width; ++x) {
      const unsigned d = s.word(tilemap + ((y / 8) * columns + x / 8) * 2),
                     gx = (d & 0x4000) ? 7 - x % 8 : x % 8,
                     gy = (d & 0x8000) ? 7 - y % 8 : y % 8,
                     location = (0xc000 + (d & 1023) * 16 + gy * 2) & 65535;
      const unsigned
          color = ((artwork[location] >> (7 - gx)) & 1) |
                  (((artwork[(location + 1) & 65535] >> (7 - gx)) & 1)
                   << 1),
          index = y * result.width + x;
      result.pixels[index] = color ? color + ((d >> 10) & 7) * 4 : 0;
      result.priority[index] = color ? bool(d & 0x2000) : false;
    }
  return result;
}
struct MenuRun {
  Source &source;
  Native &native;
  std::shared_ptr<const MenuContent> content;
  std::shared_ptr<const dialogue::MenuResources> resources;
  dialogue::MenuHost host;
  CommandMenuState state;
  CommandMenu menu;
  using Canvases = std::map<unsigned, dialogue::TextFrame>;
  std::vector<Canvases> input_canvases;
  unsigned canvas_index{}, nonzero_pixels{};
  unsigned source_input_begin{}, native_input_begin{};
  void capture_input() {
    Canvases frames;
    for (unsigned id = 0; id < (source.jp ? 52u : 53u); ++id)
      if (source.word((source.jp ? 0x8c26 : 0x88e4) + id * 2) < 8)
        frames.emplace(id, menu_canvas(source, id));
    input_canvases.push_back(std::move(frames));
  }
  void compare_input() {
    require(canvas_index < input_canvases.size(),
            "Native text input capture exceeded original");
    const auto &original = input_canvases[canvas_index++];
    check_equal(original.size(), native.windows.draw_order().size(),
                "Input window count");
    for (auto id : native.windows.draw_order()) {
      const auto &a = original.at(id.value);
      const auto b = native.windows.slot_frame(*native.windows.slot_for(id));
      check_equal(a.width, b->width, "Input canvas width");
      check_equal(a.height, b->height, "Input canvas height");
      for (unsigned p = 0; p < a.pixels.size(); ++p) {
        check_equal(a.pixels[p], b->pixels[p],
                    "Input canvas pixel poll=" + std::to_string(canvas_index) +
                        " window=" + std::to_string(id.value) +
                        " pixel=" + std::to_string(p));
        check_equal(a.priority[p], b->priority[p], "Input canvas priority");
        ++counts.text_pixels;
        nonzero_pixels += a.pixels[p] != 0;
      }
    }
  }
  MenuRun(Source &s, Native &n)
      : source(s), native(n),
        content(MenuContent::import(n.r.assets.image, n.r.assets.version)),
        resources(dialogue::MenuResources::import(n.r.assets.image,
                                                  n.r.assets.version)),
        host(n.r.program.program, n.prompts, resources),
        menu(content, n.r.program.program, resources, n.r.fonts,
             n.r.substitutions, *n.r.actions, n.party, n.turns, state,
             n.targets, n.roster, n.names, n.frame_state, n.colors, n.scratch,
             n.random, host, n.scene, n.input) {}
  void native_run(CommandMenu::Operation &operation) {
    for (unsigned i = 0; i < 3000000; ++i) {
      const auto progress = operation.advance(97);
      if (progress == dialogue::Progress::Finished)
        return;
      if (operation.audio()) {
        const auto event = *operation.audio();
        const auto id =
            event.kind == MenuAudioKind::TextSound ? 7 : event.value;
        native.audio_adapter.call(source.jp ? 0xc0abbf : 0xc0abe0, id);
        native.sound_requests.push_back(id);
        operation.respond_audio();
      } else if (operation.scene() && operation.scene()->service()) {
        const auto polls = native.clock.input_polls;
        native.service(*operation.scene());
        if (native.clock.input_polls != polls)
          compare_input();
      }
    }
    throw std::runtime_error("Native command menu did not finish");
  }
  void compare(unsigned result, bool automatic) {
    const auto at = source.jp ? 0xab7f : 0xa97d;
    const auto &m = native.turns.menu;
    check_equal(source.cpu.accumulator, result, "Command return");
    for (unsigned side = 0; side < 2; ++side) {
      const auto which = side ? dialogue::PreparedName::Target
                              : dialogue::PreparedName::Attacker;
      const auto name = native.prepared.name(which);
      const unsigned start =
          source.jp ? (side ? 0x9f90 : 0x9f82) : (side ? 0x9cf5 : 0x9cd7);
      for (unsigned n = 0; n < name.size(); ++n)
        check_equal(source.bus->work_ram[start + n], name[n],
                    "Prepared battle menu name");
    }
    check_equal(source.word(source.jp ? 0x9949 : 0x9695),
                native.windows.prompt_state().half_meter_speed,
                "Menu meter half speed");
    check_equal(source.word(source.jp ? 0x994b : 0x9697),
                native.windows.prompt_state().rolling_disabled,
                "Menu rolling state");
    check_equal(source.bus->work_ram[(source.jp ? 0x9aa9 : 0x97f5) +
                                     (source.jp ? 185 : 188)],
                native.party.auto_fight, "Menu auto-fight owner");
    check_equal(source.bus->work_ram[source.jp ? 0xab7e : 0xa97c],
                native.turns.item_used, "Menu live item ID");
    check_equal(source.bus->work_ram[at], m.user, "Menu user");
    check_equal(source.bus->work_ram[at + 1], m.param, "Menu param");
    check_equal(source.word(at + 2), m.action, "Menu action");
    check_equal(source.bus->work_ram[at + 4], m.targeting, "Menu targeting");
    check_equal(source.bus->work_ram[at + 5], m.target, "Menu target");
    check_equal(source.word(0x24), native.random.primary_word,
                "Menu RNG primary");
    check_equal(source.word(0x26), native.random.secondary_word,
                "Menu RNG secondary");
    compare_roster(source, native, "Menu result roster");
    for (unsigned color = 128; color < 256; ++color)
      check_equal(source.word(0x200 + color * 2),
                  native.colors.staged_color(color), "Menu staged palette");
    check_equal(source.polls - source_input_begin,
                native.clock.input_polls - native_input_begin,
                "Menu input count");
    require(canvas_index == input_canvases.size() &&
                (automatic ? canvas_index == 0 : nonzero_pixels > 0),
            "Menu input pixel proof was vacuous");
    require(source.sound_requests == native.sound_requests,
            "Actual menu sound sequence differs");
    for (auto id : native.windows.draw_order()) {
      const auto original = menu_canvas(source, id.value);
      const auto current =
          native.windows.slot_frame(*native.windows.slot_for(id));
      check_equal(original.width, current->width, "Menu canvas width");
      check_equal(original.height, current->height, "Menu canvas height");
      for (unsigned pixel = 0; pixel < original.pixels.size(); ++pixel) {
        check_equal(original.pixels[pixel], current->pixels[pixel],
                    "Menu canvas pixel window=" + std::to_string(id.value) +
                        " at=" + std::to_string(pixel));
        check_equal(original.priority[pixel], current->priority[pixel],
                    "Menu canvas priority");
        ++counts.text_pixels;
      }
    }
  }
};
void run_menus(const eb::GameAssets &assets) {
  Resources resources(assets);
  for (unsigned scenario = 0; scenario < 21; ++scenario) {
    Source source(assets);
    source.initialize();
    Native native(resources);
    configure(source, native,
              (scenario == 18 || scenario == 19) ? 8
              : scenario == 20                   ? 2
                                                 : 0);
    native.host_input = &source.raw_inputs;
    source.start_main();
    source.until(source.jp ? 0xc24f02 : 0xc24fcf);
    auto startup = native.startup->begin();
    native.drive(*startup);
    source.until(source.jp ? 0xc23040 : 0xc2311b);
    auto round = native.rounds.begin_commands();
    for (unsigned n = 0; n < 20000 && !round->menu(); ++n) {
      auto p = native.advance(*round);
      if (p == dialogue::Progress::Suspended && !round->menu())
        native.service(*round->scene());
    }
    require(round->menu().has_value(), "Menu frontier not reached");
    MenuRun menus(source, native);
    menus.source_input_begin = source.polls;
    menus.native_input_begin = native.clock.input_polls;
    const unsigned character =
        scenario == 5   ? 3
        : scenario == 6 ? 4
        : (scenario == 7 || scenario == 8 || scenario == 11 || scenario == 19)
            ? 2
            : 1;
    if (character != 1) {
      const unsigned base = source.jp ? 0x9c7f : 0x99ce,
                     stride = source.jp ? 94 : 95;
      std::copy_n(source.bus->work_ram.begin() + base, stride,
                  source.bus->work_ram.begin() + base +
                      (character - 1) * stride);
      native.party.character(character) = native.party.character(1);
      std::copy(native.party.name_field(1).begin(),
                native.party.name_field(1).end(),
                native.party.name_field(character).begin());
      source.bus
          ->work_ram[(source.jp ? 0x9aa9 : 0x97f5) + (source.jp ? 119 : 122)] =
          character;
      native.party.party_order[0] = std::uint8_t(character);
    }
    const unsigned charbase = (source.jp ? 0x9c7f : 0x99ce) +
                              (character - 1) * (source.jp ? 94 : 95),
                   cd = source.jp ? 1 : 0;
    if (scenario == 8) {
      source.put(source.jp ? 0xab7c : 0xa97a, 4);
      native.frame_state.giygas_phase = 4;
    }
    if ((scenario == 9 || scenario == 16)) {
      source.bus->work_ram[charbase + 35 - cd] = 0x93;
      native.party.character(character).items[0] = 0x93;
    }
    if (scenario == 10 || scenario == 11 || scenario == 12 || scenario == 14 ||
        scenario == 15 || scenario == 19 || scenario == 20) {
      source.bus->work_ram[charbase + 5 - cd] = 99;
      native.party.character(character).level = 99;
      source.put(charbase + 77 - cd, 999);
      native.party.character(character).target_pp = 999;
    }
    if (scenario == 13 || scenario == 14) {
      native.party.auto_fight = 7;
      source.bus
          ->work_ram[(source.jp ? 0x9aa9 : 0x97f5) + (source.jp ? 185 : 188)] =
          7;
    }
    if (scenario == 13) {
      native.party.character(character).afflictions[4] = 1;
      source.bus->work_ram[charbase + 18 - cd] = 1;
    }
    if (scenario == 14) {
      native.party.character(character).target_hp = 1;
      source.put(charbase + 71 - cd, 1);
    }
    if (scenario == 15) {
      native.party.character(character).target_pp = 0;
      source.put(charbase + 77 - cd, 0);
    }
    const unsigned wanted =
        scenario == 2   ? 5
        : scenario == 3 ? 6
        : scenario == 4 ? 3
        : (scenario == 5 || scenario == 10 || scenario == 11 ||
           scenario == 12 || scenario == 15 || scenario == 19 || scenario == 20)
            ? 4
        : (scenario == 6 || scenario == 7 || scenario == 8)   ? 7
        : (scenario == 9 || scenario == 16 || scenario == 17) ? 2
                                                              : 1;
    const unsigned ability = (scenario == 11 || scenario == 19)   ? 5
                             : (scenario == 12 || scenario == 20) ? 23
                                                                  : 1,
                   category = (scenario == 12 || scenario == 20) ? 2 : 1;
    const auto command_window = menus.content->command_window(
        (character == 2 || character == 4 ? 1 : 0) + 1);
    unsigned selected_window = command_window, last_button = 0x80,
             input_services = 0;
    std::uint64_t quiet_until = 0;
    unsigned command_entries = 0, target_visits = 0, previous_focus = 65535;
    bool insufficient = false;
    std::set<unsigned> observed_windows;
    source.observer = [&](Source &v) {
      const auto pc = v.cpu.program_counter;
      if (pc == 0xc08496)
        menus.capture_input();
      if (v.jp && pc == 0xc106e4 && v.word(0x8c96) == 0xffff)
        check_equal(v.word(0x18c24),
                    unsigned(native.scratch.bytes[0x8c24]) |
                        (unsigned(native.scratch.bytes[0x8c25]) << 8),
                    "Actual ambient scratch selector");
      if (pc == (v.jp ? 0xc1d9ffu : 0xc1dc1cu))
        insufficient = true;
      const auto active_focus = v.word(v.jp ? 0x8c96 : 0x8958);
      if (scenario == 15 && active_focus == 14)
        insufficient = true;
      if (active_focus != previous_focus) {
        if (active_focus == 0x31)
          ++target_visits;
        previous_focus = active_focus;
      }
      v.fixed_buttons = (v.bus->completed_frames >= quiet_until &&
                         (v.bus->completed_frames & 2))
                            ? std::uint16_t(last_button)
                            : 0;
      if (pc == (v.jp ? 0xc12109u : 0xc1196au)) {
        selected_window = v.word(v.jp ? 0x8c96 : 0x8958);
        quiet_until = v.bus->completed_frames + 2;
        last_button = 0;
        if (selected_window == command_window)
          ++command_entries;
      }
      if (pc != (v.jp ? 0xc1355eu : 0xc12e42u))
        return;
      const auto focus = v.word(v.jp ? 0x8c96 : 0x8958);
      observed_windows.insert(focus);
      ++input_services;
      unsigned button = 0x80;
      if (scenario == 1 || (scenario == 15 && insufficient && focus != 14) ||
          (scenario == 17 && command_entries > 1) ||
          (scenario == 16 && focus == 0x31 && target_visits == 1))
        button = 0x8000;
      else if (focus == 0x31 && scenario == 18) {
        const auto row = v.word(v.jp ? 0x8d10 : 0x89d2),
                   column = v.word(v.jp ? 0x8d0e : 0x89d0);
        button = row == 0 ? 0x0800 : column == 0 ? 0x0100 : 0x80;
      } else if (focus == 0x31 && scenario == 19) {
        button = v.word(v.jp ? 0x8d0c : 0x89ce) == 0 ? 0x0800 : 0x80;
      } else if (focus != 0x31) {
        const auto id = (focus == 4 ? selected_window : focus),
                   slot = v.word((v.jp ? 0x8c26 : 0x88e4) + id * 2);
        if (slot != 0xffff && slot < 8) {
          const unsigned record =
                             (v.jp ? 0x89c2 : 0x8650) + slot * (v.jp ? 76 : 82),
                         first = v.word(record + 43);
          const unsigned current_address =
                             v.word(v.cpu.direct_page + (v.jp ? 2 : 4)),
                         pool = v.jp ? 0x8d12 : 0x89d4;
          const unsigned current =
              current_address >= pool
                  ? (current_address - pool) / (v.jp ? 44 : 45)
                  : 65535;
          const unsigned desired = id == command_window           ? wanted
                                   : id == 16                     ? category
                                   : id == 1                      ? ability
                                   : id == 0x29 && scenario == 20 ? 2
                                                                  : 1;
          unsigned target = first;
          bool found = false;
          for (unsigned n = 0; n < 64 && target < 64; ++n) {
            const unsigned at =
                (v.jp ? 0x8d12 : 0x89d4) + target * (v.jp ? 44 : 45);
            if (v.word(at + 12) == desired) {
              found = true;
              break;
            }
            target = v.word(at + 2);
          }
          if (found && current < 64) {
            const unsigned ca = (v.jp ? 0x8d12 : 0x89d4) +
                                current * (v.jp ? 44 : 45),
                           ta = (v.jp ? 0x8d12 : 0x89d4) +
                                target * (v.jp ? 44 : 45);
            if (v.word(ca + 10) != v.word(ta + 10))
              button = v.word(ca + 10) < v.word(ta + 10) ? 0x400 : 0x800;
            else if (v.word(ca + 8) != v.word(ta + 8))
              button = v.word(ca + 8) < v.word(ta + 8) ? 0x100 : 0x200;
          }
        }
      }
      last_button = button;
    };
    std::cout << (source.jp ? "JP" : "US") << " menu scenario=" << scenario
              << std::endl;
    source.call(source.jp ? 0xc23040 : 0xc2311b, character,
                round->menu()->selected_count);
    auto operation = menus.menu.begin(character, round->menu()->selected_count,
                                      round->menu()->party_list_index);
    menus.native_run(*operation);
    menus.compare(operation->result(), scenario == 13 || scenario == 14);
    constexpr std::array<unsigned, 21> expected{4,  0,   8,   279, 0,  6,  280,
                                                7,  291, 167, 10,  14, 32, 4,
                                                34, 0,   167, 0,   4,  14, 32};
    check_equal(operation->result(), expected[scenario],
                "Intended menu branch was not reached");
    if (scenario == 18)
      require(native.rows.front_count > 1 && native.rows.back_count > 1 &&
                  native.turns.menu.target == native.rows.front_count + 2,
              "Enemy row/column navigation was vacuous");
    if (scenario == 19)
      require(native.rows.front_count && native.rows.back_count &&
                  native.turns.menu.target == 2,
              "Whole-row navigation was vacuous");
    if (scenario == 20)
      require(native.party.controlled_count == 2 &&
                  native.turns.menu.target == 2,
              "Actual ally menu navigation was vacuous");
    require(input_services > 0 || scenario == 13 || scenario == 14,
            "Real menu input service was not exercised");
    if (scenario == 10 || scenario == 11 || scenario == 12 || scenario == 15 ||
        scenario == 19 || scenario == 20)
      require(observed_windows.contains(1) || observed_windows.contains(4),
              "PSI list/details not exercised");
    if (scenario == 9 || scenario == 16)
      require(observed_windows.contains(2), "Goods inventory not exercised");
    std::cout << " menu return=" << operation->result()
              << " polls=" << source.polls - menus.source_input_begin
              << " canvases=" << menus.canvas_index
              << " nonzero=" << menus.nonzero_pixels << std::endl;
  }
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2)
    return 77;
  try {
    for (int i = 1; i < argc; ++i)
      run_menus(eb::load_game_assets(argv[i], eb::asset_profiles()));
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
