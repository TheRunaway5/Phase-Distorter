#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/world_display_fade.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
using namespace eb::native::battle;
unsigned checks{};
void check(bool value, const char *message) {
  ++checks;
  if (!value) throw std::runtime_error(message);
}
template <class F> void rejects(F action, const char *message) {
  bool rejected = false;
  try { action(); } catch (const std::exception &) { rejected = true; }
  check(rejected, message);
}
void copy(PsiDisplayState &display, const PsiScratch &scratch,
          const WorldDisplayFade &fade, std::uint16_t source,
          std::uint16_t count, std::uint16_t destination, std::uint8_t mode) {
  auto operation = display.begin_transfer(
      {PsiTransferKind::Vram, source, count, destination, mode}, scratch, fade);
  check(operation->advance() && operation->complete() && !operation->needs_publication(),
        "Uncontended raw COPY unexpectedly waited");
}

void physical_aliases() {
  PsiDisplayState display;
  for (unsigned i = 0; i < 65536; ++i)
    display.set_vram_byte(std::uint16_t(i), std::uint8_t(i * 13 + (i >> 8)));
  const auto original = display.vram();
  for (unsigned i = 0; i < 65536; ++i) {
    const auto expected = std::uint8_t(i * 13 + (i >> 8));
    check(display.vram_byte(std::uint16_t(i)) == expected && original[i] == expected,
          "A physical VRAM partition lost a byte");
  }
  for (unsigned i = 0; i < 8192; ++i)
    check(display.graphics[i] == original[i], "Graphics do not alias physical VRAM");
  for (unsigned i = 0; i < 1024; ++i)
    check(display.tilemap[i] == (original[0xb000 + i * 2] |
                                 unsigned(original[0xb001 + i * 2]) << 8),
          "PSI map does not alias physical little-endian words");
  display.graphics[8191] = 0x76;
  display.tilemap[0] = 0x1234;
  display.tilemap[1023] = 0x5678;
  check(display.vram_byte(0x1fff) == 0x76 && display.vram_byte(0xb000) == 0x34 &&
            display.vram_byte(0xb001) == 0x12 && display.vram_byte(0xb7ff) == 0x56,
        "Existing mutable PSI views have a disconnected backing store");
  check(original[0xb000] != 0x34, "Retained VRAM snapshot changed with its owner");
}

void dma_modes() {
  const WorldDisplayFade blank(WorldDisplayFadeState{0x80});
  PsiScratch scratch;
  scratch.bytes[0xfffe] = 0x11; scratch.bytes[0xffff] = 0x22;
  scratch.bytes[0] = 0x33; scratch.bytes[1] = 0x44;
  scratch.bytes[2] = 0x55; scratch.bytes[3] = 0x66;
  for (std::uint8_t mode : {0, 3, 6, 9, 12, 15}) {
    PsiDisplayState display;
    for (unsigned i = 0; i < 65536; ++i) display.set_vram_byte(std::uint16_t(i), 0xcc);
    copy(display, scratch, blank, 0xfffe, 3, 0x7fff, mode);
    // Independent expected byte addresses from each DMA_TABLE row. Odd count
    // ends on the low port for alternating mode; source and word addresses wrap.
    const auto at0 = mode >= 12 ? 0xffff : 0xfffe;
    const auto at1 = mode < 6 ? 0xffff : mode >= 12 ? 1 : 0;
    const auto at2 = mode < 6 ? 0 : mode >= 12 ? 3 : 2;
    const bool fixed = mode == 3 || mode == 9 || mode == 15;
    for (unsigned i = 0; i < 65536; ++i) {
      const unsigned expected = i == unsigned(at0) ? 0x11
                              : i == unsigned(at1) ? (fixed ? 0x11 : 0x22)
                              : i == unsigned(at2) ? (fixed ? 0x11 : 0x33) : 0xcc;
      check(display.vram_byte(std::uint16_t(i)) == expected,
            "Raw DMA mode changed an incorrect VRAM byte");
    }
    check(display.pending().empty() && display.pending_bytes() == 0 &&
              display.publication_serial() == 0,
          "Forced-blank transfer fabricated queue credit or publication");
  }
  PsiDisplayState display;
  display.tilemap.fill(0xdddd);
  copy(display, scratch, blank, 0xfffe, 3, 0xd800, 0);
  check(display.tilemap[0] == 0x2211 && display.tilemap[1] == 0xdd33,
        "High VRAM word-address alias or odd-byte tail was lost");
  const auto before = display.vram();
  for (std::uint8_t mode : {1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 255}) {
    rejects([&] { display.begin_transfer({PsiTransferKind::Vram, 0, 1, 0, mode}, scratch, blank); },
            "Unowned DMA_TABLE alias was accepted");
    check(display.vram() == before && !display.failed(),
          "Rejected raw mode changed or poisoned unused transport");
  }
}

