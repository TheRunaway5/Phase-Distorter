#pragma once
#include "eb/direct_scene.hpp"
#include "eb/game_version.hpp"
#include <array>
#include <span>
#include <vector>
namespace eb::native::world::townmap {
struct Sector { std::uint8_t selector{}, x{}, y{}; };
struct IconPart { std::int8_t x{}, y{}; std::uint16_t tile{}; bool large{}; };
struct Placement { std::uint8_t x{}, y{}, icon{}; std::uint16_t flag{}; };
struct Map {
  std::array<std::uint16_t,32> palette{};
  std::array<std::uint16_t,1024> arrangement{};
  std::array<std::array<std::uint8_t,64>,512> tiles{};
  // Immutable decoded asset used by the actual shared BUFFER/DMA producer.
  std::vector<std::uint8_t> decoded;
};
// Six declared map planes and labels; all imported pointers become immutable
// native identities. No address image is retained or executed by this owner.
class Resources {
public:
  Resources(std::span<const std::uint8_t>,GameVersion);
  GameVersion version() const noexcept { return version_; }
  const Sector &sector(std::uint16_t x,std::uint16_t y) const;
  const Map &map(unsigned index) const { return maps_.at(index); }
  std::span<const std::uint8_t> labels() const noexcept { return labels_; }
  const std::array<std::uint16_t,128> &icon_palette() const noexcept { return palette_; }
  const std::vector<IconPart> &icon(unsigned index) const { return icons_.at(index); }
  const std::vector<Placement> &placements(unsigned index) const { return placements_.at(index); }
  bool blinks(unsigned index) const { return blink_.at(index)!=0; }
  unsigned mapping(unsigned index) const { return mapping_.at(index); }
private:
  GameVersion version_;
  std::array<Sector,32*80> sectors_{};
  std::array<Map,6> maps_;
  std::vector<std::uint8_t> labels_;
  std::array<std::uint16_t,128> palette_{};
  std::array<std::vector<IconPart>,23> icons_;
  std::array<std::vector<Placement>,6> placements_;
  std::array<std::uint8_t,23> blink_{};
  std::array<std::uint16_t,6> mapping_{};
};
struct State { std::uint16_t animation{}, player_animation{}, palette_countdown{}; };
struct IconDraw { std::uint16_t icon{}; std::int16_t x{}, y{}; bool operator==(const IconDraw &) const = default; };
// C4D43F's authored queue order, including arrow before player and exact blink
// threshold. Counter and palette mutation are separate scene-owned phases.
std::vector<IconDraw> select_icons(const Resources &,unsigned map,const Sector &,const State &,std::span<const std::uint8_t> flags);
std::shared_ptr<const DirectSceneFrame> render(const Resources &,unsigned map,std::span<const IconDraw>);
}
