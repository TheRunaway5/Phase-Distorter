#include "eb/game_debug.hpp"
#include "eb/snes_bus.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snapshot_archive.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb {
GameDebug::GameDebug(SnesBus& bus, MainCpu65816& cpu)
    : bus_(bus), cpu_(cpu), source_(source_profile(bus.game_version())) {}

GameDebug::~GameDebug() {
    bus_.debug_read_wram = {};
    bus_.debug_write_wram = {};
    bus_.debug_read_rom = {};
}

unsigned GameDebug::read_word(unsigned address) const {
    return bus_.work_ram[address] | (bus_.work_ram[address + 1] << 8);
}

void GameDebug::write_word(unsigned address, unsigned value) {
    bus_.work_ram[address] = value;
    bus_.work_ram[address + 1] = value >> 8;
}

void GameDebug::configure(GameDebugSettings settings) {
    if (settings == settings_) return;
    settings_ = settings;
    install_hooks();
    refresh_stats();
}

void GameDebug::install_hooks() {
    if (settings_.noclip || settings_.enemies_ignore) {
        bus_.debug_read_wram = [this](unsigned address, std::uint8_t value) {
            if (!ready_) return value;
            // The game's bit 1 bypasses terrain and NPC collision, while the
            // intangibility timer suppresses enemy pursuit/contact. Override
            // reads only, so disabling either option exposes ordinary state.
            if (settings_.noclip && address == source_.movement_state.flags) value |= 2;
            if (settings_.enemies_ignore && address == source_.movement_state.intangibility_frames && !read_word(address)) value = 1;
            return value;
        };
    } else {
        bus_.debug_read_wram = {};
    }
    if (settings_.infinite_hp || settings_.infinite_pp || settings_.player_max_damage) {
        bus_.debug_write_wram = [this](unsigned address, std::uint8_t value) {
            return filter_stat_write(address, filter_damage_write(address, value));
        };
    } else {
        bus_.debug_write_wram = {};
    }
}

void GameDebug::snapshot_io(SnapshotArchive &archive) {
    if (archive.format_version() >= 4) archive(settings_.player_max_damage);
    else if (archive.loading()) settings_.player_max_damage = false;
    archive(settings_.infinite_hp, settings_.infinite_pp, settings_.noclip, settings_.enemies_ignore,
            ready_, status_, original_max_, captured_max_, party_attempts_);
    bool pending = bool(pending_request_);
    archive(pending);
    if (archive.loading()) {
        if (pending) pending_request_.emplace();
        else pending_request_.reset();
    }
    if (pending) {
        archive(pending_request_->kind, pending_request_->destination, pending_request_->party);
        if (archive.loading() && pending_request_->kind != GameDebugRequest::Kind::Teleport &&
            pending_request_->kind != GameDebugRequest::Kind::Party)
            throw std::runtime_error("Invalid snapshot debug request");
    }
    bool suspended = bool(suspended_call_);
    archive(suspended);
    if (archive.loading()) {
        if (suspended) suspended_call_.emplace();
        else suspended_call_.reset();
    }
    if (suspended) {
        auto &call = *suspended_call_;
        archive(call.accumulator, call.x_index, call.y_index, call.stack_pointer, call.direct_page,
                call.status_register, call.data_bank, call.program_counter, call.continuation);
        if (archive.loading() && (call.program_counter > 0xffffff ||
            (call.continuation != CallContinuation::PartyChange && call.continuation != CallContinuation::FadeOut &&
             call.continuation != CallContinuation::BlackFrame)))
            throw std::runtime_error("Invalid suspended snapshot debug call");
    }
    bool teleport = bool(active_teleport_);
    unsigned destination = teleport ? active_teleport_->id : 0;
    archive(teleport, destination);
    if (archive.loading()) {
        active_teleport_.reset();
        if (teleport) {
            const auto places = debug_destinations();
            const auto found = std::find_if(places.begin(), places.end(),
                [&](auto place) { return place.id == destination; });
            if (found == places.end()) throw std::runtime_error("Unknown snapshot teleport destination");
            active_teleport_ = *found;
        }
        // Reinstall callbacks on the candidate owners without refreshing stats
        // or submitting a new command. Snapshot reads never advance gameplay.
        install_hooks();
        install_teleport_hook();
    }
}

