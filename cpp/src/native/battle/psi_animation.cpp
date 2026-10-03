#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/world_encounter.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::battle {
namespace {
unsigned transfer_size(const PsiTransfer &t) noexcept {
  // COPY accounts the raw16-bit size even though DMA interprets zero as65536.
  return t.kind == PsiTransferKind::Graphics || t.kind == PsiTransferKind::Vram
             ? t.byte_count
         : t.kind == PsiTransferKind::Clear ? 2048 : 1024;
}
void validate_transfer(const PsiTransfer &t) {
  switch (t.kind) {
  case PsiTransferKind::FrameLowBytes:
  case PsiTransferKind::FrameHighBytes:
  case PsiTransferKind::Clear:
    return;
  case PsiTransferKind::Graphics:
    if (t.byte_count && t.byte_count <= 0x1200 && !(t.destination & 1) &&
        unsigned(t.destination) + t.byte_count <= 8192)
      return;
    break;
  case PsiTransferKind::Vram:
    if (t.mode <= 15 && t.mode % 3 == 0)
      return;
    break;
  }
  throw std::out_of_range("Transfer exceeds its owned graphics/map domain");
}
void copy_vram(PsiDisplayState::VramImage &vram, const PsiScratch &scratch,
               const PsiTransfer &t) {
  unsigned mode = t.mode, destination = t.destination, count = t.byte_count;
  bool constant = false;
  std::uint8_t value{};
  switch (t.kind) {
  case PsiTransferKind::FrameLowBytes:
    mode = 6; destination = 0x5800; count = 1024;
    break;
  case PsiTransferKind::FrameHighBytes:
    mode = 15; destination = 0x5800; count = 1024;
    constant = true; value = 0x30;
    break;
  case PsiTransferKind::Clear:
    mode = 3; destination = 0x5800; count = 2048;
    constant = true;
    break;
  case PsiTransferKind::Graphics:
    mode = 0; destination = t.destination / 2;
    break;
  case PsiTransferKind::Vram:
    break;
  }
  if (!count) count = 65536;
  const bool fixed = mode == 3 || mode == 9 || mode == 15;
  const bool alternating = mode < 6;
  const bool high = mode >= 12;
  for (unsigned i = 0; i < count; ++i) {
    const auto source = std::uint16_t(t.source_offset + (fixed ? 0 : i));
    const unsigned word = destination + (alternating ? i / 2 : i);
    const unsigned lane = alternating ? i & 1 : unsigned(high);
    vram[std::uint16_t(word * 2 + lane)] = constant ? value : scratch.bytes[source];
  }
}
} // namespace
void PsiDisplayState::check() const {
  if (failed_)
    throw std::logic_error(
        "A transfer was abandoned before admission completed");
}
std::span<const PsiTransfer> PsiDisplayState::pending() const noexcept {
  const auto count = (write_ + 32 - read_) % 32;
  for (unsigned i = 0; i < count; ++i)
    view_[i] = queue_[(read_ + i) % 32];
  return {view_.data(), count};
}
bool PsiDisplayState::admits_without_wait(
    std::span<const PsiTransfer> transfers) const noexcept {
  auto bytes = bytes_;
  unsigned count = (write_ + 32 - read_) % 32;
  for (const auto &t : transfers) {
    bytes = std::uint16_t(bytes + transfer_size(t));
    if (bytes > 0x1200 || ++count >= 32)
      return false;
  }
  return !failed_;
}
void PsiDisplayState::stage(PsiTransfer t) {
  check();
  validate_transfer(t);
  const auto next = (write_ + 1) % 32;
  if (next == read_)
    throw std::logic_error("Raw transfer staging requires ring admission");
  copy_ = t;
  queue_[write_] = t;
  write_ = next;
  bytes_ = std::uint16_t(bytes_ + transfer_size(t));
}
void PsiDisplayState::queue_frame(std::uint16_t source) {
  check();
  if ((write_ + 32 - read_) % 32 > 29)
    throw std::logic_error("Raw frame staging requires two ring slots");
  stage({PsiTransferKind::FrameLowBytes, source});
  stage({PsiTransferKind::FrameHighBytes, 0});
}
void PsiDisplayState::queue_clear() { stage({PsiTransferKind::Clear, 0}); }
void PsiDisplayState::queue_graphics(std::uint16_t source, std::uint16_t size,
                                     std::uint16_t destination) {
  validate_transfer({PsiTransferKind::Graphics, source, size, destination});
  if (bytes_)
    throw std::logic_error(
        "Graphics transfer requires prior DMA bytes to finish");
  stage({PsiTransferKind::Graphics, source, size, destination});
}
void PsiDisplayState::apply_immediate(const PsiScratch &scratch,
                                      PsiTransfer t) {
  validate_transfer(t);
  auto output = vram();
  copy_vram(output, scratch, t);
  store_vram(output);
}
void PsiDisplayState::transfer_graphics_immediate(const PsiScratch &scratch,
                                                  std::uint16_t source,
                                                  std::uint16_t size,
                                                  std::uint16_t destination) {
  check();
  const PsiTransfer t{PsiTransferKind::Graphics, source, size, destination};
  validate_transfer(t);
  if (bytes_)
    throw std::logic_error(
        "Immediate graphics requires prior DMA bytes to finish");
  copy_ = t;
  apply_immediate(scratch, t);
}
std::uint8_t PsiDisplayState::vram_byte(std::uint16_t address) const noexcept {
  if (address < 0x2000) return graphics[address];
  if (address >= 0xb000 && address < 0xb800)
    return std::uint8_t(tilemap[(address - 0xb000) / 2] >> ((address & 1) * 8));
  return remaining_vram_[address - (address < 0xb000 ? 0x2000 : 0x2800)];
}
void PsiDisplayState::set_vram_byte(std::uint16_t address, std::uint8_t value) noexcept {
  if (address < 0x2000) graphics[address] = value;
  else if (address >= 0xb000 && address < 0xb800) {
    auto &word = tilemap[(address - 0xb000) / 2];
    word = address & 1 ? std::uint16_t((word & 0xff) | (unsigned(value) << 8))
                       : std::uint16_t((word & 0xff00) | value);
  } else remaining_vram_[address - (address < 0xb000 ? 0x2000 : 0x2800)] = value;
}
PsiDisplayState::VramImage PsiDisplayState::vram() const noexcept {
  VramImage output;
  std::copy(graphics.begin(), graphics.end(), output.begin());
  std::copy_n(remaining_vram_.begin(), 0x9000, output.begin() + 0x2000);
  for (unsigned i = 0; i < tilemap.size(); ++i) {
    output[0xb000 + i * 2] = std::uint8_t(tilemap[i]);
    output[0xb001 + i * 2] = std::uint8_t(tilemap[i] >> 8);
  }
  std::copy(remaining_vram_.begin() + 0x9000, remaining_vram_.end(), output.begin() + 0xb800);
  return output;
}
void PsiDisplayState::store_vram(const VramImage &image) noexcept {
  std::copy_n(image.begin(), graphics.size(), graphics.begin());
  std::copy_n(image.begin() + 0x2000, 0x9000, remaining_vram_.begin());
  for (unsigned i = 0; i < tilemap.size(); ++i)
    tilemap[i] = std::uint16_t(image[0xb000 + i * 2] | (unsigned(image[0xb001 + i * 2]) << 8));
  std::copy(image.begin() + 0xb800, image.end(), remaining_vram_.begin() + 0x9000);
}
PsiDisplayState::VramImage PsiDisplayState::preview_vram(const PsiScratch &scratch) const {
  check();
  auto output = vram();
  for (const auto &t : pending()) copy_vram(output, scratch, t);
  return output;
}
std::array<std::uint8_t, 8192>
PsiDisplayState::preview_graphics(const PsiScratch &scratch) const {
  const auto image = preview_vram(scratch);
  std::array<std::uint8_t, 8192> output;
  std::copy_n(image.begin(), output.size(), output.begin());
  return output;
}
std::array<std::uint16_t, 1024>
PsiDisplayState::preview_pending(const PsiScratch &scratch) const {
  const auto image = preview_vram(scratch);
  std::array<std::uint16_t, 1024> output;
  for (unsigned i = 0; i < output.size(); ++i)
    output[i] = std::uint16_t(image[0xb000 + i * 2] | (unsigned(image[0xb001 + i * 2]) << 8));
  return output;
}
void PsiDisplayState::publish_pending(const PsiScratch &scratch) {
  store_vram(preview_vram(scratch));
  read_ = write_;
  bytes_ = 0;
  ++publication_serial_;
}
std::unique_ptr<PsiDisplayState::TransferOperation>
PsiDisplayState::begin_transfer(PsiTransfer t, const PsiScratch &scratch,
                                const WorldDisplayFade &fade) {
  check();
  validate_transfer(t);
  return std::unique_ptr<TransferOperation>(
      new TransferOperation(*this, t, scratch, fade));
}
PsiDisplayState::TransferOperation::TransferOperation(
    PsiDisplayState &owner, PsiTransfer t, const PsiScratch &scratch,
    const WorldDisplayFade &fade)
    : owner_(owner), command_(t), scratch_(scratch), fade_(fade) {}
