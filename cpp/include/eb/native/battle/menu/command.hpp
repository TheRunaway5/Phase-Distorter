#pragma once
#include "eb/native/battle/frame.hpp"
#include "eb/native/battle/menu/resources.hpp"
#include "eb/native/battle/names.hpp"
#include "eb/native/battle/turn_scheduler.hpp"
#include "eb/native/dialogue/menu_host.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include "eb/native/story/scene.hpp"
namespace eb::native::battle {
// Source flashing selectors belong to menu lifetime and retain their values
// across calls. Physical row records remain in TargetSelection and Roster.
struct CommandMenuState {
  std::uint16_t flashing_enemy = 0xffff, flashing_enemy_row{},
                flashing_row = 0xffff;
  std::uint16_t current_party_slot{};
};
enum class MenuAudioKind { Sound, TextSound };
struct MenuAudio {
  MenuAudioKind kind{};
  std::uint16_t value{};
};
// Complete command selection uses the existing menu and scene engines. There
// is no API that accepts a fabricated menu result. The caller completes only
// actual Scene boundaries and audio playback, then resumes this continuation.
// All borrowed owners are stable and outlive this owner and its operations.
class CommandMenu {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    dialogue::Progress advance(unsigned budget = 4096);
    story::Scene::Operation *scene() const noexcept;
    const std::optional<MenuAudio> &audio() const noexcept;
    void respond_audio();
    bool complete() const noexcept;
    std::uint16_t result() const;

  private:
    friend class CommandMenu;
    struct Execution;
    explicit Operation(std::unique_ptr<Execution>);
    std::unique_ptr<Execution> execution_;
  };
  CommandMenu(std::shared_ptr<const MenuContent>,
              std::shared_ptr<const dialogue::Program>,
              std::shared_ptr<const dialogue::MenuResources>,
              std::shared_ptr<const dialogue::FontResources>,
              std::shared_ptr<const dialogue::SubstitutionResources>,
              const ActionResources &, party::State &, TurnState &,
              CommandMenuState &, TargetSelection &, Roster &, Names &,
              FrameState &, PaletteBankState &, const PsiScratch &,
              story::RandomState &, dialogue::MenuHost &, story::Scene &,
              story::InputState &);
  ~CommandMenu();
  CommandMenu(const CommandMenu &) = delete;
  CommandMenu &operator=(const CommandMenu &) = delete;
  std::unique_ptr<Operation> begin(unsigned character, unsigned selected_count,
                                   unsigned party_list_index);
  // DETERMINE_TARGETTING also has real overworld item/PSI callers. This
  // continuation uses retained rows/RNG and never initializes a battler.
  std::unique_ptr<Operation> begin_target(unsigned action,unsigned user);
  bool uses(const TurnState &, const Roster &, const party::State &,
            const story::Scene &, const dialogue::WindowHost &) const noexcept;
  bool busy() const noexcept;
  bool failed() const noexcept;

private:
  struct Execution;
  std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::battle
