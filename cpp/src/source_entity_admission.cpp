#include "eb/source_entity_admission.hpp"
#include "eb/overworld_sprite_runtime.hpp"
#include "eb/threed_npc_restoration.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <array>

namespace eb {
namespace {
constexpr unsigned task_pool = 70, ordinary_enemy_tasks = 4;
struct Layout {
  unsigned pointers, placements, placements_end, definitions;
  unsigned first, free_role, next_role, npc_ids, free_task, next_task, task_heads, scripts;
  unsigned enabled, objects, photo, debug, flags, enemy_enabled, enemy_count, enemy_max, enemy_ids, butterfly;
};
Layout layout(GameVersion version) {
  return version == GameVersion::JP
    ? Layout{0xf6223, 0xf6c23, 0xf89c1, 0xf89c1, 0xa46, 0xa48, 0xa94, 0x3098,
             0xa4a, 0x1250, 0xad0, 0xa58, 0x4dde, 0x4dec, 0xb6b8, 0x46f2, 0x9eb3,
             0x4de0, 0x4de2, 0x4de4, 0x3110, 0x4de6}
    : Layout{0xf61e7, 0xf6be7, 0xf8985, 0xf8985, 0xa50, 0xa52, 0xa9e, 0x2c9a,
             0xa54, 0x125a, 0xada, 0xa62, 0x4a58, 0x4a66, 0xb4ef, 0x436c, 0x9c08,
             0x4a5a, 0x4a5c, 0x4a5e, 0x2d12, 0x4a60};
}
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
  return bytes[at] | unsigned(bytes[at + 1]) << 8;
}
SourceTaskContentProof task_proof(const SceneReadView &view) {
  return view.native_sprites ? view.native_sprites->source_task_content_proof() : SourceTaskContentProof{};
}
// Each reviewed program keeps its regional directory identity, content proof
// and complete worker demand together. Unknown programs receive no task bound.
enum class Content { movement, contextual, both };
struct TaskRule {
  unsigned us_script, jp_script, us_entry, jp_entry, tasks;
  Content content;
};
constexpr std::array<TaskRule, 27> task_rules{{
  {6,   6,   0xc3a2e4, 0xc3a2d4, 3, Content::movement},
  {8,   8,   0xc3a2aa, 0xc3a29a, 1, Content::movement},
  {12,  12,  0xc3a2e4, 0xc3a2d4, 3, Content::movement},
  {13,  13,  0xc3a33b, 0xc3a32b, 3, Content::movement},
  {14,  14,  0xc3a349, 0xc3a339, 3, Content::movement},
  {15,  15,  0xc3a357, 0xc3a347, 3, Content::movement},
  {16,  16,  0xc3a365, 0xc3a355, 3, Content::movement},
  {17,  17,  0xc3a373, 0xc3a363, 3, Content::movement},
  {19,  19,  0xc3a48a, 0xc3a47a, ordinary_enemy_tasks, Content::movement},
  {20,  20,  0xc3a4c9, 0xc3a4b9, ordinary_enemy_tasks, Content::movement},
  {21,  21,  0xc3a549, 0xc3a539, ordinary_enemy_tasks, Content::movement},
  {22,  22,  0xc3a5c9, 0xc3a5b9, ordinary_enemy_tasks, Content::movement},
  {23,  23,  0xc3a643, 0xc3a633, ordinary_enemy_tasks, Content::movement},
  {24,  24,  0xc3a6c4, 0xc3a6b4, ordinary_enemy_tasks, Content::movement},
  {25,  25,  0xc3a714, 0xc3a704, ordinary_enemy_tasks, Content::movement},
  {26,  26,  0xc3a780, 0xc3a770, ordinary_enemy_tasks, Content::movement},
  {27,  27,  0xc3a7f8, 0xc3a7e8, ordinary_enemy_tasks, Content::movement},
  {28,  28,  0xc3a874, 0xc3a864, ordinary_enemy_tasks, Content::movement},
  {29,  29,  0xc3a8d2, 0xc3a8c2, ordinary_enemy_tasks, Content::movement},
  {30,  30,  0xc3a953, 0xc3a943, ordinary_enemy_tasks, Content::movement},
  {31,  31,  0xc3a9da, 0xc3a9ca, ordinary_enemy_tasks, Content::movement},
  {32,  32,  0xc3de01, 0xc3ddeb, 5, Content::movement},
  {588, 588, 0xc36aff, 0xc36af9, 3, Content::both},
  {590, 590, 0xc36b4b, 0xc36b45, 3, Content::both},
  {605, 605, 0xc36e19, 0xc36e13, 2, Content::both},
  {606, 606, 0xc36e2d, 0xc36e27, 2, Content::both},
  // The authored EVENT864 photo trigger has directory identity 860 in JP.
  {864, 860, 0xc394fd, 0xc394f7, 2, Content::contextual},
}};
unsigned task_limit(const SceneReadView &view, unsigned script, SourceTaskContentProof proof) {
  const bool japanese = view.game_version == GameVersion::JP;
  const auto rule = std::find_if(task_rules.begin(), task_rules.end(), [&](const auto &candidate) {
    return script == (japanese ? candidate.jp_script : candidate.us_script);
  });
  if (rule == task_rules.end() ||
      (rule->content != Content::contextual && !proof.movement) ||
      (rule->content != Content::movement && !proof.contextual)) return task_pool;
  const unsigned at = (japanese ? 0x4002f : 0x400d4) + script * 3;
  if (at + 3 > view.cartridge_rom.size() ||
      (word(view.cartridge_rom, at) | unsigned(view.cartridge_rom[at + 2]) << 16) !=
      (japanese ? rule->jp_entry : rule->us_entry)) return task_pool;
  return rule->tasks;
}
} // namespace
SourceTaskContentProof verify_source_task_content(std::span<const std::uint8_t> assets, GameVersion version) {
  // Import_action_scripts declares these complete authored content spans.
  // Frozen regional signatures bind task bounds to the reviewed programs and
  // all their short-call/child targets, including buses and photo triggers.
  const auto matches = [&](unsigned at, unsigned size, std::uint64_t expected) {
    if (at > assets.size() || size > assets.size() - at) return false;
    std::uint64_t hash = 14695981039346656037ull;
    for (auto byte : assets.subspan(at, size)) hash = (hash ^ byte) * 1099511628211ull;
    return hash == expected;
  };
  const bool jp = version == GameVersion::JP;
  return {matches(jp ? 0x3a03d : 0x3a043, jp ? 0x3f95 : 0x3fa5,
                  jp ? 0x6e46263f2639dd2eull : 0x3a5a141e94156ecbull),
          matches(0x30195, jp ? 0x9e57 : 0x9e5d,
                  jp ? 0x46151935170cdc10ull : 0x35f85e791a1e624full)};
}
namespace {
bool appearance(const SceneReadView &view, const Layout &l, unsigned at, bool restore) {
  const auto byte = [&](unsigned field) {
    const auto original = view.cartridge_rom[at + field];
    return restore ? restored_threed_npc_byte(l.definitions, at + field, original) : original;
  };
  const unsigned style = byte(8), flag = unsigned(byte(6)) | unsigned(byte(7)) << 8;
  if (!style) return true;
  if (style > 2 || flag > 1024) return false;
  const bool set = flag && (view.work_ram[l.flags + (flag - 1) / 8] & (1u << ((flag - 1) & 7)));
  return set == (style == 2);
}
struct Canonical { unsigned roles{}, tasks{}; };
Canonical pending_canonical(const SceneReadView &view, const Layout &l,
                            const std::array<bool, 1584> &active, SourceTaskContentProof proof) {
  const int camera_x = std::int16_t(word(view.work_ram, view.source_profile.wram_background_scroll.layer1_x)),
            camera_y = std::int16_t(word(view.work_ram, view.source_profile.wram_background_scroll.layer1_y));
  const int left = std::max(0, camera_x - 64), right = std::min(8192, camera_x + 320),
            top = std::max(0, camera_y - 64), bottom = std::min(10240, camera_y + 320);
  const unsigned combo = word(view.work_ram, view.source_profile.wram_loaded_map_tile_combination);
  std::array<bool, 1584> pending{};
  Canonical result;
  if (!word(view.work_ram, l.enabled)) return {};
  if (left >= right || top >= bottom) return {22, task_pool};
  for (unsigned y = unsigned(top) / 256; y <= unsigned(bottom - 1) / 256; ++y)
    for (unsigned x = unsigned(left) / 256; x <= unsigned(right - 1) / 256; ++x) {
      const unsigned pointer_at = l.pointers + (y * 32 + x) * 2;
      if (pointer_at + 2 > view.cartridge_rom.size()) return {22, task_pool};
      const unsigned pointer = word(view.cartridge_rom, pointer_at);
      if (!pointer) continue;
      const unsigned at = (l.placements & 0xff0000) | pointer;
      if (at < l.placements || at + 2 > l.placements_end || l.placements_end > view.cartridge_rom.size())
        return {22, task_pool};
      const unsigned count = word(view.cartridge_rom, at);
      if (count > (l.placements_end - at - 2) / 4) return {22, task_pool};
      for (unsigned i = 0; i < count; ++i) {
        const unsigned entry = at + 2 + i * 4, npc = word(view.cartridge_rom, entry);
        const unsigned px = x * 256 + view.cartridge_rom[entry + 3], py = y * 256 + view.cartridge_rom[entry + 2];
        if (npc >= 1584 || l.definitions + npc * 17 + 17 > view.cartridge_rom.size()) return {22, task_pool};
        if (int(px) < left || int(px) >= right || int(py) < top || int(py) >= bottom || active[npc] || pending[npc] ||
            (view.cartridge_rom[view.source_profile.rom_map_tileset_palette_sectors + py / 128 * 32 + px / 256] >> 3) != combo)
          continue;
        const unsigned definition = l.definitions + npc * 17;
        if (word(view.work_ram, l.objects) && view.cartridge_rom[definition] != 3) continue;
        if (word(view.work_ram, l.enabled) != 1 && std::uint16_t(px - camera_x) < 256 && std::uint16_t(py - camera_y) < 224)
          continue;
        if (!appearance(view, l, definition, false) && !appearance(view, l, definition, true)) continue;
        pending[npc] = true;
        ++result.roles;
        result.tasks = std::min(task_pool, result.tasks + task_limit(view, word(view.cartridge_rom, definition + 4), proof));
      }
    }
  return result;
}
} // namespace
bool SourceEntityAdmission::ordinary_world(const SceneReadView &view) {
  const auto l = layout(view.game_version);
  const auto &regs = view.ppu_registers;
  // Initial LOAD_MAP scans are authoritative under forced blank too.
  if (word(view.work_ram, l.photo) || word(view.work_ram, l.debug) ||
      word(view.work_ram, view.source_profile.wram_battle_mode_flag) || (regs[5] & 0x37) != 1 ||
      regs[7] != 0x39 || regs[8] != 0x59 || (regs[0x30] & 0xf0)) return false;
  const unsigned masked = (regs[0x2c] & regs[0x2e]) | (regs[0x2d] & regs[0x2f]);
  for (unsigned layer = 0; layer < 5; ++layer)
    if ((masked & (1u << layer)) && ((regs[0x23 + layer / 2] >> ((layer & 1) * 4)) & 0x0a)) return false;
  const unsigned combo = word(view.work_ram, view.source_profile.wram_loaded_map_tile_combination),
                 sectors = view.source_profile.rom_map_tileset_palette_sectors;
  const int x = std::int16_t(word(view.work_ram, view.source_profile.wram_background_scroll.layer1_x)) + 128,
            y = std::int16_t(word(view.work_ram, view.source_profile.wram_background_scroll.layer1_y)) + 112;
  return combo < 32 && x >= 0 && x < 8192 && y >= 0 && y < 10240 && sectors <= view.cartridge_rom.size() &&
         view.cartridge_rom.size() - sectors >= 32 * 80 &&
         (view.cartridge_rom[sectors + y / 128 * 32 + x / 256] >> 3) == combo;
}
std::optional<unsigned> SourceEntityAdmission::moving_npc_tasks(const SceneReadView &view, unsigned npc) {
  const auto l = layout(view.game_version);
  if (npc >= 1584 || l.definitions + npc * 17 + 17 > view.cartridge_rom.size()) return std::nullopt;
  const unsigned at = l.definitions + npc * 17, type = view.cartridge_rom[at];
  const unsigned script = word(view.cartridge_rom, at + 4);
  if (type < 1 || type > 3 || (script != 6 && script != 12)) return std::nullopt;
  const unsigned tasks = task_limit(view, script, task_proof(view));
  return tasks < task_pool ? std::optional<unsigned>(tasks) : std::nullopt;
}
std::optional<unsigned> SourceEntityAdmission::script_task_demand(const SceneReadView &view, unsigned script) {
  const unsigned demand = task_limit(view, script, task_proof(view));
  return demand < task_pool ? std::optional<unsigned>(demand) : std::nullopt;
}
std::optional<SourceEntityAdmission> SourceEntityAdmission::inspect(const SceneReadView &view) {
  const auto l = layout(view.game_version);
  const auto proof = task_proof(view);
  SourceEntityAdmission result;
  std::array<bool, 30> roles{};
  std::array<bool, task_pool> tasks{};
  std::array<bool, 1584> active{};
  unsigned role = word(view.work_ram, l.first);
  while (role != 0xffff) {
    if (role >= 60 || (role & 1) || roles[role / 2]) return std::nullopt;
    roles[role / 2] = true;
    const unsigned npc = word(view.work_ram, l.npc_ids + role);
    if (npc < active.size()) active[npc] = true;
    unsigned task = word(view.work_ram, l.task_heads + role), count = 0;
    while (task != 0xffff) {
      if (task >= 140 || (task & 1) || tasks[task / 2]) return std::nullopt;
      tasks[task / 2] = true;
      ++count; task = word(view.work_ram, l.next_task + task);
    }
    // Party/system roles do not use authored NPC identity. Their existing
    // source tasks remain counted in the physical pool; the spare floor below
    // protects unrelated scheduling without interpreting their programs.
    const bool enemy = npc >= 0x8000 && npc < 0x8000 + 484 && word(view.work_ram, l.enemy_ids + role) < 231;
    if (npc < active.size() || enemy) {
      const unsigned limit = task_limit(view, word(view.work_ram, l.scripts + role), proof);
      if (count < limit) result.pending_workers_ = std::min(task_pool, result.pending_workers_ + limit - count);
    }
    role = word(view.work_ram, l.next_role + role);
  }
  role = word(view.work_ram, l.free_role);
  while (role != 0xffff) {
    if (role >= 60 || (role & 1) || roles[role / 2]) return std::nullopt;
    roles[role / 2] = true;
    if (role < 44) ++result.free_roles_;
    role = word(view.work_ram, l.next_role + role);
  }
  unsigned task = word(view.work_ram, l.free_task);
  while (task != 0xffff) {
    if (task >= 140 || (task & 1) || tasks[task / 2]) return std::nullopt;
    tasks[task / 2] = true;
    ++result.free_tasks_; task = word(view.work_ram, l.next_task + task);
  }
  const unsigned maximum = word(view.work_ram, l.enemy_max), enemies = word(view.work_ram, l.enemy_count);
  if (maximum > 10 || enemies > maximum) return std::nullopt;
  result.remaining_enemies_ = word(view.work_ram, l.enemy_enabled) ? maximum - enemies : 0;
  result.enemy_tasks_ = result.remaining_enemies_ * ordinary_enemy_tasks +
                       unsigned(result.remaining_enemies_ && !word(view.work_ram, l.butterfly));
  if (ordinary_world(view)) {
    const auto pending = pending_canonical(view, l, active, proof);
    result.canonical_roles_ = pending.roles; result.canonical_tasks_ = pending.tasks;
  }
  return result;
}
bool SourceEntityAdmission::can_admit_extra_npc(unsigned total_tasks) const {
  const unsigned enemy_tasks = std::max(16u, enemy_tasks_);
  return total_tasks && total_tasks <= task_pool && free_roles_ > canonical_roles_ + remaining_enemies_ &&
         free_tasks_ >= pending_workers_ + canonical_tasks_ + enemy_tasks + total_tasks;
}
bool SourceEntityAdmission::can_admit_enemy_group(unsigned roles, unsigned total_tasks) const {
  return roles && roles <= remaining_enemies_ && total_tasks && total_tasks <= task_pool &&
         free_roles_ >= canonical_roles_ + roles &&
         free_tasks_ >= pending_workers_ + canonical_tasks_ + std::max(16u, total_tasks);
}
} // namespace eb
