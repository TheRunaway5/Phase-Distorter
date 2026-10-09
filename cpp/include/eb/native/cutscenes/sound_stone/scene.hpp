#pragma once
#include "eb/native/cutscenes/display.hpp"
#include "eb/native/cutscenes/sound_stone/render.hpp"

namespace eb::native::cutscenes::sound_stone {
// Complete USE_SOUND_STONE, including real blank publications, input waits,
// SPC commands, two background phases and the authored map restoration.
class Scene {
public:
  class Operation final : public DisplaySource {
  public:
    ~Operation();
    Operation(const Operation &)=delete;
    Operation &operator=(const Operation &)=delete;
    dialogue::Progress advance(unsigned work_budget=4096);
    WorldRuntime::Operation *runtime_operation() noexcept;
    Display::Operation *display_operation() noexcept { return display_.get(); }
    bool complete() const noexcept { return done_; }
    std::uint16_t result() const;
    std::shared_ptr<const DirectSceneFrame> capture_display(const DisplayView &) const override;
    void complete_object_publication(std::uint8_t selected_buffer) const noexcept override;
  private:
    friend class Scene;
    Operation(Scene &,bool,WorldRuntime::Operation *);
    void draw();
    Scene &owner_;
    WorldRuntime::Operation *parent_{};
    std::unique_ptr<WorldRuntime::Operation> runtime_;
    std::unique_ptr<Display::Operation> display_;
    std::unique_ptr<Playback> playback_;
    std::array<std::shared_ptr<const std::vector<Sprite>>,2> objects_;
    mutable std::shared_ptr<const std::vector<Sprite>> published_objects_;
    unsigned phase_{};
    bool cancel_enabled_{},done_{},executing_{},distinct_{};
  };
  Scene(const Resources &,State &,Display &,story::InputState &);
  std::unique_ptr<Operation> begin(bool cancel_enabled,WorldRuntime::Operation *parent=nullptr);
  bool uses(const story::Scene &) const noexcept;
  bool busy() const noexcept { return active_!=nullptr; }
  bool failed() const noexcept { return failed_; }
private:
  const Resources &resources_;
  State &state_;
  Display &display_;
  story::InputState &input_;
  Operation *active_{};
  bool failed_{};
};
}
