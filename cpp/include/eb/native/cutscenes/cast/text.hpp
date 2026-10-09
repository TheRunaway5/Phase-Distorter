#pragma once
#include "eb/native/cutscenes/cast/resources.hpp"
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/party/state.hpp"
namespace eb::native::cutscenes::cast {
struct State {
  std::uint16_t text_cursor{},tile_offset{},initial_sleep{};
  std::uint64_t actor_frames{},names{},scroll_clears{},palette_uploads{},created_actors{};
};
struct RasterCursor {std::uint16_t tile{},x{},render_low{},render_high{};};
// Regional Cast glyph layout over the borrowed live BUFFER and source VWF
// composition. Plans retain live offsets; the Scene admits each real DMA in
// order before acknowledging the suspended actor command.
class Text {
public:
  Text(const Resources &,State &,battle::PsiScratch &,party::State &);
  void prepare_graphics(std::span<std::uint8_t,1664>,RasterCursor &,std::uint8_t character_padding);
  std::vector<battle::PsiTransfer> name(unsigned id,unsigned column,unsigned row,std::uint16_t scroll);
  std::vector<battle::PsiTransfer> party_name(unsigned id,unsigned column,unsigned row,std::uint16_t scroll);
  std::vector<battle::PsiTransfer> variable_name(unsigned member,unsigned id,unsigned column,unsigned row,std::uint16_t scroll);
  void render_name(std::span<const std::uint8_t>,unsigned columns,unsigned tile,
                   std::span<std::uint8_t,1664>,RasterCursor &,std::uint8_t padding);
private:
  unsigned prepare_bytes(std::span<const std::uint8_t>,unsigned column,unsigned maximum);
  void prepare_tiles(unsigned tile,unsigned column,unsigned count);
  std::vector<battle::PsiTransfer> copy(unsigned column,unsigned row,unsigned count,std::uint16_t scroll);
  std::vector<battle::PsiTransfer> repack(unsigned column,unsigned count);
  std::uint16_t pack_glyph(unsigned glyph,unsigned width,unsigned count,unsigned shift);
  unsigned word(unsigned offset) const noexcept;
  void word(unsigned offset,unsigned value) noexcept;
  const Resources &resources_;
  State &state_;
  battle::PsiScratch &scratch_;
  party::State &party_;
};
}