std::uint8_t GameDebug::filter_damage_write(unsigned address, std::uint8_t value) const {
    if (!settings_.player_max_damage || !ready_ || !read_word(source_.wram_battle_mode_flag) ||
        cpu_.emulation_mode || (cpu_.status_register & 0x30) || !cpu_.x_index ||
        cpu_.program_counter != source_.gameplay_routines.damage_argument_store_end) return value;
    // CALC_DAMAGE stages X in its direct-page VIRTUAL04 word before testing
    // immunity, reducing HP and printing that same damage. The instruction
    // advances PC before its two writes, in both source execution backends.
    const unsigned low = std::uint16_t(cpu_.direct_page + 4);
    if (address != low && address != std::uint16_t(low + 1)) return value;
    const auto& battler = source_.battler_layout;
    const unsigned attacker = read_word(source_.battle_state.current_attacker);
    const unsigned target = cpu_.accumulator;
    if (attacker < battler.table_address || attacker >= battler.table_address + 6 * battler.entry_size ||
        (attacker - battler.table_address) % battler.entry_size ||
        target < battler.table_address + 6 * battler.entry_size || target >= battler.table_address + 32 * battler.entry_size ||
        (target - battler.table_address) % battler.entry_size) return value;
    const unsigned id = read_word(attacker + battler.id);
    if (id < 1 || id > 4 || bus_.work_ram[attacker + battler.ally_or_enemy] ||
        bus_.work_ram[attacker + battler.npc_id] ||
        bus_.work_ram[source_.party_state.members + (attacker - battler.table_address) / battler.entry_size] != id ||
        bus_.work_ram[target + battler.ally_or_enemy] != 1) return value;
    return 0xff; // Maximum unsigned 16-bit damage; battle text zero-extends it.
}

std::uint8_t GameDebug::filter_stat_write(unsigned address, std::uint8_t value) const {
    if (!ready_) return value;
    const auto& character = source_.character_layout;
    const auto& battler = source_.battler_layout;
    unsigned record_address{}, current_hp{}, current_pp{}, maximum_hp{}, maximum_pp{}, target_hp{}, target_pp{}, afflictions{};
    bool character_record = false;
    if (address >= character.table_address && address < character.table_address + 4 * character.entry_size) {
        record_address = character.table_address + ((address - character.table_address) / character.entry_size) * character.entry_size;
        if (!bus_.work_ram[record_address + character.level]) return value;
        character_record = true;
        current_hp = character.current_hp;
        current_pp = character.current_pp;
        target_hp = character.current_hp_target;
        target_pp = character.current_pp_target;
        maximum_hp = character.max_hp;
        maximum_pp = character.max_pp;
        afflictions = character.afflictions;
    } else if (read_word(source_.wram_battle_mode_flag) && address >= battler.table_address && address < battler.table_address + 6 * battler.entry_size) {
        const unsigned party_slot = (address - battler.table_address) / battler.entry_size;
        record_address = battler.table_address + party_slot * battler.entry_size;
        const unsigned character_id = bus_.work_ram[source_.party_state.members + party_slot];
        if (character_id < 1 || character_id > 4 || bus_.work_ram[record_address + battler.ally_or_enemy] || bus_.work_ram[record_address + battler.npc_id]) return value;
        current_hp = battler.hp;
        target_hp = battler.hp_target;
        maximum_hp = battler.hp_max;
        current_pp = battler.pp;
        target_pp = battler.pp_target;
        maximum_pp = battler.pp_max;
        afflictions = battler.afflictions;
        if (settings_.infinite_hp && address == record_address + battler.consciousness) return 1;
    } else {
        return value;
    }
    const unsigned member_offset = address - record_address;
    for (auto member : {current_hp, target_hp, maximum_hp}) {
        if (settings_.infinite_hp && (member_offset == member || member_offset == member + 1)) return member_offset == member ? 999 & 255 : 999 >> 8;
    }
    for (auto member : {current_pp, target_pp, maximum_pp}) {
        if (settings_.infinite_pp && (member_offset == member || member_offset == member + 1)) return member_offset == member ? 999 & 255 : 999 >> 8;
    }
    if (settings_.infinite_hp && member_offset == afflictions && (value == 1 || value == 2)) return 0;
    if (character_record &&
        ((settings_.infinite_hp && (member_offset == character.current_hp_fraction || member_offset == character.current_hp_fraction + 1)) ||
         (settings_.infinite_pp && (member_offset == character.current_pp_fraction || member_offset == character.current_pp_fraction + 1)))) return 0;
    return value;
}

