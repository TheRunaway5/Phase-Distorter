#pragma once

#include "eb/native/actor_creation.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/entities/npc_collision.hpp"
#include "eb/native/npcs/interaction_resources.hpp"
#include "eb/native/npcs/map_text.hpp"
#include "eb/native/world_collision.hpp"

namespace eb::native::npcs {
enum class InteractionAction { Talk, Check };
enum class GiftAction { Open, Close, IsOpen };
// Creation/lifecycle facts that ActorWorld does not otherwise own. Position,
// facing, velocity, collision disable and liveness always come from ActorWorld.
// Changing displayed artwork never replaces these creation hitboxes.
struct InteractionBody {
    std::uint16_t npc_id = 0xffff, hitbox_enabled{};
    entities::CollisionHitbox lateral, vertical;
};
struct InteractionState {
    ActorId leader{};
    // Source party coordinates/direction are independent of actor pose and
    // fractional coordinates. The party movement owner maintains these words.
    std::uint16_t leader_x{}, leader_y{}, leader_direction{};
    std::uint16_t movement_flags{}, walking_style{}, demo_frames{};
    std::uint16_t interacting_npc = 0xffff;
    std::uint16_t current_event_flag{};
    std::optional<ActorId> interacting_actor, collision_actor;
    CollisionPoint checked_surface_origin;
    std::uint16_t surface_flags{};
    MapTextState map_text;
};
struct InteractionSelection {
    dialogue::ReferenceKey reference{};
    std::optional<dialogue::Location> text;
};

// The original TALK_TO and CHECK operations: open the standard text window,
// search live actors/counters/map text, then prepare the selected dialogue.
// Talk turns/stops a person. Check prepares item/money registers and the gift
// event flag, but never changes inventory or executes the returned dialogue.
// It does not choose the caller's Talk/Check fallback, pause actors, execute
// dialogue, invent spawns, or run a game tick when its work budget expires.
// Borrowed owners must outlive Interactions and remain stable during an operation; Interactions
// must outlive its Operation. Abandoning a partially executed operation poisons
// this interaction owner without rolling back already applied world/window changes.
// Complete the operation before resuming world updates or another interaction.
class Interactions {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation&) = delete;
        Operation& operator=(const Operation&) = delete;
        dialogue::Progress advance(unsigned work_budget = 4096);
        const std::optional<dialogue::WindowEffect>& effect() const;
        // Complete the real window effect before acknowledging it. A Scene
        // can drive that effect through Scene::begin(WindowEffect).
        void respond();
        bool complete() const;
        const InteractionSelection& selection() const;
      private:
        friend class Interactions;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    Interactions(std::shared_ptr<const InteractionResources>, std::shared_ptr<const MapTextResources>,
         std::shared_ptr<const dialogue::Program>, dialogue::WindowHost&, ActorWorld&,
         const WorldCollision&, const WorldMapArea&);
    ~Interactions();
    Interactions(const Interactions&) = delete;
    Interactions& operator=(const Interactions&) = delete;
    // Every live actor must have creation geometry before a collision query.
    // Precedence comes from the world lifecycle, not distance, drawing order or
    // allocation identity. Source fixtures use physical slot order; the native
    // list has no 23-actor limit. Erased actors never remain collision targets.
    // Detach their metadata before reusing its explicit precedence.
    void attach(ActorId, std::uint64_t precedence, const ActorCreationMetadata&, std::uint16_t npc_id);
    void detach(ActorId);
    InteractionBody& body(ActorId);
    InteractionState& state();
    const InteractionState& state() const;
    const dialogue::Program& program() const;
    // Explicit caller operations C0943C/C09451, separate from TALK_TO. Resume
    // clears both pause controls on currently live actors, including newcomers;
    // it does not restore a saved set of actors or their previous booleans.
    void set_actors_paused(bool);
    // CC1FA0/A1 write the current interaction flag, then refresh the selected
    // live actor from its own NPC flag. The two flags need not be identical.
    // Returns SET_EVENT_FLAG's updated byte; IsOpen returns the current flag's
    // predicate and does not require an actor. Stale targets fail after the
    // source-ordered flag write, without fabricating a replacement actor.
    std::uint16_t apply_gift(GiftAction);
    // Explicitly bind an unbound ActorWorld span after final flag allocation,
    // or require an identical existing binding. That
    // allocation must outlive ActorWorld and remain stable; resizing/replacing
    // it invalidates the binding and is rejected by subsequent gift commands.
    void bind_event_flags();
    dialogue::WindowHost& windows() const;
    ActorWorld& actors() const;
    std::unique_ptr<Operation> begin(InteractionAction = InteractionAction::Talk);
  private:
    struct Execution;
    std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::npcs
