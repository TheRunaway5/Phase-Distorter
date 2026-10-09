#include "eb/native/world_music.hpp"
#include "eb/native/npcs/interaction.hpp"
#include "eb/native/story/ticks.hpp"
#include "eb/native_audio.hpp"
#include <stdexcept>

namespace eb::native {
WorldMusic::WorldMusic(const WorldMusicData &data, WorldMusicState &state,
                      const npcs::InteractionState &leader, std::span<const std::uint8_t> flags,
                      const story::TickState &clock, NativeAudio &audio)
    : data_(data), state_(state), leader_(leader), flags_(flags), clock_(clock), audio_(audio) {
    if (flags.size() != 128 || audio.version() != data.version())
        throw std::invalid_argument("World music needs matching audio and actual authored flags");
}
void WorldMusic::select(std::uint16_t x, std::uint16_t y) {
    if(state_.continuation_abandoned)throw std::logic_error("An abandoned sector music continuation invalidated music work");
    if (state_.disable_changes) return;
    const auto group = data_.group(x, y);
    const auto row = data_.select(group, flags_);
    const auto &entry = data_.entry(group, row);
    state_.selected = std::array{group, row};
    state_.next_track = entry.track;
    if (!state_.do_map_fade && state_.next_track != state_.current_map_track) audio_.driver_effect(2);
}
void WorldMusic::apply_sector() {
    if(state_.continuation_abandoned)throw std::logic_error("An abandoned sector music continuation invalidated music work");
    if (state_.disable_changes || state_.next_track == state_.current_map_track) return;
    if (!state_.selected) throw std::logic_error("World music lacks its actual selected entry");
    const auto selected = *state_.selected;
    const auto &entry = data_.entry(selected[0], selected[1]);
    state_.current_map_track = state_.next_track;
    audio_.change_music(state_.next_track, clock_.disabled_transitions);
    audio_.driver_effect(entry.effect);
}
void WorldMusic::restore_sector() {
    if(state_.continuation_abandoned)throw std::logic_error("An abandoned sector music continuation invalidated music work");
    select(leader_.leader_x, leader_.leader_y);
    audio_.change_music(state_.next_track, clock_.disabled_transitions);
}
void WorldMusic::reload() {
    if(state_.continuation_abandoned)throw std::logic_error("An abandoned sector music continuation invalidated music work");
    state_.current_map_track = 0xffff;
    select(leader_.leader_x, leader_.leader_y);
    if (leader_.walking_style == 3) audio_.change_music(82, clock_.disabled_transitions);
    else apply_sector();
}
void WorldMusic::script_music(const dialogue::ScriptMusicRequest &request) {
    if(state_.continuation_abandoned)throw std::logic_error("An abandoned sector music continuation invalidated music work");
    switch(request.kind) {
    case dialogue::ScriptMusicKind::Change:
        audio_.change_music(request.value,clock_.disabled_transitions);
        state_.current_map_track = state_.next_track = request.value;
        return;
    case dialogue::ScriptMusicKind::Stop: audio_.stop_music(); return;
    case dialogue::ScriptMusicKind::Effect: audio_.driver_effect(request.value); return;
    }
    throw std::invalid_argument("Unknown authored music command");
}
} // namespace eb::native
