// Optional source oracle. This proves the observable nonzero predicate of
// successful ordinary refreshes; it deliberately supplies no native equivalent
// of the incidental source graphics-address return value.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/actor_world.hpp"
#include "eb/native/sprite_resources.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <array>
#include <iostream>
#include <memory>
#include <set>
#include <stdexcept>

namespace {
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
  return bytes[at] | unsigned(bytes[at + 1]) << 8;
}
unsigned pointer(std::span<const std::uint8_t> bytes, unsigned at) {
  return word(bytes, at) | unsigned(bytes[at + 2]) << 16;
}
void require(bool condition, const char *message) {
  if (!condition)
    throw std::runtime_error(message);
}
struct Layout {
  unsigned first, second, initial, four, eight, row, walk, visible,
      allocation_table, graphics_low, graphics_high, graphics_bank, direction,
      vram, byte_width, tile_height, surface, displayed, animation, style,
      fingerprint, move_counter, current_slot, shape, screen_x, screen_y;
  std::array<unsigned, 3> tested_calls;
};
constexpr Layout us{0xc0a4a8, 0xc0a4b2, 0xc0a4bf,
                    0xc0a4c4, 0xc0a780, 0xc0a56e,
                    0xc0a443, 0xc0c711, 0x42f8c,
                    0x29ca,   0x2a06,   0x2a42,
                    0x2af6,   0x298e,   0x2a7e,
                    0x2aba,   0x2baa,   0x341a,
                    0x10f2,   0x2c22,   0x3456,
                    0x2890,   0x1a42,   0x2b6e,
                    0x0b16,   0x0b52,   {0x3a0e4, 0x3a0f7, 0x3a10a}};
constexpr Layout jp{0xc0a487, 0xc0a491, 0xc0a49e,
                    0xc0a4a3, 0xc0a75f, 0xc0a54d,
                    0xc0a422, 0xc0c6f3, 0x42eca,
                    0x2dc8,   0x2e04,   0x2e40,
                    0x2ef4,   0x2d8c,   0x2e7c,
                    0x2eb8,   0x2fa8,   0x1ab8,
                    0x10e8,   0x3020,   0x1af4,
                    0x2c8e,   0x1a38,   0x2f6c,
                    0x0b0c,   0x0b48,   {0x3a0d4, 0x3a0e7, 0x3a0fa}};

struct Oracle {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Layout layout;
  unsigned rows{}, blank_commands{}, split_commands{};
  explicit Oracle(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), layout(assets.version == eb::GameVersion::JP ? jp : us) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  unsigned get(unsigned at) const { return word(bus->work_ram, at); }
  void configure(const eb::GameAssets &assets, unsigned group,
                 unsigned destination) {
    const auto catalog = eb::native::sprite_catalog_layout(assets.version);
    const auto at =
        pointer(assets.image, catalog.groups + group * 4) - 0xc00000;
    // Source actor zero, in its nonzero action workspace. The visibility
    // helper restores that workspace and therefore makes the subsequent
    // source first/second-entry branch refresh even off screen.
    put(0x1e88, 0);
    put(layout.current_slot, 0);
    put(layout.graphics_low, at + 9);
    put(layout.graphics_high, (at + 9 + 0xc00000) >> 16);
    put(layout.graphics_bank, assets.image[at + 8]);
    put(layout.tile_height, assets.image[at]);
    put(layout.byte_width, assets.image[at + 1] * 2);
    put(layout.vram, destination);
    put(layout.direction, 0);
    put(layout.surface, 0);
    put(layout.animation, 0);
    put(layout.style, 0);
    put(layout.fingerprint, 0xffff);
    put(layout.move_counter, 0);
    put(layout.displayed, 0xffff);
    put(layout.shape, 0);
    put(layout.screen_x, 0xffff);
    put(layout.screen_y, 0xffff);
  }
  unsigned call(unsigned entry, unsigned accumulator = 0,
                unsigned workspace = 0x1e00) {
    constexpr unsigned trampoline = 0xc0ff00;
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = workspace;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = trampoline;
    cpu.accumulator = accumulator;
    cpu.x_index = cpu.y_index = 0;
    cpu.execute_instruction<0x22>(entry, 4);
    unsigned steps = 0, copies_in_row = 0;
    while (cpu.program_counter != trampoline + 4 ||
           cpu.stack_pointer != 0x1fff) {
      require(++steps < 100000, "Source appearance return did not finish");
      if (cpu.program_counter == layout.row) {
        ++rows;
        copies_in_row = 0;
      }
      if (cpu.program_counter == 0xc08643) {
        // Intercept only transport publication, after the real source
        // loader and split-row helper prepare their arguments. The row
        // helper then computes its real return itself. Perturb A so an
        // accidental dependency on our intercepted return is exposed.
        blank_commands += (bus->work_ram[0x91] & 3) == 3;
        split_commands += ++copies_in_row == 2;
        cpu.accumulator = 0xdeaf;
        cpu.execute_instruction<0x6b>(0, 1);
      } else {
        cpu.step_instruction();
      }
    }
    require(cpu.direct_page == workspace,
            "Source loader failed to restore workspace");
    return cpu.accumulator;
  }
};

