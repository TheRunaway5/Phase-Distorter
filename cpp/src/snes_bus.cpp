#include "eb/snes_bus.hpp"
#include "eb/overworld_sprite_draw.hpp"
#include "generated_profile.hpp"

#include <algorithm>
#include <stdexcept>

namespace eb {
namespace {
// Each DMA mode walks a repeating set of B-bus register offsets. HDMA uses
// the same pattern but only one mode-sized group per transferred scanline.
constexpr std::array<std::array<unsigned, 4>, 8> dma_register_offsets{{{{0, 0, 0, 0}},
                                                                       {{0, 1, 0, 1}},
                                                                       {{0, 0, 0, 0}},
                                                                       {{0, 0, 1, 1}},
                                                                       {{0, 1, 2, 3}},
                                                                       {{0, 1, 0, 1}},
                                                                       {{0, 0, 0, 0}},
                                                                       {{0, 0, 1, 1}}}};
constexpr unsigned dma_transfer_lengths[] = {1, 2, 2, 4, 4, 4, 2, 4};
uint16_t read_dma_word(const std::array<uint8_t, 16> &registers, unsigned offset) {
    return registers[offset] | registers[offset + 1] << 8;
}
void write_dma_word(std::array<uint8_t, 16> &registers, unsigned offset, uint16_t value) {
    registers[offset] = value;
    registers[offset + 1] = value >> 8;
}
} // namespace

// Start with forced blank and uninitialized cartridge SRAM. The source game's
// reset routine performs normal register/RAM setup through the same bus used
// during play; this constructor does not fast-forward any game initialization.
SnesBus::SnesBus(std::span<const uint8_t> rom, GameVersion version)
    : game_version_(version), source_profile_(&source_profile(version)),
      cartridge_rom_(rom.begin(), rom.end()) {
    if (cartridge_rom_.empty())
        throw std::invalid_argument("empty cartridge image");
    ppu_registers_[0] = 0x80;
    cpu_io_registers_[1] = 0xff;
    cpu_io_registers_[7] = cpu_io_registers_[9] = 0xff;
    cpu_io_registers_[8] = cpu_io_registers_[10] = 1;
    for (auto &channel : dma_registers_)
        channel.fill(0xff);
    native_framebuffer.fill(0xff000000);
    save_ram.fill(0xff);
}

SceneReadView SnesBus::scene_view() const {
    return {work_ram, video_ram, palette_ram, object_attributes, cartridge_rom_, ppu_registers_,
            background_scroll_x_, background_scroll_y_, mode7_transform_, mode7_scroll_offsets_,
            native_framebuffer, *source_profile_, game_version_, completed_frames, fixed_color_, oam_reload_,
            nullptr, &scene_renderer_, host_sprites(), native_sprite_runtime()};
}

void SnesBus::enable_host_sprite_resources(bool enabled) {
    if (enabled) {
        if (!host_sprites_)
            host_sprites_.emplace(cartridge_rom_, game_version_);
        enable_sprite_snapshots();
    } else
        host_sprites_.reset();
}

void SnesBus::enable_native_sprite_runtime(bool enabled, bool prepare_stationary) {
    if (enabled == bool(native_sprite_runtime_) &&
        (!enabled || prepare_stationary == native_stationary_sprites_enabled_))
        return;
    // Source allocation storage is deliberately absent after cutover. Switching
    // ownership after execution starts cannot reconstruct that discarded state.
    if (master_clocks_)
        throw std::logic_error("Native sprite resource ownership must be selected before execution");
    if (enabled) {
        OverworldSpriteRuntime runtime(cartridge_rom_, game_version_);
        OverworldSpriteEffects effects(cartridge_rom_, game_version_, runtime.resources());
        std::shared_ptr<const native::StationaryNpcSprites> stationary;
        std::optional<EnemySpritePreparation> enemy;
        if (prepare_stationary) {
            stationary = std::make_shared<native::StationaryNpcSprites>(cartridge_rom_, game_version_,
                                                                       runtime.resources());
            enemy.emplace(cartridge_rom_, game_version_, runtime.resources());
        }
        // All content validation finishes before any live owner is replaced.
        native_sprite_runtime_.emplace(std::move(runtime));
        native_sprite_effects_.emplace(std::move(effects));
        scene_renderer_.set_native_stationary_sprites(std::move(stationary));
        scene_renderer_.set_native_enemy_sprites(std::move(enemy));
        native_stationary_sprites_enabled_ = prepare_stationary;
        enable_sprite_snapshots();
    } else {
        scene_renderer_.set_native_stationary_sprites({});
        scene_renderer_.set_native_enemy_sprites(std::nullopt);
        native_stationary_sprites_enabled_ = false;
        native_sprite_effects_.reset();
        native_sprite_runtime_.reset();
    }
}

void SnesBus::set_logical_clock_policy(LogicalClockPolicy policy) {
    if (policy != LogicalClockPolicy::SourceTiming && policy != LogicalClockPolicy::ActorFrames)
        throw std::invalid_argument("Invalid logical clock policy");
    if (policy == logical_clock_policy_)
        return;
    if (master_clocks_)
        throw std::logic_error("Logical clock policy must be selected before execution");
    logical_clock_policy_ = policy;
    native_actor_frame_.reset();
    native_actor_tick_count_ = native_actor_wait_clocks_ = 0;
    native_actor_fades_ = {};
}

bool SnesBus::try_execute_clock_operation(MainCpu65816 &cpu) {
    return logical_clock_policy_ == LogicalClockPolicy::ActorFrames &&
           native_actor_fades_.try_execute(cpu, *this);
}

bool SnesBus::try_execute_native_sprite_operation(MainCpu65816 &cpu) {
    if (!native_sprite_runtime_)
        return false;
    if (native_sprite_effects_->try_execute(cpu, *this, *native_sprite_runtime_))
        return true;
    if (native_sprite_runtime_->try_execute(cpu, *this))
        return true;
    return try_native_sprite_draw(cpu, *this, *native_sprite_runtime_, scene_renderer_);
}

bool SnesBus::wait_for_native_actor_tick(std::uint32_t pc) {
    if (logical_clock_policy_ != LogicalClockPolicy::ActorFrames)
        return false;
    const unsigned bank = pc >> 16;
    if (bank != 0x7e && bank != 0x7f && ((bank & 0x40) || (pc & 0x8000)))
        pc |= 0xc00000;
    // The disabled-script guard has already returned before this body entry.
    // All normal and attract-scene callers share this source boundary.
    if (pc != (game_version_ == GameVersion::JP ? 0xc0944fu : 0xc09470u))
        return false;
    if (!native_actor_frame_ || *native_actor_frame_ != completed_frames) {
        native_actor_frame_ = completed_frames;
        ++native_actor_tick_count_;
        return false;
    }
    const auto before = master_clocks_;
    // This is scheduler idle time, not an estimate of the removed graphics
    // instructions. Stop at each hardware event so prepare_instruction can
    // arbitrate interrupts before returning to the still-pending actor pass.
    advance_master_clocks_with_refresh(std::max(1u, next_hardware_event_clocks()));
    while (const auto dma = take_dma_clocks())
        advance_master_clocks_with_refresh(dma);
    native_actor_wait_clocks_ += master_clocks_ - before;
    return true;
}

void SnesBus::capture_sprite_operation(std::uint32_t pc, std::uint16_t a, std::uint16_t x,
                                       std::uint16_t y, std::uint16_t stack, std::uint16_t direct) {
    if (host_sprites_)
        host_sprites_->before_instruction(pc, a, x, y, stack, direct, work_ram);
    const bool jp = game_version_ == GameVersion::JP;
    if (pc == (jp ? 0xc088a3u : 0xc088b1u)) {
        scene_renderer_.begin_sprite_frame(work_ram[0x2e]);
    } else if (native_sprite_runtime_ && pc == (jp ? 0xc08c49u : 0xc08c58u)) {
        const unsigned priority_at = jp ? 0x2800 : 0x2400;
        const unsigned priority = work_ram[priority_at] | unsigned(work_ram[priority_at + 1]) << 8;
        scene_renderer_.capture_sprite_enqueue(scene_view(), (unsigned(work_ram[0x0b]) << 16) | a,
                                               std::int16_t(x), std::int16_t(y), priority);
    } else if (pc == (jp ? 0xc08b74u : 0xc08b83u)) {
        scene_renderer_.seal_sprite_frame(scene_view());
    } else if (pc == (jp ? 0xc0a383u : 0xc0a3a4u) || pc == (jp ? 0xc0a0d9u : 0xc0a0fau)) {
        scene_renderer_.capture_entity_draw(scene_view(), x);
    } else if (pc == (jp ? 0xc08cc6u : 0xc08cd5u)) {
        const unsigned next = work_ram[0x03] | unsigned(work_ram[0x04]) << 8;
        const unsigned end = work_ram[0x05] | unsigned(work_ram[0x06]) << 8;
        // The source has two work buffers. Associate an emission with its
        // actual buffer and object ordinal, never a coincidentally equal tile
        // or screen position from a different actor or a later simulation tick.
        const unsigned base = end == 0x0700 ? 0x0500 : end == 0x0a00 ? 0x0800 : 0;
        if (base && next >= base && next <= end && ((next - base) & 3) == 0)
            scene_renderer_.capture_sprite_emit(scene_view(), (unsigned(work_ram[0x0b]) << 16) | a,
                                                 std::int16_t(x), std::int16_t(y), (next - base) / 4,
                                                 (end - base) / 4);
    }
}

// HiROM decode order matters: WRAM and low-bank I/O overlays take precedence
// over cartridge mappings. Unmapped reads retain the last CPU bus byte, and
// every successful read becomes the next open-bus value.
uint8_t SnesBus::read_byte(uint32_t address) {
    address &= 0xffffff;
    const unsigned bank = address >> 16, bank_offset = address & 0xffff;
    uint8_t value = open_bus_;
    if (bank == 0x7e || bank == 0x7f) {
        const unsigned work_ram_offset = address & 0x1ffff;
        value = work_ram[work_ram_offset];
        if (debug_read_wram)
            value = debug_read_wram(work_ram_offset, value);
    } else if ((bank & 0x40) == 0 && bank_offset < 0x2000) {
        value = work_ram[bank_offset];
        if (debug_read_wram)
            value = debug_read_wram(bank_offset, value);
    } else if ((bank & 0x40) == 0 && bank_offset < 0x6000)
        value = read_io_register(bank_offset);
    else if ((bank & 0x7f) >= 0x20 && (bank & 0x7f) < 0x40 && bank_offset >= 0x6000 && bank_offset < 0x8000)
        value = save_ram[((bank & 0x1f) * 0x2000 + bank_offset - 0x6000) % save_ram.size()];
    else if ((bank & 0x40) != 0 || bank_offset >= 0x8000) {
        // SNES mirrors non-power-of-two ROMs by address-line folding.
        size_t index = address & 0x3fffff, size = cartridge_rom_.size(), base = 0, mask = 0x200000;
        while (index >= size && mask) {
            if (index & mask) {
                index -= mask;
                if (size > mask) {
                    size -= mask;
                    base += mask;
                }
            }
            mask >>= 1;
        }
        const unsigned offset = (base + index) % cartridge_rom_.size();
        value = cartridge_rom_[offset];
        if (debug_read_rom)
            value = debug_read_rom(offset, value);
    }
    open_bus_ = value;
#ifdef EB_GAMEPLAY_AUDIT
    if (observe_bus_access)
        observe_bus_access(false, address, value);
#endif
    return value;
}

// ROM writes have no cartridge-storage effect, but still drive the CPU bus.
// SRAM mirrors its small physical size throughout the mapped save windows.
void SnesBus::write_byte(uint32_t address, uint8_t value) {
    address &= 0xffffff;
#ifdef EB_GAMEPLAY_AUDIT
    if (observe_bus_access)
        observe_bus_access(true, address, value);
#endif
    open_bus_ = value;
    const unsigned bank = address >> 16, bank_offset = address & 0xffff;
    if (bank == 0x7e || bank == 0x7f) {
        const unsigned work_ram_offset = address & 0x1ffff;
        work_ram[work_ram_offset] = debug_write_wram ? debug_write_wram(work_ram_offset, value) : value;
    } else if ((bank & 0x40) == 0 && bank_offset < 0x2000)
        work_ram[bank_offset] = debug_write_wram ? debug_write_wram(bank_offset, value) : value;
    else if ((bank & 0x40) == 0 && bank_offset < 0x6000)
        write_io_register(bank_offset, value);
    else if ((bank & 0x7f) >= 0x20 && (bank & 0x7f) < 0x40 && bank_offset >= 0x6000 && bank_offset < 0x8000)
        save_ram[((bank & 0x1f) * 0x2000 + bank_offset - 0x6000) % save_ram.size()] = value;
}

// CPU-side register reads include acknowledgements and serial transfers.
// Keep these distinct from direct array inspection used by diagnostics: a
// debugger must not clear NMI/IRQ flags merely by showing their state.
uint8_t SnesBus::read_io_register(uint16_t address) {
    if (address >= 0x2100 && address <= 0x213f)
        return read_ppu_register(address);
    if (address >= 0x2140 && address <= 0x217f)
        return audio_to_main_ports[address & 3];
    if (address == 0x2180) {
        auto value = work_ram[wram_address_];
        if (debug_read_wram)
            value = debug_read_wram(wram_address_, value);
        wram_address_ = (wram_address_ + 1) & 0x1ffff;
        return value;
    }
    if (address >= 0x4300 && address < 0x4380) {
        const auto register_index = address & 15;
        return register_index >= 12 && register_index <= 14
                   ? open_bus_
                   : dma_registers_[(address >> 4) & 7][register_index == 15 ? 11 : register_index];
    }
    switch (address) {
    // The latched controller word shifts most-significant bit first. After
    // sixteen bits the serial line reads high; strobing keeps reloading it.
    case 0x4016: {
        if (joy_strobe_) {
            joy_latch_ = buttons_;
            joy_position_ = 0;
        }
        const auto bit = joy_position_ < 16 ? ((joy_latch_ >> (15 - joy_position_)) & 1) : 1;
        if (!joy_strobe_ && joy_position_ < 16)
            ++joy_position_;
        return (open_bus_ & 0xfc) | bit;
    }
    case 0x4017:
        return (open_bus_ & 0xe0) | 0x1c;
    // Interrupt flags acknowledge on read; NMI's queued edge is separate from
    // the vblank flag so clearing one does not retroactively erase the other.
    case 0x4210: {
        const auto value = (nmi_flag_ ? 0x80 : 0) | (open_bus_ & 0x70) | 2;
        nmi_flag_ = false;
        return value;
    }
    case 0x4211: {
        const auto value = (irq_flag_ ? 0x80 : 0) | (open_bus_ & 0x7f);
        irq_flag_ = false;
        return value;
    }
    case 0x4212:
        return (scanline_index_ >= 225 ? 0x80 : 0) |
               (scanline_master_clock_ >= 1096 || scanline_master_clock_ < 4 ? 0x40 : 0) |
               (autojoy_remaining_clocks_ ? 1 : 0) | (open_bus_ & 0x3e);
    case 0x4213:
        return cpu_io_registers_[1];
    case 0x4214:
        return divide_result_;
    case 0x4215:
        return divide_result_ >> 8;
    case 0x4216:
        return multiply_result_;
    case 0x4217:
        return multiply_result_ >> 8;
    case 0x4218:
        return joy_result_;
    case 0x4219:
        return joy_result_ >> 8;
    case 0x421a:
    case 0x421b:
    case 0x421c:
    case 0x421d:
    case 0x421e:
    case 0x421f:
        return 0;
    default:
        return open_bus_;
    }
}

// Save ordinary CPU-register bytes before applying their write-triggered
// actions. Arithmetic results become visible only after their pending delay,
// while a DMA start performs transfers and accumulates CPU stall clocks.
void SnesBus::write_io_register(uint16_t address, uint8_t value) {
    if (address >= 0x2100 && address <= 0x213f) {
        write_ppu_register(address, value);
        return;
    }
    if (address >= 0x2140 && address <= 0x217f) {
        main_to_audio_ports[address & 3] = value;
        return;
    }
    if (address >= 0x4300 && address < 0x4380) {
        const auto register_index = address & 15;
        if (register_index < 12 || register_index == 15)
            dma_registers_[(address >> 4) & 7][register_index == 15 ? 11 : register_index] = value;
        return;
    }
    if (address == 0x2180) {
        work_ram[wram_address_] = debug_write_wram ? debug_write_wram(wram_address_, value) : value;
        wram_address_ = (wram_address_ + 1) & 0x1ffff;
        return;
    }
    if (address >= 0x2181 && address <= 0x2183) {
        const unsigned shift = (address - 0x2181) * 8;
        wram_address_ = ((wram_address_ & ~(0xffu << shift)) | (unsigned(value) << shift)) & 0x1ffff;
        return;
    }
    if (address == 0x4016) {
        if ((value & 1) || joy_strobe_) {
            joy_latch_ = buttons_;
            joy_position_ = 0;
        }
        joy_strobe_ = value & 1;
        return;
    }
    if (address < 0x4200 || address > 0x420d)
        return;
    const auto previous_value = cpu_io_registers_[address & 31];
    cpu_io_registers_[address & 31] = value;
    switch (address) {
    case 0x4200:
        if ((value & 0x80) && !(previous_value & 0x80) && nmi_flag_)
            nmi_pending_ = true;
        if (!(value & 0x30))
            irq_flag_ = false;
        break;
    case 0x4201:
        if ((previous_value & 0x80) && !(value & 0x80)) {
            latched_h_ = scanline_master_clock_ / 4;
            latched_v_ = scanline_index_;
            counters_latched_ = true;
        }
        break;
    case 0x4203:
        pending_product_ = cpu_io_registers_[2] * value;
        math_remaining_cpu_cycles_ = 8;
        pending_divide_ = false;
        break;
    case 0x4206: {
        const unsigned dividend = cpu_io_registers_[4] | cpu_io_registers_[5] << 8;
        pending_quotient_ = value ? dividend / value : 0xffff;
        pending_product_ = value ? dividend % value : dividend;
        math_remaining_cpu_cycles_ = 16;
        pending_divide_ = true;
        break;
    }
    case 0x420b:
        dma_transfer(value);
        cpu_io_registers_[11] = 0;
        break;
    default:
        break;
    }
}

// A-bus addresses are bank plus a wrapping 16-bit offset. A zero transfer
// length means 65536 bytes; fixed/decrement/increment modes change only that
// offset. The CPU later drains dma_stall_master_clocks_ while other hardware keeps running.
void SnesBus::dma_transfer(unsigned channels) {
    if (channels)
        dma_stall_master_clocks_ += 8;
    for (unsigned channel_index = 0; channel_index < 8; ++channel_index)
        if (channels & (1 << channel_index)) {
            auto &channel_registers = dma_registers_[channel_index];
            const unsigned count =
                read_dma_word(channel_registers, 5) ? read_dma_word(channel_registers, 5) : 65536;
            uint16_t address = read_dma_word(channel_registers, 2);
            const unsigned source_address = (unsigned(channel_registers[4]) << 16) | address;
            const unsigned destination_word = vram_address_, vmain = ppu_registers_[0x15];
            const int step = (channel_registers[0] & 8) ? 0 : ((channel_registers[0] & 16) ? -1 : 1);
            for (unsigned i = 0; i < count; ++i) {
                const uint32_t cpu_address = (channel_registers[4] << 16) | address;
                const uint16_t ppu_address =
                    0x2100 |
                    uint8_t(channel_registers[1] + dma_register_offsets[channel_registers[0] & 7][i & 3]);
                if (channel_registers[0] & 0x80)
                    write_byte(cpu_address, read_byte(ppu_address));
                else
                    write_byte(ppu_address, read_byte(cpu_address));
                address += step;
            }
            if (host_sprites_)
                host_sprites_->complete_graphics_dma(source_address, destination_word, count,
                                                     channel_registers[0], channel_registers[1], vmain);
            if (!(channel_registers[0] & 0x9f) && channel_registers[1] == 4 && count == 544) {
                // Publish the retained scene belonging to this exact source
                // buffer. NMI can upload an older list while gameplay already
                // prepares different positions, visibility and artwork.
                const unsigned source_bank = source_address >> 16, source_offset = source_address & 0xffff;
                const bool low_wram = source_bank == 0x7e || !(source_bank & 0x40);
                const unsigned buffer = low_wram && source_offset == 0x0500 ? 1
                                      : low_wram && source_offset == 0x0800 ? 2 : 0;
                scene_renderer_.capture_oam_upload(scene_view(), sprite_snapshots_enabled_ ? buffer : 0);
                if (host_sprites_)
                    host_sprites_->collect_artwork(scene_renderer_.host_sprite_generations());
            }
            write_dma_word(channel_registers, 2, address);
            write_dma_word(channel_registers, 5, 0);
            dma_stall_master_clocks_ += count * 8 + 8;
        }
}

// HDMA tables supply a line counter and optionally a 16-bit indirect pointer.
// A zero descriptor ends the channel. The descriptor's repeat bit controls
// whether subsequent lines transfer again before fetching a new descriptor.
void SnesBus::hdma_reload(unsigned channel_index) {
    auto &channel_registers = dma_registers_[channel_index];
    auto table = read_dma_word(channel_registers, 8);
    channel_registers[10] = read_byte((channel_registers[4] << 16) | table++);
    hdma_active_[channel_index] = channel_registers[10] != 0;
    hdma_transfer_[channel_index] = true;
    if (channel_registers[0] & 0x40) {
        dma_stall_master_clocks_ += 16;
        channel_registers[5] = read_byte((channel_registers[4] << 16) | table++);
        channel_registers[6] = read_byte((channel_registers[4] << 16) | table++);
    }
    write_dma_word(channel_registers, 8, table);
}

// Frame initialization copies each enabled channel's table start to its
// running pointer. Channel register updates remain visible to CPU I/O reads.
void SnesBus::hdma_init() {
    if (cpu_io_registers_[12])
        dma_stall_master_clocks_ += 18;
    for (unsigned channel_index = 0; channel_index < 8; ++channel_index) {
        hdma_active_[channel_index] = bool(cpu_io_registers_[12] & (1 << channel_index));
        if (hdma_active_[channel_index]) {
            dma_stall_master_clocks_ += 8;
            write_dma_word(dma_registers_[channel_index], 8, read_dma_word(dma_registers_[channel_index], 2));
            hdma_reload(channel_index);
        }
    }
}

// Channels run in hardware order. Even a line that repeats existing register
// values still pays descriptor/channel overhead, which is retained in master
// clocks rather than rounded to a whole number of CPU instruction cycles.
void SnesBus::hdma_line() {
    bool any = false;
    for (unsigned channel_index = 0; channel_index < 8; ++channel_index)
        if (hdma_active_[channel_index] && (cpu_io_registers_[12] & (1 << channel_index))) {
            if (!any) {
                dma_stall_master_clocks_ += 18;
                any = true;
            }
            dma_stall_master_clocks_ += 8;
            auto &channel_registers = dma_registers_[channel_index];
            if (hdma_transfer_[channel_index]) {
                const unsigned address_register = (channel_registers[0] & 0x40) ? 5 : 8;
                uint16_t source = read_dma_word(channel_registers, address_register);
                const unsigned bank =
                    (channel_registers[0] & 0x40) ? channel_registers[7] : channel_registers[4];
                const unsigned count = dma_transfer_lengths[channel_registers[0] & 7];
                for (unsigned i = 0; i < count; ++i) {
                    const uint32_t cpu_address = (bank << 16) | source++;
                    const uint16_t ppu_address =
                        0x2100 |
                        uint8_t(channel_registers[1] + dma_register_offsets[channel_registers[0] & 7][i]);
                    if (channel_registers[0] & 0x80)
                        write_byte(cpu_address, read_byte(ppu_address));
                    else
                        write_byte(ppu_address, read_byte(cpu_address));
                }
                write_dma_word(channel_registers, address_register, source);
                dma_stall_master_clocks_ += count * 8;
            }
            --channel_registers[10];
            hdma_transfer_[channel_index] = bool(channel_registers[10] & 0x80);
            if (!(channel_registers[10] & 0x7f))
                hdma_reload(channel_index);
        }
}

bool SnesBus::take_nmi() {
    const bool pending = nmi_pending_;
    nmi_pending_ = false;
    return pending;
}

unsigned SnesBus::take_dma_clocks() {
    const auto result = dma_stall_master_clocks_;
    dma_stall_master_clocks_ = 0;
    return result;
}

unsigned SnesBus::native_execution_budget() const {
    if (debug_read_wram || debug_write_wram || debug_read_rom || nmi_pending_ || irq_flag_ ||
        dma_stall_master_clocks_ || math_remaining_cpu_cycles_)
        return 0;
#ifdef EB_GAMEPLAY_AUDIT
    if (observe_bus_access)
        return 0;
#endif
    return next_hardware_event_clocks();
}

unsigned SnesBus::next_hardware_event_clocks() const {
    // Match the scheduler's short odd-frame line. Stopping before every line
    // end also protects vertical IRQ/NMI, frame callbacks and joypad start.
    const unsigned line_clocks =
        (scanline_index_ == 240 && (completed_frames & 1) && !(ppu_registers_[0x33] & 1)) ? 1360 : 1364;
    if (scanline_master_clock_ >= line_clocks || (!refresh_done_ && scanline_master_clock_ >= refresh_clock_))
        return 0;
    unsigned budget = line_clocks - scanline_master_clock_;
    if (!refresh_done_)
        budget = std::min(budget, refresh_clock_ - scanline_master_clock_);
    if (scanline_index_ == 0 && scanline_master_clock_ < 24)
        budget = std::min(budget, 24 - scanline_master_clock_);
    if (scanline_index_ <= 224 && scanline_master_clock_ < 1112)
        budget = std::min(budget, 1112 - scanline_master_clock_);

    const unsigned irq_mode = cpu_io_registers_[0] & 0x30;
    const unsigned irq_line = cpu_io_registers_[9] | ((cpu_io_registers_[10] & 1) << 8);
    if (irq_mode == 0x10 || (irq_mode == 0x30 && scanline_index_ == irq_line)) {
        const unsigned irq_clock = (cpu_io_registers_[7] | ((cpu_io_registers_[8] & 1) << 8)) * 4;
        // Equality alone does not assert H-IRQ: advance_clocks requires old
        // <= irq_clock and new > irq_clock, including when already at it.
        if (scanline_master_clock_ <= irq_clock)
            budget = std::min(budget, irq_clock + 1 - scanline_master_clock_);
    }
    if (autojoy_remaining_clocks_)
        budget = std::min(budget, autojoy_remaining_clocks_);
    return budget;
}

// CPU accesses have 6-, 8-, or 12-master-clock costs depending on the region.
// FastROM changes eligible upper-bank ROM accesses only; MainCpu65816 accounts for
// the difference from its six-clock base while executing an instruction.
unsigned SnesBus::access_clocks(uint32_t address) const {
    const unsigned bank = (address >> 16) & 255, offset = address & 65535;
    if (bank == 0x7e || bank == 0x7f)
        return 8;
    if (bank & 0x40)
        return (bank & 0x80) && (cpu_io_registers_[13] & 1) ? 6 : 8;
    if (offset < 0x2000)
        return 8;
    if (offset < 0x4000)
        return 6;
    if (offset < 0x4200)
        return 12;
    if (offset < 0x6000)
        return 6;
    if (offset < 0x8000)
        return 8;
    return (bank & 0x80) && (cpu_io_registers_[13] & 1) ? 6 : 8;
}

void SnesBus::advance_cpu_cycles(unsigned cpu_cycles) {
    if (math_remaining_cpu_cycles_) {
        if (cpu_cycles >= math_remaining_cpu_cycles_) {
            multiply_result_ = pending_product_;
            if (pending_divide_)
                divide_result_ = pending_quotient_;
            math_remaining_cpu_cycles_ = 0;
        } else
            math_remaining_cpu_cycles_ -= cpu_cycles;
    }
    advance_clocks(cpu_cycles * 6, false);
}

void SnesBus::advance_master_clocks_with_refresh(unsigned clocks) {
    // Arithmetic-unit latency is still modeled at instruction boundaries.
    const auto cpu_cycles = clocks / 6;
    if (math_remaining_cpu_cycles_) {
        if (cpu_cycles >= math_remaining_cpu_cycles_) {
            multiply_result_ = pending_product_;
            if (pending_divide_)
                divide_result_ = pending_quotient_;
            math_remaining_cpu_cycles_ = 0;
        } else
            math_remaining_cpu_cycles_ -= cpu_cycles;
    }
    advance_clocks(clocks, true);
}

// This scheduler owns raster progress, refresh, IRQ comparison, vblank, auto
// joypad reading, and HDMA. Break work at scanline/refresh boundaries so a large
// CPU step cannot skip those events. All elapsed time, including refresh stalls,
// is forwarded to the asynchronous APU exactly once at the end of this call.
void SnesBus::advance_clocks(unsigned clocks, bool pause_for_refresh) {
    unsigned elapsed = 0;
    while (clocks) {
        const unsigned old = scanline_master_clock_;
        // Non-interlaced odd frames have one short scanline. Frame parity is
        // therefore part of timing, not merely a display presentation detail.
        const unsigned line_clocks =
            (scanline_index_ == 240 && (completed_frames & 1) && !(ppu_registers_[0x33] & 1)) ? 1360 : 1364;
        unsigned step = std::min(clocks, line_clocks - scanline_master_clock_);
        if (!refresh_done_ && scanline_master_clock_ < refresh_clock_)
            step = std::min(step, refresh_clock_ - scanline_master_clock_);
        scanline_master_clock_ += step;
        clocks -= step;
        master_clocks_ += step;
        elapsed += step;
        if (!refresh_done_ && scanline_master_clock_ >= refresh_clock_) {
            refresh_done_ = true;
            if (pause_for_refresh)
                clocks += 40;
        }
        if (autojoy_remaining_clocks_) {
            if (step >= autojoy_remaining_clocks_) {
                autojoy_remaining_clocks_ = 0;
                joy_result_ = buttons_;
            } else
                autojoy_remaining_clocks_ -= step;
        }
        const unsigned ht = (cpu_io_registers_[7] | ((cpu_io_registers_[8] & 1) << 8)) * 4;
        const unsigned vt = cpu_io_registers_[9] | ((cpu_io_registers_[10] & 1) << 8);
        const unsigned mode = cpu_io_registers_[0] & 0x30;
        if ((mode == 0x10 || (mode == 0x30 && scanline_index_ == vt)) && old <= ht &&
            scanline_master_clock_ > ht)
            irq_flag_ = true;
        if (scanline_index_ == 0 && old < 24 && scanline_master_clock_ >= 24)
            hdma_init();
        // Render from the register state for this line before HDMA prepares
        // the following line's effects. Visible output rows start at line 1.
        if (old < 1112 && scanline_master_clock_ >= 1112 && scanline_index_ <= 224) {
            if (scanline_index_ >= 1)
                render_scanline(scanline_index_ - 1);
            hdma_line();
        }
        if (scanline_master_clock_ == line_clocks) {
            scanline_master_clock_ = 0;
            refresh_done_ = false;
            refresh_clock_ = unsigned(((master_clocks_ + 538) & ~uint64_t(7)) + 2 - master_clocks_);
            if (++scanline_index_ == 262) {
                scanline_index_ = 0;
                ++completed_frames;
                nmi_flag_ = false;
                if (!(ppu_registers_[0] & 0x80))
                    sprite_status_ = 0;
                // The visible scanlines are complete before this frame boundary.
                // Notify here, not after the CPU instruction: a DMA stall can
                // cross several frames before control returns to the frontend.
                if (on_presentation_frame)
                    on_presentation_frame(presentation_pixels(), presentation_width(), completed_frames);
            }
            if (scanline_index_ == 225) {
                nmi_flag_ = true;
                if (cpu_io_registers_[0] & 0x80)
                    nmi_pending_ = true;
                if (cpu_io_registers_[0] & 1)
                    autojoy_remaining_clocks_ = 4224;
                if (!(ppu_registers_[0] & 0x80))
                    oam_address_ = oam_reload_;
            }
            if (mode == 0x20 && scanline_index_ == vt)
                irq_flag_ = true;
        }
    }
    if (advance_audio_master_clocks)
        advance_audio_master_clocks(elapsed);
}

} // namespace eb
