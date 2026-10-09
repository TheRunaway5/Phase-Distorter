// Sources: src/audio/{initialize_music_subsystem,load_spc700_data,change_music,
// play_sound,stop_music,set_num_channels,get_audio_bank,wait_for_spc700}.asm;
// src/system/process_sfx_queue.asm and C0ABBD/C0AC0C/C0AC20. Audio content is
// imported from the purchased regional image, never embedded in this module.
#include "eb/native_audio.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "eb/snes_audio_dsp.hpp"
#include <array>
#include <stdexcept>

namespace eb {
struct NativeAudio::State {
    GameVersion version;
    struct Block { std::uint16_t destination; std::vector<std::uint8_t> data; };
    using Pack = std::vector<Block>;
    std::array<std::array<std::uint8_t, 3>, 191> datasets{};
    std::array<Pack, 169> packs;
    std::array<Pack, 2> channels;
    std::array<std::uint8_t, 4> to_audio{}, from_audio{};
    Spc700AudioCpu cpu{to_audio, from_audio};
    SnesAudioDsp dsp{cpu};
    std::array<std::uint8_t, 8> effects{};
    std::uint8_t start{}, end{}, sound_flip{}, effect_flip{};
    std::uint16_t track = 0xffff, primary = 0xffff, secondary = 0xffff,
                  sequence = 0xffff, base_secondary = 0xffff;
    std::uint64_t clocks{};
    NativeAudioClock *physical_clock{};
    bool initialized{}, failed{};

