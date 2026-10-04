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
option(EB_GAMEPLAY_AUDIT "Instrument ordered hardware accesses for runtime differential checks" OFF)
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
        "${CMAKE_CURRENT_SOURCE_DIR}/tools/asset_layout.py"
        "${CMAKE_CURRENT_SOURCE_DIR}/tools/port_game_runtime.py"
        "${CMAKE_CURRENT_SOURCE_DIR}/tools/game_runtime_ownership.py"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/eb/game/runtime/instruction.hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/main_cpu_65816_opcodes.inc")
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
set(EB_RUNTIME_MANIFEST "${EB_GENERATED_DIR}/game_runtime_sources.cmake")
if(NOT EXISTS "${EB_RUNTIME_MANIFEST}")
    message(FATAL_ERROR "Incomplete EB_PREGENERATED_DIR: missing file ${EB_RUNTIME_MANIFEST}")
endif()
include("${EB_RUNTIME_MANIFEST}")
set(EB_RUNTIME_REPORTS "${EB_RUNTIME_MANIFEST}" "${EB_GENERATED_DIR}/game_runtime_manifest.json"
    "${EB_GENERATED_DIR}/us/game/runtime_index.json" "${EB_GENERATED_DIR}/jp/game/runtime_index.json")
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS ${EB_RUNTIME_REPORTS})
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
    foreach(generated_file IN LISTS EB_GENERATED_SOURCES EB_GENERATED_HEADERS EB_GAME_RUNTIME_SOURCES EB_RUNTIME_REPORTS)
        if(NOT EXISTS "${generated_file}" OR IS_DIRECTORY "${generated_file}")
            message(FATAL_ERROR "Incomplete EB_PREGENERATED_DIR: missing file ${generated_file}")
        endif()
    endforeach()
    add_custom_target(eb_generate DEPENDS ${EB_GENERATED_SOURCES} ${EB_GENERATED_HEADERS} ${EB_GAME_RUNTIME_SOURCES} ${EB_RUNTIME_REPORTS})
    message(STATUS "Using existing generated C++: ${EB_GENERATED_DIR}")
else()
    # Missing generated products also trigger the configure-time generator.
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
        ${EB_GENERATED_SOURCES} ${EB_GENERATED_REPORTS} ${EB_GENERATED_HEADERS} ${EB_GAME_RUNTIME_SOURCES} ${EB_RUNTIME_REPORTS})
    add_custom_target(eb_generate DEPENDS ${EB_GENERATED_SOURCES} ${EB_GENERATED_REPORTS} ${EB_GENERATED_HEADERS} ${EB_GAME_RUNTIME_SOURCES} ${EB_RUNTIME_REPORTS})
endif()
# Separate game hardware, asset I/O, sound synthesis, and host presentation.
# Asset tests and rendering fixtures can then exercise their contracts without
# booting the game or requiring a retail asset pack.
add_library(eb_scene STATIC src/direct_scene.cpp)
target_include_directories(eb_scene PUBLIC include)
# Small source-owned routines stay separate for navigation. Unity batches keep
# their shared continuation header from dominating build time.
add_library(eb_game_runtime OBJECT ${EB_GAME_RUNTIME_SOURCES})
target_include_directories(eb_game_runtime PRIVATE include "${EB_GENERATED_DIR}")
set_target_properties(eb_game_runtime PROPERTIES UNITY_BUILD ON UNITY_BUILD_BATCH_SIZE 24)
add_dependencies(eb_game_runtime eb_generate)
add_library(eb_core STATIC
    src/game/runtime/instruction.cpp
    src/game/runtime/native_execution.cpp
    src/game/entities/npc_collision.cpp
    src/game/entities/npc_collision_execution.cpp
    src/game/enemies/battle/targeting.cpp
    src/game/enemies/battle/targeting_execution.cpp
    src/game/dialogue/register_bank.cpp
    src/game/dialogue/control_flow.cpp
    src/game/dialogue/register_execution.cpp
    src/game/cutscenes/credits_state.cpp
    src/game/cutscenes/credits_execution.cpp
    $<TARGET_OBJECTS:eb_game_runtime>
    src/main_cpu_65816.cpp src/entity_preload.cpp src/source_entity_admission.cpp src/source_enemy_preload.cpp
    src/snes_bus.cpp src/battle_sprite_bus.cpp src/snes_ppu_registers.cpp src/snes_ppu_renderer.cpp src/game_scene_renderer.cpp src/direct_scene_capture.cpp src/game_scene_snapshot.cpp
    src/spc700_audio_cpu.cpp src/game_debug.cpp src/overworld_sprite_bridge.cpp
    src/overworld_sprite_runtime.cpp src/overworld_sprite_draw.cpp src/overworld_sprite_effects.cpp
    src/actor_surface_service.cpp src/actor_draw_order_service.cpp src/map_strip_service.cpp
    src/actor_fade_service.cpp src/enemy_sprite_preparation.cpp
    ${EB_GENERATED_SOURCES})