void verify(const eb::GameAssets &assets) {
  Oracle oracle(assets);
  const auto &l = oracle.layout;
  const auto catalog = eb::native::sprite_catalog_layout(assets.version);
  eb::native::SpriteResources resources(assets.image, catalog);
  for (auto call : l.tested_calls) {
    // CALLROUTINE first-frame selector followed by conditional nonzero
    // short jump, to the start of this repeating authored animation.
    require(assets.image[call] == 0x42 &&
                pointer(assets.image, call + 1) == l.first,
            "Authored incidental-return call site changed");
    require(assets.image[call + 4] == 0x0b &&
                word(assets.image, call + 5) == ((call - 12) & 0xffff),
            "Authored return consumer is no longer a nonzero backedge");
  }

  unsigned selection_cases = 0, address_cases = 0, zero_surface_cases = 0;
  std::set<std::pair<unsigned, unsigned>> dimensions;
  std::set<unsigned> returned_values;
  for (unsigned group = 0; group < resources.size(); ++group) {
    const auto base =
        pointer(assets.image, catalog.groups + group * 4) - 0xc00000;
    const unsigned height = assets.image[base],
                   width = assets.image[base + 1] * 2;
    require(height && width, "Catalog contains an empty source loader shape");
    dimensions.emplace(width, height);
    // Every imported group, both source formats, both extreme allocation
    // addresses, and normal/shallow/deep loads (including entirely blank
    // surface loads that return before the displayed-frame latch changes).
    for (unsigned allocation : {0u, 87u}) {
      const auto destination =
          0x4000 + word(assets.image, l.allocation_table + allocation * 2) +
          ((height & 1) ? 0x100 : 0);
      for (unsigned surface : {0u, 8u, 12u}) {
        for (auto entry : {l.first, l.second, l.initial, l.four, l.eight}) {
          oracle.configure(assets, group, destination);
          oracle.put(l.surface, surface);
          const auto before_rows = oracle.rows;
          const auto result = oracle.call(entry);
          require(oracle.rows - before_rows == height,
                  "Source selection did not visit its authored row count");
          require(result != 0 && result == oracle.get(0x97),
                  "Ordinary refresh return is not its nonzero next-row "
                  "destination");
          zero_surface_cases += oracle.get(l.displayed) == 0xffff;
          returned_values.insert(result);
          ++selection_cases;
        }
      }
    }
  }
  // Exhaust every allocator start over every imported geometry. This is a
  // source-only proof of the predicate's bounds, not a native address model.
  for (auto [width, height] : dimensions) {
    for (unsigned allocation = 0; allocation < 88; ++allocation) {
      auto destination =
          0x4000 + word(assets.image, l.allocation_table + allocation * 2) +
          ((height & 1) ? 0x100 : 0);
      oracle.put(0x92, width);
      oracle.put(0x97, destination);
      for (unsigned row = 0; row < height; ++row) {
        const auto result = oracle.call(l.row);
        require(result != 0 && result == oracle.get(0x97),
                "Allocator geometry permits a zero incidental return");
        ++address_cases;
      }
    }
  }
  require(returned_values.size() > 2 && zero_surface_cases > 0 &&
              oracle.split_commands > 0,
          "Return-domain oracle omitted varying addresses, zero surfaces, or "
          "split rows");

  // Negative controls forbid applying the predicate to all appearance calls.
  oracle.configure(assets, 1, 0x4000);
  oracle.put(l.fingerprint, 0);
  auto before_rows = oracle.rows;
  require(oracle.call(l.walk) == 0 && oracle.rows == before_rows,
          "Unchanged four-direction fingerprint zero must return zero without "
          "a refresh");
  require(oracle.call(l.visible) == 0,
          "Offscreen visibility fixture is not outside the gate");
  require(
      oracle.call(l.first, 0, 0) == 0 && oracle.rows == before_rows,
      "Zero-workspace first selector must preserve source visibility gating");
  require(oracle.call(l.first) != 0 && oracle.rows > before_rows,
          "Action-workspace first selector must preserve source unconditional "
          "refresh");

  // The reference VM retains authored 0B tests and actual source loader
  // returns. The native world must run these real loops without such scalars.
  const auto first_entry = l.tested_calls[0] - 12;
  const auto loop_bytes =
      std::span<const std::uint8_t>(assets.image).subspan(first_entry, 0x56);
  const std::vector<std::uint32_t> loop_entries{
      first_entry, l.tested_calls[1] - 12, l.tested_calls[2] - 12};
  auto loop_data = std::make_shared<eb::native::ActionScriptData>(
      loop_bytes, first_entry, loop_entries);
  auto program = std::make_shared<eb::native::CompiledActionProgram>(
      loop_data, assets.version);
  auto native_resources =
      std::make_shared<eb::native::SpriteResources>(assets.image, catalog);
  unsigned native_ticks = 0, native_refreshes = 0;
  for (unsigned script = 0; script < loop_entries.size(); ++script) {
    require(program->scripts()->byte(l.tested_calls[script] + 4) == 0x19,
            "Authored nonzero consumer was not lowered to its unconditional "
            "backedge");
    eb::native::ActionScripts reference(loop_data, loop_entries[script]);
    eb::native::ActorWorld world(
        native_resources, program,
        eb::native::import_appearance_data(assets.image, assets.version));
    eb::native::WorldActorSpec spec;
    spec.script = script;
    spec.sprite = 1;
    spec.action = reference.actor();
    const auto actor = world.create(spec);
    oracle.configure(assets, 1, 0x4000);
    for (unsigned tick = 0; tick < 180; ++tick) {
      while (reference.tick() == eb::native::ActionTickResult::NeedsEngine) {
        require(
            reference.request()->kind ==
                    eb::native::ActionRequestKind::CallEngine &&
                (reference.request()->identifier == l.first ||
                 reference.request()->identifier == l.second),
            "Authored appearance-loop reference asked an unexpected service");
        oracle.put(l.animation, reference.actor().animation);
        reference.respond(oracle.call(reference.request()->identifier));
        ++native_refreshes;
      }
      require(world.advance_tick() == eb::native::WorldTickResult::Complete &&
                  !world.request(),
              "Native authored animation loop still requires an incidental "
              "graphics return");
      const auto &actual = world.actor(actor);
      require(actual.action().animation == reference.actor().animation &&
                  actual.action().variables == reference.actor().variables &&
                  actual.action().position == reference.actor().position &&
                  actual.action().alive == reference.actor().alive,
              "Native authored animation loop diverged from source-return "
              "script execution");
      const auto base = pointer(assets.image, catalog.groups + 4) - 0xc00000;
      if (const auto displayed = actual.appearance.displayed())
        require(oracle.get(l.displayed) ==
                    word(assets.image, base + 9 + displayed->pose * 2),
                "Native animation loop selected a different source frame");
      else
        require(oracle.get(l.displayed) == 0xffff,
                "Native loop failed to publish its first source frame");
      ++native_ticks;
    }
  }
  require(native_refreshes > 100,
          "Native loop proof did not traverse repeated appearance changes");

  std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US")
            << " PASS return predicate: selections=" << selection_cases
            << " allocator_rows=" << address_cases
            << " unique_returns=" << returned_values.size()
            << " blank_selections=" << zero_surface_cases
            << " blank_commands=" << oracle.blank_commands
            << " split_rows=" << oracle.split_commands
            << " authored_nonzero_consumers=3 negatives=3 native_loop_ticks="
            << native_ticks << " native_loop_refreshes=" << native_refreshes
            << '\n';
}
} // namespace

int main(int argc, char **argv) {
  try {
    require(argc > 1, "native_appearance_return_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      verify(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
