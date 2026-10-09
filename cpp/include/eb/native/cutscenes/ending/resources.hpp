#pragma once
#include "eb/native/cutscenes/credits.hpp"
namespace eb::native::cutscenes::ending {
struct PhotoPoint {
  std::uint16_t x{},y{};
  bool operator==(const PhotoPoint &) const = default;
};
struct PhotoObject {
  PhotoPoint position;
  std::uint16_t sprite{};
  bool operator==(const PhotoObject &) const = default;
};
struct Photograph {
  std::uint16_t event_flag{};
  PhotoPoint map;
  std::uint16_t palette_offset{};
  std::uint8_t slide_direction{},slide_distance{};
  PhotoPoint photographer;
  std::array<PhotoPoint,6> party{};
  std::array<PhotoObject,4> objects{};
  bool operator==(const Photograph &) const = default;
};
// Borrowed immutable source stream, bounded through its actual terminator.
// Native source work decodes this content into the live shared BUFFER.
struct CompressedAsset {
  std::span<const std::uint8_t> bytes;
  std::uint32_t source_identity{};
  unsigned output_bytes{};
};
// Exact decoded authored content. No donor image, CPU state or mutable map
// palette is retained. The shared BUFFER keeps bytes after each real decode.
class Resources {
public:
  Resources(std::span<const std::uint8_t>,GameVersion);
  GameVersion version() const noexcept {return credits_->version();}
  const std::shared_ptr<const CreditsResources> &credits() const noexcept {return credits_;}
  std::span<const std::uint8_t> frame() const noexcept {return frame_;}
  std::span<const std::uint8_t> font() const noexcept {return font_;}
  std::span<const std::uint8_t> photo_palettes() const noexcept {return photo_palettes_;}
  CompressedAsset compressed_frame() const noexcept {
    return {encoded_frame_,version()==GameVersion::JP?0xe1d6dcu:0xe1e94au,unsigned(frame_.size())};
  }
  CompressedAsset compressed_font() const noexcept {
    return {encoded_font_,version()==GameVersion::JP?0xe1d2ccu:0xe1e528u,unsigned(font_.size())};
  }
  CompressedAsset compressed_photo_palettes() const noexcept {
    return {encoded_photo_palettes_,version()==GameVersion::JP?0xe12ba1u:0xe1374au,unsigned(photo_palettes_.size())};
  }
  const std::array<std::uint16_t,16> &frame_palette() const noexcept {return frame_palette_;}
  const std::array<std::uint16_t,128> &sprite_palettes() const noexcept {return sprite_palettes_;}
  const std::array<Photograph,32> &photographs() const noexcept {return photographs_;}
  // C079EC: encoded saved-photo party identity and sprite-variant bits.
  std::uint16_t photograph_sprite(std::uint8_t encoded_member) const;
  std::span<const std::uint8_t> wipe_source() const noexcept {return wipe_;}
  std::uint32_t wipe_identity() const noexcept {return version()==GameVersion::JP?0xc40b34u:0xc40be8u;}
private:
  std::shared_ptr<const CreditsResources> credits_;
  std::vector<std::uint8_t> frame_,font_,photo_palettes_;
  std::vector<std::uint8_t> encoded_frame_,encoded_font_,encoded_photo_palettes_;
  std::array<std::uint16_t,16> frame_palette_{};
  std::array<std::uint16_t,128> sprite_palettes_{};
  std::array<Photograph,32> photographs_{};
  std::array<std::array<std::uint16_t,2>,17> photograph_sprites_{};
  std::array<std::uint8_t,1> wipe_{};
};
bool photo_flag(std::span<const std::uint8_t> flags,std::uint16_t selector);
unsigned count_photographs(const Resources &,std::span<const std::uint8_t> flags);
}
