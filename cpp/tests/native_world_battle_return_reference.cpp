// Complete original ordinary/instant INIT_BATTLE_OVERWORLD and INIT_BATTLE_SCRIPTED
// following real world bootstrap, contact palette preparation and source callers.
#include "battle.hpp"
#include "eb/native/story/audio_clock.hpp"
#include "eb/native/story/special_events.hpp"
#include "eb/native/world_battle_return.hpp"
#include "eb/native/world_bicycle_lifecycle.hpp"
#include "eb/native/world_fade_out.hpp"
#include "eb/native/world_script_teleport.hpp"
#include "eb/native/world_screen_transition.hpp"
#include "generated_assets.hpp"
#include "native_encounter_source_fixture.hpp"
#include "world.hpp"
#include <iostream>
using namespace eb::native;
namespace world_battle_reference {
using Source = encounter_reference::Source;
void check(bool v, const std::string &m) {
  if (!v)
    throw std::runtime_error(m);
}
struct Rig {
  session::Content content;
  eb::NativeAudio audio;
  session::World w;
  story::AudioFrameClock physical_clock;
  session::BattleContent battle_content;
  session::Battle b;
  WorldTeleportState teleport;
  WorldBattleReturn returning;
  WorldFadeOut fade;
  WorldScreenTransitionState screen_state;
  WorldScreenTransition screen_transition;
  WorldScriptTeleportState script_teleport_state;
  WorldScriptTeleport script_teleport;
  WorldBicycleLifecycle bicycle;
  story::SpecialEvents special_events;
  const std::vector<std::array<std::uint16_t, 2>> *inputs{};
  std::size_t cursor{};
  const char *phase = "startup";
  // Optional host-time input is used only by completion acceptance. The
  // original world-return differential keeps exact recorded polls by default.
  std::uint64_t physical_frames{};
  bool physical_input{};
  bool teleport_preflight_checks{};
  unsigned rejected_teleports{};
  bool trace_queued_creations{};
  std::vector<QueuedActorCreation> last_creation_queue;
  explicit Rig(const eb::GameAssets &a, bool game_init_input = false)
      : content(a.image, a.version), audio(a.image, a.version),
        w(content, audio, 256), physical_clock(
                                    w.clock,
                                    [this] {
                                      w.runtime->interrupt_publication();
                                      audio.publication();
                                    },
                                    [this] {
                                      ++physical_frames;
                                      if (physical_input)
                                        w.peripherals.set_buttons(physical_frames & 2 ? 0x80 : 0);
                                    }),
        battle_content(a.image, a.version), b(battle_content, w, a.image),
        returning({w.startup_owners(),
                   w.following,
                   *w.map_load,
                   w.map_state,
                   w.music,
                   w.music_state,
                   audio,
                   w.presentation,
                   b.publication,
                   b.blank,
                   b.video,
                   w.frame_display,
                   w.fade,
                   w.visual,
                   content.layers,
                   w.layer,
                   w.encounter,
                   teleport,
                   content.teleports,
                   *w.relocation,w.npc_commands}),
        fade(*w.runtime, w.fade, w.frame_display, w.clock, a.version),
        screen_transition(content.teleport_resources, screen_state,
            {*w.runtime,w.actors,w.palette,w.scratch,w.display,w.frame_display,
             w.fade,w.clock,w.visual,w.effects,w.navigation,b.frame_state.giygas_phase,
             &w.peripherals,&w.map_state,&w.swirl_setup}),
        script_teleport({w.startup_owners(),script_teleport_state,
            content.teleport_resources,content.startup,content.program,w.menus,
            *w.map_load,w.map_state,*w.relocation,w.npc_commands,screen_transition,
            fade,w.fade,w.navigation,w.music,[this](std::uint16_t sound){audio.play_sound(sound);}}),
        bicycle(
            {w.startup_owners(), w.music, *content.sprites, content.creation}),
        special_events(a.image, a.version,
                       {w.party, w.random, w.text.event_flags, b.roster,
                        b.action, w.refresh_party, w.following, w.interactions,
                        w.session, w.actors, b.scene,w.clock,w.meter_flipout,w.maintenance}) {
    audio.initialize();
    if(game_init_input)w.clock.interrupt_mask |= 0x81;
    w.runtime->refresh_world_capture();
    audio.bind_clock(physical_clock);
    physical_clock.bind_peripherals(w.peripherals);
  }
  void service(WorldRuntime::Operation &op) {
    if(trace_queued_creations) {
      const auto pending=w.npc_commands.pending();
      if(!std::equal(pending.begin(),pending.end(),last_creation_queue.begin(),last_creation_queue.end())) {
        std::cout<<"native_creation_queue count="<<pending.size();
        for(const auto &entry:pending)std::cout<<" sprite="<<entry.sprite<<" script="<<entry.script;
        std::cout<<std::endl;
        last_creation_queue.assign(pending.begin(),pending.end());
      }
    }
    if (op.maintenance_request()) {
      check(op.maintenance_request()->kind ==
                WorldMaintenanceService::SectorMusic,
            "Additional actual world maintenance service");
      w.music.select(w.interactions.state().leader_x,
                     w.interactions.state().leader_y);
      w.music.apply_sector();
      op.respond_maintenance();
      return;
    }
    const auto kind = op.service();
    if (kind == story::SceneService::Frame) {
      std::array<std::uint16_t, 2> raw{};
      if (inputs) {
        if (cursor >= inputs->size())
          throw std::runtime_error(
              std::string("Extra native input poll during ") + phase +
              " cursor=" + std::to_string(cursor) +
              " rng=" + std::to_string(w.random.primary_word) + "," +
              std::to_string(w.random.secondary_word));
        raw = (*inputs)[cursor++];
      }
      if(!physical_input)w.peripherals.set_buttons(raw[0]);
      const auto boundary = op.frame_requirement();
      if (boundary != story::FrameRequirement::InputOnly) {
        physical_clock.advance_boundary(audio);
        if (boundary == story::FrameRequirement::NmiPublication)
          audio.publication();
        else if (boundary == story::FrameRequirement::VBlank &&
                 (w.clock.effective_interrupt_mask() & 0x80)) {
          w.runtime->interrupt_publication();
          audio.publication();
        }
      }
      if(physical_input)raw={std::uint16_t(physical_frames&2?0x80:0),0};
      op.complete_frame(raw);
      if (boundary != story::FrameRequirement::InputOnly)
        physical_clock.finish_frame(audio);
    } else if (kind == story::SceneService::Publication) {
      physical_clock.advance_boundary(audio);
      audio.publication();
      op.complete_publication();
      physical_clock.finish_frame(audio);
    } else if (kind == story::SceneService::ScriptSound) {
      audio.script_sound(op.script_sound());
      op.respond_script_sound();
    } else if (kind == story::SceneService::Dialogue) {
      const auto &event = op.dialogue_event();
      if (event)
        if (const auto *p = std::get_if<dialogue::TextEffect>(&*event);
            p && p->kind == dialogue::TextEffectKind::TextSound) {
          audio.play_sound(7);
          op.respond_dialogue({});
          return;
        }
      if (event)
        if (const auto *p = std::get_if<dialogue::Request>(&*event);
            p && p->kind == dialogue::RequestKind::ScriptMusic) {
          w.music.script_music(*p->script_music);
          op.respond_dialogue({});
          return;
        }
      if(event)
        if(const auto *p=std::get_if<dialogue::Request>(&*event);
           p && p->kind==dialogue::RequestKind::Teleport) {
          if(teleport_preflight_checks) {
            const auto video=w.display.vram();
            const auto scratch=w.scratch.bytes;
            const auto flags=w.text.event_flags;
            const auto frame=w.clock.frame_counter;
            const auto publications=w.clock.publications;
            const auto polls=w.clock.input_polls;
            const auto brightness=w.fade.state().brightness;
            const auto suppression=w.maintenance.overworld_status_suppression;
            const auto x=w.interactions.state().leader_x,y=w.interactions.state().leader_y;
            auto reject=[&](unsigned destination) {
              bool failed=false;
              try {auto invalid=script_teleport.begin(destination,op);}
              catch(const std::exception&) {failed=true;}
              check(failed && !script_teleport.busy() && !script_teleport.failed(),
                    "Invalid teleport admission created or poisoned an operation");
              check(w.display.vram()==video && w.scratch.bytes==scratch &&
                    w.text.event_flags==flags && w.clock.frame_counter==frame &&
                    w.clock.publications==publications && w.clock.input_polls==polls &&
                    w.fade.state().brightness==brightness &&
                    w.maintenance.overworld_status_suppression==suppression &&
                    w.interactions.state().leader_x==x && w.interactions.state().leader_y==y &&
                    op.service()==story::SceneService::Dialogue,
                    "Rejected teleport changed its actual parent or world owners");
              ++rejected_teleports;
            };
            reject(0x10000);
            script_teleport_state.post_callback=1;
            reject(p->count);
            script_teleport_state.post_callback=0;
          }
          auto child=script_teleport.begin(p->count,op);
          drive(*child);
          check(child->complete(),"Actual nested teleport did not finish");
          child.reset();
          op.respond_dialogue({});
          return;
        }
      if (event)
        if (const auto *p = std::get_if<dialogue::Request>(&*event);
            p && p->kind == dialogue::RequestKind::SpecialEvent) {
          auto effect = special_events.begin(*p->special_event,
                                             w.runtime->scene_operation(op));
          for (unsigned work = 0; !effect->complete() && work < 1000000;
               ++work) {
            const auto progress = effect->advance(1);
            if (progress == dialogue::Progress::Suspended) {
              if (auto *child = effect->scene()) {
                auto proxy = w.runtime->service_child(*child, op);
                runtime(*proxy);
              } else {
                auto dismount = bicycle.begin(&op);
                drive(*dismount);
                dismount.reset();
                if (auto *party = effect->party_update())
                  party->respond_bicycle_dismount();
                else
                  effect->respond_bicycle_dismount();
              }
            }
          }
          check(effect->complete(),
                "Actual special-event child did not complete");
          dialogue::Response response;
          response.special_event_result = effect->result();
          effect.reset();
          op.respond_dialogue(response);
          return;
        }
      const auto *request =
          event ? std::get_if<dialogue::Request>(&*event) : nullptr;
      const auto *effect =
          event ? std::get_if<dialogue::TextEffect>(&*event) : nullptr;
      throw std::runtime_error(
          "Full world caller reached an additional actual dialogue service "
          "variant=" +
          std::to_string(event ? event->index() : 99) +
          " effect=" + std::to_string(effect ? unsigned(effect->kind) : 99) +
          " request=" + std::to_string(request ? unsigned(request->kind) : 99) +
          " command=" + std::to_string(request ? request->command : 99) +
          " selector=" + std::to_string(request ? request->selector : 99));
    } else if(kind==story::SceneService::ActorEngine) {
      const auto &request=op.actor_request();
      if(request && request->binding.operation==NativeAction::PlaySound) {
        audio.script_sound(op.actor_sound());
        op.respond_actor_sound();
        return;
      }
      if(request && request->binding.operation==NativeAction::CheckContentIntegrity) {
        w.session.content_integrity=content.integrity_difference;
        op.respond_actor(w.session.content_integrity,request->binding.parameter_bytes);
        return;
      }
      throw std::runtime_error("Unimplemented actual actor service actor="+
          std::to_string(request->actor)+" operation="+
          std::to_string(unsigned(request->binding.operation))+" authored="+
          std::to_string(request->diagnostic.authored_identifier)+" instruction="+
          std::to_string(request->diagnostic.instruction));
    } else
      throw std::runtime_error(
          "Full world caller reached another actual runtime service " +
          std::to_string(unsigned(*kind)));
  }
  void runtime(WorldRuntime::Operation &op) {
    for (unsigned i = 0; i < 1000000; ++i) {
      auto p = op.advance(1);
      if (p == dialogue::Progress::Finished)
        return;
      if (p == dialogue::Progress::Suspended)
        service(op);
    }
    throw std::runtime_error("Scene proxy budget");
  }
  void scene(story::Scene::Operation &child) {
    auto proxy = w.runtime->service_child(child);
    runtime(*proxy);
  }
  template <class Op> void drive(Op &op) {
    for (unsigned i = 0; i < 1000000; ++i) {
      auto p = op.advance(1);
      if (p == dialogue::Progress::Finished)
        return;
      if (p == dialogue::Progress::Suspended) {
        auto *child = op.runtime_operation();
        check(child, "World caller has unfinished party lifecycle");
        service(*child);
      }
    }
    throw std::runtime_error("World caller budget");
  }
  void encounter(battle::Encounter::Operation &op) {
    for (unsigned i = 0; i < 1000000; ++i) {
      auto p = op.advance(1);
      if (p == dialogue::Progress::Finished)
        return;
      if (p == dialogue::Progress::Suspended) {
        if (auto *menu = op.menu_audio()) {
          audio.play_sound(menu->audio()->kind ==
                                   battle::MenuAudioKind::TextSound
                               ? 7
                               : menu->audio()->value);
          menu->respond_audio();
        } else {
          auto *child = op.scene();
          check(child, "Battle caller has unfinished actual party lifecycle");
          scene(*child);
        }
      }
    }
    throw std::runtime_error("Encounter budget");
  }
};
saves::ContinueSnapshot saved(Rig &r, bool instant = false) {
  saves::PersistedState s;
  s.version = r.content.version;
  auto &g = s.game;
  g.favourite_thing[1] = 1;
  g.text_speed = 2;
  g.text_flavour = 1;
  g.leader_x = 0x456;
  g.leader_y = 0x678;
  g.leader_direction = 2;
  g.party_count = g.controlled_count = 1;
  g.party_order[0] = g.display_order[0] = 1;
  g.controlled_order[0] = 0;
  auto &c = s.characters[0];
  c.name = {0x71, 0x72, 0x73, 0x74, 0};
  if (s.version == eb::GameVersion::JP)
    c.name = {0x41, 0x42, 0x43, 0x44, 0};
  auto &v = c.values;
  v.level = 10;
  v.maximum_hp = v.current_hp = v.target_hp = 99;
  v.maximum_pp = v.current_pp = v.target_pp = 40;
  v.offense = v.defense = v.speed = v.guts = v.luck = v.vitality = v.iq = 20;
  v.base_offense = v.base_defense = v.base_speed = v.base_guts = v.base_luck =
      v.base_vitality = v.base_iq = 20;
  if (instant) { v.offense=v.base_offense=255; v.speed=v.base_speed=255; }
  return {s, saves::prepare_continue(s, *r.content.continuing)};
}
void near_call(Source &s, unsigned target) {
  s.cpu.program_counter = (target & 0xff0000) | 0xff00;
  s.cpu.status_register = eb::MainCpu65816::InterruptDisable;
  const unsigned stack = s.cpu.stack_pointer, end = s.cpu.program_counter + 3;
  s.cpu.execute_instruction<0x20>(target & 65535, 3);
  for (unsigned i = 0; i < 100000000; ++i) {
    if (s.cpu.program_counter == end && s.cpu.stack_pointer == stack)
      return;
    s.step();
  }
  throw std::runtime_error("Near original helper did not return");
}
void seed(Source &s, Rig &r, const saves::SaveArchive &a) {
  const unsigned game = s.jp ? 0x9aa9 : 0x97f5, chars = s.jp ? 0x9c7f : 0x99ce;
  const auto l = saves::layout(r.content.version);
  std::copy_n(a.bytes().begin() + saves::SaveArchive::header_size,
              l.persisted_bytes(), s.bus->work_ram.begin() + game);
  std::copy(r.w.text.event_flags.begin(), r.w.text.event_flags.end(),
            s.bus->work_ram.begin() + (s.jp ? 0x9eb3 : 0x9c08));
  for (unsigned i = 0; i < 6; ++i)
    s.put((s.jp ? 0x514e : 0x4dc8) + i * 2, chars + i * (s.jp ? 94 : 95));
  const unsigned params = s.jp ? 0xa2e : 0xa38;
  for (unsigned i = 0; i < 8; ++i)
    s.put(params + i * 2, r.w.spawn.prepared.variables[i]);
  s.put(s.jp ? 0xa3e : 0xa48, r.w.spawn.prepared.height);
  s.put(s.jp ? 0xa40 : 0xa4a, r.w.spawn.prepared.priority);
  s.put(0x24, r.w.random.primary_word);
  s.put(0x26, r.w.random.secondary_word);
  s.put(s.jp ? 0x991d : 0x9625, r.w.output.policy().text_speed);
  s.put(s.jp ? 0x9943 : 0x964b,
        r.w.windows.prompt_state().text_speed_based_wait);
  s.put(s.jp ? 0x991f : 0x9627, r.w.clock.hp_speed);
  s.put((s.jp ? 0x991f : 0x9627) + 2, r.w.clock.hp_speed >> 16);
  s.put(0xa1, 0x2000);
  s.put(0xa3, 0x2000);
}
using Bytes = std::array<std::uint8_t, 78>;
void put(std::span<std::uint8_t> b, unsigned n, unsigned v) {
  b[n] = v;
  b[n + 1] = v >> 8;
}
void put32(std::span<std::uint8_t> b, unsigned n, std::uint32_t v) {
  put(b, n, v);
  put(b, n + 2, v >> 16);
}
Bytes encode(const battle::Battler &v) {
  Bytes b{};
  put(b, 0, v.id);
  put(b, 2, v.sprite);
  put(b, 4, v.action);
  b[6] = v.action_order;
  b[7] = v.action_item_slot;
  b[8] = v.action_argument;
  b[9] = v.targeting;
  b[10] = v.target;
  b[11] = v.label;
  b[12] = v.consciousness;
  b[13] = v.taken_turn;
  b[14] = v.side;
  b[15] = v.npc;
  b[16] = v.row;
  put(b, 17, v.hp);
  put(b, 19, v.target_hp);
  put(b, 21, v.maximum_hp);
  put(b, 23, v.pp);
  put(b, 25, v.target_pp);
  put(b, 27, v.maximum_pp);
  std::copy(v.afflictions.begin(), v.afflictions.end(), b.begin() + 29);
  b[36] = v.guarding;
  b[37] = v.shield_hp;
  put(b, 38, v.offense);
  put(b, 40, v.defense);
  put(b, 42, v.speed);
  put(b, 44, v.guts);
  put(b, 46, v.luck);
  b[48] = v.vitality;
  b[49] = v.iq;
  b[50] = v.base_offense;
  b[51] = v.base_defense;
  b[52] = v.base_speed;
  b[53] = v.base_guts;
  b[54] = v.base_luck;
  b[55] = v.paralysis_resistance;
  b[56] = v.freeze_resistance;
  b[57] = v.flash_resistance;
  b[58] = v.fire_resistance;
  b[59] = v.brainshock_resistance;
  b[60] = v.hypnosis_resistance;
  put(b, 61, v.money);
  put32(b, 63, v.experience);
  b[67] = v.resource;
  b[68] = v.x;
  b[69] = v.y;
  b[70] = v.initiative;
  b[71] = v.unknown71;
  b[72] = v.blink;
  b[73] = v.alternate_flash;
  b[74] = v.targeted;
  b[75] = v.alternate;
  put(b, 76, v.original_enemy);
  return b;
}

void compare_party(const Source &s, const Rig &r) {
  const unsigned game = s.jp ? 0x9aa9 : 0x97f5, chars = s.jp ? 0x9c7f : 0x99ce,
                 gs = s.jp ? 3 : 0, cs = s.jp ? 1 : 0, stride = s.jp ? 94 : 95;
  const auto same = [](unsigned original, unsigned native,
                       const std::string &field) {
    if (original != native)
      throw std::runtime_error(field + " original=" + std::to_string(original) +
                               " native=" + std::to_string(native));
  };
  const auto wide = [&](unsigned at) {
    return s.word(at) | (s.word(at + 2) << 16);
  };
  same(wide(game + 60 - gs), r.w.party.money_carried, "Returned carried money");
  same(wide(game + 64 - gs), r.w.party.bank_balance, "Returned bank balance");
  same(wide(game + 196 - gs), r.w.party.battle_money_deposited,
       "Returned cumulative battle deposit");
  for (auto [offset, value] : std::array<std::pair<unsigned, unsigned>, 5>{
           {{68, r.w.party.party_psi},
            {75, r.w.party.party_status},
            {174, r.w.party.party_count},
            {175, r.w.party.controlled_count},
            {188, r.w.party.auto_fight}}})
    same(s.bus->work_ram[game + offset - gs], value,
         "Returned party byte=" + std::to_string(offset));
  for (unsigned i = 0; i < 6; ++i) {
    const auto &v = r.w.party.character(i + 1);
    const unsigned base = chars + stride * i;
    const auto byte = [&](unsigned offset, unsigned value) {
      same(s.bus->work_ram[base + offset - cs], value,
           "Returned character=" + std::to_string(i + 1) +
               " byte=" + std::to_string(offset));
    };
    const auto word = [&](unsigned offset, unsigned value) {
      same(s.word(base + offset - cs), value,
           "Returned character=" + std::to_string(i + 1) +
               " word=" + std::to_string(offset));
    };
    same(wide(base + 6 - cs), v.experience, "Returned experience");
    byte(5, v.level);
    word(10, v.maximum_hp);
    word(12, v.maximum_pp);
    for (unsigned j = 0; j < 7; ++j)
      byte(14 + j, v.afflictions[j]);
    const std::array<unsigned, 14> stats = {
        v.offense,   v.defense,   v.speed,         v.guts,         v.luck,
        v.vitality,  v.iq,        v.base_offense,  v.base_defense, v.base_speed,
        v.base_guts, v.base_luck, v.base_vitality, v.base_iq};
    for (unsigned j = 0; j < stats.size(); ++j)
      byte(21 + j, stats[j]);
    for (unsigned j = 0; j < 14; ++j)
      byte(35 + j, v.items[j]);
    for (unsigned j = 0; j < 4; ++j)
      byte(49 + j, v.equipment[j]);
    word(55, r.w.formation.selected_styles[i]);
    word(61, r.w.formation.trail_cursors[i]);
    word(65, r.w.formation.last_trail_styles[i]);
    for (auto [offset, value] : std::array<std::pair<unsigned, unsigned>, 7>{
             {{67, v.hp_fraction},
              {69, v.current_hp},
              {71, v.target_hp},
              {73, v.pp_fraction},
              {75, v.current_pp},
              {77, v.target_pp},
              {79, v.hp_pp_window_options}}})
      word(offset, value);
    const std::array<unsigned, 11> tail = {v.miss_rate,
                                           v.fire_resistance,
                                           v.freeze_resistance,
                                           v.flash_resistance,
                                           v.paralysis_resistance,
                                           v.hypnosis_brainshock_resistance,
                                           v.boosted_speed,
                                           v.boosted_guts,
                                           v.boosted_vitality,
                                           v.boosted_iq,
                                           v.boosted_luck};
    for (unsigned j = 0; j < tail.size(); ++j)
      byte(81 + j, tail[j]);
    byte(94, v.battle_selection);
    same(s.bus->work_ram[game + 122 - gs + i], r.w.party.party_order[i],
         "Returned party membership");
    same(s.bus->work_ram[game + 150 - gs + i], r.w.party.display_order[i],
         "Returned party display list");
    same(s.bus->work_ram[game + 156 - gs + i], r.w.party.controlled_order[i],
         "Returned party controlled list");
    same(s.word(game + 162 - gs + 2 * i), r.w.formation.roles[i],
         "Returned party roles");
  }
}
void run(const eb::GameAssets &a, unsigned kind) {
  const bool teleporting=kind==1, scripted=kind==2, instant=kind==3;
  Rig r(a);
  Source s(a);
  s.initialize();
  auto snap = saved(r, instant);
  auto archive = saves::SaveArchive::empty(a.version);
  archive.save(0, snap.state, 0);
  auto startup = r.w.startup->begin(snap);
  while (startup->stage() != WorldStartupStage::ResetWorld) {
    auto p = startup->advance(1);
    if (p == dialogue::Progress::Suspended)
      r.service(*startup->runtime_operation());
  }
  seed(s, r, archive);
  near_call(s, s.jp ? 0xc0b652 : 0xc0b67f);
  r.drive(*startup);
  startup.reset();
  std::cout << (s.jp ? "JP" : "US")
            << " real world bootstrap source=" << s.cpu.instruction_count
            << " native-polls=" << r.w.clock.input_polls << std::endl;
  // INITIALIZE_MAP's complete placement helper establishes the visible pose,
  // using independently loaded map and actor owners on both sides.
  s.call(s.jp ? 0xc04230 : 0xc03fa9, 0x456, 0x678, 2);
  auto placement = r.w.relocation->begin({0x456, 0x678}, 2);
  while (!placement->complete())
    placement->advance(1);
  placement.reset();
  std::cout << "real placement done" << std::endl;
  // Explicit incoming encounter context, within the real collector capacity.
  r.w.encounter.group = 1;
  r.w.encounter.roster = {std::uint16_t(
      r.battle_content.combatants.prepare(1).resources().front().enemy)};
  r.w.encounter.initiative = WorldBattleInitiative::Normal;
  r.w.control.encounter.mode = scripted ? 0xffff : 1;
  check(&r.b.state == &r.w.control.encounter, "World and battle mode owners diverged");
  check(!r.w.windows.prompt_state().battle_mode, "World entry leaked a battle render flag");
  r.w.clock.action_scripts_disabled = 1;
  s.put(s.jp ? 0x4e12 : 0x4a8c, 1);
  s.put(s.jp ? 0xa18c : 0x9f8a, 1);
  s.put(s.jp ? 0xa18e : 0x9f8c, r.w.encounter.roster.front());
  s.put(s.jp ? 0x5148 : 0x4dc2, scripted ? 0xffff : 1);
  s.put(s.jp ? 0xa56 : 0xa60, 1);
  if (teleporting) {
    set_teleport_state(r.w.session, r.w.actors.appearance_scene(), 1, 3);
    s.put(s.jp ? 0xa141 : 0x9f3f, 1);
    s.put(s.jp ? 0xa143 : 0x9f41, 3);
  }
  if (instant) {
    // Genuine contact producer, required by INSTANT_WIN_HANDLER's later raw
    // BUFFER+2000 restoration. Each side starts from its own loaded palette.
    s.call(s.jp ? 0xc0d4a6 : 0xc0d4de);
    r.w.contact.prepare_palette();
    for (unsigned i=0;i<256;++i) {
      check(s.word(0x200+i*2)==r.w.palette.staged_color(i), "Contact staged palette differs");
      check(s.word(0x12000+i*2)==unsigned(r.w.scratch.bytes[0x2000+i*2] |
            unsigned(r.w.scratch.bytes[0x2001+i*2])<<8), "Contact raw backup differs");
    }
  }
  std::cout << "entry brightness=" << unsigned(s.bus->work_ram[0xd]) << ","
            << unsigned(r.w.fade.state().brightness) << " rng=" << s.word(0x24)
            << "," << s.word(0x26) << " native=" << r.w.random.primary_word
            << "," << r.w.random.secondary_word << std::endl;
  const auto first_poll = s.raw_inputs.size();
  unsigned entered_battle = 0, reloads = 0, teleports = 0, main_return = 0, instant_handlers=0, swirls=0;
  s.observer = [&](Source &v) {
    const auto pc = v.cpu.program_counter;
    if (pc == (v.jp ? 0xc246eeu : 0xc24821u)) {
      ++entered_battle;
      main_return = (v.word(v.cpu.stack_pointer + 1) + 1) |
                    unsigned(v.bus->work_ram[v.cpu.stack_pointer + 3]) << 16;
      std::cout << "source entered complete battle polls="
                << v.raw_inputs.size() - first_poll << " rng=" << v.word(0x24)
                << "," << v.word(0x26) << std::endl;
    }
    if (pc == main_return)
      std::cout << "source battle returned polls="
                << v.raw_inputs.size() - first_poll << " rng=" << v.word(0x24)
                << "," << v.word(0x26) << std::endl;
    if(pc==(v.jp?0xc260e9u:0xc261bdu)) ++instant_handlers;
    if(pc==(v.jp?0xc2e7f9u:0xc2e8e0u)) ++swirls;
    if (pc == (v.jp ? 0xc01909u : 0xc018f3u))
      ++reloads;
    if (pc == (v.jp ? 0xc0ea63u : 0xc0ea99u))
      ++teleports;
  };
  s.call(scripted ? (s.jp?0xc22e5d:0xc22f38) : (s.jp ? 0xc0b717 : 0xc0b731), scripted?1:0);
  std::cout << "original complete " << (scripted?"INIT_BATTLE_SCRIPTED":"INIT_BATTLE_OVERWORLD") << " calls="
            << entered_battle << " polls=" << s.raw_inputs.size() - first_poll
            << std::endl;
  check(entered_battle == (instant?0u:1u) && instant_handlers==(instant?1u:0u) && swirls==(scripted?1u:0u),
        "Original complete caller did not execute the ordinary battle");
  check(reloads == ((teleporting||instant) ? 0u : 1u) &&
            teleports == (teleporting ? 1u : 0u),
        "Original caller did not execute exactly its selected world-return "
        "branch");
  r.inputs = &s.raw_inputs;
  r.cursor = first_poll;
  std::uint16_t result=0;
  if (instant) {
    check(battle::instant_win_check(r.b.instant_check,r.w.party,r.w.encounter,
            *r.battle_content.enemies,*r.battle_content.outcomes),
          "Declared strong party did not select instant victory");
    r.phase="instant victory";
    r.w.runtime->refresh_world_capture();
    auto victory=r.b.outcomes.begin_instant_victory();
    for(unsigned work=0;!victory->complete()&&work<1000000;++work) {
      const auto progress=victory->advance(1);
      if(progress==dialogue::Progress::Suspended) {
        check(victory->scene(),"Instant victory has an unfinished actual party lifecycle");
        r.scene(*victory->scene());
      }
    }
    check(victory->complete(),"Instant victory did not complete");
    victory.reset();
    // The actual outer mode is cleared by WorldBattleReturn InstantWin.
    check(!r.w.windows.prompt_state().battle_mode,"Instant handler entered battle rendering");
  } else {
    if(scripted) {
      r.w.encounter.roster.clear();
      for(const auto &entry:r.content.enemies->battles.at(1))
        for(unsigned i=0;i<entry.count;++i)r.w.encounter.roster.push_back(entry.enemy);
      r.w.swirl_setup.begin_swirl();
      r.phase="scripted swirl";
      while(r.w.swirl_setup.swirl_active()) {
        auto wait=r.w.runtime->begin(story::TickKind::Frame);r.runtime(*wait);wait.reset();
        r.w.effects.advance();
      }
    } else {
      check(!battle::instant_win_check(r.b.instant_check,r.w.party,r.w.encounter,
              *r.battle_content.enemies,*r.battle_content.outcomes),
            "Declared entry accidentally selected instant win");
    }
    r.phase="entry fade";r.w.runtime->refresh_world_capture();
    auto fade=r.fade.begin(1,1);r.drive(*fade);fade.reset();
    std::cout<<"native entry fade polls="<<r.cursor-first_poll<<" rng="
             <<r.w.random.primary_word<<","<<r.w.random.secondary_word<<std::endl;
    r.phase="battle";auto fight=r.b.encounter.begin();r.encounter(*fight);
    check(fight->complete(),"Actual encounter did not complete");result=fight->result();fight.reset();
    std::cout<<"native battle returned polls="<<r.cursor-first_poll<<" rng="
             <<r.w.random.primary_word<<","<<r.w.random.secondary_word<<std::endl;
  }
  r.phase="world return";
  auto back=r.returning.begin(result,instant?WorldBattleReturnKind::InstantWin:
      scripted?WorldBattleReturnKind::Scripted:WorldBattleReturnKind::Overworld);
  r.drive(*back);check(back->complete(),"Actual world return did not complete");back.reset();
  check(r.cursor == s.raw_inputs.size(),
        "Native whole caller consumed fewer input polls");
  compare_party(s, r);
  for (unsigned slot = 0; slot < 32; ++slot) {
    const auto record = encode(r.b.roster.at(slot));
    for (unsigned byte = 0; byte < record.size(); ++byte)
      check(s.bus->work_ram[(s.jp ? 0xa1ae : 0x9fac) + 78 * slot + byte] ==
                record[byte],
            "Returned complete battler record differs");
  }
  check(s.word(0x24) == r.w.random.primary_word &&
            s.word(0x26) == r.w.random.secondary_word,
        "Full caller random words differ");
  const unsigned game = s.jp ? 0x9aa9 : 0x97f5, shift = s.jp ? 3 : 0;
  check(s.word(s.jp ? 0x5148 : 0x4dc2) == r.w.control.encounter.mode,
        "Returned BATTLE_MODE differs");
  check(s.word(s.jp ? 0x993b : 0x9643) == r.w.windows.prompt_state().battle_mode,
        "Returned BATTLE_MODE_FLAG differs");
  check(s.word(game + 148 - shift) == r.w.formation.current_leader_role,
        "Returned party leader differs");
  for (unsigned role = 0; role < 30; ++role) {
    const auto id = r.w.actors.actor_for_role(role);
    const unsigned script = id ? r.w.actors.actor(*id).script_style() : 0xffff;
    check(s.word((s.jp ? 0xa58 : 0xa62) + role * 2) == script,
          "Returned actor occupancy differs");
    if (id) {
      const auto &actor = r.w.actors.actor(*id);
      for (unsigned axis = 0; axis < 3; ++axis) {
        const auto value =
            s.word((s.jp ? 0xb84 : 0xb8e) + axis * 60 + role * 2) << 16 |
            s.word((s.jp ? 0xc38 : 0xc42) + axis * 60 + role * 2);
        check(actor.action().position[axis] == value,
              "Returned actor position differs");
      }
      for (unsigned v = 0; v < 8; ++v)
        check(actor.action().variables[v] ==
                  s.word((s.jp ? 0xe54 : 0xe5e) + v * 60 + role * 2),
              "Returned actor variable differs");
    }
  }
  if (teleporting) {
    const unsigned offset = s.jp ? 0x202 : 0;
    for (auto [at, value] : std::array<std::pair<unsigned, unsigned>, 8>{
             {{0x9f3f, r.w.actors.appearance_scene().teleport_destination},
              {0x9f41, r.w.session.teleport_style},
              {0x9f43, r.teleport.state},
              {0x9f61, r.teleport.beta_angle},
              {0x9f63, r.teleport.beta_progress},
              {0x9f65, r.teleport.better_progress},
              {0x9f67, r.teleport.beta_x_adjustment},
              {0x9f69, r.teleport.beta_y_adjustment}}})
      check(s.word(at + offset) == value,
            "Returned actual teleport state differs");
    check((s.word(0x9f45 + offset) | (s.word(0x9f47 + offset) << 16)) ==
              r.teleport.speed,
          "Returned teleport speed differs");
    check(s.word(s.jp ? 0x6140 : 0x5dba) == r.w.session.effect_in_progress,
          "Returned shared world effect flag differs");
  }
  for (unsigned i = 0; i < 128; ++i)
    check(s.bus->work_ram[(s.jp ? 0x9eb3 : 0x9c08) + i] ==
              r.w.text.event_flags[i],
          "Returned event flags differ");
  for (unsigned i = 0; i < 256; ++i)
    check(s.word(0x200 + i * 2) == r.w.palette.staged[i / 16][i % 16],
          "Returned staged palette differs index="+std::to_string(i)+" original="+std::to_string(s.word(0x200+i*2))+" native="+std::to_string(r.w.palette.staged[i/16][i%16]));
  for (unsigned i = 0; i < 224; ++i)
    check(s.word((s.jp ? 0x47fc : 0x4476) + i * 2) ==
              r.w.map_state.map_palette_backup[i],
          "Returned map palette backup differs");
  std::cout << "PASS complete " << (scripted?"INIT_BATTLE_SCRIPTED":"INIT_BATTLE_OVERWORLD") << " style="
            << (teleporting ? 3 : 0) << " scripted="<<scripted<<" instant="<<instant<<" world-return result=" << result
            << " instructions=" << s.cpu.instruction_count
            << " polls=" << r.cursor - first_poll << std::endl;
}
} // namespace world_battle_reference
#ifndef NATIVE_WORLD_BATTLE_RETURN_REFERENCE_NO_MAIN
int main(int argc, char **argv) {
  if (argc < 2)
    return 77;
  try {
    for (unsigned kind : {0u,1u,2u,3u})
      for (int i = 1; i < argc; ++i)
        world_battle_reference::run(
            eb::load_game_assets(argv[i], eb::asset_profiles()), kind);
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
  return 0;
}

#endif
