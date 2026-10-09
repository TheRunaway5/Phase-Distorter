#pragma once
#include "eb/native/cutscenes/coffee/text.hpp"
#include "eb/native/cutscenes/display.hpp"
namespace eb::native::cutscenes::coffee {
struct State {
  std::uint16_t fraction{};
  std::size_t script_offset{};
  std::uint64_t row_count{},battle_frames{},waits{},scroll_updates{};
};
// Complete regional COFFEETEA_SCENE. Parsing never advances presentation;
// authored WAIT and C2DB3F remain separately owned continuations.
class Scene final : public DisplaySource {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &)=delete;
    Operation &operator=(const Operation &)=delete;
    dialogue::Progress advance(unsigned budget=4096);
    WorldRuntime::Operation *runtime_operation() noexcept;
    bool complete() const noexcept { return done_; }
    std::uint16_t result() const;
  private:
    friend class Scene;
    Operation(Scene &,unsigned,WorldRuntime::Operation *);
    void scroll();
    void frame();
    void wait(bool publication=false);
    void initialize_text();
    Scene &owner_;
    unsigned selector_{},phase_{},transfer_index_{};
    WorldRuntime::Operation *parent_{};
    std::array<TextTransfer,2> transfers_{};
    std::unique_ptr<WorldRuntime::Operation> runtime_;
    std::unique_ptr<Display::Operation> helper_;
    std::unique_ptr<battle::Frame::Operation> battle_;
    std::unique_ptr<battle::PsiDisplayState::TransferOperation> transfer_;
    bool done_{},executing_{},distinct_{};
  };
  Scene(const Resources &,Text &,State &,Display &);
  std::unique_ptr<Operation> begin(unsigned selector,WorldRuntime::Operation *parent=nullptr);
  std::shared_ptr<const DirectSceneFrame> capture_display(const DisplayView &) const override;
  bool uses(const story::Scene &) const noexcept;
  bool busy() const noexcept { return active_!=nullptr; }
  bool failed() const noexcept { return failed_; }
private:
  const Resources &resources_;
  Text &text_;
  State &state_;
  Display &display_;
  story::Scene &scene_;
  Operation *active_{};
  bool failed_{};
};
}
