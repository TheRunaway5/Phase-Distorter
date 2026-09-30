// Reference CPU and memory exist only in this differential executable.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_generated_input.hpp"
#include "eb/native/world_walking.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <sstream>

namespace {
using namespace eb::native;
std::string context;
void check(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(std::string(message) + ": " + context);
}
struct Original {
  bool jp;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  unsigned route, angle, reset, append, repeat, publish, buffer, index;
  std::uint64_t steps{};
  Original(const eb::GameAssets &assets)
      : jp(assets.version == eb::GameVersion::JP),
        bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), route(jp ? 0xc463a2 : 0xc48d58),
        angle(jp ? 0xc41e4b : 0xc41eff), reset(jp ? 0xc462b3 : 0xc48c69),
        append(jp ? 0xc462e1 : 0xc48c97), repeat(jp ? 0xc464b5 : 0xc48e6b),
        publish(jp ? 0xc464df : 0xc48e95), buffer(jp ? 0xa05e : 0x9e58),
        index(buffer + 192) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    bus->work_ram[0xd] = 0x80;
    call(jp ? 0xc02c4e : 0xc430ec);
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  unsigned word(unsigned at) const {
    return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8;
  }
  void start(unsigned entry, unsigned a = 0, unsigned x = 0, unsigned y = 0,
             bool far = true) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    if (far)
      cpu.execute_instruction<0x22>(entry, 4);
    else
      cpu.execute_instruction<0x20>(entry & 65535, 3);
  }
  void until(unsigned pc) {
    for (unsigned n = 0; n < 100000000; ++n) {
      if (cpu.program_counter == pc)
        return;
      cpu.step_instruction();
      ++steps;
    }
    throw std::runtime_error("Source timed out: " + cpu.describe_registers() +
                             ": " + context);
  }
  unsigned call(unsigned entry, unsigned a = 0, unsigned x = 0,
                unsigned y = 0) {
    start(entry, a, x, y);
    until(0xc0ff04);
    return cpu.accumulator;
  }
  std::vector<GeneratedInputRun> runs() const {
    check(word(index) < 64, "Source builder exceeded run capacity");
    std::vector<GeneratedInputRun> result;
    for (unsigned i = 0; i <= word(index); ++i)
      result.push_back({bus->work_ram[buffer + 3 * i],
                        std::uint16_t(word(buffer + 3 * i + 1))});
    return result;
  }
  void equal(const GeneratedInputBuilder &builder) const {
    const auto expected = runs();
    check(std::ranges::equal(expected, builder.runs()),
          "Generated source runs differ");
  }
};
void primitives(Original &o, const GeneratedInputData &data, unsigned &calls) {
  GeneratedInputBuilder builder;
  o.call(o.reset);
  o.equal(builder);
  for (unsigned i = 0; i < 770; ++i) {
    const unsigned pad = i < 5 ? 0 : i < 270 ? 0x800 : i < 530 ? 0x100 : 0;
    builder.append_pad(pad);
    o.call(o.append, pad);
    o.equal(builder);
    ++calls;
  }
  for (unsigned direction = 0; direction < 8; ++direction)
    for (unsigned count : {0u, 1u, 255u, 256u, 257u, 65535u}) {
      builder.reset();
      o.call(o.reset);
      builder.repeat_direction(data, CollisionDirection(direction), count);
      o.call(o.repeat, direction, count);
      o.equal(builder);
      ++calls;
    }
  // Every in-bounds authored record, followed by the independently bounded
  // terminator. The source's adjacent-memory overwrite is never native state.
  builder.reset();
  o.call(o.reset);
  for (unsigned i = 0; i < 63; ++i) {
    builder.append_pad(1 + i % 2);
    o.call(o.append, 1 + i % 2);
  }
  o.equal(builder);
  const auto published = builder.publish();
  o.call(o.publish);
  check(std::ranges::equal(published.runs(), o.runs()),
        "Published terminator differs");
  ++calls;
  builder.reset();
  o.call(o.reset);
  for (unsigned i = 0; i < 64; ++i) {
    builder.append_pad(1 + i % 2);
    o.call(o.append, 1 + i % 2);
  }
  o.equal(builder);
  bool rejected{};
  try {
    builder.publish();
  } catch (const std::length_error &) {
    rejected = true;
  }
  check(rejected, "Native accepted adjacent-memory terminator write");
  o.call(o.publish);
  check(o.word(o.index) == 0,
        "Source final terminator no longer overwrites its own index");
  ++calls;
}
void angles(Original &o, const GeneratedInputData &data, unsigned &calls) {
  unsigned random = 0x28457821;
  for (unsigned i = 0; i < 20000; ++i) {
    const auto next = [&]() {
      random = random * 1664525u + 1013904223u;
      return std::uint16_t(random >> 8);
    };
    CollisionPoint from{next(), next()}, to{next(), next()};
    if (i < 64) {
      constexpr unsigned boundary[] = {0, 1, 2, 255, 256, 32767, 32768, 65535};
      from = {std::uint16_t(boundary[i / 8]), std::uint16_t(boundary[i % 8])};
      to = {};
    }
    o.put(0x1e0e, to.y);
    const auto expected = o.call(o.angle, from.x, from.y, to.x);
    const auto actual = data.angle(from, to);
    if (actual != expected) {
      std::ostringstream s;
      s << "angle " << from.x << ',' << from.y << " -> " << to.x << ',' << to.y
        << " actual=" << actual << " source=" << expected;
      throw std::runtime_error(s.str());
    }
    check(unsigned(data.direction(from, to)) < 8,
          "Route direction exceeded eight directions");
    ++calls;
  }
}
void routes(Original &o, const GeneratedInputData &data,
            const WalkingData &walking, unsigned &calls) {
  for (unsigned origin : {0u, 256u, 65528u})
    for (int x = -24; x <= 24; x += 4)
      for (int y = -24; y <= 24; y += 4)
        for (const auto fractions :
             {std::array<std::uint16_t, 2>{0, 63},
              std::array<std::uint16_t, 2>{0xaaaa, 0xffff}}) {
          GeneratedInputRoute request{
              {std::uint16_t(origin), std::uint16_t(origin)},
              {std::uint16_t(origin + x), std::uint16_t(origin + y)},
              fractions};
          context = "direct route " + std::to_string(origin) +
                    " offset=" + std::to_string(x) + ',' + std::to_string(y);
          GeneratedInputBuilder builder;
          const auto actual = builder.route(data, walking, request);
          o.call(o.reset);
          o.put(0x1e0e, request.target.y);
          o.put(0x1df0, fractions[0]);
          o.put(0x1df4, fractions[1]);
          const auto expected = o.call(o.route, request.start.x,
                                       request.start.y, request.target.x);
          if (actual != expected)
            throw std::runtime_error(context +
                                     " count actual=" + std::to_string(actual) +
                                     " source=" + std::to_string(expected));
          o.equal(builder);
          ++calls;
        }
}
void callers(Original &o, const GeneratedInputData &data,
             const WalkingData &walking, unsigned &calls, unsigned &varying) {
  const unsigned game = o.jp ? 0x9aa6 : 0x97f5;
  unsigned prior_count{};
  for (unsigned type = 0; type < 2; ++type)
    for (unsigned exit = 0; exit < 2; ++exit)
      for (unsigned direction = 0; direction < 4; ++direction)
        for (unsigned origin : {0u, 256u, 65528u})
          for (unsigned fill : {0u, 0x55u, 0xaau, 0xffu}) {
            // The actual regional producer performs the reset and supplies its
            // route arguments. Vary only previous direct-page workspace.
            std::fill(o.bus->work_ram.begin() + 0x1b00,
                      o.bus->work_ram.begin() + 0x1e00, fill);
            o.put(game + 130, origin);
            o.put(game + 134, origin);
            o.put(game + 142, exit ? type ? 13 : 12 : 0);
            o.put(game + 138, 2);
            o.put(0x81, 0);
            o.put(o.jp ? 0x614c : 0x5dc6, direction << 8);
            context = std::string(o.jp ? "JP" : "US") +
                      " caller type=" + std::to_string(type) +
                      " exit=" + std::to_string(exit) +
                      " direction=" + std::to_string(direction) +
                      " origin=" + std::to_string(origin) +
                      " fill=" + std::to_string(fill);
            o.start(type ? (o.jp ? 0xc072f9 : 0xc070cb)
                         : (o.jp ? 0xc0709c : 0xc06e6e),
                    direction << 8 | (!type && exit ? 0x8000 : 0),
                    (origin / 8 + 1) & 8191, (origin / 8 + 1) & 8191, false);
            o.until(o.route);
            const unsigned return_pc =
                o.word(o.cpu.stack_pointer + 1) + 1 |
                unsigned(o.bus->work_ram[o.cpu.stack_pointer + 3]) << 16;
            o.until(o.route + 30);
            const unsigned dp = o.cpu.direct_page;
            GeneratedInputRoute request{{std::uint16_t(o.word(dp + 18)),
                                         std::uint16_t(o.word(dp + 22))},
                                        {std::uint16_t(o.word(dp + 30)),
                                         std::uint16_t(o.word(dp + 28))},
                                        {std::uint16_t(o.word(dp + 16)),
                                         std::uint16_t(o.word(dp + 20))}};
            check(request.fractions[0] == fill * 257,
                  "Caller X fraction was not uncontrolled prior workspace");
            check(request.fractions[1] == 63,
                  "Caller Y fraction was not reset-produced 63");
            GeneratedInputBuilder builder;
            const auto actual = builder.route(data, walking, request);
            o.until(return_pc);
            check(actual == o.cpu.accumulator,
                  "Real caller route count differs");
            o.equal(builder);
            if (fill && prior_count != actual)
              ++varying;
            prior_count = actual;
            ++calls;
            if (type == 0 && exit == 0 && direction == 0 && origin == 256)
              std::cout << context
                        << " initial fractions=" << request.fractions[0] << ','
                        << request.fractions[1]
                        << " generated frames=" << actual
                        << " runs=" << builder.runs().size() << '\n';
          }
  check(varying != 0,
        "Caller workspace variants did not expose route dependence");
}
void long_route(const eb::GameAssets &assets) {
  auto slow = assets;
  const auto at = walking_data_layout(assets.version).cardinal;
  slow.image[at] = 0;
  slow.image[at + 1] = 0x20;
  slow.image[at + 2] = slow.image[at + 3] = 0;
  Original o(slow); // Real VELOCITY_STORE expands the altered immutable speed.
  GeneratedInputData data(slow.image, slow.version);
  WalkingData walking(slow.image, slow.version);
  GeneratedInputBuilder builder;
  context = assets.title + " long route returned count wrap";
  const auto actual =
      builder.route(data, walking, {{0, 0}, {10000, 0}, {0, 63}});
  o.call(o.reset);
  o.put(0x1e0e, 0);
  o.put(0x1df0, 0);
  o.put(0x1df4, 63);
  const auto expected = o.call(o.route, 0, 0, 10000);
  check(actual == expected && actual == std::uint16_t(79992),
        "Long route count wrap differs");
  o.equal(builder);
  std::cout << "PASS " << assets.title
            << ": synthetic source speed route79992 frames wraps returned "
               "count and run byte; "
            << o.steps << " source instructions\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    check(argc > 1, "native_world_generated_input_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      Original original(assets);
      GeneratedInputData data(assets.image, assets.version);
      WalkingData walking(assets.image, assets.version);
      unsigned primitive_calls{}, angle_calls{}, route_calls{}, caller_calls{},
          varying{};
      primitives(original, data, primitive_calls);
      angles(original, data, angle_calls);
      routes(original, data, walking, route_calls);
      callers(original, data, walking, caller_calls, varying);
      long_route(assets);
      std::cout
          << "PASS " << assets.title << ": " << primitive_calls
          << " run builder calls, " << angle_calls << " integer angles, "
          << route_calls << " direct routes, " << caller_calls
          << " real escalator/stair caller routes; " << varying
          << " route-count variations expose undefined X phase; native "
             "transitions normalize X=0 and preserve reset-produced Y=63; "
          << original.steps << " source instructions\n";
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
