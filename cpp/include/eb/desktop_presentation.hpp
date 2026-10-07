#pragma once

#include "eb/display_settings.hpp"
#include "eb/game_session.hpp"

namespace eb {
// Apply the same host policy at startup, preference changes, and restoration.
template <class Session>
inline void configure_desktop_presentation(Session &session, const DisplaySettings &settings,
                                           unsigned width) {
    session.configure_presentation(width, settings.reduce_flashing,
                                   settings.high_frame_rate() && settings.direct_rendering);
}
} // namespace eb