add_dependencies(eb_core eb_generate)
if(EB_GAMEPLAY_AUDIT)
    target_compile_definitions(eb_core PUBLIC EB_GAMEPLAY_AUDIT)
endif()
target_include_directories(eb_core PUBLIC include "${EB_GENERATED_DIR}")
target_link_libraries(eb_core PUBLIC eb_scene)
add_library(eb_assets STATIC src/asset_store.cpp)
target_include_directories(eb_assets PUBLIC include)
# Native engine code has no dependency on the compatibility runtime. Keep its
# content-import registry separate so asset probes need not link eb_core either.
add_library(eb_native_engine STATIC
    src/overworld_sprite_allocation.cpp
    src/native/sprite_resources.cpp src/native/sprite_effects.cpp src/native/overlay_sprites.cpp src/native/world_overlay_playback.cpp src/native/custom_sprites.cpp
    src/native/sprite_actors.cpp src/native/action_scripts.cpp src/native/actor_draw_order.cpp src/native/map_strip.cpp
    src/native/frame_fade.cpp
    src/native/npc_catalog.cpp src/native/action_bindings.cpp src/native/action_program.cpp src/native/sprite_appearance.cpp
    src/native/stationary_npc_sprites.cpp src/native/npc_sprite_readiness.cpp src/native/sprite_image_leases.cpp
    src/native/enemy_sprite_catalog.cpp src/native/enemy_sprite_readiness.cpp
    src/native/appearance_service.cpp src/native/world_collision.cpp src/native/world_movement.cpp
    src/native/actor_creation.cpp src/native/camera_refresh.cpp
    src/native/content_compression.cpp src/native/world_palette_animation.cpp src/native/world_activation.cpp
    src/native/world_enemies.cpp src/native/world_actor_services.cpp src/native/world_streaming.cpp
    src/native/world_actor_movement.cpp src/native/world_party.cpp
    src/native/world_party_movement.cpp src/native/world_party_creation.cpp
    src/native/world_party_following.cpp
    src/native/character_growth.cpp src/native/visible_character_growth.cpp
    src/native/battle_background.cpp src/native/battle_background_scene.cpp src/native/battle_combatants.cpp
    src/native/battle_formation.cpp
    src/native/saves/archive.cpp src/native/saves/session.cpp src/native/palette_transition.cpp
    src/native/world_palettes.cpp src/native/actor_world.cpp src/native/world_map.cpp src/native/world_scene.cpp)
target_include_directories(eb_native_engine PUBLIC include)
target_link_libraries(eb_native_engine PUBLIC eb_scene)
# The transitional session adapter consumes native images; the native library
# itself remains independent of CPU/bus/graphics-memory implementations.
target_link_libraries(eb_core PUBLIC eb_native_engine)
add_library(eb_native_asset_profiles STATIC
    "${EB_GENERATED_DIR}/generated_assets.cpp"
    "${EB_GENERATED_DIR}/us/generated_assets.cpp"
    "${EB_GENERATED_DIR}/jp/generated_assets.cpp")
