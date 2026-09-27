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
set(EB_GENERATED_REPORTS
    "${EB_GENERATED_DIR}/coverage.json"
    "${EB_GENERATED_DIR}/source_map.json"
    "${EB_GENERATED_DIR}/spc_source_map.json"
    "${EB_GENERATED_DIR}/mode_variant_audit.json"
    "${EB_GENERATED_DIR}/source_profiles.json")
set(EB_GENERATED_SOURCES
    "${EB_GENERATED_DIR}/translated_dispatch.cpp"
    "${EB_GENERATED_DIR}/spc_translated.cpp"
    "${EB_GENERATED_DIR}/generated_assets.cpp"
    "${EB_GENERATED_DIR}/generated_profiles.cpp")
set(EB_GENERATED_HEADERS "${EB_GENERATED_DIR}/generated_assets.hpp"
    "${EB_GENERATED_DIR}/generated_code.hpp" "${EB_GENERATED_DIR}/generated_spc.hpp"
    "${EB_GENERATED_DIR}/generated_profile.hpp")
# Both profiles are linked into one executable. Their separate namespaces keep
# identical SNES addresses from colliding; the imported pack selects the profile.
foreach(version us jp)
    list(APPEND EB_GENERATED_SOURCES "${EB_GENERATED_DIR}/${version}/translated_dispatch.cpp"
        "${EB_GENERATED_DIR}/${version}/generated_assets.cpp")
    list(APPEND EB_GENERATED_HEADERS "${EB_GENERATED_DIR}/${version}/generated_assets.hpp"
        "${EB_GENERATED_DIR}/${version}/generated_code.hpp")
    list(APPEND EB_GENERATED_REPORTS "${EB_GENERATED_DIR}/${version}/coverage.json"
        "${EB_GENERATED_DIR}/${version}/source_map.json" "${EB_GENERATED_DIR}/${version}/mode_variant_audit.json")
    foreach(bank RANGE 192 255)
        math(EXPR bank_hex "${bank}" OUTPUT_FORMAT HEXADECIMAL)
        string(SUBSTRING "${bank_hex}" 2 -1 bank_hex)
        list(APPEND EB_GENERATED_SOURCES "${EB_GENERATED_DIR}/${version}/translated_bank_${bank_hex}.cpp")
    endforeach()
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
    add_custom_command(
        OUTPUT ${EB_GENERATED_SOURCES} ${EB_GENERATED_REPORTS} ${EB_GENERATED_HEADERS}
        COMMAND "${Python3_EXECUTABLE}" "${CMAKE_CURRENT_SOURCE_DIR}/tools/translate.py"
            --root "${EB_SOURCE_ROOT}" --output "${EB_GENERATED_DIR}"
        DEPENDS ${EB_TRANSLATOR_INPUTS}
            "${EB_SOURCE_ROOT}/snes.cfg" "${EB_SOURCE_ROOT}/earthbound.yml"
            "${EB_SOURCE_ROOT}/mother2.yml" ${EB_ASSEMBLY_INPUTS}
        COMMENT "Translate source instructions without reading retail assets"
        VERBATIM)
    add_custom_target(eb_generate DEPENDS ${EB_GENERATED_SOURCES} ${EB_GENERATED_REPORTS} ${EB_GENERATED_HEADERS})
endif()
# Separate game hardware, asset I/O, sound synthesis, and host presentation.
# Asset tests and rendering fixtures can then exercise their contracts without
# booting the game or requiring a retail asset pack.
add_library(eb_core STATIC src/cpu.cpp src/bus.cpp src/spc.cpp ${EB_GENERATED_SOURCES})
add_dependencies(eb_core eb_generate)
target_include_directories(eb_core PUBLIC include "${EB_GENERATED_DIR}")
add_library(eb_assets STATIC src/asset_store.cpp)
target_include_directories(eb_assets PUBLIC include)
add_library(eb_asset_cache STATIC src/asset_cache.cpp)
target_include_directories(eb_asset_cache PUBLIC include)
# A pure pixel transform: no Bus, CPU, SDL, or game assets are accessible here.
# Keeping the filter isolated makes its disabled identity and temporal limits
# testable without opening a window or altering the simulation clock.
add_library(eb_filter STATIC src/photosensitivity_filter.cpp)
target_include_directories(eb_filter PUBLIC include)
if(MINGW)
    target_link_options(eb_core INTERFACE -static -static-libgcc -static-libstdc++)
    target_link_options(eb_assets INTERFACE -static -static-libgcc -static-libstdc++)
    target_link_options(eb_asset_cache INTERFACE -static -static-libgcc -static-libstdc++)
    target_link_options(eb_filter INTERFACE -static -static-libgcc -static-libstdc++)
endif()