PsiDisplayState::TransferOperation::~TransferOperation() {
  if (!complete_)
    owner_.failed_ = true;
}
void PsiDisplayState::TransferOperation::wait() {
  waiting_ = true;
  receipt_ = owner_.publication_serial_;
}
void PsiDisplayState::TransferOperation::respond() {
  owner_.check();
  if (!waiting_ || receipt_ == owner_.publication_serial_)
    throw std::logic_error("Transfer admission requires an actual publication");
  waiting_ = false;
}
bool PsiDisplayState::TransferOperation::advance() {
  if (complete_)
    return true;
  owner_.check();
  if (waiting_)
    return false;
  auto &o = owner_;
  if (!phase_) {
    o.copy_ = command_;
    if (fade_.state().brightness & 0x80) {
      o.apply_immediate(scratch_, o.copy_);
      complete_ = true;
      return true;
    }
    const auto sum = std::uint16_t(o.bytes_ + transfer_size(o.copy_));
    if (sum <= 0x1200) {
      o.bytes_ = sum;
      phase_ = 2;
    } else
      phase_ = 1;
  }
  if (phase_ == 1) {
    if (o.bytes_) {
      wait();
      return false;
    }
    // COPY's global parameters remain live while it waits. A nested producer
    // may replace them; its changes are not hidden by a private command copy.
    o.bytes_ = std::uint16_t(transfer_size(o.copy_));
    phase_ = 2;
  }
  if (phase_ == 2) {
    o.queue_[o.write_] = o.copy_;
    next_ = (o.write_ + 1) % 32;
    phase_ = 3;
  }
  if (next_ == o.read_) {
    wait();
    return false;
  }
  o.write_ = next_;
  complete_ = true;
  return true;
}
PsiAnimation::PsiAnimation(PsiAnimationState &state, PsiScratch &scratch,
                           PsiDisplayState &display, PaletteEffects &effects,
                           BattleBackgroundScene &background)
    : state_(state), scratch_(scratch), display_(display), effects_(effects),
      background_(background) {}

