// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include "generated_code.hpp"
#include <array>

namespace eb::us {
bool execute_audio_change_music_instruction(MainCpu65816&, std::uint32_t);
bool execute_audio_get_audio_bank_instruction(MainCpu65816&, std::uint32_t);
bool execute_audio_initialize_music_subsystem_instruction(MainCpu65816&, std::uint32_t);
bool execute_audio_load_spc700_data_instruction(MainCpu65816&, std::uint32_t);
bool execute_audio_pause_music_instruction(MainCpu65816&, std::uint32_t);
bool execute_audio_play_sound_and_unknown_instruction(MainCpu65816&, std::uint32_t);
bool execute_audio_play_sound_instruction(MainCpu65816&, std::uint32_t);
bool execute_audio_resume_music_instruction(MainCpu65816&, std::uint32_t);
bool execute_audio_set_num_channels_instruction(MainCpu65816&, std::uint32_t);
bool execute_audio_stop_music_instruction(MainCpu65816&, std::uint32_t);
bool execute_audio_stop_music_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_audio_wait_for_spc700_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_25_percent_variance_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_50_percent_variance_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_350_fire_damage_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_bag_of_dragonite_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_bash_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_bash_twice_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_big_bottle_rocket_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_bomb_common_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_bomb_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_bottle_rocket_common_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_bottle_rocket_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_brainshock_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_brainshock_alpha_redirect_copy_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_brainshock_alpha_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_call_for_help_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_clumsy_robot_death_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_cold_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_counter_psi_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_crying2_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_crying_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_cut_guts_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_defense_down_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_defense_down_alpha_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_defense_shower_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_defense_spray_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_diamondize_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_distract_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_enemy_extend_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_feel_strange_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_fly_honey_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_freeze_time_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_giygas_prayer_1_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_giygas_prayer_2_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_giygas_prayer_3_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_giygas_prayer_4_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_giygas_prayer_5_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_giygas_prayer_6_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_giygas_prayer_7_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_giygas_prayer_8_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_giygas_prayer_9_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_guts_up_1d4_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_handbag_strap_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_heal_poison_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_healing_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_healing_beta_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_healing_gamma_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_healing_omega_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_hp_recovery_10000_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_hp_recovery_100_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_hp_recovery_10_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_hp_recovery_1d4_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_hp_recovery_200_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_hp_recovery_300_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_hp_recovery_50_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_hp_sucker_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_hungry_hp_sucker_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_hypnosis_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_hypnosis_alpha_redirect_copy_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_hypnosis_alpha_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_immobilize_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_inflict_poison_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_inflict_solidification_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_insect_spray_common_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_insecticide_spray_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_iq_up_1d4_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_level_1_attack_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_level_2_attack_diamondize_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_level_2_attack_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_level_2_attack_poison_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_level_3_attack_copy_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_level_3_attack_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_level_4_attack_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_lifeup_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_lifeup_beta_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_lifeup_common_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_lifeup_gamma_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_lifeup_omega_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_luck_up_1d4_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_magnet_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_magnet_omega_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_master_barf_death_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_mirror_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_multi_bottle_rocket_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_mummy_wrap_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_mushroomize_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_nauseate_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_neutralize_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_null01_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_null01_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_null02_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_null03_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_null04_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_null05_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_null06_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_null07_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_null08_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_null09_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_null10_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_null11_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_null12_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_offense_up_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_offense_up_alpha_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_paralysis_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_paralysis_alpha_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_paralyze_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_poison_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_pokey_speech_1_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_pokey_speech_2_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_possess_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_pp_recovery_20_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_pp_recovery_80_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_pray_aroma_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_pray_golden_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_pray_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_pray_mysterious_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_pray_rainbow_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_pray_rending_sound_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_pray_subtle_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_pray_warm_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_fire_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_fire_beta_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_fire_common_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_fire_gamma_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_fire_omega_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_flash_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_flash_beta_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_flash_crying_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_flash_feeling_strange_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_flash_gamma_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_flash_immunity_test_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_flash_omega_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_flash_paralysis_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_freeze_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_freeze_beta_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_freeze_common_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_freeze_gamma_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_freeze_omega_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_rockin_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_rockin_beta_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_rockin_common_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_rockin_gamma_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_rockin_omega_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_shield_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_shield_alpha_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_shield_beta_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_shield_beta_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_starstorm_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_starstorm_common_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_starstorm_omega_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_thunder_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_thunder_beta_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_thunder_common_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_thunder_gamma_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_psi_thunder_omega_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_rainbow_of_colours_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_random_stat_up_1d4_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_reduce_offense_defense_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_reduce_offense_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_reduce_pp_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_rust_promoter_common_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_rust_promoter_dx_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_rust_promoter_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_shield_alpha_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_shield_alpha_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_shield_beta_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_shield_beta_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_shield_common_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_shield_killer_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_shoot_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_snake_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_solidify_2_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_solidify_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_sow_seeds_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_speed_up_1d4_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_spy_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_steal_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_sudden_guts_pill_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_super_bomb_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_switch_armor_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_switch_weapon_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_teleport_box_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_vitality_up_1d4_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_xterminator_spray_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_actions_yogurt_dispenser_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_apply_condiment_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_autohealing_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_autolifeup_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_battle_psi_menu_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_battle_psi_menu_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_boss_battle_check_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_calc_damage_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_calc_damage_reduction_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_calc_psi_damage_modifiers_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_calc_psi_resistance_modifiers_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_calc_resistances_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_call_for_help_common_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_check_dead_players_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_check_if_valid_target_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_choose_target_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_copy_mirror_data_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_count_chars_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_decrease_defense_16th_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_decrease_offense_16th_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_determine_dodge_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_determine_targetting_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_eat_food_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_enemy_flashing_off_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_enemy_flashing_on_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_enemy_select_mode_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_fail_attack_on_npcs_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_feeling_strange_retargetting_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_find_stealable_items_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_find_targettable_npc_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_generate_psi_list_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_get_battle_action_type_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_get_battle_sprite_height_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_get_battle_sprite_width_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_get_enemy_type_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_get_shield_targetting_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_giygas_hurt_prayer_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_heal_strangeness_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_increase_defense_16th_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_increase_offense_16th_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_inflict_status_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_init_common_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_init_enemy_stats_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_init_overworld_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_init_player_stats_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_init_scripted_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_instant_win_check_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_instant_win_handler_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_is_char_targetted_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_ko_target_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_load_battle_sprite_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_load_battlebg_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_load_battlebg_movement_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_load_enemy_battle_sprites_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_lose_hp_status_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_main_battle_routine_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_menu_handler_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_miss_calc_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_psi_shield_nullify_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_random_targetting_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_recalc_character_miss_rate_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_recover_hp_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_recover_pp_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_reduce_hp_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_reduce_pp_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_remove_dead_targetting_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_remove_npc_targetting_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_remove_status_untargettable_targets_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_remove_target_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_render_battle_sprite_row_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_reset_post_battle_stats_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_return_battle_attacker_address_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_return_battle_target_address_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_revive_target_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_select_stealable_item_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_set_hp_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_set_pp_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_show_psi_animation_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_smaaaash_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_success_255_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_success_500_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_success_luck40_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_success_luck80_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_success_speed_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_swap_attacker_with_target_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_target_all_enemies_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_target_all_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_target_allies_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_target_battler_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_target_row_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_weaken_shield_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_change_vwf_2bpp_to_3_colour_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_check_cast_scroll_threshold_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_copy_cast_name_tilemap_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_count_photo_flags_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_create_entity_at_v01_plus_bg3y_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_credits_scroll_frame_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_enqueue_credits_dma_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_handle_cast_scrolling_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_initialize_credits_scene_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_is_entity_still_on_cast_screen_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_load_cast_scene_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_play_cast_scene_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_play_credits_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_prepare_cast_name_tilemap_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_prepare_dynamic_cast_name_text_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_print_cast_name_entity_var0_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_print_cast_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_print_cast_name_party_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_process_credits_dma_queue_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_render_cast_name_text_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_set_cast_scroll_threshold_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_slide_credits_photograph_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_try_rendering_photograph_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_upload_special_cast_palette_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_decomp_itoi_production_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_decomp_nintendo_presentation_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_display_animated_naming_sprite_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_file_select_menu_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_file_select_menu_loop_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_file_select_open_flavour_menu_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_file_select_open_sound_menu_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_file_select_open_text_speed_menu_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_gas_station_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_gas_station_load_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_init_intro_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_load_gas_station_flash_palette_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_load_gas_station_palette_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_logo_screen_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_logo_screen_load_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_name_a_character_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_show_title_screen_instruction(MainCpu65816&, std::uint32_t);
bool execute_inventory_get_item_subtype2_instruction(MainCpu65816&, std::uint32_t);
bool execute_inventory_get_item_subtype_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_atm_deposit_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_atm_withdraw_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_battle_backgrounds_do_battlebg_dma_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_battle_backgrounds_generate_frame_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_battle_backgrounds_load_bg_offset_parameters2_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_battle_backgrounds_load_bg_offset_parameters_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_battle_backgrounds_prepare_bg_offset_tables_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_change_equipped_arms_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_change_equipped_body_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_change_equipped_other_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_change_equipped_weapon_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_check_if_psi_known_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_check_item_equipped_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_check_status_group_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_decrease_wallet_balance_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_equip_item_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_escargo_express_move_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_escargo_express_store_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_find_condiment_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_find_inventory_space2_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_find_inventory_space_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_find_item_in_inventory2_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_find_item_in_inventory_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_find_path_to_party_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_gain_exp_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_get_character_item_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_get_item_type_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_get_required_exp_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_give_item_to_character_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_give_item_to_specific_character_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_hp_pp_roller_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_increase_wallet_balance_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_inflict_status_nonbattle_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_inventory_get_item_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_learn_special_psi_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_level_up_char_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_party_add_char_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_party_remove_char_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_recalc_character_postmath_defense_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_recalc_character_postmath_guts_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_recalc_character_postmath_iq_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_recalc_character_postmath_luck_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_recalc_character_postmath_offense_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_recalc_character_postmath_speed_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_recalc_character_postmath_vitality_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_recover_hp_amtpercent_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_recover_pp_amtpercent_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_reduce_hp_amtpercent_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_reduce_pp_amtpercent_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_remove_item_from_inventory_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_remove_item_from_inventory_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_reset_char_level_one_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_reset_hppp_rolling_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_save_game_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_set_teleport_box_destination_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_take_item_from_character_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_take_item_from_specific_character_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_teleport_freezeobjects2_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_teleport_freezeobjects_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_teleport_mainloop_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_animated_background_callback_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_centre_screen_on_entity_callback_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_centre_screen_on_entity_callback_offset_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_choose_random_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_clear_current_entity_collision2_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_clear_current_entity_collision_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_clear_entity_draw_sorting_table_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_clear_sprite_tick_callback_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_disable_current_entity_collision2_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_disable_current_entity_collision_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_fade_in_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_fade_out_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_fade_out_with_mosaic_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_get_direction_rotated_clockwise_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_get_direction_turned_randomly_left_or_right_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_get_position_of_party_member_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_jump_to_loaded_movement_pointer_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_make_party_look_at_active_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_prepare_new_entity_at_party_leader_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_prepare_new_entity_at_self_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_prepare_new_entity_at_teleport_destination_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_prepare_new_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_run_actionscript_frame_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_00_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_01_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_02_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_03_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_04_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_05_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_06_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_07_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_08_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_09_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_0a_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_0b_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_0c_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_0d_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_0e_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_0f_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_10_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_11_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_12_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_13_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_14_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_15_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_16_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_17_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_18_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_19_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_1a_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_1b_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_1c_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_1d_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_1e_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_1f_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_20_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_21_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_22_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_23_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_24_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_25_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_26_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_27_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_28_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_29_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_2a_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_2b_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_2c_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_2d_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_2e_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_2f_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_30_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_31_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_32_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_33_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_34_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_35_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_36_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_37_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_38_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_39_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_3a_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_3b_45_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_3c_46_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_3d_47_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_3e_48_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_3f_49_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_40_4a_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_41_4b_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_42_4c_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_43_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_44_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_read16_copy_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_read16_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_read8_copy_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_script_read8_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_set_direction8_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_set_direction_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_set_surface_flags_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_simple_screen_position_callback_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_simple_screen_position_callback_offset_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_actionscript_test_player_in_area_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_activate_hotspot_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_adjust_position_horizontal_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_adjust_position_vertical_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_adjust_single_colour_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_adjust_sprite_palettes_by_average_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_attempt_homesickness_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_battle_swirl_sequence_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_change_music_5dd6_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_check_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_create_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_create_prepared_entity_npc_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_create_prepared_entity_sprite_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_debug_set_char_level_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_debug_y_button_flag_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_debug_y_button_goods_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_debug_y_button_guide_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_disable_hotspot_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_display_town_map_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_display_your_sanctuary_location_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_door_transition_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_enable_your_sanctuary_display_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_find_free_space_7e4682_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_find_nearby_checkable_tpt_entry_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_find_nearby_talkable_tpt_entry_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_get_direction_from_player_to_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_get_direction_to_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_get_distance_to_magic_truffle_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_get_off_bicycle_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_get_on_bicycle_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_get_opposite_direction_from_player_to_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_get_position_of_party_member_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_get_screen_transition_sound_effect_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_get_town_map_id_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_inflict_sunstroke_check_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_init_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_initialize_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_initialize_item_transformation_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_initialize_map_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_initialize_map_palette_fade_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_initialize_misc_object_data_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_initialize_your_sanctuary_display_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_is_valid_item_transformation_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_collision_column_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_collision_row_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_dad_phone_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_map_at_position_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_map_at_sector_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_map_block_event_changes_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_map_column_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_map_palette_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_map_row_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_overlay_sprites_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_sector_attributes_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_special_sprite_palette_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_tile_collision_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_town_map_data_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_your_sanctuary_location_data_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_load_your_sanctuary_location_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_map_input_to_direction_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_mushroomization_movement_swap_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_npc_collision_check_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_open_menu_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_prepare_average_for_sprite_palettes_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_prepare_new_entity_at_existing_entity_location_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_prepare_new_entity_at_teleport_destination_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_prepare_new_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_prepare_your_sanctuary_location_palette_data_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_prepare_your_sanctuary_location_tile_arrangement_data_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_prepare_your_sanctuary_location_tileset_data_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_process_item_transformations_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_process_overworld_tasks_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_process_queued_interactions_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_refresh_map_at_position_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_reload_hotspots_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_reload_map_at_position_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_reload_map_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_replace_block_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_reset_mushroomized_walking_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_schedule_overworld_task_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_screen_transition_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_set_auto_sector_music_changes_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_set_party_tick_callbacks_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_set_teleport_state_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_setup_vram_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_show_hp_alert_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_show_town_map_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_spawn_buzz_buzz_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_spawn_horizontal_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_spawn_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_spawn_vertical_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_talk_to_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_teleport_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_test_your_sanctuary_display_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_update_party_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_use_item_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_use_sound_stone_instruction(MainCpu65816&, std::uint32_t);
bool execute_overworld_velocity_store_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_alloc_sprite_mem_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_animate_palette_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_animate_tileset_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_antipiracy_final_battle_antipiracy_check_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_antipiracy_sram_check_routine_checksum_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_center_screen_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_check_hardware_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_copy_to_vram_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_copy_to_vram_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_debug_check_view_character_mode_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_debug_display_check_position_debug_overlay_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_debug_display_menu_options_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_debug_display_view_character_debug_overlay_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_debug_handle_cursor_movement_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_debug_integer_to_binary_debug_tiles_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_debug_integer_to_decimal_debug_tiles_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_debug_integer_to_hex_debug_tiles_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_debug_load_debug_cursor_graphics_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_debug_load_menu_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_debug_process_command_selection_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_debug_y_button_menu_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_decompression_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_default_irq_callback_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_display_antipiracy_screen_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_display_faulty_gamepak_screen_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_enable_nmi_joypad_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_execute_irq_callback_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_fade_in_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_fade_in_with_mosaic_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_fade_out_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_fade_out_with_mosaic_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_file_select_init_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_game_init_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_get_colour_average_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_get_colour_fade_slope_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_irq_nmi_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_irq_vector_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_load_background_animation_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_load_palette_anim_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_load_tileset_anim_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_load_window_gfx_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_longjmp_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_main_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_asl16_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_asl32_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_asr16_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_asr32_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_asr8_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_cosine_sine_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_division16_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_division16s_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_division32_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_division32s_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_division8_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_division8s_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_modulus16_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_modulus16s_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_modulus32_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_modulus32s_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_modulus8_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_modulus8s_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_mult168_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_mult16_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_mult32_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_mult8_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_rand_0_3_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_rand_0_7_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_rand_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_rand_limit_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_rand_long_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_rand_mod_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_math_truncate_16_to_8_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_memcpy16_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_memcpy24_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_memset16_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_memset24_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_nmi_vector_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_oam_clear_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_prepare_vram_copy_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_process_sfx_queue_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_read_joypad_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_reset_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_reset_irq_callback_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_reset_vector_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_calc_save_block_checksum_complement_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_calc_save_block_checksum_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_check_all_blocks_signature_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_check_block_signature_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_check_save_corruption_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_check_sram_integrity_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_copy_save_block_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_copy_save_slot_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_corruption_check_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_erase_save_block_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_erase_save_slot_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_load_game_slot_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_save_game_block_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_save_game_slot_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_saves_validate_save_block_checksums_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_sbrk_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_set_bg1_vram_location_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_set_bg2_vram_location_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_set_bg3_vram_location_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_set_bg4_vram_location_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_set_coldata_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_set_colour_addsub_mode_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_set_inidisp_far_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_set_inidisp_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_set_irq_callback_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_set_oam_size_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_set_window_mask_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_setjmp_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_strcat_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_strcmp_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_strlen_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_test_sram_size_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_transfer_to_vram_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_wait_dma_finished_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_wait_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_wait_until_next_frame_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_activate_hotspot_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_atm_decrease_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_atm_increase_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_call_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_check_equal_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_check_not_equal_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_clear_event_flag_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_clear_line_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_copy_to_argmem_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_create_entity_sprite_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_create_entity_tpt_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_create_floating_sprite_at_character_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_create_floating_sprite_at_sprite_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_create_floating_sprite_at_tpt_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_create_number_selector_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_deactivate_hotspot_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_delete_entity_sprite_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_delete_entity_tpt_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_delete_floating_sprite_at_character_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_delete_floating_sprite_at_sprite_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_delete_floating_sprite_at_tpt_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_deplete_hp_by_amount_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_deplete_hp_by_percent_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_deplete_pp_by_amount_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_deplete_pp_by_percent_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_display_battle_animation_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_display_shop_menu_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_dummy_1f_18_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_dummy_1f_19_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_enable_blinking_triangle_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_equip_character_from_inventory_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_escargo_express_store_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_force_text_alignment_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_character_number_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_character_status_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_direction_from_character_to_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_direction_from_sprite_entity_to_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_direction_from_tpt_entity_to_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_event_flag_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_exp_for_next_level_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_gender_etc_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_item_number_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_item_price_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_item_sell_price_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_letter_from_character_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_letter_from_stat_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_random_number_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_give_item_to_character_2_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_give_item_to_character_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_halt_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_increase_character_experience_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_increase_character_guts_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_increase_character_iq_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_increase_character_luck_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_increase_character_speed_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_increase_character_vitality_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_inflict_character_status_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_jump_event_flag_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_jump_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_jump_multi2_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_jump_multi_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_learn_special_psi_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_load_string_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_open_window_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_party_member_add_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_party_member_remove_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_party_selection_menu_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_party_selection_menu_uncancellable_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_pause_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_play_music_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_play_sfx_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_character_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_character_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_horizontal_strings_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_item_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_money_amount_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_number_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_party_or_hint_new_line_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_psi_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_special_graphics_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_stat_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_teleport_destination_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_vertical_strings_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_recover_hp_by_amount_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_recover_hp_by_percent_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_recover_pp_by_amount_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_recover_pp_by_percent_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_screen_reload_pointer_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_argmem_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_character_direction_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_character_invisibility_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_character_level_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_character_visibility_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_entity_direction_sprite_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_event_flag_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_map_palette_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_music_effect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_party_direction_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_player_movement_lock_if_camera_refocused_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_player_movement_lock_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_respawn_point_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_secmem_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_sprite_entity_movement_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_tpt_direction_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_tpt_entity_delay_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_set_tpt_entity_movement_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_show_character_inventory_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_stop_music_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_switch_gender_etc_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_switch_to_window_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_take_item_from_character_2_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_take_item_from_character_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_teleport_party_to_tpt_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_test_atm_has_enough_money_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_test_character_can_equip_item_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_test_character_doesnt_have_item_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_test_character_has_item_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_test_character_status_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_test_equality_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_test_has_enough_money_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_test_inventory_full_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_test_inventory_not_full_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_test_item_is_condiment_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_test_item_is_drink_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_test_party_enough_characters_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_text_effects_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_toggle_text_printing_sound_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_tree_18_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_tree_19_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_tree_1a_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_tree_1b_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_tree_1c_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_tree_1d_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_tree_1e_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_tree_1f_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_trigger_battle_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_trigger_photographer_event_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_trigger_psi_teleport_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_trigger_special_event_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_trigger_teleport_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_trigger_timed_event_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_try_fixing_items_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_18_08_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_18_09_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_18_0d_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_19_1a_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_19_1b_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_19_1c_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_19_1d_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_19_27_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1c_09_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1d_0c_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1d_10_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1d_11_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1d_12_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1d_13_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1d_23_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1d_24_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1f_40_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1f_60_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1f_e7_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1f_e9_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1f_ea_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_unknown_1f_ef_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_wallet_decrease_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_wallet_increase_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_change_current_window_font_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_character_select_prompt_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_clear_blinking_prompt_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_clear_instant_printing_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_close_focus_window_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_close_focus_window_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_close_window_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_coffee_tea_scene_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_copy_enemy_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_create_window_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_create_window_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_display_in_battle_text_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_display_text_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_display_text_wait_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_enable_blinking_triangle_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_enter_your_name_please_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_fix_attacker_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_fix_target_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_free_tile_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_free_tile_safe_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_active_window_address_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_argument_memory_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_blinking_prompt_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_character_at_cursor_position_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_event_flag_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_party_character_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_psi_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_secondary_memory_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_text_x_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_text_y_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_window_focus_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_working_memory_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_hide_hppp_windows_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_hide_hppp_windows_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_hp_pp_window_draw_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_hp_pp_window_fill_character_hp_tile_buffer_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_hp_pp_window_fill_character_pp_tile_buffer_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_hp_pp_window_fill_tile_buffer_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_hp_pp_window_fill_tile_buffer_x_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_hp_pp_window_separate_decimal_digits_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_hp_pp_window_undraw_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_increment_secondary_memory_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_lock_input_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_move_cursor_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_num_select_prompt_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_open_hppp_display_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_letter_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_letter_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_menu_items_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_menu_items_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_newline_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_newline_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_number_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_string_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_string_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_selection_menu_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_selection_menu_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_selection_menu_setup_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_set_argument_memory_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_set_event_flag_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_set_hppp_window_mode_item_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_set_instant_printing_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_set_secondary_memory_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_set_text_sound_mode_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_set_window_focus_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_set_window_focus_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_set_window_title_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_set_working_memory_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_show_hppp_windows_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_show_hppp_windows_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_skippable_pause_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_spawn_floating_sprite_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_text_input_dialog_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_transfer_active_mem_storage_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_transfer_storage_mem_active_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_undraw_flyover_text_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_unlock_input_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_update_hppp_meter_tiles_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_window_tick_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_window_tick_without_instant_printing_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0035b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c00e16_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c00fcb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c01181_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0122a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c01731_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c017ea_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c019e2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c01a63_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c01a86_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c01b15_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c01b96_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c01c52_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c01d38_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c01ded_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c020f1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c02140_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c02194_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c021e6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0222b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0255c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c025cf_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0263d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c02668_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c02c3e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c02d29_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0329f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c032ec_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0369b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03903_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c039e5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03a24_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03a94_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03c25_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03c4b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03cfd_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03daa_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03e25_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03e5a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03e9d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03ec3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03f1e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03fa9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0402b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04049_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04116_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c041e3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c042c2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c042ef_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c043bc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0449b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0476d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c047cf_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c048d3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04a7b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04a88_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04aad_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04b53_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04c45_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04d78_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04ef0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04f47_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04f60_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04f9f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04ffe_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05200_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c052d4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0546b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c054c9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05503_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0559c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05639_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c056d0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05769_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c057e8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0583c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05890_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c059ef_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05b4e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05b7b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05cd7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05d8b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05de7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05e3b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05e76_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05e82_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05ece_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05f33_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05f82_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c05fd1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0613c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06267_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06478_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c064a6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c064d4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c064e3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06537_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0654e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06578_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c065a3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c065c2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c068f4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c069af_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c069f7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06a07_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06a1b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06a8b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06a8e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06a91_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06aca_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06b3d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06e1a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06e2c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06e4a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06e6e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06f82_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c06fed_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0705f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c070cb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c073c0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c07477_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c07526_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0769c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c076c8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c07716_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0777a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0778a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0780f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c079ec_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c07a31_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c07a56_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c07b52_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c07c5b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c083b8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c083c1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c083e3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08456_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08496_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08529_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0856b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08573_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08726_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08744_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0878b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c087ab_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c087ab_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0888b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c088a5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08b19_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08b8e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08c53_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08c54_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08c58_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08c6d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08c87_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08ca1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08cbb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08cd5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c08d79_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09279_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0927c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0943c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09451_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c094d0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09506_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09907_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09ac5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09acc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09ad3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09adb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09c02_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09c35_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09c3b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09c57_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09c73_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09c8f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09c99_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09cb5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09cd7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09d03_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09d12_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09d1f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09d3e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09d60_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09d78_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09dae_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09e71_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09e79_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09e98_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09eac_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09ece_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09eff_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09f3b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09f71_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09fa8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09fae_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c09ff1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a00c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a023_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a03a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a055_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a06c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a089_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a0a0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a0bb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a0ca_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a0e3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a0fa_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a156_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a156_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a1ce_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a1f2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a21c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a230_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a254_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a26b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a2b7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a2e1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a317_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a360_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a384_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a3a4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a443_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a56e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a643_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a66d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a673_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a685_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a691_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a697_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a6a2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a6ad_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a6b8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a6c5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a6cb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a6e3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a780_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a794_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a841_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a84c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a857_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a864_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a86f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a87a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a88d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a8a0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a8b3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a8c6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a8d1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a8dc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a8e7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a8ef_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a92d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a938_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a94e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a959_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a964_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a98b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a99f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a9b3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a9cf_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0a9eb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0aa23_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0aa3f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0aa6e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0aaac_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0aab5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0aacd_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0aad1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0aad5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0aafd_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0abbd_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ac0c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ac20_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ac3a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ac43_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ad56_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ad9f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ae34_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0afcd_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0b0aa_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0b0b8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0b0ef_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0b149_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0b65f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0b67f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0b9bc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ba35_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0bd96_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0bf72_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c0b4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c19b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c251_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c30c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c353_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c35d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c363_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c3f9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c48f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c4af_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c524_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c615_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c62b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c6b6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c711_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c760_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c7ac_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c7db_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c808_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0c83b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ca4e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0cbd3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0cc11_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0cccc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0cd50_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0cebe_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0cf97_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d0d9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d0e6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d15c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d195_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d19b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d4de_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d59b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d5b0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d77f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d7b3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d7c7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d7e0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d7f7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d98f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0da31_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0db0f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0dc38_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0dd0f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0dd2c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0dd79_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0de16_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0de46_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0de7c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ded9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0df22_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e196_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e214_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e254_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e28f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e3c1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e44d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e48a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e516_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e674_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e6fe_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e776_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e815_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e897_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e979_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e97c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0e9ba_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ebe0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ec77_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ecb7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ed14_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ed39_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ed5c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0edd1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0edda_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ee47_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ee53_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0efe1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0f1d2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0f21e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10000_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10004_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1004e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1008e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1008e_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c100d6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c100fe_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c102d0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1078d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c107af_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10a85_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10ba1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10ba1_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10bfe_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10c55_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10d60_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10d7c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10eb4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10ee3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10f40_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10fa3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10fa3_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10fea_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1134b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c11354_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c11383_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1138d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1138d_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c113d1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c114b1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1153b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c11596_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c115f4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c117e2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c117e2_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1180d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1181b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c11887_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c11f5a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c11f8a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c11fbc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c11fd4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12012_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12070_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c120d6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c121b8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12362_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1242e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1242e_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1244c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12bd5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12bf3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12c36_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12ccc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12d17_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12e42_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1339e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c133a7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c133b0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c14012_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c14049_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c14070_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c15fb1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1621f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c17796_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c17889_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1866d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1869d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c190e6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c190f1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c191b0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c191f8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19216_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19249_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1931b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c193e7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19437_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19441_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1952f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19a11_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19a43_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19cdd_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19d49_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19db5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19f29_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1a1d8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1a778_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1a795_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1aa18_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1aa5d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1aafa_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ac00_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ac4a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ac4a_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1aca1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1aca1_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1acf8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1acf8_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ad02_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ad0a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ad26_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ad42_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ad7d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1b5b6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1bb06_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1bb71_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1befc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1c046_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1c165_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1c1ba_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1c32a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1c367_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1c373_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1c3b6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1c853_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1c8bc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ca06_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ca72_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1caf5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1cb7f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ce85_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1cfc6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1cfc6_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1d038_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1d08b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1dccb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1dd5f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1dd82_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1dd9f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1e48d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1e4be_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ec8f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ecd1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1f07e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1f14f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1f2a8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1f497_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1f616_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ff2c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ff6b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ff99_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c200d9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c20266_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c20293_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c202ac_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2038b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2077d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c207b6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2087c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c208b8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c209a0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c20a20_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c20abc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c20b65_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c20f58_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c21034_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2108c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c216ad_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c216db_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c22351_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2239d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c223d9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c22474_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c22562_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c225ac_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2260d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c22673_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c226c5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c226e6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c226f0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2272f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2277c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c22a3a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c23008_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2307b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c23e32_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c23e8a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c240a4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c24348_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2437e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c24434_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c24703_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c26189_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2654c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c269de_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c290c6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2b66a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2bcb9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2bd13_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2c21f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2c32c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2c37a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2c41f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2cfe5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2d0ac_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2dae3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2db14_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2db3f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2de0f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2de96_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2df2e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2e08e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2e0e7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2e6b3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2e8c4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2e9c8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2e9ed_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2ea15_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2ea74_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2eaaa_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2eacf_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2eee7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2f09f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2f0d1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2f121_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2f8f9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2f917_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2fad2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2fad8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2fade_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2fb35_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2fca6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2fd99_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2fef9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2ff9a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3e450_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3e4ef_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3e6f8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3e6f8_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3e75d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3e7e3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3e9f7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3ead0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3eb1c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3ebca_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3ec1f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3ec8b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3ed2c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3ed98_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3ee14_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3ee4d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3ee7a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3f1ec_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3f5f9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3f67d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3f705_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3f7fb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3f981_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3fac9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3fb09_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c40000_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c40009_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c40015_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c40023_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4002f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c40085_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c40b51_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c40b75_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c41db6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c41ee9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c41ef4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c41eff_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c41fff_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4213f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c423dc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4240a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c42439_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4245d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4248a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4249a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c424d1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c42509_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c42542_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c42569_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c42574_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4257f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4258c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c425cc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c425f3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c425fd_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c42624_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c42631_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4268a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c426c7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c426ed_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4283f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c42884_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c428d1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c428fc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c42965_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c429ae_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c429e8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c432b1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43317_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43344_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4334a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4343e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43568_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43573_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43573_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c435e4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43657_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c436d7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43739_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c437b8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c437b8_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43874_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c438a5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c438a5_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43b15_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43bb9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43caa_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43cd2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43d24_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43d75_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43d95_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43ddb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43e31_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43ef8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43f53_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43f77_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c440b5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c441b7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4424a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c442ac_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c444fb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c445e1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c447fb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4487c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c44963_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c44b3a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c44c8c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c44dca_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c44e44_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c44e61_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c44ff3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4507a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c451fa_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c45c90_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c45ddd_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c45e96_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46028_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4605a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4608c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c460ce_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46125_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4617c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c461cc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4621c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46257_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c462ae_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c462c9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c462e4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c462ff_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46331_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46363_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46397_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c463f4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4645a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46534_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4655e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46579_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46594_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c465fb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46616_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46631_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46698_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c466a8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c466b8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c466c1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c466f0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46712_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4675c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c467b4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c467c2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c467e6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4681a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46881_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c468a9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c468af_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c468b5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c468dc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46903_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46914_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46957_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46984_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c469f1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46a6e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46a9a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46aa3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46aac_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46adb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46b0a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46b2d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46b37_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46b51_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46b65_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46b79_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46b8d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46bbb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46c45_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46c5e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46c87_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46c9b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46cc7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46cf5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46d23_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46d4b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46e46_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46e4f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46ef8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46f7c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47044_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47143_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47225_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47269_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c472a8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4730e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47333_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4733c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4734c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47369_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c473b2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c473d0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4746b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47499_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c474a8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47501_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c476a5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47705_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47765_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47866_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4789e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47930_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c479e9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47a27_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47a6b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47a9e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47b77_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47f87_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4810e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4827b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4838a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4880c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c48a6d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c48b2c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c48c69_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c48c97_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c48d58_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c48e6b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c48e95_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c48f98_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c492d2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4939c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49496_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4954c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4958e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c496e7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c496f0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c496f9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49740_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4978e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c497c0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4981f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49841_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4984b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49875_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4999b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49a4b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49a56_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49b6e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49c56_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49ca8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49cc3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49d16_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49d1e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49ec4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4a228_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4a377_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4a67e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4a7b0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b1b8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b329_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b4be_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b4fe_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b519_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b524_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b53f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b54a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b565_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b570_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b57d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b587_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b595_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b59f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b7a5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b859_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b923_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4baf6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4bd9a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4bf7f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4c2de_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4c45f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4c519_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4c58f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4c60e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4c64d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4c8a4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4c8db_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4c8e9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4c91a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4cb4f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4cb8f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4cbe3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4cc2f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4cd44_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4ceb0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4ced8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4d00f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4d065_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4d2a8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4d2f0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4d43f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4d744_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4d830_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4d8fa_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4d989_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4dcf6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4eda3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4ee9d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_e1_e14de8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef00bb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef00e6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0115_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef016f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef01d2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0262_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef027d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef02c4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef031e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef04dc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0c3d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0c87_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0c97_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0ca7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0d23_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0d46_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0d73_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0d8d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0dfa_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0e67_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0e8a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0ead_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0ee8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0f60_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0fdb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0ff6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efd56f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efd5d9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efd6d4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efd95e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efd9f3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efda05_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efdabd_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efdf0b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efdfc4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe07c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe133_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe175_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe6cf_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe6e2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe708_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe759_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe771_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe873_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe895_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe8c7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efea23_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efea4a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efea9e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efeaa4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efeac8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efeb2a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_miscellaneous_null_c1e1a2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_miscellaneous_null_c3ef23_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_miscellaneous_null_c4cc2c_instruction(MainCpu65816&, std::uint32_t);

namespace {
using Routine = bool (*)(MainCpu65816&, std::uint32_t);
bool execute_shared_page_c000(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00013) return execute_overworld_actionscript_clear_entity_draw_sorting_table_instruction(cpu, address);
    if (address < 0xC0004B) return execute_overworld_setup_vram_instruction(cpu, address);
    if (address < 0xC00085) return execute_overworld_initialize_instruction(cpu, address);
    return execute_system_load_tileset_anim_instruction(cpu, address);
}
bool execute_shared_page_c001(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00172) return execute_system_load_tileset_anim_instruction(cpu, address);
    return execute_system_animate_tileset_instruction(cpu, address);
}
bool execute_shared_page_c002(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0023F) return execute_system_animate_tileset_instruction(cpu, address);
    return execute_system_load_palette_anim_instruction(cpu, address);
}
bool execute_shared_page_c003(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0030F) return execute_system_load_palette_anim_instruction(cpu, address);
    if (address < 0xC0035B) return execute_system_animate_palette_instruction(cpu, address);
    if (address < 0xC00391) return execute_unresolved_c0035b_instruction(cpu, address);
    return execute_system_get_colour_average_instruction(cpu, address);
}
bool execute_shared_page_c004(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00434) return execute_system_get_colour_average_instruction(cpu, address);
    if (address < 0xC00480) return execute_overworld_adjust_single_colour_instruction(cpu, address);
    return execute_overworld_adjust_sprite_palettes_by_average_instruction(cpu, address);
}
bool execute_shared_page_c005(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC005E7) return execute_overworld_adjust_sprite_palettes_by_average_instruction(cpu, address);
    return execute_overworld_prepare_average_for_sprite_palettes_instruction(cpu, address);
}
bool execute_shared_page_c006(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0062A) return execute_overworld_prepare_average_for_sprite_palettes_instruction(cpu, address);
    if (address < 0xC0067E) return execute_overworld_load_tile_collision_instruction(cpu, address);
    if (address < 0xC006F2) return execute_overworld_replace_block_instruction(cpu, address);
    return execute_overworld_load_map_block_event_changes_instruction(cpu, address);
}
bool execute_shared_page_c007(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00778) return execute_overworld_load_map_block_event_changes_instruction(cpu, address);
    if (address < 0xC007B6) return execute_overworld_load_special_sprite_palette_instruction(cpu, address);
    return execute_overworld_load_map_palette_instruction(cpu, address);
}
bool execute_shared_page_c008(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC008C3) return execute_overworld_load_map_palette_instruction(cpu, address);
    return execute_overworld_load_map_at_sector_instruction(cpu, address);
}
bool execute_shared_page_c00a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00AA1) return execute_overworld_load_map_at_sector_instruction(cpu, address);
    if (address < 0xC00AC5) return execute_overworld_load_sector_attributes_instruction(cpu, address);
    return execute_overworld_load_map_row_instruction(cpu, address);
}
bool execute_shared_page_c00b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00BDC) return execute_overworld_load_map_row_instruction(cpu, address);
    return execute_overworld_load_map_column_instruction(cpu, address);
}
bool execute_shared_page_c00c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00CF3) return execute_overworld_load_map_column_instruction(cpu, address);
    return execute_overworld_load_collision_row_instruction(cpu, address);
}
bool execute_shared_page_c00d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00D7E) return execute_overworld_load_collision_row_instruction(cpu, address);
    return execute_overworld_load_collision_column_instruction(cpu, address);
}
bool execute_shared_page_c00e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00E16) return execute_overworld_load_collision_column_instruction(cpu, address);
    return execute_unresolved_c0_c00e16_instruction(cpu, address);
}
bool execute_shared_page_c00f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00FCB) return execute_unresolved_c0_c00e16_instruction(cpu, address);
    return execute_unresolved_c0_c00fcb_instruction(cpu, address);
}
bool execute_shared_page_c011(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01181) return execute_unresolved_c0_c00fcb_instruction(cpu, address);
    return execute_unresolved_c0_c01181_instruction(cpu, address);
}
bool execute_shared_page_c012(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0122A) return execute_unresolved_c0_c01181_instruction(cpu, address);
    if (address < 0xC012ED) return execute_unresolved_c0_c0122a_instruction(cpu, address);
    return execute_overworld_reload_map_at_position_instruction(cpu, address);
}
bool execute_shared_page_c013(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC013F6) return execute_overworld_reload_map_at_position_instruction(cpu, address);
    return execute_overworld_load_map_at_position_instruction(cpu, address);
}
bool execute_shared_page_c015(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01558) return execute_overworld_load_map_at_position_instruction(cpu, address);
    return execute_overworld_refresh_map_at_position_instruction(cpu, address);
}
bool execute_shared_page_c017(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01731) return execute_overworld_refresh_map_at_position_instruction(cpu, address);
    if (address < 0xC017EA) return execute_unresolved_c0_c01731_instruction(cpu, address);
    return execute_unresolved_c0_c017ea_instruction(cpu, address);
}
bool execute_shared_page_c018(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC018F3) return execute_unresolved_c0_c017ea_instruction(cpu, address);
    return execute_overworld_reload_map_instruction(cpu, address);
}
bool execute_shared_page_c019(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC019B2) return execute_overworld_reload_map_instruction(cpu, address);
    if (address < 0xC019E2) return execute_overworld_initialize_map_instruction(cpu, address);
    return execute_unresolved_c0_c019e2_instruction(cpu, address);
}
bool execute_shared_page_c01a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01A63) return execute_unresolved_c0_c019e2_instruction(cpu, address);
    if (address < 0xC01A69) return execute_unresolved_c0_c01a63_instruction(cpu, address);
    if (address < 0xC01A86) return execute_overworld_initialize_misc_object_data_instruction(cpu, address);
    if (address < 0xC01A9D) return execute_unresolved_c0_c01a86_instruction(cpu, address);
    return execute_overworld_find_free_space_7e4682_instruction(cpu, address);
}
bool execute_shared_page_c01b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01B15) return execute_overworld_find_free_space_7e4682_instruction(cpu, address);
    if (address < 0xC01B96) return execute_unresolved_c0_c01b15_instruction(cpu, address);
    return execute_unresolved_c0_c01b96_instruction(cpu, address);
}
bool execute_shared_page_c01c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01C11) return execute_unresolved_c0_c01b96_instruction(cpu, address);
    if (address < 0xC01C52) return execute_system_alloc_sprite_mem_instruction(cpu, address);
    return execute_unresolved_c0_c01c52_instruction(cpu, address);
}
bool execute_shared_page_c01d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01D38) return execute_unresolved_c0_c01c52_instruction(cpu, address);
    if (address < 0xC01DED) return execute_unresolved_c0_c01d38_instruction(cpu, address);
    return execute_unresolved_c0_c01ded_instruction(cpu, address);
}
bool execute_shared_page_c01e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01E49) return execute_unresolved_c0_c01ded_instruction(cpu, address);
    return execute_overworld_create_entity_instruction(cpu, address);
}
bool execute_shared_page_c020(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC020F1) return execute_overworld_create_entity_instruction(cpu, address);
    return execute_unresolved_c0_c020f1_instruction(cpu, address);
}
bool execute_shared_page_c021(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC02140) return execute_unresolved_c0_c020f1_instruction(cpu, address);
    if (address < 0xC02194) return execute_unresolved_c0_c02140_instruction(cpu, address);
    if (address < 0xC021E6) return execute_unresolved_c0_c02194_instruction(cpu, address);
    return execute_unresolved_c0_c021e6_instruction(cpu, address);
}
bool execute_shared_page_c022(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0222B) return execute_unresolved_c0_c021e6_instruction(cpu, address);
    return execute_unresolved_c0_c0222b_instruction(cpu, address);
}
bool execute_shared_page_c025(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0255C) return execute_unresolved_c0_c0222b_instruction(cpu, address);
    if (address < 0xC025CF) return execute_unresolved_c0_c0255c_instruction(cpu, address);
    return execute_unresolved_c0_c025cf_instruction(cpu, address);
}
bool execute_shared_page_c026(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0263D) return execute_unresolved_c0_c025cf_instruction(cpu, address);
    if (address < 0xC02668) return execute_unresolved_c0_c0263d_instruction(cpu, address);
    return execute_unresolved_c0_c02668_instruction(cpu, address);
}
bool execute_shared_page_c02a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC02A6B) return execute_unresolved_c0_c02668_instruction(cpu, address);
    return execute_overworld_spawn_horizontal_instruction(cpu, address);
}
bool execute_shared_page_c02b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC02B55) return execute_overworld_spawn_horizontal_instruction(cpu, address);
    return execute_overworld_spawn_vertical_instruction(cpu, address);
}
bool execute_shared_page_c02c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC02C3E) return execute_overworld_spawn_vertical_instruction(cpu, address);
    if (address < 0xC02C83) return execute_unresolved_c0_c02c3e_instruction(cpu, address);
    if (address < 0xC02C89) return execute_overworld_reset_mushroomized_walking_instruction(cpu, address);
    return execute_overworld_mushroomization_movement_swap_instruction(cpu, address);
}
bool execute_shared_page_c02d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC02D29) return execute_overworld_mushroomization_movement_swap_instruction(cpu, address);
    if (address < 0xC02D8F) return execute_unresolved_c0_c02d29_instruction(cpu, address);
    return execute_overworld_adjust_position_horizontal_instruction(cpu, address);
}
bool execute_shared_page_c030(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC03017) return execute_overworld_adjust_position_horizontal_instruction(cpu, address);
    return execute_overworld_adjust_position_vertical_instruction(cpu, address);
}
bool execute_shared_page_c032(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0329F) return execute_overworld_adjust_position_vertical_instruction(cpu, address);
    if (address < 0xC032EC) return execute_unresolved_c0_c0329f_instruction(cpu, address);
    return execute_unresolved_c0_c032ec_instruction(cpu, address);
}
bool execute_shared_page_c034(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC034D6) return execute_unresolved_c0_c032ec_instruction(cpu, address);
    return execute_overworld_update_party_instruction(cpu, address);
}
bool execute_shared_page_c036(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0369B) return execute_overworld_update_party_instruction(cpu, address);
    return execute_unresolved_c0_c0369b_instruction(cpu, address);
}
bool execute_shared_page_c039(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC03903) return execute_unresolved_c0_c0369b_instruction(cpu, address);
    if (address < 0xC039E5) return execute_unresolved_c0_c03903_instruction(cpu, address);
    return execute_unresolved_c0_c039e5_instruction(cpu, address);
}
bool execute_shared_page_c03a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC03A24) return execute_unresolved_c0_c039e5_instruction(cpu, address);
    if (address < 0xC03A94) return execute_unresolved_c0_c03a24_instruction(cpu, address);
    return execute_unresolved_c0_c03a94_instruction(cpu, address);
}
bool execute_shared_page_c03c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC03C25) return execute_unresolved_c0_c03a94_instruction(cpu, address);
    if (address < 0xC03C4B) return execute_unresolved_c0_c03c25_instruction(cpu, address);
    if (address < 0xC03C5E) return execute_unresolved_c0_c03c4b_instruction(cpu, address);
    if (address < 0xC03CFD) return execute_overworld_get_on_bicycle_instruction(cpu, address);
    return execute_unresolved_c0_c03cfd_instruction(cpu, address);
}
bool execute_shared_page_c03d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC03DAA) return execute_unresolved_c0_c03cfd_instruction(cpu, address);
    return execute_unresolved_c0_c03daa_instruction(cpu, address);
}
bool execute_shared_page_c03e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC03E25) return execute_unresolved_c0_c03daa_instruction(cpu, address);
    if (address < 0xC03E5A) return execute_unresolved_c0_c03e25_instruction(cpu, address);
    if (address < 0xC03E9D) return execute_unresolved_c0_c03e5a_instruction(cpu, address);
    if (address < 0xC03EC3) return execute_unresolved_c0_c03e9d_instruction(cpu, address);
    return execute_unresolved_c0_c03ec3_instruction(cpu, address);
}
bool execute_shared_page_c03f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC03F1E) return execute_unresolved_c0_c03ec3_instruction(cpu, address);
    if (address < 0xC03FA9) return execute_unresolved_c0_c03f1e_instruction(cpu, address);
    return execute_unresolved_c0_c03fa9_instruction(cpu, address);
}
bool execute_shared_page_c040(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0400E) return execute_unresolved_c0_c03fa9_instruction(cpu, address);
    if (address < 0xC0402B) return execute_system_center_screen_instruction(cpu, address);
    if (address < 0xC04049) return execute_unresolved_c0_c0402b_instruction(cpu, address);
    if (address < 0xC0404F) return execute_unresolved_c0_c04049_instruction(cpu, address);
    return execute_overworld_map_input_to_direction_instruction(cpu, address);
}
bool execute_shared_page_c041(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04116) return execute_overworld_map_input_to_direction_instruction(cpu, address);
    if (address < 0xC041E3) return execute_unresolved_c0_c04116_instruction(cpu, address);
    return execute_unresolved_c0_c041e3_instruction(cpu, address);
}
bool execute_shared_page_c042(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04279) return execute_unresolved_c0_c041e3_instruction(cpu, address);
    if (address < 0xC042C2) return execute_overworld_find_nearby_checkable_tpt_entry_instruction(cpu, address);
    if (address < 0xC042EF) return execute_unresolved_c0_c042c2_instruction(cpu, address);
    return execute_unresolved_c0_c042ef_instruction(cpu, address);
}
bool execute_shared_page_c043(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC043BC) return execute_unresolved_c0_c042ef_instruction(cpu, address);
    return execute_unresolved_c0_c043bc_instruction(cpu, address);
}
bool execute_shared_page_c044(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04452) return execute_unresolved_c0_c043bc_instruction(cpu, address);
    if (address < 0xC0449B) return execute_overworld_find_nearby_talkable_tpt_entry_instruction(cpu, address);
    return execute_unresolved_c0_c0449b_instruction(cpu, address);
}
bool execute_shared_page_c047(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0476D) return execute_unresolved_c0_c0449b_instruction(cpu, address);
    if (address < 0xC047CF) return execute_unresolved_c0_c0476d_instruction(cpu, address);
    return execute_unresolved_c0_c047cf_instruction(cpu, address);
}
bool execute_shared_page_c048(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC048D3) return execute_unresolved_c0_c047cf_instruction(cpu, address);
    return execute_unresolved_c0_c048d3_instruction(cpu, address);
}
bool execute_shared_page_c04a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04A7B) return execute_unresolved_c0_c048d3_instruction(cpu, address);
    if (address < 0xC04A88) return execute_unresolved_c0_c04a7b_instruction(cpu, address);
    if (address < 0xC04AAD) return execute_unresolved_c0_c04a88_instruction(cpu, address);
    return execute_unresolved_c0_c04aad_instruction(cpu, address);
}
bool execute_shared_page_c04b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04B53) return execute_unresolved_c0_c04aad_instruction(cpu, address);
    return execute_unresolved_c0_c04b53_instruction(cpu, address);
}
bool execute_shared_page_c04c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04C45) return execute_unresolved_c0_c04b53_instruction(cpu, address);
    return execute_unresolved_c0_c04c45_instruction(cpu, address);
}
bool execute_shared_page_c04d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04D78) return execute_unresolved_c0_c04c45_instruction(cpu, address);
    return execute_unresolved_c0_c04d78_instruction(cpu, address);
}
bool execute_shared_page_c04e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04EF0) return execute_unresolved_c0_c04d78_instruction(cpu, address);
    return execute_unresolved_c0_c04ef0_instruction(cpu, address);
}
bool execute_shared_page_c04f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04F47) return execute_unresolved_c0_c04ef0_instruction(cpu, address);
    if (address < 0xC04F60) return execute_unresolved_c0_c04f47_instruction(cpu, address);
    if (address < 0xC04F9F) return execute_unresolved_c0_c04f60_instruction(cpu, address);
    if (address < 0xC04FFE) return execute_unresolved_c0_c04f9f_instruction(cpu, address);
    return execute_unresolved_c0_c04ffe_instruction(cpu, address);
}
bool execute_shared_page_c052(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC052AA) return execute_unresolved_c0_c05200_instruction(cpu, address);
    if (address < 0xC052D4) return execute_battle_init_common_instruction(cpu, address);
    return execute_unresolved_c0_c052d4_instruction(cpu, address);
}
bool execute_shared_page_c054(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0546B) return execute_unresolved_c0_c052d4_instruction(cpu, address);
    if (address < 0xC054C9) return execute_unresolved_c0_c0546b_instruction(cpu, address);
    return execute_unresolved_c0_c054c9_instruction(cpu, address);
}
bool execute_shared_page_c055(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05503) return execute_unresolved_c0_c054c9_instruction(cpu, address);
    if (address < 0xC0559C) return execute_unresolved_c0_c05503_instruction(cpu, address);
    return execute_unresolved_c0_c0559c_instruction(cpu, address);
}
bool execute_shared_page_c056(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05639) return execute_unresolved_c0_c0559c_instruction(cpu, address);
    if (address < 0xC056D0) return execute_unresolved_c0_c05639_instruction(cpu, address);
    return execute_unresolved_c0_c056d0_instruction(cpu, address);
}
bool execute_shared_page_c057(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05769) return execute_unresolved_c0_c056d0_instruction(cpu, address);
    if (address < 0xC057E8) return execute_unresolved_c0_c05769_instruction(cpu, address);
    return execute_unresolved_c0_c057e8_instruction(cpu, address);
}
bool execute_shared_page_c058(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0583C) return execute_unresolved_c0_c057e8_instruction(cpu, address);
    if (address < 0xC05890) return execute_unresolved_c0_c0583c_instruction(cpu, address);
    return execute_unresolved_c0_c05890_instruction(cpu, address);
}
bool execute_shared_page_c059(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC059EF) return execute_unresolved_c0_c05890_instruction(cpu, address);
    return execute_unresolved_c0_c059ef_instruction(cpu, address);
}
bool execute_shared_page_c05b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05B4E) return execute_unresolved_c0_c059ef_instruction(cpu, address);
    if (address < 0xC05B7B) return execute_unresolved_c0_c05b4e_instruction(cpu, address);
    return execute_unresolved_c0_c05b7b_instruction(cpu, address);
}
bool execute_shared_page_c05c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05CD7) return execute_unresolved_c0_c05b7b_instruction(cpu, address);
    return execute_unresolved_c0_c05cd7_instruction(cpu, address);
}
bool execute_shared_page_c05d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05D8B) return execute_unresolved_c0_c05cd7_instruction(cpu, address);
    if (address < 0xC05DE7) return execute_unresolved_c0_c05d8b_instruction(cpu, address);
    return execute_unresolved_c0_c05de7_instruction(cpu, address);
}
bool execute_shared_page_c05e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05E3B) return execute_unresolved_c0_c05de7_instruction(cpu, address);
    if (address < 0xC05E76) return execute_unresolved_c0_c05e3b_instruction(cpu, address);
    if (address < 0xC05E82) return execute_unresolved_c0_c05e76_instruction(cpu, address);
    if (address < 0xC05ECE) return execute_unresolved_c0_c05e82_instruction(cpu, address);
    return execute_unresolved_c0_c05ece_instruction(cpu, address);
}
bool execute_shared_page_c05f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05F33) return execute_unresolved_c0_c05ece_instruction(cpu, address);
    if (address < 0xC05F82) return execute_unresolved_c0_c05f33_instruction(cpu, address);
    if (address < 0xC05FD1) return execute_unresolved_c0_c05f82_instruction(cpu, address);
    if (address < 0xC05FF6) return execute_unresolved_c0_c05fd1_instruction(cpu, address);
    return execute_overworld_npc_collision_check_instruction(cpu, address);
}
bool execute_shared_page_c061(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0613C) return execute_overworld_npc_collision_check_instruction(cpu, address);
    return execute_unresolved_c0_c0613c_instruction(cpu, address);
}
bool execute_shared_page_c062(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06267) return execute_unresolved_c0_c0613c_instruction(cpu, address);
    return execute_unresolved_c0_c06267_instruction(cpu, address);
}
bool execute_shared_page_c064(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06478) return execute_unresolved_c0_c06267_instruction(cpu, address);
    if (address < 0xC064A6) return execute_unresolved_c0_c06478_instruction(cpu, address);
    if (address < 0xC064D4) return execute_unresolved_c0_c064a6_instruction(cpu, address);
    if (address < 0xC064E3) return execute_unresolved_c0_c064d4_instruction(cpu, address);
    return execute_unresolved_c0_c064e3_instruction(cpu, address);
}
bool execute_shared_page_c065(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06537) return execute_unresolved_c0_c064e3_instruction(cpu, address);
    if (address < 0xC0654E) return execute_unresolved_c0_c06537_instruction(cpu, address);
    if (address < 0xC06578) return execute_unresolved_c0_c0654e_instruction(cpu, address);
    if (address < 0xC065A3) return execute_unresolved_c0_c06578_instruction(cpu, address);
    if (address < 0xC065C2) return execute_unresolved_c0_c065a3_instruction(cpu, address);
    return execute_unresolved_c0_c065c2_instruction(cpu, address);
}
bool execute_shared_page_c066(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06662) return execute_unresolved_c0_c065c2_instruction(cpu, address);
    return execute_overworld_screen_transition_instruction(cpu, address);
}
bool execute_shared_page_c068(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC068AF) return execute_overworld_screen_transition_instruction(cpu, address);
    if (address < 0xC068F4) return execute_overworld_get_screen_transition_sound_effect_instruction(cpu, address);
    return execute_unresolved_c0_c068f4_instruction(cpu, address);
}
bool execute_shared_page_c069(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC069AF) return execute_unresolved_c0_c068f4_instruction(cpu, address);
    if (address < 0xC069ED) return execute_unresolved_c0_c069af_instruction(cpu, address);
    if (address < 0xC069F7) return execute_overworld_change_music_5dd6_instruction(cpu, address);
    return execute_unresolved_c0_c069f7_instruction(cpu, address);
}
bool execute_shared_page_c06a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06A07) return execute_unresolved_c0_c069f7_instruction(cpu, address);
    if (address < 0xC06A1B) return execute_unresolved_c0_c06a07_instruction(cpu, address);
    if (address < 0xC06A8B) return execute_unresolved_c0_c06a1b_instruction(cpu, address);
    if (address < 0xC06A8E) return execute_unresolved_c0_c06a8b_instruction(cpu, address);
    if (address < 0xC06A91) return execute_unresolved_c0_c06a8e_instruction(cpu, address);
    if (address < 0xC06ACA) return execute_unresolved_c0_c06a91_instruction(cpu, address);
    return execute_unresolved_c0_c06aca_instruction(cpu, address);
}
bool execute_shared_page_c06b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06B21) return execute_unresolved_c0_c06aca_instruction(cpu, address);
    if (address < 0xC06B3D) return execute_overworld_spawn_buzz_buzz_instruction(cpu, address);
    if (address < 0xC06BFF) return execute_unresolved_c0_c06b3d_instruction(cpu, address);
    return execute_overworld_door_transition_instruction(cpu, address);
}
bool execute_shared_page_c06e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06E1A) return execute_overworld_door_transition_instruction(cpu, address);
    if (address < 0xC06E2C) return execute_unresolved_c0_c06e1a_instruction(cpu, address);
    if (address < 0xC06E4A) return execute_unresolved_c0_c06e2c_instruction(cpu, address);
    if (address < 0xC06E6E) return execute_unresolved_c0_c06e4a_instruction(cpu, address);
    return execute_unresolved_c0_c06e6e_instruction(cpu, address);
}
bool execute_shared_page_c06f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06F82) return execute_unresolved_c0_c06e6e_instruction(cpu, address);
    if (address < 0xC06FED) return execute_unresolved_c0_c06f82_instruction(cpu, address);
    return execute_unresolved_c0_c06fed_instruction(cpu, address);
}
bool execute_shared_page_c070(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0705F) return execute_unresolved_c0_c06fed_instruction(cpu, address);
    if (address < 0xC070CB) return execute_unresolved_c0_c0705f_instruction(cpu, address);
    return execute_unresolved_c0_c070cb_instruction(cpu, address);
}
bool execute_shared_page_c071(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC071E5) return execute_unresolved_c0_c070cb_instruction(cpu, address);
    return execute_overworld_disable_hotspot_instruction(cpu, address);
}
bool execute_shared_page_c072(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07213) return execute_overworld_disable_hotspot_instruction(cpu, address);
    if (address < 0xC072CF) return execute_overworld_reload_hotspots_instruction(cpu, address);
    return execute_overworld_activate_hotspot_instruction(cpu, address);
}
bool execute_shared_page_c073(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC073C0) return execute_overworld_activate_hotspot_instruction(cpu, address);
    return execute_unresolved_c0_c073c0_instruction(cpu, address);
}
bool execute_shared_page_c074(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07477) return execute_unresolved_c0_c073c0_instruction(cpu, address);
    return execute_unresolved_c0_c07477_instruction(cpu, address);
}
bool execute_shared_page_c075(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07526) return execute_unresolved_c0_c07477_instruction(cpu, address);
    if (address < 0xC075DD) return execute_unresolved_c0_c07526_instruction(cpu, address);
    return execute_overworld_process_queued_interactions_instruction(cpu, address);
}
bool execute_shared_page_c076(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0769C) return execute_overworld_process_queued_interactions_instruction(cpu, address);
    if (address < 0xC076C8) return execute_unresolved_c0_c0769c_instruction(cpu, address);
    return execute_unresolved_c0_c076c8_instruction(cpu, address);
}
bool execute_shared_page_c077(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07716) return execute_unresolved_c0_c076c8_instruction(cpu, address);
    if (address < 0xC0777A) return execute_unresolved_c0_c07716_instruction(cpu, address);
    if (address < 0xC0778A) return execute_unresolved_c0_c0777a_instruction(cpu, address);
    return execute_unresolved_c0_c0778a_instruction(cpu, address);
}
bool execute_shared_page_c078(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0780F) return execute_unresolved_c0_c0778a_instruction(cpu, address);
    return execute_unresolved_c0_c0780f_instruction(cpu, address);
}
bool execute_shared_page_c079(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC079EC) return execute_unresolved_c0_c0780f_instruction(cpu, address);
    return execute_unresolved_c0_c079ec_instruction(cpu, address);
}
bool execute_shared_page_c07a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07A31) return execute_unresolved_c0_c079ec_instruction(cpu, address);
    if (address < 0xC07A56) return execute_unresolved_c0_c07a31_instruction(cpu, address);
    return execute_unresolved_c0_c07a56_instruction(cpu, address);
}
bool execute_shared_page_c07b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07B52) return execute_unresolved_c0_c07a56_instruction(cpu, address);
    return execute_unresolved_c0_c07b52_instruction(cpu, address);
}
bool execute_shared_page_c07c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07C5B) return execute_unresolved_c0_c07b52_instruction(cpu, address);
    if (address < 0xC07C8A) return execute_unresolved_c0_c07c5b_instruction(cpu, address);
    return execute_system_strcat_instruction(cpu, address);
}
bool execute_shared_page_c081(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08141) return execute_system_reset_instruction(cpu, address);
    if (address < 0xC08147) return execute_system_reset_vector_instruction(cpu, address);
    if (address < 0xC0814B) return execute_system_nmi_vector_instruction(cpu, address);
    if (address < 0xC0814F) return execute_system_irq_vector_instruction(cpu, address);
    return execute_system_irq_nmi_instruction(cpu, address);
}
bool execute_shared_page_c083(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08391) return execute_system_irq_nmi_instruction(cpu, address);
    if (address < 0xC083B8) return execute_system_test_sram_size_instruction(cpu, address);
    if (address < 0xC083C1) return execute_unresolved_c0_c083b8_instruction(cpu, address);
    if (address < 0xC083E3) return execute_unresolved_c0_c083c1_instruction(cpu, address);
    return execute_unresolved_c0_c083e3_instruction(cpu, address);
}
bool execute_shared_page_c084(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0841B) return execute_unresolved_c0_c083e3_instruction(cpu, address);
    if (address < 0xC08456) return execute_system_read_joypad_instruction(cpu, address);
    if (address < 0xC08496) return execute_unresolved_c0_c08456_instruction(cpu, address);
    return execute_unresolved_c0_c08496_instruction(cpu, address);
}
bool execute_shared_page_c085(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08501) return execute_unresolved_c0_c08496_instruction(cpu, address);
    if (address < 0xC08518) return execute_system_process_sfx_queue_instruction(cpu, address);
    if (address < 0xC0851B) return execute_system_execute_irq_callback_instruction(cpu, address);
    if (address < 0xC0851C) return execute_system_default_irq_callback_instruction(cpu, address);
    if (address < 0xC08522) return execute_system_set_irq_callback_instruction(cpu, address);
    if (address < 0xC08529) return execute_system_reset_irq_callback_instruction(cpu, address);
    if (address < 0xC0856B) return execute_unresolved_c0_c08529_instruction(cpu, address);
    if (address < 0xC08573) return execute_unresolved_c0_c0856b_instruction(cpu, address);
    if (address < 0xC085B7) return execute_unresolved_c0_c08573_instruction(cpu, address);
    return execute_system_transfer_to_vram_instruction(cpu, address);
}
bool execute_shared_page_c086(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08616) return execute_system_transfer_to_vram_instruction(cpu, address);
    if (address < 0xC0865B) return execute_system_prepare_vram_copy_instruction(cpu, address);
    if (address < 0xC0865F) return execute_system_copy_to_vram_redirect_instruction(cpu, address);
    if (address < 0xC086DE) return execute_system_copy_to_vram_instruction(cpu, address);
    return execute_system_sbrk_instruction(cpu, address);
}
bool execute_shared_page_c087(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08715) return execute_system_sbrk_instruction(cpu, address);
    if (address < 0xC08726) return execute_system_enable_nmi_joypad_instruction(cpu, address);
    if (address < 0xC08744) return execute_unresolved_c0_c08726_instruction(cpu, address);
    if (address < 0xC08756) return execute_unresolved_c0_c08744_instruction(cpu, address);
    if (address < 0xC0878B) return execute_system_wait_until_next_frame_instruction(cpu, address);
    if (address < 0xC08799) return execute_unresolved_c0_c0878b_instruction(cpu, address);
    if (address < 0xC0879D) return execute_system_set_inidisp_far_instruction(cpu, address);
    if (address < 0xC087A7) return execute_system_set_inidisp_instruction(cpu, address);
    if (address < 0xC087AB) return execute_unresolved_c0_c087ab_redirect_instruction(cpu, address);
    if (address < 0xC087CE) return execute_unresolved_c0_c087ab_instruction(cpu, address);
    return execute_system_fade_in_with_mosaic_instruction(cpu, address);
}
bool execute_shared_page_c088(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08814) return execute_system_fade_in_with_mosaic_instruction(cpu, address);
    if (address < 0xC0886C) return execute_system_fade_out_with_mosaic_instruction(cpu, address);
    if (address < 0xC0887A) return execute_system_fade_in_instruction(cpu, address);
    if (address < 0xC0888B) return execute_system_fade_out_instruction(cpu, address);
    if (address < 0xC088A5) return execute_unresolved_c0_c0888b_instruction(cpu, address);
    if (address < 0xC088B1) return execute_unresolved_c0_c088a5_instruction(cpu, address);
    return execute_system_oam_clear_instruction(cpu, address);
}
bool execute_shared_page_c08b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08B19) return execute_system_oam_clear_instruction(cpu, address);
    if (address < 0xC08B8E) return execute_unresolved_c0_c08b19_instruction(cpu, address);
    return execute_unresolved_c0_c08b8e_instruction(cpu, address);
}
bool execute_shared_page_c08c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08C53) return execute_unresolved_c0_c08b8e_instruction(cpu, address);
    if (address < 0xC08C54) return execute_unresolved_c0_c08c53_instruction(cpu, address);
    if (address < 0xC08C58) return execute_unresolved_c0_c08c54_instruction(cpu, address);
    if (address < 0xC08C6D) return execute_unresolved_c0_c08c58_instruction(cpu, address);
    if (address < 0xC08C87) return execute_unresolved_c0_c08c6d_instruction(cpu, address);
    if (address < 0xC08CA1) return execute_unresolved_c0_c08c87_instruction(cpu, address);
    if (address < 0xC08CBB) return execute_unresolved_c0_c08ca1_instruction(cpu, address);
    if (address < 0xC08CD5) return execute_unresolved_c0_c08cbb_instruction(cpu, address);
    return execute_unresolved_c0_c08cd5_instruction(cpu, address);
}
bool execute_shared_page_c08d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08D79) return execute_unresolved_c0_c08cd5_instruction(cpu, address);
    if (address < 0xC08D92) return execute_unresolved_c0_c08d79_instruction(cpu, address);
    if (address < 0xC08D9E) return execute_system_set_oam_size_instruction(cpu, address);
    if (address < 0xC08DDE) return execute_system_set_bg1_vram_location_instruction(cpu, address);
    return execute_system_set_bg2_vram_location_instruction(cpu, address);
}
bool execute_shared_page_c08e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08E1C) return execute_system_set_bg2_vram_location_instruction(cpu, address);
    if (address < 0xC08E5C) return execute_system_set_bg3_vram_location_instruction(cpu, address);
    if (address < 0xC08E9A) return execute_system_set_bg4_vram_location_instruction(cpu, address);
    if (address < 0xC08ED2) return execute_system_math_rand_instruction(cpu, address);
    if (address < 0xC08EED) return execute_system_memcpy16_instruction(cpu, address);
    if (address < 0xC08EFC) return execute_system_memcpy24_instruction(cpu, address);
    return execute_system_memset16_instruction(cpu, address);
}
bool execute_shared_page_c08f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08F15) return execute_system_memset16_instruction(cpu, address);
    if (address < 0xC08F22) return execute_system_memset24_instruction(cpu, address);
    if (address < 0xC08F2F) return execute_system_strlen_instruction(cpu, address);
    if (address < 0xC08F42) return execute_system_strcmp_instruction(cpu, address);
    if (address < 0xC08F68) return execute_system_setjmp_instruction(cpu, address);
    if (address < 0xC08F8B) return execute_system_longjmp_instruction(cpu, address);
    if (address < 0xC08FE8) return execute_system_wait_dma_finished_instruction(cpu, address);
    if (address < 0xC08FF7) return execute_system_math_mult8_instruction(cpu, address);
    return execute_system_math_mult168_instruction(cpu, address);
}
bool execute_shared_page_c090(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09032) return execute_system_math_mult168_instruction(cpu, address);
    if (address < 0xC09086) return execute_system_math_mult16_instruction(cpu, address);
    if (address < 0xC090CE) return execute_system_math_mult32_instruction(cpu, address);
    if (address < 0xC090E6) return execute_system_math_division8_instruction(cpu, address);
    if (address < 0xC090FF) return execute_system_math_division16_instruction(cpu, address);
    return execute_system_math_division32_instruction(cpu, address);
}
bool execute_shared_page_c091(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0911E) return execute_system_math_division32_instruction(cpu, address);
    if (address < 0xC0914B) return execute_system_math_division8s_instruction(cpu, address);
    if (address < 0xC0917C) return execute_system_math_division16s_instruction(cpu, address);
    if (address < 0xC091E3) return execute_system_math_division32s_instruction(cpu, address);
    if (address < 0xC091F4) return execute_system_math_modulus8s_instruction(cpu, address);
    return execute_system_math_modulus16s_instruction(cpu, address);
}
bool execute_shared_page_c092(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09206) return execute_system_math_modulus16s_instruction(cpu, address);
    if (address < 0xC0922B) return execute_system_math_modulus32s_instruction(cpu, address);
    if (address < 0xC09231) return execute_system_math_modulus8_instruction(cpu, address);
    if (address < 0xC09237) return execute_system_math_modulus16_instruction(cpu, address);
    if (address < 0xC0923D) return execute_system_math_modulus32_instruction(cpu, address);
    if (address < 0xC09242) return execute_system_math_asl16_instruction(cpu, address);
    if (address < 0xC0924A) return execute_system_math_asl32_instruction(cpu, address);
    if (address < 0xC0925B) return execute_system_math_asr8_instruction(cpu, address);
    if (address < 0xC09262) return execute_system_math_asr16_instruction(cpu, address);
    if (address < 0xC09279) return execute_system_math_asr32_instruction(cpu, address);
    if (address < 0xC0927C) return execute_unresolved_c0_c09279_instruction(cpu, address);
    if (address < 0xC092F5) return execute_unresolved_c0_c0927c_instruction(cpu, address);
    return execute_overworld_init_entity_instruction(cpu, address);
}
bool execute_shared_page_c094(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0943C) return execute_overworld_init_entity_instruction(cpu, address);
    if (address < 0xC09451) return execute_unresolved_c0_c0943c_instruction(cpu, address);
    if (address < 0xC09466) return execute_unresolved_c0_c09451_instruction(cpu, address);
    if (address < 0xC094D0) return execute_overworld_actionscript_run_actionscript_frame_instruction(cpu, address);
    return execute_unresolved_c0_c094d0_instruction(cpu, address);
}
bool execute_shared_page_c095(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09506) return execute_unresolved_c0_c094d0_instruction(cpu, address);
    if (address < 0xC095F2) return execute_unresolved_c0_c09506_instruction(cpu, address);
    return execute_overworld_actionscript_script_00_instruction(cpu, address);
}
bool execute_shared_page_c096(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09603) return execute_overworld_actionscript_script_00_instruction(cpu, address);
    if (address < 0xC09620) return execute_overworld_actionscript_script_01_instruction(cpu, address);
    if (address < 0xC09627) return execute_overworld_actionscript_script_24_instruction(cpu, address);
    if (address < 0xC09649) return execute_overworld_actionscript_script_02_instruction(cpu, address);
    if (address < 0xC0964D) return execute_overworld_actionscript_script_19_instruction(cpu, address);
    if (address < 0xC09658) return execute_overworld_actionscript_script_03_instruction(cpu, address);
    if (address < 0xC0966F) return execute_overworld_actionscript_script_1a_instruction(cpu, address);
    if (address < 0xC09685) return execute_overworld_actionscript_script_1b_instruction(cpu, address);
    if (address < 0xC096AA) return execute_overworld_actionscript_script_04_instruction(cpu, address);
    if (address < 0xC096C3) return execute_overworld_actionscript_script_05_instruction(cpu, address);
    if (address < 0xC096CF) return execute_overworld_actionscript_script_06_instruction(cpu, address);
    if (address < 0xC096E3) return execute_overworld_actionscript_script_3b_45_instruction(cpu, address);
    if (address < 0xC096F3) return execute_overworld_actionscript_script_28_instruction(cpu, address);
    return execute_overworld_actionscript_script_29_instruction(cpu, address);
}
bool execute_shared_page_c097(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09703) return execute_overworld_actionscript_script_29_instruction(cpu, address);
    if (address < 0xC09713) return execute_overworld_actionscript_script_2a_instruction(cpu, address);
    if (address < 0xC09731) return execute_overworld_actionscript_script_3f_49_instruction(cpu, address);
    if (address < 0xC0974F) return execute_overworld_actionscript_script_40_4a_instruction(cpu, address);
    if (address < 0xC0976D) return execute_overworld_actionscript_script_41_4b_instruction(cpu, address);
    if (address < 0xC09792) return execute_overworld_actionscript_script_2e_instruction(cpu, address);
    if (address < 0xC097B7) return execute_overworld_actionscript_script_2f_instruction(cpu, address);
    if (address < 0xC097DC) return execute_overworld_actionscript_script_30_instruction(cpu, address);
    if (address < 0xC097EF) return execute_overworld_actionscript_script_31_instruction(cpu, address);
    return execute_overworld_actionscript_script_32_instruction(cpu, address);
}
bool execute_shared_page_c098(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09802) return execute_overworld_actionscript_script_32_instruction(cpu, address);
    if (address < 0xC09826) return execute_overworld_actionscript_script_33_instruction(cpu, address);
    if (address < 0xC0984A) return execute_overworld_actionscript_script_34_instruction(cpu, address);
    if (address < 0xC09875) return execute_overworld_actionscript_script_35_instruction(cpu, address);
    if (address < 0xC098A0) return execute_overworld_actionscript_script_36_instruction(cpu, address);
    if (address < 0xC098AE) return execute_overworld_actionscript_script_2b_instruction(cpu, address);
    if (address < 0xC098BC) return execute_overworld_actionscript_script_2c_instruction(cpu, address);
    if (address < 0xC098CA) return execute_overworld_actionscript_script_2d_instruction(cpu, address);
    if (address < 0xC098DE) return execute_overworld_actionscript_script_37_instruction(cpu, address);
    if (address < 0xC098F2) return execute_overworld_actionscript_script_38_instruction(cpu, address);
    return execute_overworld_actionscript_script_39_instruction(cpu, address);
}
bool execute_shared_page_c099(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09907) return execute_overworld_actionscript_script_39_instruction(cpu, address);
    if (address < 0xC0991C) return execute_unresolved_c0_c09907_instruction(cpu, address);
    if (address < 0xC09931) return execute_overworld_actionscript_script_3a_instruction(cpu, address);
    if (address < 0xC0993D) return execute_overworld_actionscript_script_43_instruction(cpu, address);
    if (address < 0xC0995D) return execute_overworld_actionscript_script_42_4c_instruction(cpu, address);
    if (address < 0xC0996B) return execute_overworld_actionscript_script_0a_instruction(cpu, address);
    if (address < 0xC09979) return execute_overworld_actionscript_script_0b_instruction(cpu, address);
    if (address < 0xC0999E) return execute_overworld_actionscript_script_10_instruction(cpu, address);
    if (address < 0xC099C3) return execute_overworld_actionscript_script_11_instruction(cpu, address);
    if (address < 0xC099DD) return execute_overworld_actionscript_script_0c_instruction(cpu, address);
    return execute_overworld_actionscript_script_07_instruction(cpu, address);
}
bool execute_shared_page_c09a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09A0E) return execute_overworld_actionscript_script_07_instruction(cpu, address);
    if (address < 0xC09A1A) return execute_overworld_actionscript_script_13_instruction(cpu, address);
    if (address < 0xC09A2E) return execute_overworld_actionscript_script_08_instruction(cpu, address);
    if (address < 0xC09A38) return execute_overworld_actionscript_script_09_instruction(cpu, address);
    if (address < 0xC09A3E) return execute_overworld_actionscript_script_3c_46_instruction(cpu, address);
    if (address < 0xC09A44) return execute_overworld_actionscript_script_3d_47_instruction(cpu, address);
    if (address < 0xC09A5C) return execute_overworld_actionscript_script_3e_48_instruction(cpu, address);
    if (address < 0xC09A87) return execute_overworld_actionscript_script_18_instruction(cpu, address);
    if (address < 0xC09A97) return execute_overworld_actionscript_script_14_instruction(cpu, address);
    if (address < 0xC09A9F) return execute_overworld_actionscript_script_27_instruction(cpu, address);
    if (address < 0xC09AC5) return execute_overworld_actionscript_script_0d_instruction(cpu, address);
    if (address < 0xC09ACC) return execute_unresolved_c0_c09ac5_instruction(cpu, address);
    if (address < 0xC09AD3) return execute_unresolved_c0_c09acc_instruction(cpu, address);
    if (address < 0xC09ADB) return execute_unresolved_c0_c09ad3_instruction(cpu, address);
    if (address < 0xC09AE2) return execute_unresolved_c0_c09adb_instruction(cpu, address);
    return execute_overworld_actionscript_script_0e_instruction(cpu, address);
}
bool execute_shared_page_c09b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09B0F) return execute_overworld_actionscript_script_0f_instruction(cpu, address);
    if (address < 0xC09B1F) return execute_overworld_actionscript_script_12_instruction(cpu, address);
    if (address < 0xC09B2C) return execute_overworld_actionscript_script_15_instruction(cpu, address);
    if (address < 0xC09B44) return execute_overworld_actionscript_script_16_instruction(cpu, address);
    if (address < 0xC09B4D) return execute_overworld_actionscript_script_17_instruction(cpu, address);
    if (address < 0xC09B61) return execute_overworld_actionscript_script_1c_instruction(cpu, address);
    if (address < 0xC09B6B) return execute_overworld_actionscript_script_1d_instruction(cpu, address);
    if (address < 0xC09B79) return execute_overworld_actionscript_script_1e_instruction(cpu, address);
    if (address < 0xC09B91) return execute_overworld_actionscript_script_1f_instruction(cpu, address);
    if (address < 0xC09BA9) return execute_overworld_actionscript_script_20_instruction(cpu, address);
    if (address < 0xC09BB4) return execute_overworld_actionscript_script_44_instruction(cpu, address);
    if (address < 0xC09BCC) return execute_overworld_actionscript_script_21_instruction(cpu, address);
    if (address < 0xC09BE4) return execute_overworld_actionscript_script_26_instruction(cpu, address);
    if (address < 0xC09BEE) return execute_overworld_actionscript_script_22_instruction(cpu, address);
    if (address < 0xC09BF8) return execute_overworld_actionscript_script_23_instruction(cpu, address);
    return execute_overworld_actionscript_script_25_instruction(cpu, address);
}
bool execute_shared_page_c09c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09C02) return execute_overworld_actionscript_script_25_instruction(cpu, address);
    if (address < 0xC09C35) return execute_unresolved_c0_c09c02_instruction(cpu, address);
    if (address < 0xC09C3B) return execute_unresolved_c0_c09c35_instruction(cpu, address);
    if (address < 0xC09C57) return execute_unresolved_c0_c09c3b_instruction(cpu, address);
    if (address < 0xC09C73) return execute_unresolved_c0_c09c57_instruction(cpu, address);
    if (address < 0xC09C8F) return execute_unresolved_c0_c09c73_instruction(cpu, address);
    if (address < 0xC09C99) return execute_unresolved_c0_c09c8f_instruction(cpu, address);
    if (address < 0xC09CB5) return execute_unresolved_c0_c09c99_instruction(cpu, address);
    if (address < 0xC09CD7) return execute_unresolved_c0_c09cb5_instruction(cpu, address);
    return execute_unresolved_c0_c09cd7_instruction(cpu, address);
}
bool execute_shared_page_c09d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09D03) return execute_unresolved_c0_c09cd7_instruction(cpu, address);
    if (address < 0xC09D12) return execute_unresolved_c0_c09d03_instruction(cpu, address);
    if (address < 0xC09D1F) return execute_unresolved_c0_c09d12_instruction(cpu, address);
    if (address < 0xC09D3E) return execute_unresolved_c0_c09d1f_instruction(cpu, address);
    if (address < 0xC09D60) return execute_unresolved_c0_c09d3e_instruction(cpu, address);
    if (address < 0xC09D78) return execute_unresolved_c0_c09d60_instruction(cpu, address);
    if (address < 0xC09D86) return execute_unresolved_c0_c09d78_instruction(cpu, address);
    if (address < 0xC09D8D) return execute_overworld_actionscript_script_read8_instruction(cpu, address);
    if (address < 0xC09D94) return execute_overworld_actionscript_script_read8_copy_instruction(cpu, address);
    if (address < 0xC09D99) return execute_overworld_actionscript_script_read16_instruction(cpu, address);
    if (address < 0xC09D9E) return execute_overworld_actionscript_script_read16_copy_instruction(cpu, address);
    if (address < 0xC09DA1) return execute_overworld_actionscript_jump_to_loaded_movement_pointer_instruction(cpu, address);
    if (address < 0xC09DAE) return execute_overworld_actionscript_clear_sprite_tick_callback_instruction(cpu, address);
    return execute_unresolved_c0_c09dae_instruction(cpu, address);
}
bool execute_shared_page_c09e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09E71) return execute_unresolved_c0_c09dae_instruction(cpu, address);
    if (address < 0xC09E79) return execute_unresolved_c0_c09e71_instruction(cpu, address);
    if (address < 0xC09E98) return execute_unresolved_c0_c09e79_instruction(cpu, address);
    if (address < 0xC09EAC) return execute_unresolved_c0_c09e98_instruction(cpu, address);
    if (address < 0xC09ECE) return execute_unresolved_c0_c09eac_instruction(cpu, address);
    if (address < 0xC09EFF) return execute_unresolved_c0_c09ece_instruction(cpu, address);
    return execute_unresolved_c0_c09eff_instruction(cpu, address);
}
bool execute_shared_page_c09f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09F3B) return execute_unresolved_c0_c09eff_instruction(cpu, address);
    if (address < 0xC09F71) return execute_unresolved_c0_c09f3b_instruction(cpu, address);
    if (address < 0xC09F82) return execute_unresolved_c0_c09f71_instruction(cpu, address);
    if (address < 0xC09FA8) return execute_overworld_actionscript_choose_random_instruction(cpu, address);
    if (address < 0xC09FAE) return execute_unresolved_c0_c09fa8_instruction(cpu, address);
    if (address < 0xC09FBB) return execute_overworld_actionscript_fade_in_instruction(cpu, address);
    if (address < 0xC09FC8) return execute_overworld_actionscript_fade_out_instruction(cpu, address);
    if (address < 0xC09FF1) return execute_unresolved_c0_c09fae_instruction(cpu, address);
    return execute_unresolved_c0_c09ff1_instruction(cpu, address);
}
bool execute_shared_page_c0a0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A00C) return execute_unresolved_c0_c09ff1_instruction(cpu, address);
    if (address < 0xC0A023) return execute_unresolved_c0_c0a00c_instruction(cpu, address);
    if (address < 0xC0A03A) return execute_unresolved_c0_c0a023_instruction(cpu, address);
    if (address < 0xC0A055) return execute_unresolved_c0_c0a03a_instruction(cpu, address);
    if (address < 0xC0A06C) return execute_unresolved_c0_c0a055_instruction(cpu, address);
    if (address < 0xC0A089) return execute_unresolved_c0_c0a06c_instruction(cpu, address);
    if (address < 0xC0A0A0) return execute_unresolved_c0_c0a089_instruction(cpu, address);
    if (address < 0xC0A0BB) return execute_unresolved_c0_c0a0a0_instruction(cpu, address);
    if (address < 0xC0A0CA) return execute_unresolved_c0_c0a0bb_instruction(cpu, address);
    if (address < 0xC0A0E3) return execute_unresolved_c0_c0a0ca_instruction(cpu, address);
    if (address < 0xC0A0FA) return execute_unresolved_c0_c0a0e3_instruction(cpu, address);
    return execute_unresolved_c0_c0a0fa_instruction(cpu, address);
}
bool execute_shared_page_c0a1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A11C) return execute_unresolved_c0_c0a0fa_instruction(cpu, address);
    if (address < 0xC0A152) return execute_system_check_hardware_instruction(cpu, address);
    if (address < 0xC0A156) return execute_unresolved_c0_c0a156_redirect_instruction(cpu, address);
    if (address < 0xC0A1CE) return execute_unresolved_c0_c0a156_instruction(cpu, address);
    if (address < 0xC0A1F2) return execute_unresolved_c0_c0a1ce_instruction(cpu, address);
    return execute_unresolved_c0_c0a1f2_instruction(cpu, address);
}
bool execute_shared_page_c0a2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A21C) return execute_unresolved_c0_c0a1f2_instruction(cpu, address);
    if (address < 0xC0A230) return execute_unresolved_c0_c0a21c_instruction(cpu, address);
    if (address < 0xC0A254) return execute_unresolved_c0_c0a230_instruction(cpu, address);
    if (address < 0xC0A26B) return execute_unresolved_c0_c0a254_instruction(cpu, address);
    if (address < 0xC0A2B7) return execute_unresolved_c0_c0a26b_instruction(cpu, address);
    if (address < 0xC0A2E1) return execute_unresolved_c0_c0a2b7_instruction(cpu, address);
    return execute_unresolved_c0_c0a2e1_instruction(cpu, address);
}
bool execute_shared_page_c0a3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A317) return execute_unresolved_c0_c0a2e1_instruction(cpu, address);
    if (address < 0xC0A360) return execute_unresolved_c0_c0a317_instruction(cpu, address);
    if (address < 0xC0A384) return execute_unresolved_c0_c0a360_instruction(cpu, address);
    if (address < 0xC0A3A4) return execute_unresolved_c0_c0a384_instruction(cpu, address);
    return execute_unresolved_c0_c0a3a4_instruction(cpu, address);
}
bool execute_shared_page_c0a4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A443) return execute_unresolved_c0_c0a3a4_instruction(cpu, address);
    return execute_unresolved_c0_c0a443_instruction(cpu, address);
}
bool execute_shared_page_c0a5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A56E) return execute_unresolved_c0_c0a443_instruction(cpu, address);
    return execute_unresolved_c0_c0a56e_instruction(cpu, address);
}
bool execute_shared_page_c0a6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A633) return execute_unresolved_c0_c0a56e_instruction(cpu, address);
    if (address < 0xC0A63B) return execute_system_math_rand_0_3_instruction(cpu, address);
    if (address < 0xC0A643) return execute_system_math_rand_0_7_instruction(cpu, address);
    if (address < 0xC0A651) return execute_unresolved_c0_c0a643_instruction(cpu, address);
    if (address < 0xC0A65F) return execute_overworld_actionscript_set_direction8_instruction(cpu, address);
    if (address < 0xC0A66D) return execute_overworld_actionscript_set_direction_instruction(cpu, address);
    if (address < 0xC0A673) return execute_unresolved_c0_c0a66d_instruction(cpu, address);
    if (address < 0xC0A679) return execute_unresolved_c0_c0a673_instruction(cpu, address);
    if (address < 0xC0A685) return execute_overworld_actionscript_set_surface_flags_instruction(cpu, address);
    if (address < 0xC0A691) return execute_unresolved_c0_c0a685_instruction(cpu, address);
    if (address < 0xC0A697) return execute_unresolved_c0_c0a691_instruction(cpu, address);
    if (address < 0xC0A6A2) return execute_unresolved_c0_c0a697_instruction(cpu, address);
    if (address < 0xC0A6AD) return execute_unresolved_c0_c0a6a2_instruction(cpu, address);
    if (address < 0xC0A6B8) return execute_unresolved_c0_c0a6ad_instruction(cpu, address);
    if (address < 0xC0A6C5) return execute_unresolved_c0_c0a6b8_instruction(cpu, address);
    if (address < 0xC0A6CB) return execute_unresolved_c0_c0a6c5_instruction(cpu, address);
    if (address < 0xC0A6D1) return execute_unresolved_c0_c0a6cb_instruction(cpu, address);
    if (address < 0xC0A6DA) return execute_overworld_actionscript_disable_current_entity_collision_instruction(cpu, address);
    if (address < 0xC0A6E3) return execute_overworld_actionscript_clear_current_entity_collision_instruction(cpu, address);
    return execute_unresolved_c0_c0a6e3_instruction(cpu, address);
}
bool execute_shared_page_c0a7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A780) return execute_unresolved_c0_c0a6e3_instruction(cpu, address);
    if (address < 0xC0A794) return execute_unresolved_c0_c0a780_instruction(cpu, address);
    return execute_unresolved_c0_c0a794_instruction(cpu, address);
}
bool execute_shared_page_c0a8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A82F) return execute_unresolved_c0_c0a794_instruction(cpu, address);
    if (address < 0xC0A838) return execute_overworld_actionscript_disable_current_entity_collision2_instruction(cpu, address);
    if (address < 0xC0A841) return execute_overworld_actionscript_clear_current_entity_collision2_instruction(cpu, address);
    if (address < 0xC0A84C) return execute_unresolved_c0_c0a841_instruction(cpu, address);
    if (address < 0xC0A857) return execute_unresolved_c0_c0a84c_instruction(cpu, address);
    if (address < 0xC0A864) return execute_unresolved_c0_c0a857_instruction(cpu, address);
    if (address < 0xC0A86F) return execute_unresolved_c0_c0a864_instruction(cpu, address);
    if (address < 0xC0A87A) return execute_unresolved_c0_c0a86f_instruction(cpu, address);
    if (address < 0xC0A88D) return execute_unresolved_c0_c0a87a_instruction(cpu, address);
    if (address < 0xC0A8A0) return execute_unresolved_c0_c0a88d_instruction(cpu, address);
    if (address < 0xC0A8B3) return execute_unresolved_c0_c0a8a0_instruction(cpu, address);
    if (address < 0xC0A8C6) return execute_unresolved_c0_c0a8b3_instruction(cpu, address);
    if (address < 0xC0A8D1) return execute_unresolved_c0_c0a8c6_instruction(cpu, address);
    if (address < 0xC0A8DC) return execute_unresolved_c0_c0a8d1_instruction(cpu, address);
    if (address < 0xC0A8E7) return execute_unresolved_c0_c0a8dc_instruction(cpu, address);
    if (address < 0xC0A8EF) return execute_unresolved_c0_c0a8e7_instruction(cpu, address);
    if (address < 0xC0A8F7) return execute_unresolved_c0_c0a8ef_instruction(cpu, address);
    if (address < 0xC0A8FF) return execute_overworld_actionscript_prepare_new_entity_at_self_instruction(cpu, address);
    return execute_overworld_actionscript_prepare_new_entity_at_party_leader_instruction(cpu, address);
}
bool execute_shared_page_c0a9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A907) return execute_overworld_actionscript_prepare_new_entity_at_party_leader_instruction(cpu, address);
    if (address < 0xC0A912) return execute_overworld_actionscript_prepare_new_entity_at_teleport_destination_instruction(cpu, address);
    if (address < 0xC0A92D) return execute_overworld_actionscript_prepare_new_entity_instruction(cpu, address);
    if (address < 0xC0A938) return execute_unresolved_c0_c0a92d_instruction(cpu, address);
    if (address < 0xC0A943) return execute_unresolved_c0_c0a938_instruction(cpu, address);
    if (address < 0xC0A94E) return execute_overworld_actionscript_get_position_of_party_member_instruction(cpu, address);
    if (address < 0xC0A959) return execute_unresolved_c0_c0a94e_instruction(cpu, address);
    if (address < 0xC0A964) return execute_unresolved_c0_c0a959_instruction(cpu, address);
    if (address < 0xC0A977) return execute_unresolved_c0_c0a964_instruction(cpu, address);
    if (address < 0xC0A98B) return execute_battle_load_battlebg_movement_instruction(cpu, address);
    if (address < 0xC0A99F) return execute_unresolved_c0_c0a98b_instruction(cpu, address);
    if (address < 0xC0A9B3) return execute_unresolved_c0_c0a99f_instruction(cpu, address);
    if (address < 0xC0A9CF) return execute_unresolved_c0_c0a9b3_instruction(cpu, address);
    if (address < 0xC0A9EB) return execute_unresolved_c0_c0a9cf_instruction(cpu, address);
    return execute_unresolved_c0_c0a9eb_instruction(cpu, address);
}
bool execute_shared_page_c0aa(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0AA07) return execute_unresolved_c0_c0a9eb_instruction(cpu, address);
    if (address < 0xC0AA23) return execute_overworld_actionscript_fade_out_with_mosaic_instruction(cpu, address);
    if (address < 0xC0AA3F) return execute_unresolved_c0_c0aa23_instruction(cpu, address);
    if (address < 0xC0AA6E) return execute_unresolved_c0_c0aa3f_instruction(cpu, address);
    if (address < 0xC0AAAC) return execute_unresolved_c0_c0aa6e_instruction(cpu, address);
    if (address < 0xC0AAB5) return execute_unresolved_c0_c0aaac_instruction(cpu, address);
    if (address < 0xC0AACD) return execute_unresolved_c0_c0aab5_instruction(cpu, address);
    if (address < 0xC0AAD1) return execute_unresolved_c0_c0aacd_instruction(cpu, address);
    if (address < 0xC0AAD5) return execute_unresolved_c0_c0aad1_instruction(cpu, address);
    if (address < 0xC0AAFD) return execute_unresolved_c0_c0aad5_instruction(cpu, address);
    return execute_unresolved_c0_c0aafd_instruction(cpu, address);
}
bool execute_shared_page_c0ab(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0AB06) return execute_unresolved_c0_c0aafd_instruction(cpu, address);
    if (address < 0xC0ABA8) return execute_audio_load_spc700_data_instruction(cpu, address);
    if (address < 0xC0ABBD) return execute_audio_wait_for_spc700_instruction(cpu, address);
    if (address < 0xC0ABC6) return execute_unresolved_c0_c0abbd_instruction(cpu, address);
    if (address < 0xC0ABE0) return execute_audio_stop_music_instruction(cpu, address);
    return execute_audio_play_sound_instruction(cpu, address);
}
bool execute_shared_page_c0ac(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0AC0C) return execute_audio_play_sound_instruction(cpu, address);
    if (address < 0xC0AC20) return execute_unresolved_c0_c0ac0c_instruction(cpu, address);
    if (address < 0xC0AC3A) return execute_unresolved_c0_c0ac20_instruction(cpu, address);
    if (address < 0xC0AC43) return execute_unresolved_c0_c0ac3a_instruction(cpu, address);
    return execute_unresolved_c0_c0ac43_instruction(cpu, address);
}
bool execute_shared_page_c0ad(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0AD56) return execute_unresolved_c0_c0ac43_instruction(cpu, address);
    if (address < 0xC0AD9F) return execute_unresolved_c0_c0ad56_instruction(cpu, address);
    if (address < 0xC0ADB2) return execute_unresolved_c0_c0ad9f_instruction(cpu, address);
    return execute_miscellaneous_battle_backgrounds_do_battlebg_dma_instruction(cpu, address);
}
bool execute_shared_page_c0ae(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0AE34) return execute_miscellaneous_battle_backgrounds_do_battlebg_dma_instruction(cpu, address);
    if (address < 0xC0AE4C) return execute_unresolved_c0_c0ae34_instruction(cpu, address);
    if (address < 0xC0AE56) return execute_miscellaneous_battle_backgrounds_load_bg_offset_parameters_instruction(cpu, address);
    if (address < 0xC0AE5A) return execute_miscellaneous_battle_backgrounds_load_bg_offset_parameters2_instruction(cpu, address);
    return execute_miscellaneous_battle_backgrounds_prepare_bg_offset_tables_instruction(cpu, address);
}
bool execute_shared_page_c0af(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0AFCD) return execute_miscellaneous_battle_backgrounds_prepare_bg_offset_tables_instruction(cpu, address);
    return execute_unresolved_c0_c0afcd_instruction(cpu, address);
}
bool execute_shared_page_c0b0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0B039) return execute_system_set_coldata_instruction(cpu, address);
    if (address < 0xC0B047) return execute_system_set_colour_addsub_mode_instruction(cpu, address);
    if (address < 0xC0B0AA) return execute_system_set_window_mask_instruction(cpu, address);
    if (address < 0xC0B0B8) return execute_unresolved_c0_c0b0aa_instruction(cpu, address);
    if (address < 0xC0B0EF) return execute_unresolved_c0_c0b0b8_instruction(cpu, address);
    return execute_unresolved_c0_c0b0ef_instruction(cpu, address);
}
bool execute_shared_page_c0b1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0B149) return execute_unresolved_c0_c0b0ef_instruction(cpu, address);
    return execute_unresolved_c0_c0b149_instruction(cpu, address);
}
bool execute_shared_page_c0b6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0B65F) return execute_system_file_select_init_instruction(cpu, address);
    if (address < 0xC0B67F) return execute_unresolved_c0_c0b65f_instruction(cpu, address);
    return execute_unresolved_c0_c0b67f_instruction(cpu, address);
}
bool execute_shared_page_c0b7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0B731) return execute_unresolved_c0_c0b67f_instruction(cpu, address);
    if (address < 0xC0B7D8) return execute_battle_init_overworld_instruction(cpu, address);
    return execute_system_main_instruction(cpu, address);
}
bool execute_shared_page_c0b9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0B99A) return execute_system_main_instruction(cpu, address);
    if (address < 0xC0B9BC) return execute_system_game_init_instruction(cpu, address);
    return execute_unresolved_c0_c0b9bc_instruction(cpu, address);
}
bool execute_shared_page_c0ba(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0BA35) return execute_unresolved_c0_c0b9bc_instruction(cpu, address);
    return execute_unresolved_c0_c0ba35_instruction(cpu, address);
}
bool execute_shared_page_c0bc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0BC74) return execute_unresolved_c0_c0ba35_instruction(cpu, address);
    return execute_miscellaneous_find_path_to_party_instruction(cpu, address);
}
bool execute_shared_page_c0bd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0BD96) return execute_miscellaneous_find_path_to_party_instruction(cpu, address);
    return execute_unresolved_c0_c0bd96_instruction(cpu, address);
}
bool execute_shared_page_c0bf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0BF72) return execute_unresolved_c0_c0bd96_instruction(cpu, address);
    return execute_unresolved_c0_c0bf72_instruction(cpu, address);
}
bool execute_shared_page_c0c0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C0B4) return execute_unresolved_c0_c0bf72_instruction(cpu, address);
    return execute_unresolved_c0_c0c0b4_instruction(cpu, address);
}
bool execute_shared_page_c0c1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C19B) return execute_unresolved_c0_c0c0b4_instruction(cpu, address);
    return execute_unresolved_c0_c0c19b_instruction(cpu, address);
}
bool execute_shared_page_c0c2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C251) return execute_unresolved_c0_c0c19b_instruction(cpu, address);
    return execute_unresolved_c0_c0c251_instruction(cpu, address);
}
bool execute_shared_page_c0c3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C30C) return execute_unresolved_c0_c0c251_instruction(cpu, address);
    if (address < 0xC0C353) return execute_unresolved_c0_c0c30c_instruction(cpu, address);
    if (address < 0xC0C35D) return execute_unresolved_c0_c0c353_instruction(cpu, address);
    if (address < 0xC0C363) return execute_unresolved_c0_c0c35d_instruction(cpu, address);
    if (address < 0xC0C3F9) return execute_unresolved_c0_c0c363_instruction(cpu, address);
    return execute_unresolved_c0_c0c3f9_instruction(cpu, address);
}
bool execute_shared_page_c0c4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C48F) return execute_unresolved_c0_c0c3f9_instruction(cpu, address);
    if (address < 0xC0C4AF) return execute_unresolved_c0_c0c48f_instruction(cpu, address);
    if (address < 0xC0C4F7) return execute_unresolved_c0_c0c4af_instruction(cpu, address);
    return execute_overworld_get_direction_from_player_to_entity_instruction(cpu, address);
}
bool execute_shared_page_c0c5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C524) return execute_overworld_get_direction_from_player_to_entity_instruction(cpu, address);
    return execute_unresolved_c0_c0c524_instruction(cpu, address);
}
bool execute_shared_page_c0c6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C608) return execute_unresolved_c0_c0c524_instruction(cpu, address);
    if (address < 0xC0C615) return execute_overworld_get_opposite_direction_from_player_to_entity_instruction(cpu, address);
    if (address < 0xC0C62B) return execute_unresolved_c0_c0c615_instruction(cpu, address);
    if (address < 0xC0C682) return execute_unresolved_c0_c0c62b_instruction(cpu, address);
    if (address < 0xC0C69E) return execute_overworld_actionscript_get_direction_rotated_clockwise_instruction(cpu, address);
    if (address < 0xC0C6B6) return execute_overworld_actionscript_get_direction_turned_randomly_left_or_right_instruction(cpu, address);
    return execute_unresolved_c0_c0c6b6_instruction(cpu, address);
}
bool execute_shared_page_c0c7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C711) return execute_unresolved_c0_c0c6b6_instruction(cpu, address);
    if (address < 0xC0C760) return execute_unresolved_c0_c0c711_instruction(cpu, address);
    if (address < 0xC0C7AC) return execute_unresolved_c0_c0c760_instruction(cpu, address);
    if (address < 0xC0C7DB) return execute_unresolved_c0_c0c7ac_instruction(cpu, address);
    return execute_unresolved_c0_c0c7db_instruction(cpu, address);
}
bool execute_shared_page_c0c8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C808) return execute_unresolved_c0_c0c7db_instruction(cpu, address);
    if (address < 0xC0C83B) return execute_unresolved_c0_c0c808_instruction(cpu, address);
    return execute_unresolved_c0_c0c83b_instruction(cpu, address);
}
bool execute_shared_page_c0ca(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0CA4E) return execute_unresolved_c0_c0c83b_instruction(cpu, address);
    return execute_unresolved_c0_c0ca4e_instruction(cpu, address);
}
bool execute_shared_page_c0cb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0CBD3) return execute_unresolved_c0_c0ca4e_instruction(cpu, address);
    return execute_unresolved_c0_c0cbd3_instruction(cpu, address);
}
bool execute_shared_page_c0cc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0CC11) return execute_unresolved_c0_c0cbd3_instruction(cpu, address);
    if (address < 0xC0CCCC) return execute_unresolved_c0_c0cc11_instruction(cpu, address);
    return execute_unresolved_c0_c0cccc_instruction(cpu, address);
}
bool execute_shared_page_c0cd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0CD50) return execute_unresolved_c0_c0cccc_instruction(cpu, address);
    return execute_unresolved_c0_c0cd50_instruction(cpu, address);
}
bool execute_shared_page_c0ce(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0CEBE) return execute_unresolved_c0_c0cd50_instruction(cpu, address);
    return execute_unresolved_c0_c0cebe_instruction(cpu, address);
}
bool execute_shared_page_c0cf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0CF97) return execute_unresolved_c0_c0cebe_instruction(cpu, address);
    return execute_unresolved_c0_c0cf97_instruction(cpu, address);
}
bool execute_shared_page_c0d0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0D0D9) return execute_unresolved_c0_c0cf97_instruction(cpu, address);
    if (address < 0xC0D0E6) return execute_unresolved_c0_c0d0d9_instruction(cpu, address);
    return execute_unresolved_c0_c0d0e6_instruction(cpu, address);
}
bool execute_shared_page_c0d1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0D15C) return execute_unresolved_c0_c0d0e6_instruction(cpu, address);
    if (address < 0xC0D195) return execute_unresolved_c0_c0d15c_instruction(cpu, address);
    if (address < 0xC0D19B) return execute_unresolved_c0_c0d195_instruction(cpu, address);
    return execute_unresolved_c0_c0d19b_instruction(cpu, address);
}
bool execute_shared_page_c0d4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0D4DE) return execute_unresolved_c0_c0d19b_instruction(cpu, address);
    return execute_unresolved_c0_c0d4de_instruction(cpu, address);
}
bool execute_shared_page_c0d5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0D59B) return execute_unresolved_c0_c0d4de_instruction(cpu, address);
    if (address < 0xC0D5B0) return execute_unresolved_c0_c0d59b_instruction(cpu, address);
    return execute_unresolved_c0_c0d5b0_instruction(cpu, address);
}
bool execute_shared_page_c0d7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0D77F) return execute_unresolved_c0_c0d5b0_instruction(cpu, address);
    if (address < 0xC0D7B3) return execute_unresolved_c0_c0d77f_instruction(cpu, address);
    if (address < 0xC0D7C7) return execute_unresolved_c0_c0d7b3_instruction(cpu, address);
    if (address < 0xC0D7E0) return execute_unresolved_c0_c0d7c7_instruction(cpu, address);
    if (address < 0xC0D7F7) return execute_unresolved_c0_c0d7e0_instruction(cpu, address);
    return execute_unresolved_c0_c0d7f7_instruction(cpu, address);
}
bool execute_shared_page_c0d9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0D98F) return execute_unresolved_c0_c0d7f7_instruction(cpu, address);
    return execute_unresolved_c0_c0d98f_instruction(cpu, address);
}
bool execute_shared_page_c0da(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0DA31) return execute_unresolved_c0_c0d98f_instruction(cpu, address);
    return execute_unresolved_c0_c0da31_instruction(cpu, address);
}
bool execute_shared_page_c0db(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0DB0F) return execute_unresolved_c0_c0da31_instruction(cpu, address);
    if (address < 0xC0DBE6) return execute_unresolved_c0_c0db0f_instruction(cpu, address);
    return execute_overworld_schedule_overworld_task_instruction(cpu, address);
}
bool execute_shared_page_c0dc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0DC38) return execute_overworld_schedule_overworld_task_instruction(cpu, address);
    if (address < 0xC0DC4E) return execute_unresolved_c0_c0dc38_instruction(cpu, address);
    if (address < 0xC0DCC6) return execute_overworld_process_overworld_tasks_instruction(cpu, address);
    return execute_overworld_load_dad_phone_instruction(cpu, address);
}
bool execute_shared_page_c0dd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0DD0F) return execute_overworld_load_dad_phone_instruction(cpu, address);
    if (address < 0xC0DD2C) return execute_unresolved_c0_c0dd0f_instruction(cpu, address);
    if (address < 0xC0DD53) return execute_unresolved_c0_c0dd2c_instruction(cpu, address);
    if (address < 0xC0DD79) return execute_overworld_set_teleport_state_instruction(cpu, address);
    return execute_unresolved_c0_c0dd79_instruction(cpu, address);
}
bool execute_shared_page_c0de(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0DE16) return execute_unresolved_c0_c0dd79_instruction(cpu, address);
    if (address < 0xC0DE46) return execute_unresolved_c0_c0de16_instruction(cpu, address);
    if (address < 0xC0DE7C) return execute_unresolved_c0_c0de46_instruction(cpu, address);
    if (address < 0xC0DED9) return execute_unresolved_c0_c0de7c_instruction(cpu, address);
    return execute_unresolved_c0_c0ded9_instruction(cpu, address);
}
bool execute_shared_page_c0df(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0DF22) return execute_unresolved_c0_c0ded9_instruction(cpu, address);
    return execute_unresolved_c0_c0df22_instruction(cpu, address);
}
bool execute_shared_page_c0e1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E196) return execute_unresolved_c0_c0df22_instruction(cpu, address);
    return execute_unresolved_c0_c0e196_instruction(cpu, address);
}
bool execute_shared_page_c0e2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E214) return execute_unresolved_c0_c0e196_instruction(cpu, address);
    if (address < 0xC0E254) return execute_unresolved_c0_c0e214_instruction(cpu, address);
    if (address < 0xC0E28F) return execute_unresolved_c0_c0e254_instruction(cpu, address);
    return execute_unresolved_c0_c0e28f_instruction(cpu, address);
}
bool execute_shared_page_c0e3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E3C1) return execute_unresolved_c0_c0e28f_instruction(cpu, address);
    return execute_unresolved_c0_c0e3c1_instruction(cpu, address);
}
bool execute_shared_page_c0e4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E44D) return execute_unresolved_c0_c0e3c1_instruction(cpu, address);
    if (address < 0xC0E48A) return execute_unresolved_c0_c0e44d_instruction(cpu, address);
    return execute_unresolved_c0_c0e48a_instruction(cpu, address);
}
bool execute_shared_page_c0e5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E516) return execute_unresolved_c0_c0e48a_instruction(cpu, address);
    return execute_unresolved_c0_c0e516_instruction(cpu, address);
}
bool execute_shared_page_c0e6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E674) return execute_unresolved_c0_c0e516_instruction(cpu, address);
    if (address < 0xC0E6FE) return execute_unresolved_c0_c0e674_instruction(cpu, address);
    return execute_unresolved_c0_c0e6fe_instruction(cpu, address);
}
bool execute_shared_page_c0e7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E776) return execute_unresolved_c0_c0e6fe_instruction(cpu, address);
    return execute_unresolved_c0_c0e776_instruction(cpu, address);
}
bool execute_shared_page_c0e8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E815) return execute_unresolved_c0_c0e776_instruction(cpu, address);
    if (address < 0xC0E897) return execute_unresolved_c0_c0e815_instruction(cpu, address);
    return execute_unresolved_c0_c0e897_instruction(cpu, address);
}
bool execute_shared_page_c0e9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E979) return execute_unresolved_c0_c0e897_instruction(cpu, address);
    if (address < 0xC0E97C) return execute_unresolved_c0_c0e979_instruction(cpu, address);
    if (address < 0xC0E9BA) return execute_unresolved_c0_c0e97c_instruction(cpu, address);
    return execute_unresolved_c0_c0e9ba_instruction(cpu, address);
}
bool execute_shared_page_c0ea(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0EA3E) return execute_unresolved_c0_c0e9ba_instruction(cpu, address);
    if (address < 0xC0EA68) return execute_miscellaneous_teleport_freezeobjects_instruction(cpu, address);
    if (address < 0xC0EA99) return execute_miscellaneous_teleport_freezeobjects2_instruction(cpu, address);
    return execute_miscellaneous_teleport_mainloop_instruction(cpu, address);
}
bool execute_shared_page_c0eb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0EBE0) return execute_miscellaneous_teleport_mainloop_instruction(cpu, address);
    return execute_unresolved_c0_c0ebe0_instruction(cpu, address);
}
bool execute_shared_page_c0ec(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0EC77) return execute_unresolved_c0_c0ebe0_instruction(cpu, address);
    if (address < 0xC0ECB7) return execute_unresolved_c0_c0ec77_instruction(cpu, address);
    return execute_unresolved_c0_c0ecb7_instruction(cpu, address);
}
bool execute_shared_page_c0ed(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0ED14) return execute_unresolved_c0_c0ecb7_instruction(cpu, address);
    if (address < 0xC0ED39) return execute_unresolved_c0_c0ed14_instruction(cpu, address);
    if (address < 0xC0ED5C) return execute_unresolved_c0_c0ed39_instruction(cpu, address);
    if (address < 0xC0EDD1) return execute_unresolved_c0_c0ed5c_instruction(cpu, address);
    if (address < 0xC0EDDA) return execute_unresolved_c0_c0edd1_instruction(cpu, address);
    return execute_unresolved_c0_c0edda_instruction(cpu, address);
}
bool execute_shared_page_c0ee(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0EE47) return execute_unresolved_c0_c0edda_instruction(cpu, address);
    if (address < 0xC0EE53) return execute_unresolved_c0_c0ee47_instruction(cpu, address);
    if (address < 0xC0EE68) return execute_unresolved_c0_c0ee53_instruction(cpu, address);
    return execute_introduction_logo_screen_load_instruction(cpu, address);
}
bool execute_shared_page_c0ef(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0EFE1) return execute_introduction_logo_screen_load_instruction(cpu, address);
    return execute_unresolved_c0_c0efe1_instruction(cpu, address);
}
bool execute_shared_page_c0f0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0F009) return execute_unresolved_c0_c0efe1_instruction(cpu, address);
    if (address < 0xC0F0D2) return execute_introduction_logo_screen_instruction(cpu, address);
    return execute_introduction_gas_station_load_instruction(cpu, address);
}
bool execute_shared_page_c0f1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0F1D2) return execute_introduction_gas_station_load_instruction(cpu, address);
    return execute_unresolved_c0_c0f1d2_instruction(cpu, address);
}
bool execute_shared_page_c0f2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0F21E) return execute_unresolved_c0_c0f1d2_instruction(cpu, address);
    return execute_unresolved_c0_c0f21e_instruction(cpu, address);
}
bool execute_shared_page_c0f3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0F33C) return execute_unresolved_c0_c0f21e_instruction(cpu, address);
    if (address < 0xC0F3B2) return execute_introduction_gas_station_instruction(cpu, address);
    if (address < 0xC0F3E8) return execute_introduction_load_gas_station_flash_palette_instruction(cpu, address);
    return execute_introduction_load_gas_station_palette_instruction(cpu, address);
}
bool execute_shared_page_c0f4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0F41E) return execute_introduction_load_gas_station_palette_instruction(cpu, address);
    return execute_ending_credits_scroll_frame_instruction(cpu, address);
}
bool execute_shared_page_c100(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10004) return execute_unresolved_c1_c10000_instruction(cpu, address);
    if (address < 0xC10036) return execute_unresolved_c1_c10004_instruction(cpu, address);
    if (address < 0xC1003C) return execute_text_enable_blinking_triangle_instruction(cpu, address);
    if (address < 0xC10042) return execute_text_clear_blinking_prompt_instruction(cpu, address);
    if (address < 0xC10048) return execute_text_get_blinking_prompt_instruction(cpu, address);
    if (address < 0xC1004E) return execute_text_set_text_sound_mode_instruction(cpu, address);
    if (address < 0xC10078) return execute_unresolved_c1_c1004e_instruction(cpu, address);
    if (address < 0xC1007E) return execute_text_get_window_focus_instruction(cpu, address);
    if (address < 0xC10084) return execute_text_set_window_focus_instruction(cpu, address);
    if (address < 0xC1008E) return execute_text_close_focus_window_instruction(cpu, address);
    if (address < 0xC100C7) return execute_unresolved_c1_c1008e_instruction(cpu, address);
    if (address < 0xC100D0) return execute_text_lock_input_instruction(cpu, address);
    if (address < 0xC100D6) return execute_text_unlock_input_instruction(cpu, address);
    if (address < 0xC100FE) return execute_unresolved_c1_c100d6_instruction(cpu, address);
    return execute_unresolved_c1_c100fe_instruction(cpu, address);
}
bool execute_shared_page_c101(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10166) return execute_unresolved_c1_c100fe_instruction(cpu, address);
    return execute_text_ccs_halt_instruction(cpu, address);
}
bool execute_shared_page_c102(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC102D0) return execute_text_ccs_halt_instruction(cpu, address);
    return execute_unresolved_c1_c102d0_instruction(cpu, address);
}
bool execute_shared_page_c103(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10301) return execute_unresolved_c1_c102d0_instruction(cpu, address);
    if (address < 0xC10324) return execute_text_get_active_window_address_instruction(cpu, address);
    if (address < 0xC10380) return execute_text_transfer_active_mem_storage_instruction(cpu, address);
    if (address < 0xC103DC) return execute_text_transfer_storage_mem_active_instruction(cpu, address);
    return execute_text_get_argument_memory_instruction(cpu, address);
}
bool execute_shared_page_c104(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1040A) return execute_text_get_secondary_memory_instruction(cpu, address);
    if (address < 0xC1042E) return execute_text_get_working_memory_instruction(cpu, address);
    if (address < 0xC10443) return execute_text_increment_secondary_memory_instruction(cpu, address);
    if (address < 0xC1045D) return execute_text_set_secondary_memory_instruction(cpu, address);
    if (address < 0xC10489) return execute_text_set_working_memory_instruction(cpu, address);
    if (address < 0xC104B5) return execute_text_set_argument_memory_instruction(cpu, address);
    if (address < 0xC104D8) return execute_text_get_text_x_instruction(cpu, address);
    if (address < 0xC104EE) return execute_text_get_text_y_instruction(cpu, address);
    return execute_text_create_window_instruction(cpu, address);
}
bool execute_shared_page_c107(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1078D) return execute_text_create_window_instruction(cpu, address);
    if (address < 0xC107AF) return execute_unresolved_c1_c1078d_instruction(cpu, address);
    return execute_unresolved_c1_c107af_instruction(cpu, address);
}
bool execute_shared_page_c10a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10A04) return execute_unresolved_c1_c107af_instruction(cpu, address);
    if (address < 0xC10A1D) return execute_text_show_hppp_windows_instruction(cpu, address);
    if (address < 0xC10A85) return execute_text_hide_hppp_windows_instruction(cpu, address);
    return execute_unresolved_c1_c10a85_instruction(cpu, address);
}
bool execute_shared_page_c10b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10BA1) return execute_unresolved_c1_c10a85_instruction(cpu, address);
    if (address < 0xC10BD3) return execute_unresolved_c1_c10ba1_instruction(cpu, address);
    if (address < 0xC10BF8) return execute_text_ccs_clear_line_instruction(cpu, address);
    if (address < 0xC10BFE) return execute_unresolved_c1_c1008e_redirect_instruction(cpu, address);
    return execute_unresolved_c1_c10bfe_instruction(cpu, address);
}
bool execute_shared_page_c10c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10C49) return execute_unresolved_c1_c10bfe_instruction(cpu, address);
    if (address < 0xC10C4F) return execute_unresolved_c1_c1138d_redirect_instruction(cpu, address);
    if (address < 0xC10C55) return execute_unresolved_c1_c117e2_redirect_instruction(cpu, address);
    if (address < 0xC10C72) return execute_unresolved_c1_c10c55_instruction(cpu, address);
    if (address < 0xC10C79) return execute_unresolved_c4_c438a5_redirect_instruction(cpu, address);
    if (address < 0xC10C80) return execute_text_print_newline_redirect_instruction(cpu, address);
    if (address < 0xC10C86) return execute_unresolved_c1_c10ba1_redirect_instruction(cpu, address);
    if (address < 0xC10C8C) return execute_text_print_letter_redirect_instruction(cpu, address);
    if (address < 0xC10CAF) return execute_text_print_string_redirect_instruction(cpu, address);
    if (address < 0xC10CB6) return execute_unresolved_c4_c437b8_redirect_instruction(cpu, address);
    return execute_text_print_letter_instruction(cpu, address);
}
bool execute_shared_page_c10d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10D60) return execute_text_print_letter_instruction(cpu, address);
    if (address < 0xC10D7C) return execute_unresolved_c1_c10d60_instruction(cpu, address);
    if (address < 0xC10DF6) return execute_unresolved_c1_c10d7c_instruction(cpu, address);
    return execute_text_print_number_instruction(cpu, address);
}
bool execute_shared_page_c10e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10EB4) return execute_text_print_number_instruction(cpu, address);
    if (address < 0xC10EE3) return execute_unresolved_c1_c10eb4_instruction(cpu, address);
    if (address < 0xC10EFC) return execute_unresolved_c1_c10ee3_instruction(cpu, address);
    return execute_text_print_string_instruction(cpu, address);
}
bool execute_shared_page_c10f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10F40) return execute_text_print_string_instruction(cpu, address);
    if (address < 0xC10FA3) return execute_unresolved_c1_c10f40_instruction(cpu, address);
    if (address < 0xC10FAC) return execute_unresolved_c1_c10fa3_instruction(cpu, address);
    if (address < 0xC10FEA) return execute_text_change_current_window_font_instruction(cpu, address);
    return execute_unresolved_c1_c10fea_instruction(cpu, address);
}
bool execute_shared_page_c110(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1101C) return execute_unresolved_c1_c10fea_instruction(cpu, address);
    return execute_text_num_select_prompt_instruction(cpu, address);
}
bool execute_shared_page_c113(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1134B) return execute_text_num_select_prompt_instruction(cpu, address);
    if (address < 0xC11354) return execute_unresolved_c1_c1134b_instruction(cpu, address);
    if (address < 0xC11383) return execute_unresolved_c1_c11354_instruction(cpu, address);
    if (address < 0xC1138D) return execute_unresolved_c1_c11383_instruction(cpu, address);
    if (address < 0xC113D1) return execute_unresolved_c1_c1138d_instruction(cpu, address);
    return execute_unresolved_c1_c113d1_instruction(cpu, address);
}
bool execute_shared_page_c114(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC114B1) return execute_unresolved_c1_c113d1_instruction(cpu, address);
    return execute_unresolved_c1_c114b1_instruction(cpu, address);
}
bool execute_shared_page_c115(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1153B) return execute_unresolved_c1_c114b1_instruction(cpu, address);
    if (address < 0xC11596) return execute_unresolved_c1_c1153b_instruction(cpu, address);
    if (address < 0xC115F4) return execute_unresolved_c1_c11596_instruction(cpu, address);
    return execute_unresolved_c1_c115f4_instruction(cpu, address);
}
bool execute_shared_page_c116(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1163C) return execute_unresolved_c1_c115f4_instruction(cpu, address);
    return execute_text_print_menu_items_instruction(cpu, address);
}
bool execute_shared_page_c117(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC117E2) return execute_text_print_menu_items_instruction(cpu, address);
    return execute_unresolved_c1_c117e2_instruction(cpu, address);
}
bool execute_shared_page_c118(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1180D) return execute_unresolved_c1_c117e2_instruction(cpu, address);
    if (address < 0xC1181B) return execute_unresolved_c1_c1180d_instruction(cpu, address);
    if (address < 0xC11887) return execute_unresolved_c1_c1181b_instruction(cpu, address);
    if (address < 0xC118E7) return execute_unresolved_c1_c11887_instruction(cpu, address);
    return execute_text_move_cursor_instruction(cpu, address);
}
bool execute_shared_page_c119(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1196A) return execute_text_move_cursor_instruction(cpu, address);
    return execute_text_selection_menu_instruction(cpu, address);
}
bool execute_shared_page_c11f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC11F5A) return execute_text_selection_menu_instruction(cpu, address);
    if (address < 0xC11F8A) return execute_unresolved_c1_c11f5a_instruction(cpu, address);
    if (address < 0xC11FBC) return execute_unresolved_c1_c11f8a_instruction(cpu, address);
    if (address < 0xC11FD4) return execute_unresolved_c1_c11fbc_instruction(cpu, address);
    return execute_unresolved_c1_c11fd4_instruction(cpu, address);
}
bool execute_shared_page_c120(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC12012) return execute_unresolved_c1_c11fd4_instruction(cpu, address);
    if (address < 0xC12070) return execute_unresolved_c1_c12012_instruction(cpu, address);
    if (address < 0xC120D6) return execute_unresolved_c1_c12070_instruction(cpu, address);
    return execute_unresolved_c1_c120d6_instruction(cpu, address);
}
bool execute_shared_page_c121(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC121B8) return execute_unresolved_c1_c120d6_instruction(cpu, address);
    return execute_unresolved_c1_c121b8_instruction(cpu, address);
}
bool execute_shared_page_c123(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC12362) return execute_unresolved_c1_c121b8_instruction(cpu, address);
    return execute_unresolved_c1_c12362_instruction(cpu, address);
}
bool execute_shared_page_c124(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1242E) return execute_unresolved_c1_c12362_instruction(cpu, address);
    if (address < 0xC1244C) return execute_unresolved_c1_c1242e_instruction(cpu, address);
    return execute_unresolved_c1_c1244c_instruction(cpu, address);
}
bool execute_shared_page_c127(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC127EF) return execute_unresolved_c1_c1244c_instruction(cpu, address);
    return execute_text_character_select_prompt_instruction(cpu, address);
}
bool execute_shared_page_c12b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC12BD5) return execute_text_character_select_prompt_instruction(cpu, address);
    if (address < 0xC12BF3) return execute_unresolved_c1_c12bd5_instruction(cpu, address);
    return execute_unresolved_c1_c12bf3_instruction(cpu, address);
}
bool execute_shared_page_c12c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC12C36) return execute_unresolved_c1_c12bf3_instruction(cpu, address);
    if (address < 0xC12CCC) return execute_unresolved_c1_c12c36_instruction(cpu, address);
    return execute_unresolved_c1_c12ccc_instruction(cpu, address);
}
bool execute_shared_page_c12d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC12D17) return execute_unresolved_c1_c12ccc_instruction(cpu, address);
    if (address < 0xC12DD5) return execute_unresolved_c1_c12d17_instruction(cpu, address);
    return execute_text_window_tick_instruction(cpu, address);
}
bool execute_shared_page_c12e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC12E42) return execute_text_window_tick_instruction(cpu, address);
    if (address < 0xC12E63) return execute_unresolved_c1_c12e42_instruction(cpu, address);
    return execute_system_debug_y_button_menu_instruction(cpu, address);
}
bool execute_shared_page_c131(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC13187) return execute_system_debug_y_button_menu_instruction(cpu, address);
    return execute_overworld_talk_to_instruction(cpu, address);
}
bool execute_shared_page_c132(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1323B) return execute_overworld_talk_to_instruction(cpu, address);
    return execute_overworld_check_instruction(cpu, address);
}
bool execute_shared_page_c133(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1339E) return execute_overworld_check_instruction(cpu, address);
    if (address < 0xC133A7) return execute_unresolved_c1_c1339e_instruction(cpu, address);
    if (address < 0xC133B0) return execute_unresolved_c1_c133a7_instruction(cpu, address);
    return execute_unresolved_c1_c133b0_instruction(cpu, address);
}
bool execute_shared_page_c134(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC134A7) return execute_unresolved_c1_c133b0_instruction(cpu, address);
    return execute_overworld_open_menu_instruction(cpu, address);
}
bool execute_shared_page_c13c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC13CA1) return execute_overworld_open_menu_instruction(cpu, address);
    if (address < 0xC13CE5) return execute_text_open_hppp_display_instruction(cpu, address);
    return execute_overworld_show_town_map_instruction(cpu, address);
}
bool execute_shared_page_c13d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC13D03) return execute_overworld_show_town_map_instruction(cpu, address);
    return execute_overworld_debug_y_button_flag_instruction(cpu, address);
}
bool execute_shared_page_c13e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC13E0E) return execute_overworld_debug_y_button_flag_instruction(cpu, address);
    if (address < 0xC13E7A) return execute_overworld_debug_y_button_guide_instruction(cpu, address);
    if (address < 0xC13EE7) return execute_overworld_debug_set_char_level_instruction(cpu, address);
    return execute_overworld_debug_y_button_goods_instruction(cpu, address);
}
bool execute_shared_page_c140(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14012) return execute_overworld_debug_y_button_goods_instruction(cpu, address);
    if (address < 0xC14049) return execute_unresolved_c1_c14012_instruction(cpu, address);
    if (address < 0xC14070) return execute_unresolved_c1_c14049_instruction(cpu, address);
    if (address < 0xC140B0) return execute_unresolved_c1_c14070_instruction(cpu, address);
    if (address < 0xC140CF) return execute_text_ccs_print_stat_instruction(cpu, address);
    if (address < 0xC140EF) return execute_text_ccs_print_party_or_hint_new_line_instruction(cpu, address);
    if (address < 0xC140F9) return execute_text_ccs_unknown_1c_09_instruction(cpu, address);
    return execute_text_ccs_text_effects_instruction(cpu, address);
}
bool execute_shared_page_c141(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14103) return execute_text_ccs_text_effects_instruction(cpu, address);
    if (address < 0xC141D0) return execute_text_ccs_jump_instruction(cpu, address);
    return execute_text_ccs_jump_multi_instruction(cpu, address);
}
bool execute_shared_page_c142(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14265) return execute_text_ccs_jump_multi_instruction(cpu, address);
    if (address < 0xC142AD) return execute_text_ccs_set_event_flag_instruction(cpu, address);
    if (address < 0xC142F5) return execute_text_ccs_clear_event_flag_instruction(cpu, address);
    return execute_text_ccs_jump_event_flag_instruction(cpu, address);
}
bool execute_shared_page_c143(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1435F) return execute_text_ccs_jump_event_flag_instruction(cpu, address);
    if (address < 0xC143B8) return execute_text_ccs_get_event_flag_instruction(cpu, address);
    if (address < 0xC143C2) return execute_text_ccs_print_special_graphics_instruction(cpu, address);
    if (address < 0xC143CC) return execute_text_ccs_open_window_instruction(cpu, address);
    if (address < 0xC143D6) return execute_text_ccs_switch_to_window_instruction(cpu, address);
    return execute_text_ccs_call_instruction(cpu, address);
}
bool execute_shared_page_c144(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC144A3) return execute_text_ccs_call_instruction(cpu, address);
    return execute_text_ccs_create_number_selector_instruction(cpu, address);
}
bool execute_shared_page_c145(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14509) return execute_text_ccs_create_number_selector_instruction(cpu, address);
    if (address < 0xC14558) return execute_text_ccs_force_text_alignment_instruction(cpu, address);
    if (address < 0xC14591) return execute_text_ccs_check_equal_instruction(cpu, address);
    if (address < 0xC145CA) return execute_text_ccs_check_not_equal_instruction(cpu, address);
    if (address < 0xC145EF) return execute_text_ccs_print_horizontal_strings_instruction(cpu, address);
    return execute_text_ccs_copy_to_argmem_instruction(cpu, address);
}
bool execute_shared_page_c146(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1461A) return execute_text_ccs_copy_to_argmem_instruction(cpu, address);
    if (address < 0xC1463B) return execute_text_ccs_set_secmem_instruction(cpu, address);
    if (address < 0xC1467D) return execute_text_ccs_party_selection_menu_uncancellable_instruction(cpu, address);
    if (address < 0xC146BF) return execute_text_ccs_party_selection_menu_instruction(cpu, address);
    if (address < 0xC146DE) return execute_text_ccs_print_item_name_instruction(cpu, address);
    return execute_text_ccs_print_teleport_destination_name_instruction(cpu, address);
}
bool execute_shared_page_c147(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14723) return execute_text_ccs_print_teleport_destination_name_instruction(cpu, address);
    if (address < 0xC14751) return execute_text_ccs_get_character_number_instruction(cpu, address);
    if (address < 0xC147A0) return execute_text_ccs_play_music_instruction(cpu, address);
    if (address < 0xC147AB) return execute_text_ccs_stop_music_instruction(cpu, address);
    if (address < 0xC147CC) return execute_text_ccs_play_sfx_instruction(cpu, address);
    return execute_text_ccs_get_letter_from_character_name_instruction(cpu, address);
}
bool execute_shared_page_c148(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14819) return execute_text_ccs_get_letter_from_character_name_instruction(cpu, address);
    if (address < 0xC1488D) return execute_text_ccs_get_letter_from_stat_instruction(cpu, address);
    if (address < 0xC148AC) return execute_text_ccs_print_character_instruction(cpu, address);
    if (address < 0xC148E9) return execute_text_ccs_test_inventory_full_instruction(cpu, address);
    return execute_text_ccs_wallet_increase_instruction(cpu, address);
}
bool execute_shared_page_c149(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1494A) return execute_text_ccs_wallet_increase_instruction(cpu, address);
    if (address < 0xC149B6) return execute_text_ccs_wallet_decrease_instruction(cpu, address);
    return execute_text_ccs_recover_hp_by_percent_instruction(cpu, address);
}
bool execute_shared_page_c14a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14A03) return execute_text_ccs_recover_hp_by_percent_instruction(cpu, address);
    if (address < 0xC14A50) return execute_text_ccs_deplete_hp_by_percent_instruction(cpu, address);
    if (address < 0xC14A9D) return execute_text_ccs_recover_hp_by_amount_instruction(cpu, address);
    if (address < 0xC14AEA) return execute_text_ccs_deplete_hp_by_amount_instruction(cpu, address);
    return execute_text_ccs_recover_pp_by_percent_instruction(cpu, address);
}
bool execute_shared_page_c14b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14B37) return execute_text_ccs_recover_pp_by_percent_instruction(cpu, address);
    if (address < 0xC14B84) return execute_text_ccs_deplete_pp_by_percent_instruction(cpu, address);
    if (address < 0xC14BD1) return execute_text_ccs_recover_pp_by_amount_instruction(cpu, address);
    return execute_text_ccs_deplete_pp_by_amount_instruction(cpu, address);
}
bool execute_shared_page_c14c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14C1E) return execute_text_ccs_deplete_pp_by_amount_instruction(cpu, address);
    if (address < 0xC14C86) return execute_text_ccs_give_item_to_character_instruction(cpu, address);
    if (address < 0xC14CEE) return execute_text_ccs_take_item_from_character_instruction(cpu, address);
    return execute_text_ccs_test_inventory_not_full_instruction(cpu, address);
}
bool execute_shared_page_c14d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14D24) return execute_text_ccs_test_inventory_not_full_instruction(cpu, address);
    if (address < 0xC14D93) return execute_text_ccs_test_character_doesnt_have_item_instruction(cpu, address);
    if (address < 0xC14DFB) return execute_text_ccs_test_character_has_item_instruction(cpu, address);
    return execute_text_ccs_trigger_psi_teleport_instruction(cpu, address);
}
bool execute_shared_page_c14e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14E8C) return execute_text_ccs_trigger_psi_teleport_instruction(cpu, address);
    if (address < 0xC14EAB) return execute_text_ccs_trigger_teleport_instruction(cpu, address);
    if (address < 0xC14EB5) return execute_text_ccs_pause_instruction(cpu, address);
    if (address < 0xC14EF8) return execute_text_ccs_display_shop_menu_instruction(cpu, address);
    return execute_text_ccs_get_item_price_instruction(cpu, address);
}
bool execute_shared_page_c14f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14F33) return execute_text_ccs_get_item_price_instruction(cpu, address);
    if (address < 0xC14F6F) return execute_text_ccs_get_item_sell_price_instruction(cpu, address);
    if (address < 0xC14FD7) return execute_text_ccs_test_character_can_equip_item_instruction(cpu, address);
    return execute_text_ccs_print_character_name_instruction(cpu, address);
}
bool execute_shared_page_c150(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15007) return execute_text_ccs_print_character_name_instruction(cpu, address);
    if (address < 0xC1506F) return execute_text_ccs_get_character_status_instruction(cpu, address);
    if (address < 0xC150E4) return execute_text_ccs_inflict_character_status_instruction(cpu, address);
    return execute_text_ccs_test_character_status_instruction(cpu, address);
}
bool execute_shared_page_c151(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1516B) return execute_text_ccs_test_character_status_instruction(cpu, address);
    if (address < 0xC151FC) return execute_text_ccs_get_gender_etc_instruction(cpu, address);
    return execute_text_ccs_switch_gender_etc_instruction(cpu, address);
}
bool execute_shared_page_c152(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1528D) return execute_text_ccs_switch_gender_etc_instruction(cpu, address);
    return execute_text_ccs_test_equality_instruction(cpu, address);
}
bool execute_shared_page_c153(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15384) return execute_text_ccs_test_equality_instruction(cpu, address);
    if (address < 0xC153AF) return execute_text_ccs_get_exp_for_next_level_instruction(cpu, address);
    return execute_text_ccs_print_number_instruction(cpu, address);
}
bool execute_shared_page_c154(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15494) return execute_text_ccs_print_number_instruction(cpu, address);
    if (address < 0xC1549E) return execute_text_ccs_unknown_1f_60_instruction(cpu, address);
    return execute_text_ccs_show_character_inventory_instruction(cpu, address);
}
bool execute_shared_page_c155(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15529) return execute_text_ccs_show_character_inventory_instruction(cpu, address);
    if (address < 0xC1554E) return execute_text_ccs_unknown_18_08_instruction(cpu, address);
    if (address < 0xC15573) return execute_text_ccs_unknown_18_09_instruction(cpu, address);
    return execute_text_ccs_print_money_amount_instruction(cpu, address);
}
bool execute_shared_page_c156(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15659) return execute_text_ccs_print_money_amount_instruction(cpu, address);
    if (address < 0xC156DB) return execute_text_ccs_give_item_to_character_2_instruction(cpu, address);
    return execute_text_ccs_take_item_from_character_2_instruction(cpu, address);
}
bool execute_shared_page_c157(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1575D) return execute_text_ccs_take_item_from_character_2_instruction(cpu, address);
    if (address < 0xC157CD) return execute_text_ccs_unknown_1d_10_instruction(cpu, address);
    return execute_text_ccs_unknown_1d_11_instruction(cpu, address);
}
bool execute_shared_page_c158(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1583D) return execute_text_ccs_unknown_1d_11_instruction(cpu, address);
    if (address < 0xC158A5) return execute_text_ccs_equip_character_from_inventory_instruction(cpu, address);
    if (address < 0xC158FE) return execute_text_ccs_unknown_1d_12_instruction(cpu, address);
    return execute_text_ccs_unknown_1d_13_instruction(cpu, address);
}
bool execute_shared_page_c159(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1597F) return execute_text_ccs_unknown_1d_13_instruction(cpu, address);
    if (address < 0xC159F9) return execute_text_ccs_get_item_number_instruction(cpu, address);
    return execute_text_ccs_test_has_enough_money_instruction(cpu, address);
}
bool execute_shared_page_c15b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15B0E) return execute_text_ccs_test_has_enough_money_instruction(cpu, address);
    if (address < 0xC15B46) return execute_text_ccs_unknown_19_1a_instruction(cpu, address);
    if (address < 0xC15BA7) return execute_text_ccs_unknown_18_0d_instruction(cpu, address);
    if (address < 0xC15BCA) return execute_text_ccs_print_vertical_strings_instruction(cpu, address);
    return execute_text_ccs_set_argmem_instruction(cpu, address);
}
bool execute_shared_page_c15c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15C36) return execute_text_ccs_set_argmem_instruction(cpu, address);
    if (address < 0xC15C58) return execute_text_ccs_unknown_19_1b_instruction(cpu, address);
    if (address < 0xC15C85) return execute_text_ccs_learn_special_psi_instruction(cpu, address);
    return execute_text_ccs_atm_increase_instruction(cpu, address);
}
bool execute_shared_page_c15d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15D6B) return execute_text_ccs_atm_increase_instruction(cpu, address);
    return execute_text_ccs_atm_decrease_instruction(cpu, address);
}
bool execute_shared_page_c15e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15E5C) return execute_text_ccs_atm_decrease_instruction(cpu, address);
    return execute_text_ccs_test_atm_has_enough_money_instruction(cpu, address);
}
bool execute_shared_page_c15f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15F71) return execute_text_ccs_test_atm_has_enough_money_instruction(cpu, address);
    if (address < 0xC15F91) return execute_text_ccs_party_member_add_instruction(cpu, address);
    if (address < 0xC15FB1) return execute_text_ccs_party_member_remove_instruction(cpu, address);
    if (address < 0xC15FF7) return execute_unresolved_c1_c15fb1_instruction(cpu, address);
    return execute_text_ccs_unknown_19_1c_instruction(cpu, address);
}
bool execute_shared_page_c160(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16080) return execute_text_ccs_unknown_19_1c_instruction(cpu, address);
    return execute_text_ccs_unknown_19_1d_instruction(cpu, address);
}
bool execute_shared_page_c161(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16124) return execute_text_ccs_unknown_19_1d_instruction(cpu, address);
    if (address < 0xC16143) return execute_text_ccs_escargo_express_store_instruction(cpu, address);
    if (address < 0xC16172) return execute_text_ccs_test_item_is_drink_instruction(cpu, address);
    if (address < 0xC161D1) return execute_text_ccs_test_party_enough_characters_instruction(cpu, address);
    if (address < 0xC161F0) return execute_text_ccs_print_psi_name_instruction(cpu, address);
    return execute_text_ccs_get_random_number_instruction(cpu, address);
}
bool execute_shared_page_c162(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1621F) return execute_text_ccs_get_random_number_instruction(cpu, address);
    return execute_unresolved_c1_c1621f_instruction(cpu, address);
}
bool execute_shared_page_c163(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16308) return execute_unresolved_c1_c1621f_instruction(cpu, address);
    if (address < 0xC163A7) return execute_text_ccs_jump_multi2_instruction(cpu, address);
    if (address < 0xC163FD) return execute_text_ccs_try_fixing_items_instruction(cpu, address);
    return execute_text_ccs_set_character_direction_instruction(cpu, address);
}
bool execute_shared_page_c164(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1646E) return execute_text_ccs_set_character_direction_instruction(cpu, address);
    if (address < 0xC16490) return execute_text_ccs_set_party_direction_instruction(cpu, address);
    return execute_text_ccs_set_tpt_direction_instruction(cpu, address);
}
bool execute_shared_page_c165(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16509) return execute_text_ccs_set_tpt_direction_instruction(cpu, address);
    if (address < 0xC16582) return execute_text_ccs_create_entity_tpt_instruction(cpu, address);
    if (address < 0xC165AA) return execute_text_ccs_dummy_1f_18_instruction(cpu, address);
    if (address < 0xC165D2) return execute_text_ccs_dummy_1f_19_instruction(cpu, address);
    return execute_text_ccs_create_floating_sprite_at_tpt_entity_instruction(cpu, address);
}
bool execute_shared_page_c166(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1662A) return execute_text_ccs_create_floating_sprite_at_tpt_entity_instruction(cpu, address);
    if (address < 0xC1666D) return execute_text_ccs_delete_floating_sprite_at_tpt_entity_instruction(cpu, address);
    if (address < 0xC166DD) return execute_text_ccs_create_floating_sprite_at_character_instruction(cpu, address);
    if (address < 0xC166FE) return execute_text_ccs_delete_floating_sprite_at_character_instruction(cpu, address);
    return execute_text_ccs_set_map_palette_instruction(cpu, address);
}
bool execute_shared_page_c167(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16744) return execute_text_ccs_set_map_palette_instruction(cpu, address);
    if (address < 0xC167D6) return execute_text_ccs_create_entity_sprite_instruction(cpu, address);
    return execute_text_ccs_delete_entity_tpt_instruction(cpu, address);
}
bool execute_shared_page_c168(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1683B) return execute_text_ccs_delete_entity_tpt_instruction(cpu, address);
    if (address < 0xC168A0) return execute_text_ccs_delete_entity_sprite_instruction(cpu, address);
    return execute_text_ccs_get_direction_from_character_to_entity_instruction(cpu, address);
}
bool execute_shared_page_c169(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16947) return execute_text_ccs_get_direction_from_character_to_entity_instruction(cpu, address);
    if (address < 0xC169F7) return execute_text_ccs_get_direction_from_tpt_entity_to_entity_instruction(cpu, address);
    return execute_text_ccs_enable_blinking_triangle_instruction(cpu, address);
}
bool execute_shared_page_c16a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16A01) return execute_text_ccs_enable_blinking_triangle_instruction(cpu, address);
    if (address < 0xC16A7B) return execute_text_ccs_set_character_level_instruction(cpu, address);
    return execute_text_ccs_get_direction_from_sprite_entity_to_entity_instruction(cpu, address);
}
bool execute_shared_page_c16b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16B2B) return execute_text_ccs_get_direction_from_sprite_entity_to_entity_instruction(cpu, address);
    if (address < 0xC16BA4) return execute_text_ccs_set_entity_direction_sprite_instruction(cpu, address);
    if (address < 0xC16BAF) return execute_text_ccs_set_player_movement_lock_instruction(cpu, address);
    if (address < 0xC16BF2) return execute_text_ccs_set_tpt_entity_delay_instruction(cpu, address);
    return execute_text_ccs_unknown_1f_e7_instruction(cpu, address);
}
bool execute_shared_page_c16c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16C35) return execute_text_ccs_unknown_1f_e7_instruction(cpu, address);
    if (address < 0xC16C40) return execute_text_ccs_set_player_movement_lock_if_camera_refocused_instruction(cpu, address);
    if (address < 0xC16C83) return execute_text_ccs_unknown_1f_e9_instruction(cpu, address);
    if (address < 0xC16CC6) return execute_text_ccs_unknown_1f_ea_instruction(cpu, address);
    return execute_text_ccs_set_character_invisibility_instruction(cpu, address);
}
bool execute_shared_page_c16d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16D14) return execute_text_ccs_set_character_invisibility_instruction(cpu, address);
    if (address < 0xC16D62) return execute_text_ccs_set_character_visibility_instruction(cpu, address);
    if (address < 0xC16DA5) return execute_text_ccs_teleport_party_to_tpt_entity_instruction(cpu, address);
    if (address < 0xC16DE8) return execute_text_ccs_unknown_1f_ef_instruction(cpu, address);
    return execute_text_ccs_screen_reload_pointer_instruction(cpu, address);
}
bool execute_shared_page_c16e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16EBF) return execute_text_ccs_screen_reload_pointer_instruction(cpu, address);
    return execute_text_ccs_set_tpt_entity_movement_instruction(cpu, address);
}
bool execute_shared_page_c16f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16F2F) return execute_text_ccs_set_tpt_entity_movement_instruction(cpu, address);
    if (address < 0xC16F9F) return execute_text_ccs_set_sprite_entity_movement_instruction(cpu, address);
    if (address < 0xC16FD1) return execute_text_ccs_test_item_is_condiment_instruction(cpu, address);
    return execute_text_ccs_trigger_battle_instruction(cpu, address);
}
bool execute_shared_page_c170(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17037) return execute_text_ccs_trigger_battle_instruction(cpu, address);
    if (address < 0xC17058) return execute_text_ccs_set_respawn_point_instruction(cpu, address);
    return execute_text_ccs_unknown_1d_0c_instruction(cpu, address);
}
bool execute_shared_page_c171(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1711C) return execute_text_ccs_unknown_1d_0c_instruction(cpu, address);
    return execute_text_ccs_activate_hotspot_instruction(cpu, address);
}
bool execute_shared_page_c172(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17233) return execute_text_ccs_activate_hotspot_instruction(cpu, address);
    if (address < 0xC17254) return execute_text_ccs_deactivate_hotspot_instruction(cpu, address);
    if (address < 0xC17274) return execute_text_ccs_toggle_text_printing_sound_instruction(cpu, address);
    if (address < 0xC172BC) return execute_text_ccs_unknown_1d_24_instruction(cpu, address);
    if (address < 0xC172DA) return execute_text_ccs_unknown_1f_40_instruction(cpu, address);
    return execute_text_ccs_trigger_special_event_instruction(cpu, address);
}
bool execute_shared_page_c173(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17304) return execute_text_ccs_trigger_special_event_instruction(cpu, address);
    if (address < 0xC17325) return execute_text_ccs_trigger_photographer_event_instruction(cpu, address);
    if (address < 0xC1737D) return execute_text_ccs_create_floating_sprite_at_sprite_entity_instruction(cpu, address);
    if (address < 0xC173C0) return execute_text_ccs_delete_floating_sprite_at_sprite_entity_instruction(cpu, address);
    return execute_text_ccs_display_battle_animation_instruction(cpu, address);
}
bool execute_shared_page_c174(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1741F) return execute_text_ccs_display_battle_animation_instruction(cpu, address);
    if (address < 0xC17440) return execute_text_ccs_set_music_effect_instruction(cpu, address);
    if (address < 0xC1744B) return execute_text_ccs_trigger_timed_event_instruction(cpu, address);
    return execute_text_ccs_increase_character_experience_instruction(cpu, address);
}
bool execute_shared_page_c175(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17523) return execute_text_ccs_increase_character_experience_instruction(cpu, address);
    if (address < 0xC17584) return execute_text_ccs_increase_character_iq_instruction(cpu, address);
    if (address < 0xC175E5) return execute_text_ccs_increase_character_guts_instruction(cpu, address);
    return execute_text_ccs_increase_character_speed_instruction(cpu, address);
}
bool execute_shared_page_c176(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17646) return execute_text_ccs_increase_character_speed_instruction(cpu, address);
    if (address < 0xC176A7) return execute_text_ccs_increase_character_vitality_instruction(cpu, address);
    return execute_text_ccs_increase_character_luck_instruction(cpu, address);
}
bool execute_shared_page_c177(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17708) return execute_text_ccs_increase_character_luck_instruction(cpu, address);
    if (address < 0xC1776A) return execute_text_ccs_unknown_1d_23_instruction(cpu, address);
    if (address < 0xC17796) return execute_text_ccs_unknown_19_27_instruction(cpu, address);
    return execute_unresolved_c1_c17796_instruction(cpu, address);
}
bool execute_shared_page_c178(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17889) return execute_unresolved_c1_c17796_instruction(cpu, address);
    if (address < 0xC178F7) return execute_unresolved_c1_c17889_instruction(cpu, address);
    return execute_text_ccs_load_string_instruction(cpu, address);
}
bool execute_shared_page_c179(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1790B) return execute_text_ccs_load_string_instruction(cpu, address);
    if (address < 0xC179AA) return execute_text_ccs_tree_18_instruction(cpu, address);
    return execute_text_ccs_tree_19_instruction(cpu, address);
}
bool execute_shared_page_c17b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17B56) return execute_text_ccs_tree_19_instruction(cpu, address);
    return execute_text_ccs_tree_1a_instruction(cpu, address);
}
bool execute_shared_page_c17c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17C36) return execute_text_ccs_tree_1a_instruction(cpu, address);
    return execute_text_ccs_tree_1b_instruction(cpu, address);
}
bool execute_shared_page_c17d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17D94) return execute_text_ccs_tree_1b_instruction(cpu, address);
    return execute_text_ccs_tree_1c_instruction(cpu, address);
}
bool execute_shared_page_c17f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17F11) return execute_text_ccs_tree_1c_instruction(cpu, address);
    return execute_text_ccs_tree_1d_instruction(cpu, address);
}
bool execute_shared_page_c181(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1811F) return execute_text_ccs_tree_1d_instruction(cpu, address);
    if (address < 0xC181BB) return execute_text_ccs_tree_1e_instruction(cpu, address);
    return execute_text_ccs_tree_1f_instruction(cpu, address);
}
bool execute_shared_page_c186(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1866D) return execute_text_ccs_tree_1f_instruction(cpu, address);
    if (address < 0xC1869D) return execute_unresolved_c1_c1866d_instruction(cpu, address);
    if (address < 0xC186B1) return execute_unresolved_c1_c1869d_instruction(cpu, address);
    return execute_text_display_text_instruction(cpu, address);
}
bool execute_shared_page_c18b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC18B2C) return execute_text_display_text_instruction(cpu, address);
    if (address < 0xC18BC6) return execute_miscellaneous_give_item_to_specific_character_instruction(cpu, address);
    return execute_miscellaneous_give_item_to_character_instruction(cpu, address);
}
bool execute_shared_page_c18c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC18C27) return execute_miscellaneous_give_item_to_character_instruction(cpu, address);
    return execute_miscellaneous_remove_item_from_inventory_instruction(cpu, address);
}
bool execute_shared_page_c18e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC18E5B) return execute_miscellaneous_remove_item_from_inventory_instruction(cpu, address);
    if (address < 0xC18EAD) return execute_miscellaneous_take_item_from_specific_character_instruction(cpu, address);
    return execute_miscellaneous_take_item_from_character_instruction(cpu, address);
}
bool execute_shared_page_c18f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC18F0E) return execute_miscellaneous_take_item_from_character_instruction(cpu, address);
    if (address < 0xC18F64) return execute_miscellaneous_reduce_hp_amtpercent_instruction(cpu, address);
    if (address < 0xC18FBA) return execute_miscellaneous_recover_hp_amtpercent_instruction(cpu, address);
    return execute_miscellaneous_reduce_pp_amtpercent_instruction(cpu, address);
}
bool execute_shared_page_c190(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19010) return execute_miscellaneous_reduce_pp_amtpercent_instruction(cpu, address);
    if (address < 0xC19066) return execute_miscellaneous_recover_pp_amtpercent_instruction(cpu, address);
    if (address < 0xC190E6) return execute_miscellaneous_equip_item_instruction(cpu, address);
    if (address < 0xC190F1) return execute_unresolved_c1_c190e6_instruction(cpu, address);
    return execute_unresolved_c1_c190f1_instruction(cpu, address);
}
bool execute_shared_page_c191(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1913D) return execute_unresolved_c1_c190f1_instruction(cpu, address);
    if (address < 0xC19183) return execute_miscellaneous_escargo_express_store_instruction(cpu, address);
    if (address < 0xC191B0) return execute_miscellaneous_escargo_express_move_instruction(cpu, address);
    if (address < 0xC191F8) return execute_unresolved_c1_c191b0_instruction(cpu, address);
    return execute_unresolved_c1_c191f8_instruction(cpu, address);
}
bool execute_shared_page_c192(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19216) return execute_unresolved_c1_c191f8_instruction(cpu, address);
    if (address < 0xC19249) return execute_unresolved_c1_c19216_instruction(cpu, address);
    return execute_unresolved_c1_c19249_instruction(cpu, address);
}
bool execute_shared_page_c193(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1931B) return execute_unresolved_c1_c19249_instruction(cpu, address);
    if (address < 0xC193E7) return execute_unresolved_c1_c1931b_instruction(cpu, address);
    return execute_unresolved_c1_c193e7_instruction(cpu, address);
}
bool execute_shared_page_c194(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19437) return execute_unresolved_c1_c193e7_instruction(cpu, address);
    if (address < 0xC19441) return execute_unresolved_c1_c19437_instruction(cpu, address);
    return execute_unresolved_c1_c19441_instruction(cpu, address);
}
bool execute_shared_page_c195(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1952F) return execute_unresolved_c1_c19441_instruction(cpu, address);
    return execute_unresolved_c1_c1952f_instruction(cpu, address);
}
bool execute_shared_page_c198(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC198DE) return execute_unresolved_c1_c1952f_instruction(cpu, address);
    return execute_miscellaneous_inventory_get_item_name_instruction(cpu, address);
}
bool execute_shared_page_c19a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19A11) return execute_miscellaneous_inventory_get_item_name_instruction(cpu, address);
    if (address < 0xC19A43) return execute_unresolved_c1_c19a11_instruction(cpu, address);
    return execute_unresolved_c1_c19a43_instruction(cpu, address);
}
bool execute_shared_page_c19b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19B4E) return execute_unresolved_c1_c19a43_instruction(cpu, address);
    return execute_text_set_hppp_window_mode_item_instruction(cpu, address);
}
bool execute_shared_page_c19c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19CDD) return execute_text_set_hppp_window_mode_item_instruction(cpu, address);
    return execute_unresolved_c1_c19cdd_instruction(cpu, address);
}
bool execute_shared_page_c19d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19D49) return execute_unresolved_c1_c19cdd_instruction(cpu, address);
    if (address < 0xC19DB5) return execute_unresolved_c1_c19d49_instruction(cpu, address);
    return execute_unresolved_c1_c19db5_instruction(cpu, address);
}
bool execute_shared_page_c19e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19EE6) return execute_unresolved_c1_c19db5_instruction(cpu, address);
    return execute_miscellaneous_get_item_type_instruction(cpu, address);
}
bool execute_shared_page_c19f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19F29) return execute_miscellaneous_get_item_type_instruction(cpu, address);
    return execute_unresolved_c1_c19f29_instruction(cpu, address);
}
bool execute_shared_page_c1a1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1A1D8) return execute_unresolved_c1_c19f29_instruction(cpu, address);
    return execute_unresolved_c1_c1a1d8_instruction(cpu, address);
}
bool execute_shared_page_c1a7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1A778) return execute_unresolved_c1_c1a1d8_instruction(cpu, address);
    if (address < 0xC1A795) return execute_unresolved_c1_c1a778_instruction(cpu, address);
    return execute_unresolved_c1_c1a795_instruction(cpu, address);
}
bool execute_shared_page_c1aa(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1AA18) return execute_unresolved_c1_c1a795_instruction(cpu, address);
    if (address < 0xC1AA5D) return execute_unresolved_c1_c1aa18_instruction(cpu, address);
    if (address < 0xC1AAFA) return execute_unresolved_c1_c1aa5d_instruction(cpu, address);
    return execute_unresolved_c1_c1aafa_instruction(cpu, address);
}
bool execute_shared_page_c1ac(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1AC4A) return execute_unresolved_c1_c1ac00_instruction(cpu, address);
    if (address < 0xC1AC9B) return execute_unresolved_c1_c1ac4a_instruction(cpu, address);
    if (address < 0xC1ACA1) return execute_battle_return_battle_attacker_address_instruction(cpu, address);
    if (address < 0xC1ACF2) return execute_unresolved_c1_c1aca1_instruction(cpu, address);
    if (address < 0xC1ACF8) return execute_battle_return_battle_target_address_instruction(cpu, address);
    return execute_unresolved_c1_c1acf8_instruction(cpu, address);
}
bool execute_shared_page_c1ad(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1AD02) return execute_unresolved_c1_c1acf8_instruction(cpu, address);
    if (address < 0xC1AD0A) return execute_unresolved_c1_c1ad02_instruction(cpu, address);
    if (address < 0xC1AD26) return execute_unresolved_c1_c1ad0a_instruction(cpu, address);
    if (address < 0xC1AD42) return execute_unresolved_c1_c1ad26_instruction(cpu, address);
    if (address < 0xC1AD7D) return execute_unresolved_c1_c1ad42_instruction(cpu, address);
    if (address < 0xC1ADB4) return execute_unresolved_c1_c1ad7d_instruction(cpu, address);
    return execute_battle_determine_targetting_instruction(cpu, address);
}
bool execute_shared_page_c1af(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1AF74) return execute_battle_determine_targetting_instruction(cpu, address);
    return execute_overworld_use_item_instruction(cpu, address);
}
bool execute_shared_page_c1b5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1B5B6) return execute_overworld_use_item_instruction(cpu, address);
    return execute_unresolved_c1_c1b5b6_instruction(cpu, address);
}
bool execute_shared_page_c1bb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1BB06) return execute_unresolved_c1_c1b5b6_instruction(cpu, address);
    if (address < 0xC1BB71) return execute_unresolved_c1_c1bb06_instruction(cpu, address);
    return execute_unresolved_c1_c1bb71_instruction(cpu, address);
}
bool execute_shared_page_c1bc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1BCAB) return execute_unresolved_c1_c1bb71_instruction(cpu, address);
    return execute_overworld_teleport_instruction(cpu, address);
}
bool execute_shared_page_c1be(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1BE4D) return execute_overworld_teleport_instruction(cpu, address);
    if (address < 0xC1BEC6) return execute_overworld_attempt_homesickness_instruction(cpu, address);
    if (address < 0xC1BEFC) return execute_overworld_get_off_bicycle_instruction(cpu, address);
    return execute_unresolved_c1_c1befc_instruction(cpu, address);
}
bool execute_shared_page_c1c0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1C046) return execute_unresolved_c1_c1befc_instruction(cpu, address);
    return execute_unresolved_c1_c1c046_instruction(cpu, address);
}
bool execute_shared_page_c1c1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1C165) return execute_unresolved_c1_c1c046_instruction(cpu, address);
    if (address < 0xC1C1BA) return execute_unresolved_c1_c1c165_instruction(cpu, address);
    return execute_unresolved_c1_c1c1ba_instruction(cpu, address);
}
bool execute_shared_page_c1c3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1C32A) return execute_unresolved_c1_c1c1ba_instruction(cpu, address);
    if (address < 0xC1C367) return execute_unresolved_c1_c1c32a_instruction(cpu, address);
    if (address < 0xC1C373) return execute_unresolved_c1_c1c367_instruction(cpu, address);
    if (address < 0xC1C3B6) return execute_unresolved_c1_c1c373_instruction(cpu, address);
    return execute_unresolved_c1_c1c3b6_instruction(cpu, address);
}
bool execute_shared_page_c1c4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1C403) return execute_unresolved_c1_c1c3b6_instruction(cpu, address);
    if (address < 0xC1C452) return execute_text_get_psi_name_instruction(cpu, address);
    return execute_battle_generate_psi_list_instruction(cpu, address);
}
bool execute_shared_page_c1c8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1C853) return execute_battle_generate_psi_list_instruction(cpu, address);
    if (address < 0xC1C8BC) return execute_unresolved_c1_c1c853_instruction(cpu, address);
    return execute_unresolved_c1_c1c8bc_instruction(cpu, address);
}
bool execute_shared_page_c1ca(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1CA06) return execute_unresolved_c1_c1c8bc_instruction(cpu, address);
    if (address < 0xC1CA72) return execute_unresolved_c1_c1ca06_instruction(cpu, address);
    if (address < 0xC1CAF5) return execute_unresolved_c1_c1ca72_instruction(cpu, address);
    return execute_unresolved_c1_c1caf5_instruction(cpu, address);
}
bool execute_shared_page_c1cb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1CB7F) return execute_unresolved_c1_c1caf5_instruction(cpu, address);
    if (address < 0xC1CBCD) return execute_unresolved_c1_c1cb7f_instruction(cpu, address);
    return execute_battle_battle_psi_menu_instruction(cpu, address);
}
bool execute_shared_page_c1ce(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1CE85) return execute_battle_battle_psi_menu_instruction(cpu, address);
    return execute_unresolved_c1_c1ce85_instruction(cpu, address);
}
bool execute_shared_page_c1cf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1CFC6) return execute_unresolved_c1_c1ce85_instruction(cpu, address);
    return execute_unresolved_c1_c1cfc6_instruction(cpu, address);
}
bool execute_shared_page_c1d0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1D038) return execute_unresolved_c1_c1cfc6_instruction(cpu, address);
    if (address < 0xC1D08B) return execute_unresolved_c1_c1d038_instruction(cpu, address);
    return execute_unresolved_c1_c1d08b_instruction(cpu, address);
}
bool execute_shared_page_c1d1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1D109) return execute_unresolved_c1_c1d08b_instruction(cpu, address);
    return execute_miscellaneous_level_up_char_instruction(cpu, address);
}
bool execute_shared_page_c1d8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1D8D0) return execute_miscellaneous_level_up_char_instruction(cpu, address);
    return execute_miscellaneous_reset_char_level_one_instruction(cpu, address);
}
bool execute_shared_page_c1d9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1D9E9) return execute_miscellaneous_reset_char_level_one_instruction(cpu, address);
    return execute_miscellaneous_gain_exp_instruction(cpu, address);
}
bool execute_shared_page_c1db(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1DB33) return execute_miscellaneous_gain_exp_instruction(cpu, address);
    if (address < 0xC1DBBB) return execute_miscellaneous_find_condiment_instruction(cpu, address);
    return execute_overworld_show_hp_alert_instruction(cpu, address);
}
bool execute_shared_page_c1dc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1DC1C) return execute_overworld_show_hp_alert_instruction(cpu, address);
    if (address < 0xC1DC66) return execute_text_display_in_battle_text_instruction(cpu, address);
    if (address < 0xC1DCCB) return execute_text_display_text_wait_instruction(cpu, address);
    return execute_unresolved_c1_c1dccb_instruction(cpu, address);
}
bool execute_shared_page_c1dd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1DD3B) return execute_unresolved_c1_c1dccb_instruction(cpu, address);
    if (address < 0xC1DD41) return execute_text_show_hppp_windows_redirect_instruction(cpu, address);
    if (address < 0xC1DD47) return execute_text_hide_hppp_windows_redirect_instruction(cpu, address);
    if (address < 0xC1DD4D) return execute_text_create_window_redirect_instruction(cpu, address);
    if (address < 0xC1DD53) return execute_text_set_window_focus_redirect_instruction(cpu, address);
    if (address < 0xC1DD59) return execute_unresolved_c1_c10fa3_redirect_instruction(cpu, address);
    if (address < 0xC1DD5F) return execute_text_close_focus_window_redirect_instruction(cpu, address);
    if (address < 0xC1DD70) return execute_unresolved_c1_c1dd5f_instruction(cpu, address);
    if (address < 0xC1DD76) return execute_unresolved_c1_c1ac4a_redirect_instruction(cpu, address);
    if (address < 0xC1DD7C) return execute_unresolved_c1_c1aca1_redirect_instruction(cpu, address);
    if (address < 0xC1DD82) return execute_unresolved_c1_c1acf8_redirect_instruction(cpu, address);
    if (address < 0xC1DD9F) return execute_unresolved_c1_c1dd82_instruction(cpu, address);
    if (address < 0xC1DDC6) return execute_unresolved_c1_c1dd9f_instruction(cpu, address);
    if (address < 0xC1DDCC) return execute_miscellaneous_remove_item_from_inventory_redirect_instruction(cpu, address);
    if (address < 0xC1DDD3) return execute_unresolved_c4_c43573_redirect_instruction(cpu, address);
    if (address < 0xC1DDDA) return execute_unresolved_c3_c3e6f8_redirect_instruction(cpu, address);
    return execute_text_selection_menu_setup_instruction(cpu, address);
}
bool execute_shared_page_c1de(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1DE25) return execute_text_selection_menu_setup_instruction(cpu, address);
    if (address < 0xC1DE2B) return execute_text_print_menu_items_redirect_instruction(cpu, address);
    if (address < 0xC1DE31) return execute_text_selection_menu_redirect_instruction(cpu, address);
    if (address < 0xC1DE37) return execute_unresolved_c1_c1cfc6_redirect_instruction(cpu, address);
    if (address < 0xC1DE3D) return execute_unresolved_c1_c1242e_redirect_instruction(cpu, address);
    if (address < 0xC1DE43) return execute_battle_battle_psi_menu_redirect_instruction(cpu, address);
    return execute_battle_actions_switch_weapon_instruction(cpu, address);
}
bool execute_shared_page_c1e0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1E00F) return execute_battle_actions_switch_weapon_instruction(cpu, address);
    return execute_battle_actions_switch_armor_instruction(cpu, address);
}
bool execute_shared_page_c1e1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1E1A2) return execute_battle_actions_switch_armor_instruction(cpu, address);
    if (address < 0xC1E1A5) return execute_unresolved_miscellaneous_null_c1e1a2_instruction(cpu, address);
    return execute_battle_enemy_select_mode_instruction(cpu, address);
}
bool execute_shared_page_c1e4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1E48D) return execute_battle_enemy_select_mode_instruction(cpu, address);
    if (address < 0xC1E4BE) return execute_unresolved_c1_c1e48d_instruction(cpu, address);
    return execute_unresolved_c1_c1e4be_instruction(cpu, address);
}
bool execute_shared_page_c1e5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1E57F) return execute_unresolved_c1_c1e4be_instruction(cpu, address);
    return execute_text_text_input_dialog_instruction(cpu, address);
}
bool execute_shared_page_c1ea(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1EAA6) return execute_text_text_input_dialog_instruction(cpu, address);
    return execute_text_enter_your_name_please_instruction(cpu, address);
}
bool execute_shared_page_c1ec(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1EC04) return execute_text_enter_your_name_please_instruction(cpu, address);
    if (address < 0xC1EC8F) return execute_introduction_name_a_character_instruction(cpu, address);
    if (address < 0xC1ECD1) return execute_unresolved_c1_c1ec8f_instruction(cpu, address);
    if (address < 0xC1ECDC) return execute_unresolved_c1_c1ecd1_instruction(cpu, address);
    return execute_system_saves_corruption_check_instruction(cpu, address);
}
bool execute_shared_page_c1ed(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1ED5B) return execute_system_saves_corruption_check_instruction(cpu, address);
    return execute_introduction_file_select_menu_instruction(cpu, address);
}
bool execute_shared_page_c1f0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F07E) return execute_introduction_file_select_menu_instruction(cpu, address);
    return execute_unresolved_c1_c1f07e_instruction(cpu, address);
}
bool execute_shared_page_c1f1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F14F) return execute_unresolved_c1_c1f07e_instruction(cpu, address);
    return execute_unresolved_c1_c1f14f_instruction(cpu, address);
}
bool execute_shared_page_c1f2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F2A8) return execute_unresolved_c1_c1f14f_instruction(cpu, address);
    return execute_unresolved_c1_c1f2a8_instruction(cpu, address);
}
bool execute_shared_page_c1f3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F3C2) return execute_unresolved_c1_c1f2a8_instruction(cpu, address);
    return execute_introduction_file_select_open_text_speed_menu_instruction(cpu, address);
}
bool execute_shared_page_c1f4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F497) return execute_introduction_file_select_open_text_speed_menu_instruction(cpu, address);
    return execute_unresolved_c1_c1f497_instruction(cpu, address);
}
bool execute_shared_page_c1f5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F568) return execute_unresolved_c1_c1f497_instruction(cpu, address);
    return execute_introduction_file_select_open_sound_menu_instruction(cpu, address);
}
bool execute_shared_page_c1f6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F616) return execute_introduction_file_select_open_sound_menu_instruction(cpu, address);
    if (address < 0xC1F6E3) return execute_unresolved_c1_c1f616_instruction(cpu, address);
    return execute_introduction_file_select_open_flavour_menu_instruction(cpu, address);
}
bool execute_shared_page_c1f8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F805) return execute_introduction_file_select_open_flavour_menu_instruction(cpu, address);
    return execute_introduction_file_select_menu_loop_instruction(cpu, address);
}
bool execute_shared_page_c1ff(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1FF2C) return execute_introduction_file_select_menu_loop_instruction(cpu, address);
    if (address < 0xC1FF6B) return execute_unresolved_c1_c1ff2c_instruction(cpu, address);
    if (address < 0xC1FF99) return execute_unresolved_c1_c1ff6b_instruction(cpu, address);
    if (address < 0xC1FFD3) return execute_unresolved_c1_c1ff99_instruction(cpu, address);
    return execute_system_antipiracy_sram_check_routine_checksum_instruction(cpu, address);
}
bool execute_shared_page_c200(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC200D9) return execute_overworld_inflict_sunstroke_check_instruction(cpu, address);
    return execute_unresolved_c2_c200d9_instruction(cpu, address);
}
bool execute_shared_page_c202(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC20266) return execute_unresolved_c2_c200d9_instruction(cpu, address);
    if (address < 0xC20293) return execute_unresolved_c2_c20266_instruction(cpu, address);
    if (address < 0xC202AC) return execute_unresolved_c2_c20293_instruction(cpu, address);
    return execute_unresolved_c2_c202ac_instruction(cpu, address);
}
bool execute_shared_page_c203(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2032B) return execute_unresolved_c2_c202ac_instruction(cpu, address);
    if (address < 0xC2038B) return execute_text_set_window_title_instruction(cpu, address);
    if (address < 0xC203C3) return execute_unresolved_c2_c2038b_instruction(cpu, address);
    return execute_text_hp_pp_window_draw_instruction(cpu, address);
}
bool execute_shared_page_c207(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2077D) return execute_text_hp_pp_window_draw_instruction(cpu, address);
    if (address < 0xC207B6) return execute_unresolved_c2_c2077d_instruction(cpu, address);
    if (address < 0xC207E1) return execute_unresolved_c2_c207b6_instruction(cpu, address);
    return execute_text_hp_pp_window_undraw_instruction(cpu, address);
}
bool execute_shared_page_c208(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2087C) return execute_text_hp_pp_window_undraw_instruction(cpu, address);
    if (address < 0xC208B8) return execute_unresolved_c2_c2087c_instruction(cpu, address);
    return execute_unresolved_c2_c208b8_instruction(cpu, address);
}
bool execute_shared_page_c209(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC209A0) return execute_unresolved_c2_c208b8_instruction(cpu, address);
    return execute_unresolved_c2_c209a0_instruction(cpu, address);
}
bool execute_shared_page_c20a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC20A20) return execute_unresolved_c2_c209a0_instruction(cpu, address);
    if (address < 0xC20ABC) return execute_unresolved_c2_c20a20_instruction(cpu, address);
    return execute_unresolved_c2_c20abc_instruction(cpu, address);
}
bool execute_shared_page_c20b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC20B65) return execute_unresolved_c2_c20abc_instruction(cpu, address);
    return execute_unresolved_c2_c20b65_instruction(cpu, address);
}
bool execute_shared_page_c20d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC20D3F) return execute_unresolved_c2_c20b65_instruction(cpu, address);
    if (address < 0xC20D89) return execute_text_hp_pp_window_separate_decimal_digits_instruction(cpu, address);
    if (address < 0xC20DC5) return execute_text_hp_pp_window_fill_tile_buffer_x_instruction(cpu, address);
    return execute_text_hp_pp_window_fill_tile_buffer_instruction(cpu, address);
}
bool execute_shared_page_c20f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC20F08) return execute_text_hp_pp_window_fill_tile_buffer_instruction(cpu, address);
    if (address < 0xC20F26) return execute_text_hp_pp_window_fill_character_hp_tile_buffer_instruction(cpu, address);
    if (address < 0xC20F58) return execute_text_hp_pp_window_fill_character_pp_tile_buffer_instruction(cpu, address);
    if (address < 0xC20F9A) return execute_unresolved_c2_c20f58_instruction(cpu, address);
    return execute_miscellaneous_reset_hppp_rolling_instruction(cpu, address);
}
bool execute_shared_page_c210(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21034) return execute_miscellaneous_reset_hppp_rolling_instruction(cpu, address);
    if (address < 0xC2108C) return execute_unresolved_c2_c21034_instruction(cpu, address);
    if (address < 0xC2109F) return execute_unresolved_c2_c2108c_instruction(cpu, address);
    return execute_miscellaneous_hp_pp_roller_instruction(cpu, address);
}
bool execute_shared_page_c213(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC213AC) return execute_miscellaneous_hp_pp_roller_instruction(cpu, address);
    return execute_text_update_hppp_meter_tiles_instruction(cpu, address);
}
bool execute_shared_page_c216(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21628) return execute_text_update_hppp_meter_tiles_instruction(cpu, address);
    if (address < 0xC2165E) return execute_text_get_event_flag_instruction(cpu, address);
    if (address < 0xC216AD) return execute_text_set_event_flag_instruction(cpu, address);
    if (address < 0xC216C9) return execute_unresolved_c2_c216ad_instruction(cpu, address);
    if (address < 0xC216D0) return execute_audio_stop_music_redirect_instruction(cpu, address);
    if (address < 0xC216DB) return execute_audio_play_sound_and_unknown_instruction(cpu, address);
    return execute_unresolved_c2_c216db_instruction(cpu, address);
}
bool execute_shared_page_c218(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21857) return execute_unresolved_c2_c216db_instruction(cpu, address);
    return execute_miscellaneous_recalc_character_postmath_offense_instruction(cpu, address);
}
bool execute_shared_page_c219(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2192B) return execute_miscellaneous_recalc_character_postmath_offense_instruction(cpu, address);
    return execute_miscellaneous_recalc_character_postmath_defense_instruction(cpu, address);
}
bool execute_shared_page_c21a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21AEB) return execute_miscellaneous_recalc_character_postmath_defense_instruction(cpu, address);
    return execute_miscellaneous_recalc_character_postmath_speed_instruction(cpu, address);
}
bool execute_shared_page_c21b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21BA4) return execute_miscellaneous_recalc_character_postmath_speed_instruction(cpu, address);
    return execute_miscellaneous_recalc_character_postmath_guts_instruction(cpu, address);
}
bool execute_shared_page_c21c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21C5D) return execute_miscellaneous_recalc_character_postmath_guts_instruction(cpu, address);
    return execute_miscellaneous_recalc_character_postmath_luck_instruction(cpu, address);
}
bool execute_shared_page_c21d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21D65) return execute_miscellaneous_recalc_character_postmath_luck_instruction(cpu, address);
    if (address < 0xC21D7D) return execute_miscellaneous_recalc_character_postmath_vitality_instruction(cpu, address);
    if (address < 0xC21D95) return execute_miscellaneous_recalc_character_postmath_iq_instruction(cpu, address);
    return execute_battle_recalc_character_miss_rate_instruction(cpu, address);
}
bool execute_shared_page_c21e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21E03) return execute_battle_recalc_character_miss_rate_instruction(cpu, address);
    return execute_battle_calc_resistances_instruction(cpu, address);
}
bool execute_shared_page_c222(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC22214) return execute_battle_calc_resistances_instruction(cpu, address);
    if (address < 0xC22272) return execute_miscellaneous_increase_wallet_balance_instruction(cpu, address);
    if (address < 0xC222D3) return execute_miscellaneous_decrease_wallet_balance_instruction(cpu, address);
    return execute_text_get_party_character_name_instruction(cpu, address);
}
bool execute_shared_page_c223(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC22351) return execute_text_get_party_character_name_instruction(cpu, address);
    if (address < 0xC2239D) return execute_unresolved_c2_c22351_instruction(cpu, address);
    if (address < 0xC223D9) return execute_unresolved_c2_c2239d_instruction(cpu, address);
    return execute_unresolved_c2_c223d9_instruction(cpu, address);
}
bool execute_shared_page_c224(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC22474) return execute_unresolved_c2_c223d9_instruction(cpu, address);
    if (address < 0xC224E1) return execute_unresolved_c2_c22474_instruction(cpu, address);
    return execute_inventory_get_item_subtype_instruction(cpu, address);
}
bool execute_shared_page_c225(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC22524) return execute_inventory_get_item_subtype_instruction(cpu, address);
    if (address < 0xC22562) return execute_inventory_get_item_subtype2_instruction(cpu, address);
    if (address < 0xC225AC) return execute_unresolved_c2_c22562_instruction(cpu, address);
    return execute_unresolved_c2_c225ac_instruction(cpu, address);
}
bool execute_shared_page_c226(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2260D) return execute_unresolved_c2_c225ac_instruction(cpu, address);
    if (address < 0xC22673) return execute_unresolved_c2_c2260d_instruction(cpu, address);
    if (address < 0xC226C5) return execute_unresolved_c2_c22673_instruction(cpu, address);
    if (address < 0xC226E6) return execute_unresolved_c2_c226c5_instruction(cpu, address);
    if (address < 0xC226F0) return execute_unresolved_c2_c226e6_instruction(cpu, address);
    return execute_unresolved_c2_c226f0_instruction(cpu, address);
}
bool execute_shared_page_c227(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2272F) return execute_unresolved_c2_c226f0_instruction(cpu, address);
    if (address < 0xC2277C) return execute_unresolved_c2_c2272f_instruction(cpu, address);
    if (address < 0xC227C8) return execute_unresolved_c2_c2277c_instruction(cpu, address);
    return execute_miscellaneous_learn_special_psi_instruction(cpu, address);
}
bool execute_shared_page_c228(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2281D) return execute_miscellaneous_learn_special_psi_instruction(cpu, address);
    if (address < 0xC228B7) return execute_miscellaneous_atm_deposit_instruction(cpu, address);
    if (address < 0xC228F8) return execute_miscellaneous_atm_withdraw_instruction(cpu, address);
    return execute_miscellaneous_party_add_char_instruction(cpu, address);
}
bool execute_shared_page_c229(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC229BB) return execute_miscellaneous_party_add_char_instruction(cpu, address);
    return execute_miscellaneous_party_remove_char_instruction(cpu, address);
}
bool execute_shared_page_c22a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC22A2C) return execute_miscellaneous_party_remove_char_instruction(cpu, address);
    if (address < 0xC22A3A) return execute_miscellaneous_save_game_instruction(cpu, address);
    return execute_unresolved_c2_c22a3a_instruction(cpu, address);
}
bool execute_shared_page_c22f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC22F38) return execute_unresolved_c2_c22a3a_instruction(cpu, address);
    return execute_battle_init_scripted_instruction(cpu, address);
}
bool execute_shared_page_c230(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC23008) return execute_battle_init_scripted_instruction(cpu, address);
    if (address < 0xC2307B) return execute_unresolved_c2_c23008_instruction(cpu, address);
    if (address < 0xC230F3) return execute_unresolved_c2_c2307b_instruction(cpu, address);
    return execute_miscellaneous_set_teleport_box_destination_instruction(cpu, address);
}
bool execute_shared_page_c231(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2311B) return execute_miscellaneous_set_teleport_box_destination_instruction(cpu, address);
    return execute_battle_menu_handler_instruction(cpu, address);
}
bool execute_shared_page_c23b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC23B66) return execute_battle_menu_handler_instruction(cpu, address);
    if (address < 0xC23BCF) return execute_text_copy_enemy_name_instruction(cpu, address);
    return execute_text_fix_attacker_name_instruction(cpu, address);
}
bool execute_shared_page_c23d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC23D05) return execute_text_fix_attacker_name_instruction(cpu, address);
    return execute_text_fix_target_name_instruction(cpu, address);
}
bool execute_shared_page_c23e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC23E32) return execute_text_fix_target_name_instruction(cpu, address);
    if (address < 0xC23E8A) return execute_unresolved_c2_c23e32_instruction(cpu, address);
    return execute_unresolved_c2_c23e8a_instruction(cpu, address);
}
bool execute_shared_page_c23f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC23F6C) return execute_unresolved_c2_c23e8a_instruction(cpu, address);
    if (address < 0xC23FEA) return execute_battle_find_targettable_npc_instruction(cpu, address);
    return execute_battle_get_shield_targetting_instruction(cpu, address);
}
bool execute_shared_page_c240(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC24009) return execute_battle_get_shield_targetting_instruction(cpu, address);
    if (address < 0xC240A4) return execute_battle_feeling_strange_retargetting_instruction(cpu, address);
    return execute_unresolved_c2_c240a4_instruction(cpu, address);
}
bool execute_shared_page_c241(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2416F) return execute_unresolved_c2_c240a4_instruction(cpu, address);
    if (address < 0xC241DC) return execute_battle_remove_status_untargettable_targets_instruction(cpu, address);
    return execute_battle_find_stealable_items_instruction(cpu, address);
}
bool execute_shared_page_c243(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC24316) return execute_battle_find_stealable_items_instruction(cpu, address);
    if (address < 0xC24348) return execute_battle_select_stealable_item_instruction(cpu, address);
    if (address < 0xC2437E) return execute_unresolved_c2_c24348_instruction(cpu, address);
    return execute_unresolved_c2_c2437e_instruction(cpu, address);
}
bool execute_shared_page_c244(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC24434) return execute_unresolved_c2_c2437e_instruction(cpu, address);
    if (address < 0xC24477) return execute_unresolved_c2_c24434_instruction(cpu, address);
    return execute_battle_choose_target_instruction(cpu, address);
}
bool execute_shared_page_c247(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC24703) return execute_battle_choose_target_instruction(cpu, address);
    return execute_unresolved_c2_c24703_instruction(cpu, address);
}
bool execute_shared_page_c248(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC24821) return execute_unresolved_c2_c24703_instruction(cpu, address);
    return execute_battle_main_battle_routine_instruction(cpu, address);
}
bool execute_shared_page_c261(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26189) return execute_battle_main_battle_routine_instruction(cpu, address);
    if (address < 0xC261BD) return execute_unresolved_c2_c26189_instruction(cpu, address);
    return execute_battle_instant_win_handler_instruction(cpu, address);
}
bool execute_shared_page_c265(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2654C) return execute_battle_instant_win_handler_instruction(cpu, address);
    return execute_unresolved_c2_c2654c_instruction(cpu, address);
}
bool execute_shared_page_c266(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26634) return execute_unresolved_c2_c2654c_instruction(cpu, address);
    return execute_battle_instant_win_check_instruction(cpu, address);
}
bool execute_shared_page_c269(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2698B) return execute_battle_instant_win_check_instruction(cpu, address);
    if (address < 0xC269A8) return execute_battle_get_battle_action_type_instruction(cpu, address);
    if (address < 0xC269BE) return execute_battle_get_enemy_type_instruction(cpu, address);
    if (address < 0xC269DE) return execute_system_wait_instruction(cpu, address);
    if (address < 0xC269EF) return execute_unresolved_c2_c269de_instruction(cpu, address);
    if (address < 0xC269F8) return execute_system_math_rand_long_instruction(cpu, address);
    return execute_system_math_truncate_16_to_8_instruction(cpu, address);
}
bool execute_shared_page_c26a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26A2D) return execute_system_math_truncate_16_to_8_instruction(cpu, address);
    if (address < 0xC26A44) return execute_system_math_rand_limit_instruction(cpu, address);
    if (address < 0xC26AFD) return execute_battle_50_percent_variance_instruction(cpu, address);
    return execute_battle_25_percent_variance_instruction(cpu, address);
}
bool execute_shared_page_c26b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26BB8) return execute_battle_25_percent_variance_instruction(cpu, address);
    if (address < 0xC26BDB) return execute_battle_success_255_instruction(cpu, address);
    if (address < 0xC26BFB) return execute_battle_success_500_instruction(cpu, address);
    return execute_battle_target_allies_instruction(cpu, address);
}
bool execute_shared_page_c26c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26C82) return execute_battle_target_allies_instruction(cpu, address);
    return execute_battle_target_all_enemies_instruction(cpu, address);
}
bool execute_shared_page_c26d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26D04) return execute_battle_target_all_enemies_instruction(cpu, address);
    return execute_battle_target_row_instruction(cpu, address);
}
bool execute_shared_page_c26e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26E77) return execute_battle_target_all_instruction(cpu, address);
    if (address < 0xC26EF8) return execute_battle_remove_npc_targetting_instruction(cpu, address);
    return execute_battle_random_targetting_instruction(cpu, address);
}
bool execute_shared_page_c26f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26FDC) return execute_battle_random_targetting_instruction(cpu, address);
    return execute_battle_target_battler_instruction(cpu, address);
}
bool execute_shared_page_c270(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC27029) return execute_battle_target_battler_instruction(cpu, address);
    if (address < 0xC27089) return execute_battle_is_char_targetted_instruction(cpu, address);
    if (address < 0xC270E4) return execute_battle_remove_target_instruction(cpu, address);
    return execute_battle_remove_dead_targetting_instruction(cpu, address);
}
bool execute_shared_page_c271(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC27126) return execute_battle_remove_dead_targetting_instruction(cpu, address);
    if (address < 0xC27191) return execute_battle_set_hp_instruction(cpu, address);
    if (address < 0xC271F0) return execute_battle_set_pp_instruction(cpu, address);
    return execute_battle_reduce_hp_instruction(cpu, address);
}
bool execute_shared_page_c272(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2721D) return execute_battle_reduce_hp_instruction(cpu, address);
    if (address < 0xC2724A) return execute_battle_reduce_pp_instruction(cpu, address);
    if (address < 0xC27294) return execute_battle_inflict_status_instruction(cpu, address);
    return execute_battle_recover_hp_instruction(cpu, address);
}
bool execute_shared_page_c273(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC27318) return execute_battle_recover_hp_instruction(cpu, address);
    if (address < 0xC27397) return execute_battle_recover_pp_instruction(cpu, address);
    return execute_battle_revive_target_instruction(cpu, address);
}
bool execute_shared_page_c275(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC27550) return execute_battle_revive_target_instruction(cpu, address);
    return execute_battle_ko_target_instruction(cpu, address);
}
bool execute_shared_page_c27c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC27C96) return execute_battle_ko_target_instruction(cpu, address);
    if (address < 0xC27CAF) return execute_battle_success_luck80_instruction(cpu, address);
    if (address < 0xC27CFD) return execute_battle_success_speed_instruction(cpu, address);
    return execute_battle_fail_attack_on_npcs_instruction(cpu, address);
}
bool execute_shared_page_c27d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC27D28) return execute_battle_fail_attack_on_npcs_instruction(cpu, address);
    if (address < 0xC27D82) return execute_battle_increase_offense_16th_instruction(cpu, address);
    if (address < 0xC27DDC) return execute_battle_increase_defense_16th_instruction(cpu, address);
    return execute_battle_decrease_offense_16th_instruction(cpu, address);
}
bool execute_shared_page_c27e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC27E33) return execute_battle_decrease_offense_16th_instruction(cpu, address);
    if (address < 0xC27E8A) return execute_battle_decrease_defense_16th_instruction(cpu, address);
    if (address < 0xC27EAF) return execute_battle_swap_attacker_with_target_instruction(cpu, address);
    return execute_battle_calc_damage_instruction(cpu, address);
}
bool execute_shared_page_c281(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28125) return execute_battle_calc_damage_instruction(cpu, address);
    return execute_battle_calc_damage_reduction_instruction(cpu, address);
}
bool execute_shared_page_c282(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC282F8) return execute_battle_calc_damage_reduction_instruction(cpu, address);
    return execute_battle_miss_calc_instruction(cpu, address);
}
bool execute_shared_page_c283(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC283F8) return execute_battle_miss_calc_instruction(cpu, address);
    return execute_battle_smaaaash_instruction(cpu, address);
}
bool execute_shared_page_c284(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC284AD) return execute_battle_smaaaash_instruction(cpu, address);
    return execute_battle_determine_dodge_instruction(cpu, address);
}
bool execute_shared_page_c285(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28523) return execute_battle_determine_dodge_instruction(cpu, address);
    if (address < 0xC2856B) return execute_battle_actions_level_2_attack_instruction(cpu, address);
    if (address < 0xC2859F) return execute_battle_heal_strangeness_instruction(cpu, address);
    if (address < 0xC285DA) return execute_battle_actions_bash_instruction(cpu, address);
    return execute_battle_actions_level_4_attack_instruction(cpu, address);
}
bool execute_shared_page_c286(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28651) return execute_battle_actions_level_4_attack_instruction(cpu, address);
    if (address < 0xC286CB) return execute_battle_actions_level_3_attack_instruction(cpu, address);
    return execute_battle_actions_level_1_attack_instruction(cpu, address);
}
bool execute_shared_page_c287(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28740) return execute_battle_actions_level_1_attack_instruction(cpu, address);
    if (address < 0xC28770) return execute_battle_actions_shoot_instruction(cpu, address);
    return execute_battle_actions_spy_instruction(cpu, address);
}
bool execute_shared_page_c288(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2889B) return execute_battle_actions_spy_instruction(cpu, address);
    if (address < 0xC2889E) return execute_battle_actions_null01_instruction(cpu, address);
    if (address < 0xC288EB) return execute_battle_actions_steal_instruction(cpu, address);
    return execute_battle_actions_freeze_time_instruction(cpu, address);
}
bool execute_shared_page_c289(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC289CE) return execute_battle_actions_freeze_time_instruction(cpu, address);
    return execute_battle_actions_diamondize_instruction(cpu, address);
}
bool execute_shared_page_c28a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28A92) return execute_battle_actions_diamondize_instruction(cpu, address);
    if (address < 0xC28AEB) return execute_battle_actions_paralyze_instruction(cpu, address);
    return execute_battle_actions_nauseate_instruction(cpu, address);
}
bool execute_shared_page_c28b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28B2C) return execute_battle_actions_nauseate_instruction(cpu, address);
    if (address < 0xC28B6D) return execute_battle_actions_poison_instruction(cpu, address);
    if (address < 0xC28BBE) return execute_battle_actions_cold_instruction(cpu, address);
    if (address < 0xC28BFD) return execute_battle_actions_mushroomize_instruction(cpu, address);
    return execute_battle_actions_possess_instruction(cpu, address);
}
bool execute_shared_page_c28c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28C69) return execute_battle_actions_possess_instruction(cpu, address);
    if (address < 0xC28CB8) return execute_battle_actions_crying_instruction(cpu, address);
    if (address < 0xC28CF1) return execute_battle_actions_immobilize_instruction(cpu, address);
    return execute_battle_actions_solidify_instruction(cpu, address);
}
bool execute_shared_page_c28d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28D3A) return execute_battle_actions_solidify_instruction(cpu, address);
    if (address < 0xC28D41) return execute_battle_actions_brainshock_alpha_redirect_instruction(cpu, address);
    if (address < 0xC28D5A) return execute_battle_success_luck40_instruction(cpu, address);
    if (address < 0xC28DBB) return execute_battle_actions_distract_instruction(cpu, address);
    if (address < 0xC28DFC) return execute_battle_actions_feel_strange_instruction(cpu, address);
    return execute_battle_actions_crying2_instruction(cpu, address);
}
bool execute_shared_page_c28e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28E3B) return execute_battle_actions_crying2_instruction(cpu, address);
    if (address < 0xC28E42) return execute_battle_actions_hypnosis_alpha_redirect_instruction(cpu, address);
    if (address < 0xC28EAE) return execute_battle_actions_reduce_pp_instruction(cpu, address);
    return execute_battle_actions_cut_guts_instruction(cpu, address);
}
bool execute_shared_page_c28f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28F21) return execute_battle_actions_cut_guts_instruction(cpu, address);
    if (address < 0xC28F97) return execute_battle_actions_reduce_offense_defense_instruction(cpu, address);
    if (address < 0xC28FF9) return execute_battle_actions_level_2_attack_poison_instruction(cpu, address);
    return execute_battle_actions_bash_twice_instruction(cpu, address);
}
bool execute_shared_page_c290(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29004) return execute_battle_actions_bash_twice_instruction(cpu, address);
    if (address < 0xC2900B) return execute_battle_actions_null01_redirect_instruction(cpu, address);
    if (address < 0xC2902C) return execute_battle_actions_350_fire_damage_instruction(cpu, address);
    if (address < 0xC29033) return execute_battle_actions_level_3_attack_copy_instruction(cpu, address);
    if (address < 0xC29036) return execute_battle_actions_null02_instruction(cpu, address);
    if (address < 0xC29039) return execute_battle_actions_null03_instruction(cpu, address);
    if (address < 0xC2903C) return execute_battle_actions_null04_instruction(cpu, address);
    if (address < 0xC2903F) return execute_battle_actions_null05_instruction(cpu, address);
    if (address < 0xC29042) return execute_battle_actions_null06_instruction(cpu, address);
    if (address < 0xC29045) return execute_battle_actions_null07_instruction(cpu, address);
    if (address < 0xC29048) return execute_battle_actions_null08_instruction(cpu, address);
    if (address < 0xC2904B) return execute_battle_actions_null09_instruction(cpu, address);
    if (address < 0xC2904E) return execute_battle_actions_null10_instruction(cpu, address);
    if (address < 0xC29051) return execute_battle_actions_null11_instruction(cpu, address);
    if (address < 0xC290C6) return execute_battle_actions_neutralize_instruction(cpu, address);
    return execute_unresolved_c2_c290c6_instruction(cpu, address);
}
bool execute_shared_page_c291(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2916E) return execute_unresolved_c2_c290c6_instruction(cpu, address);
    return execute_battle_actions_level_2_attack_diamondize_instruction(cpu, address);
}
bool execute_shared_page_c292(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29254) return execute_battle_actions_level_2_attack_diamondize_instruction(cpu, address);
    if (address < 0xC29298) return execute_battle_actions_reduce_offense_instruction(cpu, address);
    if (address < 0xC292EB) return execute_battle_actions_clumsy_robot_death_instruction(cpu, address);
    if (address < 0xC292EE) return execute_battle_actions_enemy_extend_instruction(cpu, address);
    return execute_battle_actions_master_barf_death_instruction(cpu, address);
}
bool execute_shared_page_c294(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2941D) return execute_battle_actions_master_barf_death_instruction(cpu, address);
    if (address < 0xC294CE) return execute_battle_psi_shield_nullify_instruction(cpu, address);
    return execute_battle_weaken_shield_instruction(cpu, address);
}
bool execute_shared_page_c295(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29516) return execute_battle_weaken_shield_instruction(cpu, address);
    if (address < 0xC29556) return execute_battle_actions_psi_rockin_common_instruction(cpu, address);
    if (address < 0xC2955F) return execute_battle_actions_psi_rockin_alpha_instruction(cpu, address);
    if (address < 0xC29568) return execute_battle_actions_psi_rockin_beta_instruction(cpu, address);
    if (address < 0xC29571) return execute_battle_actions_psi_rockin_gamma_instruction(cpu, address);
    if (address < 0xC2957A) return execute_battle_actions_psi_rockin_omega_instruction(cpu, address);
    if (address < 0xC295AB) return execute_battle_actions_psi_fire_common_instruction(cpu, address);
    if (address < 0xC295B4) return execute_battle_actions_psi_fire_alpha_instruction(cpu, address);
    if (address < 0xC295BD) return execute_battle_actions_psi_fire_beta_instruction(cpu, address);
    if (address < 0xC295C6) return execute_battle_actions_psi_fire_gamma_instruction(cpu, address);
    if (address < 0xC295CF) return execute_battle_actions_psi_fire_omega_instruction(cpu, address);
    return execute_battle_actions_psi_freeze_common_instruction(cpu, address);
}
bool execute_shared_page_c296(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29647) return execute_battle_actions_psi_freeze_common_instruction(cpu, address);
    if (address < 0xC29650) return execute_battle_actions_psi_freeze_alpha_instruction(cpu, address);
    if (address < 0xC29659) return execute_battle_actions_psi_freeze_beta_instruction(cpu, address);
    if (address < 0xC29662) return execute_battle_actions_psi_freeze_gamma_instruction(cpu, address);
    if (address < 0xC2966B) return execute_battle_actions_psi_freeze_omega_instruction(cpu, address);
    return execute_battle_actions_psi_thunder_common_instruction(cpu, address);
}
bool execute_shared_page_c298(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29871) return execute_battle_actions_psi_thunder_common_instruction(cpu, address);
    if (address < 0xC2987D) return execute_battle_actions_psi_thunder_alpha_instruction(cpu, address);
    if (address < 0xC29889) return execute_battle_actions_psi_thunder_beta_instruction(cpu, address);
    if (address < 0xC29895) return execute_battle_actions_psi_thunder_gamma_instruction(cpu, address);
    if (address < 0xC298A1) return execute_battle_actions_psi_thunder_omega_instruction(cpu, address);
    if (address < 0xC298DE) return execute_battle_actions_psi_flash_immunity_test_instruction(cpu, address);
    return execute_battle_actions_psi_flash_feeling_strange_instruction(cpu, address);
}
bool execute_shared_page_c299(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29917) return execute_battle_actions_psi_flash_feeling_strange_instruction(cpu, address);
    if (address < 0xC29950) return execute_battle_actions_psi_flash_paralysis_instruction(cpu, address);
    if (address < 0xC29987) return execute_battle_actions_psi_flash_crying_instruction(cpu, address);
    if (address < 0xC299AE) return execute_battle_actions_psi_flash_alpha_instruction(cpu, address);
    if (address < 0xC299EF) return execute_battle_actions_psi_flash_beta_instruction(cpu, address);
    return execute_battle_actions_psi_flash_gamma_instruction(cpu, address);
}
bool execute_shared_page_c29a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29A35) return execute_battle_actions_psi_flash_gamma_instruction(cpu, address);
    if (address < 0xC29A80) return execute_battle_actions_psi_flash_omega_instruction(cpu, address);
    if (address < 0xC29AA6) return execute_battle_actions_psi_starstorm_common_instruction(cpu, address);
    if (address < 0xC29AAF) return execute_battle_actions_psi_starstorm_alpha_instruction(cpu, address);
    if (address < 0xC29AB8) return execute_battle_actions_psi_starstorm_omega_instruction(cpu, address);
    if (address < 0xC29AC6) return execute_battle_actions_lifeup_common_instruction(cpu, address);
    if (address < 0xC29ACF) return execute_battle_actions_lifeup_alpha_instruction(cpu, address);
    if (address < 0xC29AD8) return execute_battle_actions_lifeup_beta_instruction(cpu, address);
    if (address < 0xC29AE1) return execute_battle_actions_lifeup_gamma_instruction(cpu, address);
    if (address < 0xC29AEA) return execute_battle_actions_lifeup_omega_instruction(cpu, address);
    return execute_battle_actions_healing_alpha_instruction(cpu, address);
}
bool execute_shared_page_c29b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29B7A) return execute_battle_actions_healing_alpha_instruction(cpu, address);
    return execute_battle_actions_healing_beta_instruction(cpu, address);
}
bool execute_shared_page_c29c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29C2C) return execute_battle_actions_healing_beta_instruction(cpu, address);
    if (address < 0xC29CB8) return execute_battle_actions_healing_gamma_instruction(cpu, address);
    if (address < 0xC29CDC) return execute_battle_actions_healing_omega_instruction(cpu, address);
    return execute_battle_actions_shield_common_instruction(cpu, address);
}
bool execute_shared_page_c29d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29D44) return execute_battle_actions_shield_common_instruction(cpu, address);
    if (address < 0xC29D7A) return execute_battle_actions_shield_alpha_instruction(cpu, address);
    if (address < 0xC29D81) return execute_battle_actions_shield_alpha_redirect_instruction(cpu, address);
    if (address < 0xC29DB7) return execute_battle_actions_shield_beta_instruction(cpu, address);
    if (address < 0xC29DBE) return execute_battle_actions_shield_beta_redirect_instruction(cpu, address);
    if (address < 0xC29DF4) return execute_battle_actions_psi_shield_alpha_instruction(cpu, address);
    if (address < 0xC29DFB) return execute_battle_actions_psi_shield_alpha_redirect_instruction(cpu, address);
    return execute_battle_actions_psi_shield_beta_instruction(cpu, address);
}
bool execute_shared_page_c29e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29E31) return execute_battle_actions_psi_shield_beta_instruction(cpu, address);
    if (address < 0xC29E38) return execute_battle_actions_psi_shield_beta_redirect_instruction(cpu, address);
    if (address < 0xC29E7F) return execute_battle_actions_offense_up_alpha_instruction(cpu, address);
    if (address < 0xC29E86) return execute_battle_actions_offense_up_alpha_redirect_instruction(cpu, address);
    if (address < 0xC29EFF) return execute_battle_actions_defense_down_alpha_instruction(cpu, address);
    return execute_battle_actions_defense_down_alpha_redirect_instruction(cpu, address);
}
bool execute_shared_page_c29f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29F06) return execute_battle_actions_defense_down_alpha_redirect_instruction(cpu, address);
    if (address < 0xC29F57) return execute_battle_actions_hypnosis_alpha_instruction(cpu, address);
    if (address < 0xC29F5E) return execute_battle_actions_hypnosis_alpha_redirect_copy_instruction(cpu, address);
    if (address < 0xC29FE1) return execute_battle_actions_magnet_alpha_instruction(cpu, address);
    if (address < 0xC29FFE) return execute_battle_actions_magnet_omega_instruction(cpu, address);
    return execute_battle_actions_paralysis_alpha_instruction(cpu, address);
}
bool execute_shared_page_c2a0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A04F) return execute_battle_actions_paralysis_alpha_instruction(cpu, address);
    if (address < 0xC2A056) return execute_battle_actions_paralysis_alpha_redirect_instruction(cpu, address);
    if (address < 0xC2A0A7) return execute_battle_actions_brainshock_alpha_instruction(cpu, address);
    if (address < 0xC2A0AE) return execute_battle_actions_brainshock_alpha_redirect_copy_instruction(cpu, address);
    if (address < 0xC2A0BF) return execute_battle_actions_hp_recovery_1d4_instruction(cpu, address);
    if (address < 0xC2A0CF) return execute_battle_actions_hp_recovery_50_instruction(cpu, address);
    if (address < 0xC2A0DF) return execute_battle_actions_hp_recovery_200_instruction(cpu, address);
    if (address < 0xC2A0EF) return execute_battle_actions_pp_recovery_20_instruction(cpu, address);
    if (address < 0xC2A0FF) return execute_battle_actions_pp_recovery_80_instruction(cpu, address);
    return execute_battle_actions_iq_up_1d4_instruction(cpu, address);
}
bool execute_shared_page_c2a1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A14B) return execute_battle_actions_iq_up_1d4_instruction(cpu, address);
    if (address < 0xC2A193) return execute_battle_actions_guts_up_1d4_instruction(cpu, address);
    if (address < 0xC2A1DB) return execute_battle_actions_speed_up_1d4_instruction(cpu, address);
    return execute_battle_actions_vitality_up_1d4_instruction(cpu, address);
}
bool execute_shared_page_c2a2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A227) return execute_battle_actions_vitality_up_1d4_instruction(cpu, address);
    if (address < 0xC2A26F) return execute_battle_actions_luck_up_1d4_instruction(cpu, address);
    if (address < 0xC2A27F) return execute_battle_actions_hp_recovery_300_instruction(cpu, address);
    return execute_battle_actions_random_stat_up_1d4_instruction(cpu, address);
}
bool execute_shared_page_c2a3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A360) return execute_battle_actions_random_stat_up_1d4_instruction(cpu, address);
    if (address < 0xC2A370) return execute_battle_actions_hp_recovery_10_instruction(cpu, address);
    if (address < 0xC2A380) return execute_battle_actions_hp_recovery_100_instruction(cpu, address);
    if (address < 0xC2A39D) return execute_battle_actions_hp_recovery_10000_instruction(cpu, address);
    if (address < 0xC2A3D1) return execute_battle_actions_heal_poison_instruction(cpu, address);
    return execute_battle_actions_counter_psi_instruction(cpu, address);
}
bool execute_shared_page_c2a4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A422) return execute_battle_actions_counter_psi_instruction(cpu, address);
    if (address < 0xC2A46B) return execute_battle_actions_shield_killer_instruction(cpu, address);
    return execute_battle_actions_hp_sucker_instruction(cpu, address);
}
bool execute_shared_page_c2a5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A507) return execute_battle_actions_hp_sucker_instruction(cpu, address);
    if (address < 0xC2A50E) return execute_battle_actions_hungry_hp_sucker_instruction(cpu, address);
    if (address < 0xC2A57A) return execute_battle_actions_mummy_wrap_instruction(cpu, address);
    if (address < 0xC2A5D1) return execute_battle_actions_bottle_rocket_common_instruction(cpu, address);
    if (address < 0xC2A5DA) return execute_battle_actions_bottle_rocket_instruction(cpu, address);
    if (address < 0xC2A5E3) return execute_battle_actions_big_bottle_rocket_instruction(cpu, address);
    if (address < 0xC2A5EC) return execute_battle_actions_multi_bottle_rocket_instruction(cpu, address);
    return execute_battle_actions_handbag_strap_instruction(cpu, address);
}
bool execute_shared_page_c2a6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A658) return execute_battle_actions_handbag_strap_instruction(cpu, address);
    return execute_battle_actions_bomb_common_instruction(cpu, address);
}
bool execute_shared_page_c2a8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A818) return execute_battle_actions_bomb_common_instruction(cpu, address);
    if (address < 0xC2A821) return execute_battle_actions_bomb_instruction(cpu, address);
    if (address < 0xC2A82A) return execute_battle_actions_super_bomb_instruction(cpu, address);
    if (address < 0xC2A86B) return execute_battle_actions_solidify_2_instruction(cpu, address);
    if (address < 0xC2A89D) return execute_battle_actions_yogurt_dispenser_instruction(cpu, address);
    return execute_battle_actions_snake_instruction(cpu, address);
}
bool execute_shared_page_c2a9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A902) return execute_battle_actions_snake_instruction(cpu, address);
    if (address < 0xC2A953) return execute_battle_actions_inflict_solidification_instruction(cpu, address);
    if (address < 0xC2A99C) return execute_battle_actions_inflict_poison_instruction(cpu, address);
    if (address < 0xC2A9BD) return execute_battle_actions_bag_of_dragonite_instruction(cpu, address);
    return execute_battle_actions_insect_spray_common_instruction(cpu, address);
}
bool execute_shared_page_c2aa(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2AA0C) return execute_battle_actions_insect_spray_common_instruction(cpu, address);
    if (address < 0xC2AA15) return execute_battle_actions_insecticide_spray_instruction(cpu, address);
    if (address < 0xC2AA1E) return execute_battle_actions_xterminator_spray_instruction(cpu, address);
    if (address < 0xC2AA6D) return execute_battle_actions_rust_promoter_common_instruction(cpu, address);
    if (address < 0xC2AA76) return execute_battle_actions_rust_promoter_instruction(cpu, address);
    if (address < 0xC2AA7F) return execute_battle_actions_rust_promoter_dx_instruction(cpu, address);
    if (address < 0xC2AAC6) return execute_battle_actions_sudden_guts_pill_instruction(cpu, address);
    return execute_battle_actions_defense_spray_instruction(cpu, address);
}
bool execute_shared_page_c2ab(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2AB0D) return execute_battle_actions_defense_spray_instruction(cpu, address);
    if (address < 0xC2AB14) return execute_battle_actions_defense_shower_instruction(cpu, address);
    if (address < 0xC2AB71) return execute_battle_boss_battle_check_instruction(cpu, address);
    return execute_battle_actions_teleport_box_instruction(cpu, address);
}
bool execute_shared_page_c2ac(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2AC2A) return execute_battle_actions_teleport_box_instruction(cpu, address);
    if (address < 0xC2AC3E) return execute_battle_actions_pray_subtle_instruction(cpu, address);
    if (address < 0xC2AC51) return execute_battle_actions_pray_warm_instruction(cpu, address);
    if (address < 0xC2AC68) return execute_battle_actions_pray_golden_instruction(cpu, address);
    if (address < 0xC2AC7B) return execute_battle_actions_pray_mysterious_instruction(cpu, address);
    if (address < 0xC2AC99) return execute_battle_actions_pray_rainbow_instruction(cpu, address);
    if (address < 0xC2ACDA) return execute_battle_actions_pray_aroma_instruction(cpu, address);
    return execute_battle_actions_pray_rending_sound_instruction(cpu, address);
}
bool execute_shared_page_c2ad(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2AD1B) return execute_battle_actions_pray_rending_sound_instruction(cpu, address);
    return execute_battle_actions_pray_instruction(cpu, address);
}
bool execute_shared_page_c2af(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2AF1F) return execute_battle_actions_pray_instruction(cpu, address);
    return execute_battle_copy_mirror_data_instruction(cpu, address);
}
bool execute_shared_page_c2b0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2B0A1) return execute_battle_copy_mirror_data_instruction(cpu, address);
    return execute_battle_actions_mirror_instruction(cpu, address);
}
bool execute_shared_page_c2b1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2B172) return execute_battle_actions_mirror_instruction(cpu, address);
    return execute_battle_apply_condiment_instruction(cpu, address);
}
bool execute_shared_page_c2b2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2B27D) return execute_battle_apply_condiment_instruction(cpu, address);
    return execute_battle_eat_food_instruction(cpu, address);
}
bool execute_shared_page_c2b6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2B608) return execute_battle_eat_food_instruction(cpu, address);
    if (address < 0xC2B639) return execute_battle_calc_psi_damage_modifiers_instruction(cpu, address);
    if (address < 0xC2B66A) return execute_battle_calc_psi_resistance_modifiers_instruction(cpu, address);
    if (address < 0xC2B6EB) return execute_unresolved_c2_c2b66a_instruction(cpu, address);
    return execute_battle_init_enemy_stats_instruction(cpu, address);
}
bool execute_shared_page_c2b9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2B930) return execute_battle_init_enemy_stats_instruction(cpu, address);
    return execute_battle_init_player_stats_instruction(cpu, address);
}
bool execute_shared_page_c2ba(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2BAC5) return execute_battle_init_player_stats_instruction(cpu, address);
    return execute_battle_count_chars_instruction(cpu, address);
}
bool execute_shared_page_c2bb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2BB18) return execute_battle_count_chars_instruction(cpu, address);
    return execute_battle_check_dead_players_instruction(cpu, address);
}
bool execute_shared_page_c2bc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2BC5C) return execute_battle_check_dead_players_instruction(cpu, address);
    if (address < 0xC2BCB9) return execute_battle_reset_post_battle_stats_instruction(cpu, address);
    if (address < 0xC2BCE6) return execute_unresolved_c2_c2bcb9_instruction(cpu, address);
    return execute_battle_lose_hp_status_instruction(cpu, address);
}
bool execute_shared_page_c2bd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2BD13) return execute_battle_lose_hp_status_instruction(cpu, address);
    if (address < 0xC2BD5E) return execute_unresolved_c2_c2bd13_instruction(cpu, address);
    return execute_battle_call_for_help_common_instruction(cpu, address);
}
bool execute_shared_page_c2c1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C13C) return execute_battle_call_for_help_common_instruction(cpu, address);
    if (address < 0xC2C145) return execute_battle_actions_sow_seeds_instruction(cpu, address);
    if (address < 0xC2C14E) return execute_battle_actions_call_for_help_instruction(cpu, address);
    if (address < 0xC2C1BD) return execute_battle_actions_rainbow_of_colours_instruction(cpu, address);
    return execute_battle_actions_fly_honey_instruction(cpu, address);
}
bool execute_shared_page_c2c2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C21F) return execute_battle_actions_fly_honey_instruction(cpu, address);
    return execute_unresolved_c2_c2c21f_instruction(cpu, address);
}
bool execute_shared_page_c2c3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C32C) return execute_unresolved_c2_c2c21f_instruction(cpu, address);
    if (address < 0xC2C37A) return execute_unresolved_c2_c2c32c_instruction(cpu, address);
    if (address < 0xC2C3E2) return execute_unresolved_c2_c2c37a_instruction(cpu, address);
    return execute_battle_giygas_hurt_prayer_instruction(cpu, address);
}
bool execute_shared_page_c2c4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C41F) return execute_battle_giygas_hurt_prayer_instruction(cpu, address);
    if (address < 0xC2C4C0) return execute_unresolved_c2_c2c41f_instruction(cpu, address);
    return execute_battle_actions_pokey_speech_1_instruction(cpu, address);
}
bool execute_shared_page_c2c5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C513) return execute_battle_actions_pokey_speech_1_instruction(cpu, address);
    if (address < 0xC2C516) return execute_battle_actions_null12_instruction(cpu, address);
    if (address < 0xC2C572) return execute_battle_actions_pokey_speech_2_instruction(cpu, address);
    if (address < 0xC2C5D1) return execute_battle_actions_giygas_prayer_1_instruction(cpu, address);
    if (address < 0xC2C5FA) return execute_battle_actions_giygas_prayer_2_instruction(cpu, address);
    return execute_battle_actions_giygas_prayer_3_instruction(cpu, address);
}
bool execute_shared_page_c2c6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C623) return execute_battle_actions_giygas_prayer_3_instruction(cpu, address);
    if (address < 0xC2C64C) return execute_battle_actions_giygas_prayer_4_instruction(cpu, address);
    if (address < 0xC2C675) return execute_battle_actions_giygas_prayer_5_instruction(cpu, address);
    if (address < 0xC2C69E) return execute_battle_actions_giygas_prayer_6_instruction(cpu, address);
    if (address < 0xC2C6D0) return execute_battle_actions_giygas_prayer_7_instruction(cpu, address);
    if (address < 0xC2C6F0) return execute_battle_actions_giygas_prayer_8_instruction(cpu, address);
    return execute_battle_actions_giygas_prayer_9_instruction(cpu, address);
}
bool execute_shared_page_c2c8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C8C8) return execute_battle_actions_giygas_prayer_9_instruction(cpu, address);
    return execute_battle_load_enemy_battle_sprites_instruction(cpu, address);
}
bool execute_shared_page_c2c9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C92D) return execute_battle_load_enemy_battle_sprites_instruction(cpu, address);
    return execute_miscellaneous_battle_backgrounds_generate_frame_instruction(cpu, address);
}
bool execute_shared_page_c2cf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2CFE5) return execute_miscellaneous_battle_backgrounds_generate_frame_instruction(cpu, address);
    return execute_unresolved_c2_c2cfe5_instruction(cpu, address);
}
bool execute_shared_page_c2d0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2D0AC) return execute_unresolved_c2_c2cfe5_instruction(cpu, address);
    return execute_unresolved_c2_c2d0ac_instruction(cpu, address);
}
bool execute_shared_page_c2d1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2D121) return execute_unresolved_c2_c2d0ac_instruction(cpu, address);
    return execute_battle_load_battlebg_instruction(cpu, address);
}
bool execute_shared_page_c2da(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2DAE3) return execute_battle_load_battlebg_instruction(cpu, address);
    return execute_unresolved_c2_c2dae3_instruction(cpu, address);
}
bool execute_shared_page_c2db(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2DB14) return execute_unresolved_c2_c2dae3_instruction(cpu, address);
    if (address < 0xC2DB3F) return execute_unresolved_c2_c2db14_instruction(cpu, address);
    return execute_unresolved_c2_c2db3f_instruction(cpu, address);
}
bool execute_shared_page_c2de(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2DE0F) return execute_unresolved_c2_c2db3f_instruction(cpu, address);
    if (address < 0xC2DE96) return execute_unresolved_c2_c2de0f_instruction(cpu, address);
    return execute_unresolved_c2_c2de96_instruction(cpu, address);
}
bool execute_shared_page_c2df(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2DF2E) return execute_unresolved_c2_c2de96_instruction(cpu, address);
    return execute_unresolved_c2_c2df2e_instruction(cpu, address);
}
bool execute_shared_page_c2e0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2E08E) return execute_unresolved_c2_c2df2e_instruction(cpu, address);
    if (address < 0xC2E0E7) return execute_unresolved_c2_c2e08e_instruction(cpu, address);
    return execute_unresolved_c2_c2e0e7_instruction(cpu, address);
}
bool execute_shared_page_c2e1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2E116) return execute_unresolved_c2_c2e0e7_instruction(cpu, address);
    return execute_battle_show_psi_animation_instruction(cpu, address);
}
bool execute_shared_page_c2e6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2E6B6) return execute_battle_show_psi_animation_instruction(cpu, address);
    return execute_unresolved_c2_c2e6b3_instruction(cpu, address);
}
bool execute_shared_page_c2e8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2E8C4) return execute_unresolved_c2_c2e6b3_instruction(cpu, address);
    if (address < 0xC2E8E0) return execute_unresolved_c2_c2e8c4_instruction(cpu, address);
    return execute_overworld_battle_swirl_sequence_instruction(cpu, address);
}
bool execute_shared_page_c2e9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2E9C8) return execute_overworld_battle_swirl_sequence_instruction(cpu, address);
    if (address < 0xC2E9ED) return execute_unresolved_c2_c2e9c8_instruction(cpu, address);
    return execute_unresolved_c2_c2e9ed_instruction(cpu, address);
}
bool execute_shared_page_c2ea(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2EA15) return execute_unresolved_c2_c2e9ed_instruction(cpu, address);
    if (address < 0xC2EA74) return execute_unresolved_c2_c2ea15_instruction(cpu, address);
    if (address < 0xC2EAAA) return execute_unresolved_c2_c2ea74_instruction(cpu, address);
    if (address < 0xC2EACF) return execute_unresolved_c2_c2eaaa_instruction(cpu, address);
    if (address < 0xC2EAEA) return execute_unresolved_c2_c2eacf_instruction(cpu, address);
    return execute_battle_load_battle_sprite_instruction(cpu, address);
}
bool execute_shared_page_c2ee(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2EEE7) return execute_battle_load_battle_sprite_instruction(cpu, address);
    return execute_unresolved_c2_c2eee7_instruction(cpu, address);
}
bool execute_shared_page_c2ef(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2EFFD) return execute_unresolved_c2_c2eee7_instruction(cpu, address);
    return execute_battle_get_battle_sprite_width_instruction(cpu, address);
}
bool execute_shared_page_c2f0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2F04E) return execute_battle_get_battle_sprite_width_instruction(cpu, address);
    if (address < 0xC2F09F) return execute_battle_get_battle_sprite_height_instruction(cpu, address);
    if (address < 0xC2F0D1) return execute_unresolved_c2_c2f09f_instruction(cpu, address);
    return execute_unresolved_c2_c2f0d1_instruction(cpu, address);
}
bool execute_shared_page_c2f1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2F121) return execute_unresolved_c2_c2f0d1_instruction(cpu, address);
    return execute_unresolved_c2_c2f121_instruction(cpu, address);
}
bool execute_shared_page_c2f7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2F724) return execute_unresolved_c2_c2f121_instruction(cpu, address);
    return execute_battle_render_battle_sprite_row_instruction(cpu, address);
}
bool execute_shared_page_c2f8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2F8F9) return execute_battle_render_battle_sprite_row_instruction(cpu, address);
    return execute_unresolved_c2_c2f8f9_instruction(cpu, address);
}
bool execute_shared_page_c2f9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2F917) return execute_unresolved_c2_c2f8f9_instruction(cpu, address);
    return execute_unresolved_c2_c2f917_instruction(cpu, address);
}
bool execute_shared_page_c2fa(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2FAD2) return execute_unresolved_c2_c2f917_instruction(cpu, address);
    if (address < 0xC2FAD8) return execute_unresolved_c2_c2fad2_instruction(cpu, address);
    if (address < 0xC2FADE) return execute_unresolved_c2_c2fad8_instruction(cpu, address);
    return execute_unresolved_c2_c2fade_instruction(cpu, address);
}
bool execute_shared_page_c2fb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2FB35) return execute_unresolved_c2_c2fade_instruction(cpu, address);
    return execute_unresolved_c2_c2fb35_instruction(cpu, address);
}
bool execute_shared_page_c2fc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2FCA6) return execute_unresolved_c2_c2fb35_instruction(cpu, address);
    return execute_unresolved_c2_c2fca6_instruction(cpu, address);
}
bool execute_shared_page_c2fd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2FD99) return execute_unresolved_c2_c2fca6_instruction(cpu, address);
    return execute_unresolved_c2_c2fd99_instruction(cpu, address);
}
bool execute_shared_page_c2fe(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2FEF9) return execute_unresolved_c2_c2fd99_instruction(cpu, address);
    return execute_unresolved_c2_c2fef9_instruction(cpu, address);
}
bool execute_shared_page_c2ff(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2FF9A) return execute_unresolved_c2_c2fef9_instruction(cpu, address);
    return execute_unresolved_c2_c2ff9a_instruction(cpu, address);
}
bool execute_shared_page_c301(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC30142) return execute_system_display_antipiracy_screen_instruction(cpu, address);
    return execute_system_display_faulty_gamepak_screen_instruction(cpu, address);
}
bool execute_shared_page_c3e4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3E4CA) return execute_unresolved_c3_c3e450_instruction(cpu, address);
    if (address < 0xC3E4D4) return execute_text_clear_instant_printing_instruction(cpu, address);
    if (address < 0xC3E4E0) return execute_text_set_instant_printing_instruction(cpu, address);
    if (address < 0xC3E4EF) return execute_text_window_tick_without_instant_printing_instruction(cpu, address);
    return execute_unresolved_c3_c3e4ef_instruction(cpu, address);
}
bool execute_shared_page_c3e5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3E521) return execute_unresolved_c3_c3e4ef_instruction(cpu, address);
    return execute_text_close_window_instruction(cpu, address);
}
bool execute_shared_page_c3e6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3E6F8) return execute_text_close_window_instruction(cpu, address);
    return execute_unresolved_c3_c3e6f8_instruction(cpu, address);
}
bool execute_shared_page_c3e7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3E75D) return execute_unresolved_c3_c3e6f8_instruction(cpu, address);
    if (address < 0xC3E7E3) return execute_unresolved_c3_c3e75d_instruction(cpu, address);
    return execute_unresolved_c3_c3e7e3_instruction(cpu, address);
}
bool execute_shared_page_c3e9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3E9A0) return execute_miscellaneous_get_character_item_instruction(cpu, address);
    if (address < 0xC3E9F7) return execute_miscellaneous_check_item_equipped_instruction(cpu, address);
    return execute_unresolved_c3_c3e9f7_instruction(cpu, address);
}
bool execute_shared_page_c3ea(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3EAD0) return execute_unresolved_c3_c3e9f7_instruction(cpu, address);
    return execute_unresolved_c3_c3ead0_instruction(cpu, address);
}
bool execute_shared_page_c3eb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3EB1C) return execute_unresolved_c3_c3ead0_instruction(cpu, address);
    if (address < 0xC3EBCA) return execute_unresolved_c3_c3eb1c_instruction(cpu, address);
    return execute_unresolved_c3_c3ebca_instruction(cpu, address);
}
bool execute_shared_page_c3ec(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3EC1F) return execute_unresolved_c3_c3ebca_instruction(cpu, address);
    if (address < 0xC3EC8B) return execute_unresolved_c3_c3ec1f_instruction(cpu, address);
    return execute_unresolved_c3_c3ec8b_instruction(cpu, address);
}
bool execute_shared_page_c3ed(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3ED2C) return execute_unresolved_c3_c3ec8b_instruction(cpu, address);
    if (address < 0xC3ED98) return execute_unresolved_c3_c3ed2c_instruction(cpu, address);
    return execute_unresolved_c3_c3ed98_instruction(cpu, address);
}
bool execute_shared_page_c3ee(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3EE14) return execute_unresolved_c3_c3ed98_instruction(cpu, address);
    if (address < 0xC3EE4D) return execute_unresolved_c3_c3ee14_instruction(cpu, address);
    if (address < 0xC3EE7A) return execute_unresolved_c3_c3ee4d_instruction(cpu, address);
    return execute_unresolved_c3_c3ee7a_instruction(cpu, address);
}
bool execute_shared_page_c3ef(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3EF23) return execute_unresolved_c3_c3ee7a_instruction(cpu, address);
    return execute_unresolved_miscellaneous_null_c3ef23_instruction(cpu, address);
}
bool execute_shared_page_c3f5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3F5F9) return execute_introduction_show_title_screen_instruction(cpu, address);
    return execute_unresolved_c3_c3f5f9_instruction(cpu, address);
}
bool execute_shared_page_c3f6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3F67D) return execute_unresolved_c3_c3f5f9_instruction(cpu, address);
    return execute_unresolved_c3_c3f67d_instruction(cpu, address);
}
bool execute_shared_page_c3f7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3F705) return execute_unresolved_c3_c3f67d_instruction(cpu, address);
    if (address < 0xC3F7FB) return execute_unresolved_c3_c3f705_instruction(cpu, address);
    return execute_unresolved_c3_c3f7fb_instruction(cpu, address);
}
bool execute_shared_page_c3fa(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3FAC9) return execute_unresolved_c3_c3f981_instruction(cpu, address);
    return execute_unresolved_c3_c3fac9_instruction(cpu, address);
}
bool execute_shared_page_c3fb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3FB09) return execute_unresolved_c3_c3fac9_instruction(cpu, address);
    return execute_unresolved_c3_c3fb09_instruction(cpu, address);
}
bool execute_shared_page_c400(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC40009) return execute_unresolved_c4_c40000_instruction(cpu, address);
    if (address < 0xC40015) return execute_unresolved_c4_c40009_instruction(cpu, address);
    if (address < 0xC40023) return execute_unresolved_c4_c40015_instruction(cpu, address);
    if (address < 0xC4002F) return execute_unresolved_c4_c40023_instruction(cpu, address);
    if (address < 0xC40085) return execute_unresolved_c4_c4002f_instruction(cpu, address);
    return execute_unresolved_c4_c40085_instruction(cpu, address);
}
bool execute_shared_page_c40b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC40B75) return execute_unresolved_c4_c40b51_instruction(cpu, address);
    return execute_unresolved_c4_c40b75_instruction(cpu, address);
}
bool execute_shared_page_c41d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC41DB6) return execute_system_decompression_instruction(cpu, address);
    return execute_unresolved_c4_c41db6_instruction(cpu, address);
}
bool execute_shared_page_c41e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC41EE9) return execute_unresolved_c4_c41db6_instruction(cpu, address);
    if (address < 0xC41EF4) return execute_unresolved_c4_c41ee9_instruction(cpu, address);
    if (address < 0xC41EFF) return execute_unresolved_c4_c41ef4_instruction(cpu, address);
    return execute_unresolved_c4_c41eff_instruction(cpu, address);
}
bool execute_shared_page_c41f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC41FFF) return execute_unresolved_c4_c41eff_instruction(cpu, address);
    return execute_unresolved_c4_c41fff_instruction(cpu, address);
}
bool execute_shared_page_c424(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4240A) return execute_unresolved_c4_c423dc_instruction(cpu, address);
    if (address < 0xC42439) return execute_unresolved_c4_c4240a_instruction(cpu, address);
    if (address < 0xC4245D) return execute_unresolved_c4_c42439_instruction(cpu, address);
    if (address < 0xC4248A) return execute_unresolved_c4_c4245d_instruction(cpu, address);
    if (address < 0xC4249A) return execute_unresolved_c4_c4248a_instruction(cpu, address);
    if (address < 0xC424D1) return execute_unresolved_c4_c4249a_instruction(cpu, address);
    return execute_unresolved_c4_c424d1_instruction(cpu, address);
}
bool execute_shared_page_c425(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC42509) return execute_unresolved_c4_c424d1_instruction(cpu, address);
    if (address < 0xC42542) return execute_unresolved_c4_c42509_instruction(cpu, address);
    if (address < 0xC42569) return execute_unresolved_c4_c42542_instruction(cpu, address);
    if (address < 0xC42574) return execute_unresolved_c4_c42569_instruction(cpu, address);
    if (address < 0xC4257F) return execute_unresolved_c4_c42574_instruction(cpu, address);
    if (address < 0xC4258C) return execute_unresolved_c4_c4257f_instruction(cpu, address);
    if (address < 0xC425CC) return execute_unresolved_c4_c4258c_instruction(cpu, address);
    if (address < 0xC425F3) return execute_unresolved_c4_c425cc_instruction(cpu, address);
    if (address < 0xC425FD) return execute_unresolved_c4_c425f3_instruction(cpu, address);
    return execute_unresolved_c4_c425fd_instruction(cpu, address);
}
bool execute_shared_page_c426(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC42624) return execute_unresolved_c4_c425fd_instruction(cpu, address);
    if (address < 0xC42631) return execute_unresolved_c4_c42624_instruction(cpu, address);
    if (address < 0xC4268A) return execute_unresolved_c4_c42631_instruction(cpu, address);
    if (address < 0xC426C7) return execute_unresolved_c4_c4268a_instruction(cpu, address);
    if (address < 0xC426ED) return execute_unresolved_c4_c426c7_instruction(cpu, address);
    return execute_unresolved_c4_c426ed_instruction(cpu, address);
}
bool execute_shared_page_c428(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC42884) return execute_unresolved_c4_c4283f_instruction(cpu, address);
    if (address < 0xC428D1) return execute_unresolved_c4_c42884_instruction(cpu, address);
    if (address < 0xC428FC) return execute_unresolved_c4_c428d1_instruction(cpu, address);
    return execute_unresolved_c4_c428fc_instruction(cpu, address);
}
bool execute_shared_page_c429(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC42965) return execute_unresolved_c4_c428fc_instruction(cpu, address);
    if (address < 0xC429AE) return execute_unresolved_c4_c42965_instruction(cpu, address);
    if (address < 0xC429E8) return execute_unresolved_c4_c429ae_instruction(cpu, address);
    return execute_unresolved_c4_c429e8_instruction(cpu, address);
}
bool execute_shared_page_c432(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC432B1) return execute_overworld_velocity_store_instruction(cpu, address);
    return execute_unresolved_c4_c432b1_instruction(cpu, address);
}
bool execute_shared_page_c433(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43317) return execute_unresolved_c4_c432b1_instruction(cpu, address);
    if (address < 0xC43344) return execute_unresolved_c4_c43317_instruction(cpu, address);
    if (address < 0xC4334A) return execute_unresolved_c4_c43344_instruction(cpu, address);
    return execute_unresolved_c4_c4334a_instruction(cpu, address);
}
bool execute_shared_page_c434(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4343E) return execute_unresolved_c4_c4334a_instruction(cpu, address);
    return execute_unresolved_c4_c4343e_instruction(cpu, address);
}
bool execute_shared_page_c435(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43568) return execute_unresolved_c4_c4343e_instruction(cpu, address);
    if (address < 0xC43573) return execute_unresolved_c4_c43568_instruction(cpu, address);
    if (address < 0xC435E4) return execute_unresolved_c4_c43573_instruction(cpu, address);
    return execute_unresolved_c4_c435e4_instruction(cpu, address);
}
bool execute_shared_page_c436(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43657) return execute_unresolved_c4_c435e4_instruction(cpu, address);
    if (address < 0xC436D7) return execute_unresolved_c4_c43657_instruction(cpu, address);
    return execute_unresolved_c4_c436d7_instruction(cpu, address);
}
bool execute_shared_page_c437(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43739) return execute_unresolved_c4_c436d7_instruction(cpu, address);
    if (address < 0xC437B8) return execute_unresolved_c4_c43739_instruction(cpu, address);
    return execute_unresolved_c4_c437b8_instruction(cpu, address);
}
bool execute_shared_page_c438(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43874) return execute_unresolved_c4_c437b8_instruction(cpu, address);
    if (address < 0xC438A5) return execute_unresolved_c4_c43874_instruction(cpu, address);
    if (address < 0xC438B1) return execute_unresolved_c4_c438a5_instruction(cpu, address);
    return execute_text_print_newline_instruction(cpu, address);
}
bool execute_shared_page_c43b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43BB9) return execute_unresolved_c4_c43b15_instruction(cpu, address);
    return execute_unresolved_c4_c43bb9_instruction(cpu, address);
}
bool execute_shared_page_c43c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43CAA) return execute_unresolved_c4_c43bb9_instruction(cpu, address);
    if (address < 0xC43CD2) return execute_unresolved_c4_c43caa_instruction(cpu, address);
    return execute_unresolved_c4_c43cd2_instruction(cpu, address);
}
bool execute_shared_page_c43d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43D24) return execute_unresolved_c4_c43cd2_instruction(cpu, address);
    if (address < 0xC43D75) return execute_unresolved_c4_c43d24_instruction(cpu, address);
    if (address < 0xC43D95) return execute_unresolved_c4_c43d75_instruction(cpu, address);
    if (address < 0xC43DDB) return execute_unresolved_c4_c43d95_instruction(cpu, address);
    return execute_unresolved_c4_c43ddb_instruction(cpu, address);
}
bool execute_shared_page_c43e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43E31) return execute_unresolved_c4_c43ddb_instruction(cpu, address);
    if (address < 0xC43EF8) return execute_unresolved_c4_c43e31_instruction(cpu, address);
    return execute_unresolved_c4_c43ef8_instruction(cpu, address);
}
bool execute_shared_page_c43f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43F53) return execute_unresolved_c4_c43ef8_instruction(cpu, address);
    if (address < 0xC43F77) return execute_unresolved_c4_c43f53_instruction(cpu, address);
    return execute_unresolved_c4_c43f77_instruction(cpu, address);
}
bool execute_shared_page_c440(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4406A) return execute_unresolved_c4_c43f77_instruction(cpu, address);
    if (address < 0xC440B5) return execute_text_get_character_at_cursor_position_instruction(cpu, address);
    return execute_unresolved_c4_c440b5_instruction(cpu, address);
}
bool execute_shared_page_c441(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC441B7) return execute_unresolved_c4_c440b5_instruction(cpu, address);
    return execute_unresolved_c4_c441b7_instruction(cpu, address);
}
bool execute_shared_page_c442(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4424A) return execute_unresolved_c4_c441b7_instruction(cpu, address);
    if (address < 0xC442AC) return execute_unresolved_c4_c4424a_instruction(cpu, address);
    return execute_unresolved_c4_c442ac_instruction(cpu, address);
}
bool execute_shared_page_c444(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC444FB) return execute_unresolved_c4_c442ac_instruction(cpu, address);
    return execute_unresolved_c4_c444fb_instruction(cpu, address);
}
bool execute_shared_page_c445(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC445E1) return execute_unresolved_c4_c444fb_instruction(cpu, address);
    return execute_unresolved_c4_c445e1_instruction(cpu, address);
}
bool execute_shared_page_c447(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC447FB) return execute_unresolved_c4_c445e1_instruction(cpu, address);
    return execute_unresolved_c4_c447fb_instruction(cpu, address);
}
bool execute_shared_page_c448(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4487C) return execute_unresolved_c4_c447fb_instruction(cpu, address);
    return execute_unresolved_c4_c4487c_instruction(cpu, address);
}
bool execute_shared_page_c449(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44963) return execute_unresolved_c4_c4487c_instruction(cpu, address);
    return execute_unresolved_c4_c44963_instruction(cpu, address);
}
bool execute_shared_page_c44a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44AF7) return execute_unresolved_c4_c44963_instruction(cpu, address);
    return execute_text_free_tile_instruction(cpu, address);
}
bool execute_shared_page_c44b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44B3A) return execute_text_free_tile_instruction(cpu, address);
    return execute_unresolved_c4_c44b3a_instruction(cpu, address);
}
bool execute_shared_page_c44c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44C8C) return execute_unresolved_c4_c44b3a_instruction(cpu, address);
    return execute_unresolved_c4_c44c8c_instruction(cpu, address);
}
bool execute_shared_page_c44d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44DCA) return execute_unresolved_c4_c44c8c_instruction(cpu, address);
    return execute_unresolved_c4_c44dca_instruction(cpu, address);
}
bool execute_shared_page_c44e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44E44) return execute_unresolved_c4_c44dca_instruction(cpu, address);
    if (address < 0xC44E4D) return execute_unresolved_c4_c44e44_instruction(cpu, address);
    if (address < 0xC44E61) return execute_text_free_tile_safe_instruction(cpu, address);
    return execute_unresolved_c4_c44e61_instruction(cpu, address);
}
bool execute_shared_page_c44f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44FF3) return execute_unresolved_c4_c44e61_instruction(cpu, address);
    return execute_unresolved_c4_c44ff3_instruction(cpu, address);
}
bool execute_shared_page_c450(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4507A) return execute_unresolved_c4_c44ff3_instruction(cpu, address);
    return execute_unresolved_c4_c4507a_instruction(cpu, address);
}
bool execute_shared_page_c451(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC451FA) return execute_unresolved_c4_c4507a_instruction(cpu, address);
    return execute_unresolved_c4_c451fa_instruction(cpu, address);
}
bool execute_shared_page_c456(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC45683) return execute_miscellaneous_find_item_in_inventory_instruction(cpu, address);
    if (address < 0xC456E4) return execute_miscellaneous_find_item_in_inventory2_instruction(cpu, address);
    return execute_miscellaneous_find_inventory_space_instruction(cpu, address);
}
bool execute_shared_page_c457(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4572B) return execute_miscellaneous_find_inventory_space_instruction(cpu, address);
    if (address < 0xC4577D) return execute_miscellaneous_find_inventory_space2_instruction(cpu, address);
    if (address < 0xC457CA) return execute_miscellaneous_change_equipped_weapon_instruction(cpu, address);
    return execute_miscellaneous_change_equipped_body_instruction(cpu, address);
}
bool execute_shared_page_c458(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC45815) return execute_miscellaneous_change_equipped_body_instruction(cpu, address);
    if (address < 0xC45860) return execute_miscellaneous_change_equipped_arms_instruction(cpu, address);
    if (address < 0xC458AF) return execute_miscellaneous_change_equipped_other_instruction(cpu, address);
    if (address < 0xC458FE) return execute_miscellaneous_check_status_group_instruction(cpu, address);
    return execute_miscellaneous_inflict_status_nonbattle_instruction(cpu, address);
}
bool execute_shared_page_c459(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4599A) return execute_miscellaneous_inflict_status_nonbattle_instruction(cpu, address);
    return execute_miscellaneous_get_required_exp_instruction(cpu, address);
}
bool execute_shared_page_c45d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC45DDD) return execute_unresolved_c4_c45c90_instruction(cpu, address);
    return execute_unresolved_c4_c45ddd_instruction(cpu, address);
}
bool execute_shared_page_c45e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC45E96) return execute_unresolved_c4_c45ddd_instruction(cpu, address);
    if (address < 0xC45ECE) return execute_unresolved_c4_c45e96_instruction(cpu, address);
    return execute_miscellaneous_check_if_psi_known_instruction(cpu, address);
}
bool execute_shared_page_c45f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC45F7B) return execute_miscellaneous_check_if_psi_known_instruction(cpu, address);
    if (address < 0xC45FA8) return execute_system_math_rand_mod_instruction(cpu, address);
    return execute_overworld_get_direction_to_instruction(cpu, address);
}
bool execute_shared_page_c460(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46028) return execute_overworld_get_direction_to_instruction(cpu, address);
    if (address < 0xC4605A) return execute_unresolved_c4_c46028_instruction(cpu, address);
    if (address < 0xC4608C) return execute_unresolved_c4_c4605a_instruction(cpu, address);
    if (address < 0xC460CE) return execute_unresolved_c4_c4608c_instruction(cpu, address);
    return execute_unresolved_c4_c460ce_instruction(cpu, address);
}
bool execute_shared_page_c461(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46125) return execute_unresolved_c4_c460ce_instruction(cpu, address);
    if (address < 0xC4617C) return execute_unresolved_c4_c46125_instruction(cpu, address);
    if (address < 0xC461CC) return execute_unresolved_c4_c4617c_instruction(cpu, address);
    return execute_unresolved_c4_c461cc_instruction(cpu, address);
}
bool execute_shared_page_c462(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4621C) return execute_unresolved_c4_c461cc_instruction(cpu, address);
    if (address < 0xC46257) return execute_unresolved_c4_c4621c_instruction(cpu, address);
    if (address < 0xC462AE) return execute_unresolved_c4_c46257_instruction(cpu, address);
    if (address < 0xC462C9) return execute_unresolved_c4_c462ae_instruction(cpu, address);
    if (address < 0xC462E4) return execute_unresolved_c4_c462c9_instruction(cpu, address);
    if (address < 0xC462FF) return execute_unresolved_c4_c462e4_instruction(cpu, address);
    return execute_unresolved_c4_c462ff_instruction(cpu, address);
}
bool execute_shared_page_c463(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46331) return execute_unresolved_c4_c462ff_instruction(cpu, address);
    if (address < 0xC46363) return execute_unresolved_c4_c46331_instruction(cpu, address);
    if (address < 0xC46397) return execute_unresolved_c4_c46363_instruction(cpu, address);
    if (address < 0xC463F4) return execute_unresolved_c4_c46397_instruction(cpu, address);
    return execute_unresolved_c4_c463f4_instruction(cpu, address);
}
bool execute_shared_page_c464(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4645A) return execute_unresolved_c4_c463f4_instruction(cpu, address);
    if (address < 0xC464B5) return execute_unresolved_c4_c4645a_instruction(cpu, address);
    return execute_overworld_create_prepared_entity_npc_instruction(cpu, address);
}
bool execute_shared_page_c465(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46507) return execute_overworld_create_prepared_entity_npc_instruction(cpu, address);
    if (address < 0xC46534) return execute_overworld_create_prepared_entity_sprite_instruction(cpu, address);
    if (address < 0xC4655E) return execute_unresolved_c4_c46534_instruction(cpu, address);
    if (address < 0xC46579) return execute_unresolved_c4_c4655e_instruction(cpu, address);
    if (address < 0xC46594) return execute_unresolved_c4_c46579_instruction(cpu, address);
    if (address < 0xC465FB) return execute_unresolved_c4_c46594_instruction(cpu, address);
    return execute_unresolved_c4_c465fb_instruction(cpu, address);
}
bool execute_shared_page_c466(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46616) return execute_unresolved_c4_c465fb_instruction(cpu, address);
    if (address < 0xC46631) return execute_unresolved_c4_c46616_instruction(cpu, address);
    if (address < 0xC46698) return execute_unresolved_c4_c46631_instruction(cpu, address);
    if (address < 0xC466A8) return execute_unresolved_c4_c46698_instruction(cpu, address);
    if (address < 0xC466B8) return execute_unresolved_c4_c466a8_instruction(cpu, address);
    if (address < 0xC466C1) return execute_unresolved_c4_c466b8_instruction(cpu, address);
    if (address < 0xC466F0) return execute_unresolved_c4_c466c1_instruction(cpu, address);
    return execute_unresolved_c4_c466f0_instruction(cpu, address);
}
bool execute_shared_page_c467(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46712) return execute_unresolved_c4_c466f0_instruction(cpu, address);
    if (address < 0xC4675C) return execute_unresolved_c4_c46712_instruction(cpu, address);
    if (address < 0xC467B4) return execute_unresolved_c4_c4675c_instruction(cpu, address);
    if (address < 0xC467C2) return execute_unresolved_c4_c467b4_instruction(cpu, address);
    if (address < 0xC467E6) return execute_unresolved_c4_c467c2_instruction(cpu, address);
    return execute_unresolved_c4_c467e6_instruction(cpu, address);
}
bool execute_shared_page_c468(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4681A) return execute_unresolved_c4_c467e6_instruction(cpu, address);
    if (address < 0xC46881) return execute_unresolved_c4_c4681a_instruction(cpu, address);
    if (address < 0xC468A9) return execute_unresolved_c4_c46881_instruction(cpu, address);
    if (address < 0xC468AF) return execute_unresolved_c4_c468a9_instruction(cpu, address);
    if (address < 0xC468B5) return execute_unresolved_c4_c468af_instruction(cpu, address);
    if (address < 0xC468DC) return execute_unresolved_c4_c468b5_instruction(cpu, address);
    return execute_unresolved_c4_c468dc_instruction(cpu, address);
}
bool execute_shared_page_c469(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46903) return execute_unresolved_c4_c468dc_instruction(cpu, address);
    if (address < 0xC46914) return execute_unresolved_c4_c46903_instruction(cpu, address);
    if (address < 0xC46957) return execute_unresolved_c4_c46914_instruction(cpu, address);
    if (address < 0xC46984) return execute_unresolved_c4_c46957_instruction(cpu, address);
    if (address < 0xC469F1) return execute_unresolved_c4_c46984_instruction(cpu, address);
    return execute_unresolved_c4_c469f1_instruction(cpu, address);
}
bool execute_shared_page_c46a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46A6E) return execute_unresolved_c4_c469f1_instruction(cpu, address);
    if (address < 0xC46A9A) return execute_unresolved_c4_c46a6e_instruction(cpu, address);
    if (address < 0xC46AA3) return execute_unresolved_c4_c46a9a_instruction(cpu, address);
    if (address < 0xC46AAC) return execute_unresolved_c4_c46aa3_instruction(cpu, address);
    if (address < 0xC46ADB) return execute_unresolved_c4_c46aac_instruction(cpu, address);
    return execute_unresolved_c4_c46adb_instruction(cpu, address);
}
bool execute_shared_page_c46b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46B0A) return execute_unresolved_c4_c46adb_instruction(cpu, address);
    if (address < 0xC46B2D) return execute_unresolved_c4_c46b0a_instruction(cpu, address);
    if (address < 0xC46B37) return execute_unresolved_c4_c46b2d_instruction(cpu, address);
    if (address < 0xC46B51) return execute_unresolved_c4_c46b37_instruction(cpu, address);
    if (address < 0xC46B65) return execute_unresolved_c4_c46b51_instruction(cpu, address);
    if (address < 0xC46B79) return execute_unresolved_c4_c46b65_instruction(cpu, address);
    if (address < 0xC46B8D) return execute_unresolved_c4_c46b79_instruction(cpu, address);
    if (address < 0xC46BBB) return execute_unresolved_c4_c46b8d_instruction(cpu, address);
    if (address < 0xC46BE9) return execute_unresolved_c4_c46bbb_instruction(cpu, address);
    return execute_overworld_get_position_of_party_member_instruction(cpu, address);
}
bool execute_shared_page_c46c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46C45) return execute_overworld_get_position_of_party_member_instruction(cpu, address);
    if (address < 0xC46C5E) return execute_unresolved_c4_c46c45_instruction(cpu, address);
    if (address < 0xC46C87) return execute_unresolved_c4_c46c5e_instruction(cpu, address);
    if (address < 0xC46C9B) return execute_unresolved_c4_c46c87_instruction(cpu, address);
    if (address < 0xC46CC7) return execute_unresolved_c4_c46c9b_instruction(cpu, address);
    if (address < 0xC46CF5) return execute_unresolved_c4_c46cc7_instruction(cpu, address);
    return execute_unresolved_c4_c46cf5_instruction(cpu, address);
}
bool execute_shared_page_c46d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46D23) return execute_unresolved_c4_c46cf5_instruction(cpu, address);
    if (address < 0xC46D4B) return execute_unresolved_c4_c46d23_instruction(cpu, address);
    if (address < 0xC46DAD) return execute_unresolved_c4_c46d4b_instruction(cpu, address);
    if (address < 0xC46DE5) return execute_overworld_prepare_new_entity_at_existing_entity_location_instruction(cpu, address);
    return execute_overworld_prepare_new_entity_at_teleport_destination_instruction(cpu, address);
}
bool execute_shared_page_c46e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46E37) return execute_overworld_prepare_new_entity_at_teleport_destination_instruction(cpu, address);
    if (address < 0xC46E46) return execute_overworld_prepare_new_entity_instruction(cpu, address);
    if (address < 0xC46E4F) return execute_unresolved_c4_c46e46_instruction(cpu, address);
    if (address < 0xC46E74) return execute_unresolved_c4_c46e4f_instruction(cpu, address);
    if (address < 0xC46EF8) return execute_overworld_actionscript_test_player_in_area_instruction(cpu, address);
    return execute_unresolved_c4_c46ef8_instruction(cpu, address);
}
bool execute_shared_page_c46f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46F7C) return execute_unresolved_c4_c46ef8_instruction(cpu, address);
    return execute_unresolved_c4_c46f7c_instruction(cpu, address);
}
bool execute_shared_page_c470(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC47044) return execute_unresolved_c4_c46f7c_instruction(cpu, address);
    return execute_unresolved_c4_c47044_instruction(cpu, address);
}
bool execute_shared_page_c471(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC47143) return execute_unresolved_c4_c47044_instruction(cpu, address);
    return execute_unresolved_c4_c47143_instruction(cpu, address);
}
bool execute_shared_page_c472(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC47225) return execute_unresolved_c4_c47143_instruction(cpu, address);
    if (address < 0xC47269) return execute_unresolved_c4_c47225_instruction(cpu, address);
    if (address < 0xC472A8) return execute_unresolved_c4_c47269_instruction(cpu, address);
    return execute_unresolved_c4_c472a8_instruction(cpu, address);
}
bool execute_shared_page_c473(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4730E) return execute_unresolved_c4_c472a8_instruction(cpu, address);
    if (address < 0xC47333) return execute_unresolved_c4_c4730e_instruction(cpu, address);
    if (address < 0xC4733C) return execute_unresolved_c4_c47333_instruction(cpu, address);
    if (address < 0xC4734C) return execute_unresolved_c4_c4733c_instruction(cpu, address);
    if (address < 0xC47369) return execute_unresolved_c4_c4734c_instruction(cpu, address);
    if (address < 0xC47370) return execute_unresolved_c4_c47369_instruction(cpu, address);
    if (address < 0xC473B2) return execute_system_load_background_animation_instruction(cpu, address);
    if (address < 0xC473D0) return execute_unresolved_c4_c473b2_instruction(cpu, address);
    return execute_unresolved_c4_c473d0_instruction(cpu, address);
}
bool execute_shared_page_c474(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4746B) return execute_unresolved_c4_c473d0_instruction(cpu, address);
    if (address < 0xC47499) return execute_unresolved_c4_c4746b_instruction(cpu, address);
    if (address < 0xC474A8) return execute_unresolved_c4_c47499_instruction(cpu, address);
    return execute_unresolved_c4_c474a8_instruction(cpu, address);
}
bool execute_shared_page_c476(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC476A5) return execute_unresolved_c4_c47501_instruction(cpu, address);
    return execute_unresolved_c4_c476a5_instruction(cpu, address);
}
bool execute_shared_page_c477(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC47705) return execute_unresolved_c4_c476a5_instruction(cpu, address);
    if (address < 0xC47765) return execute_unresolved_c4_c47705_instruction(cpu, address);
    return execute_unresolved_c4_c47765_instruction(cpu, address);
}
bool execute_shared_page_c478(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC47866) return execute_unresolved_c4_c47765_instruction(cpu, address);
    if (address < 0xC4789E) return execute_unresolved_c4_c47866_instruction(cpu, address);
    return execute_unresolved_c4_c4789e_instruction(cpu, address);
}
bool execute_shared_page_c479(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC47930) return execute_unresolved_c4_c4789e_instruction(cpu, address);
    if (address < 0xC479E9) return execute_unresolved_c4_c47930_instruction(cpu, address);
    return execute_unresolved_c4_c479e9_instruction(cpu, address);
}
bool execute_shared_page_c47a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC47A27) return execute_unresolved_c4_c479e9_instruction(cpu, address);
    if (address < 0xC47A6B) return execute_unresolved_c4_c47a27_instruction(cpu, address);
    if (address < 0xC47A9E) return execute_unresolved_c4_c47a6b_instruction(cpu, address);
    return execute_unresolved_c4_c47a9e_instruction(cpu, address);
}
bool execute_shared_page_c47b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC47B77) return execute_unresolved_c4_c47a9e_instruction(cpu, address);
    return execute_unresolved_c4_c47b77_instruction(cpu, address);
}
bool execute_shared_page_c47c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC47C3F) return execute_unresolved_c4_c47b77_instruction(cpu, address);
    return execute_system_load_window_gfx_instruction(cpu, address);
}
bool execute_shared_page_c47f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC47F87) return execute_system_load_window_gfx_instruction(cpu, address);
    return execute_unresolved_c4_c47f87_instruction(cpu, address);
}
bool execute_shared_page_c480(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4800B) return execute_unresolved_c4_c47f87_instruction(cpu, address);
    return execute_text_undraw_flyover_text_instruction(cpu, address);
}
bool execute_shared_page_c482(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4827B) return execute_unresolved_c4_c4810e_instruction(cpu, address);
    return execute_unresolved_c4_c4827b_instruction(cpu, address);
}
bool execute_shared_page_c483(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4838A) return execute_unresolved_c4_c4827b_instruction(cpu, address);
    return execute_unresolved_c4_c4838a_instruction(cpu, address);
}
bool execute_shared_page_c488(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4880C) return execute_unresolved_c4_c4838a_instruction(cpu, address);
    return execute_unresolved_c4_c4880c_instruction(cpu, address);
}
bool execute_shared_page_c48a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC48A6D) return execute_unresolved_c4_c4880c_instruction(cpu, address);
    return execute_unresolved_c4_c48a6d_instruction(cpu, address);
}
bool execute_shared_page_c48b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC48B2C) return execute_unresolved_c4_c48a6d_instruction(cpu, address);
    if (address < 0xC48B3B) return execute_unresolved_c4_c48b2c_instruction(cpu, address);
    if (address < 0xC48BDA) return execute_overworld_actionscript_make_party_look_at_active_entity_instruction(cpu, address);
    if (address < 0xC48BE1) return execute_overworld_actionscript_animated_background_callback_instruction(cpu, address);
    return execute_overworld_actionscript_simple_screen_position_callback_instruction(cpu, address);
}
bool execute_shared_page_c48c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC48C02) return execute_overworld_actionscript_simple_screen_position_callback_instruction(cpu, address);
    if (address < 0xC48C2B) return execute_overworld_actionscript_simple_screen_position_callback_offset_instruction(cpu, address);
    if (address < 0xC48C3E) return execute_overworld_actionscript_centre_screen_on_entity_callback_instruction(cpu, address);
    if (address < 0xC48C69) return execute_overworld_actionscript_centre_screen_on_entity_callback_offset_instruction(cpu, address);
    if (address < 0xC48C97) return execute_unresolved_c4_c48c69_instruction(cpu, address);
    return execute_unresolved_c4_c48c97_instruction(cpu, address);
}
bool execute_shared_page_c48d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC48D58) return execute_unresolved_c4_c48c97_instruction(cpu, address);
    return execute_unresolved_c4_c48d58_instruction(cpu, address);
}
bool execute_shared_page_c48e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC48E6B) return execute_unresolved_c4_c48d58_instruction(cpu, address);
    if (address < 0xC48E95) return execute_unresolved_c4_c48e6b_instruction(cpu, address);
    if (address < 0xC48ECE) return execute_unresolved_c4_c48e95_instruction(cpu, address);
    if (address < 0xC48EEB) return execute_overworld_is_valid_item_transformation_instruction(cpu, address);
    return execute_overworld_initialize_item_transformation_instruction(cpu, address);
}
bool execute_shared_page_c48f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC48F98) return execute_overworld_initialize_item_transformation_instruction(cpu, address);
    if (address < 0xC48FC4) return execute_unresolved_c4_c48f98_instruction(cpu, address);
    return execute_overworld_process_item_transformations_instruction(cpu, address);
}
bool execute_shared_page_c490(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC490EE) return execute_overworld_process_item_transformations_instruction(cpu, address);
    return execute_overworld_get_distance_to_magic_truffle_instruction(cpu, address);
}
bool execute_shared_page_c491(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC491EE) return execute_overworld_get_distance_to_magic_truffle_instruction(cpu, address);
    return execute_system_get_colour_fade_slope_instruction(cpu, address);
}
bool execute_shared_page_c492(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC49208) return execute_system_get_colour_fade_slope_instruction(cpu, address);
    if (address < 0xC492D2) return execute_overworld_initialize_map_palette_fade_instruction(cpu, address);
    return execute_unresolved_c4_c492d2_instruction(cpu, address);
}
bool execute_shared_page_c493(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4939C) return execute_unresolved_c4_c492d2_instruction(cpu, address);
    return execute_unresolved_c4_c4939c_instruction(cpu, address);
}
bool execute_shared_page_c494(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC49496) return execute_unresolved_c4_c4939c_instruction(cpu, address);
    return execute_unresolved_c4_c49496_instruction(cpu, address);
}
bool execute_shared_page_c495(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4954C) return execute_unresolved_c4_c49496_instruction(cpu, address);
    if (address < 0xC4958E) return execute_unresolved_c4_c4954c_instruction(cpu, address);
    return execute_unresolved_c4_c4958e_instruction(cpu, address);
}
bool execute_shared_page_c496(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC496E7) return execute_unresolved_c4_c4958e_instruction(cpu, address);
    if (address < 0xC496F0) return execute_unresolved_c4_c496e7_instruction(cpu, address);
    if (address < 0xC496F9) return execute_unresolved_c4_c496f0_instruction(cpu, address);
    return execute_unresolved_c4_c496f9_instruction(cpu, address);
}
bool execute_shared_page_c497(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC49740) return execute_unresolved_c4_c496f9_instruction(cpu, address);
    if (address < 0xC4978E) return execute_unresolved_c4_c49740_instruction(cpu, address);
    if (address < 0xC497C0) return execute_unresolved_c4_c4978e_instruction(cpu, address);
    return execute_unresolved_c4_c497c0_instruction(cpu, address);
}
bool execute_shared_page_c498(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4981F) return execute_unresolved_c4_c497c0_instruction(cpu, address);
    if (address < 0xC49841) return execute_unresolved_c4_c4981f_instruction(cpu, address);
    if (address < 0xC4984B) return execute_unresolved_c4_c49841_instruction(cpu, address);
    if (address < 0xC49875) return execute_unresolved_c4_c4984b_instruction(cpu, address);
    return execute_unresolved_c4_c49875_instruction(cpu, address);
}
bool execute_shared_page_c499(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4999B) return execute_unresolved_c4_c49875_instruction(cpu, address);
    return execute_unresolved_c4_c4999b_instruction(cpu, address);
}
bool execute_shared_page_c49a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC49A4B) return execute_unresolved_c4_c4999b_instruction(cpu, address);
    if (address < 0xC49A56) return execute_unresolved_c4_c49a4b_instruction(cpu, address);
    return execute_unresolved_c4_c49a56_instruction(cpu, address);
}
bool execute_shared_page_c49b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC49B6E) return execute_unresolved_c4_c49a56_instruction(cpu, address);
    return execute_unresolved_c4_c49b6e_instruction(cpu, address);
}
bool execute_shared_page_c49c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC49C56) return execute_unresolved_c4_c49b6e_instruction(cpu, address);
    if (address < 0xC49CA8) return execute_unresolved_c4_c49c56_instruction(cpu, address);
    if (address < 0xC49CC3) return execute_unresolved_c4_c49ca8_instruction(cpu, address);
    return execute_unresolved_c4_c49cc3_instruction(cpu, address);
}
bool execute_shared_page_c49d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC49D16) return execute_unresolved_c4_c49cc3_instruction(cpu, address);
    if (address < 0xC49D1E) return execute_unresolved_c4_c49d16_instruction(cpu, address);
    if (address < 0xC49D6A) return execute_unresolved_c4_c49d1e_instruction(cpu, address);
    return execute_text_coffee_tea_scene_instruction(cpu, address);
}
bool execute_shared_page_c49e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC49EC4) return execute_text_coffee_tea_scene_instruction(cpu, address);
    return execute_unresolved_c4_c49ec4_instruction(cpu, address);
}
bool execute_shared_page_c4a1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4A15D) return execute_battle_autohealing_instruction(cpu, address);
    if (address < 0xC4A1F5) return execute_battle_autolifeup_instruction(cpu, address);
    return execute_battle_check_if_valid_target_instruction(cpu, address);
}
bool execute_shared_page_c4a2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4A228) return execute_battle_check_if_valid_target_instruction(cpu, address);
    return execute_unresolved_c4_c4a228_instruction(cpu, address);
}
bool execute_shared_page_c4a7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4A7B0) return execute_unresolved_c4_c4a67e_instruction(cpu, address);
    return execute_unresolved_c4_c4a7b0_instruction(cpu, address);
}
bool execute_shared_page_c4ac(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4ACCE) return execute_unresolved_c4_c4a7b0_instruction(cpu, address);
    return execute_overworld_use_sound_stone_instruction(cpu, address);
}
bool execute_shared_page_c4b1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B1B8) return execute_overworld_use_sound_stone_instruction(cpu, address);
    return execute_unresolved_c4_c4b1b8_instruction(cpu, address);
}
bool execute_shared_page_c4b2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B26B) return execute_unresolved_c4_c4b1b8_instruction(cpu, address);
    return execute_overworld_load_overlay_sprites_instruction(cpu, address);
}
bool execute_shared_page_c4b3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B329) return execute_overworld_load_overlay_sprites_instruction(cpu, address);
    if (address < 0xC4B3D0) return execute_unresolved_c4_c4b329_instruction(cpu, address);
    return execute_text_spawn_floating_sprite_instruction(cpu, address);
}
bool execute_shared_page_c4b4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B4BE) return execute_text_spawn_floating_sprite_instruction(cpu, address);
    if (address < 0xC4B4FE) return execute_unresolved_c4_c4b4be_instruction(cpu, address);
    return execute_unresolved_c4_c4b4fe_instruction(cpu, address);
}
bool execute_shared_page_c4b5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B519) return execute_unresolved_c4_c4b4fe_instruction(cpu, address);
    if (address < 0xC4B524) return execute_unresolved_c4_c4b519_instruction(cpu, address);
    if (address < 0xC4B53F) return execute_unresolved_c4_c4b524_instruction(cpu, address);
    if (address < 0xC4B54A) return execute_unresolved_c4_c4b53f_instruction(cpu, address);
    if (address < 0xC4B565) return execute_unresolved_c4_c4b54a_instruction(cpu, address);
    if (address < 0xC4B570) return execute_unresolved_c4_c4b565_instruction(cpu, address);
    if (address < 0xC4B57D) return execute_unresolved_c4_c4b570_instruction(cpu, address);
    if (address < 0xC4B587) return execute_unresolved_c4_c4b57d_instruction(cpu, address);
    if (address < 0xC4B595) return execute_unresolved_c4_c4b587_instruction(cpu, address);
    if (address < 0xC4B59F) return execute_unresolved_c4_c4b595_instruction(cpu, address);
    return execute_unresolved_c4_c4b59f_instruction(cpu, address);
}
bool execute_shared_page_c4b7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B7A5) return execute_unresolved_c4_c4b59f_instruction(cpu, address);
    return execute_unresolved_c4_c4b7a5_instruction(cpu, address);
}
bool execute_shared_page_c4b8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B859) return execute_unresolved_c4_c4b7a5_instruction(cpu, address);
    return execute_unresolved_c4_c4b859_instruction(cpu, address);
}
bool execute_shared_page_c4b9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B923) return execute_unresolved_c4_c4b859_instruction(cpu, address);
    return execute_unresolved_c4_c4b923_instruction(cpu, address);
}
bool execute_shared_page_c4ba(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4BAF6) return execute_unresolved_c4_c4b923_instruction(cpu, address);
    return execute_unresolved_c4_c4baf6_instruction(cpu, address);
}
bool execute_shared_page_c4bd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4BD9A) return execute_unresolved_c4_c4baf6_instruction(cpu, address);
    return execute_unresolved_c4_c4bd9a_instruction(cpu, address);
}
bool execute_shared_page_c4bf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4BF7F) return execute_unresolved_c4_c4bd9a_instruction(cpu, address);
    return execute_unresolved_c4_c4bf7f_instruction(cpu, address);
}
bool execute_shared_page_c4c4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4C45F) return execute_unresolved_c4_c4c2de_instruction(cpu, address);
    return execute_unresolved_c4_c4c45f_instruction(cpu, address);
}
bool execute_shared_page_c4c5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4C519) return execute_unresolved_c4_c4c45f_instruction(cpu, address);
    if (address < 0xC4C567) return execute_unresolved_c4_c4c519_instruction(cpu, address);
    if (address < 0xC4C58F) return execute_text_skippable_pause_instruction(cpu, address);
    return execute_unresolved_c4_c4c58f_instruction(cpu, address);
}
bool execute_shared_page_c4c6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4C60E) return execute_unresolved_c4_c4c58f_instruction(cpu, address);
    if (address < 0xC4C64D) return execute_unresolved_c4_c4c60e_instruction(cpu, address);
    return execute_unresolved_c4_c4c64d_instruction(cpu, address);
}
bool execute_shared_page_c4c7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4C718) return execute_unresolved_c4_c4c64d_instruction(cpu, address);
    return execute_overworld_spawn_instruction(cpu, address);
}
bool execute_shared_page_c4c8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4C8A4) return execute_overworld_spawn_instruction(cpu, address);
    if (address < 0xC4C8DB) return execute_unresolved_c4_c4c8a4_instruction(cpu, address);
    if (address < 0xC4C8E9) return execute_unresolved_c4_c4c8db_instruction(cpu, address);
    return execute_unresolved_c4_c4c8e9_instruction(cpu, address);
}
bool execute_shared_page_c4c9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4C91A) return execute_unresolved_c4_c4c8e9_instruction(cpu, address);
    return execute_unresolved_c4_c4c91a_instruction(cpu, address);
}
bool execute_shared_page_c4cb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4CB4F) return execute_unresolved_c4_c4c91a_instruction(cpu, address);
    if (address < 0xC4CB8F) return execute_unresolved_c4_c4cb4f_instruction(cpu, address);
    if (address < 0xC4CBE3) return execute_unresolved_c4_c4cb8f_instruction(cpu, address);
    return execute_unresolved_c4_c4cbe3_instruction(cpu, address);
}
bool execute_shared_page_c4cc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4CC2C) return execute_unresolved_c4_c4cbe3_instruction(cpu, address);
    if (address < 0xC4CC2F) return execute_unresolved_miscellaneous_null_c4cc2c_instruction(cpu, address);
    return execute_unresolved_c4_c4cc2f_instruction(cpu, address);
}
bool execute_shared_page_c4cd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4CD44) return execute_unresolved_c4_c4cc2f_instruction(cpu, address);
    return execute_unresolved_c4_c4cd44_instruction(cpu, address);
}
bool execute_shared_page_c4ce(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4CEB0) return execute_unresolved_c4_c4cd44_instruction(cpu, address);
    if (address < 0xC4CED8) return execute_unresolved_c4_c4ceb0_instruction(cpu, address);
    return execute_unresolved_c4_c4ced8_instruction(cpu, address);
}
bool execute_shared_page_c4d0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4D00F) return execute_unresolved_c4_c4ced8_instruction(cpu, address);
    if (address < 0xC4D065) return execute_unresolved_c4_c4d00f_instruction(cpu, address);
    return execute_unresolved_c4_c4d065_instruction(cpu, address);
}
bool execute_shared_page_c4d2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4D274) return execute_unresolved_c4_c4d065_instruction(cpu, address);
    if (address < 0xC4D2A8) return execute_overworld_get_town_map_id_instruction(cpu, address);
    if (address < 0xC4D2F0) return execute_unresolved_c4_c4d2a8_instruction(cpu, address);
    return execute_unresolved_c4_c4d2f0_instruction(cpu, address);
}
bool execute_shared_page_c4d4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4D43F) return execute_unresolved_c4_c4d2f0_instruction(cpu, address);
    return execute_unresolved_c4_c4d43f_instruction(cpu, address);
}
bool execute_shared_page_c4d5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4D553) return execute_unresolved_c4_c4d43f_instruction(cpu, address);
    return execute_overworld_load_town_map_data_instruction(cpu, address);
}
bool execute_shared_page_c4d6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4D681) return execute_overworld_load_town_map_data_instruction(cpu, address);
    return execute_overworld_display_town_map_instruction(cpu, address);
}
bool execute_shared_page_c4d7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4D744) return execute_overworld_display_town_map_instruction(cpu, address);
    if (address < 0xC4D7D9) return execute_unresolved_c4_c4d744_instruction(cpu, address);
    return execute_introduction_display_animated_naming_sprite_instruction(cpu, address);
}
bool execute_shared_page_c4d8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4D830) return execute_introduction_display_animated_naming_sprite_instruction(cpu, address);
    if (address < 0xC4D8FA) return execute_unresolved_c4_c4d830_instruction(cpu, address);
    return execute_unresolved_c4_c4d8fa_instruction(cpu, address);
}
bool execute_shared_page_c4d9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4D989) return execute_unresolved_c4_c4d8fa_instruction(cpu, address);
    return execute_unresolved_c4_c4d989_instruction(cpu, address);
}
bool execute_shared_page_c4da(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4DAD2) return execute_unresolved_c4_c4d989_instruction(cpu, address);
    return execute_introduction_init_intro_instruction(cpu, address);
}
bool execute_shared_page_c4dc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4DCF6) return execute_introduction_init_intro_instruction(cpu, address);
    return execute_unresolved_c4_c4dcf6_instruction(cpu, address);
}
bool execute_shared_page_c4dd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4DD28) return execute_unresolved_c4_c4dcf6_instruction(cpu, address);
    if (address < 0xC4DDD0) return execute_introduction_decomp_itoi_production_instruction(cpu, address);
    return execute_introduction_decomp_nintendo_presentation_instruction(cpu, address);
}
bool execute_shared_page_c4de(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4DE98) return execute_introduction_decomp_nintendo_presentation_instruction(cpu, address);
    if (address < 0xC4DED0) return execute_overworld_initialize_your_sanctuary_display_instruction(cpu, address);
    if (address < 0xC4DEE9) return execute_overworld_enable_your_sanctuary_display_instruction(cpu, address);
    return execute_overworld_prepare_your_sanctuary_location_palette_data_instruction(cpu, address);
}
bool execute_shared_page_c4df(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4DF7D) return execute_overworld_prepare_your_sanctuary_location_palette_data_instruction(cpu, address);
    return execute_overworld_prepare_your_sanctuary_location_tile_arrangement_data_instruction(cpu, address);
}
bool execute_shared_page_c4e0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4E08C) return execute_overworld_prepare_your_sanctuary_location_tile_arrangement_data_instruction(cpu, address);
    return execute_overworld_prepare_your_sanctuary_location_tileset_data_instruction(cpu, address);
}
bool execute_shared_page_c4e1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4E13E) return execute_overworld_prepare_your_sanctuary_location_tileset_data_instruction(cpu, address);
    return execute_overworld_load_your_sanctuary_location_data_instruction(cpu, address);
}
bool execute_shared_page_c4e2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4E281) return execute_overworld_load_your_sanctuary_location_data_instruction(cpu, address);
    if (address < 0xC4E2D7) return execute_overworld_load_your_sanctuary_location_instruction(cpu, address);
    return execute_overworld_display_your_sanctuary_location_instruction(cpu, address);
}
bool execute_shared_page_c4e3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4E366) return execute_overworld_display_your_sanctuary_location_instruction(cpu, address);
    if (address < 0xC4E369) return execute_overworld_test_your_sanctuary_display_instruction(cpu, address);
    return execute_ending_load_cast_scene_instruction(cpu, address);
}
bool execute_shared_page_c4e4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4E4DA) return execute_ending_load_cast_scene_instruction(cpu, address);
    if (address < 0xC4E4F9) return execute_ending_set_cast_scroll_threshold_instruction(cpu, address);
    return execute_ending_check_cast_scroll_threshold_instruction(cpu, address);
}
bool execute_shared_page_c4e5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4E51E) return execute_ending_check_cast_scroll_threshold_instruction(cpu, address);
    if (address < 0xC4E583) return execute_ending_handle_cast_scrolling_instruction(cpu, address);
    return execute_ending_render_cast_name_text_instruction(cpu, address);
}
bool execute_shared_page_c4e7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4E7AE) return execute_ending_render_cast_name_text_instruction(cpu, address);
    return execute_ending_prepare_dynamic_cast_name_text_instruction(cpu, address);
}
bool execute_shared_page_c4ea(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4EA9C) return execute_ending_prepare_dynamic_cast_name_text_instruction(cpu, address);
    return execute_ending_prepare_cast_name_tilemap_instruction(cpu, address);
}
bool execute_shared_page_c4eb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4EB04) return execute_ending_prepare_cast_name_tilemap_instruction(cpu, address);
    if (address < 0xC4EBAD) return execute_ending_copy_cast_name_tilemap_instruction(cpu, address);
    return execute_ending_print_cast_name_instruction(cpu, address);
}
bool execute_shared_page_c4ec(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4EC05) return execute_ending_print_cast_name_instruction(cpu, address);
    if (address < 0xC4EC52) return execute_ending_print_cast_name_party_instruction(cpu, address);
    if (address < 0xC4EC6E) return execute_ending_print_cast_name_entity_var0_instruction(cpu, address);
    if (address < 0xC4ECAD) return execute_ending_upload_special_cast_palette_instruction(cpu, address);
    if (address < 0xC4ECE7) return execute_ending_create_entity_at_v01_plus_bg3y_instruction(cpu, address);
    return execute_ending_is_entity_still_on_cast_screen_instruction(cpu, address);
}
bool execute_shared_page_c4ed(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4ED0E) return execute_ending_is_entity_still_on_cast_screen_instruction(cpu, address);
    if (address < 0xC4EDA3) return execute_ending_play_cast_scene_instruction(cpu, address);
    return execute_unresolved_c4eda3_instruction(cpu, address);
}
bool execute_shared_page_c4ee(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4EE9D) return execute_unresolved_c4eda3_instruction(cpu, address);
    if (address < 0xC4EEE1) return execute_unresolved_c4ee9d_instruction(cpu, address);
    return execute_ending_change_vwf_2bpp_to_3_colour_instruction(cpu, address);
}
bool execute_shared_page_c4ef(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4EFC4) return execute_ending_change_vwf_2bpp_to_3_colour_instruction(cpu, address);
    return execute_ending_enqueue_credits_dma_instruction(cpu, address);
}
bool execute_shared_page_c4f0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4F01D) return execute_ending_enqueue_credits_dma_instruction(cpu, address);
    if (address < 0xC4F07D) return execute_ending_process_credits_dma_queue_instruction(cpu, address);
    return execute_ending_initialize_credits_scene_instruction(cpu, address);
}
bool execute_shared_page_c4f2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4F264) return execute_ending_initialize_credits_scene_instruction(cpu, address);
    return execute_ending_try_rendering_photograph_instruction(cpu, address);
}
bool execute_shared_page_c4f4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4F433) return execute_ending_try_rendering_photograph_instruction(cpu, address);
    if (address < 0xC4F46F) return execute_ending_count_photo_flags_instruction(cpu, address);
    return execute_ending_slide_credits_photograph_instruction(cpu, address);
}
bool execute_shared_page_c4f5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4F554) return execute_ending_slide_credits_photograph_instruction(cpu, address);
    return execute_ending_play_credits_instruction(cpu, address);
}
bool execute_shared_page_c4fb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4FB58) return execute_audio_get_audio_bank_instruction(cpu, address);
    if (address < 0xC4FBBD) return execute_audio_initialize_music_subsystem_instruction(cpu, address);
    return execute_audio_change_music_instruction(cpu, address);
}
bool execute_shared_page_c4fd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4FD18) return execute_audio_change_music_instruction(cpu, address);
    if (address < 0xC4FD45) return execute_audio_set_num_channels_instruction(cpu, address);
    return execute_overworld_set_auto_sector_music_changes_instruction(cpu, address);
}
bool execute_shared_page_ef00(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF0052) return execute_battle_enemy_flashing_off_instruction(cpu, address);
    if (address < 0xEF00BB) return execute_battle_enemy_flashing_on_instruction(cpu, address);
    if (address < 0xEF00E6) return execute_unresolved_ef_ef00bb_instruction(cpu, address);
    return execute_unresolved_ef_ef00e6_instruction(cpu, address);
}
bool execute_shared_page_ef01(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF0115) return execute_unresolved_ef_ef00e6_instruction(cpu, address);
    if (address < 0xEF016F) return execute_unresolved_ef_ef0115_instruction(cpu, address);
    if (address < 0xEF01D2) return execute_unresolved_ef_ef016f_instruction(cpu, address);
    return execute_unresolved_ef_ef01d2_instruction(cpu, address);
}
bool execute_shared_page_ef02(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF0256) return execute_unresolved_ef_ef01d2_instruction(cpu, address);
    if (address < 0xEF0262) return execute_audio_pause_music_instruction(cpu, address);
    if (address < 0xEF026E) return execute_unresolved_ef_ef0262_instruction(cpu, address);
    if (address < 0xEF027D) return execute_audio_resume_music_instruction(cpu, address);
    if (address < 0xEF02C4) return execute_unresolved_ef_ef027d_instruction(cpu, address);
    return execute_unresolved_ef_ef02c4_instruction(cpu, address);
}
bool execute_shared_page_ef03(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF031E) return execute_unresolved_ef_ef02c4_instruction(cpu, address);
    return execute_unresolved_ef_ef031e_instruction(cpu, address);
}
bool execute_shared_page_ef04(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF04DC) return execute_unresolved_ef_ef031e_instruction(cpu, address);
    return execute_unresolved_ef_ef04dc_instruction(cpu, address);
}
bool execute_shared_page_ef05(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF05A9) return execute_unresolved_ef_ef04dc_instruction(cpu, address);
    return execute_system_saves_erase_save_block_instruction(cpu, address);
}
bool execute_shared_page_ef06(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF0630) return execute_system_saves_erase_save_block_instruction(cpu, address);
    if (address < 0xEF0683) return execute_system_saves_check_block_signature_instruction(cpu, address);
    if (address < 0xEF06A2) return execute_system_saves_check_all_blocks_signature_instruction(cpu, address);
    return execute_system_saves_copy_save_block_instruction(cpu, address);
}
bool execute_shared_page_ef07(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF0734) return execute_system_saves_copy_save_block_instruction(cpu, address);
    if (address < 0xEF077B) return execute_system_saves_calc_save_block_checksum_instruction(cpu, address);
    if (address < 0xEF07C0) return execute_system_saves_calc_save_block_checksum_complement_instruction(cpu, address);
    return execute_system_saves_validate_save_block_checksums_instruction(cpu, address);
}
bool execute_shared_page_ef08(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF0825) return execute_system_saves_validate_save_block_checksums_instruction(cpu, address);
    if (address < 0xEF088F) return execute_system_saves_check_save_corruption_instruction(cpu, address);
    return execute_system_saves_save_game_block_instruction(cpu, address);
}
bool execute_shared_page_ef0a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF0A4D) return execute_system_saves_save_game_block_instruction(cpu, address);
    if (address < 0xEF0A68) return execute_system_saves_save_game_slot_instruction(cpu, address);
    return execute_system_saves_load_game_slot_instruction(cpu, address);
}
bool execute_shared_page_ef0b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF0B9E) return execute_system_saves_load_game_slot_instruction(cpu, address);
    if (address < 0xEF0BFA) return execute_system_saves_check_sram_integrity_instruction(cpu, address);
    return execute_system_saves_erase_save_slot_instruction(cpu, address);
}
bool execute_shared_page_ef0c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF0C15) return execute_system_saves_erase_save_slot_instruction(cpu, address);
    if (address < 0xEF0C3D) return execute_system_saves_copy_save_slot_instruction(cpu, address);
    if (address < 0xEF0C87) return execute_unresolved_ef_ef0c3d_instruction(cpu, address);
    if (address < 0xEF0C97) return execute_unresolved_ef_ef0c87_instruction(cpu, address);
    if (address < 0xEF0CA7) return execute_unresolved_ef_ef0c97_instruction(cpu, address);
    return execute_unresolved_ef_ef0ca7_instruction(cpu, address);
}
bool execute_shared_page_ef0d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF0D23) return execute_unresolved_ef_ef0ca7_instruction(cpu, address);
    if (address < 0xEF0D46) return execute_unresolved_ef_ef0d23_instruction(cpu, address);
    if (address < 0xEF0D73) return execute_unresolved_ef_ef0d46_instruction(cpu, address);
    if (address < 0xEF0D8D) return execute_unresolved_ef_ef0d73_instruction(cpu, address);
    if (address < 0xEF0DFA) return execute_unresolved_ef_ef0d8d_instruction(cpu, address);
    return execute_unresolved_ef_ef0dfa_instruction(cpu, address);
}
bool execute_shared_page_ef0e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF0E67) return execute_unresolved_ef_ef0dfa_instruction(cpu, address);
    if (address < 0xEF0E8A) return execute_unresolved_ef_ef0e67_instruction(cpu, address);
    if (address < 0xEF0EAD) return execute_unresolved_ef_ef0e8a_instruction(cpu, address);
    if (address < 0xEF0EE8) return execute_unresolved_ef_ef0ead_instruction(cpu, address);
    return execute_unresolved_ef_ef0ee8_instruction(cpu, address);
}
bool execute_shared_page_ef0f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEF0F60) return execute_unresolved_ef_ef0ee8_instruction(cpu, address);
    if (address < 0xEF0FDB) return execute_unresolved_ef_ef0f60_instruction(cpu, address);
    if (address < 0xEF0FF6) return execute_unresolved_ef_ef0fdb_instruction(cpu, address);
    return execute_unresolved_ef_ef0ff6_instruction(cpu, address);
}
bool execute_shared_page_efd5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFD5D9) return execute_unresolved_ef_efd56f_instruction(cpu, address);
    return execute_unresolved_ef_efd5d9_instruction(cpu, address);
}
bool execute_shared_page_efd6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFD6D4) return execute_unresolved_ef_efd5d9_instruction(cpu, address);
    return execute_unresolved_ef_efd6d4_instruction(cpu, address);
}
bool execute_shared_page_efd9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFD9F3) return execute_unresolved_ef_efd95e_instruction(cpu, address);
    return execute_unresolved_ef_efd9f3_instruction(cpu, address);
}
bool execute_shared_page_efda(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFDA05) return execute_unresolved_ef_efd9f3_instruction(cpu, address);
    if (address < 0xEFDABD) return execute_unresolved_ef_efda05_instruction(cpu, address);
    return execute_unresolved_ef_efdabd_instruction(cpu, address);
}
bool execute_shared_page_efdb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFDB21) return execute_unresolved_ef_efdabd_instruction(cpu, address);
    if (address < 0xEFDB95) return execute_system_debug_display_menu_options_instruction(cpu, address);
    if (address < 0xEFDBF0) return execute_system_debug_integer_to_hex_debug_tiles_instruction(cpu, address);
    return execute_system_debug_integer_to_decimal_debug_tiles_instruction(cpu, address);
}
bool execute_shared_page_efdc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFDC69) return execute_system_debug_integer_to_decimal_debug_tiles_instruction(cpu, address);
    if (address < 0xEFDCBC) return execute_system_debug_integer_to_binary_debug_tiles_instruction(cpu, address);
    return execute_system_debug_display_check_position_debug_overlay_instruction(cpu, address);
}
bool execute_shared_page_efde(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFDE1A) return execute_system_debug_display_check_position_debug_overlay_instruction(cpu, address);
    return execute_system_debug_display_view_character_debug_overlay_instruction(cpu, address);
}
bool execute_shared_page_efdf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFDF0B) return execute_system_debug_display_view_character_debug_overlay_instruction(cpu, address);
    if (address < 0xEFDFC4) return execute_unresolved_ef_efdf0b_instruction(cpu, address);
    return execute_unresolved_ef_efdfc4_instruction(cpu, address);
}
bool execute_shared_page_efe0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFE07C) return execute_unresolved_ef_efdfc4_instruction(cpu, address);
    return execute_unresolved_ef_efe07c_instruction(cpu, address);
}
bool execute_shared_page_efe1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFE133) return execute_unresolved_ef_efe07c_instruction(cpu, address);
    if (address < 0xEFE175) return execute_unresolved_ef_efe133_instruction(cpu, address);
    return execute_unresolved_ef_efe175_instruction(cpu, address);
}
bool execute_shared_page_efe5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFE556) return execute_unresolved_ef_efe175_instruction(cpu, address);
    if (address < 0xEFE578) return execute_system_debug_load_debug_cursor_graphics_instruction(cpu, address);
    if (address < 0xEFE5D3) return execute_system_debug_handle_cursor_movement_instruction(cpu, address);
    return execute_system_debug_process_command_selection_instruction(cpu, address);
}
bool execute_shared_page_efe6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFE689) return execute_system_debug_process_command_selection_instruction(cpu, address);
    if (address < 0xEFE6CF) return execute_system_debug_load_menu_instruction(cpu, address);
    if (address < 0xEFE6E2) return execute_unresolved_ef_efe6cf_instruction(cpu, address);
    return execute_unresolved_ef_efe6e2_instruction(cpu, address);
}
bool execute_shared_page_efe7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFE708) return execute_unresolved_ef_efe6e2_instruction(cpu, address);
    if (address < 0xEFE746) return execute_unresolved_ef_efe708_instruction(cpu, address);
    if (address < 0xEFE759) return execute_system_debug_check_view_character_mode_instruction(cpu, address);
    if (address < 0xEFE771) return execute_unresolved_ef_efe759_instruction(cpu, address);
    return execute_unresolved_ef_efe771_instruction(cpu, address);
}
bool execute_shared_page_efe8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFE873) return execute_unresolved_ef_efe771_instruction(cpu, address);
    if (address < 0xEFE895) return execute_unresolved_ef_efe873_instruction(cpu, address);
    if (address < 0xEFE8C7) return execute_unresolved_ef_efe895_instruction(cpu, address);
    return execute_unresolved_ef_efe8c7_instruction(cpu, address);
}
bool execute_shared_page_efea(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFEA23) return execute_unresolved_ef_efe8c7_instruction(cpu, address);
    if (address < 0xEFEA4A) return execute_unresolved_ef_efea23_instruction(cpu, address);
    if (address < 0xEFEA9E) return execute_unresolved_ef_efea4a_instruction(cpu, address);
    if (address < 0xEFEAA4) return execute_unresolved_ef_efea9e_instruction(cpu, address);
    if (address < 0xEFEAC8) return execute_unresolved_ef_efeaa4_instruction(cpu, address);
    return execute_unresolved_ef_efeac8_instruction(cpu, address);
}
bool execute_shared_page_efeb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFEB2A) return execute_unresolved_ef_efeac8_instruction(cpu, address);
    return execute_unresolved_ef_efeb2a_instruction(cpu, address);
}
constexpr auto make_program_pages() {
    std::array<Routine, 0x4000> pages{};
    pages[0x0000] = &execute_shared_page_c000;
    pages[0x0001] = &execute_shared_page_c001;
    pages[0x0002] = &execute_shared_page_c002;
    pages[0x0003] = &execute_shared_page_c003;
    pages[0x0004] = &execute_shared_page_c004;
    pages[0x0005] = &execute_shared_page_c005;
    pages[0x0006] = &execute_shared_page_c006;
    pages[0x0007] = &execute_shared_page_c007;
    pages[0x0008] = &execute_shared_page_c008;
    pages[0x0009] = &execute_overworld_load_map_at_sector_instruction;
    pages[0x000A] = &execute_shared_page_c00a;
    pages[0x000B] = &execute_shared_page_c00b;
    pages[0x000C] = &execute_shared_page_c00c;
    pages[0x000D] = &execute_shared_page_c00d;
    pages[0x000E] = &execute_shared_page_c00e;
    pages[0x000F] = &execute_shared_page_c00f;
    pages[0x0010] = &execute_unresolved_c0_c00fcb_instruction;
    pages[0x0011] = &execute_shared_page_c011;
    pages[0x0012] = &execute_shared_page_c012;
    pages[0x0013] = &execute_shared_page_c013;
    pages[0x0014] = &execute_overworld_load_map_at_position_instruction;
    pages[0x0015] = &execute_shared_page_c015;
    pages[0x0016] = &execute_overworld_refresh_map_at_position_instruction;
    pages[0x0017] = &execute_shared_page_c017;
    pages[0x0018] = &execute_shared_page_c018;
    pages[0x0019] = &execute_shared_page_c019;
    pages[0x001A] = &execute_shared_page_c01a;
    pages[0x001B] = &execute_shared_page_c01b;
    pages[0x001C] = &execute_shared_page_c01c;
    pages[0x001D] = &execute_shared_page_c01d;
    pages[0x001E] = &execute_shared_page_c01e;
    pages[0x001F] = &execute_overworld_create_entity_instruction;
    pages[0x0020] = &execute_shared_page_c020;
    pages[0x0021] = &execute_shared_page_c021;
    pages[0x0022] = &execute_shared_page_c022;
    pages[0x0023] = &execute_unresolved_c0_c0222b_instruction;
    pages[0x0024] = &execute_unresolved_c0_c0222b_instruction;
    pages[0x0025] = &execute_shared_page_c025;
    pages[0x0026] = &execute_shared_page_c026;
    pages[0x0027] = &execute_unresolved_c0_c02668_instruction;
    pages[0x0028] = &execute_unresolved_c0_c02668_instruction;
    pages[0x0029] = &execute_unresolved_c0_c02668_instruction;
    pages[0x002A] = &execute_shared_page_c02a;
    pages[0x002B] = &execute_shared_page_c02b;
    pages[0x002C] = &execute_shared_page_c02c;
    pages[0x002D] = &execute_shared_page_c02d;
    pages[0x002E] = &execute_overworld_adjust_position_horizontal_instruction;
    pages[0x002F] = &execute_overworld_adjust_position_horizontal_instruction;
    pages[0x0030] = &execute_shared_page_c030;
    pages[0x0031] = &execute_overworld_adjust_position_vertical_instruction;
    pages[0x0032] = &execute_shared_page_c032;
    pages[0x0033] = &execute_unresolved_c0_c032ec_instruction;
    pages[0x0034] = &execute_shared_page_c034;
    pages[0x0035] = &execute_overworld_update_party_instruction;
    pages[0x0036] = &execute_shared_page_c036;
    pages[0x0037] = &execute_unresolved_c0_c0369b_instruction;
    pages[0x0038] = &execute_unresolved_c0_c0369b_instruction;
    pages[0x0039] = &execute_shared_page_c039;
    pages[0x003A] = &execute_shared_page_c03a;
    pages[0x003B] = &execute_unresolved_c0_c03a94_instruction;
    pages[0x003C] = &execute_shared_page_c03c;
    pages[0x003D] = &execute_shared_page_c03d;
    pages[0x003E] = &execute_shared_page_c03e;
    pages[0x003F] = &execute_shared_page_c03f;
    pages[0x0040] = &execute_shared_page_c040;
    pages[0x0041] = &execute_shared_page_c041;
    pages[0x0042] = &execute_shared_page_c042;
    pages[0x0043] = &execute_shared_page_c043;
    pages[0x0044] = &execute_shared_page_c044;
    pages[0x0045] = &execute_unresolved_c0_c0449b_instruction;
    pages[0x0046] = &execute_unresolved_c0_c0449b_instruction;
    pages[0x0047] = &execute_shared_page_c047;
    pages[0x0048] = &execute_shared_page_c048;
    pages[0x0049] = &execute_unresolved_c0_c048d3_instruction;
    pages[0x004A] = &execute_shared_page_c04a;
    pages[0x004B] = &execute_shared_page_c04b;
    pages[0x004C] = &execute_shared_page_c04c;
    pages[0x004D] = &execute_shared_page_c04d;
    pages[0x004E] = &execute_shared_page_c04e;
    pages[0x004F] = &execute_shared_page_c04f;
    pages[0x0050] = &execute_unresolved_c0_c04ffe_instruction;
    pages[0x0051] = &execute_unresolved_c0_c04ffe_instruction;
    pages[0x0052] = &execute_shared_page_c052;
    pages[0x0053] = &execute_unresolved_c0_c052d4_instruction;
    pages[0x0054] = &execute_shared_page_c054;
    pages[0x0055] = &execute_shared_page_c055;
    pages[0x0056] = &execute_shared_page_c056;
    pages[0x0057] = &execute_shared_page_c057;
    pages[0x0058] = &execute_shared_page_c058;
    pages[0x0059] = &execute_shared_page_c059;
    pages[0x005A] = &execute_unresolved_c0_c059ef_instruction;
    pages[0x005B] = &execute_shared_page_c05b;
    pages[0x005C] = &execute_shared_page_c05c;
    pages[0x005D] = &execute_shared_page_c05d;
    pages[0x005E] = &execute_shared_page_c05e;
    pages[0x005F] = &execute_shared_page_c05f;
    pages[0x0060] = &execute_overworld_npc_collision_check_instruction;
    pages[0x0061] = &execute_shared_page_c061;
    pages[0x0062] = &execute_shared_page_c062;
    pages[0x0063] = &execute_unresolved_c0_c06267_instruction;
    pages[0x0064] = &execute_shared_page_c064;
    pages[0x0065] = &execute_shared_page_c065;
    pages[0x0066] = &execute_shared_page_c066;
    pages[0x0067] = &execute_overworld_screen_transition_instruction;
    pages[0x0068] = &execute_shared_page_c068;
    pages[0x0069] = &execute_shared_page_c069;
    pages[0x006A] = &execute_shared_page_c06a;
    pages[0x006B] = &execute_shared_page_c06b;
    pages[0x006C] = &execute_overworld_door_transition_instruction;
    pages[0x006D] = &execute_overworld_door_transition_instruction;
    pages[0x006E] = &execute_shared_page_c06e;
    pages[0x006F] = &execute_shared_page_c06f;
    pages[0x0070] = &execute_shared_page_c070;
    pages[0x0071] = &execute_shared_page_c071;
    pages[0x0072] = &execute_shared_page_c072;
    pages[0x0073] = &execute_shared_page_c073;
    pages[0x0074] = &execute_shared_page_c074;
    pages[0x0075] = &execute_shared_page_c075;
    pages[0x0076] = &execute_shared_page_c076;
    pages[0x0077] = &execute_shared_page_c077;
    pages[0x0078] = &execute_shared_page_c078;
    pages[0x0079] = &execute_shared_page_c079;
    pages[0x007A] = &execute_shared_page_c07a;
    pages[0x007B] = &execute_shared_page_c07b;
    pages[0x007C] = &execute_shared_page_c07c;
    pages[0x007D] = &execute_system_strcat_instruction;
    pages[0x0080] = &execute_system_reset_instruction;
    pages[0x0081] = &execute_shared_page_c081;
    pages[0x0082] = &execute_system_irq_nmi_instruction;
    pages[0x0083] = &execute_shared_page_c083;
    pages[0x0084] = &execute_shared_page_c084;
    pages[0x0085] = &execute_shared_page_c085;
    pages[0x0086] = &execute_shared_page_c086;
    pages[0x0087] = &execute_shared_page_c087;
    pages[0x0088] = &execute_shared_page_c088;
    pages[0x0089] = &execute_system_oam_clear_instruction;
    pages[0x008A] = &execute_system_oam_clear_instruction;
    pages[0x008B] = &execute_shared_page_c08b;
    pages[0x008C] = &execute_shared_page_c08c;
    pages[0x008D] = &execute_shared_page_c08d;
    pages[0x008E] = &execute_shared_page_c08e;
    pages[0x008F] = &execute_shared_page_c08f;
    pages[0x0090] = &execute_shared_page_c090;
    pages[0x0091] = &execute_shared_page_c091;
    pages[0x0092] = &execute_shared_page_c092;
    pages[0x0093] = &execute_overworld_init_entity_instruction;
    pages[0x0094] = &execute_shared_page_c094;
    pages[0x0095] = &execute_shared_page_c095;
    pages[0x0096] = &execute_shared_page_c096;
    pages[0x0097] = &execute_shared_page_c097;
    pages[0x0098] = &execute_shared_page_c098;
    pages[0x0099] = &execute_shared_page_c099;
    pages[0x009A] = &execute_shared_page_c09a;
    pages[0x009B] = &execute_shared_page_c09b;
    pages[0x009C] = &execute_shared_page_c09c;
    pages[0x009D] = &execute_shared_page_c09d;
    pages[0x009E] = &execute_shared_page_c09e;
    pages[0x009F] = &execute_shared_page_c09f;
    pages[0x00A0] = &execute_shared_page_c0a0;
    pages[0x00A1] = &execute_shared_page_c0a1;
    pages[0x00A2] = &execute_shared_page_c0a2;
    pages[0x00A3] = &execute_shared_page_c0a3;
    pages[0x00A4] = &execute_shared_page_c0a4;
    pages[0x00A5] = &execute_shared_page_c0a5;
    pages[0x00A6] = &execute_shared_page_c0a6;
    pages[0x00A7] = &execute_shared_page_c0a7;
    pages[0x00A8] = &execute_shared_page_c0a8;
    pages[0x00A9] = &execute_shared_page_c0a9;
    pages[0x00AA] = &execute_shared_page_c0aa;
    pages[0x00AB] = &execute_shared_page_c0ab;
    pages[0x00AC] = &execute_shared_page_c0ac;
    pages[0x00AD] = &execute_shared_page_c0ad;
    pages[0x00AE] = &execute_shared_page_c0ae;
    pages[0x00AF] = &execute_shared_page_c0af;
    pages[0x00B0] = &execute_shared_page_c0b0;
    pages[0x00B1] = &execute_shared_page_c0b1;
    pages[0x00B2] = &execute_unresolved_c0_c0b149_instruction;
    pages[0x00B4] = &execute_system_math_cosine_sine_instruction;
    pages[0x00B5] = &execute_system_file_select_init_instruction;
    pages[0x00B6] = &execute_shared_page_c0b6;
    pages[0x00B7] = &execute_shared_page_c0b7;
    pages[0x00B8] = &execute_system_main_instruction;
    pages[0x00B9] = &execute_shared_page_c0b9;
    pages[0x00BA] = &execute_shared_page_c0ba;
    pages[0x00BB] = &execute_unresolved_c0_c0ba35_instruction;
    pages[0x00BC] = &execute_shared_page_c0bc;
    pages[0x00BD] = &execute_shared_page_c0bd;
    pages[0x00BE] = &execute_unresolved_c0_c0bd96_instruction;
    pages[0x00BF] = &execute_shared_page_c0bf;
    pages[0x00C0] = &execute_shared_page_c0c0;
    pages[0x00C1] = &execute_shared_page_c0c1;
    pages[0x00C2] = &execute_shared_page_c0c2;
    pages[0x00C3] = &execute_shared_page_c0c3;
    pages[0x00C4] = &execute_shared_page_c0c4;
    pages[0x00C5] = &execute_shared_page_c0c5;
    pages[0x00C6] = &execute_shared_page_c0c6;
    pages[0x00C7] = &execute_shared_page_c0c7;
    pages[0x00C8] = &execute_shared_page_c0c8;
    pages[0x00C9] = &execute_unresolved_c0_c0c83b_instruction;
    pages[0x00CA] = &execute_shared_page_c0ca;
    pages[0x00CB] = &execute_shared_page_c0cb;
    pages[0x00CC] = &execute_shared_page_c0cc;
    pages[0x00CD] = &execute_shared_page_c0cd;
    pages[0x00CE] = &execute_shared_page_c0ce;
    pages[0x00CF] = &execute_shared_page_c0cf;
    pages[0x00D0] = &execute_shared_page_c0d0;
    pages[0x00D1] = &execute_shared_page_c0d1;
    pages[0x00D2] = &execute_unresolved_c0_c0d19b_instruction;
    pages[0x00D3] = &execute_unresolved_c0_c0d19b_instruction;
    pages[0x00D4] = &execute_shared_page_c0d4;
    pages[0x00D5] = &execute_shared_page_c0d5;
    pages[0x00D6] = &execute_unresolved_c0_c0d5b0_instruction;
    pages[0x00D7] = &execute_shared_page_c0d7;
    pages[0x00D8] = &execute_unresolved_c0_c0d7f7_instruction;
    pages[0x00D9] = &execute_shared_page_c0d9;
    pages[0x00DA] = &execute_shared_page_c0da;
    pages[0x00DB] = &execute_shared_page_c0db;
    pages[0x00DC] = &execute_shared_page_c0dc;
    pages[0x00DD] = &execute_shared_page_c0dd;
    pages[0x00DE] = &execute_shared_page_c0de;
    pages[0x00DF] = &execute_shared_page_c0df;
    pages[0x00E0] = &execute_unresolved_c0_c0df22_instruction;
    pages[0x00E1] = &execute_shared_page_c0e1;
    pages[0x00E2] = &execute_shared_page_c0e2;
    pages[0x00E3] = &execute_shared_page_c0e3;
    pages[0x00E4] = &execute_shared_page_c0e4;
    pages[0x00E5] = &execute_shared_page_c0e5;
    pages[0x00E6] = &execute_shared_page_c0e6;
    pages[0x00E7] = &execute_shared_page_c0e7;
    pages[0x00E8] = &execute_shared_page_c0e8;
    pages[0x00E9] = &execute_shared_page_c0e9;
    pages[0x00EA] = &execute_shared_page_c0ea;
    pages[0x00EB] = &execute_shared_page_c0eb;
    pages[0x00EC] = &execute_shared_page_c0ec;
    pages[0x00ED] = &execute_shared_page_c0ed;
    pages[0x00EE] = &execute_shared_page_c0ee;
    pages[0x00EF] = &execute_shared_page_c0ef;
    pages[0x00F0] = &execute_shared_page_c0f0;
    pages[0x00F1] = &execute_shared_page_c0f1;
    pages[0x00F2] = &execute_shared_page_c0f2;
    pages[0x00F3] = &execute_shared_page_c0f3;
    pages[0x00F4] = &execute_shared_page_c0f4;
    pages[0x00F5] = &execute_ending_credits_scroll_frame_instruction;
    pages[0x00F6] = &execute_ending_credits_scroll_frame_instruction;
    pages[0x00F7] = &execute_ending_credits_scroll_frame_instruction;
    pages[0x00F8] = &execute_ending_credits_scroll_frame_instruction;
    pages[0x0100] = &execute_shared_page_c100;
    pages[0x0101] = &execute_shared_page_c101;
    pages[0x0102] = &execute_shared_page_c102;
    pages[0x0103] = &execute_shared_page_c103;
    pages[0x0104] = &execute_shared_page_c104;
    pages[0x0105] = &execute_text_create_window_instruction;
    pages[0x0106] = &execute_text_create_window_instruction;
    pages[0x0107] = &execute_shared_page_c107;
    pages[0x0108] = &execute_unresolved_c1_c107af_instruction;
    pages[0x0109] = &execute_unresolved_c1_c107af_instruction;
    pages[0x010A] = &execute_shared_page_c10a;
    pages[0x010B] = &execute_shared_page_c10b;
    pages[0x010C] = &execute_shared_page_c10c;
    pages[0x010D] = &execute_shared_page_c10d;
    pages[0x010E] = &execute_shared_page_c10e;
    pages[0x010F] = &execute_shared_page_c10f;
    pages[0x0110] = &execute_shared_page_c110;
    pages[0x0111] = &execute_text_num_select_prompt_instruction;
    pages[0x0112] = &execute_text_num_select_prompt_instruction;
    pages[0x0113] = &execute_shared_page_c113;
    pages[0x0114] = &execute_shared_page_c114;
    pages[0x0115] = &execute_shared_page_c115;
    pages[0x0116] = &execute_shared_page_c116;
    pages[0x0117] = &execute_shared_page_c117;
    pages[0x0118] = &execute_shared_page_c118;
    pages[0x0119] = &execute_shared_page_c119;
    pages[0x011A] = &execute_text_selection_menu_instruction;
    pages[0x011B] = &execute_text_selection_menu_instruction;
    pages[0x011C] = &execute_text_selection_menu_instruction;
    pages[0x011D] = &execute_text_selection_menu_instruction;
    pages[0x011E] = &execute_text_selection_menu_instruction;
    pages[0x011F] = &execute_shared_page_c11f;
    pages[0x0120] = &execute_shared_page_c120;
    pages[0x0121] = &execute_shared_page_c121;
    pages[0x0122] = &execute_unresolved_c1_c121b8_instruction;
    pages[0x0123] = &execute_shared_page_c123;
    pages[0x0124] = &execute_shared_page_c124;
    pages[0x0125] = &execute_unresolved_c1_c1244c_instruction;
    pages[0x0126] = &execute_unresolved_c1_c1244c_instruction;
    pages[0x0127] = &execute_shared_page_c127;
    pages[0x0128] = &execute_text_character_select_prompt_instruction;
    pages[0x0129] = &execute_text_character_select_prompt_instruction;
    pages[0x012A] = &execute_text_character_select_prompt_instruction;
    pages[0x012B] = &execute_shared_page_c12b;
    pages[0x012C] = &execute_shared_page_c12c;
    pages[0x012D] = &execute_shared_page_c12d;
    pages[0x012E] = &execute_shared_page_c12e;
    pages[0x012F] = &execute_system_debug_y_button_menu_instruction;
    pages[0x0130] = &execute_system_debug_y_button_menu_instruction;
    pages[0x0131] = &execute_shared_page_c131;
    pages[0x0132] = &execute_shared_page_c132;
    pages[0x0133] = &execute_shared_page_c133;
    pages[0x0134] = &execute_shared_page_c134;
    pages[0x0135] = &execute_overworld_open_menu_instruction;
    pages[0x0136] = &execute_overworld_open_menu_instruction;
    pages[0x0137] = &execute_overworld_open_menu_instruction;
    pages[0x0138] = &execute_overworld_open_menu_instruction;
    pages[0x0139] = &execute_overworld_open_menu_instruction;
    pages[0x013A] = &execute_overworld_open_menu_instruction;
    pages[0x013B] = &execute_overworld_open_menu_instruction;
    pages[0x013C] = &execute_shared_page_c13c;
    pages[0x013D] = &execute_shared_page_c13d;
    pages[0x013E] = &execute_shared_page_c13e;
    pages[0x013F] = &execute_overworld_debug_y_button_goods_instruction;
    pages[0x0140] = &execute_shared_page_c140;
    pages[0x0141] = &execute_shared_page_c141;
    pages[0x0142] = &execute_shared_page_c142;
    pages[0x0143] = &execute_shared_page_c143;
    pages[0x0144] = &execute_shared_page_c144;
    pages[0x0145] = &execute_shared_page_c145;
    pages[0x0146] = &execute_shared_page_c146;
    pages[0x0147] = &execute_shared_page_c147;
    pages[0x0148] = &execute_shared_page_c148;
    pages[0x0149] = &execute_shared_page_c149;
    pages[0x014A] = &execute_shared_page_c14a;
    pages[0x014B] = &execute_shared_page_c14b;
    pages[0x014C] = &execute_shared_page_c14c;
    pages[0x014D] = &execute_shared_page_c14d;
    pages[0x014E] = &execute_shared_page_c14e;
    pages[0x014F] = &execute_shared_page_c14f;
    pages[0x0150] = &execute_shared_page_c150;
    pages[0x0151] = &execute_shared_page_c151;
    pages[0x0152] = &execute_shared_page_c152;
    pages[0x0153] = &execute_shared_page_c153;
    pages[0x0154] = &execute_shared_page_c154;
    pages[0x0155] = &execute_shared_page_c155;
    pages[0x0156] = &execute_shared_page_c156;
    pages[0x0157] = &execute_shared_page_c157;
    pages[0x0158] = &execute_shared_page_c158;
    pages[0x0159] = &execute_shared_page_c159;
    pages[0x015A] = &execute_text_ccs_test_has_enough_money_instruction;
    pages[0x015B] = &execute_shared_page_c15b;
    pages[0x015C] = &execute_shared_page_c15c;
    pages[0x015D] = &execute_shared_page_c15d;
    pages[0x015E] = &execute_shared_page_c15e;
    pages[0x015F] = &execute_shared_page_c15f;
    pages[0x0160] = &execute_shared_page_c160;
    pages[0x0161] = &execute_shared_page_c161;
    pages[0x0162] = &execute_shared_page_c162;
    pages[0x0163] = &execute_shared_page_c163;
    pages[0x0164] = &execute_shared_page_c164;
    pages[0x0165] = &execute_shared_page_c165;
    pages[0x0166] = &execute_shared_page_c166;
    pages[0x0167] = &execute_shared_page_c167;
    pages[0x0168] = &execute_shared_page_c168;
    pages[0x0169] = &execute_shared_page_c169;
    pages[0x016A] = &execute_shared_page_c16a;
    pages[0x016B] = &execute_shared_page_c16b;
    pages[0x016C] = &execute_shared_page_c16c;
    pages[0x016D] = &execute_shared_page_c16d;
    pages[0x016E] = &execute_shared_page_c16e;
    pages[0x016F] = &execute_shared_page_c16f;
    pages[0x0170] = &execute_shared_page_c170;
    pages[0x0171] = &execute_shared_page_c171;
    pages[0x0172] = &execute_shared_page_c172;
    pages[0x0173] = &execute_shared_page_c173;
    pages[0x0174] = &execute_shared_page_c174;
    pages[0x0175] = &execute_shared_page_c175;
    pages[0x0176] = &execute_shared_page_c176;
    pages[0x0177] = &execute_shared_page_c177;
    pages[0x0178] = &execute_shared_page_c178;
    pages[0x0179] = &execute_shared_page_c179;
    pages[0x017A] = &execute_text_ccs_tree_19_instruction;
    pages[0x017B] = &execute_shared_page_c17b;
    pages[0x017C] = &execute_shared_page_c17c;
    pages[0x017D] = &execute_shared_page_c17d;
    pages[0x017E] = &execute_text_ccs_tree_1c_instruction;
    pages[0x017F] = &execute_shared_page_c17f;
    pages[0x0180] = &execute_text_ccs_tree_1d_instruction;
    pages[0x0181] = &execute_shared_page_c181;
    pages[0x0182] = &execute_text_ccs_tree_1f_instruction;
    pages[0x0183] = &execute_text_ccs_tree_1f_instruction;
    pages[0x0184] = &execute_text_ccs_tree_1f_instruction;
    pages[0x0185] = &execute_text_ccs_tree_1f_instruction;
    pages[0x0186] = &execute_shared_page_c186;
    pages[0x0187] = &execute_text_display_text_instruction;
    pages[0x0188] = &execute_text_display_text_instruction;
    pages[0x0189] = &execute_text_display_text_instruction;
    pages[0x018A] = &execute_text_display_text_instruction;
    pages[0x018B] = &execute_shared_page_c18b;
    pages[0x018C] = &execute_shared_page_c18c;
    pages[0x018D] = &execute_miscellaneous_remove_item_from_inventory_instruction;
    pages[0x018E] = &execute_shared_page_c18e;
    pages[0x018F] = &execute_shared_page_c18f;
    pages[0x0190] = &execute_shared_page_c190;
    pages[0x0191] = &execute_shared_page_c191;
    pages[0x0192] = &execute_shared_page_c192;
    pages[0x0193] = &execute_shared_page_c193;
    pages[0x0194] = &execute_shared_page_c194;
    pages[0x0195] = &execute_shared_page_c195;
    pages[0x0196] = &execute_unresolved_c1_c1952f_instruction;
    pages[0x0197] = &execute_unresolved_c1_c1952f_instruction;
    pages[0x0198] = &execute_shared_page_c198;
    pages[0x0199] = &execute_miscellaneous_inventory_get_item_name_instruction;
    pages[0x019A] = &execute_shared_page_c19a;
    pages[0x019B] = &execute_shared_page_c19b;
    pages[0x019C] = &execute_shared_page_c19c;
    pages[0x019D] = &execute_shared_page_c19d;
    pages[0x019E] = &execute_shared_page_c19e;
    pages[0x019F] = &execute_shared_page_c19f;
    pages[0x01A0] = &execute_unresolved_c1_c19f29_instruction;
    pages[0x01A1] = &execute_shared_page_c1a1;
    pages[0x01A2] = &execute_unresolved_c1_c1a1d8_instruction;
    pages[0x01A3] = &execute_unresolved_c1_c1a1d8_instruction;
    pages[0x01A4] = &execute_unresolved_c1_c1a1d8_instruction;
    pages[0x01A5] = &execute_unresolved_c1_c1a1d8_instruction;
    pages[0x01A6] = &execute_unresolved_c1_c1a1d8_instruction;
    pages[0x01A7] = &execute_shared_page_c1a7;
    pages[0x01A8] = &execute_unresolved_c1_c1a795_instruction;
    pages[0x01A9] = &execute_unresolved_c1_c1a795_instruction;
    pages[0x01AA] = &execute_shared_page_c1aa;
    pages[0x01AB] = &execute_unresolved_c1_c1aafa_instruction;
    pages[0x01AC] = &execute_shared_page_c1ac;
    pages[0x01AD] = &execute_shared_page_c1ad;
    pages[0x01AE] = &execute_battle_determine_targetting_instruction;
    pages[0x01AF] = &execute_shared_page_c1af;
    pages[0x01B0] = &execute_overworld_use_item_instruction;
    pages[0x01B1] = &execute_overworld_use_item_instruction;
    pages[0x01B2] = &execute_overworld_use_item_instruction;
    pages[0x01B3] = &execute_overworld_use_item_instruction;
    pages[0x01B4] = &execute_overworld_use_item_instruction;
    pages[0x01B5] = &execute_shared_page_c1b5;
    pages[0x01B6] = &execute_unresolved_c1_c1b5b6_instruction;
    pages[0x01B7] = &execute_unresolved_c1_c1b5b6_instruction;
    pages[0x01B8] = &execute_unresolved_c1_c1b5b6_instruction;
    pages[0x01B9] = &execute_unresolved_c1_c1b5b6_instruction;
    pages[0x01BA] = &execute_unresolved_c1_c1b5b6_instruction;
    pages[0x01BB] = &execute_shared_page_c1bb;
    pages[0x01BC] = &execute_shared_page_c1bc;
    pages[0x01BD] = &execute_overworld_teleport_instruction;
    pages[0x01BE] = &execute_shared_page_c1be;
    pages[0x01BF] = &execute_unresolved_c1_c1befc_instruction;
    pages[0x01C0] = &execute_shared_page_c1c0;
    pages[0x01C1] = &execute_shared_page_c1c1;
    pages[0x01C2] = &execute_unresolved_c1_c1c1ba_instruction;
    pages[0x01C3] = &execute_shared_page_c1c3;
    pages[0x01C4] = &execute_shared_page_c1c4;
    pages[0x01C5] = &execute_battle_generate_psi_list_instruction;
    pages[0x01C6] = &execute_battle_generate_psi_list_instruction;
    pages[0x01C7] = &execute_battle_generate_psi_list_instruction;
    pages[0x01C8] = &execute_shared_page_c1c8;
    pages[0x01C9] = &execute_unresolved_c1_c1c8bc_instruction;
    pages[0x01CA] = &execute_shared_page_c1ca;
    pages[0x01CB] = &execute_shared_page_c1cb;
    pages[0x01CC] = &execute_battle_battle_psi_menu_instruction;
    pages[0x01CD] = &execute_battle_battle_psi_menu_instruction;
    pages[0x01CE] = &execute_shared_page_c1ce;
    pages[0x01CF] = &execute_shared_page_c1cf;
    pages[0x01D0] = &execute_shared_page_c1d0;
    pages[0x01D1] = &execute_shared_page_c1d1;
    pages[0x01D2] = &execute_miscellaneous_level_up_char_instruction;
    pages[0x01D3] = &execute_miscellaneous_level_up_char_instruction;
    pages[0x01D4] = &execute_miscellaneous_level_up_char_instruction;
    pages[0x01D5] = &execute_miscellaneous_level_up_char_instruction;
    pages[0x01D6] = &execute_miscellaneous_level_up_char_instruction;
    pages[0x01D7] = &execute_miscellaneous_level_up_char_instruction;
    pages[0x01D8] = &execute_shared_page_c1d8;
    pages[0x01D9] = &execute_shared_page_c1d9;
    pages[0x01DA] = &execute_miscellaneous_gain_exp_instruction;
    pages[0x01DB] = &execute_shared_page_c1db;
    pages[0x01DC] = &execute_shared_page_c1dc;
    pages[0x01DD] = &execute_shared_page_c1dd;
    pages[0x01DE] = &execute_shared_page_c1de;
    pages[0x01DF] = &execute_battle_actions_switch_weapon_instruction;
    pages[0x01E0] = &execute_shared_page_c1e0;
    pages[0x01E1] = &execute_shared_page_c1e1;
    pages[0x01E2] = &execute_battle_enemy_select_mode_instruction;
    pages[0x01E3] = &execute_battle_enemy_select_mode_instruction;
    pages[0x01E4] = &execute_shared_page_c1e4;
    pages[0x01E5] = &execute_shared_page_c1e5;
    pages[0x01E6] = &execute_text_text_input_dialog_instruction;
    pages[0x01E7] = &execute_text_text_input_dialog_instruction;
    pages[0x01E8] = &execute_text_text_input_dialog_instruction;
    pages[0x01E9] = &execute_text_text_input_dialog_instruction;
    pages[0x01EA] = &execute_shared_page_c1ea;
    pages[0x01EB] = &execute_text_enter_your_name_please_instruction;
    pages[0x01EC] = &execute_shared_page_c1ec;
    pages[0x01ED] = &execute_shared_page_c1ed;
    pages[0x01EE] = &execute_introduction_file_select_menu_instruction;
    pages[0x01EF] = &execute_introduction_file_select_menu_instruction;
    pages[0x01F0] = &execute_shared_page_c1f0;
    pages[0x01F1] = &execute_shared_page_c1f1;
    pages[0x01F2] = &execute_shared_page_c1f2;
    pages[0x01F3] = &execute_shared_page_c1f3;
    pages[0x01F4] = &execute_shared_page_c1f4;
    pages[0x01F5] = &execute_shared_page_c1f5;
    pages[0x01F6] = &execute_shared_page_c1f6;
    pages[0x01F7] = &execute_introduction_file_select_open_flavour_menu_instruction;
    pages[0x01F8] = &execute_shared_page_c1f8;
    pages[0x01F9] = &execute_introduction_file_select_menu_loop_instruction;
    pages[0x01FA] = &execute_introduction_file_select_menu_loop_instruction;
    pages[0x01FB] = &execute_introduction_file_select_menu_loop_instruction;
    pages[0x01FC] = &execute_introduction_file_select_menu_loop_instruction;
    pages[0x01FD] = &execute_introduction_file_select_menu_loop_instruction;
    pages[0x01FE] = &execute_introduction_file_select_menu_loop_instruction;
    pages[0x01FF] = &execute_shared_page_c1ff;
    pages[0x0200] = &execute_shared_page_c200;
    pages[0x0201] = &execute_unresolved_c2_c200d9_instruction;
    pages[0x0202] = &execute_shared_page_c202;
    pages[0x0203] = &execute_shared_page_c203;
    pages[0x0204] = &execute_text_hp_pp_window_draw_instruction;
    pages[0x0205] = &execute_text_hp_pp_window_draw_instruction;
    pages[0x0206] = &execute_text_hp_pp_window_draw_instruction;
    pages[0x0207] = &execute_shared_page_c207;
    pages[0x0208] = &execute_shared_page_c208;
    pages[0x0209] = &execute_shared_page_c209;
    pages[0x020A] = &execute_shared_page_c20a;
    pages[0x020B] = &execute_shared_page_c20b;
    pages[0x020C] = &execute_unresolved_c2_c20b65_instruction;
    pages[0x020D] = &execute_shared_page_c20d;
    pages[0x020E] = &execute_text_hp_pp_window_fill_tile_buffer_instruction;
    pages[0x020F] = &execute_shared_page_c20f;
    pages[0x0210] = &execute_shared_page_c210;
    pages[0x0211] = &execute_miscellaneous_hp_pp_roller_instruction;
    pages[0x0212] = &execute_miscellaneous_hp_pp_roller_instruction;
    pages[0x0213] = &execute_shared_page_c213;
    pages[0x0214] = &execute_text_update_hppp_meter_tiles_instruction;
    pages[0x0215] = &execute_text_update_hppp_meter_tiles_instruction;
    pages[0x0216] = &execute_shared_page_c216;
    pages[0x0217] = &execute_unresolved_c2_c216db_instruction;
    pages[0x0218] = &execute_shared_page_c218;
    pages[0x0219] = &execute_shared_page_c219;
    pages[0x021A] = &execute_shared_page_c21a;
    pages[0x021B] = &execute_shared_page_c21b;
    pages[0x021C] = &execute_shared_page_c21c;
    pages[0x021D] = &execute_shared_page_c21d;
    pages[0x021E] = &execute_shared_page_c21e;
    pages[0x021F] = &execute_battle_calc_resistances_instruction;
    pages[0x0220] = &execute_battle_calc_resistances_instruction;
    pages[0x0221] = &execute_battle_calc_resistances_instruction;
    pages[0x0222] = &execute_shared_page_c222;
    pages[0x0223] = &execute_shared_page_c223;
    pages[0x0224] = &execute_shared_page_c224;
    pages[0x0225] = &execute_shared_page_c225;
    pages[0x0226] = &execute_shared_page_c226;
    pages[0x0227] = &execute_shared_page_c227;
    pages[0x0228] = &execute_shared_page_c228;
    pages[0x0229] = &execute_shared_page_c229;
    pages[0x022A] = &execute_shared_page_c22a;
    pages[0x022B] = &execute_unresolved_c2_c22a3a_instruction;
    pages[0x022C] = &execute_unresolved_c2_c22a3a_instruction;
    pages[0x022D] = &execute_unresolved_c2_c22a3a_instruction;
    pages[0x022E] = &execute_unresolved_c2_c22a3a_instruction;
    pages[0x022F] = &execute_shared_page_c22f;
    pages[0x0230] = &execute_shared_page_c230;
    pages[0x0231] = &execute_shared_page_c231;
    pages[0x0232] = &execute_battle_menu_handler_instruction;
    pages[0x0233] = &execute_battle_menu_handler_instruction;
    pages[0x0234] = &execute_battle_menu_handler_instruction;
    pages[0x0235] = &execute_battle_menu_handler_instruction;
    pages[0x0236] = &execute_battle_menu_handler_instruction;
    pages[0x0237] = &execute_battle_menu_handler_instruction;
    pages[0x0238] = &execute_battle_menu_handler_instruction;
    pages[0x0239] = &execute_battle_menu_handler_instruction;
    pages[0x023A] = &execute_battle_menu_handler_instruction;
    pages[0x023B] = &execute_shared_page_c23b;
    pages[0x023C] = &execute_text_fix_attacker_name_instruction;
    pages[0x023D] = &execute_shared_page_c23d;
    pages[0x023E] = &execute_shared_page_c23e;
    pages[0x023F] = &execute_shared_page_c23f;
    pages[0x0240] = &execute_shared_page_c240;
    pages[0x0241] = &execute_shared_page_c241;
    pages[0x0242] = &execute_battle_find_stealable_items_instruction;
    pages[0x0243] = &execute_shared_page_c243;
    pages[0x0244] = &execute_shared_page_c244;
    pages[0x0245] = &execute_battle_choose_target_instruction;
    pages[0x0246] = &execute_battle_choose_target_instruction;
    pages[0x0247] = &execute_shared_page_c247;
    pages[0x0248] = &execute_shared_page_c248;
    pages[0x0249] = &execute_battle_main_battle_routine_instruction;
    pages[0x024A] = &execute_battle_main_battle_routine_instruction;
    pages[0x024B] = &execute_battle_main_battle_routine_instruction;
    pages[0x024C] = &execute_battle_main_battle_routine_instruction;
    pages[0x024D] = &execute_battle_main_battle_routine_instruction;
    pages[0x024E] = &execute_battle_main_battle_routine_instruction;
    pages[0x024F] = &execute_battle_main_battle_routine_instruction;
    pages[0x0250] = &execute_battle_main_battle_routine_instruction;
    pages[0x0251] = &execute_battle_main_battle_routine_instruction;
    pages[0x0252] = &execute_battle_main_battle_routine_instruction;
    pages[0x0253] = &execute_battle_main_battle_routine_instruction;
    pages[0x0254] = &execute_battle_main_battle_routine_instruction;
    pages[0x0255] = &execute_battle_main_battle_routine_instruction;
    pages[0x0256] = &execute_battle_main_battle_routine_instruction;
    pages[0x0257] = &execute_battle_main_battle_routine_instruction;
    pages[0x0258] = &execute_battle_main_battle_routine_instruction;
    pages[0x0259] = &execute_battle_main_battle_routine_instruction;
    pages[0x025A] = &execute_battle_main_battle_routine_instruction;
    pages[0x025B] = &execute_battle_main_battle_routine_instruction;
    pages[0x025C] = &execute_battle_main_battle_routine_instruction;
    pages[0x025D] = &execute_battle_main_battle_routine_instruction;
    pages[0x025E] = &execute_battle_main_battle_routine_instruction;
    pages[0x025F] = &execute_battle_main_battle_routine_instruction;
    pages[0x0260] = &execute_battle_main_battle_routine_instruction;
    pages[0x0261] = &execute_shared_page_c261;
    pages[0x0262] = &execute_battle_instant_win_handler_instruction;
    pages[0x0263] = &execute_battle_instant_win_handler_instruction;
    pages[0x0264] = &execute_battle_instant_win_handler_instruction;
    pages[0x0265] = &execute_shared_page_c265;
    pages[0x0266] = &execute_shared_page_c266;
    pages[0x0267] = &execute_battle_instant_win_check_instruction;
    pages[0x0268] = &execute_battle_instant_win_check_instruction;
    pages[0x0269] = &execute_shared_page_c269;
    pages[0x026A] = &execute_shared_page_c26a;
    pages[0x026B] = &execute_shared_page_c26b;
    pages[0x026C] = &execute_shared_page_c26c;
    pages[0x026D] = &execute_shared_page_c26d;
    pages[0x026E] = &execute_shared_page_c26e;
    pages[0x026F] = &execute_shared_page_c26f;
    pages[0x0270] = &execute_shared_page_c270;
    pages[0x0271] = &execute_shared_page_c271;
    pages[0x0272] = &execute_shared_page_c272;
    pages[0x0273] = &execute_shared_page_c273;
    pages[0x0274] = &execute_battle_revive_target_instruction;
    pages[0x0275] = &execute_shared_page_c275;
    pages[0x0276] = &execute_battle_ko_target_instruction;
    pages[0x0277] = &execute_battle_ko_target_instruction;
    pages[0x0278] = &execute_battle_ko_target_instruction;
    pages[0x0279] = &execute_battle_ko_target_instruction;
    pages[0x027A] = &execute_battle_ko_target_instruction;
    pages[0x027B] = &execute_battle_ko_target_instruction;
    pages[0x027C] = &execute_shared_page_c27c;
    pages[0x027D] = &execute_shared_page_c27d;
    pages[0x027E] = &execute_shared_page_c27e;
    pages[0x027F] = &execute_battle_calc_damage_instruction;
    pages[0x0280] = &execute_battle_calc_damage_instruction;
    pages[0x0281] = &execute_shared_page_c281;
    pages[0x0282] = &execute_shared_page_c282;
    pages[0x0283] = &execute_shared_page_c283;
    pages[0x0284] = &execute_shared_page_c284;
    pages[0x0285] = &execute_shared_page_c285;
    pages[0x0286] = &execute_shared_page_c286;
    pages[0x0287] = &execute_shared_page_c287;
    pages[0x0288] = &execute_shared_page_c288;
    pages[0x0289] = &execute_shared_page_c289;
    pages[0x028A] = &execute_shared_page_c28a;
    pages[0x028B] = &execute_shared_page_c28b;
    pages[0x028C] = &execute_shared_page_c28c;
    pages[0x028D] = &execute_shared_page_c28d;
    pages[0x028E] = &execute_shared_page_c28e;
    pages[0x028F] = &execute_shared_page_c28f;
    pages[0x0290] = &execute_shared_page_c290;
    pages[0x0291] = &execute_shared_page_c291;
    pages[0x0292] = &execute_shared_page_c292;
    pages[0x0293] = &execute_battle_actions_master_barf_death_instruction;
    pages[0x0294] = &execute_shared_page_c294;
    pages[0x0295] = &execute_shared_page_c295;
    pages[0x0296] = &execute_shared_page_c296;
    pages[0x0297] = &execute_battle_actions_psi_thunder_common_instruction;
    pages[0x0298] = &execute_shared_page_c298;
    pages[0x0299] = &execute_shared_page_c299;
    pages[0x029A] = &execute_shared_page_c29a;
    pages[0x029B] = &execute_shared_page_c29b;
    pages[0x029C] = &execute_shared_page_c29c;
    pages[0x029D] = &execute_shared_page_c29d;
    pages[0x029E] = &execute_shared_page_c29e;
    pages[0x029F] = &execute_shared_page_c29f;
    pages[0x02A0] = &execute_shared_page_c2a0;
    pages[0x02A1] = &execute_shared_page_c2a1;
    pages[0x02A2] = &execute_shared_page_c2a2;
    pages[0x02A3] = &execute_shared_page_c2a3;
    pages[0x02A4] = &execute_shared_page_c2a4;
    pages[0x02A5] = &execute_shared_page_c2a5;
    pages[0x02A6] = &execute_shared_page_c2a6;
    pages[0x02A7] = &execute_battle_actions_bomb_common_instruction;
    pages[0x02A8] = &execute_shared_page_c2a8;
    pages[0x02A9] = &execute_shared_page_c2a9;
    pages[0x02AA] = &execute_shared_page_c2aa;
    pages[0x02AB] = &execute_shared_page_c2ab;
    pages[0x02AC] = &execute_shared_page_c2ac;
    pages[0x02AD] = &execute_shared_page_c2ad;
    pages[0x02AE] = &execute_battle_actions_pray_instruction;
    pages[0x02AF] = &execute_shared_page_c2af;
    pages[0x02B0] = &execute_shared_page_c2b0;
    pages[0x02B1] = &execute_shared_page_c2b1;
    pages[0x02B2] = &execute_shared_page_c2b2;
    pages[0x02B3] = &execute_battle_eat_food_instruction;
    pages[0x02B4] = &execute_battle_eat_food_instruction;
    pages[0x02B5] = &execute_battle_eat_food_instruction;
    pages[0x02B6] = &execute_shared_page_c2b6;
    pages[0x02B7] = &execute_battle_init_enemy_stats_instruction;
    pages[0x02B8] = &execute_battle_init_enemy_stats_instruction;
    pages[0x02B9] = &execute_shared_page_c2b9;
    pages[0x02BA] = &execute_shared_page_c2ba;
    pages[0x02BB] = &execute_shared_page_c2bb;
    pages[0x02BC] = &execute_shared_page_c2bc;
    pages[0x02BD] = &execute_shared_page_c2bd;
    pages[0x02BE] = &execute_battle_call_for_help_common_instruction;
    pages[0x02BF] = &execute_battle_call_for_help_common_instruction;
    pages[0x02C0] = &execute_battle_call_for_help_common_instruction;
    pages[0x02C1] = &execute_shared_page_c2c1;
    pages[0x02C2] = &execute_shared_page_c2c2;
    pages[0x02C3] = &execute_shared_page_c2c3;
    pages[0x02C4] = &execute_shared_page_c2c4;
    pages[0x02C5] = &execute_shared_page_c2c5;
    pages[0x02C6] = &execute_shared_page_c2c6;
    pages[0x02C7] = &execute_battle_actions_giygas_prayer_9_instruction;
    pages[0x02C8] = &execute_shared_page_c2c8;
    pages[0x02C9] = &execute_shared_page_c2c9;
    pages[0x02CA] = &execute_miscellaneous_battle_backgrounds_generate_frame_instruction;
    pages[0x02CB] = &execute_miscellaneous_battle_backgrounds_generate_frame_instruction;
    pages[0x02CC] = &execute_miscellaneous_battle_backgrounds_generate_frame_instruction;
    pages[0x02CD] = &execute_miscellaneous_battle_backgrounds_generate_frame_instruction;
    pages[0x02CE] = &execute_miscellaneous_battle_backgrounds_generate_frame_instruction;
    pages[0x02CF] = &execute_shared_page_c2cf;
    pages[0x02D0] = &execute_shared_page_c2d0;
    pages[0x02D1] = &execute_shared_page_c2d1;
    pages[0x02D2] = &execute_battle_load_battlebg_instruction;
    pages[0x02D3] = &execute_battle_load_battlebg_instruction;
    pages[0x02D4] = &execute_battle_load_battlebg_instruction;
    pages[0x02D5] = &execute_battle_load_battlebg_instruction;
    pages[0x02D6] = &execute_battle_load_battlebg_instruction;
    pages[0x02D7] = &execute_battle_load_battlebg_instruction;
    pages[0x02D8] = &execute_battle_load_battlebg_instruction;
    pages[0x02D9] = &execute_battle_load_battlebg_instruction;
    pages[0x02DA] = &execute_shared_page_c2da;
    pages[0x02DB] = &execute_shared_page_c2db;
    pages[0x02DC] = &execute_unresolved_c2_c2db3f_instruction;
    pages[0x02DD] = &execute_unresolved_c2_c2db3f_instruction;
    pages[0x02DE] = &execute_shared_page_c2de;
    pages[0x02DF] = &execute_shared_page_c2df;
    pages[0x02E0] = &execute_shared_page_c2e0;
    pages[0x02E1] = &execute_shared_page_c2e1;
    pages[0x02E2] = &execute_battle_show_psi_animation_instruction;
    pages[0x02E3] = &execute_battle_show_psi_animation_instruction;
    pages[0x02E4] = &execute_battle_show_psi_animation_instruction;
    pages[0x02E5] = &execute_battle_show_psi_animation_instruction;
    pages[0x02E6] = &execute_shared_page_c2e6;
    pages[0x02E7] = &execute_unresolved_c2_c2e6b3_instruction;
    pages[0x02E8] = &execute_shared_page_c2e8;
    pages[0x02E9] = &execute_shared_page_c2e9;
    pages[0x02EA] = &execute_shared_page_c2ea;
    pages[0x02EB] = &execute_battle_load_battle_sprite_instruction;
    pages[0x02EC] = &execute_battle_load_battle_sprite_instruction;
    pages[0x02ED] = &execute_battle_load_battle_sprite_instruction;
    pages[0x02EE] = &execute_shared_page_c2ee;
    pages[0x02EF] = &execute_shared_page_c2ef;
    pages[0x02F0] = &execute_shared_page_c2f0;
    pages[0x02F1] = &execute_shared_page_c2f1;
    pages[0x02F2] = &execute_unresolved_c2_c2f121_instruction;
    pages[0x02F3] = &execute_unresolved_c2_c2f121_instruction;
    pages[0x02F4] = &execute_unresolved_c2_c2f121_instruction;
    pages[0x02F5] = &execute_unresolved_c2_c2f121_instruction;
    pages[0x02F6] = &execute_unresolved_c2_c2f121_instruction;
    pages[0x02F7] = &execute_shared_page_c2f7;
    pages[0x02F8] = &execute_shared_page_c2f8;
    pages[0x02F9] = &execute_shared_page_c2f9;
    pages[0x02FA] = &execute_shared_page_c2fa;
    pages[0x02FB] = &execute_shared_page_c2fb;
    pages[0x02FC] = &execute_shared_page_c2fc;
    pages[0x02FD] = &execute_shared_page_c2fd;
    pages[0x02FE] = &execute_shared_page_c2fe;
    pages[0x02FF] = &execute_shared_page_c2ff;
    pages[0x0301] = &execute_shared_page_c301;
    pages[0x03E4] = &execute_shared_page_c3e4;
    pages[0x03E5] = &execute_shared_page_c3e5;
    pages[0x03E6] = &execute_shared_page_c3e6;
    pages[0x03E7] = &execute_shared_page_c3e7;
    pages[0x03E8] = &execute_unresolved_c3_c3e7e3_instruction;
    pages[0x03E9] = &execute_shared_page_c3e9;
    pages[0x03EA] = &execute_shared_page_c3ea;
    pages[0x03EB] = &execute_shared_page_c3eb;
    pages[0x03EC] = &execute_shared_page_c3ec;
    pages[0x03ED] = &execute_shared_page_c3ed;
    pages[0x03EE] = &execute_shared_page_c3ee;
    pages[0x03EF] = &execute_shared_page_c3ef;
    pages[0x03F1] = &execute_unresolved_c3_c3f1ec_instruction;
    pages[0x03F2] = &execute_unresolved_c3_c3f1ec_instruction;
    pages[0x03F3] = &execute_introduction_show_title_screen_instruction;
    pages[0x03F4] = &execute_introduction_show_title_screen_instruction;
    pages[0x03F5] = &execute_shared_page_c3f5;
    pages[0x03F6] = &execute_shared_page_c3f6;
    pages[0x03F7] = &execute_shared_page_c3f7;
    pages[0x03F8] = &execute_unresolved_c3_c3f7fb_instruction;
    pages[0x03F9] = &execute_unresolved_c3_c3f981_instruction;
    pages[0x03FA] = &execute_shared_page_c3fa;
    pages[0x03FB] = &execute_shared_page_c3fb;
    pages[0x03FD] = &execute_system_antipiracy_final_battle_antipiracy_check_instruction;
    pages[0x0400] = &execute_shared_page_c400;
    pages[0x040B] = &execute_shared_page_c40b;
    pages[0x041A] = &execute_system_decompression_instruction;
    pages[0x041B] = &execute_system_decompression_instruction;
    pages[0x041C] = &execute_system_decompression_instruction;
    pages[0x041D] = &execute_shared_page_c41d;
    pages[0x041E] = &execute_shared_page_c41e;
    pages[0x041F] = &execute_shared_page_c41f;
    pages[0x0420] = &execute_unresolved_c4_c41fff_instruction;
    pages[0x0421] = &execute_unresolved_c4_c4213f_instruction;
    pages[0x0423] = &execute_unresolved_c4_c423dc_instruction;
    pages[0x0424] = &execute_shared_page_c424;
    pages[0x0425] = &execute_shared_page_c425;
    pages[0x0426] = &execute_shared_page_c426;
    pages[0x0427] = &execute_unresolved_c4_c426ed_instruction;
    pages[0x0428] = &execute_shared_page_c428;
    pages[0x0429] = &execute_shared_page_c429;
    pages[0x042A] = &execute_unresolved_c4_c429e8_instruction;
    pages[0x042F] = &execute_overworld_set_party_tick_callbacks_instruction;
    pages[0x0430] = &execute_overworld_velocity_store_instruction;
    pages[0x0431] = &execute_overworld_velocity_store_instruction;
    pages[0x0432] = &execute_shared_page_c432;
    pages[0x0433] = &execute_shared_page_c433;
    pages[0x0434] = &execute_shared_page_c434;
    pages[0x0435] = &execute_shared_page_c435;
    pages[0x0436] = &execute_shared_page_c436;
    pages[0x0437] = &execute_shared_page_c437;
    pages[0x0438] = &execute_shared_page_c438;
    pages[0x0439] = &execute_text_print_newline_instruction;
    pages[0x043B] = &execute_shared_page_c43b;
    pages[0x043C] = &execute_shared_page_c43c;
    pages[0x043D] = &execute_shared_page_c43d;
    pages[0x043E] = &execute_shared_page_c43e;
    pages[0x043F] = &execute_shared_page_c43f;
    pages[0x0440] = &execute_shared_page_c440;
    pages[0x0441] = &execute_shared_page_c441;
    pages[0x0442] = &execute_shared_page_c442;
    pages[0x0443] = &execute_unresolved_c4_c442ac_instruction;
    pages[0x0444] = &execute_shared_page_c444;
    pages[0x0445] = &execute_shared_page_c445;
    pages[0x0446] = &execute_unresolved_c4_c445e1_instruction;
    pages[0x0447] = &execute_shared_page_c447;
    pages[0x0448] = &execute_shared_page_c448;
    pages[0x0449] = &execute_shared_page_c449;
    pages[0x044A] = &execute_shared_page_c44a;
    pages[0x044B] = &execute_shared_page_c44b;
    pages[0x044C] = &execute_shared_page_c44c;
    pages[0x044D] = &execute_shared_page_c44d;
    pages[0x044E] = &execute_shared_page_c44e;
    pages[0x044F] = &execute_shared_page_c44f;
    pages[0x0450] = &execute_shared_page_c450;
    pages[0x0451] = &execute_shared_page_c451;
    pages[0x0452] = &execute_unresolved_c4_c451fa_instruction;
    pages[0x0453] = &execute_unresolved_c4_c451fa_instruction;
    pages[0x0454] = &execute_unresolved_c4_c451fa_instruction;
    pages[0x0456] = &execute_shared_page_c456;
    pages[0x0457] = &execute_shared_page_c457;
    pages[0x0458] = &execute_shared_page_c458;
    pages[0x0459] = &execute_shared_page_c459;
    pages[0x045A] = &execute_miscellaneous_get_required_exp_instruction;
    pages[0x045C] = &execute_unresolved_c4_c45c90_instruction;
    pages[0x045D] = &execute_shared_page_c45d;
    pages[0x045E] = &execute_shared_page_c45e;
    pages[0x045F] = &execute_shared_page_c45f;
    pages[0x0460] = &execute_shared_page_c460;
    pages[0x0461] = &execute_shared_page_c461;
    pages[0x0462] = &execute_shared_page_c462;
    pages[0x0463] = &execute_shared_page_c463;
    pages[0x0464] = &execute_shared_page_c464;
    pages[0x0465] = &execute_shared_page_c465;
    pages[0x0466] = &execute_shared_page_c466;
    pages[0x0467] = &execute_shared_page_c467;
    pages[0x0468] = &execute_shared_page_c468;
    pages[0x0469] = &execute_shared_page_c469;
    pages[0x046A] = &execute_shared_page_c46a;
    pages[0x046B] = &execute_shared_page_c46b;
    pages[0x046C] = &execute_shared_page_c46c;
    pages[0x046D] = &execute_shared_page_c46d;
    pages[0x046E] = &execute_shared_page_c46e;
    pages[0x046F] = &execute_shared_page_c46f;
    pages[0x0470] = &execute_shared_page_c470;
    pages[0x0471] = &execute_shared_page_c471;
    pages[0x0472] = &execute_shared_page_c472;
    pages[0x0473] = &execute_shared_page_c473;
    pages[0x0474] = &execute_shared_page_c474;
    pages[0x0475] = &execute_unresolved_c4_c47501_instruction;
    pages[0x0476] = &execute_shared_page_c476;
    pages[0x0477] = &execute_shared_page_c477;
    pages[0x0478] = &execute_shared_page_c478;
    pages[0x0479] = &execute_shared_page_c479;
    pages[0x047A] = &execute_shared_page_c47a;
    pages[0x047B] = &execute_shared_page_c47b;
    pages[0x047C] = &execute_shared_page_c47c;
    pages[0x047D] = &execute_system_load_window_gfx_instruction;
    pages[0x047E] = &execute_system_load_window_gfx_instruction;
    pages[0x047F] = &execute_shared_page_c47f;
    pages[0x0480] = &execute_shared_page_c480;
    pages[0x0481] = &execute_unresolved_c4_c4810e_instruction;
    pages[0x0482] = &execute_shared_page_c482;
    pages[0x0483] = &execute_shared_page_c483;
    pages[0x0484] = &execute_unresolved_c4_c4838a_instruction;
    pages[0x0485] = &execute_unresolved_c4_c4838a_instruction;
    pages[0x0486] = &execute_unresolved_c4_c4838a_instruction;
    pages[0x0487] = &execute_unresolved_c4_c4838a_instruction;
    pages[0x0488] = &execute_shared_page_c488;
    pages[0x0489] = &execute_unresolved_c4_c4880c_instruction;
    pages[0x048A] = &execute_shared_page_c48a;
    pages[0x048B] = &execute_shared_page_c48b;
    pages[0x048C] = &execute_shared_page_c48c;
    pages[0x048D] = &execute_shared_page_c48d;
    pages[0x048E] = &execute_shared_page_c48e;
    pages[0x048F] = &execute_shared_page_c48f;
    pages[0x0490] = &execute_shared_page_c490;
    pages[0x0491] = &execute_shared_page_c491;
    pages[0x0492] = &execute_shared_page_c492;
    pages[0x0493] = &execute_shared_page_c493;
    pages[0x0494] = &execute_shared_page_c494;
    pages[0x0495] = &execute_shared_page_c495;
    pages[0x0496] = &execute_shared_page_c496;
    pages[0x0497] = &execute_shared_page_c497;
    pages[0x0498] = &execute_shared_page_c498;
    pages[0x0499] = &execute_shared_page_c499;
    pages[0x049A] = &execute_shared_page_c49a;
    pages[0x049B] = &execute_shared_page_c49b;
    pages[0x049C] = &execute_shared_page_c49c;
    pages[0x049D] = &execute_shared_page_c49d;
    pages[0x049E] = &execute_shared_page_c49e;
    pages[0x049F] = &execute_unresolved_c4_c49ec4_instruction;
    pages[0x04A0] = &execute_battle_autohealing_instruction;
    pages[0x04A1] = &execute_shared_page_c4a1;
    pages[0x04A2] = &execute_shared_page_c4a2;
    pages[0x04A3] = &execute_unresolved_c4_c4a377_instruction;
    pages[0x04A4] = &execute_unresolved_c4_c4a377_instruction;
    pages[0x04A5] = &execute_unresolved_c4_c4a377_instruction;
    pages[0x04A6] = &execute_unresolved_c4_c4a67e_instruction;
    pages[0x04A7] = &execute_shared_page_c4a7;
    pages[0x04A8] = &execute_unresolved_c4_c4a7b0_instruction;
    pages[0x04A9] = &execute_unresolved_c4_c4a7b0_instruction;
    pages[0x04AA] = &execute_unresolved_c4_c4a7b0_instruction;
    pages[0x04AB] = &execute_unresolved_c4_c4a7b0_instruction;
    pages[0x04AC] = &execute_shared_page_c4ac;
    pages[0x04AD] = &execute_overworld_use_sound_stone_instruction;
    pages[0x04AE] = &execute_overworld_use_sound_stone_instruction;
    pages[0x04AF] = &execute_overworld_use_sound_stone_instruction;
    pages[0x04B0] = &execute_overworld_use_sound_stone_instruction;
    pages[0x04B1] = &execute_shared_page_c4b1;
    pages[0x04B2] = &execute_shared_page_c4b2;
    pages[0x04B3] = &execute_shared_page_c4b3;
    pages[0x04B4] = &execute_shared_page_c4b4;
    pages[0x04B5] = &execute_shared_page_c4b5;
    pages[0x04B6] = &execute_unresolved_c4_c4b59f_instruction;
    pages[0x04B7] = &execute_shared_page_c4b7;
    pages[0x04B8] = &execute_shared_page_c4b8;
    pages[0x04B9] = &execute_shared_page_c4b9;
    pages[0x04BA] = &execute_shared_page_c4ba;
    pages[0x04BB] = &execute_unresolved_c4_c4baf6_instruction;
    pages[0x04BC] = &execute_unresolved_c4_c4baf6_instruction;
    pages[0x04BD] = &execute_shared_page_c4bd;
    pages[0x04BE] = &execute_unresolved_c4_c4bd9a_instruction;
    pages[0x04BF] = &execute_shared_page_c4bf;
    pages[0x04C0] = &execute_unresolved_c4_c4bf7f_instruction;
    pages[0x04C2] = &execute_unresolved_c4_c4c2de_instruction;
    pages[0x04C3] = &execute_unresolved_c4_c4c2de_instruction;
    pages[0x04C4] = &execute_shared_page_c4c4;
    pages[0x04C5] = &execute_shared_page_c4c5;
    pages[0x04C6] = &execute_shared_page_c4c6;
    pages[0x04C7] = &execute_shared_page_c4c7;
    pages[0x04C8] = &execute_shared_page_c4c8;
    pages[0x04C9] = &execute_shared_page_c4c9;
    pages[0x04CA] = &execute_unresolved_c4_c4c91a_instruction;
    pages[0x04CB] = &execute_shared_page_c4cb;
    pages[0x04CC] = &execute_shared_page_c4cc;
    pages[0x04CD] = &execute_shared_page_c4cd;
    pages[0x04CE] = &execute_shared_page_c4ce;
    pages[0x04CF] = &execute_unresolved_c4_c4ced8_instruction;
    pages[0x04D0] = &execute_shared_page_c4d0;
    pages[0x04D1] = &execute_unresolved_c4_c4d065_instruction;
    pages[0x04D2] = &execute_shared_page_c4d2;
    pages[0x04D3] = &execute_unresolved_c4_c4d2f0_instruction;
    pages[0x04D4] = &execute_shared_page_c4d4;
    pages[0x04D5] = &execute_shared_page_c4d5;
    pages[0x04D6] = &execute_shared_page_c4d6;
    pages[0x04D7] = &execute_shared_page_c4d7;
    pages[0x04D8] = &execute_shared_page_c4d8;
    pages[0x04D9] = &execute_shared_page_c4d9;
    pages[0x04DA] = &execute_shared_page_c4da;
    pages[0x04DB] = &execute_introduction_init_intro_instruction;
    pages[0x04DC] = &execute_shared_page_c4dc;
    pages[0x04DD] = &execute_shared_page_c4dd;
    pages[0x04DE] = &execute_shared_page_c4de;
    pages[0x04DF] = &execute_shared_page_c4df;
    pages[0x04E0] = &execute_shared_page_c4e0;
    pages[0x04E1] = &execute_shared_page_c4e1;
    pages[0x04E2] = &execute_shared_page_c4e2;
    pages[0x04E3] = &execute_shared_page_c4e3;
    pages[0x04E4] = &execute_shared_page_c4e4;
    pages[0x04E5] = &execute_shared_page_c4e5;
    pages[0x04E6] = &execute_ending_render_cast_name_text_instruction;
    pages[0x04E7] = &execute_shared_page_c4e7;
    pages[0x04E8] = &execute_ending_prepare_dynamic_cast_name_text_instruction;
    pages[0x04E9] = &execute_ending_prepare_dynamic_cast_name_text_instruction;
    pages[0x04EA] = &execute_shared_page_c4ea;
    pages[0x04EB] = &execute_shared_page_c4eb;
    pages[0x04EC] = &execute_shared_page_c4ec;
    pages[0x04ED] = &execute_shared_page_c4ed;
    pages[0x04EE] = &execute_shared_page_c4ee;
    pages[0x04EF] = &execute_shared_page_c4ef;
    pages[0x04F0] = &execute_shared_page_c4f0;
    pages[0x04F1] = &execute_ending_initialize_credits_scene_instruction;
    pages[0x04F2] = &execute_shared_page_c4f2;
    pages[0x04F3] = &execute_ending_try_rendering_photograph_instruction;
    pages[0x04F4] = &execute_shared_page_c4f4;
    pages[0x04F5] = &execute_shared_page_c4f5;
    pages[0x04F6] = &execute_ending_play_credits_instruction;
    pages[0x04F7] = &execute_ending_play_credits_instruction;
    pages[0x04FB] = &execute_shared_page_c4fb;
    pages[0x04FC] = &execute_audio_change_music_instruction;
    pages[0x04FD] = &execute_shared_page_c4fd;
    pages[0x214D] = &execute_unresolved_e1_e14de8_instruction;
    pages[0x214E] = &execute_unresolved_e1_e14de8_instruction;
    pages[0x2F00] = &execute_shared_page_ef00;
    pages[0x2F01] = &execute_shared_page_ef01;
    pages[0x2F02] = &execute_shared_page_ef02;
    pages[0x2F03] = &execute_shared_page_ef03;
    pages[0x2F04] = &execute_shared_page_ef04;
    pages[0x2F05] = &execute_shared_page_ef05;
    pages[0x2F06] = &execute_shared_page_ef06;
    pages[0x2F07] = &execute_shared_page_ef07;
    pages[0x2F08] = &execute_shared_page_ef08;
    pages[0x2F09] = &execute_system_saves_save_game_block_instruction;
    pages[0x2F0A] = &execute_shared_page_ef0a;
    pages[0x2F0B] = &execute_shared_page_ef0b;
    pages[0x2F0C] = &execute_shared_page_ef0c;
    pages[0x2F0D] = &execute_shared_page_ef0d;
    pages[0x2F0E] = &execute_shared_page_ef0e;
    pages[0x2F0F] = &execute_shared_page_ef0f;
    pages[0x2F10] = &execute_unresolved_ef_ef0ff6_instruction;
    pages[0x2FD5] = &execute_shared_page_efd5;
    pages[0x2FD6] = &execute_shared_page_efd6;
    pages[0x2FD7] = &execute_unresolved_ef_efd6d4_instruction;
    pages[0x2FD8] = &execute_unresolved_ef_efd6d4_instruction;
    pages[0x2FD9] = &execute_shared_page_efd9;
    pages[0x2FDA] = &execute_shared_page_efda;
    pages[0x2FDB] = &execute_shared_page_efdb;
    pages[0x2FDC] = &execute_shared_page_efdc;
    pages[0x2FDD] = &execute_system_debug_display_check_position_debug_overlay_instruction;
    pages[0x2FDE] = &execute_shared_page_efde;
    pages[0x2FDF] = &execute_shared_page_efdf;
    pages[0x2FE0] = &execute_shared_page_efe0;
    pages[0x2FE1] = &execute_shared_page_efe1;
    pages[0x2FE2] = &execute_unresolved_ef_efe175_instruction;
    pages[0x2FE3] = &execute_unresolved_ef_efe175_instruction;
    pages[0x2FE4] = &execute_unresolved_ef_efe175_instruction;
    pages[0x2FE5] = &execute_shared_page_efe5;
    pages[0x2FE6] = &execute_shared_page_efe6;
    pages[0x2FE7] = &execute_shared_page_efe7;
    pages[0x2FE8] = &execute_shared_page_efe8;
    pages[0x2FE9] = &execute_unresolved_ef_efe8c7_instruction;
    pages[0x2FEA] = &execute_shared_page_efea;
    pages[0x2FEB] = &execute_shared_page_efeb;
    return pages;
}
constexpr auto program_pages = make_program_pages();
}

std::uint32_t canonical_rom_address(std::uint32_t address) {
    address &= 0xFFFFFF;
    const auto bank = address >> 16;
    if (bank == 0x7E || bank == 0x7F) return 0xFFFFFFFF;
    if ((bank & 0x40) == 0 && (address & 0xFFFF) < 0x8000) return 0xFFFFFFFF;
    address = 0xC00000 | (address & 0x3FFFFF);
    // The 3 MiB HiROM cartridge mirrors its last MiB in F0-FF/70-7D.
    if (address >= 0xF00000) address -= 0x100000;
    return address;
}

bool execute_translated_main_instruction(MainCpu65816& cpu) {
    const auto address = canonical_rom_address(cpu.program_counter);
    if (address == 0xFFFFFFFF) return false;
    const auto routine = program_pages[(address - 0xC00000) >> 8];
    return routine && routine(cpu, address);
}
std::size_t translated_instruction_count() { return 145774; }
} // namespace eb::us