add_library(eb_dsp STATIC src/dsp.cpp external/spc_dsp/SPC_DSP.cpp)
target_include_directories(eb_dsp PUBLIC include PRIVATE external/spc_dsp)
install(DIRECTORY external/spc_dsp/ DESTINATION share/eb_cpp/spc_dsp)
if(MINGW)
    target_link_options(eb_dsp INTERFACE -static -static-libgcc -static-libstdc++)
endif()
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
    add_executable(eb_cpp src/main.cpp)
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
    target_link_libraries(eb_cpp PRIVATE eb_core eb_video eb_dsp eb_debug_panel eb_assets eb_asset_cache eb_filter)
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
    add_executable(photosensitivity_filter_tests tests/photosensitivity_filter_tests.cpp)
    target_link_libraries(photosensitivity_filter_tests PRIVATE eb_filter)
    add_test(NAME photosensitivity_filter_tests COMMAND photosensitivity_filter_tests)
    add_executable(asset_store_tests tests/asset_store_tests.cpp)
    target_link_libraries(asset_store_tests PRIVATE eb_assets)
    add_test(NAME asset_store_tests COMMAND asset_store_tests)
    add_executable(asset_cache_tests tests/asset_cache_tests.cpp)
    target_link_libraries(asset_cache_tests PRIVATE eb_asset_cache)
    add_test(NAME asset_cache_tests COMMAND asset_cache_tests)
    add_executable(frame_pacer_tests tests/frame_pacer_tests.cpp)
    target_include_directories(frame_pacer_tests PRIVATE include)
    if(MINGW)
        target_link_options(frame_pacer_tests PRIVATE -static -static-libgcc -static-libstdc++)
    endif()
    add_test(NAME frame_pacer_tests COMMAND frame_pacer_tests)
    add_test(NAME translation_tests COMMAND "${Python3_EXECUTABLE}"
        "${CMAKE_CURRENT_SOURCE_DIR}/tests/test_translate.py")
    add_executable(dsp_tests tests/dsp_tests.cpp)
    target_link_libraries(dsp_tests PRIVATE eb_dsp)
    add_test(NAME dsp_tests COMMAND dsp_tests)
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/game_smoke.cpp")
        add_executable(game_smoke tests/game_smoke.cpp)
        target_link_libraries(game_smoke PRIVATE eb_core eb_dsp eb_assets)
    endif()
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/presentation_differential.cpp")
        add_executable(presentation_differential tests/presentation_differential.cpp)
        target_link_libraries(presentation_differential PRIVATE eb_core eb_dsp eb_assets)
    endif()
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/presentation_scene_tests.cpp")
        add_executable(presentation_scene_tests tests/presentation_scene_tests.cpp)
        target_link_libraries(presentation_scene_tests PRIVATE eb_core eb_assets)
    endif()
    if(EB_BUILD_FRONTEND)
        add_executable(debug_panel_tests tests/debug_panel_tests.cpp)
        target_link_libraries(debug_panel_tests PRIVATE eb_debug_panel eb_imgui)
        if(MINGW)
            target_link_options(debug_panel_tests PRIVATE -static -static-libgcc -static-libstdc++)
        endif()
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
            set_tests_properties(video_tests debug_panel_tests PROPERTIES ENVIRONMENT "SDL_VIDEODRIVER=x11")
        else()
            add_test(NAME video_tests COMMAND video_tests)
            add_test(NAME debug_panel_tests COMMAND debug_panel_tests)
        endif()
    endif()
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/cpu_tests.cpp")
        add_executable(cpu_tests tests/cpu_tests.cpp)
        target_link_libraries(cpu_tests PRIVATE eb_core)
        add_test(NAME cpu_tests COMMAND cpu_tests)
    endif()
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/bus_tests.cpp")
        add_executable(bus_tests tests/bus_tests.cpp)
        target_link_libraries(bus_tests PRIVATE eb_core)
        add_test(NAME bus_tests COMMAND bus_tests)
    endif()
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/spc_tests.cpp")
        add_executable(spc_tests tests/spc_tests.cpp)
        target_link_libraries(spc_tests PRIVATE eb_core)
        add_test(NAME spc_tests COMMAND spc_tests)
    endif()
    if(NOT CMAKE_CROSSCOMPILING AND EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/cpu_vectors.cpp")
        find_package(nlohmann_json CONFIG QUIET)
        if(TARGET nlohmann_json::nlohmann_json)
            add_executable(cpu_vectors tests/cpu_vectors.cpp)
            target_link_libraries(cpu_vectors PRIVATE eb_core nlohmann_json::nlohmann_json)
            if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/spc_vectors.cpp")
                add_executable(spc_vectors tests/spc_vectors.cpp)
                target_link_libraries(spc_vectors PRIVATE eb_core nlohmann_json::nlohmann_json)
            endif()
        endif()
    endif()
endif()