target_include_directories(eb_native_asset_profiles PUBLIC include "${EB_GENERATED_DIR}")
add_dependencies(eb_native_asset_profiles eb_generate)
add_library(eb_asset_cache STATIC src/asset_cache.cpp)
target_include_directories(eb_asset_cache PUBLIC include)
# A pure pixel transform: no Bus, CPU, SDL, or game assets are accessible here.
# Keeping the filter isolated makes its disabled identity and temporal limits
# testable without opening a window or altering the simulation clock.
add_library(eb_filter STATIC src/photosensitivity_filter.cpp src/frame_interpolator.cpp src/presentation_pipeline.cpp)
target_include_directories(eb_filter PUBLIC include)
target_link_libraries(eb_filter PUBLIC eb_scene)
if(MINGW)
    target_link_options(eb_scene INTERFACE -static -static-libgcc -static-libstdc++)
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
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS resources/shaders/crt_oled.frag)
    file(READ "${CMAKE_CURRENT_SOURCE_DIR}/resources/shaders/crt_oled.frag" EB_CRT_SHADER)
    configure_file(resources/shaders/crt_shader_source.hpp.in "${CMAKE_CURRENT_BINARY_DIR}/crt_shader_source.hpp" @ONLY)
    add_library(eb_video STATIC src/frame_presenter.cpp src/crt_filter.cpp src/scene_effects_renderer.cpp)
    target_include_directories(eb_video PRIVATE "${CMAKE_CURRENT_BINARY_DIR}")
    install(DIRECTORY external/crt-lottes-fast/ DESTINATION share/eb_cpp/crt-lottes-fast)
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
        src/launch_options.cpp src/display_preferences.cpp src/controller_preferences.cpp src/input_replay.cpp
        src/session_storage.cpp src/audio_output.cpp src/snapshot_store.cpp)
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
    add_executable(background_row_tests tests/background_row_tests.cpp)
    target_link_libraries(background_row_tests PRIVATE eb_core)
    add_test(NAME background_row_tests COMMAND background_row_tests)
    add_executable(audio_playback_tests tests/audio_playback_tests.cpp)
    target_include_directories(audio_playback_tests PRIVATE include)
    add_test(NAME audio_playback_tests COMMAND audio_playback_tests)
    add_executable(game_runtime_instruction_tests tests/game_runtime_instruction_tests.cpp)
    target_link_libraries(game_runtime_instruction_tests PRIVATE eb_core)
    add_test(NAME game_runtime_instruction_tests COMMAND game_runtime_instruction_tests)
    add_test(NAME game_runtime_codegen_tests COMMAND "${Python3_EXECUTABLE}"
        "${CMAKE_CURRENT_SOURCE_DIR}/tests/test_game_runtime_codegen.py")
    add_test(NAME game_runtime_ownership_tests COMMAND "${Python3_EXECUTABLE}"
        "${CMAKE_CURRENT_SOURCE_DIR}/tests/test_game_runtime_ownership.py")
    add_test(NAME game_runtime_codegen_check COMMAND "${Python3_EXECUTABLE}"
        "${CMAKE_CURRENT_SOURCE_DIR}/tools/port_game_runtime.py"
        --root "${CMAKE_CURRENT_SOURCE_DIR}/.." --generated "${EB_GENERATED_DIR}" --check)
    add_executable(gameplay_runtime_differential tests/gameplay_runtime_differential.cpp src/snapshot_store.cpp)
    target_link_libraries(gameplay_runtime_differential PRIVATE eb_session eb_assets)
    add_test(NAME gameplay_runtime_differential COMMAND gameplay_runtime_differential)
    add_executable(game_subsystem_tests tests/game_subsystem_tests.cpp)
    target_link_libraries(game_subsystem_tests PRIVATE eb_core eb_dsp eb_assets)
    add_test(NAME game_subsystem_tests COMMAND game_subsystem_tests)
    add_executable(dialogue_cutscene_tests tests/dialogue_cutscene_tests.cpp)
    target_link_libraries(dialogue_cutscene_tests PRIVATE eb_core)
    add_test(NAME dialogue_cutscene_tests COMMAND dialogue_cutscene_tests)
    foreach(game_test npc_collision_tests npc_collision_native_tests native_execution_budget_tests native_gameplay_tests
                      dialogue_register_tests dialogue_native_execution_tests
                      dialogue_transfer_tests credits_state_tests cutscene_native_execution_tests
                      battle_targeting_tests battle_targeting_native_tests)
        add_executable(${game_test} tests/${game_test}.cpp)
        target_link_libraries(${game_test} PRIVATE eb_core eb_dsp)
        add_test(NAME ${game_test} COMMAND ${game_test})
    endforeach()
    # Local imported assets are required, so this replay is not a default CTest.
    add_executable(native_gameplay_differential tests/native_gameplay_differential.cpp)
    target_link_libraries(native_gameplay_differential PRIVATE eb_core eb_dsp eb_assets)
    add_executable(native_sprite_tests tests/native_sprite_tests.cpp)
    target_link_libraries(native_sprite_tests PRIVATE eb_native_engine)
    add_test(NAME native_sprite_tests COMMAND native_sprite_tests)
    add_executable(native_sprite_actor_tests tests/native_sprite_actor_tests.cpp)
    target_link_libraries(native_sprite_actor_tests PRIVATE eb_native_engine)
    add_test(NAME native_sprite_actor_tests COMMAND native_sprite_actor_tests)
    add_executable(native_sprite_surface_tests tests/native_sprite_surface_tests.cpp)
    target_link_libraries(native_sprite_surface_tests PRIVATE eb_native_engine)
    add_test(NAME native_sprite_surface_tests COMMAND native_sprite_surface_tests)
    add_executable(native_action_script_tests tests/native_action_script_tests.cpp)
    target_link_libraries(native_action_script_tests PRIVATE eb_native_engine)
    add_test(NAME native_action_script_tests COMMAND native_action_script_tests)
    add_executable(native_action_script_reference tests/native_action_script_reference.cpp)
    target_link_libraries(native_action_script_reference PRIVATE eb_native_engine eb_assets eb_core)
    add_executable(native_npc_catalog_tests tests/native_npc_catalog_tests.cpp)
    target_link_libraries(native_npc_catalog_tests PRIVATE eb_native_engine)
    add_test(NAME native_npc_catalog_tests COMMAND native_npc_catalog_tests)
    add_executable(threed_npc_restoration_tests tests/threed_npc_restoration_tests.cpp)
    target_link_libraries(threed_npc_restoration_tests PRIVATE eb_native_engine eb_core eb_assets eb_session)
    add_test(NAME threed_npc_restoration_tests COMMAND threed_npc_restoration_tests)
    add_executable(lost_underworld_reference tests/lost_underworld_reference.cpp src/input_replay.cpp)
    target_link_libraries(lost_underworld_reference PRIVATE eb_core eb_dsp eb_assets)
    add_executable(native_npc_catalog_reference tests/native_npc_catalog_reference.cpp)
    target_link_libraries(native_npc_catalog_reference PRIVATE eb_native_engine eb_assets eb_core)
    foreach(native_test native_actor_world_tests native_sprite_appearance_tests native_sprite_artwork_tests native_sprite_effect_tests native_custom_sprite_tests native_palette_tests
                        native_action_binding_tests native_action_program_tests native_world_map_tests
                        native_npc_sprite_readiness_tests native_enemy_sprite_tests
                        native_world_collision_tests native_appearance_service_tests native_world_movement_tests
                        native_actor_creation_tests native_camera_refresh_tests overworld_sprite_allocation_tests
                        native_palette_animation_tests native_save_tests native_world_activation_tests
                        native_palette_transition_tests native_save_session_tests native_world_enemies_tests
                        native_battle_background_tests native_world_actor_services_tests native_character_growth_tests
                        native_world_streaming_tests native_actor_replacement_tests native_visible_character_growth_tests
                        native_actor_creation_service_tests native_battle_background_scene_tests
                        native_world_actor_movement_tests native_world_party_tests native_battle_combatant_tests
                        native_world_party_movement_tests native_world_party_creation_tests native_battle_formation_tests
                        native_world_party_following_tests)
        add_executable(${native_test} tests/${native_test}.cpp)
        target_link_libraries(${native_test} PRIVATE eb_native_engine)
        add_test(NAME ${native_test} COMMAND ${native_test})
    endforeach()
    foreach(native_reference native_sprite_appearance_reference native_sprite_effect_reference
                             native_overlay_sprite_reference native_custom_sprite_reference native_palette_reference
                             native_stationary_npc_reference native_stationary_npc_render_reference native_npc_sprite_readiness_reference
                             native_enemy_sprite_reference
                             native_sprite_state_contract_reference
                             native_action_binding_reference native_action_input_reference
                             native_actor_world_reference native_world_map_reference
                             native_world_collision_reference native_appearance_service_reference
                             native_world_movement_reference native_actor_creation_reference
                             native_camera_refresh_reference native_appearance_return_reference
                             native_actor_roles_reference native_palette_animation_reference native_save_reference
                             native_world_activation_reference npc_preload_reference enemy_preload_reference native_palette_transition_reference
                             native_save_session_reference
                             native_world_enemies_reference
                             native_battle_background_reference native_world_actor_services_reference native_character_growth_reference
                             native_world_streaming_reference native_actor_replacement_reference native_visible_character_growth_reference
                             native_actor_creation_service_reference native_battle_background_scene_reference
                             native_world_actor_movement_reference native_world_party_reference native_battle_combatant_reference
                             native_world_party_movement_reference native_world_party_creation_reference native_battle_formation_reference
                             native_world_party_following_reference
                             overworld_sprite_allocation_reference overworld_sprite_runtime_reference
                             overworld_sprite_effect_reference)
        add_executable(${native_reference} tests/${native_reference}.cpp)
        target_link_libraries(${native_reference} PRIVATE eb_native_engine eb_assets eb_core)
    endforeach()
    add_executable(native_sprite_assets tests/native_sprite_assets.cpp)
    target_link_libraries(native_sprite_assets PRIVATE eb_native_engine eb_assets eb_native_asset_profiles)
    add_executable(native_actor_world_assets tests/native_actor_world_assets.cpp)
    target_link_libraries(native_actor_world_assets PRIVATE eb_native_engine eb_assets eb_native_asset_profiles)
    add_executable(native_world_scene_assets tests/native_world_scene_assets.cpp)
    target_link_libraries(native_world_scene_assets PRIVATE eb_native_engine eb_assets eb_native_asset_profiles)
    add_executable(native_action_program_assets tests/native_action_program_assets.cpp)
    target_link_libraries(native_action_program_assets PRIVATE eb_native_engine eb_assets eb_native_asset_profiles)
    add_executable(native_action_inventory tools/native_action_inventory.cpp)
    target_link_libraries(native_action_inventory PRIVATE eb_native_engine eb_assets eb_native_asset_profiles)
    # Reference machinery is linked only by this opt-in verification program.
    add_executable(native_sprite_reference tests/native_sprite_reference.cpp)
    target_link_libraries(native_sprite_reference PRIVATE eb_native_engine eb_assets eb_core)
    add_executable(attract_mode_differential tests/attract_mode_differential.cpp)
    target_link_libraries(attract_mode_differential PRIVATE eb_session eb_assets)
    add_executable(host_sprite_differential tests/host_sprite_differential.cpp src/input_replay.cpp)
    target_link_libraries(host_sprite_differential PRIVATE eb_core eb_dsp eb_assets)
    add_executable(native_sprite_runtime_smoke tests/native_sprite_runtime_smoke.cpp src/input_replay.cpp)
    target_link_libraries(native_sprite_runtime_smoke PRIVATE eb_core eb_dsp eb_assets)
    add_executable(native_sprite_gameplay_reference tests/native_sprite_gameplay_reference.cpp)
    target_link_libraries(native_sprite_gameplay_reference PRIVATE eb_core eb_dsp eb_assets)
    add_executable(native_sprite_steady_reference tests/native_sprite_steady_reference.cpp src/input_replay.cpp)
    target_link_libraries(native_sprite_steady_reference PRIVATE eb_core eb_dsp eb_assets)
    add_executable(native_sprite_tick_reference tests/native_sprite_tick_reference.cpp)
    target_link_libraries(native_sprite_tick_reference PRIVATE eb_core eb_dsp eb_assets)
    add_executable(native_actor_tick_tests tests/native_actor_tick_tests.cpp)
    target_link_libraries(native_actor_tick_tests PRIVATE eb_core eb_assets)
    add_executable(actor_surface_service_reference tests/actor_surface_service_reference.cpp)
    target_link_libraries(actor_surface_service_reference PRIVATE eb_core eb_assets)
    add_executable(actor_draw_order_service_reference tests/actor_draw_order_service_reference.cpp)
    target_link_libraries(actor_draw_order_service_reference PRIVATE eb_core eb_assets)
    add_executable(map_strip_service_reference tests/map_strip_service_reference.cpp)
    target_link_libraries(map_strip_service_reference PRIVATE eb_core eb_assets)
    add_executable(actor_fade_service_reference tests/actor_fade_service_reference.cpp)
    target_link_libraries(actor_fade_service_reference PRIVATE eb_core eb_assets)
    add_executable(native_presentation_rate_reference tests/native_presentation_rate_reference.cpp src/input_replay.cpp)
    target_link_libraries(native_presentation_rate_reference PRIVATE eb_session eb_assets eb_filter)
    add_executable(overworld_sprite_bridge_tests tests/overworld_sprite_bridge_tests.cpp)
    target_link_libraries(overworld_sprite_bridge_tests PRIVATE eb_core)
    add_test(NAME overworld_sprite_bridge_tests COMMAND overworld_sprite_bridge_tests)
    add_executable(host_sprite_snapshot_tests tests/host_sprite_snapshot_tests.cpp)
    target_link_libraries(host_sprite_snapshot_tests PRIVATE eb_core)
    add_test(NAME host_sprite_snapshot_tests COMMAND host_sprite_snapshot_tests)
    add_executable(native_sprite_draw_tests tests/native_sprite_draw_tests.cpp)
    target_link_libraries(native_sprite_draw_tests PRIVATE eb_core)
    add_test(NAME native_sprite_draw_tests COMMAND native_sprite_draw_tests)
    add_executable(offscreen_scene_tests tests/offscreen_scene_tests.cpp)
    target_link_libraries(offscreen_scene_tests PRIVATE eb_core)
    add_test(NAME offscreen_scene_tests COMMAND offscreen_scene_tests)
    add_executable(overworld_sprite_bridge_reference tests/overworld_sprite_bridge_reference.cpp)
    target_link_libraries(overworld_sprite_bridge_reference PRIVATE eb_core eb_assets)
    add_executable(host_sprite_publication_reference tests/host_sprite_publication_reference.cpp)
    target_link_libraries(host_sprite_publication_reference PRIVATE eb_core eb_assets)
    add_executable(game_session_tests tests/game_session_tests.cpp)
    target_link_libraries(game_session_tests PRIVATE eb_session)
    add_test(NAME game_session_tests COMMAND game_session_tests)
    add_executable(game_session_snapshot_tests tests/game_session_snapshot_tests.cpp)
    target_link_libraries(game_session_snapshot_tests PRIVATE eb_session)
    add_test(NAME game_session_snapshot_tests COMMAND game_session_snapshot_tests)
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/game_session_snapshot_reference.cpp")
        add_executable(game_session_snapshot_reference tests/game_session_snapshot_reference.cpp src/input_replay.cpp)
        target_link_libraries(game_session_snapshot_reference PRIVATE eb_session eb_assets)
    endif()
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/game_session_differential.cpp")
        add_executable(game_session_differential tests/game_session_differential.cpp src/input_replay.cpp)
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
    add_executable(photosensitivity_scene_reference tests/photosensitivity_scene_reference.cpp)
    target_link_libraries(photosensitivity_scene_reference PRIVATE eb_filter eb_native_engine eb_assets eb_core)
    add_executable(asset_store_tests tests/asset_store_tests.cpp)
    target_link_libraries(asset_store_tests PRIVATE eb_assets)
    add_test(NAME asset_store_tests COMMAND asset_store_tests)
    add_executable(asset_cache_tests tests/asset_cache_tests.cpp)
    target_link_libraries(asset_cache_tests PRIVATE eb_asset_cache)
    add_test(NAME asset_cache_tests COMMAND asset_cache_tests)
    if(EB_BUILD_FRONTEND)
        add_executable(direct_scene_video_tests tests/direct_scene_video_tests.cpp)
        target_link_libraries(direct_scene_video_tests PRIVATE eb_scene eb_video eb_debug_panel eb_native_engine)
        add_executable(native_world_scene_video tests/native_world_scene_video.cpp)
        target_link_libraries(native_world_scene_video PRIVATE eb_native_engine eb_video eb_assets eb_native_asset_profiles)
    endif()
    add_executable(direct_scene_tests tests/direct_scene_tests.cpp)
    target_link_libraries(direct_scene_tests PRIVATE eb_scene)
    add_test(NAME direct_scene_tests COMMAND direct_scene_tests)
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
        add_executable(desktop_input_tests tests/desktop_input_tests.cpp src/desktop_input.cpp)
        target_include_directories(desktop_input_tests PRIVATE src include)
        target_link_libraries(desktop_input_tests PRIVATE SDL2::SDL2)
        add_test(NAME desktop_input_tests COMMAND desktop_input_tests)
        add_executable(controller_preferences_tests tests/controller_preferences_tests.cpp src/controller_preferences.cpp)
        target_include_directories(controller_preferences_tests PRIVATE include)
        target_link_libraries(controller_preferences_tests PRIVATE SDL2::SDL2)
        add_test(NAME controller_preferences_tests COMMAND controller_preferences_tests)
        add_executable(desktop_support_tests tests/desktop_support_tests.cpp)
        target_link_libraries(desktop_support_tests PRIVATE eb_desktop_support)
        add_test(NAME desktop_support_tests COMMAND desktop_support_tests)
        add_executable(snapshot_store_tests tests/snapshot_store_tests.cpp)
        target_link_libraries(snapshot_store_tests PRIVATE eb_desktop_support)
        add_test(NAME snapshot_store_tests COMMAND snapshot_store_tests)
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
            add_test(NAME direct_scene_video_tests COMMAND "${EB_XVFB_RUN}" -a -s "-screen 0 1920x1080x24" "$<TARGET_FILE:direct_scene_video_tests>")
            # xvfb-run -a can race when parallel tests choose the same free display.
            set_tests_properties(video_tests debug_panel_tests direct_scene_video_tests PROPERTIES
                ENVIRONMENT "SDL_VIDEODRIVER=x11" RESOURCE_LOCK xvfb_display)
        else()
            add_test(NAME video_tests COMMAND video_tests)
            add_test(NAME debug_panel_tests COMMAND debug_panel_tests)
            add_test(NAME direct_scene_video_tests COMMAND direct_scene_video_tests)
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
    add_executable(widescreen_story_effects_tests tests/widescreen_story_effects_tests.cpp)
    target_link_libraries(widescreen_story_effects_tests PRIVATE eb_core)
    add_test(NAME widescreen_story_effects_tests COMMAND widescreen_story_effects_tests)
    add_executable(widescreen_camera_path_tests tests/widescreen_camera_path_tests.cpp)
    target_link_libraries(widescreen_camera_path_tests PRIVATE eb_core)
    add_test(NAME widescreen_camera_path_tests COMMAND widescreen_camera_path_tests)
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

