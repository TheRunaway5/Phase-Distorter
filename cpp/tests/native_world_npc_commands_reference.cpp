// Original whole NPC text producers and their genuine allocation/fade callees.
// Includes only reusable source initialization and imported fixture resources;
// the older fade reference's main remains a separately named function.
#define main native_sprite_fade_reference_main
#include "native_world_sprite_fade_reference.cpp"
#undef main
#include "eb/native/world_npc_commands.hpp"
#include <array>
namespace {
struct NpcLayout {
  unsigned cc_sprite, cc_direction, cc_npc, cc_script, gather, drain, queue,
      queue_count, prepared_x, prepared_y, prepared_direction, height, priority,
      variables, npc, direction, script, index, pc, bank, sleep, stack,
      temporary, next, whole_x, whole_y, whole_z, fraction_x, fraction_y,
      fraction_z, velocity_x, velocity_y, velocity_z, velocity_fraction_x,
      velocity_fraction_y, velocity_fraction_z, actor_variables, actor_priority,
      animation;
};
constexpr NpcLayout npc_us{
    0xc16744, 0xc16490, 0xc16509, 0xc16ebf, 0x97ca, 0xc065a3, 0x5e06, 0x5e36,
    0x9e2d,   0x9e2f,   0x9e31,   0xa48,    0xa4a,  0xa38,    0x2c9a, 0x2af6,
    0xa62,    0xada,    0x13fe,   0x148a,   0x1372, 0x12e6,   0x1516, 0x125a,
    0xb8e,    0xbca,    0xc06,    0xc42,    0xc7e,  0xcba,    0xcf6,  0xd32,
    0xd6e,    0xdaa,    0xde6,    0xe22,    0xe5e,  0x103e,   0x10f2};
constexpr NpcLayout npc_jp{
    0xc169c3, 0xc1670f, 0xc16788, 0xc1713e, 0x9a7e, 0xc067d1, 0x618c, 0x61bc,
    0xa033,   0xa035,   0xa037,   0xa3e,    0xa40,  0xa2e,    0x3098, 0x2ef4,
    0xa58,    0xad0,    0x13f4,   0x1480,   0x1368, 0x12dc,   0x150c, 0x1250,
    0xb84,    0xbc0,    0xbfc,    0xc38,    0xc74,  0xcb0,    0xcec,  0xd28,
    0xd64,    0xda0,    0xddc,    0xe18,    0xe54,  0x1034,   0x10e8};

std::uint64_t npc_checks{}, npc_commands{}, npc_sequences{};
void equal_npc(std::uint32_t source, std::uint32_t native, const char *field,
               unsigned role = 0) {
  ++npc_checks;
  if (source != native)
    throw std::runtime_error(context + " field=" + field +
                             " role=" + std::to_string(role) +
                             " source=" + std::to_string(source) +
                             " native=" + std::to_string(native));
}
struct NpcSource : Source {
  NpcLayout n;
  NpcSource(const eb::GameAssets &a, Totals &t)
      : Source(a, t), n(japanese ? npc_jp : npc_us) {}
  void near(unsigned target, unsigned x) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = (target & 0xff0000) | 0xff00;
    cpu.accumulator = 0;
    cpu.x_index = x;
    cpu.y_index = 0;
    const auto end = cpu.program_counter + 3;
    cpu.execute_instruction<0x20>(target & 65535, 3);
    for (unsigned i = 0;
         cpu.program_counter != end || cpu.stack_pointer != 0x1fff; ++i) {
      if (i == 3000000)
        throw std::runtime_error(context +
                                 " original NPC command did not return " +
                                 cpu.describe_registers());
      cpu.step_instruction();
      ++totals.instructions;
    }
    ++totals.calls;
  }
  void command(unsigned target, std::initializer_list<unsigned> bytes) {
    put(n.gather, 0);
    unsigned count = 0;
    for (auto byte : bytes) {
      near(target, byte);
      ++count;
      equal_npc(cpu.accumulator, count == bytes.size() ? 0 : (target & 65535),
                "CC continuation");
    }
    ++npc_commands;
  }
};
struct NpcPair {
  Content &content;
  NpcSource source;
  NpcCatalog catalog;
  ActorWorld actors;
  PreparedActorState prepared;
  battle::PsiScratch scratch;
  story::RandomState random{0x1234, 0xabcd};
  WorldSpriteFade fade;
  WorldNpcCommands commands;
  NpcPair(Content &c, Totals &t)
      : content(c), source(c.assets, t),
        catalog(c.assets.image, npc_catalog_layout(c.assets.version, false)),
        actors(c.sprites, c.scripts),
        fade(c.effects, actors, random, prepared, scratch),
        commands(catalog, *c.scripts->scripts(), actors, prepared, fade) {
    source.put(0x24, random.primary_word);
    source.put(0x26, random.secondary_word);
    for (unsigned i = 0; i < 65536; ++i)
      source.bus->work_ram[65536 + i] = scratch.bytes[i] =
          std::uint8_t(i * 17 + (i >> 8) * 3 + 0x35);
    seed_prepared(0);
  }
  void seed_prepared(unsigned salt) {
    prepared.x = std::uint16_t(128 + salt * 7);
    prepared.y = std::uint16_t(112 + salt * 11);
    prepared.direction = std::uint16_t(salt & 7);
    prepared.height = std::uint16_t(5 + salt);
    prepared.priority = 0x125;
    const auto &n = source.n;
    source.put(n.prepared_x, prepared.x);
    source.put(n.prepared_y, prepared.y);
    source.put(n.prepared_direction, prepared.direction);
    source.put(n.height, prepared.height);
    source.put(n.priority, prepared.priority);
    for (unsigned i = 0; i < 8; ++i)
      source.put(n.variables + 2 * i, prepared.variables[i] = std::uint16_t(
                                          0x51 + salt * 11 + i * 23));
  }
  void compare() {
    const auto &n = source.n;
    equal_npc(source.word(n.prepared_x), prepared.x, "prepared X");
    equal_npc(source.word(n.prepared_y), prepared.y, "prepared Y");
    equal_npc(source.word(n.prepared_direction), prepared.direction,
              "prepared direction");
    equal_npc(source.word(n.height), prepared.height, "prepared height");
    equal_npc(source.word(n.priority), prepared.priority, "prepared priority");
    for (unsigned i = 0; i < 8; ++i)
      equal_npc(source.word(n.variables + i * 2), prepared.variables[i],
                "prepared variable", i);
    equal_npc(source.word(n.queue_count), unsigned(commands.pending().size()),
              "pending count");
    for (unsigned i = 0; i < commands.pending().size(); ++i) {
      equal_npc(source.word(n.queue + i * 4), commands.pending()[i].sprite,
                "queued sprite", i);
      equal_npc(source.word(n.queue + i * 4 + 2), commands.pending()[i].script,
                "queued script", i);
    }
    for (unsigned role = 0; role < 30; ++role) {
      const auto id = actors.actor_for_role(role);
      const auto source_script = source.word(n.script + 2 * role);
      equal_npc(source_script < 0x8000, bool(id), "live role", role);
      if (!id)
        continue;
      const auto &actor = actors.actor(*id);
      const auto &a = actor.action();
      equal_npc(source_script, actor.script_style(), "creation script", role);
      equal_npc(source.word(n.npc + 2 * role), actor.npc().value_or(0xffff),
                "NPC identity", role);
      equal_npc(source.word(n.direction + 2 * role), actor.behavior.direction,
                "direction", role);
      equal_npc(source.word(n.actor_priority + 2 * role), a.priority,
                "priority", role);
      equal_npc(source.word(n.animation + 2 * role), a.animation, "animation",
                role);
      const unsigned whole[] = {n.whole_x, n.whole_y, n.whole_z},
                     fraction[] = {n.fraction_x, n.fraction_y, n.fraction_z};
      const unsigned velocity[] = {n.velocity_x, n.velocity_y, n.velocity_z},
                     vf[] = {n.velocity_fraction_x, n.velocity_fraction_y,
                             n.velocity_fraction_z};
      for (unsigned axis = 0; axis < 3; ++axis) {
        equal_npc((source.word(whole[axis] + 2 * role) << 16) |
                      source.word(fraction[axis] + 2 * role),
                  a.position[axis], "fixed position", role);
        equal_npc((source.word(velocity[axis] + 2 * role) << 16) |
                      source.word(vf[axis] + 2 * role),
                  a.velocity[axis], "fixed velocity", role);
      }
      for (unsigned i = 0; i < 8; ++i)
        equal_npc(source.word(n.actor_variables + 2 * role + i * 60),
                  a.variables[i], "variable", role);
      const auto tasks = actor.tasks();
      unsigned ix = source.word(n.index + 2 * role), count = 0;
      while (ix != 65535) {
        check(count < tasks.size(), "Original has additional task");
        const auto &task = tasks[count];
        const unsigned pointer =
            (source.word(n.bank + ix) << 16) | source.word(n.pc + ix);
        equal_npc(pointer & 0x3fffff, task.cursor, "task cursor", role);
        equal_npc(source.word(n.sleep + ix), task.sleep_frames, "task sleep",
                  role);
        equal_npc(source.word(n.stack + ix) / 2, task.stack_depth, "task stack",
                  role);
        equal_npc(source.word(n.temporary + ix), task.temporary,
                  "task temporary", role);
        ix = source.word(n.next + ix);
        ++count;
        check(count <= 70, "Original task chain did not terminate");
      }
      equal_npc(count, unsigned(tasks.size()), "task count", role);
    }
    for (unsigned i = 0; i < 65536; ++i)
      equal_npc(source.bus->work_ram[65536 + i], scratch.bytes[i],
                "shared scratch byte", i);
    equal_npc(source.word(source.l.count), fade.count(), "fade count");
    equal_npc(source.word(source.l.allocated), fade.allocated_bytes(),
              "fade allocation");
    equal_npc(source.word(source.l.controller),
              fade.controller()
                  ? *actors.actor(*fade.controller()).authored_role()
                  : 65535,
              "fade controller");
  }
  void sprite(unsigned group, unsigned script, unsigned effect) {
    source.command(source.n.cc_sprite, {group & 255, group >> 8, script & 255,
                                        script >> 8, effect});
    commands.create_sprite(group, script, effect);
    compare();
  }
  void npc(unsigned id, unsigned script, unsigned effect) {
    source.command(source.n.cc_npc,
                   {id & 255, id >> 8, script & 255, script >> 8, effect});
    commands.create_npc(id, script, effect);
    compare();
  }
  void direction(unsigned npc, unsigned raw) {
    source.command(source.n.cc_direction, {npc & 255, npc >> 8, raw});
    commands.set_direction(npc, raw - 1);
    compare();
  }
  void script(unsigned npc, unsigned script) {
    source.command(source.n.cc_script,
                   {npc & 255, npc >> 8, script & 255, script >> 8});
    commands.set_script(npc, script);
    compare();
  }
};
[[maybe_unused]] void npc_run(const eb::GameAssets &assets) {
  Content c(assets);
  Totals totals;
  npc_checks = npc_commands = npc_sequences = 0;
  for (unsigned queued : {0u, 1u, 3u, 12u}) {
    context = assets.title + " deferred count=" + std::to_string(queued);
    NpcPair pair(c, totals);
    for (unsigned i = 0; i < queued; ++i)
      pair.sprite(1, i & 1 ? 8 : 10, 255);
    pair.seed_prepared(3);
    pair.source.call(pair.source.n.drain);
    pair.commands.drain_created();
    pair.compare();
    ++npc_sequences;
  }
  {
    context = assets.title + " duplicate NPC/first-role/script";
    NpcPair pair(c, totals);
    pair.npc(729, 8, 0);
    pair.seed_prepared(2);
    pair.npc(729, 10, 0);
    pair.npc(735, 10, 0);
    for (unsigned d = 1; d <= 8; ++d) {
      pair.direction(729, d);
      pair.direction(729, d);
    }
    pair.direction(65530, 4);
    pair.script(729, 750);
    pair.script(735, 756);
    pair.script(65530, 750);
    ++npc_sequences;
  }
  for (unsigned mode = 0; mode <= 10; ++mode)
    for (bool npc : {false, true}) {
      context = assets.title + " create=" +
                (npc ? std::string("NPC") : std::string("sprite")) +
                " fade=" + std::to_string(mode);
      NpcPair pair(c, totals);
      pair.seed_prepared(mode & 7);
      if (npc)
        pair.npc(735, 10, mode);
      else
        pair.sprite(1, 8, mode);
      ++npc_sequences;
    }
  check(npc_commands >= 60 && npc_sequences == 27,
        "Required complete NPC producer coverage missing");
  std::cout << "PASS " << assets.title
            << " NPC whole CC commands=" << npc_commands
            << " sequences=" << npc_sequences << " comparisons=" << npc_checks
            << " source_calls=" << totals.calls
            << " instructions=" << totals.instructions
            << "; literal operands, forced-blank transfers, complete "
               "allocation/fade callees; live zero-memory parsing and actor "
               "scheduling separately tested\n";
}
} // namespace
#ifndef NATIVE_WORLD_NPC_COMMANDS_REFERENCE_NO_MAIN
int main(int argc, char **argv) {
  if (argc < 2)
    return 77;
  try {
    for (int i = 1; i < argc; ++i)
      npc_run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}

#endif
