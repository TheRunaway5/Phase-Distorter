#pragma once

#include "eb/native/actor_world.hpp"
#include "eb/native/world_scene.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/story/input.hpp"
#include "eb/native/story/ticks.hpp"

namespace eb::native {struct WorldControlState;namespace math {class SoftwareArithmeticState;}  class WorldDisplayFade; struct WorldEncounterVisualState; class WorldEncounterEffects; class WorldInputPlayback; class PeripheralState; class WorldRuntime; }
namespace eb::native::battle { class AnimationCommands; class Frame; class FrameDisplay; class PsiDisplayState; class Roster; struct FrameState; struct PaletteBankState; struct PsiScratch; }
namespace eb::native::npcs { class Interactions; }
namespace eb::native::party { class Inventory; }

namespace eb::native::story {
class BattleDialogue;
class Scene;
class SourceWorkService;
class CopyCounterState;
class SourceWorkClock;
class AudioFrameClock;
class SourceFrameInput;
struct SourceFrameInputContext;
struct SourceFrameInputReceipt;
class SourceScreenUpdate;
class SourceObjectPreparation;
class SourceActorDraw;
class SourceGlobalDraw;
struct SourceGlobalDrawContext;
struct SourceGlobalDrawCall;
struct SourceActorDrawContext;
struct SourceActorDrawCall;
struct SourceObjectContext;
struct SourceObjectCall;
struct SourceObjectReceipt;
struct SourceScreenContext;
struct SourceScreenReceipt;
class SourceMeterStatus;
struct SourceMeterStatusContext;struct SourceMeterStatusCall;struct SourceMeterStatusReceipt;
class SourceMeterTiles;
struct SourceMeterTilesContext;
struct SourceMeterTilesCall;
struct SourceMeterTilesReceipt;
class SourceMeterRoller;
struct SourceMeterRollerContext;
struct SourceMeterRollerCall;
struct SourceMeterRollerReceipt;
class SourceRandom;
struct SourceRandomContext;
struct SourceRandomReceipt;
class SourceWindowPublication;
struct SourceWindowPublicationContext;
struct SourceWindowPublicationCall;
struct SourceWindowPublicationReceipt;
class SourceForegroundWork;
struct SourceForegroundContext;
struct SourceForegroundReceipt;
enum class ActorFramePhase { ObjectsCleared, BeforeScreen, ScreenUpdated };
// Synchronous source phases surrounding the real actor pump. The child owns
// the Scene throughout; this service may not start a competing operation.
class ActorFrameService {
public:
    virtual ~ActorFrameService() = default;
    virtual bool uses(const Scene &) const noexcept = 0;
    virtual void apply(ActorFramePhase) = 0;
};
class PartyFormation;
class TeddyParty;
enum class SceneService { Frame, ActorEngine, CameraRefresh, BattleHelper, Dialogue, PartySpriteBlink, TeddyRefresh, ItemFailureScan, ScriptSound, BicycleDismount, Publication, ScreenUpdate, ForegroundPrefix, SuppressedActors, ForegroundReturn, WindowPublication, SourceRandom, SourceMeterRoller, SourceMeterTiles, SourceMeterStatus };
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
    virtual bool changes_display_registers() const noexcept { return false; }
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
    // Retained display-bank selection follows the source interrupt callback.
    virtual void complete_interrupt() noexcept {}
    virtual void stage_world_objects(std::shared_ptr<const DirectSceneFrame>) {}
    virtual dialogue::WindowPalettePublication *window_palette_publication() noexcept { return nullptr; }
    virtual const WorldDisplayFade *display_fade() const noexcept { return nullptr; }
    virtual const WorldEncounterVisualState *publication_visual() const noexcept { return nullptr; }
    virtual bool uses_visual(const WorldEncounterVisualState &) const noexcept { return false; }
    virtual const battle::FrameDisplay *frame_display() const noexcept { return nullptr; }
    virtual bool uses_frame_display(const battle::FrameDisplay &display) const noexcept {
        return frame_display() == &display;
    }
    virtual bool uses_palette_transport(const battle::PaletteBankState &) const noexcept { return false; }
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
    // One pinned physical NMI. Source work advances the actual low bytes at
    // their early stores, commits display separately, then calls the retained
    // callback and rotates the real transient heap at their authored phases.
    // Abandoning any incomplete phase poisons the same Scene.
    class SourceInterrupt {
    public:
        ~SourceInterrupt();
        SourceInterrupt(const SourceInterrupt &) = delete;
        SourceInterrupt &operator=(const SourceInterrupt &) = delete;
        void increment_pending();
        void increment_counter();
        void publish();
        void callback();
        void rotate_heap();
        void complete();
    private:
        friend class Scene;
        SourceInterrupt(Scene &,FrameBoundaryService *);
        void check() const;
        Scene &scene_;
        FrameBoundaryService *boundary_{};
        unsigned phase_{};
        bool complete_{};
    };
    std::unique_ptr<SourceInterrupt> begin_source_interrupt(FrameBoundaryService * = nullptr);
    void bind_source_work(SourceWorkService &,const battle::PsiDisplayState &);
    void clear_source_work(const SourceWorkService &) noexcept;
    bool uses_source_work(const SourceWorkService &) const noexcept;
    void bind_source_input(WorldInputPlayback &);
    // Clear the live OAM builder, preserving already staged and published
    // immutable screens and the UPDATE_SCREEN buffer selection.
    void reset_object_builder() noexcept;
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
        // Acknowledge this child's fresh completed SourceWork NMI receipt.
        // Performs no publication, callback, heap rotation, time or input.
        void respond_source_publication();
        std::unique_ptr<SourceFrameInput> begin_source_frame(SourceWorkClock &, AudioFrameClock &,
            PeripheralState &, WorldInputPlayback &, SourceFrameInputContext);
        void respond_source_frame(SourceFrameInput &);
        std::unique_ptr<SourceObjectPreparation> begin_source_objects(SourceWorkClock&,SourceObjectContext,SourceObjectCall);
        void respond_source_objects(SourceObjectPreparation&);
        std::unique_ptr<SourceActorDraw> begin_source_actor_draw(SourceWorkClock&,SourceActorDrawContext,SourceActorDrawCall);
        void respond_source_actor_draw(SourceActorDraw&);
        std::unique_ptr<SourceGlobalDraw> begin_source_global_draw(SourceWorkClock&,SourceGlobalDrawContext,SourceGlobalDrawCall);
        void respond_source_global_draw(SourceGlobalDraw&);
        std::unique_ptr<SourceScreenUpdate> begin_source_screen(SourceWorkClock&,SourceScreenContext);
        void respond_source_screen(SourceScreenUpdate&);
        std::unique_ptr<SourceMeterStatus> begin_source_meter_status(SourceWorkClock&,SourceMeterStatusContext,SourceMeterStatusCall);
        void respond_source_meter_status(SourceMeterStatus&);
        std::unique_ptr<SourceMeterTiles> begin_source_meter_tiles(SourceWorkClock&,SourceMeterTilesContext,SourceMeterTilesCall);
        void respond_source_meter_tiles(SourceMeterTiles&);
        std::unique_ptr<SourceMeterRoller> begin_source_meter_roller(SourceWorkClock&,SourceMeterRollerContext,SourceMeterRollerCall);
        void respond_source_meter_roller(SourceMeterRoller&);
        std::unique_ptr<SourceRandom> begin_source_random(SourceWorkClock&,SourceRandomContext);
        void respond_source_random(SourceRandom&);
        std::unique_ptr<SourceWindowPublication> begin_source_window_publication(SourceWorkClock&,SourceWindowPublicationContext,SourceWindowPublicationCall);
        void respond_source_window_publication(SourceWindowPublication&);
        std::unique_ptr<SourceForegroundWork> begin_source_foreground(SourceWorkClock&,SourceForegroundContext);
        void respond_source_foreground(SourceForegroundWork&);
        // Complete the required boundary and real input poll, then resume.
        // A wrapped pending byte leaves WAIT suspended for another NMI.
        // Debug/input globals come from the shared WindowHost prompt state.
        void complete_frame(std::array<std::uint16_t, 2> raw);
        void complete_frame(std::array<std::uint16_t, 2> host, FrameBoundaryService &);
        const std::optional<WorldActionRequest> &actor_request() const;
        bool window_animation_active(const WorldEncounterEffects &) const;
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
        bool uses(const Scene &) const noexcept;
        bool is_child_of(const Operation &) const noexcept;
      private:
        friend class Scene;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        void complete_publication_impl(FrameBoundaryService *);
        void complete_frame_impl(std::array<std::uint16_t, 2>, FrameBoundaryService *);
        std::shared_ptr<SourceFrameInputReceipt> pin_source_frame(SourceWorkService &,
            WorldInputPlayback &, std::function<void(TickState &)>);
        std::shared_ptr<SourceObjectReceipt> pin_source_objects(SourceWorkService&,
            std::function<void(TickState&,const battle::FrameDisplay&)>);
        std::shared_ptr<SourceObjectReceipt> pin_source_global_draw(SourceWorkService&,
            std::function<void(TickState&,const battle::FrameDisplay&,const InputState&,const ActorWorld&)>);
        std::shared_ptr<SourceScreenReceipt> pin_source_screen(SourceWorkService&,
            std::function<void(TickState&,const battle::FrameDisplay&,SourceObjectReceipt*)>);
        std::shared_ptr<SourceMeterStatusReceipt> pin_source_meter_status(SourceWorkService&,const void*,const void*,const void*,
            std::function<void(TickState&,const battle::FrameDisplay&,party::State&,party::MeterWindows&,dialogue::WindowHost&,const void*)>);
        std::shared_ptr<SourceMeterTilesReceipt> pin_source_meter_tiles(SourceWorkService&,const void*,const void*,
            std::function<void(TickState&,const battle::FrameDisplay&,party::State&,party::MeterWindows&,dialogue::WindowHost&,const void*)>);
        std::shared_ptr<SourceMeterRollerReceipt> pin_source_meter_roller(SourceWorkService&,
            std::function<void(TickState&,const battle::FrameDisplay&,party::State&,dialogue::WindowHost&,const void*)>);
        std::shared_ptr<SourceRandomReceipt> pin_source_random(SourceWorkService&,
            std::function<void(TickState&,const battle::FrameDisplay&,RandomState&,const void*)>);
        std::shared_ptr<SourceWindowPublicationReceipt> pin_source_window_publication(SourceWorkService&,
            std::function<void(TickState&,const battle::FrameDisplay&,dialogue::WindowHost&,const WorldDisplayFade&)>);
        std::shared_ptr<SourceForegroundReceipt> pin_source_foreground(SourceWorkService&,
            std::function<void(TickState&,const battle::FrameDisplay&)>);
        std::unique_ptr<Execution> execution_;
    };
    Scene(dialogue::WindowHost &, party::State &, RandomState &, party::MeterWindows &,
          TickState &, InputState &, ActorWorld &, WorldMapArea &, AreaPalettes &, SceneView = {});
    ~Scene();
    Scene(const Scene &) = delete;
    Scene &operator=(const Scene &) = delete;
    std::unique_ptr<Operation> begin(TickKind);
    // Explicit C1004E-only entry; ordinary timed WorldFrame remains unchanged.
    std::unique_ptr<Operation> begin_source_world_frame(SourceWorkClock&,SourceForegroundContext);
    // Opt-in named-helper seam; the semantic prefix consumes no source time.
    std::unique_ptr<Operation> begin_source_window_tick(SourceWorkClock&,SourceWindowPublicationContext);
    // Separate opt-in RAND-only source component, before semantic RNG mutation.
    std::unique_ptr<Operation> begin_source_meter_window_tick(SourceWorkClock&,SourceMeterRollerContext);
    std::unique_ptr<Operation> begin_source_meter_status_window_tick(SourceWorkClock&,SourceMeterStatusContext,
        WorldControlState&,CopyCounterState&,battle::PaletteBankState&);
    std::unique_ptr<Operation> begin_source_meter_tiles_window_tick(SourceWorkClock&,SourceMeterTilesContext,
        WorldControlState&,math::SoftwareArithmeticState&);
    std::unique_ptr<Operation> begin_source_random_window_tick(SourceWorkClock&,SourceRandomContext);
    // One real NMI publication; no Ticks traversal or WAIT/input consumption.
    std::unique_ptr<Operation> begin_publication();
    std::unique_ptr<Operation> begin_nested_publication(Operation &parent);
    std::unique_ptr<Operation> begin_actor_publication(Operation &parent);
    void require_content_boundary(Operation *parent = nullptr) const;
    dialogue::Conversation &dialogue_owner(Operation &parent);
    // A physical NMI during a synchronous peripheral handshake publishes the
    // retained screen without advancing or acknowledging any logical child.
    void interrupt_publication(FrameBoundaryService * = nullptr);
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
    std::unique_ptr<Operation> begin_actor_frame(ActorFrameService &);
    std::unique_ptr<Operation> begin_nested_actor_frame(ActorFrameService &, Operation &parent);
    // Validate an actual synchronous callback before its owner mutates state.
    // Actor callbacks retain their live tick; dialogue/formation callbacks
    // have no tick and may run a real frame child before receiving a reply.
    void require_nested(const Operation &parent) const;
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
    bool uses(const RandomState &) const noexcept;
    bool uses(const ActorWorld &) const noexcept;
    bool uses(const TickState &) const noexcept;
    bool uses_battle_menu(const battle::Roster&, const battle::FrameState&, const battle::PaletteBankState&, const battle::PsiScratch&, const RandomState&) const noexcept;
    bool uses(const InputState &) const noexcept;
    bool uses(const dialogue::WindowHost&, const party::State&) const noexcept;
    bool uses(const BattleDialogue&) const noexcept;
    bool uses(const PartyFormation&) const noexcept;
    void clear_world_capture(Operation *parent = nullptr);
    void refresh_world_capture(Operation *parent = nullptr);
    bool shares_world(const dialogue::WindowHost&, const ActorWorld&) const;
    bool failed() const noexcept;
    bool busy() const noexcept;
    std::uint64_t completed_frames() const;
    std::shared_ptr<const DirectSceneFrame> frame() const;
    std::vector<WorldSoundEvent> take_sound_events();
  private:
    friend class eb::native::WorldRuntime;
    struct Execution;
    std::unique_ptr<Execution> execution_;
    void require_nested_impl(const Operation &, bool camera_publication) const;
    std::unique_ptr<Operation> begin_source_meter_status_window_tick_impl(SourceWorkService&,
        std::function<void(TickState&,const battle::FrameDisplay&,party::State&,party::MeterWindows&,dialogue::WindowHost&)>,
        std::function<void()>,const void*,const void*,const void*);
    std::unique_ptr<Operation> begin_source_meter_tiles_window_tick_impl(SourceWorkService&,
        std::function<void(TickState&,const battle::FrameDisplay&,party::State&,party::MeterWindows&,dialogue::WindowHost&)>,
        std::function<void()>,const void*,const void*);
    std::unique_ptr<Operation> begin_source_meter_window_tick_impl(SourceWorkService&,
        std::function<void(TickState&,const battle::FrameDisplay&,party::State&,dialogue::WindowHost&)>);
    std::unique_ptr<Operation> begin_source_random_window_tick_impl(SourceWorkService&,
        std::function<void(TickState&,const battle::FrameDisplay&,RandomState&)>);
    std::unique_ptr<Operation> begin_source_window_tick_impl(SourceWorkService&,
        std::function<void(TickState&,const battle::FrameDisplay&,dialogue::WindowHost&,const WorldDisplayFade&)>);
    std::unique_ptr<Operation> begin_source_world_frame_impl(SourceWorkService&,
        std::function<void(TickState&,const battle::FrameDisplay&)>);
    std::unique_ptr<Operation> begin(std::optional<TickKind>, dialogue::Conversation *, Operation *,
                                     std::optional<dialogue::WindowEffect> = {},
                                     std::optional<std::array<std::uint16_t, 2>> animation = {},
                                     bool battle_wait = false, bool camera_publication = false);
};
} // namespace eb::native::story
