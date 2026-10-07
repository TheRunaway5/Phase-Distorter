// Source-only input-contract oracle. Execute each audited helper's real prefix
// with different incoming task values/condition flags until all source machine
// state converges. This proves the overwrite boundary, not the helper's native
// implementation. The inventory distinguishes implemented owner requests from
// still opaque services; convergence alone never makes either executable.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/action_bindings.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <tuple>

namespace {
using namespace eb::native;
struct Contract {
  unsigned us, jp;
  ActionRequestKind kind = ActionRequestKind::CallEngine;
  NativeAction operation = NativeAction::Unsupported;
  unsigned parameter_bytes = 0;
};
constexpr std::array contracts{
    Contract{0xc03daa, 0xc04009, ActionRequestKind::CallEngine,
             NativeAction::InitializePartyActor},
    Contract{0xc020f1, 0xc020ff, ActionRequestKind::CallEngine,
             NativeAction::ReleaseAppearance},
    Contract{0xc0778a, 0xc079da},
    Contract{0xc09f82, 0xc09f61, ActionRequestKind::CallEngine,
             NativeAction::ChooseRandom, 5},
    Contract{0xc09fbb, 0xc09f9a},
    Contract{0xc0a841, 0xc0a820, ActionRequestKind::CallEngine, NativeAction::PlaySound, 2},
    Contract{0xc0a88d, 0xc0a86c},
    Contract{0xc0a8b3, 0xc0a892},
    Contract{0xc0a943, 0xc0a922},
    Contract{0xc0a98b, 0xc0a96a, ActionRequestKind::CallEngine,
             NativeAction::CreateActor, 4},
    Contract{0xc0aa6e, 0xc0aa4d, ActionRequestKind::CallEngine,
             NativeAction::SetDirectionFrame, 2},
    Contract{0xc0c48f, 0xc0c471, ActionRequestKind::CallEngine,
             NativeAction::EnemyDistanceBand},
    Contract{0xc0c6b6, 0xc0c698, ActionRequestKind::CallEngine,
             NativeAction::WithinLoadingArea},
    Contract{0xc0c7db, 0xc0c7bd, ActionRequestKind::CallEngine,
             NativeAction::SurfaceAtCurrentPosition},
    Contract{0xc0d59b, 0xc0d563, ActionRequestKind::CallEngine,
             NativeAction::EnemyContactActive},
    Contract{0xc40015, 0xc40015, ActionRequestKind::CallEngine,
             NativeAction::RefreshFirstAndWithinArea},
    Contract{0xc46adb, 0xc44857, ActionRequestKind::CallEngine,
             NativeAction::TargetAngle},
    Contract{0xc46b65, 0xc448e1, ActionRequestKind::CallEngine,
             NativeAction::CaptureEnemyLeaderTarget},
    Contract{0xc46e46, 0xc44bca, ActionRequestKind::CallEngine,
             NativeAction::YieldToText},
    Contract{0xc46e74, 0xc44bf8},
    Contract{0xc4ece7, 0xc4bf42},
    Contract{0xc0d7e0, 0xc0d7a8, ActionRequestKind::SetTickCallback},
    Contract{0xc476a5, 0xc45429, ActionRequestKind::SetTickCallback},
    Contract{0xc47705, 0xc45489, ActionRequestKind::SetTickCallback},
    Contract{0xc48b3b, 0xc4617c, ActionRequestKind::SetTickCallback}};
void require(bool okay, const char *message) {
  if (!okay)
    throw std::runtime_error(message);
}
struct Oracle {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
#ifdef EB_GAMEPLAY_AUDIT
  std::vector<std::tuple<bool, std::uint32_t, std::uint8_t>> accesses;
#endif
  explicit Oracle(const eb::GameAssets &assets, unsigned helper,
                  unsigned incoming)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.status_register =
        eb::MainCpu65816::InterruptDisable |
        (incoming ? (incoming & 0x8000 ? eb::MainCpu65816::Negative : 0)
                  : eb::MainCpu65816::Zero);
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    // Declared inline bytes in ordinary work RAM; no source instructions
    // are generated. Every prefix is from the real regional asset pack.
    put(0x1e80, 0x1a00);
    put(0x1e82, 0x7e);
    put(0x1e94, 0);
    put(0x1e88, 0);
    put(0x1a00, 2);
    put(0x1a02, 3);
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = incoming;
    cpu.x_index = 0;
    cpu.y_index = 0;
    cpu.execute_instruction<0x22>(helper, 4);
#ifdef EB_GAMEPLAY_AUDIT
    bus->observe_bus_access = [this](bool write, std::uint32_t address,
                                     std::uint8_t value) {
      accesses.emplace_back(write, address, value);
    };
#endif
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  bool same(const Oracle &other) const {
    return cpu.accumulator == other.cpu.accumulator &&
           cpu.x_index == other.cpu.x_index &&
           cpu.y_index == other.cpu.y_index &&
           cpu.direct_page == other.cpu.direct_page &&
           cpu.stack_pointer == other.cpu.stack_pointer &&
           cpu.data_bank == other.cpu.data_bank &&
           cpu.status_register == other.cpu.status_register &&
           cpu.program_counter == other.cpu.program_counter &&
           bus->work_ram == other.bus->work_ram &&
           bus->video_ram == other.bus->video_ram &&
           bus->palette_ram == other.bus->palette_ram &&
           bus->object_attributes == other.bus->object_attributes &&
           std::ranges::equal(bus->ppu_registers(),
                              other.bus->ppu_registers()) &&
           bus->main_to_audio_ports == other.bus->main_to_audio_ports
#ifdef EB_GAMEPLAY_AUDIT
           && accesses == other.accesses
#endif
        ;
  }
};
bool converges(const eb::GameAssets &assets, unsigned helper, unsigned incoming,
               unsigned &steps) {
  Oracle zero(assets, helper, 0), varied(assets, helper, incoming);
  for (unsigned step = 0; step < 96; ++step) {
    require(zero.cpu.program_counter == varied.cpu.program_counter,
            "Input-independent prefix took different source control flow");
    if (zero.same(varied)) {
      steps += step;
      return true;
    }
    if (zero.cpu.program_counter == 0xc0ff04)
      return false;
    zero.cpu.step_instruction();
    varied.cpu.step_instruction();
  }
  return false;
}
void finish(Oracle &oracle) {
  for (unsigned step = 0; step < 96; ++step) {
    if (oracle.cpu.program_counter == 0xc0ff04 &&
        oracle.cpu.stack_pointer == 0x1fff)
      return;
    oracle.cpu.step_instruction();
  }
  throw std::runtime_error("Fixed window setup failed to return");
}
void forwarded_return(const eb::GameAssets &assets, unsigned helper) {
  Oracle zero(assets, helper, 0);
  finish(zero);
  require(zero.cpu.accumulator == 0xef,
          "Fixed window setup return low byte changed");
  for (const unsigned incoming :
       {1u, 0xffu, 0x1200u, 0x1234u, 0x8000u, 0xffffu}) {
    Oracle varied(assets, helper, incoming);
    finish(varied);
    require(varied.cpu.accumulator == ((incoming & 0xff00) | 0xef),
            "Fixed window setup must forward exactly the incoming high byte");
    varied.cpu.accumulator = zero.cpu.accumulator;
    require(varied.same(zero),
            "Forwarded input changed source control flow or external effects");
  }
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc > 1, "native_action_input_reference pack.ebpak ...");
    for (int arg = 1; arg < argc; ++arg) {
      const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
      const ActionBindings bindings(assets.version);
      const ActionScriptData bytes(std::vector<std::uint8_t>{2, 0, 3, 0, 0}, 0,
                                   std::vector<std::uint32_t>{0});
      unsigned cases = 0, steps = 0, owner_services = 0, opaque_services = 0;
      for (const auto &contract : contracts) {
        const unsigned helper =
            assets.version == eb::GameVersion::JP ? contract.jp : contract.us;
        ActionEngineRequest request;
        request.kind = contract.kind;
        request.identifier = helper;
        const auto operation = bindings.compile(request, bytes);
        if (operation.operation != contract.operation ||
            operation.parameter_bytes != contract.parameter_bytes ||
            operation.temporary_input != ActionTemporaryInput::Independent)
          throw std::runtime_error("Audited input/owner contract changed: helper=" +
              std::to_string(helper) + " operation=" + std::to_string(unsigned(operation.operation)) +
              " bytes=" + std::to_string(operation.parameter_bytes));
        if (contract.operation == NativeAction::Unsupported)
          ++opaque_services;
        else
          ++owner_services;
        if (contract.operation == NativeAction::CreateActor)
          require(std::get<CreateActorOperands>(operation.payload) ==
                      CreateActorOperands{2, 3},
                  "CreateActor input audit lost its typed inline operands");
        if (contract.operation == NativeAction::ChooseRandom)
          require(std::get<ChooseRandomOperands>(operation.payload) ==
                      ChooseRandomOperands{2, {0x0300, 0}},
                  "ChooseRandom input audit lost its typed inline words");
        ActionActorState actor;
        ActorActionContext context;
        ActionSceneContext scene;
        const auto applied = apply_action(operation, 0x1234, actor, context, scene);
        if (contract.operation == NativeAction::YieldToText)
          require(applied.handled && applied.value == 1 && scene.action_script_state == 1,
                  "Actual yield producer lost its shared word or result");
        else
          require(!applied.handled,
                  "Owner-dependent input audit bypassed its required service");
        for (const unsigned incoming : {1u, 0x1234u, 0x8000u, 0xffffu}) {
          if (!converges(assets, helper, incoming, steps))
            throw std::runtime_error(
                "Source input did not converge for helper " +
                std::to_string(helper));
          ++cases;
        }
      }
      require(owner_services == 14 && opaque_services == 11 && cases == 100,
              "Exact input-contract inventory changed");
      const unsigned partial =
          assets.version == eb::GameVersion::JP ? 0xc424ca : 0xc4258c;
      require(!converges(assets, partial, 0x1200, steps),
              "8-bit setup must retain its incoming high byte");
      forwarded_return(assets, partial);
      std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US") << ": "
                << cases << " real helper prefixes (" << owner_services
                << " owner services, " << opaque_services
                << " opaque) converged across " << steps
                << " source steps; six exact forwarded returns and identical "
                   "display effects passed\n";
    }
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
