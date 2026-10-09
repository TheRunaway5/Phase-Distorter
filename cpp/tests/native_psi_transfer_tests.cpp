#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/world_display_fade.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
namespace {
using namespace eb::native;
using namespace eb::native::battle;
unsigned checks{};
void require(bool condition, const char *message) {
  ++checks;
  if (!condition)
    throw std::runtime_error(message);
}
template <class F> void rejects(F f, const char *message) {
  bool rejected = false;
  try {
    f();
  } catch (const std::exception &) {
    rejected = true;
  }
  require(rejected, message);
}
struct BackgroundFixture {
  std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0x110000);
  void word(unsigned at, unsigned value) {
    bytes.at(at) = std::uint8_t(value);
    bytes.at(at + 1) = std::uint8_t(value >> 8);
  }
  void pointer(unsigned at, unsigned offset) {
    word(at, offset);
    word(at + 2, 0xc0 + (offset >> 16));
  }
  BackgroundFixture() {
    const auto layout = battle_background_layout(eb::GameVersion::US);
    for (unsigned i = 0; i < 327; ++i)
      bytes[layout.configurations + i * 17 + 2] = 4;
    for (unsigned i = 0; i < 103; ++i) {
      pointer(layout.graphics + i * 4, 0x1000);
      pointer(layout.arrangements + i * 4, 0x1100);
    }
    for (unsigned i = 0; i < 114; ++i)
      pointer(layout.palettes + i * 4, 0x1200);
    bytes[0x1000] = 0x3f;
    bytes[0x1001] = 0;
    bytes[0x1002] = 0xff;
    for (unsigned at : {0x1100u, 0x1103u}) {
      bytes[at] = 0xe7;
      bytes[at + 1] = 0xff;
      bytes[at + 2] = 0;
    }
    bytes[0x1106] = 0xff;
    for (unsigned i = 0; i < 16; ++i)
      word(0x1200 + i * 2, 0x7fff - i);
    for (unsigned i = 0; i < 484; ++i)
      bytes[0x10c614 + i * 8] = 1;
  }
};

