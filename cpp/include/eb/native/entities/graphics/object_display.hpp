#pragma once
#include "eb/native/entities/graphics/lifecycle.hpp"
#include "eb/native/entities/graphics/object_maps.hpp"
namespace eb::native::story { class SourceWorkClock; class SourceObjectPreparation; class SourceScreenUpdate; class SourceActorDraw; }
namespace eb::native::entities::graphics {
struct ObjectDisplayState {
  // Actual OAM_ADDR/END/HIGH_ADDR and HIGH_TABLE_BUFFER. OAM_CLEAR writes
  // these at its original stores; emission retains them through UPDATE_SCREEN.
  struct Builder {
    std::uint16_t address{}, end_address{}, high_address{};
    std::uint8_t high_buffer{};
  } builder;
  // Actual retained WRAM inputs/stores of C08CD5. Factories do not initialize
  // these predecessor bytes; component callers declare their entry contents.
  struct Scratch {
    std::uint16_t spritemap_bank{},base_x{},base_y{},current_y{};
    std::uint8_t high_pointer_bank{};
  } scratch;
  // CURRENT_SPRITE_DRAWING_PRIORITY, unused insertion word, then the four
  // source32-entry map/X/Y/bank arrays and their byte-count offsets.
  std::array<std::uint8_t,1036> working{};
  // Actual ENTITY_DRAW_SORTING: retained role-index links, not queue offsets.
  // Its component entry bytes are caller-owned; factories never clear them.
  std::array<std::uint16_t,30> draw_sorting{};
  std::array<ObjectFrame,2> buffers{};
};
// C0DB0F/C0A3A4's actual four working queues and UPDATE_SCREEN emission.
// Semantic actor traversal owns order/priority/overlay advancement; capture
// emits its completed records without another tick or another graphics upload.
class ObjectDisplay final : public ObjectSource {
public:
  ObjectDisplay(ObjectDisplayState &,ActorWorld &,Lifecycle &,ObjectMaps &);
  ObjectDisplay(const ObjectDisplay&)=delete;
  ObjectDisplay &operator=(const ObjectDisplay&)=delete;
  SourceObjectMap source_actor_map(ActorId,bool mirrored=false) const;
  SourceObjectMap source_overlay_map(ActorId,unsigned index) const;
  bool uses(const ActorWorld &actors,const RawActorCreation &graphics) const noexcept {
    return &actors_==&actors&&static_cast<const RawActorCreation *>(&lifecycle_)==&graphics;
  }
  std::shared_ptr<const ObjectFrame> capture_objects(std::uint8_t buffer) override;
  // Copy only the existing selected descriptor. No queue rebuild, Y clear,
  // emission, high-table flush, or actor tick belongs to this snapshot.
  std::shared_ptr<const ObjectFrame> snapshot_objects(std::uint8_t buffer) const;
  // TRY_TAKE_PHOTOGRAPH US clears only2400..27FF. The final priority3 bank
  // words and offset survive; no finalized actor priority/allocation is reset.
  void clear_photograph_prefix() noexcept;
  const ObjectDisplayState &state() const noexcept {return state_;}
private:
  friend class eb::native::story::SourceWorkClock;
  friend class eb::native::story::SourceObjectPreparation;
  friend class eb::native::story::SourceActorDraw;
  friend class eb::native::story::SourceActorDrawKernel;
  friend class eb::native::story::SourceGlobalDraw;
  friend class eb::native::story::SourceScreenUpdate;
  struct SourceGeneration {
    enum class Phase { Cleared, Inserting, Prepared, Emitting, Emitted } phase=Phase::Cleared;
    std::uint8_t buffer{};
    std::array<std::array<std::optional<SourceObjectMap>,32>,4> maps;
  };
  void source_clear_started() noexcept {source_generation_.reset();}
  void source_clear_completed(std::uint8_t buffer);
  std::shared_ptr<const void> lifetime_=std::make_shared<int>(0);
  std::shared_ptr<SourceGeneration> source_generation_;
  std::uint16_t word(unsigned at) const noexcept;
  void put(unsigned at,std::uint16_t value) noexcept;
  ObjectDisplayState &state_;
  ActorWorld &actors_;
  Lifecycle &lifecycle_;
  ObjectMaps &maps_;
};
}
