#include "eb/entity_preload.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snapshot_archive.hpp"
#include "eb/native/stationary_npc_policy.hpp"
#include "eb/snes_bus.hpp"
#include "eb/source_entity_admission.hpp"
#include "eb/source_enemy_preload.hpp"
#include "generated_profile.hpp"

namespace eb {
namespace {
struct NpcLayout {
  unsigned definitions, npc_ids, current_actor, enabled;
};
constexpr NpcLayout npc_layout(bool jp) {
  return jp ? NpcLayout{0xf89c1, 0x3098, 0x1a38, 0x4dde} : NpcLayout{0xf8985, 0x2c9a, 0x1a42, 0x4a58};
}
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
  return bytes[at] | unsigned(bytes[at + 1]) << 8;
}
bool supported_preview(const SceneReadView &view, const NpcLayout &l, unsigned npc) {
  if (npc >= 1584 || l.definitions + npc * 17 + 17 > view.cartridge_rom.size()) return false;
  const unsigned at = l.definitions + npc * 17;
  const unsigned type = view.cartridge_rom[at], script = word(view.cartridge_rom, at + 4);
  return native::uses_native_stationary_retention(static_cast<native::NpcType>(type), script);
}
bool unsupported_npc(const SceneReadView &view, const NpcLayout &l, unsigned npc) {
  return npc < 1584 && l.definitions + npc * 17 + 17 <= view.cartridge_rom.size() &&
         view.cartridge_rom[l.definitions + npc * 17] >= 1 &&
         view.cartridge_rom[l.definitions + npc * 17] <= 3 && !supported_preview(view, l, npc);
}
bool npc_site(bool jp, std::uint32_t pc, std::uint8_t opcode, unsigned length) {
  return (opcode == 0xa9 && length == 3 &&
          (pc == (jp ? 0xc023a3u : 0xc02395u) || pc == (jp ? 0xc023b9u : 0xc023abu))) ||
         (opcode == 0xc9 && length == 3 &&
          (pc == (jp ? 0xc0c6d5u : 0xc0c6f3u) || pc == (jp ? 0xc0c6dau : 0xc0c6f8u))) ||
         (opcode == 0x69 && length == 3 && pc == (jp ? 0xc025ceu : 0xc025c0u)) ||
         (opcode == 0x85 && length == 2 && pc == (jp ? 0xc02574u : 0xc02566u)) ||
         (opcode == 0x22 && length == 4 &&
          (pc == (jp ? 0xc0160au : 0xc015f4u) || pc == (jp ? 0xc0165du : 0xc01647u) ||
           pc == (jp ? 0xc02500u : 0xc024f2u) || pc == (jp ? 0xc024c4u : 0xc024b6u)));
}
} // namespace
void EntityPreload::begin_column(MainCpu65816 &cpu, std::uint8_t opcode, unsigned length,
                                 std::uint32_t operand, const SnesBus *hardware) {
  if (!guarded_world_ || !enabled() || column_.phase || !hardware ||
      opcode != 0x22 || length != 4 || cpu.emulation_mode || (cpu.status_register & 0x30)) return;
  const bool jp = cpu.game_version == GameVersion::JP;
  const bool right = cpu.program_counter == (jp ? 0xc0160au : 0xc015f4u);
  const bool left = cpu.program_counter == (jp ? 0xc0165du : 0xc01647u);
  if ((!right && !left) || operand != (jp ? 0xc025ddu : 0xc025cfu)) return;
  const auto view = hardware->scene_read_view();
  if (!word(view.work_ram, npc_layout(jp).enabled) || !SourceEntityAdmission::ordinary_world(view)) return;
  column_.phase = 1; column_.site = cpu.program_counter; column_.stack = cpu.stack_pointer;
  column_.extended_x = std::uint16_t(cpu.accumulator + (right ? int(extra_pixels_ / 8) : -int(extra_pixels_ / 8)));
  column_.input = {cpu.accumulator, cpu.x_index, cpu.y_index, cpu.direct_page, cpu.status_register, cpu.data_bank};
}
void EntityPreload::finish_column(MainCpu65816 &cpu) {
  if (!column_.phase || cpu.program_counter != column_.site + 4 || cpu.stack_pointer != column_.stack) return;
  const auto restore = [&](const Registers &r) {
    cpu.accumulator = r.a; cpu.x_index = r.x; cpu.y_index = r.y;
    cpu.direct_page = r.direct; cpu.status_register = r.status; cpu.data_bank = r.bank;
  };
  if (column_.phase == 1) {
    column_.canonical_return = {cpu.accumulator, cpu.x_index, cpu.y_index, cpu.direct_page,
                                 cpu.status_register, cpu.data_bank};
    restore(column_.input);
    cpu.accumulator = column_.extended_x;
    cpu.program_counter = column_.site;
    column_.phase = 2;
  } else {
    restore(column_.canonical_return);
    column_ = {};
  }
}
void EntityPreload::snapshot_columns(SnapshotArchive &archive) {
  if (archive.format_version() < 6) { if (archive.loading()) column_ = {}; return; }
  archive(column_.phase, column_.site, column_.stack, column_.extended_x);
  const auto registers = [&](Registers &r) { archive(r.a, r.x, r.y, r.direct, r.status, r.bank); };
  registers(column_.input); registers(column_.canonical_return);
  const bool jp_site = column_.site == 0xc0160a || column_.site == 0xc0165d;
  const bool us_site = column_.site == 0xc015f4 || column_.site == 0xc01647;
  if (archive.loading() && (column_.phase > 2 || (column_.phase && (!guarded_world_ || !(jp_site || us_site)))))
    throw std::runtime_error("Invalid snapshot NPC column continuation");
}
void EntityPreload::adapt(GameVersion version, std::uint32_t pc,
                          std::uint8_t opcode, unsigned length,
                          std::uint32_t &operand,
                          std::uint16_t &accumulator, const SnesBus *hardware,
                          std::uint16_t direct_page) const {
  // These are verified sites in the frozen US/JP source translations, not
  // ROM byte patches. Guard the instruction shape as well as its address.
  // Native-width and standalone hardware callers never enter this policy.
  const bool jp = version == GameVersion::JP;
  if (guarded_world_) {
    if (!hardware) return;
    if (adapt_source_enemy_preload(*hardware, extra_pixels_, pc, opcode, length, operand, accumulator, direct_page)) return;
    if (!npc_site(jp, pc, opcode, length)) return;
    const auto view = hardware->scene_read_view();
    const auto l = npc_layout(jp);
    if (opcode == 0x22 && operand == (jp ? 0xc01e5fu : 0xc01e49u) &&
        (pc == (jp ? 0xc02500u : 0xc024f2u) || pc == (jp ? 0xc024c4u : 0xc024b6u))) {
      const auto free = SourceEntityAdmission::inspect(view);
      const int dx = std::int16_t(std::uint16_t(word(view.work_ram, std::uint16_t(direct_page + 0x0e)) -
                         word(view.work_ram, view.source_profile.wram_background_scroll.layer1_x)));
      const bool extra = dx < -64 || dx >= 320;
      bool admit = free && free->has_capacity();
      if (admit && extra) {
        const unsigned npc = word(view.work_ram, std::uint16_t(direct_page + 0x20));
        const auto demand = SourceEntityAdmission::moving_npc_tasks(view, npc);
        admit = word(view.work_ram, l.enabled) && SourceEntityAdmission::ordinary_world(view) &&
                demand && free->can_admit_extra_npc(*demand);
      }
      if (!admit) {
        // INIT_ENTITY's failure returns zero; CREATE would then clobber role0.
        // A real source RTL leaves its caller's -1 rejection protocol intact.
        operand = jp ? 0xc0941a : 0xc0943b;
        accumulator = 0xffff;
      }
      return;
    }
    if (!word(view.work_ram, l.enabled) || !SourceEntityAdmission::ordinary_world(view)) return;
    // begin_column schedules an additional source call after this canonical
    // call returns. Replacing the canonical scan strands stationary actors.
    if (opcode == 0x22 && operand == (jp ? 0xc025ddu : 0xc025cfu)) return;
    if (opcode == 0xa9) {
      const unsigned npc = word(view.work_ram, std::uint16_t(direct_page + 0x20));
      if (!SourceEntityAdmission::moving_npc_tasks(view, npc)) return;
    } else if (opcode == 0xc9) {
      const unsigned slot = word(view.work_ram, l.current_actor);
      if (slot >= 30 || !unsupported_npc(view, l, word(view.work_ram, l.npc_ids + slot * 2))) return;
    }
  }
  const unsigned tiles = extra_pixels_ / 8;
  if (opcode == 0xa9 && length == 3) { // C0222B: NPC horizontal spawn bounds
    if (pc == (jp ? 0xc023a3u : 0xc02395u) && operand == 0xffc0)
      operand = std::uint16_t(-64 - int(extra_pixels_));
    else if (pc == (jp ? 0xc023b9u : 0xc023abu) && operand == 320)
      operand += extra_pixels_;
  } else if (opcode == 0xc9 && length == 3) { // C0C6B6: entity retention
    if (pc == (jp ? 0xc0c6d5u : 0xc0c6f3u) && operand == 0xff80)
      operand = std::uint16_t(-128 - int(extra_pixels_));
    else if (pc == (jp ? 0xc0c6dau : 0xc0c6f8u) && operand == 384)
      operand += extra_pixels_;
  } else if (opcode == 0x69 && length == 3) {
    if (pc == (jp ? 0xc025ceu : 0xc025c0u) && operand == 36)
      operand += 2 * tiles; // C0255C: NPC row scan length, in 8px tiles
    else if (pc == (jp ? 0xc02b55u : 0xc02b45u) && operand == 5)
      operand += 2 * extra_pixels_ / 64; // enemy row, in 64px sectors
  } else if ((opcode == 0x85 && length == 2 && operand == 4 &&
              pc == (jp ? 0xc02574u : 0xc02566u)) ||
             (opcode == 0xa8 && length == 1 &&
              pc == (jp ? 0xc02a87u : 0xc02a77u))) {
    // Row scans serve initial map loads AND vertical scrolling. Move the
    // left edge before the source saves the parameter; widen the loop above.
    accumulator = std::uint16_t(accumulator - tiles);
  } else if (opcode == 0x22 && length == 4) {
    if ((pc == (jp ? 0xc0160au : 0xc015f4u) &&
         operand == (jp ? 0xc025ddu : 0xc025cfu)) ||
        (pc == (jp ? 0xc0161cu : 0xc01606u) &&
         operand == (jp ? 0xc02b65u : 0xc02b55u)))
      accumulator = std::uint16_t(accumulator + tiles);
    else if ((pc == (jp ? 0xc0165du : 0xc01647u) &&
              operand == (jp ? 0xc025ddu : 0xc025cfu)) ||
             (pc == (jp ? 0xc0166fu : 0xc01659u) &&
              operand == (jp ? 0xc02b65u : 0xc02b55u)))
      accumulator = std::uint16_t(accumulator - tiles);
  }
}
} // namespace eb
