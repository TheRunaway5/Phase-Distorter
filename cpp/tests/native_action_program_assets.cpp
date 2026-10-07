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
      unsigned npc_faces = 0, sprite_faces = 0;
      std::set<std::uint32_t> bounds_calls;
      std::set<std::uint32_t> bounds_queries;
      std::set<std::uint32_t> retained_appearance_calls;
      for (unsigned token = 0; token < stats.operations; ++token) {
        const auto &operation = program.operation(token);
        if(operation.operation==NativeAction::CheckMovementBounds) {
          bounds_queries.insert(program.diagnostic(token).instruction);
          if(operation.parameter_bytes || operation.temporary_input!=ActionTemporaryInput::Independent)
            throw std::runtime_error("Authored movement bounds query lost its independent scalar contract");
        }
        if (operation.operation==NativeAction::SetMovementBounds) {
          const auto at=program.diagnostic(token).instruction;
          bounds_calls.insert(at);
          const auto word=[&](unsigned offset) {
            return std::uint16_t(raw->byte(at+offset) | unsigned(raw->byte(at+offset+1))<<8);
          };
          if (operation.parameter_bytes!=4 ||
              operation.temporary_input!=ActionTemporaryInput::Independent ||
              std::get<MovementBoundsOperands>(operation.payload)!=MovementBoundsOperands{word(4),word(6)})
            throw std::runtime_error("Authored movement bounds lost its two literal word inputs");
        }
        if (operation.operation==NativeAction::FaceNpcTowardActor ||
            operation.operation==NativeAction::FaceSpriteTowardActor) {
          if (operation.operation==NativeAction::FaceNpcTowardActor) ++npc_faces;
          else ++sprite_faces;
          if (!operation.discard_result || operation.parameter_bytes!=2 ||
              operation.temporary_input!=ActionTemporaryInput::Independent)
            throw std::runtime_error("Authored NPC/sprite face lacks its literal-input and dead-result proof");
        }
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
      const std::set<std::uint32_t> expected_bounds_calls=jp ?
          std::set<std::uint32_t>{0x3a32e,0x3a33c,0x3a34a,0x3a358,0x3a366,0x3a386,0x3bd11,0x3bd83,0x3c57d} :
          std::set<std::uint32_t>{0x3a33e,0x3a34c,0x3a35a,0x3a368,0x3a376,0x3a396,0x3bd23,0x3bd95,0x3c58f};
      if(bounds_calls!=expected_bounds_calls)
        throw std::runtime_error("Authored movement bounds inventory changed");
      const std::set<std::uint32_t> expected_bounds_queries=jp ?
          std::set<std::uint32_t>{0x3a3ab,0x3ab8e}:std::set<std::uint32_t>{0x3a3bb,0x3ab9e};
      if(bounds_queries!=expected_bounds_queries)
        throw std::runtime_error("Authored movement bounds query inventory changed");
      // C3AB44's shared initial pose returns through every authored caller.
      // NPC/sprite target literals and fixed-mode C0A8C6 overwrite its
      // transport return before reading it, while remaining unported calls.
      bool shared_pose_dead = false;
      for (unsigned token = 0; token < stats.operations; ++token)
        if (program.diagnostic(token).instruction == (jp ? 0x3ab44u : 0x3ab54u))
          shared_pose_dead = program.operation(token).operation == NativeAction::SelectFourInitial &&
                             program.operation(token).discard_result;
      if (!shared_pose_dead)
        throw std::runtime_error("Shared C3AB44 pose return lacks its complete regional caller proof");

      // The implemented enemy owner services open six more pose sites.
      if (npc_faces!=3 || sprite_faces!=6)
        throw std::runtime_error("Authored NPC/sprite face inventory changed: "+
                                 std::to_string(npc_faces)+"/"+std::to_string(sprite_faces));
      // Capturing sprite target coordinates now opens EVENT730's final
      // four-direction pose (US C38DCF / JP C38DC9). Its pause/loop
      // continuation reaches the next independent target capture before
      // reading that return. The seven observed frontiers stay.
      const unsigned expected_appearance_calls = 555;
      // Newly opened authored callers still reach unported services that can
      // observe an incidental return. They must keep the actual boundary.
      const std::set<std::uint32_t> expected_retained_calls = jp ?
          std::set<std::uint32_t>{0x31908,0x3203b,0x321a0,0x32ecc,0x330b6,0x3aa16,0x3ab6b} :
          std::set<std::uint32_t>{0x31910,0x32043,0x321a8,0x32ed4,0x330be,0x3aa26,0x3ab7b};
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
          discarded_appearance_results != expected_appearance_calls - expected_retained_calls.size() ||
          retained_appearance_calls != expected_retained_calls) {
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
                   "reachable path; 7 retain their explicit service frontier\n";
      std::cout << npc_faces << " NPC and " << sprite_faces
                << " sprite-facing calls have literal inputs and unused pose returns\n";
      std::cout << bounds_calls.size() << " movement bounds calls preserve both literal extent words\n";
      std::cout << bounds_queries.size() << " movement bounds queries preserve their scalar direction results\n";
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