bool PsiAnimation::uses(
    const PsiAnimationState &state, const PsiScratch &scratch,
    const PsiDisplayState &display, const PaletteEffects &effects,
    const BattleBackgroundScene &background) const noexcept {
  return &state_ == &state && &scratch_ == &scratch && &display_ == &display &&
         &effects_ == &effects && &background_ == &background;
}
bool PsiAnimation::busy(const WorldSwirlState &swirl) const noexcept {
  return state_.time_until_next_frame != 0 || swirl.update_in != 0;
}
void PsiAnimation::validate_advance() const {
  const auto &s = state_;
  if (!s.time_until_next_frame)
    return;
  if (s.time_until_next_frame == 1 && !s.total_frames)
    if (const auto dependency = background_.palette_restoration_dependency())
      throw BattlePaletteRestorationRequired(*dependency);
  validate_palette();
}
void PsiAnimation::validate_palette() const {
  const auto &s = state_;
  if (s.palette_countdown != 1)
    return;
  const auto count =
      unsigned(std::uint8_t(s.palette_upper - s.palette_lower)) + 1;
  for (unsigned i = 0; i < count; ++i) {
    const auto relative =
        std::uint16_t(i < s.palette_index ? i + count - s.palette_index
                                          : i - s.palette_index);
    const auto source = std::uint16_t(s.palette_lower + relative);
    const auto destination =
        unsigned(s.palette_base) + unsigned(s.palette_lower) + i;
    if (source >= s.palette.size() || destination >= 256)
      throw std::out_of_range("PSI palette cycle exceeds its owned colors");
  }
}
void PsiAnimation::validate_begin() const {
  if (active_ || failed_)
    throw std::logic_error("PSI advance is active or failed");
  validate_advance();
}
std::unique_ptr<PsiAnimation::Operation>
PsiAnimation::begin(const WorldDisplayFade &fade) {
  validate_begin();
  auto operation = std::unique_ptr<Operation>(new Operation(*this, fade));
  active_ = true;
  return operation;
}
PsiAnimation::Operation::Operation(PsiAnimation &owner,
                                   const WorldDisplayFade &fade)
    : owner_(owner), fade_(fade) {}
