#pragma once

#include "eb/native/actor_world.hpp"
#include "eb/native/world_scene.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/story/input.hpp"
#include "eb/native/story/ticks.hpp"

namespace eb::native { class WorldDisplayFade; struct WorldEncounterVisualState; }
namespace eb::native::battle { class AnimationCommands; class Frame; class FrameDisplay; }
namespace eb::native::npcs { class Interactions; }
namespace eb::native::party { class Inventory; }

namespace eb::native::story {
class BattleDialogue;
class PartyFormation;
class TeddyParty;
enum class SceneService { Frame, ActorEngine, CameraRefresh, BattleHelper, Dialogue, PartySpriteBlink, TeddyRefresh, ItemFailureScan, ScriptSound, BicycleDismount, Publication };
enum class FrameRequirement { NmiPublication, VBlank, InputOnly };
struct SceneView {
    unsigned width = 256, overscan = 64;
    std::uint64_t identity = 1;
    std::uint32_t backdrop = 0xff000000;
    bool raised_windows = true;
};

// NMI publication invokes scheduled IRQ work without polling input. WAIT can
// subsequently consume that pending frame. All callbacks borrow stable owners;
// validation is read-only, and post-publication failures poison the Scene.
class FrameBoundaryService {
public:
    virtual ~FrameBoundaryService() = default;
    virtual void validate_publication() const = 0;
    virtual void after_publication() = 0;
    virtual void validate_input() const = 0;
    virtual std::array<std::uint16_t, 2>
        read_input(std::array<std::uint16_t, 2> host) = 0;
};

// The scene owns publication order; an optional native compositor captures
// current palette/effects without advancing any logical owner. Only a completed
// logical frame commits publication-dependent state.
class ScenePublication {
public:
    virtual ~ScenePublication() = default;
    virtual std::shared_ptr<const DirectSceneFrame> capture(const DirectSceneFrame &) const = 0;
    // A frame-boundary capture may consume pending display transfers only after
    // constructing a valid immutable result. Ordinary capture stays read-only.
    virtual std::shared_ptr<const DirectSceneFrame> capture_next(const DirectSceneFrame &source) {
        return capture(source);
    }
    // A non-null owner means capture composes that host's actual published
    // windows itself. Scene validates identity and passes only the frame stamp.
    virtual const dialogue::WindowHost *window_host() const noexcept { return nullptr; }
    virtual void complete_publication() = 0;
    virtual dialogue::WindowPalettePublication *window_palette_publication() noexcept { return nullptr; }
    virtual const WorldDisplayFade *display_fade() const noexcept { return nullptr; }
    virtual const WorldEncounterVisualState *publication_visual() const noexcept { return nullptr; }
    virtual bool uses_visual(const WorldEncounterVisualState &) const noexcept { return false; }
    virtual const battle::FrameDisplay *frame_display() const noexcept { return nullptr; }
    virtual bool uses_frame_display(const battle::FrameDisplay &display) const noexcept {
        return frame_display() == &display;
    }
    // Admission verifies the setup child and display publisher borrow the
    // same transport, palette, background and scratch owners.
    virtual bool supports_animation(const battle::AnimationCommands &) const noexcept { return false; }
    virtual bool supports_battle_frame(const battle::Frame &) const noexcept { return false; }
};

// Runs native story effects against the real actor world and immutable scene
// renderer. Borrowed owners must remain alive and stable. Area preparation,
// activation, map animation and audio playback have their own source entry
// points: neither screen sampling nor a dialogue frame invents those calls.
class Scene {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        dialogue::Progress advance(unsigned work_budget = 4096);
        const std::optional<SceneService> &service() const;
        // WAIT either requires a physical boundary or consumes an already
        // pending NMI. Publication-only transfer waits never poll input.
        FrameRequirement frame_requirement() const;
        void complete_publication();
        void complete_publication(FrameBoundaryService &);
        // Complete the required boundary and real input poll, then resume.
        // A wrapped pending byte leaves WAIT suspended for another NMI.
        // Debug/input globals come from the shared WindowHost prompt state.
        void complete_frame(std::array<std::uint16_t, 2> raw);
        void complete_frame(std::array<std::uint16_t, 2> host, FrameBoundaryService &);
        const std::optional<WorldActionRequest> &actor_request() const;
        void respond_actor(std::uint16_t value = 0, unsigned parameter_bytes = 0,
                           std::optional<std::uint16_t> sleep_frames = std::nullopt);
        const std::optional<WorldCameraRefresh> &camera_request() const;
        void respond_camera();
        // Only explicitly unported battle work and dialogue/audio callbacks
        // leave these requests. The owner completes the service before reply.
        void respond_battle();
        // Acknowledges C07C5B only after the appearance owner clears party
        // sprite blink flags. This operation never clears meter selection.
        void respond_party_sprite_blink();
        // GIVE_ITEM's teddy operation includes actual party/entity lifecycle.
        // The owner completes that work before acknowledging this boundary.
        void respond_teddy_refresh();
        // CC1D0E calls its empty-slot helper even when receipt returned zero.
        // That source alias reads photo25/26 bytes, not a character inventory.
        // A real shared photo owner must scan them; no default index is used.
        void respond_item_failure_scan(std::uint16_t first_empty);
        // Complete the explicit PLAY_SOUND audio service before its mandatory
        // C12E42 world update. Acknowledgment alone does not prove playback.
        const dialogue::ScriptSoundRequest &script_sound() const;
        void respond_script_sound();
        // Formation stops here only when its real movement-policy helper
        // requires C03CFD. The actor/audio/frame lifecycle must finish first.
        void respond_bicycle_dismount();
        const std::optional<dialogue::ConversationEvent> &dialogue_event() const;
        void respond_dialogue(dialogue::Response);
        bool complete() const;
      private:
        friend class Scene;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        void complete_publication_impl(FrameBoundaryService *);
        void complete_frame_impl(std::array<std::uint16_t, 2>, FrameBoundaryService *);
        std::unique_ptr<Execution> execution_;
    };
    Scene(dialogue::WindowHost &, party::State &, RandomState &, party::MeterWindows &,
          TickState &, InputState &, ActorWorld &, WorldMapArea &, AreaPalettes &, SceneView = {});
    ~Scene();
    Scene(const Scene &) = delete;
    Scene &operator=(const Scene &) = delete;
    std::unique_ptr<Operation> begin(TickKind);
    // One real NMI publication; no Ticks traversal or WAIT/input consumption.
    std::unique_ptr<Operation> begin_publication();
    // Complete C43568: one real WAIT followed by the bound C2DB3F body.
    std::unique_ptr<Operation> begin_battle_frame();
    std::unique_ptr<Operation> begin_nested_battle_frame(Operation &parent);
    std::unique_ptr<Operation> begin_animation(std::uint16_t ally, std::uint16_t enemy);
    std::unique_ptr<Operation> begin_nested_animation(std::uint16_t ally, std::uint16_t enemy, Operation &parent);
    // Complete a standalone window operation's actual yielded effect. The
    // caller acknowledges that window operation only after this completes.
    std::unique_ptr<Operation> begin(dialogue::WindowEffect);
    // The conversation has already been started against this scene's host.
    std::unique_ptr<Operation> begin(dialogue::Conversation &);
    // An actor's suspended engine service can call dialogue synchronously.
    // Recursive ticks retain the parent's actor guard and cannot pump actors.
    std::unique_ptr<Operation> begin_nested(dialogue::Conversation &, Operation &parent);
    // Scripted lifecycle work can use raw ActorFrame/Frame operations while
    // an actor callback is suspended. Reuse this scene's clock, cached screen
    // and live guard; never start another ActorWorld traversal recursively.
    std::unique_ptr<Operation> begin_nested(TickKind, Operation &parent);
    // Bind stable authoritative services before execution. They must outlive
    // this Scene; rebinding to different owners is rejected. Interaction flags
    // must already have their final allocation, shared directly with actors.
    void bind_interactions(npcs::Interactions&);
    void bind_inventory(party::Inventory&);
    void bind_party_formation(PartyFormation&);
    void bind_teddy_party(TeddyParty&);
    void bind_world_control(WorldControlCommandService&);
    void bind_battle_animations(battle::AnimationCommands&);
    void bind_battle_frame(battle::Frame&);
    // Loading explicitly invalidates old object artwork. Refreshing scenery
    // retains that capture state and never simulates actors or consumes input.
    void bind_publication(ScenePublication &);
    struct BattleServices {
        battle::Frame *frame{};
        battle::AnimationCommands *animations{};
    };
    // An explicit source loading phase changes routing while forced blank.
    // All owners are admitted before replacement. The current immutable frame
    // remains visible to borrowers until a subsequent real publication.
    void handoff_publication(ScenePublication &expected, ScenePublication &next,
                             const WorldDisplayFade &, BattleServices);
    const ScenePublication *publication() const noexcept;
    bool uses(const TickState &) const noexcept;
    bool uses(const dialogue::WindowHost&, const party::State&) const noexcept;
    bool uses(const BattleDialogue&) const noexcept;
    bool uses(const PartyFormation&) const noexcept;
    void clear_world_capture();
    void refresh_world_capture();
    bool shares_world(const dialogue::WindowHost&, const ActorWorld&) const;
    bool failed() const noexcept;
    bool busy() const noexcept;
    std::uint64_t completed_frames() const;
    std::shared_ptr<const DirectSceneFrame> frame() const;
    std::vector<WorldSoundEvent> take_sound_events();
  private:
    struct Execution;
    std::unique_ptr<Execution> execution_;
    std::unique_ptr<Operation> begin(std::optional<TickKind>, dialogue::Conversation *, Operation *,
                                     std::optional<dialogue::WindowEffect> = {},
                                     std::optional<std::array<std::uint16_t, 2>> animation = {},
                                     bool battle_wait = false);
};
} // namespace eb::native::story
