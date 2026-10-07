#pragma once
#include "eb/game_session.hpp"
#include "eb/native_session.hpp"
#include "eb/launch_options.hpp"
#include "eb/session_storage.hpp"
#include <array>
#include <stdexcept>
#include <utility>

namespace eb {
// Desktop-only choice of actual session implementations. The native branch
// has its own gameplay owners; it never constructs the compatibility machine.
class DesktopSession {
    std::unique_ptr<GameSession> compatibility_;
    std::unique_ptr<NativeSession> native_;
public:
    DesktopSession(std::span<const std::uint8_t> image,GameVersion version,const LaunchOptions &options) {
        if(options.native_continue_slot) {
            if(options.save.empty() || !std::filesystem::exists(native_path(options.save)))
                throw std::runtime_error("Native Continue requires an existing regional save (--save FILE)");
            std::array<std::uint8_t,0x2000> bytes{};
            load_save(options.save,bytes);
            native_=std::make_unique<NativeSession>(image,version,bytes,options.native_continue_slot);
        } else {
            compatibility_=std::make_unique<GameSession>(image,version,!options.original_timing);
            if(!options.original_timing) {
                compatibility_->set_logical_clock_policy(LogicalClockPolicy::ActorFrames);
                compatibility_->enable_native_sprite_runtime();
            }
            if(!options.save.empty()) load_save(options.save,compatibility_->save_memory());
        }
    }
    bool native() const noexcept { return bool(native_); }
    std::uint64_t advance_frame(std::uint16_t buttons,std::uint64_t limit=0) {
        return native_?native_->advance_frame(buttons,limit):compatibility_->advance_frame(buttons,limit);
    }
    std::uint64_t frames() const { return native_?native_->frames():compatibility_->frames(); }
    std::uint64_t steps() const { return native_?native_->steps():compatibility_->steps(); }
    PresentationFrame presentation_frame() const { return native_?native_->presentation_frame():compatibility_->presentation_frame(); }
    std::span<const std::uint32_t,256*224> native_pixels() const { return native_?native_->native_pixels():compatibility_->native_pixels(); }
    void configure_presentation(unsigned width,bool flashing,bool direct) {
        if(native_) native_->configure_presentation(width,flashing,direct);
        else compatibility_->configure_presentation(width,flashing,direct);
    }
    void observe_completed_frames(GameSession::FrameObserver observer) {
        if(native_) native_->observe_completed_frames(std::move(observer));
        else compatibility_->observe_completed_frames(std::move(observer));
    }
    std::vector<std::int16_t> take_audio_samples() { return native_?native_->take_audio_samples():compatibility_->take_audio_samples(); }
    std::span<const std::uint8_t> save_memory() const { return native_?native_->save_memory():std::as_const(*compatibility_).save_memory(); }
    SessionDiagnostics diagnostics(bool details=false) const { return native_?native_->diagnostics(details):compatibility_->diagnostics(details); }
    GameDebug &debug() {
        if(native_) throw std::logic_error("Machine debugging is unavailable in a native gameplay session");
        return compatibility_->debug();
    }
    std::vector<std::uint8_t> save_snapshot() const {
        if(native_) throw std::logic_error("Native gameplay continuations do not use machine snapshots");
        return compatibility_->save_snapshot();
    }
    void load_snapshot(std::span<const std::uint8_t> bytes) {
        if(native_) throw std::logic_error("Native gameplay continuations cannot load machine snapshots");
        compatibility_->load_snapshot(bytes);
    }
};
} // namespace eb
