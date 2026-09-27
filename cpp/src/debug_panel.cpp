#include "eb/debug_panel.hpp"
#include "eb/display_settings.hpp"

// Both panels are host UI only. The runtime panel edits display preferences and
// reads copied diagnostics; the startup panel emits paths for main to validate.
// Neither receives a bus, CPU, or mutable game-memory reference.

#include "imgui.h"
#include "backends/imgui_impl_opengl2.h"
#include "backends/imgui_impl_sdl2.h"

#include <algorithm>
#include <array>
#include <cmath>
#include <cctype>
#include <filesystem>
#include <stdexcept>
#include <utility>
#include <vector>

namespace eb {
struct DebugPanel::Impl {
    // Each panel owns its ImGui context and explicitly selects it before use.
    ImGuiContext* context{};
    bool visible{}, focus_next_frame{};
    bool bar_mouse_down{}, open_confirmation{}, cancel_confirmation{};
    float menu_height = 19.0f;
    std::optional<PanelAction> action, confirmation;
    unsigned confirmation_cache{};
    std::string action_status;
};

DebugPanel::DebugPanel(SDL_Window* window, SDL_GLContext context): impl_(std::make_unique<Impl>()) {
    IMGUI_CHECKVERSION();
    impl_->context = ImGui::CreateContext();
    auto& io = ImGui::GetIO();
    io.IniFilename = nullptr; // Display settings are owned by the frontend.
    io.LogFilename = nullptr;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    // Controller input stays with the game; this panel uses keyboard and mouse.
    ImGui::StyleColorsDark();
    auto& style = ImGui::GetStyle();
    style.WindowRounding = 8.0f;
    style.FrameRounding = 4.0f;
    style.WindowPadding = ImVec2(16.0f, 14.0f);
    style.ItemSpacing = ImVec2(10.0f, 10.0f);
    style.Colors[ImGuiCol_WindowBg] = ImVec4(0.075f, 0.085f, 0.11f, 0.98f);
    style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.12f, 0.19f, 0.27f, 1.0f);
    style.Colors[ImGuiCol_CheckMark] = ImVec4(0.35f, 0.75f, 0.95f, 1.0f);
    if (!ImGui_ImplSDL2_InitForOpenGL(window, context)) {
        ImGui::DestroyContext(impl_->context);
        throw std::runtime_error("Could not initialize the debug panel SDL backend");
    }
    if (!ImGui_ImplOpenGL2_Init()) {
        // Construction is not complete yet, so unwind the already-live backend
        // here rather than relying on the object's destructor to be called.
        ImGui_ImplSDL2_Shutdown();
        ImGui::DestroyContext(impl_->context);
        throw std::runtime_error("Could not initialize the debug panel OpenGL backend");
    }
}

DebugPanel::~DebugPanel() {
    // Backends release GL/SDL resources while their host context still exists.
    ImGui::SetCurrentContext(impl_->context);
    ImGui_ImplOpenGL2_Shutdown();
    ImGui_ImplSDL2_Shutdown();
    ImGui::DestroyContext(impl_->context);
}