void GameDebug::refresh_stats() {
    if (!ready_) return;
    const auto& character = source_.character_layout;
    std::array<std::array<bool, 2>, 4> restored_maximum{};
    for (unsigned character_index = 0; character_index < 4; ++character_index) {
        const unsigned record_address = character.table_address + character_index * character.entry_size;
        if (!bus_.work_ram[record_address + character.level]) continue;
        for (unsigned stat = 0; stat < 2; ++stat) {
            const bool enabled = stat ? settings_.infinite_pp : settings_.infinite_hp;
            const auto maximum_address = record_address + (stat ? character.max_pp : character.max_hp);
            const auto current_address = record_address + (stat ? character.current_pp : character.current_hp);
            const auto target_address = record_address + (stat ? character.current_pp_target : character.current_hp_target);
            if (enabled && !captured_max_[character_index][stat]) {
                original_max_[character_index][stat] = read_word(maximum_address);
                captured_max_[character_index][stat] = true;
            } else if (!enabled && captured_max_[character_index][stat]) {
                write_word(maximum_address, original_max_[character_index][stat]);
                write_word(current_address, std::min(read_word(current_address), read_word(maximum_address)));
                write_word(target_address, std::min(read_word(target_address), read_word(maximum_address)));
                captured_max_[character_index][stat] = false;
                restored_maximum[character_index][stat] = true;
            }
        }
        for (unsigned member = 0; member < character.entry_size; ++member) {
            bus_.work_ram[record_address + member] = filter_stat_write(record_address + member, bus_.work_ram[record_address + member]);
        }
    }
    if (read_word(source_.wram_battle_mode_flag)) {
        const auto& battler = source_.battler_layout;
        for (unsigned party_slot = 0; party_slot < 6; ++party_slot) {
            const unsigned character_id = bus_.work_ram[source_.party_state.members + party_slot];
            const unsigned record_address = battler.table_address + party_slot * battler.entry_size;
            if (character_id < 1 || character_id > 4 || bus_.work_ram[record_address + battler.ally_or_enemy] || bus_.work_ram[record_address + battler.npc_id]) continue;
            for (unsigned stat = 0; stat < 2; ++stat) {
                if (!restored_maximum[character_id - 1][stat]) continue;
                const unsigned maximum = read_word(character.table_address + (character_id - 1) * character.entry_size + (stat ? character.max_pp : character.max_hp));
                const auto members = stat ? std::array{battler.pp, battler.pp_target, battler.pp_max}
                                          : std::array{battler.hp, battler.hp_target, battler.hp_max};
                for (unsigned member : members) {
                    write_word(record_address + member, std::min(read_word(record_address + member), maximum));
                }
            }
            for (unsigned member = 0; member < battler.entry_size; ++member) {
                bus_.work_ram[record_address + member] = filter_stat_write(record_address + member, bus_.work_ram[record_address + member]);
            }
        }
    }
}

