# Authored-data interpreters and host text composition. This library must remain
# independent of the compatibility CPU/bus/audio implementation.
# Shared retained peripheral results are pure native state used by both
# authored palette producers and the engine. Keep that dependency below both.
add_library(eb_native_peripherals STATIC src/native/peripheral_state.cpp)
target_include_directories(eb_native_peripherals PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
add_library(eb_native_story STATIC
    src/native/character_growth.cpp
    src/native/battle/action_resources.cpp
    src/native/battle/names.cpp
    src/native/battle/grammar.cpp
    src/native/battle/palette_effects.cpp
    src/native/battle/shields.cpp
    src/native/story/battle_dialogue.cpp
    src/native/battle/enemy_resources.cpp
    src/native/battle/encounter_resources.cpp
    src/native/battle/roster.cpp
    src/native/battle/outcomes.cpp
    src/native/battle/outcome_palette.cpp
    src/native/battle/actions/resources.cpp
    src/native/battle/menu/resources.cpp
    src/native/battle/actions/special_resources.cpp
    src/native/dialogue/program.cpp
    src/native/dialogue/runtime.cpp
    src/native/dialogue/import.cpp
    src/native/dialogue/word_wrap.cpp
    src/native/dialogue/fonts.cpp
    src/native/dialogue/output.cpp
    src/native/dialogue/window_resources.cpp
    src/native/dialogue/initialization_resources.cpp
    src/native/dialogue/window_graphics.cpp
    src/native/dialogue/window_host.cpp
    src/native/dialogue/window_commands.cpp
    src/native/dialogue/text_animation_resources.cpp
    src/native/dialogue/text_animations.cpp
    src/native/dialogue/inventory.cpp
    src/native/party/inventory.cpp
    src/native/party/state.cpp
    src/native/party/view.cpp
    src/native/party/dialogue_values.cpp
    src/native/party/meters.cpp
    src/native/party/meter_flipout.cpp
    src/native/party/condition.cpp
    src/native/party/queries.cpp
    src/native/party/movement_policy.cpp
    src/native/party/teddy.cpp
    src/native/party/name_inputs.cpp
    src/native/party/meter_window_resources.cpp
    src/native/party/meter_windows.cpp
    src/native/story/ticks.cpp
    src/native/story/input.cpp
    src/native/story/random.cpp
    src/native/dialogue/menu_resources.cpp
    src/native/dialogue/menu_model.cpp
    src/native/dialogue/menu_printer.cpp
    src/native/dialogue/substitution_resources.cpp
    src/native/dialogue/prepared_message.cpp
    src/native/dialogue/substitutions.cpp
    src/native/dialogue/menu_navigation.cpp
    src/native/dialogue/menu_host.cpp
    src/native/dialogue/menu_commands.cpp
    src/native/dialogue/prompt_host.cpp
    src/native/dialogue/conversation.cpp
    src/native/cutscenes/credits.cpp
    src/native/entities/npc_collision.cpp
    src/native/npcs/interaction_resources.cpp
    src/native/npcs/map_text.cpp
    src/native/npcs/interaction_queue.cpp)
target_include_directories(eb_native_story PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_link_libraries(eb_native_story PUBLIC eb_native_peripherals)
if(TARGET eb_native_engine)
    target_sources(eb_native_engine PRIVATE src/native/battle/formation.cpp
        src/native/battle/actions/rules.cpp
        src/native/battle/psi_resources.cpp src/native/battle/psi_animation.cpp
        src/native/battle/psi_scene.cpp src/native/battle/psi_setup.cpp
        src/native/battle/frame.cpp src/native/battle/frame_display.cpp
        src/native/battle/background_loader.cpp
        src/native/battle/startup_graphics.cpp src/native/battle/admission.cpp
        src/native/battle/target_selection.cpp src/native/battle/turn_scheduler.cpp
        src/native/world_layers.cpp src/native/world_encounter_effects.cpp
        src/native/battle/animation_commands.cpp src/native/world_swirl.cpp
        src/native/scene_effects.cpp src/native/world_display_fade.cpp)
    target_link_libraries(eb_native_engine PUBLIC eb_native_story)
endif()
if(TARGET eb_scene)
    # Native scene adapters use the public immutable draw-list interface. They
    # do not pull the compatibility session or renderer into the story module.
    add_library(eb_native_story_scene STATIC src/native/story/window_layer.cpp)
    target_link_libraries(eb_native_story_scene PUBLIC eb_native_story eb_scene)
    if(TARGET eb_native_engine)
        target_sources(eb_native_story_scene PRIVATE src/native/story/scene.cpp src/native/npcs/interaction.cpp src/native/story/interaction_calls.cpp src/native/story/party_formation.cpp src/native/story/teddy_party.cpp src/native/story/growth_dialogue.cpp src/native/story/battle_publication.cpp src/native/story/battle_display_setup.cpp)
        target_link_libraries(eb_native_story_scene PUBLIC eb_native_engine)
        target_sources(eb_native_story_scene PRIVATE src/native/story/battle_startup.cpp
            src/native/story/battle_dead_players.cpp src/native/story/battle_rounds.cpp
            src/native/story/battle_outcomes.cpp
            src/native/story/party_membership.cpp
            src/native/battle/menu/command.cpp src/native/battle/menu/auto.cpp
            src/native/battle/menu/target.cpp src/native/battle/menu/psi.cpp
            src/native/battle/menu/goods.cpp)
    endif()
endif()
if(MINGW)
    target_link_options(eb_native_story INTERFACE -static -static-libgcc -static-libstdc++)
endif()
if(EB_BUILD_TESTS)
    foreach(story_test native_dialogue_tests native_dialogue_import_tests native_credits_tests
            native_dialogue_word_tests native_dialogue_font_tests native_dialogue_output_tests
            native_dialogue_conversation_tests native_dialogue_window_resource_tests native_dialogue_window_tests
            native_dialogue_menu_model_tests native_dialogue_menu_print_tests native_dialogue_menu_navigation_tests
            native_dialogue_menu_tests native_dialogue_prompt_tests
            native_dialogue_initialization_resource_tests native_dialogue_initialization_tests
            native_dialogue_substitution_resource_tests native_dialogue_substitution_tests native_dialogue_ambient_tests
            native_dialogue_menu_command_parser_tests native_dialogue_menu_commands_tests
            native_dialogue_window_command_parser_tests native_dialogue_window_commands_tests
            native_dialogue_text_animation_parser_tests native_dialogue_text_animation_resource_tests
            native_dialogue_text_animations_tests
            native_party_state_tests native_dialogue_item_fields_tests
            native_dialogue_inventory_model_tests native_dialogue_inventory_parser_tests
            native_dialogue_inventory_tests native_party_meter_tests native_story_random_tests
            native_party_condition_tests native_party_name_input_tests
            native_party_meter_resource_tests native_party_meter_window_tests native_story_input_tests
            native_dialogue_party_query_tests native_party_query_tests
            native_npc_collision_tests native_npc_interaction_resource_tests native_npc_map_text_tests
            native_npc_check_resource_tests native_interaction_queue_tests
            native_party_inventory_tests native_dialogue_gift_parser_tests
            native_dialogue_formation_tests native_party_movement_policy_tests native_party_teddy_tests
            native_dialogue_width_hint_tests native_prepared_message_state_tests native_prepared_message_tests
            native_battle_action_resource_tests native_battle_names_tests native_battle_palette_tests)
        add_executable(${story_test} tests/${story_test}.cpp)
        target_link_libraries(${story_test} PRIVATE eb_native_story)
        add_test(NAME ${story_test} COMMAND ${story_test})
    endforeach()
    foreach(story_reference native_dialogue_reference native_credits_reference native_dialogue_word_reference native_dialogue_output_reference native_dialogue_window_reference native_dialogue_menu_reference native_dialogue_prompt_reference native_dialogue_initialization_reference native_dialogue_substitution_reference native_dialogue_ambient_reference native_dialogue_menu_commands_reference native_dialogue_window_commands_reference native_dialogue_text_animations_reference native_dialogue_inventory_reference native_story_tick_reference native_party_condition_reference native_party_name_input_reference native_story_window_tick_reference native_story_input_reference native_party_query_reference native_dialogue_party_queries_reference native_npc_collision_reference native_npc_map_text_reference native_interaction_queue_reference)
        add_executable(${story_reference} tests/${story_reference}.cpp)
        target_link_libraries(${story_reference} PRIVATE eb_native_story eb_core eb_assets)
    endforeach()
    add_executable(native_party_inventory_reference tests/native_party_inventory_reference.cpp)
    add_executable(native_dialogue_width_hint_reference tests/native_dialogue_width_hint_reference.cpp)
    target_link_libraries(native_dialogue_width_hint_reference PRIVATE eb_native_story eb_core eb_assets)
    add_test(NAME native_dialogue_width_hint_reference COMMAND native_dialogue_width_hint_reference)
    set_tests_properties(native_dialogue_width_hint_reference PROPERTIES SKIP_RETURN_CODE 77)
    target_link_libraries(native_party_inventory_reference PRIVATE eb_native_story eb_core eb_assets)
    add_test(NAME native_party_inventory_reference COMMAND native_party_inventory_reference)
    set_tests_properties(native_party_inventory_reference PROPERTIES SKIP_RETURN_CODE 77)
    add_executable(native_party_movement_policy_reference tests/native_party_movement_policy_reference.cpp)
    target_link_libraries(native_party_movement_policy_reference PRIVATE eb_native_story eb_core)
    add_test(NAME native_party_movement_policy_reference COMMAND native_party_movement_policy_reference)
    add_executable(native_party_teddy_reference tests/native_party_teddy_reference.cpp)
    target_link_libraries(native_party_teddy_reference PRIVATE eb_native_story eb_core)
    add_test(NAME native_party_teddy_reference COMMAND native_party_teddy_reference)
    add_test(NAME native_npc_collision_reference COMMAND native_npc_collision_reference)
    add_test(NAME native_dialogue_reference COMMAND native_dialogue_reference)
    add_test(NAME native_credits_reference COMMAND native_credits_reference)
    add_test(NAME native_dialogue_word_reference COMMAND native_dialogue_word_reference)
    add_test(NAME native_dialogue_output_reference COMMAND native_dialogue_output_reference)
    add_test(NAME native_dialogue_window_reference COMMAND native_dialogue_window_reference)
    add_test(NAME native_dialogue_menu_reference COMMAND native_dialogue_menu_reference)
    add_test(NAME native_dialogue_prompt_reference COMMAND native_dialogue_prompt_reference)
    add_test(NAME native_dialogue_initialization_reference COMMAND native_dialogue_initialization_reference)
    add_test(NAME native_dialogue_substitution_reference COMMAND native_dialogue_substitution_reference)
    add_test(NAME native_dialogue_ambient_reference COMMAND native_dialogue_ambient_reference)
    add_test(NAME native_dialogue_menu_commands_reference COMMAND native_dialogue_menu_commands_reference)
    set_tests_properties(native_dialogue_menu_commands_reference PROPERTIES SKIP_RETURN_CODE 77)
    add_test(NAME native_dialogue_window_commands_reference COMMAND native_dialogue_window_commands_reference)
    set_tests_properties(native_dialogue_window_commands_reference PROPERTIES SKIP_RETURN_CODE 77)
    add_test(NAME native_dialogue_text_animations_reference COMMAND native_dialogue_text_animations_reference)
    set_tests_properties(native_dialogue_text_animations_reference PROPERTIES SKIP_RETURN_CODE 77)
    add_test(NAME native_dialogue_inventory_reference COMMAND native_dialogue_inventory_reference)
    set_tests_properties(native_dialogue_inventory_reference PROPERTIES SKIP_RETURN_CODE 77)
    add_test(NAME native_story_tick_reference COMMAND native_story_tick_reference)
    foreach(reference native_party_condition_reference native_party_name_input_reference
            native_story_window_tick_reference native_story_input_reference native_party_query_reference native_dialogue_party_queries_reference native_npc_map_text_reference native_interaction_queue_reference)
        add_test(NAME ${reference} COMMAND ${reference})
        set_tests_properties(${reference} PROPERTIES SKIP_RETURN_CODE 77)
    endforeach()
    set_tests_properties(native_dialogue_ambient_reference PROPERTIES SKIP_RETURN_CODE 77)
    set_tests_properties(native_dialogue_substitution_reference PROPERTIES SKIP_RETURN_CODE 77)
    set_tests_properties(native_dialogue_initialization_reference PROPERTIES SKIP_RETURN_CODE 77)
    set_tests_properties(native_dialogue_prompt_reference PROPERTIES SKIP_RETURN_CODE 77)
    set_tests_properties(native_dialogue_menu_reference PROPERTIES SKIP_RETURN_CODE 77)
    set_tests_properties(native_dialogue_window_reference PROPERTIES SKIP_RETURN_CODE 77)
    set_tests_properties(native_dialogue_output_reference PROPERTIES SKIP_RETURN_CODE 77)
    # The original development snapshot predates the independent native engine's
    # asset registry. Both build contexts use the same code-only regional inputs.
    if(NOT TARGET eb_native_asset_profiles)
        add_library(eb_native_asset_profiles STATIC
            "${EB_GENERATED_DIR}/generated_assets.cpp"
            "${EB_GENERATED_DIR}/us/generated_assets.cpp"
            "${EB_GENERATED_DIR}/jp/generated_assets.cpp")
        target_include_directories(eb_native_asset_profiles PUBLIC
            "${CMAKE_CURRENT_SOURCE_DIR}/include" "${EB_GENERATED_DIR}")
        add_dependencies(eb_native_asset_profiles eb_generate)
    endif()
    add_executable(native_dialogue_assets tests/native_dialogue_assets.cpp)
    target_link_libraries(native_dialogue_assets PRIVATE eb_native_story eb_assets eb_native_asset_profiles)
    add_executable(native_npc_interaction_assets tests/native_npc_interaction_assets.cpp)
    target_link_libraries(native_npc_interaction_assets PRIVATE eb_native_story eb_assets eb_native_asset_profiles)
    add_executable(native_credits_assets tests/native_credits_assets.cpp)
    target_link_libraries(native_credits_assets PRIVATE eb_native_story eb_assets eb_native_asset_profiles)
    add_test(NAME native_story_linkage COMMAND "${Python3_EXECUTABLE}"
        "${CMAKE_CURRENT_SOURCE_DIR}/tests/test_native_story_linkage.py" --nm "${CMAKE_NM}"
        "$<TARGET_FILE:native_dialogue_width_hint_tests>"
        "$<TARGET_FILE:native_battle_action_resource_tests>"
        "$<TARGET_FILE:native_battle_names_tests>"
        "$<TARGET_FILE:native_prepared_message_state_tests>"
        "$<TARGET_FILE:native_prepared_message_tests>"
        "$<TARGET_FILE:native_dialogue_tests>" "$<TARGET_FILE:native_credits_tests>"
        "$<TARGET_FILE:native_dialogue_assets>" "$<TARGET_FILE:native_credits_assets>"
        "$<TARGET_FILE:native_dialogue_word_tests>" "$<TARGET_FILE:native_dialogue_font_tests>"
        "$<TARGET_FILE:native_dialogue_output_tests>" "$<TARGET_FILE:native_dialogue_conversation_tests>"
        "$<TARGET_FILE:native_dialogue_window_resource_tests>" "$<TARGET_FILE:native_dialogue_window_tests>"
        "$<TARGET_FILE:native_dialogue_menu_model_tests>" "$<TARGET_FILE:native_dialogue_menu_print_tests>"
        "$<TARGET_FILE:native_dialogue_menu_navigation_tests>" "$<TARGET_FILE:native_dialogue_menu_tests>"
        "$<TARGET_FILE:native_dialogue_prompt_tests>"
        "$<TARGET_FILE:native_dialogue_initialization_resource_tests>"
        "$<TARGET_FILE:native_dialogue_initialization_tests>"
        "$<TARGET_FILE:native_dialogue_substitution_resource_tests>"
        "$<TARGET_FILE:native_dialogue_substitution_tests>"
        "$<TARGET_FILE:native_dialogue_ambient_tests>"
        "$<TARGET_FILE:native_dialogue_menu_command_parser_tests>"
        "$<TARGET_FILE:native_dialogue_menu_commands_tests>"
        "$<TARGET_FILE:native_dialogue_window_command_parser_tests>"
        "$<TARGET_FILE:native_dialogue_window_commands_tests>"
        "$<TARGET_FILE:native_dialogue_text_animation_parser_tests>"
        "$<TARGET_FILE:native_dialogue_text_animation_resource_tests>"
        "$<TARGET_FILE:native_dialogue_text_animations_tests>"
        "$<TARGET_FILE:native_party_state_tests>"
        "$<TARGET_FILE:native_dialogue_item_fields_tests>"
        "$<TARGET_FILE:native_dialogue_inventory_model_tests>"
        "$<TARGET_FILE:native_dialogue_inventory_parser_tests>"
        "$<TARGET_FILE:native_dialogue_inventory_tests>"
        "$<TARGET_FILE:native_party_meter_tests>"
        "$<TARGET_FILE:native_story_random_tests>"
        "$<TARGET_FILE:native_party_condition_tests>"
        "$<TARGET_FILE:native_party_name_input_tests>"
        "$<TARGET_FILE:native_party_meter_resource_tests>"
        "$<TARGET_FILE:native_party_meter_window_tests>"
        "$<TARGET_FILE:native_story_input_tests>"
        "$<TARGET_FILE:native_dialogue_party_query_tests>"
        "$<TARGET_FILE:native_party_query_tests>"
        "$<TARGET_FILE:native_npc_collision_tests>"
        "$<TARGET_FILE:native_npc_interaction_resource_tests>"
        "$<TARGET_FILE:native_npc_map_text_tests>"
        "$<TARGET_FILE:native_npc_check_resource_tests>"
        "$<TARGET_FILE:native_interaction_queue_tests>"
        "$<TARGET_FILE:native_party_inventory_tests>"
        "$<TARGET_FILE:native_dialogue_gift_parser_tests>"
        "$<TARGET_FILE:native_dialogue_formation_tests>"
        "$<TARGET_FILE:native_party_movement_policy_tests>"
        "$<TARGET_FILE:native_party_teddy_tests>"
        "$<TARGET_FILE:native_npc_interaction_assets>")
    if(TARGET eb_native_engine AND TARGET eb_native_story_scene)
        foreach(psi_test native_psi_state_tests native_psi_scene_tests native_psi_setup_tests native_psi_transfer_tests native_battle_frame_tests native_battle_vram_tests native_battle_background_loader_tests)
            add_executable(${psi_test} tests/${psi_test}.cpp)
            target_link_libraries(${psi_test} PRIVATE eb_native_engine)
            add_test(NAME ${psi_test} COMMAND ${psi_test})
        endforeach()
        target_link_libraries(native_battle_frame_tests PRIVATE eb_native_story_scene)
        add_executable(native_battle_frame_scene_tests tests/native_battle_frame_scene_tests.cpp)
        add_executable(native_battle_published_background_tests tests/native_battle_published_background_tests.cpp)
        target_link_libraries(native_battle_published_background_tests PRIVATE eb_native_story_scene)
        add_test(NAME native_battle_published_background_tests COMMAND native_battle_published_background_tests)
        target_link_libraries(native_battle_frame_scene_tests PRIVATE eb_native_story_scene)
        add_test(NAME native_battle_frame_scene_tests COMMAND native_battle_frame_scene_tests)
        add_executable(native_battle_display_setup_tests tests/native_battle_display_setup_tests.cpp)
        target_link_libraries(native_battle_display_setup_tests PRIVATE eb_native_story_scene)
        add_test(NAME native_battle_display_setup_tests COMMAND native_battle_display_setup_tests)
        add_executable(native_battle_publication_handoff_tests tests/native_battle_publication_handoff_tests.cpp)
        target_link_libraries(native_battle_publication_handoff_tests PRIVATE eb_native_world_runtime)
        add_test(NAME native_battle_publication_handoff_tests COMMAND native_battle_publication_handoff_tests)
        add_executable(native_battle_startup_reference tests/native_battle_startup_reference.cpp)
        target_link_libraries(native_battle_startup_reference PRIVATE eb_native_world_runtime eb_core eb_assets)
        add_test(NAME native_battle_startup_reference COMMAND native_battle_startup_reference)
        set_tests_properties(native_battle_startup_reference PROPERTIES SKIP_RETURN_CODE 77)
        add_executable(native_battle_published_background_reference tests/native_battle_published_background_reference.cpp)
        target_link_libraries(native_battle_published_background_reference PRIVATE eb_native_world_runtime eb_core eb_assets)
        add_test(NAME native_battle_published_background_reference COMMAND native_battle_published_background_reference)
        set_tests_properties(native_battle_published_background_reference PROPERTIES SKIP_RETURN_CODE 77)
        add_executable(native_battle_frame_reference tests/native_battle_frame_reference.cpp)
        target_link_libraries(native_battle_frame_reference PRIVATE eb_native_world_runtime eb_core eb_assets)
        add_test(NAME native_battle_frame_reference COMMAND native_battle_frame_reference)
        set_tests_properties(native_battle_frame_reference PROPERTIES SKIP_RETURN_CODE 77)
        add_executable(native_psi_reference tests/native_psi_reference.cpp)
        target_link_libraries(native_psi_reference PRIVATE eb_native_story_scene eb_native_engine eb_core eb_assets)
        add_test(NAME native_psi_reference COMMAND native_psi_reference)
        set_tests_properties(native_psi_reference PROPERTIES SKIP_RETURN_CODE 77)
        add_executable(native_psi_setup_reference tests/native_psi_setup_reference.cpp)
        target_link_libraries(native_psi_setup_reference PRIVATE eb_native_world_runtime eb_core eb_assets)
        add_test(NAME native_psi_setup_reference COMMAND native_psi_setup_reference)
        set_tests_properties(native_psi_setup_reference PROPERTIES SKIP_RETURN_CODE 77)
        add_test(NAME native_psi_linkage COMMAND "${Python3_EXECUTABLE}"
            "${CMAKE_CURRENT_SOURCE_DIR}/tests/test_native_story_linkage.py" --nm "${CMAKE_NM}"
            "$<TARGET_FILE:native_psi_state_tests>" "$<TARGET_FILE:native_psi_scene_tests>"
            "$<TARGET_FILE:native_psi_setup_tests>")
        add_executable(native_battle_palette_scene_tests tests/native_battle_palette_scene_tests.cpp)
        target_link_libraries(native_battle_palette_scene_tests PRIVATE eb_native_engine)
        add_test(NAME native_battle_palette_scene_tests COMMAND native_battle_palette_scene_tests)
        add_executable(native_battle_palette_reference tests/native_battle_palette_reference.cpp)
        target_link_libraries(native_battle_palette_reference PRIVATE eb_native_engine eb_core eb_assets)
        add_test(NAME native_battle_palette_reference COMMAND native_battle_palette_reference)
        set_tests_properties(native_battle_palette_reference PROPERTIES SKIP_RETURN_CODE 77)
        add_test(NAME native_battle_palette_linkage COMMAND "${Python3_EXECUTABLE}"
            "${CMAKE_CURRENT_SOURCE_DIR}/tests/test_native_story_linkage.py" --nm "${CMAKE_NM}"
            "$<TARGET_FILE:native_battle_palette_tests>" "$<TARGET_FILE:native_battle_palette_scene_tests>")
        add_executable(native_battle_roster_reference tests/native_battle_roster_reference.cpp)
        target_link_libraries(native_battle_roster_reference PRIVATE eb_native_engine eb_core eb_assets)
        add_test(NAME native_battle_roster_reference COMMAND native_battle_roster_reference)
        set_tests_properties(native_battle_roster_reference PROPERTIES SKIP_RETURN_CODE 77)
        add_executable(native_battle_roster_tests tests/native_battle_roster_tests.cpp)
        target_link_libraries(native_battle_roster_tests PRIVATE eb_native_engine)
        add_test(NAME native_battle_roster_tests COMMAND native_battle_roster_tests)
        foreach(battle_test native_battle_startup_graphics_tests native_battle_admission_tests native_battle_turn_scheduler_tests native_battle_rounds_tests)
            if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/${battle_test}.cpp")
                add_executable(${battle_test} tests/${battle_test}.cpp)
                target_link_libraries(${battle_test} PRIVATE eb_native_world_runtime)
                add_test(NAME ${battle_test} COMMAND ${battle_test})
            endif()
        endforeach()
        foreach(battle_reference native_encounter_turns_reference native_battle_turn_scheduler_reference native_battle_sprite_bus_reference)
            if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tests/${battle_reference}.cpp")
                add_executable(${battle_reference} tests/${battle_reference}.cpp)
                target_link_libraries(${battle_reference} PRIVATE eb_native_world_runtime eb_core eb_assets eb_dsp)
                add_test(NAME ${battle_reference} COMMAND ${battle_reference})
                set_tests_properties(${battle_reference} PROPERTIES SKIP_RETURN_CODE 77)
            endif()
        endforeach()
        add_test(NAME native_battle_roster_linkage COMMAND "${Python3_EXECUTABLE}"
            "${CMAKE_CURRENT_SOURCE_DIR}/tests/test_native_story_linkage.py" --nm "${CMAKE_NM}"
            "$<TARGET_FILE:native_battle_roster_tests>")
        foreach(interaction_test native_npc_check_tests native_interaction_calls_tests
                native_npc_gift_tests native_story_gift_tests native_dialogue_sound_tests native_story_formation_tests
                native_story_teddy_tests native_story_actor_frame_tests native_actor_position_tests native_growth_dialogue_tests native_battle_shields_tests)
            add_executable(${interaction_test} tests/${interaction_test}.cpp)
            target_link_libraries(${interaction_test} PRIVATE eb_native_story_scene)
            add_test(NAME ${interaction_test} COMMAND ${interaction_test})
        endforeach()
        foreach(interaction_reference native_npc_check_reference native_interaction_calls_reference
                native_dialogue_gifts_reference native_dialogue_sound_reference native_dialogue_formation_reference
                native_story_teddy_reference native_story_actor_frame_reference native_actor_position_reference native_prepared_message_reference native_battle_names_reference)
            add_executable(${interaction_reference} tests/${interaction_reference}.cpp)
            target_link_libraries(${interaction_reference} PRIVATE eb_native_story_scene eb_core eb_assets eb_native_asset_profiles)
            add_test(NAME ${interaction_reference} COMMAND ${interaction_reference})
            set_tests_properties(${interaction_reference} PROPERTIES SKIP_RETURN_CODE 77)
        endforeach()
        add_executable(native_interaction_calls_assets tests/native_interaction_calls_assets.cpp)
        target_link_libraries(native_interaction_calls_assets PRIVATE eb_native_story_scene eb_assets eb_native_asset_profiles)
        add_executable(native_npc_gift_assets tests/native_npc_gift_assets.cpp)
        target_link_libraries(native_npc_gift_assets PRIVATE eb_native_story_scene eb_assets eb_native_asset_profiles)
        add_executable(native_party_formation_assets tests/native_party_formation_assets.cpp)
        target_link_libraries(native_party_formation_assets PRIVATE eb_native_story_scene eb_assets eb_native_asset_profiles)
        add_executable(native_party_teddy_assets tests/native_party_teddy_assets.cpp)
        target_link_libraries(native_party_teddy_assets PRIVATE eb_native_story_scene eb_assets eb_native_asset_profiles)
        add_test(NAME native_interaction_calls_linkage COMMAND "${Python3_EXECUTABLE}"
            "${CMAKE_CURRENT_SOURCE_DIR}/tests/test_native_story_linkage.py" --nm "${CMAKE_NM}"
            "$<TARGET_FILE:native_npc_check_tests>" "$<TARGET_FILE:native_interaction_calls_tests>"
            "$<TARGET_FILE:native_npc_gift_tests>" "$<TARGET_FILE:native_story_gift_tests>"
            "$<TARGET_FILE:native_dialogue_sound_tests>" "$<TARGET_FILE:native_npc_gift_assets>"
            "$<TARGET_FILE:native_story_formation_tests>" "$<TARGET_FILE:native_party_formation_assets>"
            "$<TARGET_FILE:native_story_teddy_tests>" "$<TARGET_FILE:native_party_teddy_assets>"
            "$<TARGET_FILE:native_story_actor_frame_tests>"
            "$<TARGET_FILE:native_actor_position_tests>"
            "$<TARGET_FILE:native_growth_dialogue_tests>"
            "$<TARGET_FILE:native_battle_shields_tests>"
            "$<TARGET_FILE:native_interaction_calls_assets>")
        add_executable(native_npc_talk_tests tests/native_npc_talk_tests.cpp)
        target_link_libraries(native_npc_talk_tests PRIVATE eb_native_story_scene)
        add_test(NAME native_npc_talk_tests COMMAND native_npc_talk_tests)
        add_executable(native_npc_talk_reference tests/native_npc_talk_reference.cpp)
        target_link_libraries(native_npc_talk_reference PRIVATE eb_native_story_scene eb_core eb_assets eb_native_asset_profiles)
        add_test(NAME native_npc_talk_reference COMMAND native_npc_talk_reference)
        set_tests_properties(native_npc_talk_reference PROPERTIES SKIP_RETURN_CODE 77)
        add_executable(native_npc_talk_assets tests/native_npc_talk_assets.cpp)
        target_link_libraries(native_npc_talk_assets PRIVATE eb_native_story_scene eb_assets eb_native_asset_profiles)
        add_test(NAME native_npc_talk_linkage COMMAND "${Python3_EXECUTABLE}"
            "${CMAKE_CURRENT_SOURCE_DIR}/tests/test_native_story_linkage.py" --nm "${CMAKE_NM}"
            "$<TARGET_FILE:native_npc_talk_tests>" "$<TARGET_FILE:native_npc_talk_assets>")
        add_executable(native_story_dialogue_assets tests/native_story_dialogue_assets.cpp)
        target_link_libraries(native_story_dialogue_assets PRIVATE eb_native_story_scene eb_assets eb_native_asset_profiles)
        add_test(NAME native_story_dialogue_linkage COMMAND "${Python3_EXECUTABLE}"
            "${CMAKE_CURRENT_SOURCE_DIR}/tests/test_native_story_linkage.py" --nm "${CMAKE_NM}"
            "$<TARGET_FILE:native_story_dialogue_assets>")
        add_executable(native_story_scene_tests tests/native_story_scene_tests.cpp)
        target_link_libraries(native_story_scene_tests PRIVATE eb_native_story_scene)
        add_test(NAME native_story_scene_tests COMMAND native_story_scene_tests)
        add_test(NAME native_story_coordinator_linkage COMMAND "${Python3_EXECUTABLE}"
            "${CMAKE_CURRENT_SOURCE_DIR}/tests/test_native_story_linkage.py" --nm "${CMAKE_NM}"
            "$<TARGET_FILE:native_story_scene_tests>")
    endif()
    if(TARGET eb_native_story_scene)
        add_executable(native_story_window_layer_tests tests/native_story_window_layer_tests.cpp)
        target_link_libraries(native_story_window_layer_tests PRIVATE eb_native_story_scene)
        add_test(NAME native_story_window_layer_tests COMMAND native_story_window_layer_tests)
        add_test(NAME native_story_scene_linkage COMMAND "${Python3_EXECUTABLE}"
            "${CMAKE_CURRENT_SOURCE_DIR}/tests/test_native_story_linkage.py" --nm "${CMAKE_NM}"
            "$<TARGET_FILE:native_story_window_layer_tests>")
    endif()
endif()
