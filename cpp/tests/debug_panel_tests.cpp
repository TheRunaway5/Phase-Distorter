// Drive actual SDL/ImGui events to check the optional UI boundary: input capture,
// visibility, settings, import requests, and GL state restoration. File selection
// emits a path request; trusted application code performs the asset import.
#include "eb/debug_panel.hpp"
#include "eb/display_settings.hpp"
#include "imgui_internal.h"

#include <SDL.h>
#include <SDL_opengl.h>

#include <algorithm>
#include <fstream>
#include <filesystem>
#include <iostream>
#include <numeric>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
constexpr int width = 768, height = 672;
void require(bool condition, const char* message) { if (!condition) throw std::runtime_error(message); }
void background() {
    glViewport(0, 0, width, height);
    glClearColor(0.1f, 0.2f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
}
std::vector<unsigned char> capture() {
    std::vector<unsigned char> pixels(width * height * 3);
    glPixelStorei(GL_PACK_ALIGNMENT, 1);
    glReadPixels(0, 0, width, height, GL_RGB, GL_UNSIGNED_BYTE, pixels.data());
    require(glGetError() == GL_NO_ERROR, "OpenGL error while reading panel pixels");
    return pixels;
}
void save(const std::string& path, const std::vector<unsigned char>& pixels) {
    std::ofstream output(path, std::ios::binary);
    output << "P6\n" << width << ' ' << height << "\n255\n";
    for (int y = height - 1; y >= 0; --y)
        output.write(reinterpret_cast<const char*>(pixels.data() + y * width * 3), width * 3);
    require(bool(output), "Could not save panel verification screenshot");
}
SDL_Event key(SDL_Window* window, SDL_Keycode code, bool repeat = false) {
    SDL_Event event{};
    event.type = SDL_KEYDOWN;
    event.key.windowID = SDL_GetWindowID(window);
    event.key.state = SDL_PRESSED;
    event.key.repeat = repeat;
    event.key.keysym.sym = code;
    event.key.keysym.scancode = SDL_GetScancodeFromKey(code);
    return event;
}
template<typename Panel, typename Draw> void click(SDL_Window* window, Panel& panel, Draw draw, int x, int y) {
    SDL_WarpMouseInWindow(window, x, y);
    SDL_PumpEvents();
    SDL_Event event{};
    while (SDL_PollEvent(&event)) panel.process_event(event);
    event = {};
    event.type = SDL_MOUSEMOTION;
    event.motion.windowID = SDL_GetWindowID(window);
    event.motion.x = x;
    event.motion.y = y;
    panel.process_event(event);
    draw();
    draw();
    for (const auto type : {SDL_MOUSEBUTTONDOWN, SDL_MOUSEBUTTONUP}) {
        event = {};
        event.type = type;
        event.button.windowID = SDL_GetWindowID(window);
        event.button.button = SDL_BUTTON_LEFT;
        event.button.state = type == SDL_MOUSEBUTTONDOWN ? SDL_PRESSED : SDL_RELEASED;
        event.button.x = x;
        event.button.y = y;
        panel.process_event(event);
        draw();
        draw();
    }
}
void verify(SDL_Window* window, SDL_GLContext context, const std::string& prefix) {
    background();
    const auto baseline = capture();
    eb::DisplaySettings settings;
    require(!settings.variable_refresh, "VRR did not default to off");
    require(!settings.reduce_flashing, "Photosensitivity filter did not default to off");
    settings.widescreen = true;
    settings.aspect = eb::AspectRatio::TwentyOneNine;
    eb::DebugDiagnostics stats;
    stats.frames = 1234;
    stats.cpu_state = "CPU read-only diagnostic snapshot";
    stats.cache = {{{"EarthBound (US)", "/local/earthbound.ebpak", true, true},
                    {"Mother 2 (Japanese)", "/local/mother2.ebpak", false, false}}};
    {
        eb::DebugPanel panel(window, context);
        require(!panel.visible() && !panel.captures_game_input(), "Panel did not default to hidden");
        panel.draw(settings, stats);
        const auto with_bar = capture();
        const auto menu_rows = static_cast<std::size_t>(panel.menu_height());
        require(menu_rows > 0 && menu_rows < 40, "Top bar did not report a usable reserved height");
        require(with_bar != baseline, "Persistent top control bar was not drawn");
        require(std::equal(with_bar.begin(), with_bar.begin() + (height - menu_rows) * width * 3, baseline.begin()),
            "Closed settings painted outside the reserved control-bar strip");
        require(!panel.process_event(key(window, SDLK_z)) && !panel.captures_game_input(),
            "Idle control bar captured gameplay keyboard input");
        require(!panel.process_event(key(window, SDLK_ESCAPE)), "Closed panel consumed game Escape");
        require(panel.process_event(key(window, SDLK_F1)), "Panel did not consume F1");
        require(panel.visible() && panel.captures_game_input(), "Opening panel leaked gameplay input");
        panel.process_event(key(window, SDLK_F1, true));
        require(panel.visible(), "F1 keyboard repeat closed panel");
        require(panel.process_event(key(window, SDLK_z)), "Panel did not consume gameplay key");
        SDL_Event controller{};
        controller.type = SDL_CONTROLLERBUTTONDOWN;
        controller.cbutton.button = SDL_CONTROLLER_BUTTON_A;
        require(panel.process_event(controller), "Open panel leaked controller button");
        background();
        panel.draw(settings, stats);
        background();
        panel.draw(settings, stats);
        const auto shown = capture();
        const auto changed = std::inner_product(shown.begin(), shown.end(), baseline.begin(), 0u,
            std::plus<>(), [](auto a, auto b) { return unsigned(a != b); });
        require(changed > 10000, "Panel did not draw a visible OpenGL overlay");
        require(std::equal(shown.end() - 3, shown.end(), with_bar.end() - 3), "Panel damaged pixels outside its window");
        if (!prefix.empty()) save(prefix + "-debug.ppm", shown);
        require(settings.widescreen && settings.aspect == eb::AspectRatio::TwentyOneNine,
            "Opening panel changed display preferences");
        auto draw = [&] { background(); panel.draw(settings, stats); };
        const int menu_offset = int(panel.menu_height());
        click(window, panel, draw, 43, 100 + menu_offset);
        require(!settings.widescreen, "Clicking widescreen checkbox did not update display choice");
        // The filter remains available at native aspect ratio. Exercise actual
        // mouse input so disabled UI scopes cannot accidentally capture it.
        click(window, panel, draw, 43, 168 + menu_offset);
        require(settings.reduce_flashing, "Photosensitivity filter could not be enabled without widescreen");
        click(window, panel, draw, 43, 100 + menu_offset);
        require(settings.widescreen, "Clicking widescreen checkbox did not restore display choice");
        require(settings.reduce_flashing, "Widescreen toggle cleared the photosensitivity filter");
        require(stats.frames == 1234 && stats.cpu_state == "CPU read-only diagnostic snapshot",
            "Panel altered read-only diagnostics");
        require(panel.process_event(key(window, SDLK_ESCAPE)) && !panel.visible(), "Escape did not close panel");
        require(!panel.captures_game_input(), "Closed panel retained input capture");
        background();
        panel.draw(settings, stats);
        require(capture() == with_bar, "Closing settings did not restore the game and persistent bar");
        require(settings.widescreen && settings.aspect == eb::AspectRatio::TwentyOneNine,
            "Closing panel lost display preferences");
        require(settings.reduce_flashing, "Closing panel lost the photosensitivity preference");
        panel.set_visible(true);
        require(panel.visible() && panel.captures_game_input(), "Explicit visibility did not capture input");
        draw();
        draw();
        click(window, panel, draw, 43, 168 + menu_offset);
        require(!settings.reduce_flashing, "Photosensitivity filter could not be disabled");
        click(window, panel, draw, 43, 168 + menu_offset);
        require(settings.reduce_flashing, "Photosensitivity filter could not be re-enabled");
        // The scoped-effects explanation wraps to three lines in this fixed
        // 480-pixel panel; click the reset button below that explanatory text.
        click(window, panel, draw, 100, 256 + menu_offset);
        require(!settings.reduce_flashing && !settings.widescreen && settings.aspect == eb::AspectRatio::SixteenNine,
            "Restore game display did not reset the photosensitivity filter and aspect preferences");
        click(window, panel, draw, 43, 295 + menu_offset);
        require(settings.variable_refresh, "VRR checkbox did not enable the saved display preference");
        click(window, panel, draw, 43, 295 + menu_offset);
        require(!settings.variable_refresh, "VRR checkbox did not disable the saved display preference");
        const auto select_rate = [&](int row) {
            click(window, panel, draw, 110, 333 + menu_offset);
            auto& popups = ImGui::GetCurrentContext()->OpenPopupStack;
            require(!popups.empty() && popups.back().Window, "Frame-rate picker did not open");
            const auto* popup = popups.back().Window;
            const int y = int(popup->Pos.y + ImGui::GetStyle().WindowPadding.y +
                ImGui::GetFontSize() * .5f + row * ImGui::GetTextLineHeightWithSpacing());
            click(window, panel, draw, int(popup->Pos.x + 70), y);
        };
        select_rate(6);
        require(settings.frame_limit == 300, "Frame-rate picker did not select 300 FPS");
        require(settings.interpolate_frames, "Intermediate frames did not default to enabled");
        click(window, panel, draw, 43, 362 + menu_offset);
        require(!settings.interpolate_frames, "Frame interpolation could not be disabled");
        select_rate(7);
        require(settings.frame_limit == 0, "Frame-rate picker did not select uncapped FPS");
        click(window, panel, draw, 100, 256 + menu_offset);
        require(settings.frame_limit == 60 && settings.interpolate_frames && !settings.variable_refresh,
            "Restore game display did not restore native presentation defaults");
        panel.process_event(key(window, SDLK_F1));
        require(!panel.visible(), "F1 did not close visible panel");
    }
    {
        eb::DebugPanel panel(window, context);
        auto draw = [&] { background(); panel.draw(settings, stats); };
        draw(); draw();
        click(window, panel, draw, 175, 9);
        require(panel.take_action() == eb::PanelAction::ToggleFullscreen, "Top bar did not request fullscreen");
        require(!panel.take_action(), "Fullscreen request was emitted twice");
        require(!panel.visible() && !panel.captures_game_input(), "Fullscreen click retained gameplay input capture");
        stats.fullscreen = true;
        draw(); draw();
        click(window, panel, draw, 175, 9);
        require(panel.take_action() == eb::PanelAction::ToggleFullscreen, "Fullscreen bar did not request windowed mode");
        stats.fullscreen = false;
        require(!panel.process_event(key(window, SDLK_RETURN)), "Idle bar consumed the game Start key");
        draw(); draw();
        require(!panel.take_action(), "Gameplay Enter activated a previously clicked bar item");
        click(window, panel, draw, 50, 9);
        require(panel.visible(), "Settings (F1) control did not open the settings window");
        click(window, panel, draw, 218, 60 + int(panel.menu_height()));
        draw(); draw();
        if (!prefix.empty()) save(prefix + "-assets.ppm", capture());
        const auto confirm = [&](const char* title) {
            draw(); draw();
            const auto* popup = ImGui::FindWindowByName(title);
            require(popup && popup->Active, "Asset action did not open its confirmation popup");
            require(popup->Pos.x >= 0 && popup->Pos.y >= panel.menu_height() &&
                    popup->Pos.x + popup->Size.x <= width && popup->Pos.y + popup->Size.y <= height,
                    "Asset confirmation extends outside the drawable area");
            const auto& style = ImGui::GetStyle();
            click(window, panel, draw, int(popup->Pos.x + 70),
                  int(popup->Pos.y + popup->Size.y - style.WindowPadding.y - ImGui::GetFrameHeight() * 0.5f));
        };
        click(window, panel, draw, 200, 331);
        require(!panel.take_action(), "Missing imported cache offered a destructive action");
        click(window, panel, draw, 75, 224);
        require(!panel.take_action(), "Switching an active game skipped confirmation");
        require(panel.process_event(key(window, SDLK_F1)) && panel.visible(), "F1 dismissed a pending confirmation");
        panel.process_event(key(window, SDLK_ESCAPE));
        draw(); draw();
        require(!panel.take_action() && panel.visible(), "Canceling a switch emitted an action or closed settings");
        click(window, panel, draw, 75, 224);
        confirm("Switch game?");
        require(panel.take_action() == eb::PanelAction::SwitchEarthBound, "Active-version restart request was not emitted");
        require(!panel.take_action(), "Switch request was emitted more than once");
        click(window, panel, draw, 75, 331);
        require(!panel.take_action(), "Switching to a missing version skipped confirmation");
        if (!prefix.empty()) save(prefix + "-switch-confirm.ppm", capture());
        confirm("Switch game?");
        require(panel.take_action() == eb::PanelAction::SwitchMother2, "Japanese import/switch request was not emitted");
        click(window, panel, draw, 200, 224);
        require(!panel.take_action(), "Clearing assets skipped confirmation");
        panel.process_event(key(window, SDLK_ESCAPE));
        draw(); draw();
        require(!panel.take_action(), "Canceling asset removal still emitted a clear request");
        click(window, panel, draw, 200, 224);
        if (!prefix.empty()) save(prefix + "-clear-confirm.ppm", capture());
        confirm("Clear imported assets?");
        require(panel.take_action() == eb::PanelAction::ClearEarthBoundAssets, "US cache clear request was not emitted");
        require(stats.cache[0].present && stats.cache[0].active, "UI modified its read-only cache snapshot");
        stats.cache[1].present = true;
        draw(); draw();
        click(window, panel, draw, 200, 331);
        confirm("Clear imported assets?");
        require(panel.take_action() == eb::PanelAction::ClearMother2Assets, "Japanese cache clear request was not emitted");
        const auto before_status = capture();
        panel.set_action_status("Cache cleared; current play can continue.");
        stats.custom_asset_status = "Custom pack: /custom/local.ebpak (kept when default caches are cleared).";
        draw(); draw();
        require(capture() != before_status, "Asset action feedback/custom-pack status was not displayed");
    }
    {
        eb::AssetImportPanel panel(window, context);
        require(!panel.exit_requested() && !panel.take_import_request(), "Import screen started with an action");
        const auto fixture_dir = std::filesystem::temp_directory_path() /
            ("eb-panel-test-" + std::to_string(SDL_GetPerformanceCounter()));
        std::filesystem::create_directory(fixture_dir);
        struct RemoveFixture {
            std::filesystem::path path;
            ~RemoveFixture() { std::error_code ec; std::filesystem::remove_all(path, ec); }
        } cleanup{fixture_dir};
        const auto fixture_file = fixture_dir / "Example EarthBound.sfc";
        std::ofstream(fixture_file, std::ios::binary) << "synthetic UI fixture";
        const auto utf8 = fixture_file.u8string();
        std::string path(utf8.begin(), utf8.end());
        SDL_Event drop{};
        drop.type = SDL_DROPFILE;
        drop.drop.windowID = SDL_GetWindowID(window);
        drop.drop.file = path.data();
        panel.process_event(drop);
        require(!panel.take_import_request(), "Dropping a ROM unexpectedly imported it");
        panel.set_error("Fixture validation error: unsupported ROM.");
        background();
        panel.draw();
        const auto shown = capture();
        require(shown != baseline, "Import UI did not draw");
        if (!prefix.empty()) save(prefix + "-import.ppm", shown);
        auto draw = [&] { background(); panel.draw(); };
        click(window, panel, draw, 640, 299);
        const auto browser = capture();
        require(browser != shown, "Browse button did not open directory picker");
        if (!prefix.empty()) save(prefix + "-browser.ppm", browser);
        panel.process_event(key(window, SDLK_ESCAPE));
        require(!panel.exit_requested(), "Escape from browser exited the importer");
        draw();
        click(window, panel, draw, 640, 299);
        click(window, panel, draw, 190, 209);
        click(window, panel, draw, 120, 533);
        draw();
        // Selecting a file closes the modal; the import action must now reach
        // the underlying screen and carry the exact chosen path.
        panel.set_error("Fixture validation error: unsupported ROM.");
        draw();
        click(window, panel, draw, 160, 393);
        const auto request = panel.take_import_request();
        require(request && *request == path, "Import button did not emit selected ROM path");
        require(!panel.take_import_request(), "Import request was emitted more than once");
        panel.set_status("Checking ROM...");
        background();
        panel.draw();
        require(capture() != shown, "Import status/error text did not update");
        panel.process_event(key(window, SDLK_ESCAPE));
        require(panel.exit_requested(), "Import screen Escape did not request exit");
    }
    {
        eb::DebugPanel panel(window, context);
        stats.fullscreen=true;
        auto draw=[&]{background();panel.draw(settings,stats);};
        const auto move=[&](int x,int y) {
            SDL_WarpMouseInWindow(window,x,y);SDL_PumpEvents();
            SDL_Event event{};while(SDL_PollEvent(&event))panel.process_event(event);
            event={};event.type=SDL_MOUSEMOTION;event.motion.windowID=SDL_GetWindowID(window);
            event.motion.x=x;event.motion.y=y;panel.process_event(event);draw();draw();
        };
        move(400,400);
        require(capture()==baseline,"Fullscreen bar remained visible away from the top edge");
        require(!panel.captures_game_input(),"Hidden fullscreen bar captured gameplay input");
        move(50,5);
        require(capture()!=baseline,"Fullscreen top-edge hover did not reveal the bar");
        click(window,panel,draw,50,9);
        require(panel.visible(),"Revealed fullscreen Settings button did not work");
        panel.set_visible(false);move(400,400);
        require(capture()==baseline,"Fullscreen bar did not hide after the pointer left");
        stats.fullscreen=false;draw();draw();
        require(capture()!=baseline,"Windowed mode did not restore the persistent bar");
    }
    {
        eb::DebugPanel panel(window,context);
        stats.game_debug.ready=true;stats.game_debug.party={true,false,false,false};
        panel.set_visible(true);
        auto draw=[&]{background();panel.draw(settings,stats);};draw();draw();
        // Select the actual tab by its ImGui geometry, independent of labels'
        // pixel widths or whether the application is built for Linux/Windows.
        auto* window_layout=ImGui::FindWindowByName("EarthBound control panel###EBControlPanel");
        require(window_layout,"Missing debug settings window");
        auto* tabbar=ImGui::GetCurrentContext()->TabBars.GetByKey(window_layout->GetID("Control panel tabs"));
        require(tabbar,"Missing settings tab bar");
        const ImGuiTabItem* debug_tab=nullptr;
        for(auto& tab:tabbar->Tabs)if(std::string(ImGui::TabBarGetTabName(tabbar,&tab))=="Debug")debug_tab=&tab;
        require(debug_tab,"Missing Debug tab");
        click(window,panel,draw,int(tabbar->BarRect.Min.x+debug_tab->Offset+debug_tab->Width/2),int(tabbar->BarRect.GetCenter().y));
        // Four parallel checkboxes at the top of the Debug tab.
        const auto row=ImGui::GetFrameHeight()+ImGui::GetStyle().ItemSpacing.y;
        const auto first_y=tabbar->BarRect.Max.y+ImGui::GetStyle().ItemSpacing.y+ImGui::GetFrameHeight()/2;
        for(unsigned i=0;i<4;++i)click(window,panel,draw,int(window_layout->Pos.x+30),int(first_y+i*row));
        const auto cheats=panel.game_settings();
        require(cheats.infinite_hp && cheats.infinite_pp && cheats.noclip && cheats.enemies_ignore,
                "Debug checkboxes did not enable all four gameplay tools");
        require(!panel.take_game_action(),"Toggling a cheat emitted an unrelated party/teleport command");
        click(window,panel,draw,80,300);
        auto command=panel.take_game_action();
        require(command && command->kind==eb::GameDebugRequest::Kind::Teleport && command->destination==1,
                "Teleport button did not emit the selected destination");
        require(!panel.take_game_action(),"Teleport command was emitted twice");
        click(window,panel,draw,104,358); // Paula
        click(window,panel,draw,172,358); // Jeff
        click(window,panel,draw,233,358); // Poo
        click(window,panel,draw,80,387);
        command=panel.take_game_action();
        require(command && command->kind==eb::GameDebugRequest::Kind::Party &&
                command->party==std::array<bool,4>{true,true,true,true},"Party button did not emit the selected membership");
        require(!panel.take_game_action(),"Party command was emitted twice");
        if(!prefix.empty())save(prefix+"-game-debug.ppm",capture());
        click(window,panel,draw,150,270);
        SDL_Event text{};text.type=SDL_TEXTINPUT;text.text.windowID=SDL_GetWindowID(window);
        SDL_strlcpy(text.text.text,"Area: Magicant / Sea of Eden",sizeof(text.text.text));
        panel.process_event(text);draw();draw();
        ImGuiWindow* choices=nullptr;
        for(auto* item:ImGui::GetCurrentContext()->Windows)
            if(item->Active && std::string(item->Name).find("Destinations")!=std::string::npos)choices=item;
        require(choices,"Searchable destination list did not open");
        if(!prefix.empty())save(prefix+"-teleport-search.ppm",capture());
        click(window,panel,draw,int(choices->Pos.x+80),int(choices->Pos.y+ImGui::GetTextLineHeight()/2));
        click(window,panel,draw,80,300);
        command=panel.take_game_action();
        require(command && command->kind==eb::GameDebugRequest::Kind::Teleport && command->destination==1149,
                "Searching for an endgame area did not select its teleport destination");
        stats.game_debug={};
    }
    // Both dialogs must remain operable at the original 1x window size. Inspect
    // their actual ImGui layout after drawing and scrolling, not a copied model.
    SDL_SetWindowSize(window, 256, 224);
    SDL_SetWindowPosition(window, 20, 20);
    SDL_PumpEvents();
    auto fits = [](const ImGuiWindow* panel) {
        return panel && panel->Pos.x >= 0 && panel->Pos.y >= 0 &&
            panel->Pos.x + panel->Size.x <= 256 && panel->Pos.y + panel->Size.y <= 224;
    };
    {
        eb::DebugPanel panel(window, context);
        panel.set_visible(true);
        panel.draw(settings, stats);
        panel.draw(settings, stats);
        const auto* layout = ImGui::FindWindowByName("EarthBound control panel###EBControlPanel");
        require(fits(layout), "Debug panel or its close button extends outside scale-1 window");
        require(layout->ScrollMax.y > 0, "Small debug panel did not expose scrolling for its controls");
        click(window, panel, [&] { background(); panel.draw(settings, stats); },
              int(layout->Pos.x + layout->Size.x - 10), int(layout->Pos.y + 9));
        require(!panel.visible(), "Small debug panel close button was not reachable");
    }
    {
        eb::AssetImportPanel panel(window, context);
        panel.set_error("An unsupported ROM was selected. Please choose the supported original game file and try again.");
        panel.draw();
        panel.draw();
        auto* layout = ImGui::FindWindowByName("EarthBound / Mother 2");
        require(fits(layout), "Import screen extends outside scale-1 window");
        require(layout->ScrollMax.y > 0, "Small import screen did not provide scroll access to Import and Exit");
        ImGui::SetScrollY(layout, layout->ScrollMax.y);
        panel.draw();
        panel.draw();
        require(layout->Scroll.y > 0, "Import controls could not be scrolled into view");
    }
    std::cout << "Verified persistent top bar, game input boundaries, fullscreen/settings actions, cache confirmations, display choices, and import UI\n";
}
} // namespace

int main(int argc, char** argv) {
    SDL_SetMainReady();
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER) != 0) {
        std::cerr << SDL_GetError() << '\n'; return 1;
    }
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
    SDL_Window* window = SDL_CreateWindow("Panel verification", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        width, height, SDL_WINDOW_OPENGL);
    SDL_GLContext context = window ? SDL_GL_CreateContext(window) : nullptr;
    int result = 0;
    try {
        require(context != nullptr, SDL_GetError());
        verify(window, context, argc > 1 ? argv[1] : "");
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; result = 1; }
    if (context) SDL_GL_DeleteContext(context);
    if (window) SDL_DestroyWindow(window);
    SDL_Quit();
    return result;
}
