#pragma once

#include "eb/native/actor_creation.hpp"
#include "eb/native/camera_refresh.hpp"
#include <memory>

namespace eb::native {

enum class NpcSpawnMode { Disabled, Initial, Streaming };
struct NpcActivationDebug {
    bool enabled{}, shoulder_buttons_held{};
    std::uint16_t mode{};
};
struct NpcActivationState {
    CameraPosition camera;
    NpcSpawnMode mode = NpcSpawnMode::Disabled;
    unsigned tileset{};
    std::span<const std::uint8_t> event_flags;
    bool objects_only{}, photograph{};
    NpcActivationDebug debug;
    // CREATE_ENTITY inherits prepared height/variables. Position and facing
    // below come from the NPC placement/definition, never this prepared value.
    // Authored role allocation supplies the walking phase, replacing phase_id.
    PreparedActorState prepared;
};

// The authored strip wrappers inspect an uninitialized local before their
// traversal. The native caller must own this admission decision explicitly;
// there is no hidden stack residue or default assumption in this API.
enum class NpcStripAdmission { Rejected, Admitted };

struct NpcActivation {
    ActorId actor{};
    NpcCandidate candidate;
    unsigned sprite{}, direction{};
};

// C0C6B6's authored script predicate. This does not remove an actor. Scripts
// decide when to check it, release their graphics and end their task.
bool npc_within_retention_area(std::uint16_t x, std::uint16_t y,
                              std::uint16_t leader_x, std::uint16_t leader_y,
                              std::uint16_t teleport_speed);

// Owns ordered activation traversal, not artwork preparation or simulation.
// Every successful placement immediately becomes a real ActorWorld actor,
// so later candidates in the same call observe its NPC identity. No script,
// motion, RNG, collision or appearance callback runs during activation. Normal
// NPCs occupy authored logical roles [0,22); exhaustion fails explicitly rather
// than skipping a placement or overwriting another actor.
class WorldActivation {
  public:
    class RawOperation {
      public:
        ~RawOperation();
        RawOperation(const RawOperation &)=delete;
        bool advance(unsigned work_budget=256);
        bool needs_publication() const noexcept;
        void respond_publication();
        std::span<const NpcActivation> created() const noexcept {return created_;}
      private:
        friend class WorldActivation;
        RawOperation(WorldActivation &,ActorWorld &,RawActorCreation &,
                     NpcActivationState,NpcStripAdmission);
        WorldActivation &owner_;
        ActorWorld &world_;
        RawActorCreation &graphics_;
        NpcActivationState state_;
        std::vector<NpcPlacement> placements_;
        std::vector<NpcActivation> created_;
        std::unique_ptr<RawActorCreation::Operation> creation_;
        std::optional<NpcCandidate> candidate_;
        unsigned next_{};
        bool done_{},executing_{};
    };
    WorldActivation(std::shared_ptr<const NpcCatalog> npcs,
                    std::shared_ptr<SpriteResources> sprites,
                    std::shared_ptr<const ActionScriptData> scripts,
                    GameVersion version, CameraStreamOrigin origin = {});

    CameraStreamOrigin origin() const { return origin_; }
    // C46914 reads the current live role selector, not the placement or its
    // current facing. The same imported catalog also owns activation.
    std::uint16_t initial_direction(const ActorWorld &, ActorId) const;
    // Begin source-ordered REFRESH_MAP_AT_POSITION strips. Starting another
    // traversal while one is pending is rejected. Origin commits only after
    // every NPC and enemy request has been consumed.
    void begin_refresh(CameraPosition camera);
    // LOAD_MAP_AT_POSITION: 32 NPC rows, then 48 enemy rows. The caller owns
    // scene cleanup and the Initial -> Streaming mode transition. No cleanup
    // is inferred from visibility. Center is the authored screen center.
    void begin_initial_load(CameraPosition center);
    // RELOAD_MAP_AT_POSITION changes the completed camera origin only.
    // It performs no NPC/enemy traversal or population mutation.
    void reset_after_reload(CameraPosition center);
    const std::optional<CameraRefreshIntent> &request() const { return request_; }
    CameraPosition target_camera() const { return camera_; }
    std::vector<NpcActivation> activate_next(ActorWorld &world, const NpcActivationState &state,
                                             NpcStripAdmission admission);
    std::unique_ptr<RawOperation> begin_next(ActorWorld &,const NpcActivationState &,
                                           NpcStripAdmission,RawActorCreation &);
    // Only acknowledge after the authoritative enemy owner finishes this exact
    // request. An unhandled enemy request blocks the remaining NPC traversal.
    void complete_enemy_request();

    // Explicit domain operations also support authored non-camera callers and
    // focused references. Cell order is the imported placement-list order.
    std::vector<NpcActivation> activate_cell(ActorWorld &world, unsigned cell_x, unsigned cell_y,
                                             const NpcActivationState &state) const;
    std::vector<NpcActivation> activate_strip(ActorWorld &world, const CameraRefreshIntent &intent,
                                              const NpcActivationState &state,
                                              NpcStripAdmission admission) const;

  private:
    std::optional<WorldActorSpec> prepare_candidate(ActorWorld &,const NpcPlacement &,
                                                  const NpcActivationState &) const;
    void begin(CameraRefreshPlan plan, CameraPosition camera);
    void complete_request();
    std::shared_ptr<const NpcCatalog> npcs_;
    std::shared_ptr<SpriteResources> sprites_;
    std::shared_ptr<const ActionScriptData> scripts_;
    unsigned photograph_script_{};
    CameraStreamOrigin origin_;
    CameraPosition camera_;
    CameraRefreshPlan plan_;
    std::size_t next_{};
    std::optional<CameraRefreshIntent> request_;
    RawOperation *active_{};
    bool failed_{};
};
} // namespace eb::native
