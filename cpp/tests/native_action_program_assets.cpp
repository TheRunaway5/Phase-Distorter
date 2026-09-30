#include "eb/native/action_program.hpp"
#include "eb/native/world_actor_movement.hpp"
#include "generated_assets.hpp"
#include <chrono>
#include <iostream>
#include <set>
#include <stdexcept>

int main(int argc, char **argv) {
  using namespace eb::native;
  try {
    if (argc < 2)
      throw std::runtime_error("native_action_program_assets pack.ebpak ...");
    for (int arg = 1; arg < argc; ++arg) {
      const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
      const auto raw = import_action_scripts(assets.image, assets.version);
      const auto start = std::chrono::steady_clock::now();
      CompiledActionProgram program(raw, assets.version);
      const auto elapsed =
          std::chrono::duration_cast<std::chrono::milliseconds>(
              std::chrono::steady_clock::now() - start)
              .count();
      unsigned ticks = 0, handled = 0, unsupported = 0, movement_stops = 0,
               party_stops = 0, ended = 0;
      for (unsigned entry = 0; entry < raw->size(); ++entry) {
        ActionScripts script(program.scripts(),
                             program.scripts()->entry(entry));
        ActorActionContext actor;
        ActionSceneContext scene;
        unsigned completed = 0;
        for (;;) {
          const auto result = script.tick();
          if (result == ActionTickResult::Ended) {
            ++ended;
            break;
          }
          if (result == ActionTickResult::Complete) {
            // This prefix probe intentionally owns no world/map.
            // New collision callbacks need that real owner; their
            // complete execution is tested by the movement oracle.
            if (WorldActorMovement::required(actor.physics)) {
              ++movement_stops;
              break;
            }
            if (actor.physics == ActorPhysics::PartyFollower) {
              ++party_stops;
              break;
            }
            run_actor_tick_callback(script.actor(), actor, scene);
            run_actor_physics(script.actor(), actor);
            run_actor_projection(script.actor(), actor, scene);
            ++ticks;
            if (++completed >= 120)
              break;
            continue;
          }
          const auto &request = *script.request();
          const auto &operation = program.operation(request.identifier);
          const auto response = apply_action(operation, request.temporary,
                                             script.actor(), actor, scene);
          if (!response.handled) {
            // This is an honest import/runtime boundary, not a fake
            // successful response to an unported engine operation.
            ++unsupported;
            break;
          }
          script.respond(response.value, response.parameter_bytes);
          ++handled;
        }
      }
      const auto &stats = program.stats();
      unsigned appearance_calls = 0, discarded_appearance_results = 0;
      std::set<std::uint32_t> retained_appearance_calls;
      for (unsigned token = 0; token < stats.operations; ++token) {
        const auto &operation = program.operation(token);
        switch (operation.operation) {
        case NativeAction::SelectFourInitial:
        case NativeAction::SelectFourAnimation:
        case NativeAction::SelectFourFirst:
        case NativeAction::SelectFourSecond:
        case NativeAction::CheckAppearanceVisible:
        case NativeAction::StepFourWalk:
        case NativeAction::StepEightAnimation:
          ++appearance_calls;
          discarded_appearance_results += operation.discard_result;
          if (!operation.discard_result)
            retained_appearance_calls.insert(
                program.diagnostic(token).instruction);
          break;
        default:
          break;
        }
      }
      // The three helpers in UNKNOWN_C3A0D8 only consume the known
      // nonzero predicate of a successful ordinary pose refresh. Their
      // copied opcode becomes an unconditional backedge; no fabricated
      // numeric graphics destination enters the native VM.
      const unsigned shift = assets.version == eb::GameVersion::JP ? 0x10 : 0;
      const std::set<std::uint32_t> predicate_calls{
          0x3a0e4 - shift, 0x3a0f7 - shift, 0x3a10a - shift};
      // SnapshotPosition opens the shared EVENT103..106 helper; flag
      // reads open three more appearance calls, including EVENT37's
      // pose before QueueText. The latter's separately source-proven
      // input contract discards the pose result but remains unsupported.
      // Role staggering also opens C3A15E's animated pose at C3A16B
      // (JP C3A15B); the following pause consumes no scalar return.
      // The real terrain/collision callbacks open 34 further pose sites.
      // The whole reachable graph must still prove every result dead.
      // Source-proven party following now opens EVENT2's first pose in both
      // regions. US has an explicit pre-loop preparation call; both install
      // the native follower tick callback before the actual animation loop.
      const bool jp = assets.version == eb::GameVersion::JP;
      const unsigned expected_appearance_calls = 300;
      bool startup_found = false, pose_found = false, us_prepare_found = false,
           follower_found = false, tick_found = false;
      for (unsigned token = 0; token < stats.operations; ++token) {
        const auto &diagnostic = program.diagnostic(token);
        const auto &operation = program.operation(token);
        if (diagnostic.instruction == (jp ? 0x3a060u : 0x3a066u))
          startup_found =
              operation.operation == NativeAction::InitializePartyActor;
        if (diagnostic.instruction == (jp ? 0x3a06cu : 0x3a076u))
          pose_found =
              operation.operation == NativeAction::StepEightAnimation &&
              operation.discard_result;
        if (diagnostic.instruction == 0x3a06a)
          us_prepare_found =
              operation.operation == NativeAction::RefreshPartyFollower &&
              diagnostic.authored_identifier == 0xc04ef0 &&
              diagnostic.inline_length_known && operation.parameter_bytes == 0;
        if (diagnostic.instruction == (jp ? 0x3a068u : 0x3a072u))
          tick_found = operation.operation == NativeAction::TickPartyFollower &&
                       diagnostic.kind == ActionRequestKind::SetTickCallback;
        if (diagnostic.instruction == (jp ? 0x3a05bu : 0x3a061u))
          follower_found =
              operation.operation == NativeAction::PhysicsPartyFollower &&
              diagnostic.kind == ActionRequestKind::SetPhysicsCallback;
      }
      if (!startup_found || !follower_found || !pose_found || !tick_found ||
          (!jp && !us_prepare_found))
        throw std::runtime_error(
            "Authored EVENT2 startup/physics/following operations changed");
      if (appearance_calls != expected_appearance_calls ||
          discarded_appearance_results != expected_appearance_calls ||
          !retained_appearance_calls.empty()) {
        std::cerr << "Appearance proof: " << discarded_appearance_results << '/'
                  << appearance_calls << " discarded; retained:";
        for (const auto at : retained_appearance_calls)
          std::cerr << ' ' << std::hex << at;
        std::cerr << std::dec << '\n';
        throw std::runtime_error(
            "Authored appearance return-use proof changed");
      }
      for (const auto at : predicate_calls)
        if (raw->byte(at + 4) != 0x0b ||
            program.scripts()->byte(at + 4) != 0x19)
          throw std::runtime_error(
              "Authored nonzero pose test did not lower to its backedge");
      std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US") << ": "
                << raw->size() << " entries, " << stats.instructions
                << " compiled instructions, " << stats.operations
                << " native operation tokens, " << stats.opaque_call_boundaries
                << " explicit opaque boundaries, "
                << stats.unsupported_bytecodes << " unsupported bytecodes, "
                << elapsed << " ms import\n";
      std::cout << discarded_appearance_results << '/' << appearance_calls
                << " compiled appearance calls discard their result on every "
                   "reachable path\n";
      std::cout << "All entry prefixes: " << ticks
                << " completed native ticks, " << handled
                << " pure native operations, " << unsupported
                << " explicit service stops, " << movement_stops
                << " world-movement stops, " << party_stops
                << " party-movement stops, " << ended
                << " ended actors; no CPU/bus/audio emulation linked\n";
    }
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