void loader_sizes_and_zero() {
  const WorldDisplayFade blank(WorldDisplayFadeState{0x80});
  PsiScratch scratch;
  for (unsigned i = 0; i < 65536; ++i) scratch.bytes[i] = std::uint8_t(i * 7 + 3);
  for (const unsigned count : {0x2000u, 0x5000u, 0x1800u}) {
    PsiDisplayState display;
    copy(display, scratch, blank, 0x7000, std::uint16_t(count), 0x3000, 0);
    const auto image = display.vram();
    for (unsigned i = 0; i < 65536; ++i)
      check(image[i] == (i >= 0x6000 && i < 0x6000 + count
                            ? scratch.bytes[0x7000 + i - 0x6000] : 0),
            "Complete unchunked loader upload or retained tail differs");
  }
  PsiDisplayState display;
  copy(display, scratch, blank, 3, 0, 0x8000, 0);
  const auto image = display.vram();
  for (unsigned i = 0; i < 65536; ++i)
    check(image[i] == scratch.bytes[std::uint16_t(i + 3)],
          "Raw zero count did not perform its full65536-byte hardware transfer");
  check(display.pending_bytes() == 0, "Zero count acquired normalized byte credit");
}

void ordered_live_publication() {
  WorldDisplayFade visible(WorldDisplayFadeState{15});
  PsiScratch scratch;
  PsiDisplayState display;
  scratch.bytes[0x40] = 0x11;
  copy(display, scratch, visible, 0x40, 2, 0x5800, 3);
  check(display.tilemap[0] == 0 && display.pending_bytes() == 2,
        "Queued loader transfer wrote visible bytes eagerly");
  scratch.bytes[0x40] = 0xa6;
  const auto preview = display.preview_vram(scratch);
  check(preview[0xb000] == 0xa6 && preview[0xb001] == 0xa6 && display.tilemap[0] == 0,
        "Queued fixed source was captured early or preview changed the owner");
  check(display.preview_pending(scratch)[0] == 0xa6a6,
        "Existing PSI preview cannot see a raw VRAM write");
  display.publish_pending(scratch);
  check(display.vram() == preview && display.tilemap[0] == 0xa6a6,
        "Raw publication and immutable preview disagree");
  scratch.bytes[0] = 0x71;
  display.queue_frame(0);
  scratch.bytes[10] = 0xf4;
  copy(display, scratch, visible, 10, 1, 0x5800, 12);
  display.publish_pending(scratch);
  check(display.tilemap[0] == 0xf471 && display.tilemap[1] == 0x3000,
        "Shared queue did not preserve PSI-then-raw alias order");
  // Raw size0 has no byte credit but still owns an actual queued descriptor.
  copy(display, scratch, visible, 0, 0, 0, 0);
  check(display.pending().size() == 1 && display.pending_bytes() == 0,
        "Raw zero-count descriptor was confused with an empty queue");
  scratch.bytes[0] = 0xbe;
  display.publish_pending(scratch);
  check(display.graphics[0] == 0xbe && display.pending().empty(),
        "Publication skipped a queued zero-count full transfer");
}

void large_budget_wait_and_ring() {
  WorldDisplayFade visible(WorldDisplayFadeState{15});
  PsiScratch scratch;
  PsiDisplayState display;
  scratch.bytes[0] = 0x31;
  copy(display, scratch, visible, 0, 1, 0, 0);
  auto large = display.begin_transfer({PsiTransferKind::Vram, 0, 0x5000, 0x3000, 0},
                                       scratch, visible);
  check(!large->advance() && large->needs_publication() && display.pending_bytes() == 1,
        "Large displayed COPY did not wait for existing source byte credit");
  rejects([&] { large->respond(); }, "Raw COPY accepted a fake receipt");
  display.publish_pending(scratch);
  large->respond();
  check(large->advance() && display.pending_bytes() == 0x5000 &&
            display.pending().size() == 1,
        "Post-drain COPY incorrectly reapplied its0x1200 threshold");
  scratch.bytes[0] = 0x85;
  display.publish_pending(scratch);
  check(display.vram_byte(0x6000) == 0x85 && display.graphics[0] == 0x31,
        "Large COPY lost its live source or overwrote another physical region");
  for (unsigned i = 0; i < 31; ++i)
    copy(display, scratch, visible, 0, 1, std::uint16_t(0x1000 + i), 0);
  auto held = display.begin_transfer({PsiTransferKind::Vram, 0, 1, 0x5000, 0}, scratch, visible);
  check(!held->advance() && display.pending().size() == 31 && display.pending_bytes() == 32,
        "Raw descriptor did not share the actual full ring and byte credit");
  display.publish_pending(scratch);
  check(display.vram_byte(0xa000) == 0 && display.pending().empty(),
        "NMI published the held ring record before producer admission");
  held->respond();
  check(held->advance() && display.pending().size() == 1 && display.pending_bytes() == 0,
        "Held raw record lost valid post-NMI zero accounting");
  scratch.bytes[0] = 0xc7;
  display.publish_pending(scratch);
  check(display.vram_byte(0xa000) == 0xc7,
        "Held raw record failed to read scratch at its later actual publication");
}
} // namespace

int main() {
  try {
    physical_aliases(); dma_modes(); loader_sizes_and_zero();
    ordered_live_publication(); large_budget_wait_and_ring();
    std::cout << "Native battle VRAM tests passed: " << checks << " checks\n";
    return 0;
  } catch (const std::exception &error) {
    std::cerr << "Native battle VRAM tests failed after " << checks << ": " << error.what() << '\n';
    return 1;
  }
}