    State(std::span<const std::uint8_t> image, GameVersion version) : version(version) {
        unsigned table, pointers, stereo;
        switch (version) {
        case GameVersion::US: table = 0x4f70a; pointers = 0x4f947; stereo = 0xac2c; break;
        case GameVersion::JP: table = 0x4caa5; pointers = 0x4cce2; stereo = 0xac0b; break;
        default: throw std::invalid_argument("Unsupported audio region");
        }
        const auto byte = [&](unsigned offset) {
            if (offset >= image.size()) throw std::invalid_argument("Truncated audio content");
            return image[offset];
        };
        for (unsigned i = 0; i < datasets.size(); ++i)
            for (unsigned j = 0; j < 3; ++j) datasets[i][j] = byte(table + i * 3 + j);
        const auto import_pack = [&](unsigned offset) {
            Pack pack;
            // The source's zero length terminates at the driver's fixed $0500
            // entry. Each data block carries its real destination and length.
            for (unsigned blocks = 0;; ++blocks) {
                if (blocks > 65536) throw std::invalid_argument("Unterminated audio pack");
                const unsigned length = byte(offset) | (unsigned(byte(offset + 1)) << 8);
                if (!length) break;
                const std::uint16_t destination = byte(offset + 2) | (unsigned(byte(offset + 3)) << 8);
                offset += 4;
                if (offset > image.size() || length > image.size() - offset)
                    throw std::invalid_argument("Truncated audio pack");
                pack.push_back({destination, {image.begin() + offset, image.begin() + offset + length}});
                offset += length;
            }
            return pack;
        };
        for (unsigned i = 0; i < packs.size(); ++i) {
            const auto bank = std::uint8_t(byte(pointers + i * 3) + (version == GameVersion::JP ? 0xe2 : 0));
            const auto address = unsigned(byte(pointers + i * 3 + 1)) |
                                 (unsigned(byte(pointers + i * 3 + 2)) << 8);
            packs[i] = import_pack(((unsigned(bank) << 16) | address) & 0x3fffff);
        }
        for (unsigned i = 0; i < 2; ++i) channels[i] = import_pack(stereo + i * 7);
    }
    void check() const {
        if (failed) throw std::logic_error("Native audio failed during an ordered command");
    }
    void advance(unsigned elapsed) {
        while(elapsed) {
            const auto amount = physical_clock ? physical_clock->next_quantum(elapsed) : elapsed;
            if(!amount || amount>elapsed)throw std::logic_error("Audio clock returned an invalid quantum");
            cpu.advance_master_clocks(amount);
            clocks += amount;elapsed -= amount;
            if(physical_clock)physical_clock->elapsed(amount);
        }
    }
    template<class Predicate> void wait(Predicate ready) {
        // A missing driver receipt is an error; it cannot be acknowledged by
        // the native gameplay caller. Clock only the actual existing SPC/DSP.
        constexpr unsigned deadline = 21477272 * 2;
        unsigned elapsed = 0;
        while (!ready()) {
            if (elapsed >= deadline) { failed = true; throw std::runtime_error("Audio driver handshake timed out"); }
            advance(24);
            elapsed += 24;
        }
    }
    void load(const Pack &pack) {
        check();
        if (from_audio[0] != 0xaa || from_audio[1] != 0xbb) {
            to_audio[2] = to_audio[3] = to_audio[0] = to_audio[1] = 0;
            wait([&] {
                to_audio[0] = 0xff;
                return from_audio[0] == 0xaa && from_audio[1] == 0xbb;
            });
        }
        if(physical_clock)physical_clock->nmi_enabled(false);
        std::uint8_t token = 0xcc;
        for (const auto &block : pack) {
            to_audio[2] = std::uint8_t(block.destination);
            to_audio[3] = std::uint8_t(block.destination >> 8);
            to_audio[1] = 1;
            to_audio[0] = token;
            wait([&] { return from_audio[0] == token; });
            for (unsigned i = 0; i < block.data.size(); ++i) {
                const auto counter = std::uint8_t(i);
                to_audio[0] = counter;
                to_audio[1] = block.data[i];
                wait([&] { return from_audio[0] == counter; });
            }
            // The final counter is length-1. Source carry was clear on the
            // successful comparison; repeated +3 skips a zero handshake token.
            token = std::uint8_t(block.data.size() - 1);
            do token = std::uint8_t(token + 3); while (!token);
        }
        to_audio[2] = 0; to_audio[3] = 5;
        to_audio[1] = 0; to_audio[0] = token;
        wait([&] { return from_audio[0] == token; });
        wait([&] { return from_audio[0] == 0 && from_audio[1] == 0; });
        if(physical_clock)physical_clock->nmi_enabled(true);
    }
    void require_initialized() const {
        check();
        if (!initialized) throw std::logic_error("Native audio has not been initialized");
    }
};

NativeAudio::NativeAudio(std::span<const std::uint8_t> image, GameVersion version)
    : state_(std::make_unique<State>(image, version)) {}
NativeAudio::~NativeAudio() = default;
void NativeAudio::bind_clock(NativeAudioClock &clock) {
    state_->check();
    if(state_->physical_clock && state_->physical_clock!=&clock)
        throw std::logic_error("Native audio already has its stable physical clock");
    state_->physical_clock=&clock;
}
bool NativeAudio::uses_clock(const NativeAudioClock &clock) const noexcept {
    return state_->physical_clock==&clock;
}
void NativeAudio::initialize() {
    auto &s = *state_; s.check();
    if (s.initialized) throw std::logic_error("Native audio initialization repeated");
    s.sequence = s.primary = 0xffff;
    s.secondary = s.base_secondary = s.datasets[0][2];
    s.load(s.packs.at(s.secondary));
    s.initialized = true;
}
void NativeAudio::set_channels(bool stereo) { state_->require_initialized(); state_->load(state_->channels[stereo]); }
void NativeAudio::play_sound(std::uint16_t sound) {
    auto &s = *state_; s.require_initialized();
    const auto byte = std::uint8_t(sound);
    if (!byte) { s.to_audio[3] = 0x57; return; }
    s.effects[s.end] = byte | s.sound_flip;
    s.end = (s.end + 1) & 7;
    s.sound_flip ^= 0x80;
}
void NativeAudio::script_sound(const native::dialogue::ScriptSoundRequest &sound) {
    if (sound.kind == native::dialogue::ScriptSoundKind::QueueEffect) play_sound(sound.value);
    else { state_->require_initialized(); state_->to_audio[3] = sound.value; }
}
void NativeAudio::driver_effect(std::uint16_t effect) {
    auto &s = *state_; s.require_initialized();
    s.to_audio[1] = std::uint8_t(effect) | s.effect_flip;
    s.effect_flip ^= 0x80;
}
void NativeAudio::driver_parameter(std::uint16_t value) {
    state_->require_initialized();
    state_->to_audio[2] = std::uint8_t(value);
}
void NativeAudio::stop_music() {
    auto &s = *state_; s.require_initialized();
    s.to_audio[0] = 0;
    s.wait([&] { return s.from_audio[0] == 0; });
    s.track = 0xffff;
}
void NativeAudio::change_music(std::uint16_t track, std::uint16_t disabled_transitions) {
    auto &s = *state_; s.require_initialized();
    if (track == s.track) return;
    if (!track || track > s.datasets.size()) throw std::out_of_range("Music track is outside imported dataset");
    if (!disabled_transitions) play_sound(0);
    if (track < 160 || track > 167) { driver_effect(1); stop_music(); }
    s.track = track;
    const auto &set = s.datasets[track - 1];
    const auto load = [&](unsigned component, std::uint16_t &current) {
        const auto pack = set[component];
        if (pack == current || pack == 0xff || (component == 1 && pack == s.base_secondary)) return;
        current = pack;
        s.load(s.packs.at(pack));
    };
    load(0, s.primary); load(1, s.secondary); load(2, s.sequence);
    s.to_audio[0] = std::uint8_t(track);
}
void NativeAudio::publication() {
    auto &s = *state_; s.require_initialized();
    if (s.start != s.end) { source_write_sound_port(); source_advance_sound_queue(); }
}
void NativeAudio::source_write_sound_port() {
    auto &s=*state_;s.require_initialized();
    if(s.start==s.end)throw std::logic_error("Source sound publication requires a queued effect");
    s.to_audio[3]=s.effects[s.start];
}
void NativeAudio::source_advance_sound_queue() {
    auto &s=*state_;s.require_initialized();
    if(s.start==s.end)throw std::logic_error("Source sound publication requires its queued index");
    s.start=(s.start+1)&7;
}
void NativeAudio::advance_master_clocks(unsigned clocks) { state_->check(); state_->advance(clocks); }
std::vector<std::int16_t> NativeAudio::take_samples() { return state_->dsp.take_stereo_samples(); }
std::uint64_t NativeAudio::master_clocks() const noexcept { return state_->clocks; }
std::uint64_t NativeAudio::instructions() const noexcept { return state_->cpu.instruction_count; }
std::uint64_t NativeAudio::sample_frames() const noexcept { return state_->dsp.generated_stereo_frame_count(); }
std::uint16_t NativeAudio::current_track() const noexcept { return state_->track; }
std::uint8_t NativeAudio::sound_queue_start() const noexcept { return std::uint8_t(state_->start); }
std::uint8_t NativeAudio::sound_queue_end() const noexcept { return std::uint8_t(state_->end); }
GameVersion NativeAudio::version() const noexcept { return state_->version; }
bool NativeAudio::failed() const noexcept { return state_->failed; }
} // namespace eb
