#pragma once
#include "eb/direct_scene.hpp"
#include <array>
#include <cstdint>
#include <span>
namespace eb::native::entities::graphics {
// The selected UPDATE_SCREEN descriptor image. Artwork is deliberately absent:
// an older OAM selection continues to sample newly transferred physical tiles.
struct ObjectAnchor {std::int16_t x{},y{};bool owned{};};
struct ObjectFrame {
  std::array<std::uint8_t,544> bytes{};
  std::array<std::uint64_t,128> identities{};
  // Real source actor anchors; all body parts and overlays retain one origin.
  std::array<ObjectAnchor,128> anchors{};
};
// Declared spritemap bytes, including any linked records in the same content
// extent. The origin/start words identify records, never an executable address.
struct ObjectMap {
  std::span<const std::uint8_t> bytes;
  std::uint16_t origin{},start{};
};
// C08CD5 and UPDATE_SCREEN's final partial high-table flush. Clearing hides
// entries by Y only; unwritten tile/X/high bytes retain their actual buffer.
class ObjectEmitter {
public:
  explicit ObjectEmitter(ObjectFrame &frame):frame_(frame) {}
  void clear() noexcept;
  void append(ObjectMap,std::uint16_t x,std::uint16_t y,std::uint64_t identity=0,ObjectAnchor anchor={});
  void finish() noexcept;
  unsigned count() const noexcept {return count_;}
  unsigned high_count() const noexcept {return high_count_;}
  std::uint8_t high_buffer() const noexcept {return high_buffer_;}
  // Full capacity flush writes one byte immediately beyond the high table.
  // Kept separately from the544 hardware OAM bytes; callers own its neighbour.
  std::uint8_t trailing_high_byte() const noexcept {return trailing_high_byte_;}
private:
  ObjectFrame &frame_;
  unsigned count_{},high_count_{};
  std::uint8_t high_buffer_=0x80,trailing_high_byte_{};
};
class ObjectSource {
public:
  virtual ~ObjectSource()=default;
  virtual std::shared_ptr<const ObjectFrame> capture_objects(std::uint8_t buffer)=0;
};
// Pure composition from current VRAM/CGRAM and the immutable selected OAM.
// This creates a new image; neither descriptor nor older published pixels move.
std::shared_ptr<const DirectSceneFrame> sample_objects(const ObjectFrame &,
    std::span<const std::uint8_t,65536> video,std::span<const std::uint16_t,256> palette,
    std::uint8_t object_size,std::uint64_t frame,std::uint64_t scene,std::uint8_t mode=1);
}