include(cmake/native_story.cmake)

# Orchestration consumes the existing story scene and native engine without
# introducing an engine -> scene -> engine library cycle.
add_library(eb_native_world_runtime STATIC src/native/world_runtime.cpp
    src/native/world_control.cpp src/native/world_maintenance.cpp
    src/native/world_walking.cpp src/native/world_doors.cpp
    src/native/world_hotspots.cpp src/native/world_generated_input.cpp
    src/native/world_input_playback.cpp src/native/world_scheduler.cpp
    src/native/world_door_transitions.cpp src/native/world_escalator.cpp
    src/native/world_npc_collision.cpp src/native/world_bicycle.cpp
    src/native/world_automatic.cpp src/native/world_control_commands.cpp
    src/native/world_pathfinding.cpp src/native/world_bootstrap.cpp
    src/native/world_encounter.cpp src/native/world_battle_entry.cpp
    src/native/world_enemy_movement.cpp src/native/world_enemy_contact.cpp
    src/native/world_startup.cpp src/native/world_enemy_behavior.cpp
    src/native/world_scene_presentation.cpp
    src/native/world_map_load.cpp)
target_include_directories(eb_native_world_runtime PUBLIC include)
target_link_libraries(eb_native_world_runtime PUBLIC eb_native_engine eb_native_story_scene)
if(EB_BUILD_TESTS)
    foreach(name world_generated_input world_input_playback world_scheduler world_door_transitions world_escalator world_automatic world_bicycle world_control_commands world_pathfinding actor_lifetime world_bootstrap world_encounter world_battle_entry world_enemy_movement world_enemy_contact world_startup world_enemy_behavior world_encounter_effects world_scene_presentation world_map_load world_enemy_behavior_runtime world_overlay_playback)
        if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/native_${name}_tests.cpp")
            add_executable(native_${name}_tests tests/native_${name}_tests.cpp)
            target_link_libraries(native_${name}_tests PRIVATE eb_native_world_runtime)
            add_test(NAME native_${name}_tests COMMAND native_${name}_tests)
        endif()
        if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/native_${name}_reference.cpp")
            add_executable(native_${name}_reference tests/native_${name}_reference.cpp)
            target_link_libraries(native_${name}_reference PRIVATE eb_native_world_runtime eb_assets eb_core)
        endif()
    endforeach()
    add_executable(direct_scene_effects_reference tests/direct_scene_effects_reference.cpp)
    target_link_libraries(direct_scene_effects_reference PRIVATE eb_scene eb_native_engine eb_core)
    add_executable(native_world_hotspots_tests tests/native_world_hotspots_tests.cpp)
    target_link_libraries(native_world_hotspots_tests PRIVATE eb_native_world_runtime)
    add_test(NAME native_world_hotspots_tests COMMAND native_world_hotspots_tests)
    add_executable(native_world_hotspots_reference tests/native_world_hotspots_reference.cpp)
    target_link_libraries(native_world_hotspots_reference PRIVATE eb_native_world_runtime eb_assets eb_core)
    add_executable(native_world_door_tests tests/native_world_door_tests.cpp)
    target_link_libraries(native_world_door_tests PRIVATE eb_native_world_runtime)
    add_test(NAME native_world_door_tests COMMAND native_world_door_tests)
    add_executable(native_world_door_reference tests/native_world_door_reference.cpp)
    target_link_libraries(native_world_door_reference PRIVATE eb_native_world_runtime eb_assets eb_core)
    add_executable(native_world_walking_tests tests/native_world_walking_tests.cpp)
    target_link_libraries(native_world_walking_tests PRIVATE eb_native_world_runtime)
    add_test(NAME native_world_walking_tests COMMAND native_world_walking_tests)
    add_executable(native_world_walking_reference tests/native_world_walking_reference.cpp)
    target_link_libraries(native_world_walking_reference PRIVATE eb_native_world_runtime eb_assets eb_core)
    add_executable(native_world_runtime_tests tests/native_world_runtime_tests.cpp)
    target_link_libraries(native_world_runtime_tests PRIVATE eb_native_world_runtime)
    add_test(NAME native_world_runtime_tests COMMAND native_world_runtime_tests)
    add_executable(native_world_control_reference tests/native_world_control_reference.cpp)
    target_link_libraries(native_world_control_reference PRIVATE eb_native_world_runtime eb_assets eb_core)
    add_executable(native_world_maintenance_reference tests/native_world_maintenance_reference.cpp)
    target_link_libraries(native_world_maintenance_reference PRIVATE eb_native_world_runtime eb_assets eb_core)
    add_executable(native_world_control_tests tests/native_world_control_tests.cpp)
    target_link_libraries(native_world_control_tests PRIVATE eb_native_world_runtime)
    add_test(NAME native_world_control_tests COMMAND native_world_control_tests)
endif()