bool GameDebug::can_apply_world_action() const {
    const unsigned style = read_word(source_.party_state.walking_style);
    const bool walking = style == 0 || style == 4 || style == 6 || style == 10;
    const auto& gates = source_.action_gates;
    return ready_ && !read_word(source_.wram_battle_mode_flag) && walking &&
        !read_word(gates.battle_mode) && !read_word(gates.battle_swirl_countdown) &&
        !read_word(gates.enemy_touched) && !read_word(gates.teleport_destination) &&
        !read_word(gates.using_door) && !read_word(gates.input_disable_frames) &&
        !read_word(gates.pending_interactions);
}

GameDebugSnapshot GameDebug::snapshot() const {
    GameDebugSnapshot result{ready_, bool(pending_request_) || bool(suspended_call_) || bool(active_teleport_), {}, status_};
    for (unsigned party_slot = 0; party_slot < 6; ++party_slot) {
        const auto character_id = bus_.work_ram[source_.party_state.members + party_slot];
        if (character_id >= 1 && character_id <= 4) result.party[character_id - 1] = true;
    }
    return result;
}

void GameDebug::request(GameDebugRequest request) {
    if (!ready_) { status_ = "Load a game before using debug actions."; return; }
    if (pending_request_ || suspended_call_ || active_teleport_) { status_ = "A debug action is already pending."; return; }
    if (request.kind == GameDebugRequest::Kind::Teleport &&
        std::none_of(debug_destinations().begin(), debug_destinations().end(), [&](auto place) { return place.id == request.destination; })) {
        status_ = "Unknown teleport destination.";
        return;
    }
    if (request.kind == GameDebugRequest::Kind::Party && std::none_of(request.party.begin(), request.party.end(), [](bool member) { return member; })) {
        status_ = "Keep at least one playable party member.";
        return;
    }
    pending_request_ = request;
    party_attempts_ = 0;
    status_ = "Waiting for free movement; close dialogue or finish the battle.";
}

void GameDebug::advance_party_change() {
    auto current_party = snapshot().party;
    if (current_party == pending_request_->party) {
        pending_request_.reset(); status_ = "Party updated."; refresh_stats(); return;
    }
    if (++party_attempts_ > 12) {
        pending_request_.reset(); status_ = "Party could not be changed: no free party slot."; return;
    }
    unsigned character_id = 0, routine_address = 0;
    // Keep one playable actor until its replacement has joined. Guest members
    // and inventory-managed teddy bears remain under the game's own rules.
    const auto current_count = std::count(current_party.begin(), current_party.end(), true);
    for (unsigned index = 0; index < 4; ++index) {
        if (current_party[index] && !pending_request_->party[index] && current_count > 1) {
            character_id = index + 1;
            routine_address = source_.gameplay_routines.remove_party_character;
            break;
        }
    }
    if (!character_id) {
        for (unsigned index = 0; index < 4; ++index) {
            if (!current_party[index] && pending_request_->party[index]) {
                character_id = index + 1;
                routine_address = source_.gameplay_routines.add_party_character;
                break;
            }
        }
    }
    if (!character_id) { pending_request_.reset(); status_ = "Party change unavailable."; return; }
    call_game_routine(routine_address, character_id, cpu_.x_index, cpu_.y_index, CallContinuation::PartyChange);
    status_ = "Updating party...";
}

void GameDebug::call_game_routine(unsigned address, unsigned accumulator, unsigned x, unsigned y, CallContinuation continuation) {
    suspended_call_ = SavedMainCpuRegisters{cpu_.accumulator, cpu_.x_index, cpu_.y_index, cpu_.stack_pointer, cpu_.direct_page, cpu_.status_register, cpu_.data_bank, cpu_.program_counter, continuation};
    cpu_.accumulator = accumulator;
    cpu_.x_index = x;
    cpu_.y_index = y;
    cpu_.status_register &= ~(MainCpu65816::Accumulator8Bit | MainCpu65816::Index8Bit);
    // A real JSL/RTL stack frame executes the existing translated routine.
    // Zero instruction length returns to the suspended main-loop boundary.
    cpu_.execute_instruction<0x22>(address, 0);
}

