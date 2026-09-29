cmake_minimum_required(VERSION 3.20)
project(earthbound_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# The same implementation supports two build contexts: the standalone release
# supplies EB_PREGENERATED_DIR, while the original development tree can regenerate
# instruction sources. Only that latter path needs Python plus assembler tools.
option(EB_BUILD_FRONTEND "Build the SDL2/OpenGL desktop executable" ON)
option(EB_BUILD_TESTS "Build CPU and hardware verification programs" ON)
set(EB_PREGENERATED_DIR "" CACHE PATH "Compile existing generated C++ without assembly source or assembler tools")
if(NOT EB_PREGENERATED_DIR OR EB_BUILD_TESTS)
    find_package(Python3 REQUIRED COMPONENTS Interpreter)
endif()

if(EB_PREGENERATED_DIR)
    get_filename_component(EB_GENERATED_DIR "${EB_PREGENERATED_DIR}" ABSOLUTE
        BASE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
else()
    set(EB_GENERATED_DIR "${CMAKE_CURRENT_BINARY_DIR}/generated")
endif()
# Translation units follow assembly subsystems/routines. The checked-in
# inventory makes the standalone build independent of the assembly checkout.
set(EB_PROGRAM_MANIFEST "${EB_GENERATED_DIR}/program_sources.cmake")
if(NOT EB_PREGENERATED_DIR)
    get_filename_component(EB_SOURCE_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/.." ABSOLUTE)
    find_program(EB_CA65 ca65 REQUIRED)
    find_program(EB_LD65 ld65 REQUIRED)
    file(GLOB_RECURSE EB_ASSEMBLY_INPUTS CONFIGURE_DEPENDS
        "${EB_SOURCE_ROOT}/src/*" "${EB_SOURCE_ROOT}/include/*")
    list(FILTER EB_ASSEMBLY_INPUTS EXCLUDE REGEX "/src/bin/")
    set(EB_TRANSLATOR_INPUTS
        "${CMAKE_CURRENT_SOURCE_DIR}/tools/translate.py"
        "${CMAKE_CURRENT_SOURCE_DIR}/tools/spc700.py"
        "${CMAKE_CURRENT_SOURCE_DIR}/tools/asset_layout.py")
    # A source rename/addition can change the compilation unit inventory.
    # Refresh it before CMake creates build rules, and reconfigure whenever any
    # code-generation input changes. Never discover new units mid-build.
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
        ${EB_TRANSLATOR_INPUTS} ${EB_ASSEMBLY_INPUTS}
        "${EB_SOURCE_ROOT}/snes.cfg" "${EB_SOURCE_ROOT}/earthbound.yml" "${EB_SOURCE_ROOT}/mother2.yml")
    execute_process(COMMAND "${Python3_EXECUTABLE}" "${CMAKE_CURRENT_SOURCE_DIR}/tools/translate.py"
        --root "${EB_SOURCE_ROOT}" --output "${EB_GENERATED_DIR}"
        RESULT_VARIABLE EB_BOOTSTRAP_RESULT)
    if(NOT EB_BOOTSTRAP_RESULT EQUAL 0)
        message(FATAL_ERROR "Could not generate the assembly program source inventory")
    endif()
endif()
if(NOT EXISTS "${EB_PROGRAM_MANIFEST}")
    message(FATAL_ERROR "Incomplete EB_PREGENERATED_DIR: missing file ${EB_PROGRAM_MANIFEST}")
endif()
include("${EB_PROGRAM_MANIFEST}")
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${EB_PROGRAM_MANIFEST}")
set(EB_GENERATED_REPORTS
    "${EB_GENERATED_DIR}/coverage.json"
    "${EB_GENERATED_DIR}/source_map.json"
    "${EB_GENERATED_DIR}/spc_source_map.json"
    "${EB_GENERATED_DIR}/mode_variant_audit.json"
    "${EB_GENERATED_DIR}/source_profiles.json"
    "${EB_GENERATED_DIR}/audio_program_index.json"
    "${EB_PROGRAM_MANIFEST}")
set(EB_GENERATED_SOURCES
    "${EB_GENERATED_DIR}/translated_dispatch.cpp"
    ${EB_GENERATED_PROGRAM_SOURCES}
    "${EB_GENERATED_DIR}/generated_assets.cpp"
    "${EB_GENERATED_DIR}/generated_profiles.cpp")
set(EB_GENERATED_HEADERS "${EB_GENERATED_DIR}/generated_assets.hpp"
    "${EB_GENERATED_DIR}/generated_code.hpp" "${EB_GENERATED_DIR}/generated_audio_program.hpp"
    "${EB_GENERATED_DIR}/generated_profile.hpp")
# Both profiles are linked into one executable. Their separate namespaces keep
# identical SNES addresses from colliding; the imported pack selects the profile.
foreach(version us jp)
    list(APPEND EB_GENERATED_SOURCES "${EB_GENERATED_DIR}/${version}/generated_assets.cpp")
    list(APPEND EB_GENERATED_HEADERS "${EB_GENERATED_DIR}/${version}/generated_assets.hpp"
        "${EB_GENERATED_DIR}/${version}/generated_code.hpp")
    list(APPEND EB_GENERATED_REPORTS "${EB_GENERATED_DIR}/${version}/coverage.json"
        "${EB_GENERATED_DIR}/${version}/source_map.json" "${EB_GENERATED_DIR}/${version}/mode_variant_audit.json"
        "${EB_GENERATED_DIR}/${version}/program_index.json")
endforeach()
# Reject incomplete source snapshots during configuration instead of allowing a
# partial instruction dispatcher to fail much later at link time or during play.
if(EB_PREGENERATED_DIR)
    foreach(generated_file IN LISTS EB_GENERATED_SOURCES EB_GENERATED_HEADERS)
        if(NOT EXISTS "${generated_file}" OR IS_DIRECTORY "${generated_file}")
            message(FATAL_ERROR "Incomplete EB_PREGENERATED_DIR: missing file ${generated_file}")
        endif()
    endforeach()
    add_custom_target(eb_generate DEPENDS ${EB_GENERATED_SOURCES} ${EB_GENERATED_HEADERS})
    message(STATUS "Using existing generated C++: ${EB_GENERATED_DIR}")
else()
    # Missing generated products also trigger the configure-time generator.
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
        ${EB_GENERATED_SOURCES} ${EB_GENERATED_REPORTS} ${EB_GENERATED_HEADERS})
    add_custom_target(eb_generate DEPENDS ${EB_GENERATED_SOURCES} ${EB_GENERATED_REPORTS} ${EB_GENERATED_HEADERS})
endif()
# Separate game hardware, asset I/O, sound synthesis, and host presentation.
# Asset tests and rendering fixtures can then exercise their contracts without
# booting the game or requiring a retail asset pack.
add_library(eb_core STATIC
    src/main_cpu_65816.cpp src/entity_preload.cpp
    src/snes_bus.cpp src/snes_ppu_registers.cpp src/snes_ppu_renderer.cpp src/game_scene_renderer.cpp
    src/spc700_audio_cpu.cpp src/game_debug.cpp
    ${EB_GENERATED_SOURCES})
add_dependencies(eb_core eb_generate)
target_include_directories(eb_core PUBLIC include "${EB_GENERATED_DIR}")
add_library(eb_assets STATIC src/asset_store.cpp)
target_include_directories(eb_assets PUBLIC include)
add_library(eb_asset_cache STATIC src/asset_cache.cpp)
target_include_directories(eb_asset_cache PUBLIC include)
# A pure pixel transform: no Bus, CPU, SDL, or game assets are accessible here.
# Keeping the filter isolated makes its disabled identity and temporal limits
# testable without opening a window or altering the simulation clock.
add_library(eb_filter STATIC src/photosensitivity_filter.cpp src/frame_interpolator.cpp src/presentation_pipeline.cpp)
target_include_directories(eb_filter PUBLIC include)
if(MINGW)
    target_link_options(eb_core INTERFACE -static -static-libgcc -static-libstdc++)
    target_link_options(eb_assets INTERFACE -static -static-libgcc -static-libstdc++)
    target_link_options(eb_asset_cache INTERFACE -static -static-libgcc -static-libstdc++)
    target_link_options(eb_filter INTERFACE -static -static-libgcc -static-libstdc++)
endif()

add_library(eb_dsp STATIC src/snes_audio_dsp.cpp external/spc_dsp/SPC_DSP.cpp)
target_include_directories(eb_dsp PUBLIC include PRIVATE external/spc_dsp)
install(DIRECTORY external/spc_dsp/ DESTINATION share/eb_cpp/spc_dsp)
if(MINGW)
    target_link_options(eb_dsp INTERFACE -static -static-libgcc -static-libstdc++)
endif()
# A deterministic game owns its hardware and processor lifetimes; no SDL is needed.
add_library(eb_session STATIC src/game_session.cpp)
target_include_directories(eb_session PUBLIC include)
target_link_libraries(eb_session PUBLIC eb_core eb_dsp)
if(MSVC)
    target_compile_options(eb_core PRIVATE /W4 /permissive-)
else()
    target_compile_options(eb_core PRIVATE -Wall -Wextra -Wpedantic)
endif()

# Desktop dependencies stay out of the core-only configuration. SDL supplies
# windows/input/audio; FramePresenter and the ImGui backend share its GL context.
if(EB_BUILD_FRONTEND)
    # The application supplies its own native entry point and console policy.
    set(SDL2_NO_MWINDOWS TRUE)
    find_package(SDL2 CONFIG QUIET)
    if(NOT TARGET SDL2::SDL2)
        find_package(PkgConfig REQUIRED)
        pkg_check_modules(SDL2 REQUIRED IMPORTED_TARGET sdl2)
        add_library(SDL2::SDL2 ALIAS PkgConfig::SDL2)
    endif()
    find_package(OpenGL REQUIRED)
    add_library(eb_video STATIC src/frame_presenter.cpp)
    target_include_directories(eb_video PUBLIC include)
    target_compile_definitions(eb_video PUBLIC SDL_MAIN_HANDLED)
    target_link_libraries(eb_video PUBLIC SDL2::SDL2 OpenGL::GL)
    add_library(eb_imgui STATIC
        external/imgui/imgui.cpp external/imgui/imgui_draw.cpp
        external/imgui/imgui_tables.cpp external/imgui/imgui_widgets.cpp
        external/imgui/backends/imgui_impl_sdl2.cpp
        external/imgui/backends/imgui_impl_opengl2.cpp)
    target_include_directories(eb_imgui PUBLIC external/imgui)
    target_link_libraries(eb_imgui PUBLIC SDL2::SDL2 OpenGL::GL)
    add_library(eb_debug_panel STATIC src/debug_panel.cpp)
    target_include_directories(eb_debug_panel PUBLIC include)
    target_link_libraries(eb_debug_panel PRIVATE eb_imgui PUBLIC SDL2::SDL2 OpenGL::GL)
    target_compile_definitions(eb_debug_panel PUBLIC SDL_MAIN_HANDLED)
    install(DIRECTORY external/imgui/ DESTINATION share/eb_cpp/imgui)
    install(DIRECTORY external/sdl2/ DESTINATION share/eb_cpp/sdl2)
    add_library(eb_desktop_support STATIC
        src/launch_options.cpp src/display_preferences.cpp src/input_replay.cpp
        src/session_storage.cpp src/audio_output.cpp)
    target_include_directories(eb_desktop_support PUBLIC include)
    target_link_libraries(eb_desktop_support PUBLIC eb_video)
    add_library(eb_desktop STATIC src/desktop_display.cpp src/desktop_input.cpp)
    target_include_directories(eb_desktop PUBLIC include)
    target_link_libraries(eb_desktop PUBLIC eb_desktop_support eb_debug_panel eb_assets eb_asset_cache eb_core)
    add_executable(eb_cpp src/desktop_application.cpp)
    if(UNIX AND NOT APPLE)
        # Release ZIPs place their SDL/C++ runtimes next to the application in
        # lib/. Resolve from the executable, never the caller's working directory.
        # The second path also supports the compatibility bin/ install layout.
        set_target_properties(eb_cpp PROPERTIES
            BUILD_WITH_INSTALL_RPATH TRUE
            INSTALL_RPATH "$ORIGIN/lib;$ORIGIN/../lib")
    endif()
    # Windows Explorer and shortcuts read the executable's ICON resource. The
    # checked-in ICO is derived from the same saturn.png used by the SDL window.
    if(WIN32)
        set_target_properties(eb_cpp PROPERTIES WIN32_EXECUTABLE TRUE)
        target_sources(eb_cpp PRIVATE src/windows_entry.cpp)
        target_link_libraries(eb_cpp PRIVATE shell32 user32)
        if(MINGW)
            target_link_options(eb_cpp PRIVATE -municode)
        endif()
        enable_language(RC)
        configure_file(resources/phase-distorter.rc.in
            "${CMAKE_CURRENT_BINARY_DIR}/phase-distorter.rc" @ONLY)
        target_sources(eb_cpp PRIVATE "${CMAKE_CURRENT_BINARY_DIR}/phase-distorter.rc")
    endif()
    add_dependencies(eb_cpp eb_generate)
    target_link_libraries(eb_cpp PRIVATE eb_session eb_desktop eb_filter)
    if(MINGW)
        # Keep the package self-contained except for SDL2.dll and Windows system DLLs.
        target_link_options(eb_video INTERFACE -static -static-libgcc -static-libstdc++)
    endif()
    # A runtime DLL is available here only when SDL exports a shared-library
    # target. Other SDL configurations leave runtime deployment to the packager.
    if(WIN32 AND TARGET SDL2::SDL2)
        get_target_property(EB_SDL_TYPE SDL2::SDL2 TYPE)
        if(EB_SDL_TYPE STREQUAL "SHARED_LIBRARY")
            # The standalone parent uses this property to install a second DLL
            # beside its directly launched root executable without target scope issues.
            set_property(TARGET eb_cpp PROPERTY PHASE_DISTORTER_SDL_SHARED TRUE)
            add_custom_command(TARGET eb_cpp POST_BUILD
                COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                "$<TARGET_FILE:SDL2::SDL2>" "$<TARGET_FILE_DIR:eb_cpp>"
                VERBATIM)
            install(FILES "$<TARGET_FILE:SDL2::SDL2>" DESTINATION bin)
        endif()
    endif()
    install(TARGETS eb_cpp RUNTIME DESTINATION bin)
    install(FILES resources/phase-distorter.png resources/phase-distorter.ico
        DESTINATION share/eb_cpp/icons)
endif()

# Register only synthetic, asset-free checks in default CTest. Optional route
# and scene executables are built below but require an explicit local pack.
if(EB_BUILD_TESTS)
    enable_testing()
    add_executable(game_session_tests tests/game_session_tests.cpp)
    target_link_libraries(game_session_tests PRIVATE eb_session)
    add_test(NAME game_session_tests COMMAND game_session_tests)
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/game_session_differential.cpp")
        add_executable(game_session_differential tests/game_session_differential.cpp)
        target_link_libraries(game_session_differential PRIVATE eb_session eb_assets)
    endif()
    add_executable(scene_renderer_ownership_tests tests/scene_renderer_ownership_tests.cpp)
    target_link_libraries(scene_renderer_ownership_tests PRIVATE eb_core)
    add_test(NAME scene_renderer_ownership_tests COMMAND scene_renderer_ownership_tests)
    add_executable(presentation_pipeline_tests tests/presentation_pipeline_tests.cpp)
    target_link_libraries(presentation_pipeline_tests PRIVATE eb_filter)
    add_test(NAME presentation_pipeline_tests COMMAND presentation_pipeline_tests)
    add_executable(photosensitivity_filter_tests tests/photosensitivity_filter_tests.cpp)
    target_link_libraries(photosensitivity_filter_tests PRIVATE eb_filter)
    add_test(NAME photosensitivity_filter_tests COMMAND photosensitivity_filter_tests)
    add_executable(asset_store_tests tests/asset_store_tests.cpp)
    target_link_libraries(asset_store_tests PRIVATE eb_assets)
    add_test(NAME asset_store_tests COMMAND asset_store_tests)
    add_executable(asset_cache_tests tests/asset_cache_tests.cpp)
    target_link_libraries(asset_cache_tests PRIVATE eb_asset_cache)
    add_test(NAME asset_cache_tests COMMAND asset_cache_tests)
    add_executable(entity_preload_tests tests/entity_preload_tests.cpp)
    target_link_libraries(entity_preload_tests PRIVATE eb_core)
    add_test(NAME entity_preload_tests COMMAND entity_preload_tests)
    add_executable(gameplay_timing_tests tests/gameplay_timing_tests.cpp)
    target_link_libraries(gameplay_timing_tests PRIVATE eb_core)
    add_test(NAME gameplay_timing_tests COMMAND gameplay_timing_tests)
    add_executable(frame_interpolator_tests tests/frame_interpolator_tests.cpp)
    target_link_libraries(frame_interpolator_tests PRIVATE eb_filter)
    add_test(NAME frame_interpolator_tests COMMAND frame_interpolator_tests)
    add_executable(frame_pacer_tests tests/frame_pacer_tests.cpp)
    target_include_directories(frame_pacer_tests PRIVATE include)
    if(MINGW)
        target_link_options(frame_pacer_tests PRIVATE -static -static-libgcc -static-libstdc++)
    endif()
    add_test(NAME frame_pacer_tests COMMAND frame_pacer_tests)
    add_test(NAME translation_tests COMMAND "${Python3_EXECUTABLE}"
        "${CMAKE_CURRENT_SOURCE_DIR}/tests/test_translate.py")
    add_executable(snes_audio_dsp_tests tests/snes_audio_dsp_tests.cpp)
    target_link_libraries(snes_audio_dsp_tests PRIVATE eb_dsp)
    add_test(NAME snes_audio_dsp_tests COMMAND snes_audio_dsp_tests)
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/game_smoke.cpp")
        add_executable(game_smoke tests/game_smoke.cpp)
        target_link_libraries(game_smoke PRIVATE eb_core eb_dsp eb_assets)
    endif()
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/presentation_differential.cpp")
        add_executable(presentation_differential tests/presentation_differential.cpp)
        target_link_libraries(presentation_differential PRIVATE eb_core eb_dsp eb_assets eb_filter)
    endif()
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/presentation_scene_tests.cpp")
        add_executable(presentation_scene_tests tests/presentation_scene_tests.cpp)
        target_link_libraries(presentation_scene_tests PRIVATE eb_core eb_assets)
    endif()
    if(EB_BUILD_FRONTEND)
        add_executable(desktop_support_tests tests/desktop_support_tests.cpp)
        target_link_libraries(desktop_support_tests PRIVATE eb_desktop_support)
        add_test(NAME desktop_support_tests COMMAND desktop_support_tests)
        add_executable(debug_panel_tests tests/debug_panel_tests.cpp)
        target_link_libraries(debug_panel_tests PRIVATE eb_debug_panel eb_imgui)
        if(MINGW)
            target_link_options(debug_panel_tests PRIVATE -static -static-libgcc -static-libstdc++)
        endif()
        add_executable(presentation_wait_probe tests/presentation_wait_probe.cpp)
        target_include_directories(presentation_wait_probe PRIVATE include)
        target_compile_definitions(presentation_wait_probe PRIVATE SDL_MAIN_HANDLED)
        target_link_libraries(presentation_wait_probe PRIVATE eb_video)
        add_executable(video_tests tests/video_tests.cpp)
        target_link_libraries(video_tests PRIVATE eb_video)
        if(WIN32 AND EB_SDL_TYPE STREQUAL "SHARED_LIBRARY")
            add_custom_command(TARGET debug_panel_tests POST_BUILD
                COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                "$<TARGET_FILE:SDL2::SDL2>" "$<TARGET_FILE_DIR:debug_panel_tests>"
                VERBATIM)
            add_custom_command(TARGET video_tests POST_BUILD
                COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                "$<TARGET_FILE:SDL2::SDL2>" "$<TARGET_FILE_DIR:video_tests>"
                VERBATIM)
        endif()
        if(NOT CMAKE_CROSSCOMPILING AND UNIX)
            find_program(EB_XVFB_RUN xvfb-run)
        endif()
        # Use a known drawable size and the X11 SDL backend for deterministic GL
        # readback. Without Xvfb, these checks need the caller's desktop display.
        if(EB_XVFB_RUN)
            add_test(NAME video_tests COMMAND "${EB_XVFB_RUN}" -a -s "-screen 0 1920x1080x24" "$<TARGET_FILE:video_tests>")
            add_test(NAME debug_panel_tests COMMAND "${EB_XVFB_RUN}" -a -s "-screen 0 1920x1080x24" "$<TARGET_FILE:debug_panel_tests>")
            # xvfb-run -a can race when parallel tests choose the same free display.
            set_tests_properties(video_tests debug_panel_tests PROPERTIES
                ENVIRONMENT "SDL_VIDEODRIVER=x11" RESOURCE_LOCK xvfb_display)
        else()
            add_test(NAME video_tests COMMAND video_tests)
            add_test(NAME debug_panel_tests COMMAND debug_panel_tests)
        endif()
    endif()
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/main_cpu_65816_tests.cpp")
        add_executable(main_cpu_65816_tests tests/main_cpu_65816_tests.cpp)
        target_link_libraries(main_cpu_65816_tests PRIVATE eb_core)
        add_test(NAME main_cpu_65816_tests COMMAND main_cpu_65816_tests)
    endif()
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/snes_bus_tests.cpp")
        add_executable(snes_bus_tests tests/snes_bus_tests.cpp)
        target_link_libraries(snes_bus_tests PRIVATE eb_core)
        add_test(NAME snes_bus_tests COMMAND snes_bus_tests)
    endif()
    add_executable(widescreen_tests tests/widescreen_tests.cpp)
    target_link_libraries(widescreen_tests PRIVATE eb_core)
    add_test(NAME widescreen_tests COMMAND widescreen_tests)
    add_executable(game_debug_tests tests/game_debug_tests.cpp)
    target_link_libraries(game_debug_tests PRIVATE eb_core eb_assets eb_dsp)
    add_test(NAME game_debug_tests COMMAND game_debug_tests)
    add_executable(battle_animation_tests tests/battle_animation_tests.cpp)
    target_link_libraries(battle_animation_tests PRIVATE eb_core eb_assets)
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/spc700_audio_cpu_tests.cpp")
        add_executable(spc700_audio_cpu_tests tests/spc700_audio_cpu_tests.cpp)
        target_link_libraries(spc700_audio_cpu_tests PRIVATE eb_core)
        add_test(NAME spc700_audio_cpu_tests COMMAND spc700_audio_cpu_tests)
    endif()
    if(NOT CMAKE_CROSSCOMPILING AND EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/main_cpu_instruction_vectors.cpp")
        find_package(nlohmann_json CONFIG QUIET)
        if(TARGET nlohmann_json::nlohmann_json)
            add_executable(main_cpu_instruction_vectors tests/main_cpu_instruction_vectors.cpp)
            target_link_libraries(main_cpu_instruction_vectors PRIVATE eb_core nlohmann_json::nlohmann_json)
            if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/spc700_instruction_vectors.cpp")
                add_executable(spc700_instruction_vectors tests/spc700_instruction_vectors.cpp)
                target_link_libraries(spc700_instruction_vectors PRIVATE eb_core nlohmann_json::nlohmann_json)
            endif()
        endif()
    endif()
endif()
