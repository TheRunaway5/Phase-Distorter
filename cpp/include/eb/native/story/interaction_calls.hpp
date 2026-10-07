#pragma once

#include "eb/native/npcs/interaction.hpp"
#include "eb/native/npcs/interaction_queue.hpp"
#include "eb/native/story/scene.hpp"
#include <functional>

namespace eb::native::story {
enum class InteractionCallService { Scene, Sound, PartySpriteBlink, Door };
// Reads the authoritative ENTITY_FADE_ENTITY lifecycle, after the source's
// mandatory WindowTick. This is not brightness, actor visibility or a timer.
// The actual actor/fade owner must supply it; no default completion is assumed.
using EntityFadePending = std::function<bool()>;

// Complete OPEN_MENU_BUTTON_CHECKTALK and C10004 caller sequencing. Selection,
// windows, dialogue and frames use their existing owners. Main-loop buttons,
// the A-button menu, contact detection, audio and sprite-fade execution
// remain separate owners. All borrowed owners outlive this instance/operations;
// work-budget yields never authorize polling, ticking or mutating game state.
class InteractionCalls {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation&) = delete;
        Operation& operator=(const Operation&) = delete;
        dialogue::Progress advance(unsigned work_budget = 4096);
        const std::optional<InteractionCallService>& service() const;
        // Complete the exposed Scene service through its normal typed methods,
        // then advance this caller. Unknown actor/dialogue/battle work stays
        // pending; serving this API does not invent a result for it.
        Scene::Operation& scene_operation();
        std::uint16_t sound() const;
        void respond_sound();
        // C07C5B clears party-actor sprite blink flags, not meter selection.
        // The native appearance owner must actually complete this operation.
        void respond_party_sprite_blink();
        dialogue::ReferenceKey door_reference() const;
        void respond_door();
        bool complete() const;
        dialogue::ReferenceKey selected_reference() const;
      private:
        friend class InteractionCalls;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    // Binds these interactions to Scene for gift commands. The interaction
    // owner and its final event-flag allocation must also outlive the Scene.
    InteractionCalls(std::shared_ptr<const dialogue::Program>, npcs::Interactions&,
                     dialogue::PromptHost&, Scene&, EntityFadePending);
    InteractionCalls(std::shared_ptr<const dialogue::Program>, npcs::Interactions&,
                     dialogue::MenuHost&, Scene&, EntityFadePending);
    ~InteractionCalls();
    InteractionCalls(const InteractionCalls&) = delete;
    InteractionCalls& operator=(const InteractionCalls&) = delete;
    // Pauses actors, sound1, Talk then Check then NOPROBLEM; displays text,
    // clears instant printing, hides meters, closes all windows, waits for
    // actor fading with at least one WindowTick, then resumes live actors.
    std::unique_ptr<Operation> begin_check_talk();
    // C10004: pause, display the supplied key, mandatory fade-wait WindowTick,
    // resume. It deliberately does not clear instant/hide meters/close windows.
    // Null text still executes this caller's pause/tick/resume sequence.
    std::unique_ptr<Operation> begin_queued_text(dialogue::ReferenceKey);
    // Complete one PROCESS_QUEUED_INTERACTIONS call. Queue publication/routing
    // uses the actual scene intangibility word. Text executes C10004 here;
    // unowned sprite blink and door transitions remain typed pending services.
    // The outer world loop, not this function, decides whether to process.
    std::unique_ptr<Operation> begin_process_queue(npcs::InteractionQueue&);
  private:
    struct Execution;
    std::unique_ptr<Execution> execution_;
    std::unique_ptr<Operation> begin(bool quick, dialogue::ReferenceKey, npcs::InteractionQueue* = nullptr);
};
} // namespace eb::native::story
