#pragma once
#include "eb/native/cutscenes/ending/resources.hpp"
#include "eb/native/battle/palette_effects.hpp"
#include "eb/native/story/source_work.hpp"
#include "eb/native/dialogue/runtime.hpp"
namespace eb::native::cutscenes::ending {
// Actual MEMCPY_WORDS_LEFT word (7E00A5/A6), including the unused high byte.
// Kept across the three source calls rather than recreated for each helper.
using InitializerWorkState = story::CopyCounterState;
// Current INITIALIZE_CREDITS_SCENE body argument-page alignment and code
// bank timing. The MEMCPY/MEMSET bodies themselves are authored C0 routines.
struct InitializerCall { std::uint8_t direct_page_low{}; bool bank_zero_code{}; };
enum class PalettePart { Frame,Font,Sprites };
// Named palette preparation and BG2_BUFFER blocks. Each real word store
// precedes its literal instruction cost; untouched palette/text bytes remain.
// Cleanup, BG setup, UPDATE_SCREEN, blank waits and PLAY prefix are separate.
class InitializerWork {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &)=delete;
    dialogue::Progress advance(unsigned work_budget=4096);
    bool complete() const noexcept {return complete_;}
    unsigned source_line() const noexcept;
    const char *source_file() const noexcept;
    unsigned retired_atoms() const noexcept {return cursor_;}
    std::uint32_t source_pointer() const noexcept {return pointer_;}
  private:
    friend class InitializerWork;
    enum class Effect { None,PointerLow,PointerBank,PointerUpper,CounterSet,
      CounterShift,CounterDecrement,ReadPalette,StorePalette,ClearPalette,
      PointerIncrement,ClearText };
    struct Atom { story::SourceWorkCost cost; Effect effect;unsigned operand,line;const char *file; };
    Operation(InitializerWork &,InitializerCall);
    void add(unsigned cycles,unsigned rom,unsigned slow,unsigned line,const char *file,
      Effect=Effect::None,unsigned operand=0,bool caller=true);
    void palette_copy(PalettePart);
    void palette_clear();
    void text_clear();
    void effect(const Atom &);
    InitializerWork &owner_;
    InitializerCall call_;
    std::span<const std::uint16_t> palette_;
    std::vector<Atom> atoms_;
    unsigned cursor_{},first_color_{};
    std::uint32_t pointer_=0x7f0000;
    std::uint16_t value_{};
    bool complete_{},executing_{};
    std::weak_ptr<const void> owner_lifetime_;
    std::function<void()> release_;
  };
  InitializerWork(const InitializerWork&)=delete;
  InitializerWork& operator=(const InitializerWork&)=delete;
  InitializerWork(InitializerWork&&)=delete;
  InitializerWork& operator=(InitializerWork&&)=delete;
  InitializerWork(const Resources &,story::SourceWorkService &,InitializerWorkState &,
      battle::PaletteBankState &,std::span<std::uint8_t,2048>,const ActorWorld &,
      const battle::PsiDisplayState &);
  std::unique_ptr<Operation> begin_palette_copy(PalettePart,InitializerCall);
  std::unique_ptr<Operation> begin_palette_clear(InitializerCall);
  std::unique_ptr<Operation> begin_text_clear(InitializerCall);
  bool uses(const Resources &,story::SourceWorkService &,const battle::PaletteBankState &,
      std::span<const std::uint8_t,2048>,const ActorWorld &,const battle::PsiDisplayState &) const noexcept;
  story::SourceWorkService &clock() const noexcept {return clock_;}
  bool busy() const noexcept {return active_!=nullptr;}
  bool failed() const noexcept {return failed_||state_lifetime_.expired()||palette_lifetime_.expired()||clock_.failed();}
private:
  void require_healthy() const;
  void claim(Operation&);
  const Resources &resources_;
  story::SourceWorkService &clock_;
  InitializerWorkState &state_;
  battle::PaletteBankState &palette_;
  std::span<std::uint8_t,2048> text_;
  Operation *active_{};
  bool failed_{};
  std::weak_ptr<const void> state_lifetime_,palette_lifetime_;
  std::shared_ptr<const void> lifetime_=std::make_shared<const unsigned>(0);
};
}
