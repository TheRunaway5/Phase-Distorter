#pragma once
#include "eb/native/cutscenes/ending/resources.hpp"
#include "eb/native/cutscenes/display.hpp"
#include "eb/native/world_startup.hpp"
namespace eb::native::entities::graphics {class ObjectDisplay;}
namespace eb::native::cutscenes::ending {
struct PhotographState {
  // CUR_PHOTO_DISPLAY persists after PHOTOGRAPH_MAP_LOADING_MODE is reset.
  std::uint16_t current_photo{};
};
// TRY_RENDERING_PHOTOGRAPH's real map and graphical actor continuation. This
// does not run PLAY_CREDITS' palette/slide/wait sequence. US true-photo entry
// requires its actual bound working-priority storage owner.
class PhotographDisplay {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &)=delete;
    dialogue::Progress advance(unsigned work_budget=4096);
    WorldRuntime::Operation *runtime_operation() noexcept;
    bool complete() const noexcept {return done_;}
    std::uint16_t result() const;
    const auto &created() const noexcept {return created_;}
  private:
    friend class PhotographDisplay;
    Operation(PhotographDisplay &,unsigned,WorldRuntime::Operation *);
    void create(unsigned sprite,unsigned script,PhotoPoint,std::uint8_t encoded=0);
    PhotographDisplay &owner_;
    WorldRuntime::Operation *parent_{};
    std::unique_ptr<WorldMapLoad::Operation> map_;
    std::unique_ptr<RawActorCreation::Operation> creation_;
    std::unique_ptr<WorldRuntime::Operation> runtime_;
    std::array<std::optional<ActorId>,10> created_{};
    unsigned index_{},phase_{},slot_{},ordinal_{};
    std::uint16_t enemy_enable_{};
    std::uint8_t encoded_{};
    bool done_{},executing_{},enabled_{},creation_publication_{};
  };
  PhotographDisplay(const Resources &,PhotographState &,Display &,WorldStartupOwners,RawActorCreation &);
  void bind_object_display(entities::graphics::ObjectDisplay &);
  bool uses(const Resources &,const Display &,const ActorWorld &,const WorldRuntime &) const noexcept;
  bool uses(const RawActorCreation &graphics) const noexcept {return &graphics_==&graphics;}
  // Validate only immutable configuration and actual borrowed storage. This
  // does not clear the heap, change photograph mode, or start a map child.
  bool supports_current_photographs() const;
  std::unique_ptr<Operation> begin(unsigned index,WorldRuntime::Operation *parent=nullptr);
  bool busy() const noexcept {return active_!=nullptr;}
  bool failed() const noexcept {return failed_;}
private:
  const Resources &resources_;
  PhotographState &state_;
  Display &display_;
  WorldStartupOwners world_;
  RawActorCreation &graphics_;
  entities::graphics::ObjectDisplay *objects_{};
  Operation *active_{};
  bool failed_{};
};
}