bool DebugPanel::process_event(const SDL_Event& event) {
    ImGui::SetCurrentContext(impl_->context);
    ImGui_ImplSDL2_ProcessEvent(&event);
    // Use key transitions, not repeat events, for toggle actions. Consuming F1
    // on both down/up also keeps it from leaking into any gameplay handler.
    if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_F1) {
        if (!event.key.repeat && !impl_->confirmation) set_visible(!visible());
        return true;
    }
    if (event.type == SDL_KEYUP && event.key.keysym.sym == SDLK_F1) return true;
    if (visible() && event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE) {
        if (!event.key.repeat) {
            if (impl_->confirmation) impl_->cancel_confirmation = true;
            else set_visible(false);
        }
        return true;
    }
    // Merely hovering over the persistent bar must not pause game controls.
    // Its mouse interaction is captured, while F1 remains the keyboard entry.
    if (event.type == SDL_MOUSEBUTTONDOWN && event.button.y < impl_->menu_height)
        impl_->bar_mouse_down = true;
    if (event.type == SDL_MOUSEBUTTONUP) {
        const bool owned = impl_->bar_mouse_down || event.button.y < impl_->menu_height;
        impl_->bar_mouse_down = false;
        if (owned) return true;
    }
    if (event.type == SDL_MOUSEMOTION && event.motion.y < impl_->menu_height) return true;
    if (!captures_game_input()) return false;
    // Capture physical gameplay input for the entire visible panel, including
    // when the mouse is outside it. The simulation itself continues to advance.
    switch (event.type) {
    case SDL_KEYDOWN: case SDL_KEYUP: case SDL_TEXTINPUT: case SDL_TEXTEDITING:
    case SDL_MOUSEBUTTONDOWN: case SDL_MOUSEBUTTONUP: case SDL_MOUSEMOTION: case SDL_MOUSEWHEEL:
    case SDL_CONTROLLERBUTTONDOWN: case SDL_CONTROLLERBUTTONUP: case SDL_CONTROLLERAXISMOTION:
        return true;
    default:
        return false;
    }
}

bool DebugPanel::captures_game_input() const { return impl_->visible || impl_->bar_mouse_down || impl_->confirmation.has_value(); }
bool DebugPanel::visible() const { return impl_->visible; }
void DebugPanel::set_visible(bool visible) {
    // Focus once on opening; stealing focus each frame would break text edits.
    if (visible && !impl_->visible) impl_->focus_next_frame = true;
    impl_->visible = visible;
}

std::optional<PanelAction> DebugPanel::take_action() { return std::exchange(impl_->action, std::nullopt); }
void DebugPanel::set_action_status(std::string status) { impl_->action_status = std::move(status); }
float DebugPanel::menu_height() const { return impl_->menu_height; }