void finish(PsiDisplayState::TransferOperation &operation) {
  require(operation.advance() && operation.complete() &&
              !operation.needs_publication(),
          "Ordinary transfer did not complete admission");
}
void ring() {
  PsiScratch scratch;
  PsiDisplayState display;
  WorldDisplayFade fade(WorldDisplayFadeState{15});
  for (unsigned cycle = 0; cycle < 40; ++cycle) {
    for (unsigned i = 0; i < 31; ++i) {
      scratch.bytes[i] = std::uint8_t(cycle + i);
      auto op =
          display.begin_transfer({PsiTransferKind::Graphics, std::uint16_t(i),
                                  1, std::uint16_t(i * 2)},
                                 scratch, fade);
      finish(*op);
    }
    const auto producer = display.producer_index();
    const auto consumer = display.consumer_index();
    require(display.pending().size() == 31 && display.pending_bytes() == 31,
            "Ring seeding did not use actual transfer admission");
    auto last = display.begin_transfer({PsiTransferKind::Graphics, 40, 1, 100},
                                       scratch, fade);
    require(!last->advance() && last->needs_publication(),
            "Full ring failed to suspend producer publication");
    require(display.producer_index() == producer &&
                display.consumer_index() == consumer &&
                display.pending_bytes() == 32 && display.pending().size() == 31,
            "Full ring published or omitted credit for its held descriptor");
    rejects([&] { last->respond(); }, "Ring accepted a fake publication");
    scratch.bytes[40] = std::uint8_t(cycle + 90);
    const auto held_old = display.graphics[100];
    display.publish_pending(scratch);
    require(display.graphics[100] == held_old && display.pending().empty() &&
                !display.pending_bytes(),
            "NMI consumed an unpublished ring record");
    last->respond();
    finish(*last);
    require(display.pending().size() == 1 && !display.pending_bytes(),
            "Resumed producer fabricated a byte credit after actual NMI reset");
    rejects([&] { last->respond(); },
            "Completed transfer accepted second acknowledgment");
    display.publish_pending(scratch);
    require(display.graphics[100] == std::uint8_t(cycle + 90),
            "Next NMI omitted held descriptor");
    for (unsigned i = 0; i < 31; ++i)
      require(display.graphics[i * 2] == std::uint8_t(cycle + i),
              "Live ring data order changed");
    require(display.producer_index() == display.consumer_index(),
            "Drained ring cursors disagree");
  }
}
void budget_and_live_parameters() {
  PsiScratch scratch;
  PsiDisplayState display;
  WorldDisplayFade fade(WorldDisplayFadeState{15});
  auto seed = display.begin_transfer({PsiTransferKind::Graphics, 0, 0x1200, 0},
                                     scratch, fade);
  finish(*seed);
  auto blocked = display.begin_transfer({PsiTransferKind::FrameLowBytes, 100},
                                        scratch, fade);
  require(!blocked->advance() && display.pending_bytes() == 0x1200,
          "Budget wait prematurely credited its unadmitted descriptor");
  display.publish_pending(scratch);
  // A real callback producer replaces shared COPY parameters and adds new work.
  auto callback =
      display.begin_transfer({PsiTransferKind::Clear, 0}, scratch, fade);
  finish(*callback);
  blocked->respond();
  require(!blocked->advance() && blocked->needs_publication(),
          "Budget wait ignored callback-restaged actual bytes");
  display.publish_pending(scratch);
  blocked->respond();
  finish(*blocked);
  require(display.pending_bytes() == 2048 && display.pending().size() == 1 &&
              display.pending().front().kind == PsiTransferKind::Clear,
          "Budget continuation hid shared COPY parameter replacement");
  display.publish_pending(scratch);

  auto again = display.begin_transfer({PsiTransferKind::Graphics, 0, 0x1200, 0},
                                      scratch, fade);
  finish(*again);
  auto low = display.begin_transfer({PsiTransferKind::FrameLowBytes, 65530},
                                    scratch, fade);
  require(!low->advance(), "Expected low-plane budget wait");
  fade.begin_out(16, 0);
  fade.commit_frame(fade.preview_next_frame());
  require(fade.state().brightness == 0x80, "Fixture fade did not force blank");
  display.publish_pending(scratch);
  low->respond();
  finish(*low);
  require(display.pending().size() == 1 && display.pending_bytes() == 1024,
          "COPY incorrectly reread blank after its budget wait");
  auto high = display.begin_transfer({PsiTransferKind::FrameHighBytes, 0},
                                     scratch, fade);
  finish(*high);
  require(display.tilemap[0] == 0x3000 && display.pending().size() == 1,
          "Next forced-blank COPY did not execute immediately");
  scratch.bytes[65530] = 0x83;
  scratch.bytes[0] = 0x47;
  display.publish_pending(scratch);
  require(display.tilemap[0] == 0x3083 && display.tilemap[6] == 0x3047,
          "Delayed map DMA failed live-source bank wrapping");
}
void destination_domain() {
  PsiScratch scratch;
  PsiDisplayState display;
  WorldDisplayFade fade(WorldDisplayFadeState{15});
  const auto before = display.copy_parameters();
  rejects(
      [&] {
        display.begin_transfer({PsiTransferKind::Graphics, 0, 1, 3}, scratch,
                               fade);
      },
      "Word-addressed source DMA accepted an odd byte destination");
  require(display.pending().empty() && !display.pending_bytes() &&
              display.copy_parameters() == before && !display.failed(),
          "Rejected graphics destination changed its transport owner");
}
void wrapping_budget() {
  PsiScratch scratch;
  PsiDisplayState display;
  WorldDisplayFade fade(WorldDisplayFadeState{15});
  // Raw owned entry state:31 clear records credit63488. The source addition
  // wraps before comparing, so the32nd credit becomes0 and reaches ring wait.
  for (unsigned i = 0; i < 31; ++i)
    display.queue_clear();
  auto clear =
      display.begin_transfer({PsiTransferKind::Clear, 0}, scratch, fade);
  require(!clear->advance() && display.pending_bytes() == 0,
          "Budget addition did not wrap before unsigned threshold");
  display.publish_pending(scratch);
  clear->respond();
  finish(*clear);
  display.publish_pending(scratch);
}
void cinematic_live_source() {
  PsiScratch scratch;
  PsiDisplayState display;
  WorldDisplayFade fade(WorldDisplayFadeState{15});
  std::array<std::uint8_t, 2048> text{};
  text[17] = 0x31; text[18] = 0x52;
  const PsiTransfer row{PsiTransferKind::Vram, 17, 2, 0x7fff, 0,
                        text, 0x7e7dfe};
  auto operation = display.begin_transfer(row, scratch, fade);
  finish(*operation);
  const auto before = display.vram();
  auto preview = display.preview_vram(scratch);
  require(preview[65534] == 0x31 && preview[65535] == 0x52 &&
              display.vram() == before && display.pending().size() == 1,
          "Cinematic preview consumed its actual live row publication");
  text[17] = 0x67; text[18] = 0x89;
  display.publish_pending(scratch);
  require(display.vram_byte(65534) == 0x67 &&
              display.vram_byte(65535) == 0x89 && display.pending().empty(),
          "Cinematic NMI latched a stale snapshot of its row source");
  require(preview[65534] == 0x31 && preview[65535] == 0x52,
          "Cinematic NMI mutated a previously captured VRAM image");

  fade.begin_out(16, 0); fade.commit_frame(fade.preview_next_frame());
  text[0] = 0xaf;
  auto clear = display.begin_transfer(
      {PsiTransferKind::Vram, 0, 2048, 0x5800, 3, text, 0x7e7dfe},
      scratch, fade);
  finish(*clear);
  require(display.pending().empty() && display.vram_byte(0xb000) == 0xaf &&
              display.vram_byte(0xb7ff) == 0xaf,
          "Forced-blank cinematic fixed-source DMA was deferred or incremented");
  const auto parameters = display.copy_parameters();
  const auto snapshot = display.vram();
  rejects([&] {
    display.begin_transfer(
        {PsiTransferKind::Vram, 2047, 2, 0, 0, text, 0x7e7dfe}, scratch, fade);
  }, "Cinematic DMA accepted an out-of-range live source");
  rejects([&] {
    display.begin_transfer(
        {PsiTransferKind::Graphics, 0, 1, 0, 0, text, 0x7e7dfe}, scratch, fade);
  }, "Ordinary PSI graphics accepted a foreign cinematic source");
  require(display.vram() == snapshot && display.copy_parameters() == parameters &&
              display.pending().empty() && !display.failed(),
          "Rejected cinematic DMA changed its retained transport state");
}
void retained_descriptor_alias() {
  PsiScratch scratch;
  PsiDisplayState display;
  WorldDisplayFade fade(WorldDisplayFadeState{15});
  std::array<std::uint8_t,64> alias;
  for(unsigned i=0;i<alias.size();++i) alias[i]=std::uint8_t(17+i*3);
  display.write_descriptor_prefix(alias);
  require(std::equal(alias.begin(),alias.end(),display.descriptor_bytes().begin()) &&
      display.pending().empty() && display.pending_bytes()==0,
      "Idle palette alias did not retain the physical descriptor prefix");
  auto first=display.begin_transfer({PsiTransferKind::Vram,0x1234,0x56,0x789a,12},scratch,fade);
  finish(*first);
  const std::array<std::uint8_t,8> record{12,0x56,0,0x34,0x12,0x7f,0x9a,0x78};
  require(std::equal(record.begin(),record.end(),display.descriptor_bytes().begin()),
      "Published descriptor lost source bank, mode, raw size or word destination");
  const auto retained=display.descriptor_bytes();
  const std::vector<std::uint8_t> snapshot(retained.begin(),retained.end());
  rejects([&]{display.write_descriptor_prefix(alias);},"Palette alias overwrote a pending descriptor");
  require(std::equal(snapshot.begin(),snapshot.end(),display.descriptor_bytes().begin()),
      "Rejected palette alias partially changed retained descriptors");
  display.publish_pending(scratch);
  // Place the full ring at1..31: its unpublished held record is slot0 and
  // lies outside pending(). The prefix must protect that record as well.
  for(unsigned i=0;i<31;++i) {
    auto op=display.begin_transfer({PsiTransferKind::Graphics,0,1,0},scratch,fade);
    finish(*op);
  }
  auto held=display.begin_transfer({PsiTransferKind::Graphics,0,1,2},scratch,fade);
  require(!held->advance() && held->needs_publication(),"Held alias fixture did not fill actual ring");
  rejects([&]{display.write_descriptor_prefix(std::span<const std::uint8_t>(alias).first(8));},
      "Palette alias overwrote a credited unpublished descriptor");
  display.publish_pending(scratch);held->respond();finish(*held);display.publish_pending(scratch);
  display.write_descriptor_prefix(alias);
  require(std::equal(alias.begin(),alias.end(),display.descriptor_bytes().begin()),
      "Completed held descriptor retained a stale queue reservation");
  std::array<std::uint8_t,257> too_long{};
  rejects([&]{display.write_descriptor_prefix(too_long);},"Palette alias exceeded the actual queue");
}
void cinematic_source_bank() {
  PsiScratch scratch;
  PsiDisplayState display;
  WorldDisplayFade fade(WorldDisplayFadeState{0x80});
  PeripheralState peripherals;display.bind_peripherals(peripherals,eb::GameVersion::US);
  std::array<std::uint8_t,65536> bank;
  for(unsigned i=0;i<bank.size();++i)bank[i]=std::uint8_t(i*37+11);
  auto copy=display.begin_transfer({PsiTransferKind::Vram,65530,32,0x4080,0,bank,0xc50000},scratch,fade);
  finish(*copy);
  for(unsigned i=0;i<32;++i)require(display.vram_byte(std::uint16_t(0x8100+i))==
      bank[std::uint16_t(65530+i)],"Raw actor source increment crossed its actual bank");
  const auto &registers=peripherals.dma(1);
  require(registers[2]==26&&registers[3]==0&&registers[4]==0xc5,
      "Raw actor source bank wrap lost its actual completed DMA identity");
  const auto retained=display.vram();const auto parameters=display.copy_parameters();
  rejects([&]{display.begin_transfer({PsiTransferKind::Vram,0,1,0,0,bank,0xc50001},scratch,fade);},
      "Foreign actor bank admitted a nonaligned extent beyond its actual bank");
  rejects([&]{display.begin_transfer({PsiTransferKind::Vram,0,32,0,0,
      std::span<const std::uint8_t>(bank).first(32),0xc5fff0},scratch,fade);},
      "Partial actor source silently exposed an adjacent bank");
  require(display.vram()==retained&&display.copy_parameters()==parameters&&!display.failed(),
      "Rejected raw actor source bank partially changed its retained display");
}
void animation_order() {
  BackgroundFixture input;
  BattleBackgroundScenes catalog(input.bytes, eb::GameVersion::US);
  auto background = catalog.prepare(BattleBackgroundPair{0, 0, 0});
  PsiAnimationState state;
  PsiScratch scratch;
  PsiDisplayState display;
  PaletteBankState colors;
  PaletteEffectState ramps;
  PaletteEffects effects(colors, ramps);
  PsiAnimation animation(state, scratch, display, effects, background);
  WorldDisplayFade fade(WorldDisplayFadeState{15});
  state.time_until_next_frame = 1;
  state.frame_hold = 7;
  state.total_frames = 4;
  state.frame_offset = 0xff80;
  state.palette_countdown = 1;
  state.palette_hold = 9;
  state.palette_lower = state.palette_upper = 1;
  state.palette_base = 48;
  state.palette[1] = 0x91ab;
  state.enemy_start = 1;
  effects.set_speed(3);
  auto earlier = display.begin_transfer(
      {PsiTransferKind::Graphics, 0, 0xc00, 0}, scratch, fade);
  finish(*earlier);
  const auto saved = state;
  rejects([&] { animation.advance(); },
          "Synchronous advance silently crossed a required publication");
  require(state == saved && display.pending_bytes() == 0xc00,
          "Nonblocking preflight rejection mutated state");
  animation.validate_begin();
  auto operation = animation.begin(fade);
  rejects([&] { animation.validate_begin(); },
          "Frame preflight accepted an already active PSI child");
  require(!operation->advance() && operation->needs_publication(),
          "High-plane call did not suspend independently");
  require(state.time_until_next_frame == 7 && state.total_frames == 4 &&
              state.frame_offset == 0xff80 && state.palette_countdown == 1 &&
              state.enemy_start == 1 && ramps.speed == 3,
          "Animation tail ran before both transfer admissions completed");
  require(display.pending_bytes() == 0x1000 &&
              display.pending().back().kind == PsiTransferKind::FrameLowBytes,
          "Low-plane transfer was not admitted before high-plane wait");
  rejects([&] { operation->respond(); },
          "Animation accepted a fake publication");
  scratch.bytes[0xff80] = 0x85;
  display.publish_pending(scratch);
  require(display.tilemap[0] == 0x85,
          "Real intermediate low plane was not visible");
  state.frame_offset = 0x7f00;
  state.total_frames = 10;
  operation->respond();
  require(operation->advance() && operation->complete(),
          "Animation did not finish after real budget drain");
  require(state.frame_offset == 0x8300 && state.total_frames == 9 &&
              state.palette_countdown == 9 &&
              colors.staged_color(49) == 0x91ab && ramps.speed == 20,
          "Post-wait cursor/count/palette/enemy reads were stale or reordered");
  require(display.pending().size() == 1 &&
              display.pending().front().kind == PsiTransferKind::FrameHighBytes,
          "Animation incorrectly waited for or omitted final high-plane "
          "publication");
  display.publish_pending(scratch);
  require(display.tilemap[0] == 0x3085,
          "Final high plane did not preserve published low bytes");
  auto next = animation.begin(fade);
  require(next->advance(),
          "Completed retained operation blocked the next advance");
}
} // namespace
int main() {
  try {
    ring();
    budget_and_live_parameters();
    destination_domain();
    wrapping_budget();
    cinematic_live_source();
    retained_descriptor_alias();
    cinematic_source_bank();
    animation_order();
    std::cout << "Native PSI transfer tests passed: " << checks << " checks\n";
    return 0;
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
