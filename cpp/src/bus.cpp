#include "eb/bus.hpp"
#include "generated_profile.hpp"

#include <algorithm>
#include <stdexcept>

namespace eb {
namespace {
// Each DMA mode walks a repeating set of B-bus register offsets. HDMA uses
// the same pattern but only one mode-sized group per transferred scanline.
constexpr std::array<std::array<unsigned, 4>, 8> dma_offsets{{
    {{0,0,0,0}}, {{0,1,0,1}}, {{0,0,0,0}}, {{0,0,1,1}},
    {{0,1,2,3}}, {{0,1,0,1}}, {{0,0,0,0}}, {{0,0,1,1}}
}};
constexpr unsigned dma_lengths[] = {1,2,2,4,4,4,2,4};
// Bits per pixel for BG1..BG4 in each PPU mode; zero means absent. Mode 7
// bypasses planar decoding and uses its affine map/character organization.
constexpr unsigned depths[8][4] = {{2,2,2,2},{4,4,2,0},{4,4,0,0},{8,4,0,0},
                                  {8,2,0,0},{4,2,0,0},{4,0,0,0},{8,0,0,0}};
uint16_t word(const std::array<uint8_t,16>& a, unsigned i) { return a[i] | a[i+1] << 8; }
void set_word(std::array<uint8_t,16>& a, unsigned i, uint16_t v) { a[i]=v; a[i+1]=v>>8; }
int sign13(unsigned v) { return (v & 0x1000) ? int(v & 0x1fff)-0x2000 : int(v & 0x1fff); }

// Bounded presentation-only counterpart of the source's DECOMP routine. The
// two gas-station palettes are imported data, never embedded retail colors.
// Decode exactly one 512-byte palette; malformed input simply disables this
// optional reference and cannot write game memory or walk outside the image.
bool presentation_palette(std::span<const uint8_t> rom, unsigned start, std::array<uint16_t,256>& palette) {
    std::array<uint8_t,512> bytes{};
    std::size_t input=start, output=0;
    bool valid=true;
    const auto next=[&]() -> unsigned {
        if (input>=rom.size()) { valid=false; return 0; }
        return rom[input++];
    };
    for (;;) {
        const unsigned header=next();
        if (!valid) return false;
        if (header==255) break;
        unsigned command=header>>5, count=(header&31)+1;
        if (command==7) {
            command=(header>>2)&7;
            count=(((header&3)<<8)|next())+1;
        }
        const unsigned length=count*(command==2?2:1);
        if (!valid || length>bytes.size()-output) return false;
        if (!command) {
            for (unsigned i=0;i<count;++i) bytes[output++]=uint8_t(next());
        } else if (command<=3) {
            const unsigned first=next(), second=command==2?next():0;
            for (unsigned i=0;i<count;++i) {
                bytes[output++]=uint8_t(first+(command==3?i:0));
                if (command==2) bytes[output++]=uint8_t(second);
            }
        } else {
            int source=int(next()<<8); source|=int(next());
            for (unsigned i=0;i<count;++i) {
                if (source<0 || std::size_t(source)>=output) return false;
                unsigned value=bytes[unsigned(source)];
                if (command==5) {
                    unsigned reversed=0;
                    for (unsigned bit=0;bit<8;++bit) { reversed=(reversed<<1)|(value&1); value>>=1; }
                    value=reversed;
                }
                bytes[output++]=uint8_t(value);
                source+=command==6?-1:1;
            }
        }
        if (!valid) return false;
    }
    if (output!=bytes.size()) return false;
    for (unsigned index=0;index<palette.size();++index)
        palette[index]=(bytes[index*2]|(bytes[index*2+1]<<8))&0x7fff;
    return true;
}
}

// Start with forced blank and uninitialized cartridge SRAM. The source game's
// reset routine performs normal register/RAM setup through the same bus used
// during play; this constructor does not fast-forward any game initialization.
Bus::Bus(std::span<const uint8_t> rom, GameVersion version) : version_(version), profile_(&source_profile(version)), rom_(rom.begin(), rom.end()) {
    if (rom_.empty()) throw std::invalid_argument("empty cartridge image");
    ppu_[0] = 0x80;
    cpu_io_[1] = 0xff;
    cpu_io_[7] = cpu_io_[9] = 0xff;
    cpu_io_[8] = cpu_io_[10] = 1;
    for (auto& channel : dma_) channel.fill(0xff);
    framebuffer.fill(0xff000000);
    sram.fill(0xff);
}

// Changing the host viewport allocates only a presentation buffer. Seed its
// center from the last native frame to avoid stale pixels before the next
// scanline; no game camera, PPU register, or emulated clock is adjusted here.
void Bus::set_presentation_width(unsigned width) {
    if (width<256 || width>1024 || (width&1))
        throw std::invalid_argument("presentation width must be even and between 256 and 1024");
    requested_presentation_width_=width;
    resize_presentation_width(presentation_frame_aspect_?256:width);
}

void Bus::resize_presentation_width(unsigned width) {
    if (width==presentation_width_) return;
    presentation_width_=width;
    presentation_boundary_frame_=UINT64_MAX;
    presentation_framebuffer_.assign(width==256?0:width*224,0xff000000);
    if (width>256) for (unsigned y=0;y<224;++y)
        std::copy_n(framebuffer.begin()+y*256,256,presentation_framebuffer_.begin()+y*width+(width-256)/2);
    if (presentation_effects_enabled_) {
        presentation_effect_mask_.assign(width*224,0);
        const auto pixels=presentation_pixels();
        presentation_effect_reference_.assign(pixels.begin(),pixels.end());
    }
}

std::span<const uint32_t> Bus::presentation_pixels() const {
    return presentation_width_==256 ? std::span<const uint32_t>(framebuffer) : std::span<const uint32_t>(presentation_framebuffer_);
}

double Bus::presentation_fixed_aspect() const {
    return presentation_frame_aspect_;
}

void Bus::set_presentation_effects_enabled(bool enabled) {
    if (presentation_effects_enabled_==enabled) return;
    presentation_effects_enabled_=enabled;
    if (enabled) {
        if (!presentation_gas_palettes_loaded_) {
            presentation_gas_palettes_loaded_=true;
            presentation_gas_palettes_valid_=presentation_palette(rom_,profile_->rom_gas_palettes[0],presentation_gas_palettes_[0]) &&
                presentation_palette(rom_,profile_->rom_gas_palettes[1],presentation_gas_palettes_[1]);
        }
        presentation_effect_mask_.assign(presentation_width_*224,0);
        const auto pixels=presentation_pixels();
        presentation_effect_reference_.assign(pixels.begin(),pixels.end());
    } else {
        presentation_effect_mask_.clear();
        presentation_effect_reference_.clear();
    }
}

// HiROM decode order matters: WRAM and low-bank I/O overlays take precedence
// over cartridge mappings. Unmapped reads retain the last CPU bus byte, and
// every successful read becomes the next open-bus value.
uint8_t Bus::read(uint32_t address) {
    address &= 0xffffff;
    const unsigned bank = address >> 16, off = address & 0xffff;
    uint8_t value = open_bus_;
    if (bank == 0x7e || bank == 0x7f) value = wram[address & 0x1ffff];
    else if ((bank & 0x40) == 0 && off < 0x2000) value = wram[off];
    else if ((bank & 0x40) == 0 && off < 0x6000) value = read_io(off);
    else if ((bank & 0x7f) >= 0x20 && (bank & 0x7f) < 0x40 && off >= 0x6000 && off < 0x8000)
        value = sram[((bank & 0x1f) * 0x2000 + off - 0x6000) % sram.size()];
    else if ((bank & 0x40) != 0 || off >= 0x8000) {
        // SNES mirrors non-power-of-two ROMs by address-line folding.
        size_t index = address & 0x3fffff, size = rom_.size(), base = 0, mask = 0x200000;
        while (index >= size && mask) {
            if (index & mask) { index -= mask; if (size > mask) { size -= mask; base += mask; } }
            mask >>= 1;
        }
        value = rom_[(base + index) % rom_.size()];
    }
    open_bus_ = value;
    return value;
}

// ROM writes have no cartridge-storage effect, but still drive the CPU bus.
// SRAM mirrors its small physical size throughout the mapped save windows.
void Bus::write(uint32_t address, uint8_t value) {
    address &= 0xffffff;
    open_bus_ = value;
    const unsigned bank = address >> 16, off = address & 0xffff;
    if (bank == 0x7e || bank == 0x7f) wram[address & 0x1ffff] = value;
    else if ((bank & 0x40) == 0 && off < 0x2000) wram[off] = value;
    else if ((bank & 0x40) == 0 && off < 0x6000) write_io(off, value);
    else if ((bank & 0x7f) >= 0x20 && (bank & 0x7f) < 0x40 && off >= 0x6000 && off < 0x8000)
        sram[((bank & 0x1f) * 0x2000 + off - 0x6000) % sram.size()] = value;
}

// CPU-side register reads include acknowledgements and serial transfers.
// Keep these distinct from direct array inspection used by diagnostics: a
// debugger must not clear NMI/IRQ flags merely by showing their state.
uint8_t Bus::read_io(uint16_t a) {
    if (a >= 0x2100 && a <= 0x213f) return read_ppu(a);
    if (a >= 0x2140 && a <= 0x217f) return apu_to_cpu[a & 3];
    if (a == 0x2180) { const auto v = wram[wram_address_]; wram_address_=(wram_address_+1)&0x1ffff; return v; }
    if (a >= 0x4300 && a < 0x4380) {
        const auto reg=a&15;
        return reg>=12 && reg<=14 ? open_bus_ : dma_[(a>>4)&7][reg==15?11:reg];
    }
    switch (a) {
    // The latched controller word shifts most-significant bit first. After
    // sixteen bits the serial line reads high; strobing keeps reloading it.
    case 0x4016: {
        if (joy_strobe_) { joy_latch_=buttons_; joy_position_=0; }
        const auto bit=joy_position_<16 ? ((joy_latch_>>(15-joy_position_))&1) : 1;
        if (!joy_strobe_ && joy_position_<16) ++joy_position_;
        return (open_bus_&0xfc)|bit;
    }
    case 0x4017: return (open_bus_&0xe0)|0x1c;
    // Interrupt flags acknowledge on read; NMI's queued edge is separate from
    // the vblank flag so clearing one does not retroactively erase the other.
    case 0x4210: { const auto v=(nmi_flag_?0x80:0)|(open_bus_&0x70)|2; nmi_flag_=false; return v; }
    case 0x4211: { const auto v=(irq_flag_?0x80:0)|(open_bus_&0x7f); irq_flag_=false; return v; }
    case 0x4212: return (line_>=225?0x80:0)|(hclock_>=1096 || hclock_<4?0x40:0)|(autojoy_clocks_?1:0)|(open_bus_&0x3e);
    case 0x4213: return cpu_io_[1];
    case 0x4214: return divide_result_;
    case 0x4215: return divide_result_>>8;
    case 0x4216: return multiply_result_;
    case 0x4217: return multiply_result_>>8;
    case 0x4218: return joy_result_;
    case 0x4219: return joy_result_>>8;
    case 0x421a: case 0x421b: case 0x421c: case 0x421d: case 0x421e: case 0x421f: return 0;
    default: return open_bus_;
    }
}

// Save ordinary CPU-register bytes before applying their write-triggered
// actions. Arithmetic results become visible only after their pending delay,
// while a DMA start performs transfers and accumulates CPU stall clocks.
void Bus::write_io(uint16_t a, uint8_t v) {
    if (a >= 0x2100 && a <= 0x213f) { write_ppu(a,v); return; }
    if (a >= 0x2140 && a <= 0x217f) { cpu_to_apu[a&3]=v; return; }
    if (a >= 0x4300 && a < 0x4380) {
        const auto reg=a&15;
        if (reg<12 || reg==15) dma_[(a>>4)&7][reg==15?11:reg]=v;
        return;
    }
    if (a == 0x2180) { wram[wram_address_]=v; wram_address_=(wram_address_+1)&0x1ffff; return; }
    if (a >= 0x2181 && a <= 0x2183) {
        const unsigned shift=(a-0x2181)*8;
        wram_address_=((wram_address_&~(0xffu<<shift))|(unsigned(v)<<shift))&0x1ffff;
        return;
    }
    if (a == 0x4016) {
        if ((v&1) || joy_strobe_) { joy_latch_=buttons_; joy_position_=0; }
        joy_strobe_=v&1; return;
    }
    if (a < 0x4200 || a > 0x420d) return;
    const auto old=cpu_io_[a&31];
    cpu_io_[a&31]=v;
    switch (a) {
    case 0x4200:
        if ((v&0x80) && !(old&0x80) && nmi_flag_) nmi_pending_=true;
        if (!(v&0x30)) irq_flag_=false;
        break;
    case 0x4201:
        if ((old&0x80) && !(v&0x80)) { latched_h_=hclock_/4; latched_v_=line_; counters_latched_=true; }
        break;
    case 0x4203: pending_product_=cpu_io_[2]*v; math_cycles_=8; pending_divide_=false; break;
    case 0x4206: {
        const unsigned dividend=cpu_io_[4]|cpu_io_[5]<<8;
        pending_quotient_=v ? dividend/v : 0xffff;
        pending_product_=v ? dividend%v : dividend;
        math_cycles_=16; pending_divide_=true; break;
    }
    case 0x420b: dma_transfer(v); cpu_io_[11]=0; break;
    default: break;
    }
}

// VMAIN can permute word-address bits to support different tile upload
// layouts. The remapping is performed before multiplying by two to index the
// byte array; applying it after byte conversion would scramble plane data.
uint16_t Bus::mapped_vram_address() const {
    const unsigned a=vram_address_;
    switch ((ppu_[0x15]>>2)&3) {
    case 1: return (a&0xff00)|((a&0x1f)<<3)|((a>>5)&7);
    case 2: return (a&0xfe00)|((a&0x3f)<<3)|((a>>6)&7);
    case 3: return (a&0xfc00)|((a&0x7f)<<3)|((a>>7)&7);
    default: return a;
    }
}
void Bus::increment_vram() { constexpr unsigned inc[]={1,32,128,128}; vram_address_+=inc[ppu_[0x15]&3]; }
uint16_t Bus::vram_word(unsigned a) const { return vram[a&0xffff]|vram[(a+1)&0xffff]<<8; }
void Bus::prefetch_vram() { vram_buffer_=vram_word(unsigned(mapped_vram_address())*2); }
uint16_t Bus::palette(unsigned i) const { i=(i&255)*2; return (cgram[i]|cgram[i+1]<<8)&0x7fff; }

// PPU ports are stateful byte interfaces to wider values. OAM/CGRAM commit
// paired writes, scroll and Mode 7 share write latches, and VRAM increments
// after the configured low/high port. Do not replace these with flat stores.
void Bus::write_ppu(uint16_t address, uint8_t v) {
    const unsigned a=address&0x3f;
    if (a>=0x34) return;
    ppu_[a]=v;
    if (a>=0x0d && a<=0x14) {
        const unsigned bg=(a-0x0d)/2;
        // The first byte temporarily occupies bits 8..15. In particular bit10
        // must survive so the next write can recover all three fine-scroll bits.
        // Rendering applies the ten-bit address mask, not this write latch.
        if (a&1) bg_x_[bg]=(v<<8)|(scroll_latch_&0xf8)|((bg_x_[bg]>>8)&7);
        else bg_y_[bg]=((v<<8)|scroll_latch_)&0x3ff;
        scroll_latch_=v;
        if (a<=0x0e) { mode7_scroll_[a-0x0d]=int16_t((v<<8)|mode7_latch_); mode7_latch_=v; }
        return;
    }
    switch (a) {
    case 0x02: case 0x03:
        oam_reload_=((ppu_[3]&1)<<9)|(ppu_[2]<<1); oam_address_=oam_reload_; break;
    case 0x04:
        if (oam_address_&0x200) oam[0x200+(oam_address_&31)]=v;
        else if (oam_address_&1) { oam[(oam_address_-1)&511]=oam_latch_; oam[oam_address_&511]=v; }
        else oam_latch_=v;
        oam_address_=(oam_address_+1)&0x3ff; break;
    case 0x16: vram_address_=(vram_address_&0xff00)|v; prefetch_vram(); break;
    case 0x17: vram_address_=(vram_address_&0x00ff)|(v<<8); prefetch_vram(); break;
    case 0x18: case 0x19:
        vram[(unsigned(mapped_vram_address())*2+(a&1))&0xffff]=v;
        if (bool(a&1)==bool(ppu_[0x15]&0x80)) increment_vram();
        break;
    case 0x1b: case 0x1c: case 0x1d: case 0x1e: case 0x1f: case 0x20:
        mode7_[a-0x1b]=int16_t((v<<8)|mode7_latch_); mode7_latch_=v; break;
    case 0x21: cgram_address_=unsigned(v)*2; break;
    case 0x22:
        if (cgram_address_&1) { cgram[cgram_address_-1]=cgram_latch_; cgram[cgram_address_]=v&0x7f; }
        else cgram_latch_=v;
        cgram_address_=(cgram_address_+1)&511; break;
    case 0x32:
        for (unsigned i=0;i<3;++i) if (v&(0x20<<i)) fixed_color_=(fixed_color_&~(31<<(i*5)))|((v&31)<<(i*5));
        break;
    default: break;
    }
}

// Read ports use the appropriate PPU bus latch for undriven bits. VRAM reads
// return a prefetched word, while counter ports alternate low/high halves;
// reading STAT78 resets those counter-half selectors.
uint8_t Bus::read_ppu(uint16_t address) {
    const unsigned a=address&0x3f;
    uint8_t value=ppu1_bus_;
    switch (a) {
    case 0x34: case 0x35: case 0x36: {
        const int32_t product=int32_t(mode7_[0])*int8_t(uint16_t(mode7_[1])>>8);
        value=uint32_t(product)>>((a-0x34)*8); break;
    }
    case 0x37:
        if (cpu_io_[1]&0x80) { latched_h_=hclock_/4; latched_v_=line_; counters_latched_=true; }
        return open_bus_;
    case 0x38: value=oam[(oam_address_&0x200)?0x200+(oam_address_&31):oam_address_]; oam_address_=(oam_address_+1)&0x3ff; break;
    case 0x39: case 0x3a:
        value=vram_buffer_>>((a==0x3a)?8:0);
        if ((a==0x3a)==bool(ppu_[0x15]&0x80)) { prefetch_vram(); increment_vram(); }
        break;
    case 0x3b:
        value=cgram[cgram_address_]; if (cgram_address_&1) value=(value&0x7f)|(ppu2_bus_&0x80);
        cgram_address_=(cgram_address_+1)&511; ppu2_bus_=value; return value;
    case 0x3c:
        value=latch_h_high_?(ppu2_bus_&0xfe)|((latched_h_>>8)&1):latched_h_;
        latch_h_high_=!latch_h_high_; ppu2_bus_=value; return value;
    case 0x3d:
        value=latch_v_high_?(ppu2_bus_&0xfe)|((latched_v_>>8)&1):latched_v_;
        latch_v_high_=!latch_v_high_; ppu2_bus_=value; return value;
    case 0x3e: value=sprite_status_|(ppu1_bus_&0x10)|1; break;
    case 0x3f:
        value=((frames&1)?0x80:0)|(counters_latched_?0x40:0)|(ppu2_bus_&0x20)|3;
        counters_latched_=false; latch_h_high_=latch_v_high_=false; ppu2_bus_=value; return value;
    default: return open_bus_;
    }
    ppu1_bus_=value;
    return value;
}

// A-bus addresses are bank plus a wrapping 16-bit offset. A zero transfer
// length means 65536 bytes; fixed/decrement/increment modes change only that
// offset. The CPU later drains dma_clocks_ while other hardware keeps running.
void Bus::dma_transfer(unsigned channels) {
    if(channels) dma_clocks_+=8;
    for (unsigned ch=0;ch<8;++ch) if (channels&(1<<ch)) {
        auto& d=dma_[ch];
        const unsigned count=word(d,5)?word(d,5):65536;
        uint16_t address=word(d,2);
        const int step=(d[0]&8)?0:((d[0]&16)?-1:1);
        for (unsigned i=0;i<count;++i) {
            const uint32_t aa=(d[4]<<16)|address;
            const uint16_t bb=0x2100|uint8_t(d[1]+dma_offsets[d[0]&7][i&3]);
            if (d[0]&0x80) write(aa,read(bb)); else write(bb,read(aa));
            address+=step;
        }
        set_word(d,2,address); set_word(d,5,0);
        dma_clocks_+=count*8+8;
    }
}

// HDMA tables supply a line counter and optionally a 16-bit indirect pointer.
// A zero descriptor ends the channel. The descriptor's repeat bit controls
// whether subsequent lines transfer again before fetching a new descriptor.
void Bus::hdma_reload(unsigned ch) {
    auto& d=dma_[ch];
    auto table=word(d,8);
    d[10]=read((d[4]<<16)|table++);
    hdma_active_[ch]=d[10]!=0;
    hdma_transfer_[ch]=true;
    if (d[0]&0x40) {
        dma_clocks_+=16;
        d[5]=read((d[4]<<16)|table++); d[6]=read((d[4]<<16)|table++);
    }
    set_word(d,8,table);
}
// Frame initialization copies each enabled channel's table start to its
// running pointer. Channel register updates remain visible to CPU I/O reads.
void Bus::hdma_init() {
    if(cpu_io_[12]) dma_clocks_+=18;
    for (unsigned ch=0;ch<8;++ch) {
        hdma_active_[ch]=bool(cpu_io_[12]&(1<<ch));
        if (hdma_active_[ch]) { dma_clocks_+=8; set_word(dma_[ch],8,word(dma_[ch],2)); hdma_reload(ch); }
    }
}
// Channels run in hardware order. Even a line that repeats existing register
// values still pays descriptor/channel overhead, which is retained in master
// clocks rather than rounded to a whole number of CPU instruction cycles.
void Bus::hdma_line() {
    bool any=false;
    for (unsigned ch=0;ch<8;++ch) if (hdma_active_[ch] && (cpu_io_[12]&(1<<ch))) {
        if(!any) { dma_clocks_+=18; any=true; }
        dma_clocks_+=8;
        auto& d=dma_[ch];
        if (hdma_transfer_[ch]) {
            const unsigned addr_reg=(d[0]&0x40)?5:8;
            uint16_t source=word(d,addr_reg);
            const unsigned bank=(d[0]&0x40)?d[7]:d[4];
            const unsigned count=dma_lengths[d[0]&7];
            for (unsigned i=0;i<count;++i) {
                const uint32_t aa=(bank<<16)|source++;
                const uint16_t bb=0x2100|uint8_t(d[1]+dma_offsets[d[0]&7][i]);
                if (d[0]&0x80) write(aa,read(bb)); else write(bb,read(aa));
            }
            set_word(d,addr_reg,source); dma_clocks_+=count*8;
        }
        --d[10];
        hdma_transfer_[ch]=bool(d[10]&0x80);
        if (!(d[10]&0x7f)) hdma_reload(ch);
    }
}

bool Bus::take_nmi() { const bool pending=nmi_pending_; nmi_pending_=false; return pending; }
unsigned Bus::take_dma_clocks() { const auto result=dma_clocks_; dma_clocks_=0; return result; }

// CPU accesses have 6-, 8-, or 12-master-clock costs depending on the region.
// FastROM changes eligible upper-bank ROM accesses only; Cpu accounts for
// the difference from its six-clock base while executing an instruction.
unsigned Bus::access_clocks(uint32_t address) const {
    const unsigned bank=(address>>16)&255, offset=address&65535;
    if(bank==0x7e || bank==0x7f) return 8;
    if(bank&0x40) return (bank&0x80) && (cpu_io_[13]&1) ? 6:8;
    if(offset<0x2000) return 8;
    if(offset<0x4000) return 6;
    if(offset<0x4200) return 12;
    if(offset<0x6000) return 6;
    if(offset<0x8000) return 8;
    return (bank&0x80) && (cpu_io_[13]&1) ? 6:8;
}

void Bus::tick(unsigned cycles) {
    if (math_cycles_) {
        if (cycles>=math_cycles_) { multiply_result_=pending_product_; if (pending_divide_) divide_result_=pending_quotient_; math_cycles_=0; }
        else math_cycles_-=cycles;
    }
    advance_clocks(cycles*6,false);
}

void Bus::run_cpu(unsigned clocks) {
    // Arithmetic-unit latency is still modeled at instruction boundaries.
    const auto cycles=clocks/6;
    if (math_cycles_) {
        if (cycles>=math_cycles_) { multiply_result_=pending_product_; if (pending_divide_) divide_result_=pending_quotient_; math_cycles_=0; }
        else math_cycles_-=cycles;
    }
    advance_clocks(clocks,true);
}

// This scheduler owns raster progress, refresh, IRQ comparison, vblank, auto
// joypad reading, and HDMA. Break work at scanline/refresh boundaries so a large
// CPU step cannot skip those events. All elapsed time, including refresh stalls,
// is forwarded to the asynchronous APU exactly once at the end of this call.
void Bus::advance_clocks(unsigned clocks,bool pause_for_refresh) {
    unsigned elapsed=0;
    while (clocks) {
        const unsigned old=hclock_;
        // Non-interlaced odd frames have one short scanline. Frame parity is
        // therefore part of timing, not merely a display presentation detail.
        const unsigned line_clocks=(line_==240 && (frames&1) && !(ppu_[0x33]&1))?1360:1364;
        unsigned step=std::min(clocks,line_clocks-hclock_);
        if(!refresh_done_ && hclock_<refresh_clock_) step=std::min(step,refresh_clock_-hclock_);
        hclock_+=step; clocks-=step;
        master_clocks_+=step; elapsed+=step;
        if(!refresh_done_ && hclock_>=refresh_clock_) {
            refresh_done_=true;
            if(pause_for_refresh) clocks+=40;
        }
        if (autojoy_clocks_) { if (step>=autojoy_clocks_) { autojoy_clocks_=0; joy_result_=buttons_; } else autojoy_clocks_-=step; }
        const unsigned ht=(cpu_io_[7]|((cpu_io_[8]&1)<<8))*4;
        const unsigned vt=cpu_io_[9]|((cpu_io_[10]&1)<<8);
        const unsigned mode=cpu_io_[0]&0x30;
        if ((mode==0x10 || (mode==0x30 && line_==vt)) && old<=ht && hclock_>ht) irq_flag_=true;
        if (line_==0 && old<24 && hclock_>=24) hdma_init();
        // Render from the register state for this line before HDMA prepares
        // the following line's effects. Visible output rows start at line 1.
        if (old<1112 && hclock_>=1112 && line_<=224) {
            if (line_>=1) render_line(line_-1);
            hdma_line();
        }
        if (hclock_==line_clocks) {
            hclock_=0;
            refresh_done_=false;
            refresh_clock_=unsigned(((master_clocks_+538)&~uint64_t(7))+2-master_clocks_);
            if (++line_==262) {
                line_=0; ++frames; nmi_flag_=false; if (!(ppu_[0]&0x80)) sprite_status_=0;
                // The visible scanlines are complete before this frame boundary.
                // Notify here, not after the CPU instruction: a DMA stall can
                // cross several frames before control returns to the frontend.
                if (on_presentation_frame) on_presentation_frame(presentation_pixels(),presentation_width_,frames);
            }
            if (line_==225) {
                nmi_flag_=true; if (cpu_io_[0]&0x80) nmi_pending_=true;
                if (cpu_io_[0]&1) autojoy_clocks_=4224;
                if (!(ppu_[0]&0x80)) oam_address_=oam_reload_;
            }
            if (mode==0x20 && line_==vt) irq_flag_=true;
        }
    }
    if(apu_tick) apu_tick(elapsed);
}

// Each layer combines up to two inclusive horizontal windows. Enable and
// inversion bits belong to each window; the final OR/AND/XOR/XNOR operator
// matters only when both are enabled.
bool Bus::window(unsigned layer, unsigned x) const {
    const unsigned sel=(ppu_[0x23+layer/2]>>((layer&1)*4))&15;
    const bool e1=sel&2, e2=sel&8;
    bool a=x>=ppu_[0x26] && x<=ppu_[0x27], b=x>=ppu_[0x28] && x<=ppu_[0x29];
    if (sel&1) a=!a;
    if (sel&4) b=!b;
    if (!e1) return e2&&b;
    if (!e2) return a;
    const unsigned logic=layer<4 ? (ppu_[0x2a]>>(layer*2))&3 : (ppu_[0x2b]>>((layer-4)*2))&3;
    switch (logic) { case 0: return a||b; case 1: return a&&b; case 2: return a!=b; default:return a==b; }
}

// Decode tilemap entry -> tile quadrant/flips -> planar pixel -> palette and
// priority. Signed x permits sampling presentation margins; masks implement
// hardware map wrapping only after scroll/mosaic has selected a coordinate.
Bus::Pixel Bus::background(unsigned bg, int x, unsigned y, bool margin) const {
    const unsigned mode=ppu_[5]&7, depth=depths[mode][bg];
    if (mode==7) return mode7_pixel(bg,x,y);
    if (!depth) return {};
    const unsigned mosaic=(ppu_[6]>>4)+1;
    if (ppu_[6]&(1<<bg)) { x-=((x%int(mosaic))+int(mosaic))%int(mosaic); y-=y%mosaic; }
    const unsigned tile_size=(ppu_[5]&(0x10<<bg))?16:8;
    unsigned px=unsigned(x+bg_x_[bg])&1023, py=(y+bg_y_[bg])&1023;
    if ((mode==2 || mode==4) && bg<2) {
        // BG3 selects scroll words, not visible tiles. Columns align to the
        // target layer's fine scroll; the first tile column has no override.
        const int column=(x+int(bg_x_[bg]&7))&~7;
        if (column<0 || column>=int(tile_size)) {
            const unsigned lookup_x=unsigned(column-int(tile_size)+int(bg_x_[2]&~7u))&1023;
            const auto offset_word=[&](unsigned lookup_y) {
                const unsigned size=(ppu_[5]&0x40)?16:8;
                const unsigned map=ppu_[9], width=(map&1)?64:32, height=(map&2)?64:32;
                const unsigned mx=(lookup_x/size)%width, my=(lookup_y/size)%height;
                const unsigned screen=mx/32+(my/32)*(width/32);
                return vram_word(((map&0xfc)<<9)+screen*2048+((my%32)*32+mx%32)*2);
            };
            const unsigned horizontal=offset_word(bg_y_[2]);
            const unsigned enabled=0x2000u<<bg;
            if (mode==4) {
                if (horizontal&enabled) {
                    if (horizontal&0x8000) py=(y+horizontal)&1023;
                    else px=(x+(bg_x_[bg]&7)+(horizontal&~7u))&1023;
                }
            } else {
                const unsigned vertical=offset_word(bg_y_[2]+8);
                if (horizontal&enabled) px=(x+(bg_x_[bg]&7)+(horizontal&~7u))&1023;
                if (vertical&enabled) py=(y+vertical)&1023;
            }
        }
    }
    // Large maps are assembled from 32x32-tile screens, not stored as one
    // contiguous wide row. Screen selection and in-screen indexing are separate.
    const unsigned tx=px/tile_size, ty=py/tile_size;
    const unsigned map=ppu_[7+bg], width=(map&1)?64:32, height=(map&2)?64:32;
    const unsigned mx=tx%width, my=ty%height;
    const unsigned screen=(mx/32)+(my/32)*(width/32);
    const unsigned mapaddr=((map&0xfc)<<9)+screen*2048+((my%32)*32+(mx%32))*2;
    const unsigned entry=margin ? presentation_tile(bg,x,y,vram_word(mapaddr)) : vram_word(mapaddr);
    unsigned ix=px%tile_size, iy=py%tile_size;
    if (entry&0x4000) ix=tile_size-1-ix;
    if (entry&0x8000) iy=tile_size-1-iy;
    unsigned tile=((entry&1023)+(ix/8)+(iy/8)*16)&1023;
    const unsigned base=((ppu_[0x0b+bg/2]>>((bg&1)*4))&15)*8192;
    // SNES planar tiles store paired bitplanes sixteen bytes apart. A zero
    // color index is transparent before palette selection, even if CGRAM[0]
    // itself is a visible color used by the backdrop.
    unsigned color=0;
    for (unsigned plane=0;plane<depth;++plane) {
        const unsigned addr=base+tile*depth*8+(plane/2)*16+(iy%8)*2+(plane&1);
        color|=((vram[addr&0xffff]>>(7-(ix%8)))&1)<<plane;
    }
    if (!color) return {};
    const unsigned pal=(entry>>10)&7;
    const bool high=entry&0x2000;
    int priority=0;
    if (mode==0) { constexpr int p[4][2]={{7,10},{6,9},{1,4},{0,3}}; priority=p[bg][high]; }
    else if (mode==1) { constexpr int p[3][2]={{6,9},{5,8},{0,2}}; priority=p[bg][high]; if (bg==2&&high&&(ppu_[5]&8)) priority=11; }
    else { constexpr int p[2][2]={{2,6},{0,4}}; priority=p[bg][high]; }
    uint16_t rgb;
    unsigned palette_index=256;
    if (depth==8 && bg==0 && (ppu_[0x30]&1))
        rgb=((color&7)<<2)|((pal&1)<<1)|((color&0x38)<<4)|((pal&2)<<5)|((color&0xc0)<<7)|((pal&4)<<10);
    else {
        palette_index=color+(depth==8?0:pal*(1<<depth))+(mode==0?bg*32:0);
        rgb=palette(palette_index);
    }
    return {rgb,priority,bg,true,palette_index};
}

// Affine rendering keeps the hardware's fixed-point truncations in the
// intermediate products. Algebraically regrouping these expressions can move
// pixels because clearing the low bits is not distributive over addition.
Bus::Pixel Bus::mode7_pixel(unsigned bg, int x, unsigned y) const {
    if (bg>1 || (bg==1 && !(ppu_[0x33]&0x40))) return {};
    const unsigned mosaic=(ppu_[6]>>4)+1;
    if (ppu_[6]&(1<<bg)) { x-=((x%int(mosaic))+int(mosaic))%int(mosaic); y-=y%mosaic; }
    if (ppu_[0x1a]&1) x=255-x;
    if (ppu_[0x1a]&2) y=255-y;
    const int cx=sign13(mode7_[4]), cy=sign13(mode7_[5]);
    const int ox=sign13(mode7_scroll_[0])-cx, oy=sign13(mode7_scroll_[1])-cy;
    const auto clip=[](int n) { return (n&0x2000)?(n|~1023):(n&1023); };
    const int sx=((mode7_[0]*clip(ox)&~63)+(mode7_[1]*clip(oy)&~63)+(mode7_[1]*int(y)&~63)+mode7_[0]*int(x)+cx*256)>>8;
    const int sy=((mode7_[2]*clip(ox)&~63)+(mode7_[3]*clip(oy)&~63)+(mode7_[3]*int(y)&~63)+mode7_[2]*int(x)+cy*256)>>8;
    const bool outside=sx<0||sx>=1024||sy<0||sy>=1024;
    const unsigned repeat=ppu_[0x1a]>>6;
    if (outside && repeat==2) return {};
    const unsigned tile=(outside && repeat==3)?0:vram[(((sy&1023)/8*128+(sx&1023)/8)*2)&0xffff];
    unsigned color=vram[(tile*128+(sy&7)*16+(sx&7)*2+1)&0xffff];
    const int priority=bg==1 ? ((color&0x80)?4:0) : 2;
    if (bg==1) color&=0x7f;
    if (!color) return {};
    const bool direct=bg==0 && (ppu_[0x30]&1);
    const auto rgb=direct ? uint16_t(((color&7)<<2)|((color&0x38)<<4)|((color&0xc0)<<7)) : palette(color);
    return {rgb,priority,bg,true,direct?256u:color};
}

// Only the native pass may update sprite range/time-over flags. A second,
// wider sampling pass returns its status without committing it, so enabling
// widescreen cannot change later reads of the emulated status register.
void Bus::sprites(unsigned y, std::array<Pixel,256>& result) {
    sprite_status_|=sprite_pixels(y,result,0);
}

// origin is the native-coordinate x represented by result[0]. OAM ordering,
// signed nine-bit x, scanline wrap, and hardware object/tile limits are kept
// separate from output clipping so the host viewport does not create sprites.
uint8_t Bus::sprite_pixels(unsigned y, std::span<Pixel> result, int origin) const {
    constexpr unsigned sizes[8][2][2]={{{8,8},{16,16}},{{8,8},{32,32}},{{8,8},{64,64}},{{16,16},{32,32}},
        {{16,16},{64,64}},{{32,32},{64,64}},{{16,32},{32,64}},{{16,32},{32,32}}};
    constexpr int mode0p[]={2,5,8,11}, mode1p[]={1,3,7,10}, otherp[]={1,3,5,7};
    const unsigned size_mode=ppu_[1]>>5;
    const unsigned first=(ppu_[3]&0x80)?((oam_reload_>>2)&127):0;
    unsigned count=0, tiles=0;
    uint8_t status=0;
    for (unsigned n=0;n<128;++n) {
        const unsigned obj=(n+first)&127, a=obj*4;
        const unsigned ext=(oam[512+obj/4]>>((obj&3)*2))&3;
        int x=oam[a]|((ext&1)<<8);
        if (origin || result.size()!=256) {
            if (x >= 384) x -= 512;
        } else {
            if (x >= 256) x -= 512;
        }
        const unsigned width=sizes[size_mode][ext>>1][0], height=sizes[size_mode][ext>>1][1];
        unsigned row=(y-oam[a+1])&255;
        if (row>=height) continue;
        if (++count>32) { status|=0x40; break; }
        // Fully offscreen OAM is also used to hide objects. Presentation does
        // not reveal these slots; it only completes native edge-crossing OBJs.
        // For widescreen entity support, we remove this native-boundary check.
        // if ((origin || result.size()!=256) && (x+int(width)<=0 || x>=256)) continue;
        const unsigned attr=oam[a+3], pal=(attr>>1)&7, level=(attr>>4)&3;
        const unsigned mode=ppu_[5]&7;
        const int priority=(mode==0?mode0p:mode==1?mode1p:otherp)[level];
        if (attr&0x80) row=height-1-row;
        const unsigned base=(ppu_[1]&7)*16384+((attr&1)?(((ppu_[1]>>3)&3)+1)*8192:0);
        for (unsigned col=0;col<width;++col) {
            const int px=x+int(col);
            if (!(col&7) && px>-8 && px<256 && ++tiles>34) { status|=0x80; break; }
            const int output_x=px-origin;
            if (output_x<0 || output_x>=int(result.size())) continue;
            const unsigned ix=(attr&0x40)?width-1-col:col;
            const unsigned tile=((oam[a+2]&0xf0)+((row/8)*16))&0xf0;
            const unsigned tile_index=tile|((oam[a+2]+ix/8)&15);
            const unsigned addr=base+tile_index*32+(row&7)*2;
            unsigned color=0;
            for (unsigned plane=0;plane<4;++plane)
                color|=((vram[(addr+(plane/2)*16+(plane&1))&0xffff]>>(7-(ix&7)))&1)<<plane;
            // OAM order resolves overlap before BG priority comparison.
            if (color && result[output_x].priority<0) result[output_x]={palette(128+pal*16+color),priority,4,pal>=4,128+pal*16+color};
        }
    }
    return status;
}

void Bus::prepare_presentation_scene() {
    // In the US source, ordinary window/HUD tiles use BG3/BG4. The two
    // generated battle backgrounds can instead target BG2 or BG3; honor the
    // actual loaded_bg_data records rather than dropping that battle layer.
    const auto ram_word=[this](unsigned address) { return unsigned(wram[address])|(unsigned(wram[address+1])<<8); };
    // Address metadata is generated separately for US and JP. Scene probes
    // read that selected profile rather than assuming the English RAM layout.
    const auto& source=*profile_;
    // Static full-screen art/text has no authored offscreen continuation.
    // In particular SHOW_TITLE_SCREEN's BG1 map ($58) must not repeat the
    // copyright line. Only identified scenery/animation layers extend.
    presentation_layer_mask_=0x10;
    if ((ppu_[5]&7)==7) presentation_layer_mask_=0x13; // affine scenery
    presentation_jp_title_=false;
    for (unsigned slot=0;slot<30;++slot)
        if (ram_word(source.wram_entity_script+slot*2)==source.file_select_event) presentation_layer_mask_=2; // FILE_SELECT_INIT: BG2 animation, centered BG3/OBJ
        else if (version_==GameVersion::JP && ram_word(source.wram_entity_script+slot*2)>=source.title_event_first &&
                 ram_word(source.wram_entity_script+slot*2)<=source.title_event_last &&
                 (ppu_[5]&7)==source.title_bg_mode && ppu_[7]==source.title_bg_maps[0] && ppu_[8]==source.title_bg_maps[1]) {
            presentation_jp_title_=true;
            presentation_layer_mask_=0x13;
        }
    if (ram_word(source.wram_battle_flag)) {
        presentation_layer_mask_=0x10;
        for (unsigned record : source.wram_bg_records) {
            const unsigned target=wram[record], depth=wram[record+1];
            if (target>=1 && target<=4 && depth==depths[ppu_[5]&7][target-1])
                presentation_layer_mask_|=1u<<(target-1);
        }
    }

    presentation_world_map_=false;
    if ((ppu_[5]&0x37)==1 && ppu_[7]==0x39 && ppu_[8]==0x59 && !ram_word(source.wram_battle_flag) && rom_.size()>=source.rom_map_sectors+2560) {
        // Align the source's full map position to the actual latched scroll;
        // a game tick may have prepared the following frame's position already.
        for (unsigned bg=0;bg<2;++bg) {
            const int camera_x=int16_t(ram_word(source.wram_bg_scroll[bg*2])), camera_y=int16_t(ram_word(source.wram_bg_scroll[bg*2+1]));
            presentation_world_x_[bg]=camera_x+((int(bg_x_[bg])-(camera_x&1023)+512)&1023)-512;
            presentation_world_y_[bg]=camera_y+((int(bg_y_[bg])-(camera_y&1023)+512)&1023)-512;
        }
        // Confirm the source map/arrangement interpretation against displayed
        // native tiles before applying it outside the viewport. These points
        // avoid the centered Lumine Hall message patch and ordinary text HUD.
        bool matches=true;
        for (unsigned y : {8u,216u}) for (unsigned x : {8u,128u,248u}) {
            const unsigned mx=((x+bg_x_[0])&511)/8, my=((y+bg_y_[0])&255)/8;
            const auto actual=vram_word(0x7000+(mx/32)*2048+(my*32+(mx&31))*2);
            const int wx=presentation_world_x_[0]+int(x), wy=presentation_world_y_[0]+int(y);
            const int tx=wx>=0?wx/8:(wx-7)/8, ty=wy>=0?wy/8:(wy-7)/8;
            matches&=actual==presentation_map_tile(tx,ty,0);
        }
        presentation_world_map_=matches;
        if (matches) presentation_layer_mask_=0x13;
    }
    if (presentation_world_map_) prepare_presentation_boundary();
    else { presentation_shift_x_=0; presentation_clip_left_=-384; presentation_clip_right_=640; }

    presentation_lumine_phase_=-1;
    // EVENT_353 -> C4880C builds both half-tile phases of the complete wall
    // message in BUFFER. C48A6D uploads 30 columns by eight rows to BG1 at
    // world tile (808,588), then increments that entity's VAR1. Detect the
    // phase actually in VRAM, since the DMA can lag behind the script tick.
    if ((ppu_[5]&0x17)!=1 || ppu_[7]!=0x39 || wram[source.wram_lumine_header]!=8 || wram[source.wram_lumine_header+1]!=30) return;
    for (unsigned slot=0;slot<30;++slot) {
        const unsigned offset=slot*2;
        if (ram_word(source.wram_entity_script+offset)!=source.lumine_event) continue;
        const unsigned limit=ram_word(source.wram_entity_var0+offset), next=ram_word(source.wram_entity_var1+offset);
        if (!limit || limit>1400 || next>limit+1) continue;
        for (int delta : {-1,0,-2,-3}) {
            const int phase=int(next)+delta;
            if (phase<0 || unsigned(phase)>limit) continue;
            const unsigned source_address=source.wram_lumine_maps[phase&1]+unsigned(phase/2)*16;
            bool match=true;
            for (unsigned column=0;column<30 && match;++column) for (unsigned row=0;row<8;++row) {
                const unsigned mx=(40+column)&63;
                const unsigned actual=vram_word(0x7000+(mx/32)*2048+((12+row)*32+(mx&31))*2);
                const unsigned expected=ram_word(source_address+column*16+row*2);
                if (expected<0x0c10 || expected>0x0c1f || actual!=expected) { match=false; break; }
            }
            if (match) {
                presentation_lumine_phase_=phase;
                presentation_lumine_columns_=limit/2+30;
                presentation_layer_mask_|=1;
                return;
            }
        }
    }
}

// A wider view may fit within a connected run of authored sectors even when
// the native camera is centered near an edge. Shift only its rendered scenery;
// narrow runs receive black margins instead of exposing neighboring map data.
void Bus::prepare_presentation_boundary() {
    if (presentation_boundary_frame_==frames) return;
    presentation_boundary_frame_=frames;
    presentation_shift_x_=0;
    presentation_clip_left_=-384;
    presentation_clip_right_=640;
    // The original camera itself is not clamped. This optional display policy
    // derives a horizontal region from the very same sector IDs that LOAD_MAP
    // uses to hide unrelated maps. Anchor at the native viewport center and
    // hold the result throughout the frame, avoiding scanline-shaped warping.
    const int camera=presentation_world_x_[0];
    const int center_x=camera+128, center_y=presentation_world_y_[0]+112;
    if(center_x<0 || center_x>=8192 || center_y<0 || center_y>=10240) return;
    const unsigned row=unsigned(center_y)/128, address=profile_->wram_map_combo;
    const unsigned combo=wram[address]|(wram[address+1]<<8);
    const auto valid=[&](int column) {
        return column>=0 && column<32 && (rom_[profile_->rom_map_sectors+row*32+unsigned(column)]>>3)==combo;
    };
    int left=center_x/256, right=left+1;
    if(!valid(left)) return;
    while(valid(left-1)) --left;
    while(valid(right)) ++right;
    left*=256; right*=256;
    const int width=int(presentation_width_), margin=(width-256)/2;
    const int available=right-left;
    // origin is the displayed world's left edge. The derived shift converts
    // back to native coordinates for tile/sprite sampling; clip bounds remain
    // in centered output coordinates, so HUD placement never follows the shift.
    const int origin=available>=width ? std::clamp(camera-margin,left,right-width) : left-(width-available)/2;
    presentation_shift_x_=origin+margin-camera;
    presentation_clip_left_=left-origin-margin;
    presentation_clip_right_=right-origin-margin;
}

uint16_t Bus::presentation_map_tile(int tile_x, int tile_y, unsigned bg) const {
    // Read-only equivalents of C0A156/C0A1CE and C00FCB/C00E16. No map-cache
    // loads, event processing, entity traversal, or spawn routine is invoked.
    unsigned block=0;
    if (tile_x>=0 && tile_x<1024 && tile_y>=0 && tile_y<1280) {
        const unsigned bx=unsigned(tile_x)/4, by=unsigned(tile_y)/4;
        const unsigned combo=rom_[profile_->rom_map_sectors+(by&~3u)*8+(bx>>3)]>>3;
        const unsigned address=profile_->wram_map_combo;
        if (combo==(unsigned(wram[address])|(unsigned(wram[address+1])<<8))) {
            const auto& chunks=profile_->rom_map_chunks;
            const unsigned index=(by>>3)*256+bx;
            const unsigned high=rom_[chunks[(by&4)?9:8]+index];
            block=rom_[chunks[by&7]+index]|(((high>>((by&3)*2))&3)<<8);
        }
    }
    // REPLACE_BLOCK has already applied source event changes to these loaded
    // arrangements. Using them preserves the existing event state naturally.
    const unsigned arrangement=profile_->wram_map_arrangements+block*32+((unsigned(tile_y)&3)*4+(unsigned(tile_x)&3))*2;
    const uint16_t tile=wram[arrangement]|(wram[arrangement+1]<<8);
    return bg==0 ? tile : (tile&1023)<384 ? tile|0x2000 : 0;
}

// Native tiles come from the real VRAM ring. Only exposed continuation uses
// source map/text data; this prevents stale offscreen cache entries from being
// mistaken for authored scenery without asking the game to load more cells.
uint16_t Bus::presentation_tile(unsigned bg, int x, unsigned y, uint16_t original) const {
    if (presentation_world_map_ && bg<2 && (x<0 || x>=256)) {
        const int wx=presentation_world_x_[bg]+x, wy=presentation_world_y_[bg]+int(y);
        const int tx=wx>=0?wx/8:(wx-7)/8, ty=wy>=0?wy/8:(wy-7)/8;
        original=presentation_map_tile(tx,ty,bg);
    }
    if (bg || presentation_lumine_phase_<0) return original;
    const unsigned row=((y+bg_y_[0])&255)/8;
    if (row<12 || row>=20) return original;
    // Select the native 240-pixel patch's occurrence nearest the centered
    // viewport. Additional columns come from the prebuilt text, not from the
    // 64-column tilemap ring wrapping back into an earlier word of the message.
    int start=40*8;
    while (start+120-int(bg_x_[0])>384) start-=512;
    while (start+120-int(bg_x_[0])< -128) start+=512;
    const int relative=x+int(bg_x_[0])-start;
    const int column=relative>=0 ? relative/8 : (relative-7)/8;
    // This also covers authored patch columns that lie outside the native
    // viewport. The world-map extension above must not replace those letters
    // with the underlying wall when the map camera exposes them in a margin.
    const int source_column=presentation_lumine_phase_/2+column;
    if (source_column<0 || unsigned(source_column)>=presentation_lumine_columns_) return 0x0c10;
    const unsigned source=profile_->wram_lumine_maps[presentation_lumine_phase_&1]+unsigned(source_column)*16+(row-12)*2;
    return wram[source]|(wram[source+1]<<8);
}

void Bus::prepare_presentation_effects() {
    const auto ram_word=[this](unsigned address) { return unsigned(wram[address])|(unsigned(wram[address+1])<<8); };
    const auto& source=*profile_;
    for (unsigned index=0;index<256;++index) presentation_reference_palette_[index]=palette(index);
    presentation_effect_layers_=0;
    presentation_psi_layer_=0;
    presentation_reference_cgwsel_=ppu_[0x30];
    presentation_reference_cgadsub_=ppu_[0x31];
    presentation_reference_fixed_=fixed_color_;

    if (ram_word(source.wram_battle_flag)) {
        // SHOW_PSI_ANIMATION chooses its overlay from the loaded background's
        // depth. Enemy targets use duplicate OBJ palettes 12..15, whose normal
        // colors remain in palettes 8..11. No historical picture is required.
        const bool psi=wram[source.wram_psi_animation] && wram[source.wram_psi_animation+10] &&
            wram[source.wram_psi_animation+7]<wram[source.wram_psi_animation+8];
        if (psi) {
            const unsigned pointer=ram_word(source.wram_psi_animation+44);
            if (pointer>=source.wram_palettes && pointer<source.wram_palettes+512 && !((pointer-source.wram_palettes)&1)) {
                presentation_psi_layer_=wram[source.wram_bg_records[0]+1]==2?2u:1u;
                presentation_psi_palette_first_=(pointer-source.wram_palettes)/2+wram[source.wram_psi_animation+7];
                presentation_psi_palette_last_=(pointer-source.wram_palettes)/2+wram[source.wram_psi_animation+8];
            }
        }
        for (unsigned target=0;target<4;++target) {
            // Targets can remain set after an attack, and KO/revive reuse the
            // independent fade counters. Only the currently cycling PSI owns
            // this color suppression; gradual return/death fades stay original.
            if (psi && ram_word(source.wram_psi_targets+target*2))
                for (unsigned index=192+target*16;index<208+target*16;++index)
                    presentation_reference_palette_[index]=palette(index-64);
        }
        if (wram[source.wram_swirl_timer] && ppu_[0x30]==0x10 && ppu_[0x31]==0x3f)
            presentation_reference_fixed_=0;
        const bool red_green=ram_word(source.wram_flash_timers[0]) || ram_word(source.wram_flash_timers[1]);
        if (red_green && ppu_[0x30]==0 && ppu_[0x31]==0x3f) {
            // SMAAAASH/Giygas flashes temporarily override the normal layer
            // configuration with fixed red/green addition. Recover only that
            // configuration's color math; current scroll/sprites/windows stay.
            const unsigned config=ram_word(source.wram_current_layer_config);
            if (config<10 && source.rom_layer_config+31+config<rom_.size()) {
                presentation_reference_cgwsel_=rom_[source.rom_layer_config+21+config];
                presentation_reference_cgadsub_=rom_[source.rom_layer_config+31+config];
                presentation_reference_fixed_=0;
            }
        }
        const unsigned reflect=ram_word(source.wram_flash_timers[2]);
        const unsigned green_background=ram_word(source.wram_flash_timers[3]);
        if ((green_background?green_background:reflect)&2) {
            // C2DF2E replaces selected background entries with white/black;
            // palette2 retains the original colors. The generator stores the
            // *next* cycle step after uploading a rotation, so undo one step
            // when mapping a displayed palette slot back to its original.
            const bool four_bit=wram[source.wram_bg_records[0]+1]==4;
            for (unsigned record_index=0;record_index<(four_bit?1u:2u);++record_index) {
                const unsigned record=source.wram_bg_records[record_index];
                if (!wram[record]) continue;
                const unsigned pointer=ram_word(record+76);
                if (pointer<source.wram_palettes || pointer>=source.wram_palettes+512 || ((pointer-source.wram_palettes)&1)) continue;
                const unsigned base=(pointer-source.wram_palettes)/2;
                const unsigned count=four_bit?16:4;
                for (unsigned index=1;index<count && base+index<256;++index) {
                    const auto actual=palette(base+index);
                    if (actual!=(green_background?0:0x7fff)) continue;
                    unsigned original=index;
                    const unsigned style=wram[record+3];
                    const auto cycle=[&](unsigned first,unsigned last,unsigned next,bool ping_pong) {
                        if (first>last || last>=count || index<first || index>last) return false;
                        const unsigned length=last-first+1;
                        const unsigned period=ping_pong?length*2:length;
                        const unsigned step=(next+period-1)%period;
                        unsigned offset=ping_pong?(index-first+step)%period:(index-first+length-step)%length;
                        if (ping_pong && offset>=length) offset=period-1-offset;
                        original=first+offset;
                        return true;
                    };
                    // Style 2 uploads the second range first; the first range
                    // wins if authored ranges overlap, matching the source.
                    if (!wram[record+2]) {
                        if (style==2) cycle(wram[record+6],wram[record+7],wram[record+9],false);
                        if (style>=1 && style<=3) cycle(wram[record+4],wram[record+5],wram[record+8],style==3);
                    }
                    presentation_reference_palette_[base+index]=ram_word(record+44+original*2)&0x7fff;
                }
            }
        }
        if (green_background==2 && palette(0)==0x03e0) presentation_reference_palette_[0]=0;
    }

    for (unsigned slot=0;slot<30;++slot) {
        const unsigned event=ram_word(source.wram_entity_script+slot*2);
        const unsigned phase=ram_word(source.wram_entity_var0+slot*2);
        const bool reflected=event==source.lightning_events[0] && phase==1;
        const bool strike=(event==source.lightning_events[1] || event==source.lightning_events[2]) &&
                          (phase==2 || phase==0 || phase==10);
        if (reflected || strike) {
            // These scripts temporarily use BG3's text tilemap for lightning;
            // it is cleared before ordinary dialogue resumes. The other layers
            // keep moving normally underneath the removed effect in reference.
            presentation_effect_layers_|=4;
            if (strike && ppu_[0x30]==0x10 && ppu_[0x31]==0x33)
                presentation_reference_fixed_=0;
        }
        if (event==source.gas_flash_event && (ppu_[5]&7)==3 && ppu_[7]==0x78 && ppu_[8]==0x7c && presentation_gas_palettes_valid_) {
            // Compare against the exact authored flash palette. BUFFER also
            // contains a procedural BG2 palette, so using it as a blanket
            // replacement would alter normal gas-station colors between flashes.
            for (unsigned index=0;index<256;++index)
                if (palette(index)==presentation_gas_palettes_[1][index])
                    presentation_reference_palette_[index]=presentation_gas_palettes_[0][index];
        }
    }
}

// Resolve main/subscreen winners first, then apply window clipping, color
// arithmetic, and brightness. Presentation policy can choose which scenery
// to sample, but it never changes these PPU registers or native composition.
uint32_t Bus::compose_pixel(int x, unsigned y, const Pixel& object, bool margin, uint32_t* effect_reference) const {
    const bool outside_native=x<0 || x>=256;
    const bool outside_world=margin && presentation_world_map_ && (x<presentation_clip_left_ || x>=presentation_clip_right_);
    Pixel main{outside_world?uint16_t(0):palette(0),-1,5,true,0}, sub{fixed_color_,-1,5,true};
    Pixel reference_main=main, reference_sub=sub;
    if (effect_reference) {
        if (!outside_world) reference_main.color=presentation_reference_palette_[0];
        reference_sub.color=presentation_reference_fixed_;
    }
    // Windows remain anchored to the native picture. Extending their edge
    // membership preserves full-screen fades and clips in the extra picture.
    const unsigned window_x=unsigned(std::clamp(x,0,255));
    for (unsigned layer=0;layer<5;++layer) {
        const bool scenery=presentation_layer_mask_&(1<<layer);
        if (margin && ((outside_native && !scenery) || (outside_world && scenery))) continue;
        // The Japanese logo's red field reaches the authored picture edges.
        // Extend those BG edge samples only; repeating tilemaps would duplicate
        // logo letters/copyright, and repeating OBJ would duplicate sprites.
        const int sample_x=margin && outside_native && presentation_jp_title_ && layer<2
            ? std::clamp(x,0,255) : x+((margin && scenery)?presentation_shift_x_:0);
        const Pixel p=layer==4?object:background(layer,sample_x,y+1,margin && scenery);
        if (p.priority<0) continue;
        const bool masked=window(layer,window_x);
        if ((ppu_[0x2c]&(1<<layer)) && !((ppu_[0x2e]&(1<<layer))&&masked) && p.priority>main.priority) main=p;
        if ((ppu_[0x2d]&(1<<layer)) && !((ppu_[0x2f]&(1<<layer))&&masked) && p.priority>sub.priority) sub=p;
        const bool psi_color=(presentation_psi_layer_&(1u<<layer)) &&
            p.palette_index>=presentation_psi_palette_first_ && p.palette_index<=presentation_psi_palette_last_;
        if (effect_reference && !(presentation_effect_layers_&(1u<<layer)) && !psi_color) {
            auto clean=p;
            if (clean.palette_index<256) clean.color=presentation_reference_palette_[clean.palette_index];
            if ((ppu_[0x2c]&(1<<layer)) && !((ppu_[0x2e]&(1<<layer))&&masked) && clean.priority>reference_main.priority) reference_main=clean;
            if ((ppu_[0x2d]&(1<<layer)) && !((ppu_[0x2f]&(1<<layer))&&masked) && clean.priority>reference_sub.priority) reference_sub=clean;
        }
    }
    const bool inside=window(5,window_x);
    const auto affected=[inside](unsigned setting) { return setting==3 || (setting==1&&!inside) || (setting==2&&inside); };
    // Run the same window/color-math/brightness arithmetic for both pictures.
    // The alternate winners and palette live only in host presentation state.
    const auto finish=[&](const Pixel& main, const Pixel& sub, uint8_t cgwsel, uint8_t cgadsub, uint16_t fixed) {
        const bool clipped=affected(cgwsel>>6);
        unsigned color=clipped?0:main.color;
        // Color math works on independent five-bit channels. Saturate only after
        // the optional halve operation so bright addition retains its expected
        // half-intensity result; backdrop outside a clamped region stays black.
        if (!(outside_world && main.layer==5) && !affected((cgwsel>>4)&3) && main.math && (cgadsub&(1<<main.layer))) {
            const unsigned other=(cgwsel&2)?sub.color:fixed;
            const bool half=(cgadsub&0x40)&&!clipped&&(!(cgwsel&2)||sub.priority>=0);
            unsigned mixed=0;
            for (unsigned shift=0;shift<15;shift+=5) {
                const int a=(color>>shift)&31, b=(other>>shift)&31;
                int c=(cgadsub&0x80)?std::max(0,a-b):(a+b);
                if (half) c/=2;
                mixed|=unsigned(std::min(31,c))<<shift;
            }
            color=mixed;
        }
        const unsigned brightness=ppu_[0]&15;
        const auto component=[brightness](unsigned value) {
            const auto scaled=(value*brightness+7)/15;
            return (scaled<<3)|(scaled>>2);
        };
        return 0xff000000|(component(color&31)<<16)|(component((color>>5)&31)<<8)|component((color>>10)&31);
    };
    const auto result=finish(main,sub,ppu_[0x30],ppu_[0x31],fixed_color_);
    if (effect_reference) *effect_reference=finish(reference_main,reference_sub,
        presentation_reference_cgwsel_,presentation_reference_cgadsub_,presentation_reference_fixed_);
    return result;
}

uint32_t Bus::compose_presentation_pixel(int x, unsigned y, const Pixel& object, bool margin) {
    if (!presentation_effects_enabled_) return compose_pixel(x,y,object,margin);
    const unsigned output_x=unsigned(x+int((presentation_width_-256)/2));
    const auto index=std::size_t(y)*presentation_width_+output_x;
    auto& reference=presentation_effect_reference_[index];
    const auto pixel=compose_pixel(x,y,object,margin,&reference);
    presentation_effect_mask_[index]=pixel!=reference;
    return pixel;
}

// Fast path copies the native center byte-for-byte and renders only margins.
// When a boundary shifts scenery, recomposition affects the presentation copy
// alone. Sprite sampling is const, preserving the canonical overflow flags.
void Bus::render_presentation_margins(unsigned y) {
    if (presentation_width_==256) return;
    const unsigned margin=(presentation_width_-256)/2;
    auto output=presentation_framebuffer_.begin()+y*presentation_width_;
    std::copy_n(framebuffer.begin()+y*256,256,output+margin);
    if (ppu_[0]&0x80) {
        std::fill_n(output,margin,0xff000000);
        std::fill_n(output+margin+256,margin,0xff000000);
        return;
    }
    prepare_presentation_scene();
    std::array<Pixel,1024> objects{};
    if ((ppu_[0x2c]|ppu_[0x2d])&16)
        sprite_pixels(y,std::span<Pixel>(objects.data(),presentation_width_),-int(margin)+presentation_shift_x_);
    if (presentation_shift_x_ || (presentation_world_map_ && (presentation_clip_left_>0 || presentation_clip_right_<256))) {
        for (unsigned x=0;x<presentation_width_;++x)
            output[x]=compose_presentation_pixel(int(x)-int(margin),y,objects[x],true);
        return;
    }
    for (unsigned x=0;x<margin;++x) {
        output[x]=compose_presentation_pixel(int(x)-int(margin),y,objects[x],true);
        const unsigned right=margin+256+x;
        output[right]=compose_presentation_pixel(256+int(x),y,objects[right],true);
    }
}

// Always produce the canonical 256-pixel scanline first. Its framebuffer and
// status side effects are independent of whether a wider host buffer exists;
// presentation is an additional consumer of the completed hardware state.
void Bus::render_line(unsigned y) {
    if (!y) {
        // Latch the scene alongside its first visible row, before any pixel or
        // metadata is written. A transition can happen inside one CPU step, so
        // waiting for the frontend's next iteration would repeat one gas frame
        // or stretch one logo frame. Keep the user's requested width separately.
        presentation_frame_aspect_=(ppu_[5]&7)==3 && ppu_[7]==0x78 && ppu_[8]==0x7c?4.0/3:0.0;
        resize_presentation_width(presentation_frame_aspect_?256:requested_presentation_width_);
    }
    if (presentation_effects_enabled_) prepare_presentation_effects();
    if (ppu_[0]&0x80) {
        std::fill_n(framebuffer.begin()+y*256,256,0xff000000);
        if (presentation_effects_enabled_) {
            std::fill_n(presentation_effect_mask_.begin()+y*presentation_width_,presentation_width_,0);
            std::fill_n(presentation_effect_reference_.begin()+y*presentation_width_,presentation_width_,0xff000000);
        }
    }
    else {
        std::array<Pixel,256> objects{};
        if ((ppu_[0x2c]|ppu_[0x2d])&16) sprites(y,objects);
        for (unsigned x=0;x<256;++x) framebuffer[y*256+x]=compose_presentation_pixel(x,y,objects[x],false);
    }
    render_presentation_margins(y);
}

} // namespace eb
