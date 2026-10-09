#pragma once
#include "eb/native/cutscenes/coffee/scene.hpp"
#include "eb/native/cutscenes/sound_stone/scene.hpp"
#include "eb/native/cutscenes/cast/scene.hpp"
#include <variant>
namespace eb::native::cutscenes {
// Authored cinematic services share one display and retained scene state.
// Admission identifies complete native owners; an unsupported ID stays closed.
class Services {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &)=delete;
    dialogue::Progress advance(unsigned budget=4096);
    WorldRuntime::Operation *runtime_operation() noexcept;
    bool complete() const noexcept {return done_;}
    std::uint16_t result() const;
    bool bicycle_dismount_pending() const noexcept;
    void respond_bicycle_dismount();
  private:
    friend class Services;
    using Child=std::variant<std::unique_ptr<coffee::Scene::Operation>,std::unique_ptr<sound_stone::Scene::Operation>,std::unique_ptr<cast::Scene::Operation>>;
    Operation(Services &,Child);
    Services &owner_;
    Child child_;
    bool done_{};
  };
  Services(std::span<const std::uint8_t>,GameVersion,Display &,story::InputState &);
  void bind_cast(std::span<const std::uint8_t>,GameVersion,WorldStartupOwners);
  const cast::State *cast_state() const noexcept { return cast_?&cast_state_:nullptr; }
  bool supports(std::uint8_t event) const noexcept;
  bool uses(const story::Scene &) const noexcept;
  std::unique_ptr<Operation> begin(std::uint8_t event,WorldRuntime::Operation &parent);
  bool busy() const noexcept {return active_!=nullptr;}
  bool failed() const noexcept {return failed_;}
  std::uint64_t started() const noexcept {return started_;}
  std::uint64_t completed() const noexcept {return completed_;}
  std::uint8_t active_event() const noexcept {return active_event_;}
  std::uint8_t last_event() const noexcept {return last_event_;}
private:
  Display &display_;
  coffee::Resources coffee_resources_;
  coffee::Text coffee_text_;
  coffee::State coffee_state_;
  coffee::Scene coffee_;
  sound_stone::Resources stone_resources_;
  sound_stone::State stone_state_;
  sound_stone::Scene stone_;
  std::unique_ptr<cast::Resources> cast_resources_;
  cast::State cast_state_;
  std::unique_ptr<cast::Scene> cast_;
  Operation *active_{};
  bool failed_{};
  std::uint64_t started_{},completed_{};
  std::uint8_t active_event_{},last_event_{};
};
}
