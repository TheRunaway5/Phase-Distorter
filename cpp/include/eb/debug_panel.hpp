#pragma once

#include <SDL.h>
#include "eb/controller_settings.hpp"
#include "eb/game_debug.hpp"
#include "eb/snapshot_types.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>

namespace eb {
struct DisplaySettings;

// Snapshots describe only application-managed default caches. The UI never
// derives a filename to delete, opens a pack, or touches ROM/save files itself.
struct AssetCacheInfo {
    std::string title, path;
    bool present = false;
    bool active = false;
};

enum class PanelAction {
    ToggleFullscreen, SwitchEarthBound, SwitchMother2, ClearEarthBoundAssets, ClearMother2Assets
};

// A copied display snapshot: the panel has no access to mutable game hardware.
struct DebugDiagnostics {
    // Counters are observations only; changing the panel cannot write them back.
    std::uint64_t frames{}, master_clocks{}, cpu_instructions{}, spc_instructions{}, audio_frames{};
    std::string cpu_state, spc_state;
    std::string game_title = "EarthBound";
    int source_width = 256, source_height = 224;
    int drawable_width{}, drawable_height{};
    bool fullscreen = false;
    bool machine_debug_available = true;
    GameDebugSnapshot game_debug;
    std::array<AssetCacheInfo, 2> cache;
    std::string custom_asset_status;
    std::vector<SaveStateSnapshotInfo> snapshots;
    std::string snapshot_status;
    bool snapshots_available = false;
    ControllerSnapshot controller;
};

// The SDL window and current OpenGL context must outlive this object.
class DebugPanel {
public:
    DebugPanel(SDL_Window* window, SDL_GLContext context);
    ~DebugPanel();
    DebugPanel(const DebugPanel&) = delete;
    DebugPanel& operator=(const DebugPanel&) = delete;

    // Feed every event here before handling gameplay. F1 toggles settings and
    // Escape cancels a confirmation or closes settings. The top bar
    // alone does not capture keyboard/controller input; true owns this event.
    bool process_event(const SDL_Event& event);
    bool captures_game_input() const;
    bool visible() const; // Floating settings window.
    void set_visible(bool visible);
    // One-shot requests are handled by the application at a safe frame boundary.
    std::optional<PanelAction> take_action();
    void set_action_status(std::string status);
    const GameDebugSettings& game_settings() const;
    void set_game_settings(GameDebugSettings settings);
    const ControllerSettings& controller_settings() const;
    void set_controller_settings(ControllerSettings settings);
    std::optional<GameDebugRequest> take_game_action();
    std::optional<SaveStateSnapshotRequest> take_snapshot_action();
    // Logical SDL height of the top bar. Windowed mode reserves this strip;
    // fullscreen reveals it as an overlay only while the pointer is at the top.
    float menu_height() const;
    // Call after drawing the game framebuffer and before swapping the window.
    // Debug controls emit commands; the UI never receives mutable hardware.
    void draw(DisplaySettings& settings, const DebugDiagnostics& diagnostics);

private:
    // Keep ImGui types and backend ownership out of the public frontend API.
    struct Impl;
    std::unique_ptr<Impl> impl_;
};

// Startup UI only. The caller validates/imports the requested path and reports
// errors. This object never reads game data or creates game hardware.
class AssetImportPanel {
public:
    AssetImportPanel(SDL_Window* window, SDL_GLContext context);
    ~AssetImportPanel();
    AssetImportPanel(const AssetImportPanel&) = delete;
    AssetImportPanel& operator=(const AssetImportPanel&) = delete;
    void process_event(const SDL_Event& event);
    void draw();
    // Consume a one-shot request so holding a button cannot repeat extraction.
    // Errors are reported back through set_error without destroying the form.
    std::optional<std::string> take_import_request();
    bool exit_requested() const;
    void set_error(std::string error);
    void set_status(std::string status);
private:
    struct Impl;
    std::unique_ptr<Impl> impl_;
};
} // namespace eb