void DebugPanel::draw(DisplaySettings& settings, const DebugDiagnostics& diagnostics) {
    ImGui::SetCurrentContext(impl_->context);
    ImGui_ImplOpenGL2_NewFrame();
    ImGui_ImplSDL2_NewFrame();
    ImGui::NewFrame();
    if (ImGui::BeginMainMenuBar()) {
        impl_->menu_height = ImGui::GetWindowHeight();
        // Keep gameplay Enter/arrows from activating a previously clicked bar
        // item. F1/F11 are explicit shortcuts; the floating window supports nav.
        ImGui::PushItemFlag(ImGuiItemFlags_NoNav, true);
        if (ImGui::MenuItem("Settings (F1)", nullptr, impl_->visible) && !impl_->confirmation)
            set_visible(!visible());
        if (ImGui::MenuItem(diagnostics.fullscreen ? "Windowed (F11)" : "Fullscreen (F11)"))
            impl_->action = PanelAction::ToggleFullscreen;
        ImGui::PopItemFlag();
        ImGui::EndMainMenuBar();
    }
    if (impl_->visible) {
        // Constrain the window to current drawable space, including the smallest
        // native-size window. ImGui supplies scrolling when content cannot fit.
        const auto display = ImGui::GetIO().DisplaySize;
        const float margin = std::min(18.0f, std::min(display.x, display.y) * 0.04f);
        const ImVec2 available(std::max(1.0f, display.x - 2 * margin), std::max(1.0f, display.y - impl_->menu_height - 2 * margin));
        ImGui::SetNextWindowPos(ImVec2(margin, impl_->menu_height + margin), ImGuiCond_Appearing);
        ImGui::SetNextWindowSize(ImVec2(std::min(480.0f, available.x), std::min(410.0f, available.y)), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowSizeConstraints(ImVec2(std::min(180.0f, available.x), std::min(140.0f, available.y)), available);
        if (impl_->focus_next_frame) {
            ImGui::SetNextWindowFocus();
            impl_->focus_next_frame = false;
        }
        const auto title = diagnostics.game_title + " control panel###EBControlPanel";
        // The ### suffix gives the window a stable identity across title changes.
        if (ImGui::Begin(title.c_str(), &impl_->visible)) {
            if (ImGui::BeginTabBar("Control panel tabs")) {
                if (ImGui::BeginTabItem("Display")) {
                    ImGui::Spacing();
                    ImGui::Checkbox("Widescreen", &settings.widescreen);
                    ImGui::BeginDisabled(!settings.widescreen);
                    constexpr std::array<const char*, 7> labels{
                        "Game (256:224)", "4:3", "16:10", "16:9", "21:9", "Window", "Custom"};
                    constexpr std::array<AspectRatio, 7> values{
                        AspectRatio::Native, AspectRatio::FourThree, AspectRatio::SixteenTen,
                        AspectRatio::SixteenNine, AspectRatio::TwentyOneNine, AspectRatio::Window, AspectRatio::Custom};
                    const auto current = std::find(values.begin(), values.end(), settings.aspect);
                    // Keep the combo index local: the saved enum is not assumed
                    // to be a valid array subscript after loading preferences.
                    const auto index = current == values.end() ? 0 : current - values.begin();
                    const bool narrow = ImGui::GetContentRegionAvail().x < 280.0f;
                    // Stack labels on narrow windows so every control remains
                    // reachable without requiring a larger desktop resolution.
                    if (narrow) ImGui::TextUnformatted("Aspect ratio");
                    ImGui::SetNextItemWidth(narrow ? -1.0f : 190.0f);
                    if (ImGui::BeginCombo(narrow ? "##Aspect ratio" : "Aspect ratio", labels[index])) {
                        for (std::size_t i = 0; i < labels.size(); ++i) {
                            const bool selected = settings.aspect == values[i];
                            if (ImGui::Selectable(labels[i], selected)) settings.aspect = values[i];
                            if (selected) ImGui::SetItemDefaultFocus();
                        }
                        ImGui::EndCombo();
                    }
                    if (settings.aspect == AspectRatio::Custom) {
                        if (narrow) ImGui::TextUnformatted("Width / height");
                        ImGui::SetNextItemWidth(narrow ? -1.0f : 190.0f);
                        if (ImGui::InputFloat(narrow ? "##Width / height" : "Width / height", &settings.custom_aspect, 0.01f, 0.1f, "%.3f")) {
                            if (!std::isfinite(settings.custom_aspect)) settings.custom_aspect = 16.0f / 9.0f;
                            settings.custom_aspect = std::clamp(settings.custom_aspect, 256.0f / 224.0f, 1024.0f / 224.0f);
                        }
                        ImGui::TextDisabled("For example, 1.778 is approximately 16:9.");
                    }
                    ImGui::EndDisabled();
                    ImGui::Spacing();
                    // This is independent of widescreen and never changes game
                    // timing. The frontend applies it to the completed picture.
                    ImGui::Checkbox("Photosensitivity filter", &settings.reduce_flashing);
                    ImGui::TextWrapped("Softens flashing battle and lightning effects while preserving ordinary artwork and movement. Does not guarantee seizure safety.");
                    ImGui::Spacing();
                    if (ImGui::Button("Restore game display")) settings = DisplaySettings{};
                    ImGui::Spacing();
                    ImGui::TextDisabled("F1 or Escape closes this panel.");
                    ImGui::TextWrapped("The game continues while this panel is open. Close it to resume controls.");
                    ImGui::EndTabItem();
                }
                if (ImGui::BeginTabItem("Diagnostics")) {
                    ImGui::Spacing();
                    ImGui::Text("Game frame: %llu", static_cast<unsigned long long>(diagnostics.frames));
                    ImGui::Text("Canvas: %d x %d", diagnostics.source_width, diagnostics.source_height);
                    ImGui::Text("Window: %d x %d", diagnostics.drawable_width, diagnostics.drawable_height);
                    ImGui::Separator();
                    ImGui::Text("CPU instructions: %llu", static_cast<unsigned long long>(diagnostics.cpu_instructions));
                    ImGui::Text("SPC instructions: %llu", static_cast<unsigned long long>(diagnostics.spc_instructions));
                    ImGui::Text("Master clocks: %llu", static_cast<unsigned long long>(diagnostics.master_clocks));
                    ImGui::Text("Audio frames: %llu", static_cast<unsigned long long>(diagnostics.audio_frames));
                    ImGui::Separator();
                    ImGui::TextWrapped("%s", diagnostics.cpu_state.c_str());
                    ImGui::TextWrapped("%s", diagnostics.spc_state.c_str());
                    ImGui::EndTabItem();
                }
                if (ImGui::BeginTabItem("Assets")) {
                    ImGui::TextWrapped("Switch between your imported game versions or clear a local asset cache.");
                    if (!diagnostics.custom_asset_status.empty()) ImGui::TextWrapped("%s", diagnostics.custom_asset_status.c_str());
                    if (!impl_->action_status.empty()) ImGui::TextWrapped("%s", impl_->action_status.c_str());
                    for (unsigned index = 0; index < diagnostics.cache.size(); ++index) {
                        const auto& cache = diagnostics.cache[index];
                        ImGui::PushID(int(index));
                        ImGui::Separator();
                        const auto title = cache.title.empty() ? (index ? "Mother 2 (Japanese)" : "EarthBound (US)") : cache.title.c_str();
                        ImGui::TextUnformatted(title);
                        ImGui::TextDisabled("%s%s", cache.present ? "Imported" : "Import needed", cache.active ? " - current game" : "");
                        if (!cache.path.empty()) ImGui::TextWrapped("%s", cache.path.c_str());
                        if (ImGui::Button("Switch game")) {
                            impl_->confirmation = index ? PanelAction::SwitchMother2 : PanelAction::SwitchEarthBound;
                            impl_->confirmation_cache = index;
                            impl_->open_confirmation = true;
                        }
                        if (ImGui::GetContentRegionAvail().x >= 360.0f) ImGui::SameLine();
                        ImGui::BeginDisabled(!cache.present);
                        if (ImGui::Button("Clear imported assets")) {
                            impl_->confirmation = index ? PanelAction::ClearMother2Assets : PanelAction::ClearEarthBoundAssets;
                            impl_->confirmation_cache = index;
                            impl_->open_confirmation = true;
                        }
                        ImGui::EndDisabled();
                        ImGui::PopID();
                    }
                    ImGui::EndTabItem();
                }
                ImGui::EndTabBar();
            }
            if (impl_->confirmation) {
                const bool clearing = *impl_->confirmation == PanelAction::ClearEarthBoundAssets ||
                                      *impl_->confirmation == PanelAction::ClearMother2Assets;
                const char* popup = clearing ? "Clear imported assets?" : "Switch game?";
                if (impl_->open_confirmation) {
                    ImGui::OpenPopup(popup);
                    impl_->open_confirmation = false;
                }
                ImGui::SetNextWindowSizeConstraints(ImVec2(std::min(180.0f, available.x), 0), available);
                ImGui::SetNextWindowSize(ImVec2(std::min(430.0f, available.x), 0), ImGuiCond_Appearing);
                if (ImGui::BeginPopupModal(popup, nullptr, ImGuiWindowFlags_AlwaysAutoResize)) {
                    const auto& cache = diagnostics.cache[impl_->confirmation_cache];
                    ImGui::TextWrapped("%s", cache.title.c_str());
                    if (clearing) {
                        ImGui::TextWrapped("Only this imported asset cache will be removed:");
                        ImGui::TextWrapped("%s", cache.path.c_str());
                        ImGui::TextWrapped("Your ROM and saves are kept. You can keep playing; a fresh import will be needed the next time this game starts.");
                    } else {
                        ImGui::TextWrapped("Save in-game first. Switching restarts the selected game and loses unsaved progress.");
                        if (!cache.present) ImGui::TextWrapped("You will be asked to import your own ROM for this version.");
                    }
                    ImGui::Spacing();
                    if (ImGui::Button(clearing ? "Clear imported assets" : "Switch and restart")) {
                        impl_->action = impl_->confirmation;
                        impl_->confirmation.reset();
                        impl_->cancel_confirmation = false;
                        ImGui::CloseCurrentPopup();
                    }
                    if (ImGui::GetContentRegionAvail().x >= 340.0f) ImGui::SameLine();
                    if (ImGui::Button("Cancel") || impl_->cancel_confirmation) {
                        impl_->cancel_confirmation = false;
                        impl_->confirmation.reset();
                        ImGui::CloseCurrentPopup();
                    }
                    ImGui::EndPopup();
                }
            }
        }
        ImGui::End();
    }
    ImGui::Render();
    // main draws the completed game image first and swaps only after this call.
    ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
}

namespace {
// ImGui/SDL paths use UTF-8. Native filesystem paths may use UTF-16 on Windows;
// convert explicitly rather than relying on the system's current code page.
std::filesystem::path native_path(const std::string& path) {
    return std::filesystem::path(std::u8string(path.begin(), path.end()));
}
std::string path_text(const std::filesystem::path& path) {
    const auto text = path.u8string();
    return std::string(text.begin(), text.end());
}
template<std::size_t N> void set_text(std::array<char, N>& buffer, const std::string& text) {
    // ImGui edits fixed buffers in place; always reserve a terminating NUL.
    const auto count = std::min(text.size(), N - 1);
    std::copy_n(text.data(), count, buffer.data());
    buffer[count] = 0;
}
} // namespace

struct AssetImportPanel::Impl {
    struct Entry { std::filesystem::path path; std::string name; bool directory; };
    ImGuiContext* context{};
    std::array<char, 4096> path{}, directory_text{};
    std::filesystem::path directory;
    std::vector<Entry> entries;
    std::optional<std::string> request;
    // Import errors and directory-navigation errors are separate so browsing
    // another folder does not hide a failed ROM validation from the user.
    std::string error, status, browser_error, selected;
    bool exit{}, browser_open{}, show_all{};

    void refresh() {
        // Refresh on explicit navigation/filter changes, not every frame. Error
        // codes let an inaccessible folder remain editable instead of exiting UI.
        entries.clear();
        browser_error.clear();
        selected.clear();
        set_text(directory_text, path_text(directory));
        std::error_code ec;
        std::filesystem::directory_iterator iterator(directory, ec), end;
        if (ec) { browser_error = ec.message(); return; }
        while (iterator != end) {
            const auto& entry = *iterator;
            const bool is_directory = entry.is_directory(ec);
            if (!ec) {
                auto extension = path_text(entry.path().extension());
                std::transform(extension.begin(), extension.end(), extension.begin(),
                    [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
                if (is_directory || show_all || extension == ".sfc" || extension == ".smc")
                    entries.push_back({entry.path(), path_text(entry.path().filename()), is_directory});
            }
            ec.clear();
            iterator.increment(ec);
            if (ec) { browser_error = ec.message(); break; }
        }
        std::sort(entries.begin(), entries.end(), [](const Entry& a, const Entry& b) {
            // Folders first, then stable lexical ordering for predictable browsing.
            if (a.directory != b.directory) return a.directory > b.directory;
            return a.name < b.name;
        });
    }
    void choose(const std::string& chosen) {
        // Selecting a file only fills the form. Import is a separate user action.
        set_text(path, chosen);
        browser_open = false;
        error.clear();
    }
    void request_import() {
        // File I/O and compatibility checks belong to the frontend after draw.
        if (!path[0]) { error = "Choose a ROM file first."; return; }
        request = std::string(path.data());
        error.clear();
    }
};

AssetImportPanel::AssetImportPanel(SDL_Window* window, SDL_GLContext context): impl_(std::make_unique<Impl>()) {
    IMGUI_CHECKVERSION();
    impl_->context = ImGui::CreateContext();
    ImGui::GetIO().IniFilename = nullptr;
    ImGui::GetIO().LogFilename = nullptr;
    ImGui::GetIO().ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    ImGui::StyleColorsDark();
    auto& style = ImGui::GetStyle();
    style.WindowRounding = 8.0f;
    style.FrameRounding = 4.0f;
    style.WindowPadding = ImVec2(20.0f, 20.0f);
    style.ItemSpacing = ImVec2(10.0f, 12.0f);
    if (!ImGui_ImplSDL2_InitForOpenGL(window, context)) {
        ImGui::DestroyContext(impl_->context);
        throw std::runtime_error("Could not initialize the import screen SDL backend");
    }
    if (!ImGui_ImplOpenGL2_Init()) {
        ImGui_ImplSDL2_Shutdown();
        ImGui::DestroyContext(impl_->context);
        throw std::runtime_error("Could not initialize the import screen OpenGL backend");
    }
    const char* home = SDL_getenv("HOME");
    // A familiar starting directory on either platform; typing a full path and
    // drag-and-drop remain available if the home directory cannot be resolved.
    if (!home || !*home) home = SDL_getenv("USERPROFILE");
    std::error_code ec;
    impl_->directory = home && *home ? native_path(home) : std::filesystem::current_path(ec);
    if (ec) impl_->directory = std::filesystem::path(".");
}

AssetImportPanel::~AssetImportPanel() {
    ImGui::SetCurrentContext(impl_->context);
    ImGui_ImplOpenGL2_Shutdown();
    ImGui_ImplSDL2_Shutdown();
    ImGui::DestroyContext(impl_->context);
}

void AssetImportPanel::process_event(const SDL_Event& event) {
    ImGui::SetCurrentContext(impl_->context);
    ImGui_ImplSDL2_ProcessEvent(&event);
    if (event.type == SDL_QUIT) impl_->exit = true;
    if (event.type == SDL_KEYDOWN && !event.key.repeat && event.key.keysym.sym == SDLK_ESCAPE) {
        // Escape backs out of the browser before it exits first-run setup.
        if (impl_->browser_open) impl_->browser_open = false;
        else impl_->exit = true;
    }
    // Copy the drop path now; main owns and frees SDL's allocated event payload.
    if (event.type == SDL_DROPFILE && event.drop.file) impl_->choose(event.drop.file);
}

void AssetImportPanel::draw() {
    ImGui::SetCurrentContext(impl_->context);
    ImGui_ImplOpenGL2_NewFrame();
    ImGui_ImplSDL2_NewFrame();
    ImGui::NewFrame();
    const auto size = ImGui::GetIO().DisplaySize;
    ImGui::SetNextWindowPos(ImVec2(size.x * 0.5f, size.y * 0.5f), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
    ImGui::SetNextWindowSize(ImVec2(std::max(1.0f, std::min(640.0f, size.x - 16.0f)),
                                  std::max(1.0f, std::min(370.0f, size.y - 16.0f))), ImGuiCond_Always);
    if (ImGui::Begin("EarthBound / Mother 2", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize)) {
        ImGui::TextWrapped("Import your ROM to get started");
        ImGui::TextWrapped("Choose your own US EarthBound or Japanese Mother 2 ROM. Compatibility is checked before starting the game.");
        ImGui::Spacing();
        ImGui::TextUnformatted("ROM file");
        ImGui::SetNextItemWidth(std::max(100.0f, ImGui::GetContentRegionAvail().x - 88.0f));
        if (ImGui::InputText("##ROM file", impl_->path.data(), impl_->path.size(), ImGuiInputTextFlags_EnterReturnsTrue))
            impl_->request_import();
        ImGui::SameLine();
        if (ImGui::Button("Browse...")) {
            if (impl_->path[0]) {
                const auto parent = native_path(impl_->path.data()).parent_path();
                if (!parent.empty()) impl_->directory = parent;
            }
            impl_->browser_open = true;
            impl_->refresh();
        }
        ImGui::TextDisabled("You can also drop a .sfc or .smc file here.");
        if (!impl_->error.empty()) {
            ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 0.48f, 0.42f, 1.0f));
            ImGui::TextWrapped("%s", impl_->error.c_str());
            ImGui::PopStyleColor();
        }
        if (!impl_->status.empty()) ImGui::TextWrapped("%s", impl_->status.c_str());
        ImGui::Spacing();
        const auto import_width = std::min(150.0f, std::max(100.0f, ImGui::GetContentRegionAvail().x - 60.0f));
        if (ImGui::Button("Import and play", ImVec2(import_width, 0))) impl_->request_import();
        ImGui::SameLine();
        if (ImGui::Button("Exit")) impl_->exit = true;
    }
    ImGui::End();
    if (impl_->browser_open) ImGui::OpenPopup("Choose a ROM");
    ImGui::SetNextWindowSize(ImVec2(std::max(1.0f, std::min(660.0f, size.x - 16.0f)),
                                  std::max(1.0f, std::min(510.0f, size.y - 16.0f))), ImGuiCond_Always);
    if (ImGui::BeginPopupModal("Choose a ROM", &impl_->browser_open, ImGuiWindowFlags_NoResize)) {
        if (ImGui::Button("Up")) {
            if (const auto parent = impl_->directory.parent_path(); !parent.empty()) impl_->directory = parent;
            impl_->refresh();
        }
        ImGui::SameLine();
        ImGui::SetNextItemWidth(-1.0f);
        if (ImGui::InputText("##Folder", impl_->directory_text.data(), impl_->directory_text.size(),
                             ImGuiInputTextFlags_EnterReturnsTrue)) {
            impl_->directory = native_path(impl_->directory_text.data());
            impl_->refresh();
        }
        if (ImGui::Checkbox("Show all files", &impl_->show_all)) impl_->refresh();
        if (!impl_->browser_error.empty()) ImGui::TextWrapped("%s", impl_->browser_error.c_str());
        // Defer folder entry until iteration ends: refresh replaces entries and
        // would invalidate the current range-for iterator if performed inline.
        std::optional<std::filesystem::path> enter;
        if (ImGui::BeginChild("Directory contents", ImVec2(0, std::max(80.0f, ImGui::GetContentRegionAvail().y - 60.0f)), ImGuiChildFlags_Borders)) {
            for (const auto& entry : impl_->entries) {
                const auto label = (entry.directory ? "[Folder] " : "") + entry.name;
                if (ImGui::Selectable(label.c_str(), impl_->selected == path_text(entry.path), ImGuiSelectableFlags_AllowDoubleClick)) {
                    impl_->selected = path_text(entry.path);
                    if (ImGui::IsMouseDoubleClicked(0)) {
                        if (entry.directory) enter = entry.path;
                        else impl_->choose(impl_->selected);
                    }
                }
            }
        }
        ImGui::EndChild();
        if (enter) { impl_->directory = *enter; impl_->refresh(); }
        ImGui::BeginDisabled(impl_->selected.empty());
        if (ImGui::Button("Choose", ImVec2(100.0f, 0))) {
            const auto selected = native_path(impl_->selected);
            std::error_code ec;
            if (std::filesystem::is_directory(selected, ec)) { impl_->directory = selected; impl_->refresh(); }
            else impl_->choose(impl_->selected);
        }
        ImGui::EndDisabled();
        ImGui::SameLine();
        if (ImGui::Button("Cancel")) impl_->browser_open = false;
        if (!impl_->browser_open) ImGui::CloseCurrentPopup();
        ImGui::EndPopup();
    }
    ImGui::Render();
    ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
}

// Transfer each request exactly once; validation failures can safely return to
// the same form and require another explicit attempt.
std::optional<std::string> AssetImportPanel::take_import_request() { return std::exchange(impl_->request, std::nullopt); }
bool AssetImportPanel::exit_requested() const { return impl_->exit; }
void AssetImportPanel::set_error(std::string error) { impl_->error = std::move(error); impl_->status.clear(); }
void AssetImportPanel::set_status(std::string status) { impl_->status = std::move(status); impl_->error.clear(); }
} // namespace eb
