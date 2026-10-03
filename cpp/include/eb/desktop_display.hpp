#pragma once

#include "eb/game_version.hpp"
#include "eb/presentation_frame.hpp"
#include "eb/snapshot_types.hpp"
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>

namespace eb {
struct LaunchOptions;
struct DisplaySettings;
struct GameAssets;
struct SessionDiagnostics;
class GameDebug;

// Owns the desktop window, GL presentation, settings UI and physical input.
// Simulation is supplied as copied diagnostics and borrowed picture views.
class DesktopDisplay {
  public:
    DesktopDisplay(const LaunchOptions &options, DisplaySettings &settings);
    ~DesktopDisplay();
    DesktopDisplay(const DesktopDisplay &) = delete;
    DesktopDisplay &operator=(const DesktopDisplay &) = delete;

    GameAssets import_assets(std::string &path, const std::string &error,
                             const std::string &default_directory, bool lock_game, GameVersion game);
    void start_panel(bool visible, const std::string &game_title, const std::string &preferences,
                     GameVersion game, const std::string &custom_assets);
    bool poll_events(std::uint16_t &physical_buttons);
    void update_debug(GameDebug &debug);
    void adopt_debug(const GameDebug &debug);
    std::optional<GameVersion> take_game_request();
    std::optional<SaveStateSnapshotRequest> take_snapshot_action();
    void set_snapshot_state(std::vector<SaveStateSnapshotInfo> snapshots, std::string status, bool available);

    unsigned render_width() const;
    bool fullscreen() const;
    bool wants_register_diagnostics() const;
    double frame_rate() const;
    double presentation_rate() const;
    void update_swap_interval();
    void present(const SessionDiagnostics &diagnostics, PresentationPicture picture,
                 const std::string &capture = {});

  private:
    struct Impl;
    std::unique_ptr<Impl> impl_;
};
} // namespace eb