void GameDebug::before_step() {
    if (suspended_call_) {
        if (cpu_.program_counter != suspended_call_->program_counter || cpu_.stack_pointer != suspended_call_->stack_pointer) return;
        const auto saved_registers = *suspended_call_;
        suspended_call_.reset();
        cpu_.accumulator = saved_registers.accumulator;
        cpu_.x_index = saved_registers.x_index;
        cpu_.y_index = saved_registers.y_index;
        cpu_.direct_page = saved_registers.direct_page;
        cpu_.status_register = saved_registers.status_register;
        cpu_.data_bank = saved_registers.data_bank;
        switch (saved_registers.continuation) {
        case CallContinuation::PartyChange:
            advance_party_change();
            break;
        case CallContinuation::FadeOut:
            // Fade completion synchronizes with NMI, before its mirrored blank
            // register necessarily reaches a complete presented frame. Keep the
            // world suspended for two native frames before loading anything.
            call_game_routine(source_.gameplay_routines.wait_frames, 2, 0, 0, CallContinuation::BlackFrame);
            break;
        case CallContinuation::BlackFrame:
            start_teleport();
            break;
        }
        return;
    }
    if (cpu_.program_counter != source_.gameplay_routines.main_loop || cpu_.emulation_mode) return;
    if (active_teleport_ && !read_word(source_.teleport_state.destination)) {
        status_ = std::string("Teleported to ") + active_teleport_->name + ".";
        active_teleport_.reset();
        bus_.debug_read_rom = {};
    }
    if (!ready_) { ready_ = bus_.work_ram[source_.party_state.count] > 0; refresh_stats(); }
    if (!pending_request_ || !can_apply_world_action()) return;
    if (pending_request_->kind == GameDebugRequest::Kind::Party) {
        advance_party_change();
    } else {
        // FADE_OUT_WITH_MOSAIC with Y=0 is the game's ordinary blocking fade:
        // one brightness step per frame, no mosaic. Do not publish a teleport
        // destination until it returns, so no map load can precede the blackout.
        call_game_routine(source_.gameplay_routines.fade_out, 1, 1, 0, CallContinuation::FadeOut);
        status_ = "Fading out...";
    }
}

void GameDebug::start_teleport() {
    const auto places = debug_destinations();
    active_teleport_ = *std::find_if(places.begin(), places.end(), [this](auto place) { return place.id == pending_request_->destination; });
    install_teleport_hook();
    write_word(source_.teleport_state.destination, 16);
    write_word(source_.teleport_state.style, 3); // TELEPORT_STYLE::INSTANT
    pending_request_.reset();
    status_ = "Teleport requested.";
}

void GameDebug::install_teleport_hook() {
    if (!active_teleport_) { bus_.debug_read_rom = {}; return; }
    // Slot 16 is the unused final PSI destination. Redirect its four
    // coordinate bytes for this one transition; the original instant-warp
    // routine loads the map, places followers, and fades back in.
    bus_.debug_read_rom = [this](unsigned address, std::uint8_t value) {
        const auto& teleport = source_.teleport_state;
        for (unsigned axis = 0; axis < 2; ++axis) {
            const unsigned coordinate_address = teleport.destination_table + 16 * teleport.entry_size +
                (axis ? teleport.destination_y : teleport.destination_x);
            if (address == coordinate_address || address == coordinate_address + 1) {
                const auto coordinate = (axis ? active_teleport_->y : active_teleport_->x) / 8;
                return std::uint8_t(coordinate >> ((address - coordinate_address) * 8));
            }
        }
        return value;
    };
}
}