PsiAnimation::Operation::~Operation() {
  if (!complete_) {
    owner_.failed_ = true;
    owner_.active_ = false;
  }
}
bool PsiAnimation::Operation::needs_publication() const noexcept {
  return transfer_ && transfer_->needs_publication();
}
void PsiAnimation::Operation::respond() {
  if (!transfer_)
    throw std::logic_error("PSI advance has no transfer request");
  transfer_->respond();
}
bool PsiAnimation::Operation::advance() {
  if (complete_)
    return true;
  auto &o = owner_;
  if (o.failed_)
    throw std::logic_error("PSI advance previously failed");
  auto &s = o.state_;
  try {
    if (!phase_) {
      entered_ = s.time_until_next_frame != 0;
      if (entered_ && !--s.time_until_next_frame) {
        if (s.total_frames) {
          s.time_until_next_frame = s.frame_hold;
          phase_ = 1;
        } else
          phase_ = 3;
      } else
        phase_ = 4;
    }
    while (phase_ < 4) {
      if (!transfer_) {
        const PsiTransfer t =
            phase_ == 1
                ? PsiTransfer{PsiTransferKind::FrameLowBytes, s.frame_offset}
            : phase_ == 2 ? PsiTransfer{PsiTransferKind::FrameHighBytes, 0}
                          : PsiTransfer{PsiTransferKind::Clear, 0};
        transfer_ = o.display_.begin_transfer(t, o.scratch_, fade_);
      }
      if (!transfer_->advance())
        return false;
      transfer_.reset();
      if (phase_ == 1) {
        phase_ = 2;
        continue;
      }
      if (phase_ == 2) {
        // Source rereads these shared words after both resumable COPY calls.
        s.frame_offset = std::uint16_t(s.frame_offset + 0x400);
        --s.total_frames;
      } else
        o.background_.restore_palette(o.effects_.palette_state());
      phase_ = 4;
    }
    if (entered_)
      o.validate_palette();
    o.advance_tail(entered_);
    complete_ = true;
    o.active_ = false;
    return true;
  } catch (...) {
    o.failed_ = true;
    throw;
  }
}
void PsiAnimation::advance() {
  validate_advance();
  if (state_.time_until_next_frame == 1) {
    const std::array<PsiTransfer, 2> frame{
        {{PsiTransferKind::FrameLowBytes, state_.frame_offset},
         {PsiTransferKind::FrameHighBytes, 0}}};
    const std::array<PsiTransfer, 1> clear{{{PsiTransferKind::Clear, 0}}};
    const auto transfers = state_.total_frames
                               ? std::span<const PsiTransfer>(frame)
                               : std::span<const PsiTransfer>(clear);
    if (!display_.admits_without_wait(transfers))
      throw std::logic_error(
          "PSI advance requires its real publication continuation");
  }
  const WorldDisplayFade displayed(WorldDisplayFadeState{15});
  auto operation = begin(displayed);
  if (!operation->advance())
    throw std::logic_error("Nonblocking PSI admission changed unexpectedly");
}
void PsiAnimation::advance_tail(bool entered) {
  auto &s = state_;
  auto &colors = effects_.palette_state();
  if (entered) {
    // This also executes on the terminating frame, even when the just-
    // decremented frame countdown remains zero.
    if (s.palette_countdown && !--s.palette_countdown) {
      s.palette_countdown = s.palette_hold;
      const auto count =
          unsigned(std::uint8_t(s.palette_upper - s.palette_lower)) + 1;
      for (unsigned i = 0; i < count; ++i) {
        const auto relative =
            std::uint16_t(i < s.palette_index ? i + count - s.palette_index
                                              : i - s.palette_index);
        colors.staged_color(unsigned(s.palette_base) + s.palette_lower + i) =
            s.palette[std::uint16_t(s.palette_lower + relative)];
      }
      ++s.palette_index;
      if (s.palette_index >= count)
        s.palette_index = 0;
      colors.upload_mode = 24;
    }
  }
  if (s.enemy_start && !--s.enemy_start) {
    effects_.set_speed(20);
    for (unsigned bank = 0; bank < s.enemy_targets.size(); ++bank)
      if (s.enemy_targets[bank])
        for (unsigned color = 1; color < 16; ++color)
          effects_.target(bank * 16 + color, s.enemy_red, s.enemy_green,
                          s.enemy_blue);
  }
  if (s.enemy_end && !--s.enemy_end)
    for (unsigned bank = 0; bank < s.enemy_targets.size(); ++bank)
      if (s.enemy_targets[bank])
        effects_.reverse(bank, 20);
}
} // namespace eb::native::battle
