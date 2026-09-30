#pragma once

#include "eb/native/dialogue/prompt_host.hpp"
#include "eb/native/dialogue/text_animation_resources.hpp"

namespace eb::native::dialogue {
// CC1C08 / C12BF3 / C12C36 over the host's live window/output state.
// Each direct fixed placement requests WINDOW_TICK. Sequence2 additionally
// requests eight C12E42 world ticks between its fourth and fifth characters.
// These are source calls, even when the shared instant-print policy is set.
class TextAnimations {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        Progress advance(unsigned work_budget = 4096);
        const std::optional<PromptEvent> &event() const;
        // Omission preserves input written by a nested service or host callback.
        void respond(std::optional<std::uint16_t> pressed = {});
        bool complete() const;

      private:
        friend class TextAnimations;
        friend class Conversation;
        TextOutput::Owner callback_owner(TextOutput &) const;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    ~TextAnimations();
    TextAnimations(const TextAnimations &) = delete;
    TextAnimations &operator=(const TextAnimations &) = delete;
    void configure(std::shared_ptr<const TextAnimationResources>);
    WindowHost &windows();
    // Only selectors1/2 require resources; every other byte is a source no-op.
    std::unique_ptr<Operation> begin(std::uint8_t selector);
    std::unique_ptr<Operation> begin_nested(std::uint8_t selector, Conversation &);
    std::unique_ptr<Operation> begin_nested(std::uint8_t selector, Operation &);

  private:
    friend class WindowHost;
    friend class Conversation;
    explicit TextAnimations(WindowHost &);
    std::unique_ptr<Operation> begin(std::uint8_t, TextOutput::Owner, bool owns_activation);
    void validate(std::uint8_t) const;
    WindowHost &windows_;
    std::shared_ptr<const TextAnimationResources> resources_;
};
} // namespace eb::native::dialogue
