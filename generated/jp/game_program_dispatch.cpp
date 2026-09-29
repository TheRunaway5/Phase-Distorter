// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include "generated_code.hpp"
#include <array>

namespace eb::jp {
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
bool execute_battle_load_battlebg_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_load_battlebg_movement_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_load_enemy_battle_sprites_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_lose_hp_status_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_main_battle_routine_instruction(MainCpu65816&, std::uint32_t);
bool execute_battle_menu_handler_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_battle_show_psi_animation_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_ending_check_cast_scroll_threshold_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_copy_cast_name_tilemap_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_count_photo_flags_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_create_entity_at_v01_plus_bg3y_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_credits_scroll_frame_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_enqueue_credits_dma_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_handle_cast_scrolling_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_initialize_credits_scene_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_is_entity_still_on_cast_screen_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_load_cast_scene_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_play_cast_scene_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_play_credits_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_prepare_cast_name_tilemap_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_print_cast_name_entity_var0_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_print_cast_name_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_print_cast_name_party_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_process_credits_dma_queue_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_set_cast_scroll_threshold_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_slide_credits_photograph_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_try_rendering_photograph_instruction(MainCpu65816&, std::uint32_t);
bool execute_ending_upload_special_cast_palette_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_decomp_itoi_production_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_decomp_nintendo_presentation_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_display_animated_naming_sprite_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_file_select_menu_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_file_select_menu_loop_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_file_select_open_flavour_menu_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_file_select_open_sound_menu_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_file_select_open_text_speed_menu_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_gas_station_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_gas_station_load_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_init_intro_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_load_gas_station_flash_palette_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_load_gas_station_palette_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_logo_screen_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_logo_screen_load_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_name_a_character_instruction(MainCpu65816&, std::uint32_t);
bool execute_introduction_show_title_screen_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_inventory_get_item_subtype2_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_inventory_get_item_subtype_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_miscellaneous_level_up_char_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_party_add_char_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_miscellaneous_party_remove_char_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_overworld_open_menu_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_overworld_update_party_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_system_load_window_gfx_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_system_strcmp_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_strlen_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_test_sram_size_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_transfer_to_vram_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_wait_instruction(MainCpu65816&, std::uint32_t);
bool execute_system_wait_until_next_frame_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_activate_hotspot_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_atm_decrease_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_atm_increase_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_call_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_check_equal_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_check_not_equal_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_clear_event_flag_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_clear_line_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_text_ccs_force_text_alignment_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_character_number_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_character_status_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_direction_from_character_to_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_direction_from_sprite_entity_to_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_direction_from_tpt_entity_to_entity_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_event_flag_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_get_exp_for_next_level_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_text_ccs_print_character_name_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_horizontal_strings_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_item_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_money_amount_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_ccs_print_number_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_text_character_select_prompt_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_clear_blinking_prompt_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_clear_instant_printing_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_close_focus_window_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_close_focus_window_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_close_window_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_coffee_tea_scene_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_copy_enemy_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_create_window_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_create_window_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_display_in_battle_text_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_display_text_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_display_text_wait_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_enable_blinking_triangle_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_enter_your_name_please_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_fix_attacker_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_fix_target_name_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_active_window_address_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_argument_memory_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_get_blinking_prompt_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_text_print_letter_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_menu_items_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_menu_items_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_newline_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_number_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_print_string_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_selection_menu_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_selection_menu_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_selection_menu_setup_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_text_text_input_dialog_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_transfer_active_mem_storage_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_transfer_storage_mem_active_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_undraw_flyover_text_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_unlock_input_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_update_hppp_meter_tiles_instruction(MainCpu65816&, std::uint32_t);
bool execute_text_window_tick_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c0_c0222b_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0255c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c025cf_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0263d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c02668_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c02c3e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c02d29_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0329f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c032ec_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0369b_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03903_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c039e5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03a24_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03a94_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03c25_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03c4b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03cfd_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03daa_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03e25_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03e5a_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03e9d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03ec3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c03f1e_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c0_c048d3_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04a7b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04a88_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04aad_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04b53_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04c45_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c04d78_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c0_c06e6e_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c0_c0927c_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c0_c0cd50_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0cebe_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0cf97_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d0d9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d0e6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d15c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d195_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0d19b_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c0_c0ebaa_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ebe0_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ed41_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ee47_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0ee53_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0efe1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0f1d2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c0_c0f21e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10004_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1004e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1008e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c100d6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c100fe_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c102d0_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1078d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c107af_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10a85_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c10ba1_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c1_c113d1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c11404_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c114b1_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1153b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c11596_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c115f4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c117e2_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c1_c121b8_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12362_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1242e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1242e_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1244c_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12bd5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12bf3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12c36_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12ccc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12d17_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c12e42_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1339e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c133a7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c14012_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c14049_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c14070_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c15fb1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1621f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c17796_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c17889_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1866d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1869d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c190e6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c190f1_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c191b0_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c191f8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19216_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19249_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1931b_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c193e7_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19437_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19441_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1952f_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19a11_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19a43_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19cdd_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19d49_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19db5_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c19f29_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1a1d8_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1a778_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1a795_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1aa18_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1aa5d_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c1_c1b5b6_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1bb06_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1bb71_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c1_c1ca72_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1caf5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1cb7f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ce85_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1cfc6_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1cfc6_redirect_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1d038_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1d08b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1dccb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1dd5f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1dd82_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1dd9f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1e48d_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1e4be_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ec8f_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ecd1_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1f07e_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1f14f_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1f2a8_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ff2c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c1_c1ff6b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c200d9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c20266_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c20293_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c202ac_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2038b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2077d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c207b6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c2087c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c2_c208b8_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c3_c3e6f8_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c3_c3e6f8_redirect_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c4_c43739_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c437b8_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c43874_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c438a5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c451fa_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c45c90_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c45ddd_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c45e96_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46028_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4605a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4608c_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c460ce_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46125_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4617c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c461cc_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4621c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c46257_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c4_c47930_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c479e9_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47a27_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47a6b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47a9e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47b77_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c47f87_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4810e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4880c_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c48a6d_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c48b2c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c48c69_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c48c97_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c48d58_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c4_c49a4b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49a56_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49b6e_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49c56_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49ca8_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49cc3_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49d16_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49d1e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c49ec4_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4a228_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4a377_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c4_c4b721_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b7a5_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b859_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b8e2_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4b923_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4baf6_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4bd9a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4bf7f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4c2de_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4c45f_jp_instruction(MainCpu65816&, std::uint32_t);
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
bool execute_unresolved_c4_c4d989_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_c4_c4dcf6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_e1_e14de8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0262_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef027d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef02c4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef031e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0c3d_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0c87_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0c97_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0ca7_proto_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0d23_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0d46_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0d73_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0d8d_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0dfa_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0e67_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0e8a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0ead_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0ee8_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0f60_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0fdb_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_ef0ff6_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efd56f_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efd5d9_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efd6d4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efd95e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efd9f3_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efda05_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efdabd_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efdf0b_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efdfc4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe07c_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe133_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe175_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe6cf_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe6e2_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe708_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe759_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe771_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe873_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe895_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efe8c7_jp_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efea23_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efea4a_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efea9e_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efeaa4_instruction(MainCpu65816&, std::uint32_t);
bool execute_unresolved_ef_efeac8_jp_instruction(MainCpu65816&, std::uint32_t);
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
    if (address < 0xC00317) return execute_system_load_palette_anim_instruction(cpu, address);
    if (address < 0xC0036B) return execute_system_animate_palette_instruction(cpu, address);
    if (address < 0xC003A1) return execute_unresolved_c0035b_instruction(cpu, address);
    return execute_system_get_colour_average_instruction(cpu, address);
}
bool execute_shared_page_c004(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00444) return execute_system_get_colour_average_instruction(cpu, address);
    if (address < 0xC00490) return execute_overworld_adjust_single_colour_instruction(cpu, address);
    return execute_overworld_adjust_sprite_palettes_by_average_instruction(cpu, address);
}
bool execute_shared_page_c005(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC005F7) return execute_overworld_adjust_sprite_palettes_by_average_instruction(cpu, address);
    return execute_overworld_prepare_average_for_sprite_palettes_instruction(cpu, address);
}
bool execute_shared_page_c006(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0063A) return execute_overworld_prepare_average_for_sprite_palettes_instruction(cpu, address);
    if (address < 0xC0068E) return execute_overworld_load_tile_collision_instruction(cpu, address);
    return execute_overworld_replace_block_instruction(cpu, address);
}
bool execute_shared_page_c007(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00702) return execute_overworld_replace_block_instruction(cpu, address);
    if (address < 0xC00788) return execute_overworld_load_map_block_event_changes_instruction(cpu, address);
    if (address < 0xC007C6) return execute_overworld_load_special_sprite_palette_instruction(cpu, address);
    return execute_overworld_load_map_palette_instruction(cpu, address);
}
bool execute_shared_page_c008(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC008D3) return execute_overworld_load_map_palette_instruction(cpu, address);
    return execute_overworld_load_map_at_sector_instruction(cpu, address);
}
bool execute_shared_page_c00a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00AB3) return execute_overworld_load_map_at_sector_instruction(cpu, address);
    if (address < 0xC00AD7) return execute_overworld_load_sector_attributes_instruction(cpu, address);
    return execute_overworld_load_map_row_instruction(cpu, address);
}
bool execute_shared_page_c00b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00BEE) return execute_overworld_load_map_row_instruction(cpu, address);
    return execute_overworld_load_map_column_instruction(cpu, address);
}
bool execute_shared_page_c00d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00D05) return execute_overworld_load_map_column_instruction(cpu, address);
    if (address < 0xC00D90) return execute_overworld_load_collision_row_instruction(cpu, address);
    return execute_overworld_load_collision_column_instruction(cpu, address);
}
bool execute_shared_page_c00e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00E28) return execute_overworld_load_collision_column_instruction(cpu, address);
    return execute_unresolved_c0_c00e16_instruction(cpu, address);
}
bool execute_shared_page_c00f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC00FDD) return execute_unresolved_c0_c00e16_instruction(cpu, address);
    return execute_unresolved_c0_c00fcb_instruction(cpu, address);
}
bool execute_shared_page_c011(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01193) return execute_unresolved_c0_c00fcb_instruction(cpu, address);
    return execute_unresolved_c0_c01181_instruction(cpu, address);
}
bool execute_shared_page_c012(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0123E) return execute_unresolved_c0_c01181_instruction(cpu, address);
    return execute_unresolved_c0_c0122a_instruction(cpu, address);
}
bool execute_shared_page_c013(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01303) return execute_unresolved_c0_c0122a_instruction(cpu, address);
    return execute_overworld_reload_map_at_position_instruction(cpu, address);
}
bool execute_shared_page_c014(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0140C) return execute_overworld_reload_map_at_position_instruction(cpu, address);
    return execute_overworld_load_map_at_position_instruction(cpu, address);
}
bool execute_shared_page_c015(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0156E) return execute_overworld_load_map_at_position_instruction(cpu, address);
    return execute_overworld_refresh_map_at_position_instruction(cpu, address);
}
bool execute_shared_page_c017(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01747) return execute_overworld_refresh_map_at_position_instruction(cpu, address);
    return execute_unresolved_c0_c01731_instruction(cpu, address);
}
bool execute_shared_page_c019(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01909) return execute_unresolved_c0_c017ea_instruction(cpu, address);
    if (address < 0xC019C8) return execute_overworld_reload_map_instruction(cpu, address);
    if (address < 0xC019F8) return execute_overworld_initialize_map_instruction(cpu, address);
    return execute_unresolved_c0_c019e2_instruction(cpu, address);
}
bool execute_shared_page_c01a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01A79) return execute_unresolved_c0_c019e2_instruction(cpu, address);
    if (address < 0xC01A7F) return execute_unresolved_c0_c01a63_instruction(cpu, address);
    if (address < 0xC01A9C) return execute_overworld_initialize_misc_object_data_instruction(cpu, address);
    if (address < 0xC01AB3) return execute_unresolved_c0_c01a86_instruction(cpu, address);
    return execute_overworld_find_free_space_7e4682_instruction(cpu, address);
}
bool execute_shared_page_c01b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01B2B) return execute_overworld_find_free_space_7e4682_instruction(cpu, address);
    if (address < 0xC01BAC) return execute_unresolved_c0_c01b15_instruction(cpu, address);
    return execute_unresolved_c0_c01b96_instruction(cpu, address);
}
bool execute_shared_page_c01c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01C27) return execute_unresolved_c0_c01b96_instruction(cpu, address);
    if (address < 0xC01C68) return execute_system_alloc_sprite_mem_instruction(cpu, address);
    return execute_unresolved_c0_c01c52_instruction(cpu, address);
}
bool execute_shared_page_c01d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01D4E) return execute_unresolved_c0_c01c52_instruction(cpu, address);
    return execute_unresolved_c0_c01d38_instruction(cpu, address);
}
bool execute_shared_page_c01e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC01E03) return execute_unresolved_c0_c01d38_instruction(cpu, address);
    if (address < 0xC01E5F) return execute_unresolved_c0_c01ded_instruction(cpu, address);
    return execute_overworld_create_entity_instruction(cpu, address);
}
bool execute_shared_page_c020(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC020FF) return execute_overworld_create_entity_instruction(cpu, address);
    return execute_unresolved_c0_c020f1_instruction(cpu, address);
}
bool execute_shared_page_c021(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0214E) return execute_unresolved_c0_c020f1_instruction(cpu, address);
    if (address < 0xC021A2) return execute_unresolved_c0_c02140_instruction(cpu, address);
    if (address < 0xC021F4) return execute_unresolved_c0_c02194_instruction(cpu, address);
    return execute_unresolved_c0_c021e6_instruction(cpu, address);
}
bool execute_shared_page_c022(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC02239) return execute_unresolved_c0_c021e6_instruction(cpu, address);
    return execute_unresolved_c0_c0222b_jp_instruction(cpu, address);
}
bool execute_shared_page_c025(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0256A) return execute_unresolved_c0_c0222b_jp_instruction(cpu, address);
    if (address < 0xC025DD) return execute_unresolved_c0_c0255c_instruction(cpu, address);
    return execute_unresolved_c0_c025cf_instruction(cpu, address);
}
bool execute_shared_page_c026(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0264B) return execute_unresolved_c0_c025cf_instruction(cpu, address);
    if (address < 0xC02676) return execute_unresolved_c0_c0263d_instruction(cpu, address);
    return execute_unresolved_c0_c02668_instruction(cpu, address);
}
bool execute_shared_page_c02a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC02A7B) return execute_unresolved_c0_c02668_instruction(cpu, address);
    return execute_overworld_spawn_horizontal_instruction(cpu, address);
}
bool execute_shared_page_c02b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC02B65) return execute_overworld_spawn_horizontal_instruction(cpu, address);
    return execute_overworld_spawn_vertical_instruction(cpu, address);
}
bool execute_shared_page_c02c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC02C4E) return execute_overworld_spawn_vertical_instruction(cpu, address);
    return execute_overworld_velocity_store_instruction(cpu, address);
}
bool execute_shared_page_c02e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC02E13) return execute_overworld_velocity_store_instruction(cpu, address);
    if (address < 0xC02E58) return execute_unresolved_c0_c02c3e_instruction(cpu, address);
    if (address < 0xC02E5E) return execute_overworld_reset_mushroomized_walking_instruction(cpu, address);
    if (address < 0xC02EFE) return execute_overworld_mushroomization_movement_swap_instruction(cpu, address);
    return execute_unresolved_c0_c02d29_instruction(cpu, address);
}
bool execute_shared_page_c02f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC02F6A) return execute_unresolved_c0_c02d29_instruction(cpu, address);
    return execute_overworld_adjust_position_horizontal_instruction(cpu, address);
}
bool execute_shared_page_c031(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC031F2) return execute_overworld_adjust_position_horizontal_instruction(cpu, address);
    return execute_overworld_adjust_position_vertical_instruction(cpu, address);
}
bool execute_shared_page_c034(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0347A) return execute_overworld_adjust_position_vertical_instruction(cpu, address);
    if (address < 0xC034C7) return execute_unresolved_c0_c0329f_instruction(cpu, address);
    return execute_unresolved_c0_c032ec_jp_instruction(cpu, address);
}
bool execute_shared_page_c036(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC036C7) return execute_unresolved_c0_c032ec_jp_instruction(cpu, address);
    return execute_overworld_update_party_jp_instruction(cpu, address);
}
bool execute_shared_page_c038(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0389E) return execute_overworld_update_party_jp_instruction(cpu, address);
    return execute_unresolved_c0_c0369b_jp_instruction(cpu, address);
}
bool execute_shared_page_c03b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC03B37) return execute_unresolved_c0_c0369b_jp_instruction(cpu, address);
    return execute_unresolved_c0_c03903_instruction(cpu, address);
}
bool execute_shared_page_c03c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC03C2B) return execute_unresolved_c0_c03903_instruction(cpu, address);
    if (address < 0xC03C74) return execute_unresolved_c0_c039e5_instruction(cpu, address);
    if (address < 0xC03CEE) return execute_unresolved_c0_c03a24_instruction(cpu, address);
    return execute_unresolved_c0_c03a94_instruction(cpu, address);
}
bool execute_shared_page_c03e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC03E8C) return execute_unresolved_c0_c03a94_instruction(cpu, address);
    if (address < 0xC03EB2) return execute_unresolved_c0_c03c25_instruction(cpu, address);
    if (address < 0xC03EC5) return execute_unresolved_c0_c03c4b_instruction(cpu, address);
    return execute_overworld_get_on_bicycle_instruction(cpu, address);
}
bool execute_shared_page_c03f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC03F64) return execute_overworld_get_on_bicycle_instruction(cpu, address);
    return execute_unresolved_c0_c03cfd_instruction(cpu, address);
}
bool execute_shared_page_c040(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04009) return execute_unresolved_c0_c03cfd_instruction(cpu, address);
    if (address < 0xC04084) return execute_unresolved_c0_c03daa_instruction(cpu, address);
    if (address < 0xC040C9) return execute_unresolved_c0_c03e25_jp_instruction(cpu, address);
    return execute_unresolved_c0_c03e5a_jp_instruction(cpu, address);
}
bool execute_shared_page_c041(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0411A) return execute_unresolved_c0_c03e5a_jp_instruction(cpu, address);
    if (address < 0xC04140) return execute_unresolved_c0_c03e9d_instruction(cpu, address);
    if (address < 0xC0419B) return execute_unresolved_c0_c03ec3_instruction(cpu, address);
    return execute_unresolved_c0_c03f1e_jp_instruction(cpu, address);
}
bool execute_shared_page_c042(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04230) return execute_unresolved_c0_c03f1e_jp_instruction(cpu, address);
    if (address < 0xC04295) return execute_unresolved_c0_c03fa9_instruction(cpu, address);
    if (address < 0xC042B2) return execute_system_center_screen_instruction(cpu, address);
    if (address < 0xC042D0) return execute_unresolved_c0_c0402b_instruction(cpu, address);
    if (address < 0xC042D6) return execute_unresolved_c0_c04049_instruction(cpu, address);
    return execute_overworld_map_input_to_direction_instruction(cpu, address);
}
bool execute_shared_page_c043(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0439D) return execute_overworld_map_input_to_direction_instruction(cpu, address);
    return execute_unresolved_c0_c04116_instruction(cpu, address);
}
bool execute_shared_page_c044(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0446A) return execute_unresolved_c0_c04116_instruction(cpu, address);
    return execute_unresolved_c0_c041e3_instruction(cpu, address);
}
bool execute_shared_page_c045(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04549) return execute_overworld_find_nearby_checkable_tpt_entry_instruction(cpu, address);
    if (address < 0xC04576) return execute_unresolved_c0_c042c2_instruction(cpu, address);
    return execute_unresolved_c0_c042ef_instruction(cpu, address);
}
bool execute_shared_page_c046(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04643) return execute_unresolved_c0_c042ef_instruction(cpu, address);
    if (address < 0xC046D9) return execute_unresolved_c0_c043bc_instruction(cpu, address);
    return execute_overworld_find_nearby_talkable_tpt_entry_instruction(cpu, address);
}
bool execute_shared_page_c047(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04722) return execute_overworld_find_nearby_talkable_tpt_entry_instruction(cpu, address);
    return execute_unresolved_c0_c0449b_instruction(cpu, address);
}
bool execute_shared_page_c049(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC049F4) return execute_unresolved_c0_c0449b_instruction(cpu, address);
    return execute_unresolved_c0_c0476d_instruction(cpu, address);
}
bool execute_shared_page_c04a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04A56) return execute_unresolved_c0_c0476d_instruction(cpu, address);
    return execute_unresolved_c0_c047cf_instruction(cpu, address);
}
bool execute_shared_page_c04b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04B65) return execute_unresolved_c0_c047cf_instruction(cpu, address);
    return execute_unresolved_c0_c048d3_jp_instruction(cpu, address);
}
bool execute_shared_page_c04c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04CF1) return execute_unresolved_c0_c048d3_jp_instruction(cpu, address);
    if (address < 0xC04CFE) return execute_unresolved_c0_c04a7b_instruction(cpu, address);
    return execute_unresolved_c0_c04a88_instruction(cpu, address);
}
bool execute_shared_page_c04d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04D23) return execute_unresolved_c0_c04a88_instruction(cpu, address);
    if (address < 0xC04DC9) return execute_unresolved_c0_c04aad_instruction(cpu, address);
    return execute_unresolved_c0_c04b53_instruction(cpu, address);
}
bool execute_shared_page_c04e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04EBB) return execute_unresolved_c0_c04b53_instruction(cpu, address);
    return execute_unresolved_c0_c04c45_instruction(cpu, address);
}
bool execute_shared_page_c04f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC04FEE) return execute_unresolved_c0_c04c45_instruction(cpu, address);
    return execute_unresolved_c0_c04d78_instruction(cpu, address);
}
bool execute_shared_page_c051(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05166) return execute_unresolved_c0_c04d78_instruction(cpu, address);
    if (address < 0xC0517F) return execute_unresolved_c0_c04f47_instruction(cpu, address);
    if (address < 0xC051BE) return execute_unresolved_c0_c04f60_instruction(cpu, address);
    return execute_unresolved_c0_c04f9f_instruction(cpu, address);
}
bool execute_shared_page_c052(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05223) return execute_unresolved_c0_c04f9f_instruction(cpu, address);
    return execute_unresolved_c0_c04ffe_instruction(cpu, address);
}
bool execute_shared_page_c054(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05425) return execute_unresolved_c0_c04ffe_instruction(cpu, address);
    if (address < 0xC054CF) return execute_unresolved_c0_c05200_instruction(cpu, address);
    if (address < 0xC054F9) return execute_battle_init_common_instruction(cpu, address);
    return execute_unresolved_c0_c052d4_instruction(cpu, address);
}
bool execute_shared_page_c056(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05699) return execute_unresolved_c0_c052d4_instruction(cpu, address);
    if (address < 0xC056F7) return execute_unresolved_c0_c0546b_instruction(cpu, address);
    return execute_unresolved_c0_c054c9_instruction(cpu, address);
}
bool execute_shared_page_c057(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05731) return execute_unresolved_c0_c054c9_instruction(cpu, address);
    if (address < 0xC057CA) return execute_unresolved_c0_c05503_instruction(cpu, address);
    return execute_unresolved_c0_c0559c_instruction(cpu, address);
}
bool execute_shared_page_c058(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05867) return execute_unresolved_c0_c0559c_instruction(cpu, address);
    if (address < 0xC058FE) return execute_unresolved_c0_c05639_instruction(cpu, address);
    return execute_unresolved_c0_c056d0_instruction(cpu, address);
}
bool execute_shared_page_c059(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05997) return execute_unresolved_c0_c056d0_instruction(cpu, address);
    return execute_unresolved_c0_c05769_instruction(cpu, address);
}
bool execute_shared_page_c05a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05A16) return execute_unresolved_c0_c05769_instruction(cpu, address);
    if (address < 0xC05A6A) return execute_unresolved_c0_c057e8_instruction(cpu, address);
    if (address < 0xC05ABE) return execute_unresolved_c0_c0583c_instruction(cpu, address);
    return execute_unresolved_c0_c05890_instruction(cpu, address);
}
bool execute_shared_page_c05c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05C1D) return execute_unresolved_c0_c05890_instruction(cpu, address);
    return execute_unresolved_c0_c059ef_instruction(cpu, address);
}
bool execute_shared_page_c05d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05D7C) return execute_unresolved_c0_c059ef_instruction(cpu, address);
    if (address < 0xC05DA9) return execute_unresolved_c0_c05b4e_instruction(cpu, address);
    return execute_unresolved_c0_c05b7b_instruction(cpu, address);
}
bool execute_shared_page_c05f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC05F05) return execute_unresolved_c0_c05b7b_instruction(cpu, address);
    if (address < 0xC05FB9) return execute_unresolved_c0_c05cd7_instruction(cpu, address);
    return execute_unresolved_c0_c05d8b_instruction(cpu, address);
}
bool execute_shared_page_c060(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06015) return execute_unresolved_c0_c05d8b_instruction(cpu, address);
    if (address < 0xC06069) return execute_unresolved_c0_c05de7_instruction(cpu, address);
    if (address < 0xC060A4) return execute_unresolved_c0_c05e3b_instruction(cpu, address);
    if (address < 0xC060B0) return execute_unresolved_c0_c05e76_instruction(cpu, address);
    if (address < 0xC060FC) return execute_unresolved_c0_c05e82_instruction(cpu, address);
    return execute_unresolved_c0_c05ece_instruction(cpu, address);
}
bool execute_shared_page_c061(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06161) return execute_unresolved_c0_c05ece_instruction(cpu, address);
    if (address < 0xC061B0) return execute_unresolved_c0_c05f33_instruction(cpu, address);
    if (address < 0xC061FF) return execute_unresolved_c0_c05f82_instruction(cpu, address);
    return execute_unresolved_c0_c05fd1_instruction(cpu, address);
}
bool execute_shared_page_c062(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06224) return execute_unresolved_c0_c05fd1_instruction(cpu, address);
    return execute_overworld_npc_collision_check_instruction(cpu, address);
}
bool execute_shared_page_c063(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0636A) return execute_overworld_npc_collision_check_instruction(cpu, address);
    return execute_unresolved_c0_c0613c_instruction(cpu, address);
}
bool execute_shared_page_c064(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06495) return execute_unresolved_c0_c0613c_instruction(cpu, address);
    return execute_unresolved_c0_c06267_instruction(cpu, address);
}
bool execute_shared_page_c066(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC066A6) return execute_unresolved_c0_c06267_instruction(cpu, address);
    if (address < 0xC066D4) return execute_unresolved_c0_c06478_instruction(cpu, address);
    return execute_unresolved_c0_c064a6_instruction(cpu, address);
}
bool execute_shared_page_c067(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06702) return execute_unresolved_c0_c064a6_instruction(cpu, address);
    if (address < 0xC06711) return execute_unresolved_c0_c064d4_instruction(cpu, address);
    if (address < 0xC06765) return execute_unresolved_c0_c064e3_instruction(cpu, address);
    if (address < 0xC0677C) return execute_unresolved_c0_c06537_instruction(cpu, address);
    if (address < 0xC067A6) return execute_unresolved_c0_c0654e_instruction(cpu, address);
    if (address < 0xC067D1) return execute_unresolved_c0_c06578_instruction(cpu, address);
    if (address < 0xC067F0) return execute_unresolved_c0_c065a3_instruction(cpu, address);
    return execute_unresolved_c0_c065c2_instruction(cpu, address);
}
bool execute_shared_page_c068(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06890) return execute_unresolved_c0_c065c2_instruction(cpu, address);
    return execute_overworld_screen_transition_instruction(cpu, address);
}
bool execute_shared_page_c06a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06ADD) return execute_overworld_screen_transition_instruction(cpu, address);
    return execute_overworld_get_screen_transition_sound_effect_instruction(cpu, address);
}
bool execute_shared_page_c06b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06B22) return execute_overworld_get_screen_transition_sound_effect_instruction(cpu, address);
    if (address < 0xC06BDD) return execute_unresolved_c0_c068f4_instruction(cpu, address);
    return execute_unresolved_c0_c069af_instruction(cpu, address);
}
bool execute_shared_page_c06c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06C1B) return execute_unresolved_c0_c069af_instruction(cpu, address);
    if (address < 0xC06C25) return execute_overworld_change_music_5dd6_instruction(cpu, address);
    if (address < 0xC06C35) return execute_unresolved_c0_c069f7_instruction(cpu, address);
    if (address < 0xC06C49) return execute_unresolved_c0_c06a07_instruction(cpu, address);
    if (address < 0xC06CB9) return execute_unresolved_c0_c06a1b_instruction(cpu, address);
    if (address < 0xC06CBC) return execute_unresolved_c0_c06a8b_instruction(cpu, address);
    if (address < 0xC06CBF) return execute_unresolved_c0_c06a8e_instruction(cpu, address);
    if (address < 0xC06CF8) return execute_unresolved_c0_c06a91_instruction(cpu, address);
    return execute_unresolved_c0_c06aca_instruction(cpu, address);
}
bool execute_shared_page_c06d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06D4F) return execute_unresolved_c0_c06aca_instruction(cpu, address);
    if (address < 0xC06D6B) return execute_overworld_spawn_buzz_buzz_instruction(cpu, address);
    return execute_unresolved_c0_c06b3d_instruction(cpu, address);
}
bool execute_shared_page_c06e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC06E2D) return execute_unresolved_c0_c06b3d_instruction(cpu, address);
    return execute_overworld_door_transition_instruction(cpu, address);
}
bool execute_shared_page_c070(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07048) return execute_overworld_door_transition_instruction(cpu, address);
    if (address < 0xC0705A) return execute_unresolved_c0_c06e1a_instruction(cpu, address);
    if (address < 0xC07078) return execute_unresolved_c0_c06e2c_instruction(cpu, address);
    if (address < 0xC0709C) return execute_unresolved_c0_c06e4a_instruction(cpu, address);
    return execute_unresolved_c0_c06e6e_jp_instruction(cpu, address);
}
bool execute_shared_page_c071(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC071B0) return execute_unresolved_c0_c06e6e_jp_instruction(cpu, address);
    return execute_unresolved_c0_c06f82_instruction(cpu, address);
}
bool execute_shared_page_c072(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0721B) return execute_unresolved_c0_c06f82_instruction(cpu, address);
    if (address < 0xC0728D) return execute_unresolved_c0_c06fed_instruction(cpu, address);
    if (address < 0xC072F9) return execute_unresolved_c0_c0705f_instruction(cpu, address);
    return execute_unresolved_c0_c070cb_instruction(cpu, address);
}
bool execute_shared_page_c074(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07413) return execute_unresolved_c0_c070cb_instruction(cpu, address);
    if (address < 0xC07447) return execute_overworld_disable_hotspot_instruction(cpu, address);
    return execute_overworld_reload_hotspots_instruction(cpu, address);
}
bool execute_shared_page_c075(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07507) return execute_overworld_reload_hotspots_instruction(cpu, address);
    if (address < 0xC075FC) return execute_overworld_activate_hotspot_instruction(cpu, address);
    return execute_unresolved_c0_c073c0_instruction(cpu, address);
}
bool execute_shared_page_c076(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC076B6) return execute_unresolved_c0_c073c0_instruction(cpu, address);
    return execute_unresolved_c0_c07477_instruction(cpu, address);
}
bool execute_shared_page_c077(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07765) return execute_unresolved_c0_c07477_instruction(cpu, address);
    return execute_unresolved_c0_c07526_instruction(cpu, address);
}
bool execute_shared_page_c078(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0781C) return execute_unresolved_c0_c07526_instruction(cpu, address);
    if (address < 0xC078E9) return execute_overworld_process_queued_interactions_instruction(cpu, address);
    return execute_unresolved_c0_c0769c_instruction(cpu, address);
}
bool execute_shared_page_c079(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07915) return execute_unresolved_c0_c0769c_instruction(cpu, address);
    if (address < 0xC07963) return execute_unresolved_c0_c076c8_instruction(cpu, address);
    if (address < 0xC079CA) return execute_unresolved_c0_c07716_instruction(cpu, address);
    if (address < 0xC079DA) return execute_unresolved_c0_c0777a_instruction(cpu, address);
    return execute_unresolved_c0_c0778a_instruction(cpu, address);
}
bool execute_shared_page_c07a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07A5F) return execute_unresolved_c0_c0778a_instruction(cpu, address);
    return execute_unresolved_c0_c0780f_instruction(cpu, address);
}
bool execute_shared_page_c07c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07C3C) return execute_unresolved_c0_c0780f_instruction(cpu, address);
    if (address < 0xC07C81) return execute_unresolved_c0_c079ec_instruction(cpu, address);
    if (address < 0xC07CA6) return execute_unresolved_c0_c07a31_instruction(cpu, address);
    return execute_unresolved_c0_c07a56_instruction(cpu, address);
}
bool execute_shared_page_c07d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07DA2) return execute_unresolved_c0_c07a56_instruction(cpu, address);
    return execute_unresolved_c0_c07b52_instruction(cpu, address);
}
bool execute_shared_page_c07e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC07EAB) return execute_unresolved_c0_c07b52_instruction(cpu, address);
    return execute_unresolved_c0_c07c5b_instruction(cpu, address);
}
bool execute_shared_page_c081(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08143) return execute_system_reset_instruction(cpu, address);
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
    if (address < 0xC086D7) return execute_system_copy_to_vram_instruction(cpu, address);
    return execute_system_sbrk_instruction(cpu, address);
}
bool execute_shared_page_c087(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0870E) return execute_system_sbrk_instruction(cpu, address);
    if (address < 0xC0871F) return execute_system_enable_nmi_joypad_instruction(cpu, address);
    if (address < 0xC0873A) return execute_unresolved_c0_c08726_instruction(cpu, address);
    if (address < 0xC0874C) return execute_unresolved_c0_c08744_instruction(cpu, address);
    if (address < 0xC08781) return execute_system_wait_until_next_frame_instruction(cpu, address);
    if (address < 0xC0878F) return execute_unresolved_c0_c0878b_instruction(cpu, address);
    if (address < 0xC08793) return execute_system_set_inidisp_far_instruction(cpu, address);
    if (address < 0xC0879D) return execute_system_set_inidisp_instruction(cpu, address);
    if (address < 0xC087A1) return execute_unresolved_c0_c087ab_redirect_instruction(cpu, address);
    if (address < 0xC087C4) return execute_unresolved_c0_c087ab_instruction(cpu, address);
    return execute_system_fade_in_with_mosaic_instruction(cpu, address);
}
bool execute_shared_page_c088(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0880A) return execute_system_fade_in_with_mosaic_instruction(cpu, address);
    if (address < 0xC0885E) return execute_system_fade_out_with_mosaic_instruction(cpu, address);
    if (address < 0xC0886C) return execute_system_fade_in_instruction(cpu, address);
    if (address < 0xC0887D) return execute_system_fade_out_instruction(cpu, address);
    if (address < 0xC08897) return execute_unresolved_c0_c0888b_instruction(cpu, address);
    if (address < 0xC088A3) return execute_unresolved_c0_c088a5_instruction(cpu, address);
    return execute_system_oam_clear_instruction(cpu, address);
}
bool execute_shared_page_c08b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08B0A) return execute_system_oam_clear_instruction(cpu, address);
    if (address < 0xC08B7F) return execute_unresolved_c0_c08b19_instruction(cpu, address);
    return execute_unresolved_c0_c08b8e_instruction(cpu, address);
}
bool execute_shared_page_c08c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08C44) return execute_unresolved_c0_c08b8e_instruction(cpu, address);
    if (address < 0xC08C45) return execute_unresolved_c0_c08c53_instruction(cpu, address);
    if (address < 0xC08C49) return execute_unresolved_c0_c08c54_instruction(cpu, address);
    if (address < 0xC08C5E) return execute_unresolved_c0_c08c58_instruction(cpu, address);
    if (address < 0xC08C78) return execute_unresolved_c0_c08c6d_instruction(cpu, address);
    if (address < 0xC08C92) return execute_unresolved_c0_c08c87_instruction(cpu, address);
    if (address < 0xC08CAC) return execute_unresolved_c0_c08ca1_instruction(cpu, address);
    if (address < 0xC08CC6) return execute_unresolved_c0_c08cbb_instruction(cpu, address);
    return execute_unresolved_c0_c08cd5_instruction(cpu, address);
}
bool execute_shared_page_c08d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08D6A) return execute_unresolved_c0_c08cd5_instruction(cpu, address);
    if (address < 0xC08D83) return execute_unresolved_c0_c08d79_instruction(cpu, address);
    if (address < 0xC08D8F) return execute_system_set_oam_size_instruction(cpu, address);
    if (address < 0xC08DCF) return execute_system_set_bg1_vram_location_instruction(cpu, address);
    return execute_system_set_bg2_vram_location_instruction(cpu, address);
}
bool execute_shared_page_c08e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08E0D) return execute_system_set_bg2_vram_location_instruction(cpu, address);
    if (address < 0xC08E4D) return execute_system_set_bg3_vram_location_instruction(cpu, address);
    if (address < 0xC08E8B) return execute_system_set_bg4_vram_location_instruction(cpu, address);
    if (address < 0xC08EC3) return execute_system_math_rand_instruction(cpu, address);
    if (address < 0xC08EDE) return execute_system_memcpy16_instruction(cpu, address);
    if (address < 0xC08EED) return execute_system_memcpy24_instruction(cpu, address);
    return execute_system_memset16_instruction(cpu, address);
}
bool execute_shared_page_c08f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC08F06) return execute_system_memset16_instruction(cpu, address);
    if (address < 0xC08F13) return execute_system_memset24_instruction(cpu, address);
    if (address < 0xC08F20) return execute_system_strlen_instruction(cpu, address);
    if (address < 0xC08F33) return execute_system_strcmp_instruction(cpu, address);
    if (address < 0xC08F59) return execute_system_setjmp_instruction(cpu, address);
    if (address < 0xC08FCC) return execute_system_longjmp_instruction(cpu, address);
    if (address < 0xC08FDB) return execute_system_math_mult8_instruction(cpu, address);
    return execute_system_math_mult168_instruction(cpu, address);
}
bool execute_shared_page_c090(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09014) return execute_system_math_mult168_instruction(cpu, address);
    if (address < 0xC09068) return execute_system_math_mult16_instruction(cpu, address);
    if (address < 0xC090B0) return execute_system_math_mult32_instruction(cpu, address);
    if (address < 0xC090C8) return execute_system_math_division8_instruction(cpu, address);
    if (address < 0xC090E1) return execute_system_math_division16_instruction(cpu, address);
    return execute_system_math_division32_instruction(cpu, address);
}
bool execute_shared_page_c091(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0912D) return execute_system_math_division8s_instruction(cpu, address);
    if (address < 0xC0915E) return execute_system_math_division16s_instruction(cpu, address);
    if (address < 0xC091C5) return execute_system_math_division32s_instruction(cpu, address);
    if (address < 0xC091D6) return execute_system_math_modulus8s_instruction(cpu, address);
    if (address < 0xC091E8) return execute_system_math_modulus16s_instruction(cpu, address);
    return execute_system_math_modulus32s_instruction(cpu, address);
}
bool execute_shared_page_c092(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0920D) return execute_system_math_modulus32s_instruction(cpu, address);
    if (address < 0xC09213) return execute_system_math_modulus8_instruction(cpu, address);
    if (address < 0xC09219) return execute_system_math_modulus16_instruction(cpu, address);
    if (address < 0xC0921F) return execute_system_math_modulus32_instruction(cpu, address);
    if (address < 0xC09224) return execute_system_math_asl16_instruction(cpu, address);
    if (address < 0xC0922C) return execute_system_math_asl32_instruction(cpu, address);
    if (address < 0xC0923D) return execute_system_math_asr8_instruction(cpu, address);
    if (address < 0xC09244) return execute_system_math_asr16_instruction(cpu, address);
    if (address < 0xC0925B) return execute_system_math_asr32_instruction(cpu, address);
    if (address < 0xC0925E) return execute_unresolved_c0_c09279_instruction(cpu, address);
    if (address < 0xC092D4) return execute_unresolved_c0_c0927c_jp_instruction(cpu, address);
    return execute_overworld_init_entity_instruction(cpu, address);
}
bool execute_shared_page_c094(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0941B) return execute_overworld_init_entity_instruction(cpu, address);
    if (address < 0xC09430) return execute_unresolved_c0_c0943c_instruction(cpu, address);
    if (address < 0xC09445) return execute_unresolved_c0_c09451_instruction(cpu, address);
    if (address < 0xC094AF) return execute_overworld_actionscript_run_actionscript_frame_instruction(cpu, address);
    if (address < 0xC094E5) return execute_unresolved_c0_c094d0_instruction(cpu, address);
    return execute_unresolved_c0_c09506_instruction(cpu, address);
}
bool execute_shared_page_c095(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC095D1) return execute_unresolved_c0_c09506_instruction(cpu, address);
    if (address < 0xC095E2) return execute_overworld_actionscript_script_00_instruction(cpu, address);
    if (address < 0xC095FF) return execute_overworld_actionscript_script_01_instruction(cpu, address);
    return execute_overworld_actionscript_script_24_instruction(cpu, address);
}
bool execute_shared_page_c096(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09606) return execute_overworld_actionscript_script_24_instruction(cpu, address);
    if (address < 0xC09628) return execute_overworld_actionscript_script_02_instruction(cpu, address);
    if (address < 0xC0962C) return execute_overworld_actionscript_script_19_instruction(cpu, address);
    if (address < 0xC09637) return execute_overworld_actionscript_script_03_instruction(cpu, address);
    if (address < 0xC0964E) return execute_overworld_actionscript_script_1a_instruction(cpu, address);
    if (address < 0xC09664) return execute_overworld_actionscript_script_1b_instruction(cpu, address);
    if (address < 0xC09689) return execute_overworld_actionscript_script_04_instruction(cpu, address);
    if (address < 0xC096A2) return execute_overworld_actionscript_script_05_instruction(cpu, address);
    if (address < 0xC096AE) return execute_overworld_actionscript_script_06_instruction(cpu, address);
    if (address < 0xC096C2) return execute_overworld_actionscript_script_3b_45_instruction(cpu, address);
    if (address < 0xC096D2) return execute_overworld_actionscript_script_28_instruction(cpu, address);
    if (address < 0xC096E2) return execute_overworld_actionscript_script_29_instruction(cpu, address);
    if (address < 0xC096F2) return execute_overworld_actionscript_script_2a_instruction(cpu, address);
    return execute_overworld_actionscript_script_3f_49_instruction(cpu, address);
}
bool execute_shared_page_c097(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09710) return execute_overworld_actionscript_script_3f_49_instruction(cpu, address);
    if (address < 0xC0972E) return execute_overworld_actionscript_script_40_4a_instruction(cpu, address);
    if (address < 0xC0974C) return execute_overworld_actionscript_script_41_4b_instruction(cpu, address);
    if (address < 0xC09771) return execute_overworld_actionscript_script_2e_instruction(cpu, address);
    if (address < 0xC09796) return execute_overworld_actionscript_script_2f_instruction(cpu, address);
    if (address < 0xC097BB) return execute_overworld_actionscript_script_30_instruction(cpu, address);
    if (address < 0xC097CE) return execute_overworld_actionscript_script_31_instruction(cpu, address);
    if (address < 0xC097E1) return execute_overworld_actionscript_script_32_instruction(cpu, address);
    return execute_overworld_actionscript_script_33_instruction(cpu, address);
}
bool execute_shared_page_c098(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09805) return execute_overworld_actionscript_script_33_instruction(cpu, address);
    if (address < 0xC09829) return execute_overworld_actionscript_script_34_instruction(cpu, address);
    if (address < 0xC09854) return execute_overworld_actionscript_script_35_instruction(cpu, address);
    if (address < 0xC0987F) return execute_overworld_actionscript_script_36_instruction(cpu, address);
    if (address < 0xC0988D) return execute_overworld_actionscript_script_2b_instruction(cpu, address);
    if (address < 0xC0989B) return execute_overworld_actionscript_script_2c_instruction(cpu, address);
    if (address < 0xC098A9) return execute_overworld_actionscript_script_2d_instruction(cpu, address);
    if (address < 0xC098BD) return execute_overworld_actionscript_script_37_instruction(cpu, address);
    if (address < 0xC098D1) return execute_overworld_actionscript_script_38_instruction(cpu, address);
    if (address < 0xC098E6) return execute_overworld_actionscript_script_39_instruction(cpu, address);
    if (address < 0xC098FB) return execute_unresolved_c0_c09907_instruction(cpu, address);
    return execute_overworld_actionscript_script_3a_instruction(cpu, address);
}
bool execute_shared_page_c099(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09910) return execute_overworld_actionscript_script_3a_instruction(cpu, address);
    if (address < 0xC0991C) return execute_overworld_actionscript_script_43_instruction(cpu, address);
    if (address < 0xC0993C) return execute_overworld_actionscript_script_42_4c_instruction(cpu, address);
    if (address < 0xC0994A) return execute_overworld_actionscript_script_0a_instruction(cpu, address);
    if (address < 0xC09958) return execute_overworld_actionscript_script_0b_instruction(cpu, address);
    if (address < 0xC0997D) return execute_overworld_actionscript_script_10_instruction(cpu, address);
    if (address < 0xC099A2) return execute_overworld_actionscript_script_11_instruction(cpu, address);
    if (address < 0xC099BC) return execute_overworld_actionscript_script_0c_instruction(cpu, address);
    if (address < 0xC099ED) return execute_overworld_actionscript_script_07_instruction(cpu, address);
    if (address < 0xC099F9) return execute_overworld_actionscript_script_13_instruction(cpu, address);
    return execute_overworld_actionscript_script_08_instruction(cpu, address);
}
bool execute_shared_page_c09a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09A0D) return execute_overworld_actionscript_script_08_instruction(cpu, address);
    if (address < 0xC09A17) return execute_overworld_actionscript_script_09_instruction(cpu, address);
    if (address < 0xC09A1D) return execute_overworld_actionscript_script_3c_46_instruction(cpu, address);
    if (address < 0xC09A23) return execute_overworld_actionscript_script_3d_47_instruction(cpu, address);
    if (address < 0xC09A3B) return execute_overworld_actionscript_script_3e_48_instruction(cpu, address);
    if (address < 0xC09A66) return execute_overworld_actionscript_script_18_instruction(cpu, address);
    if (address < 0xC09A76) return execute_overworld_actionscript_script_14_instruction(cpu, address);
    if (address < 0xC09A7E) return execute_overworld_actionscript_script_27_instruction(cpu, address);
    if (address < 0xC09AA4) return execute_overworld_actionscript_script_0d_instruction(cpu, address);
    if (address < 0xC09AAB) return execute_unresolved_c0_c09ac5_instruction(cpu, address);
    if (address < 0xC09AB2) return execute_unresolved_c0_c09acc_instruction(cpu, address);
    if (address < 0xC09ABA) return execute_unresolved_c0_c09ad3_instruction(cpu, address);
    if (address < 0xC09AC1) return execute_unresolved_c0_c09adb_instruction(cpu, address);
    if (address < 0xC09AE8) return execute_overworld_actionscript_script_0e_instruction(cpu, address);
    if (address < 0xC09AEE) return execute_overworld_actionscript_script_0f_instruction(cpu, address);
    if (address < 0xC09AFE) return execute_overworld_actionscript_script_12_instruction(cpu, address);
    return execute_overworld_actionscript_script_15_instruction(cpu, address);
}
bool execute_shared_page_c09b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09B0B) return execute_overworld_actionscript_script_15_instruction(cpu, address);
    if (address < 0xC09B23) return execute_overworld_actionscript_script_16_instruction(cpu, address);
    if (address < 0xC09B2C) return execute_overworld_actionscript_script_17_instruction(cpu, address);
    if (address < 0xC09B40) return execute_overworld_actionscript_script_1c_instruction(cpu, address);
    if (address < 0xC09B4A) return execute_overworld_actionscript_script_1d_instruction(cpu, address);
    if (address < 0xC09B58) return execute_overworld_actionscript_script_1e_instruction(cpu, address);
    if (address < 0xC09B70) return execute_overworld_actionscript_script_1f_instruction(cpu, address);
    if (address < 0xC09B88) return execute_overworld_actionscript_script_20_instruction(cpu, address);
    if (address < 0xC09B93) return execute_overworld_actionscript_script_44_instruction(cpu, address);
    if (address < 0xC09BAB) return execute_overworld_actionscript_script_21_instruction(cpu, address);
    if (address < 0xC09BC3) return execute_overworld_actionscript_script_26_instruction(cpu, address);
    if (address < 0xC09BCD) return execute_overworld_actionscript_script_22_instruction(cpu, address);
    if (address < 0xC09BD7) return execute_overworld_actionscript_script_23_instruction(cpu, address);
    if (address < 0xC09BE1) return execute_overworld_actionscript_script_25_instruction(cpu, address);
    return execute_unresolved_c0_c09c02_instruction(cpu, address);
}
bool execute_shared_page_c09c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09C14) return execute_unresolved_c0_c09c02_instruction(cpu, address);
    if (address < 0xC09C1A) return execute_unresolved_c0_c09c35_instruction(cpu, address);
    if (address < 0xC09C36) return execute_unresolved_c0_c09c3b_instruction(cpu, address);
    if (address < 0xC09C52) return execute_unresolved_c0_c09c57_instruction(cpu, address);
    if (address < 0xC09C6E) return execute_unresolved_c0_c09c73_instruction(cpu, address);
    if (address < 0xC09C78) return execute_unresolved_c0_c09c8f_instruction(cpu, address);
    if (address < 0xC09C94) return execute_unresolved_c0_c09c99_instruction(cpu, address);
    if (address < 0xC09CB6) return execute_unresolved_c0_c09cb5_instruction(cpu, address);
    if (address < 0xC09CE2) return execute_unresolved_c0_c09cd7_instruction(cpu, address);
    if (address < 0xC09CF1) return execute_unresolved_c0_c09d03_instruction(cpu, address);
    if (address < 0xC09CFE) return execute_unresolved_c0_c09d12_instruction(cpu, address);
    return execute_unresolved_c0_c09d1f_instruction(cpu, address);
}
bool execute_shared_page_c09d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09D1D) return execute_unresolved_c0_c09d1f_instruction(cpu, address);
    if (address < 0xC09D3F) return execute_unresolved_c0_c09d3e_instruction(cpu, address);
    if (address < 0xC09D57) return execute_unresolved_c0_c09d60_instruction(cpu, address);
    if (address < 0xC09D65) return execute_unresolved_c0_c09d78_instruction(cpu, address);
    if (address < 0xC09D6C) return execute_overworld_actionscript_script_read8_instruction(cpu, address);
    if (address < 0xC09D73) return execute_overworld_actionscript_script_read8_copy_instruction(cpu, address);
    if (address < 0xC09D78) return execute_overworld_actionscript_script_read16_instruction(cpu, address);
    if (address < 0xC09D7D) return execute_overworld_actionscript_script_read16_copy_instruction(cpu, address);
    if (address < 0xC09D80) return execute_overworld_actionscript_jump_to_loaded_movement_pointer_instruction(cpu, address);
    if (address < 0xC09D8D) return execute_overworld_actionscript_clear_sprite_tick_callback_instruction(cpu, address);
    return execute_unresolved_c0_c09dae_instruction(cpu, address);
}
bool execute_shared_page_c09e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09E50) return execute_unresolved_c0_c09dae_instruction(cpu, address);
    if (address < 0xC09E58) return execute_unresolved_c0_c09e71_instruction(cpu, address);
    if (address < 0xC09E77) return execute_unresolved_c0_c09e79_instruction(cpu, address);
    if (address < 0xC09E8B) return execute_unresolved_c0_c09e98_instruction(cpu, address);
    if (address < 0xC09EAD) return execute_unresolved_c0_c09eac_instruction(cpu, address);
    if (address < 0xC09EDE) return execute_unresolved_c0_c09ece_instruction(cpu, address);
    return execute_unresolved_c0_c09eff_instruction(cpu, address);
}
bool execute_shared_page_c09f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC09F1A) return execute_unresolved_c0_c09eff_instruction(cpu, address);
    if (address < 0xC09F50) return execute_unresolved_c0_c09f3b_instruction(cpu, address);
    if (address < 0xC09F61) return execute_unresolved_c0_c09f71_instruction(cpu, address);
    if (address < 0xC09F87) return execute_overworld_actionscript_choose_random_instruction(cpu, address);
    if (address < 0xC09F8D) return execute_unresolved_c0_c09fa8_instruction(cpu, address);
    if (address < 0xC09F9A) return execute_overworld_actionscript_fade_in_instruction(cpu, address);
    if (address < 0xC09FA7) return execute_overworld_actionscript_fade_out_instruction(cpu, address);
    if (address < 0xC09FD0) return execute_unresolved_c0_c09fae_instruction(cpu, address);
    if (address < 0xC09FEB) return execute_unresolved_c0_c09ff1_instruction(cpu, address);
    return execute_unresolved_c0_c0a00c_instruction(cpu, address);
}
bool execute_shared_page_c0a0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A002) return execute_unresolved_c0_c0a00c_instruction(cpu, address);
    if (address < 0xC0A019) return execute_unresolved_c0_c0a023_instruction(cpu, address);
    if (address < 0xC0A034) return execute_unresolved_c0_c0a03a_instruction(cpu, address);
    if (address < 0xC0A04B) return execute_unresolved_c0_c0a055_instruction(cpu, address);
    if (address < 0xC0A068) return execute_unresolved_c0_c0a06c_instruction(cpu, address);
    if (address < 0xC0A07F) return execute_unresolved_c0_c0a089_instruction(cpu, address);
    if (address < 0xC0A09A) return execute_unresolved_c0_c0a0a0_instruction(cpu, address);
    if (address < 0xC0A0A9) return execute_unresolved_c0_c0a0bb_instruction(cpu, address);
    if (address < 0xC0A0C2) return execute_unresolved_c0_c0a0ca_instruction(cpu, address);
    if (address < 0xC0A0D9) return execute_unresolved_c0_c0a0e3_instruction(cpu, address);
    if (address < 0xC0A0FB) return execute_unresolved_c0_c0a0fa_instruction(cpu, address);
    return execute_system_check_hardware_instruction(cpu, address);
}
bool execute_shared_page_c0a1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A131) return execute_system_check_hardware_instruction(cpu, address);
    if (address < 0xC0A135) return execute_unresolved_c0_c0a156_redirect_instruction(cpu, address);
    if (address < 0xC0A1AD) return execute_unresolved_c0_c0a156_instruction(cpu, address);
    if (address < 0xC0A1D1) return execute_unresolved_c0_c0a1ce_instruction(cpu, address);
    if (address < 0xC0A1FB) return execute_unresolved_c0_c0a1f2_instruction(cpu, address);
    return execute_unresolved_c0_c0a21c_instruction(cpu, address);
}
bool execute_shared_page_c0a2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A20F) return execute_unresolved_c0_c0a21c_instruction(cpu, address);
    if (address < 0xC0A233) return execute_unresolved_c0_c0a230_instruction(cpu, address);
    if (address < 0xC0A24A) return execute_unresolved_c0_c0a254_instruction(cpu, address);
    if (address < 0xC0A296) return execute_unresolved_c0_c0a26b_instruction(cpu, address);
    if (address < 0xC0A2C0) return execute_unresolved_c0_c0a2b7_instruction(cpu, address);
    if (address < 0xC0A2F6) return execute_unresolved_c0_c0a2e1_instruction(cpu, address);
    return execute_unresolved_c0_c0a317_instruction(cpu, address);
}
bool execute_shared_page_c0a3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A33F) return execute_unresolved_c0_c0a317_instruction(cpu, address);
    if (address < 0xC0A363) return execute_unresolved_c0_c0a360_instruction(cpu, address);
    if (address < 0xC0A383) return execute_unresolved_c0_c0a384_instruction(cpu, address);
    return execute_unresolved_c0_c0a3a4_instruction(cpu, address);
}
bool execute_shared_page_c0a4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A422) return execute_unresolved_c0_c0a3a4_instruction(cpu, address);
    return execute_unresolved_c0_c0a443_instruction(cpu, address);
}
bool execute_shared_page_c0a5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A54D) return execute_unresolved_c0_c0a443_instruction(cpu, address);
    return execute_unresolved_c0_c0a56e_instruction(cpu, address);
}
bool execute_shared_page_c0a6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A61A) return execute_system_math_rand_0_3_instruction(cpu, address);
    if (address < 0xC0A622) return execute_system_math_rand_0_7_instruction(cpu, address);
    if (address < 0xC0A630) return execute_unresolved_c0_c0a643_instruction(cpu, address);
    if (address < 0xC0A63E) return execute_overworld_actionscript_set_direction8_instruction(cpu, address);
    if (address < 0xC0A64C) return execute_overworld_actionscript_set_direction_instruction(cpu, address);
    if (address < 0xC0A652) return execute_unresolved_c0_c0a66d_instruction(cpu, address);
    if (address < 0xC0A658) return execute_unresolved_c0_c0a673_instruction(cpu, address);
    if (address < 0xC0A664) return execute_overworld_actionscript_set_surface_flags_instruction(cpu, address);
    if (address < 0xC0A670) return execute_unresolved_c0_c0a685_instruction(cpu, address);
    if (address < 0xC0A676) return execute_unresolved_c0_c0a691_instruction(cpu, address);
    if (address < 0xC0A681) return execute_unresolved_c0_c0a697_instruction(cpu, address);
    if (address < 0xC0A68C) return execute_unresolved_c0_c0a6a2_instruction(cpu, address);
    if (address < 0xC0A697) return execute_unresolved_c0_c0a6ad_instruction(cpu, address);
    if (address < 0xC0A6A4) return execute_unresolved_c0_c0a6b8_instruction(cpu, address);
    if (address < 0xC0A6AA) return execute_unresolved_c0_c0a6c5_instruction(cpu, address);
    if (address < 0xC0A6B0) return execute_unresolved_c0_c0a6cb_instruction(cpu, address);
    if (address < 0xC0A6B9) return execute_overworld_actionscript_disable_current_entity_collision_instruction(cpu, address);
    if (address < 0xC0A6C2) return execute_overworld_actionscript_clear_current_entity_collision_instruction(cpu, address);
    return execute_unresolved_c0_c0a6e3_instruction(cpu, address);
}
bool execute_shared_page_c0a7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A75F) return execute_unresolved_c0_c0a6e3_instruction(cpu, address);
    if (address < 0xC0A773) return execute_unresolved_c0_c0a780_instruction(cpu, address);
    return execute_unresolved_c0_c0a794_instruction(cpu, address);
}
bool execute_shared_page_c0a8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A80E) return execute_unresolved_c0_c0a794_instruction(cpu, address);
    if (address < 0xC0A817) return execute_overworld_actionscript_disable_current_entity_collision2_instruction(cpu, address);
    if (address < 0xC0A820) return execute_overworld_actionscript_clear_current_entity_collision2_instruction(cpu, address);
    if (address < 0xC0A82B) return execute_unresolved_c0_c0a841_instruction(cpu, address);
    if (address < 0xC0A836) return execute_unresolved_c0_c0a84c_instruction(cpu, address);
    if (address < 0xC0A843) return execute_unresolved_c0_c0a857_instruction(cpu, address);
    if (address < 0xC0A84E) return execute_unresolved_c0_c0a864_instruction(cpu, address);
    if (address < 0xC0A859) return execute_unresolved_c0_c0a86f_instruction(cpu, address);
    if (address < 0xC0A86C) return execute_unresolved_c0_c0a87a_instruction(cpu, address);
    if (address < 0xC0A87F) return execute_unresolved_c0_c0a88d_instruction(cpu, address);
    if (address < 0xC0A892) return execute_unresolved_c0_c0a8a0_instruction(cpu, address);
    if (address < 0xC0A8A5) return execute_unresolved_c0_c0a8b3_instruction(cpu, address);
    if (address < 0xC0A8B0) return execute_unresolved_c0_c0a8c6_instruction(cpu, address);
    if (address < 0xC0A8BB) return execute_unresolved_c0_c0a8d1_instruction(cpu, address);
    if (address < 0xC0A8C6) return execute_unresolved_c0_c0a8dc_instruction(cpu, address);
    if (address < 0xC0A8CE) return execute_unresolved_c0_c0a8e7_instruction(cpu, address);
    if (address < 0xC0A8D6) return execute_unresolved_c0_c0a8ef_instruction(cpu, address);
    if (address < 0xC0A8DE) return execute_overworld_actionscript_prepare_new_entity_at_self_instruction(cpu, address);
    if (address < 0xC0A8E6) return execute_overworld_actionscript_prepare_new_entity_at_party_leader_instruction(cpu, address);
    if (address < 0xC0A8F1) return execute_overworld_actionscript_prepare_new_entity_at_teleport_destination_instruction(cpu, address);
    return execute_overworld_actionscript_prepare_new_entity_instruction(cpu, address);
}
bool execute_shared_page_c0a9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0A90C) return execute_overworld_actionscript_prepare_new_entity_instruction(cpu, address);
    if (address < 0xC0A917) return execute_unresolved_c0_c0a92d_instruction(cpu, address);
    if (address < 0xC0A922) return execute_unresolved_c0_c0a938_instruction(cpu, address);
    if (address < 0xC0A92D) return execute_overworld_actionscript_get_position_of_party_member_instruction(cpu, address);
    if (address < 0xC0A938) return execute_unresolved_c0_c0a94e_instruction(cpu, address);
    if (address < 0xC0A943) return execute_unresolved_c0_c0a959_instruction(cpu, address);
    if (address < 0xC0A956) return execute_unresolved_c0_c0a964_instruction(cpu, address);
    if (address < 0xC0A96A) return execute_battle_load_battlebg_movement_instruction(cpu, address);
    if (address < 0xC0A97E) return execute_unresolved_c0_c0a98b_instruction(cpu, address);
    if (address < 0xC0A992) return execute_unresolved_c0_c0a99f_instruction(cpu, address);
    if (address < 0xC0A9AE) return execute_unresolved_c0_c0a9b3_instruction(cpu, address);
    if (address < 0xC0A9CA) return execute_unresolved_c0_c0a9cf_instruction(cpu, address);
    if (address < 0xC0A9E6) return execute_unresolved_c0_c0a9eb_instruction(cpu, address);
    return execute_overworld_actionscript_fade_out_with_mosaic_instruction(cpu, address);
}
bool execute_shared_page_c0aa(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0AA02) return execute_overworld_actionscript_fade_out_with_mosaic_instruction(cpu, address);
    if (address < 0xC0AA1E) return execute_unresolved_c0_c0aa23_instruction(cpu, address);
    if (address < 0xC0AA4D) return execute_unresolved_c0_c0aa3f_instruction(cpu, address);
    if (address < 0xC0AA8B) return execute_unresolved_c0_c0aa6e_instruction(cpu, address);
    if (address < 0xC0AA94) return execute_unresolved_c0_c0aaac_instruction(cpu, address);
    if (address < 0xC0AAAC) return execute_unresolved_c0_c0aab5_instruction(cpu, address);
    if (address < 0xC0AAB0) return execute_unresolved_c0_c0aacd_instruction(cpu, address);
    if (address < 0xC0AAB4) return execute_unresolved_c0_c0aad1_instruction(cpu, address);
    if (address < 0xC0AADC) return execute_unresolved_c0_c0aad5_instruction(cpu, address);
    if (address < 0xC0AAE5) return execute_unresolved_c0_c0aafd_instruction(cpu, address);
    return execute_audio_load_spc700_data_instruction(cpu, address);
}
bool execute_shared_page_c0ab(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0AB87) return execute_audio_load_spc700_data_instruction(cpu, address);
    if (address < 0xC0AB9C) return execute_audio_wait_for_spc700_instruction(cpu, address);
    if (address < 0xC0ABA5) return execute_unresolved_c0_c0abbd_instruction(cpu, address);
    if (address < 0xC0ABBF) return execute_audio_stop_music_instruction(cpu, address);
    if (address < 0xC0ABEB) return execute_audio_play_sound_instruction(cpu, address);
    if (address < 0xC0ABFF) return execute_unresolved_c0_c0ac0c_instruction(cpu, address);
    return execute_unresolved_c0_c0ac20_instruction(cpu, address);
}
bool execute_shared_page_c0ac(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0AC19) return execute_unresolved_c0_c0ac20_instruction(cpu, address);
    if (address < 0xC0AC22) return execute_unresolved_c0_c0ac3a_instruction(cpu, address);
    return execute_unresolved_c0_c0ac43_instruction(cpu, address);
}
bool execute_shared_page_c0ad(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0AD35) return execute_unresolved_c0_c0ac43_instruction(cpu, address);
    if (address < 0xC0AD7E) return execute_unresolved_c0_c0ad56_instruction(cpu, address);
    if (address < 0xC0AD91) return execute_unresolved_c0_c0ad9f_instruction(cpu, address);
    return execute_miscellaneous_battle_backgrounds_do_battlebg_dma_instruction(cpu, address);
}
bool execute_shared_page_c0ae(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0AE2B) return execute_unresolved_c0_c0ae34_instruction(cpu, address);
    if (address < 0xC0AE35) return execute_miscellaneous_battle_backgrounds_load_bg_offset_parameters_instruction(cpu, address);
    if (address < 0xC0AE39) return execute_miscellaneous_battle_backgrounds_load_bg_offset_parameters2_instruction(cpu, address);
    return execute_miscellaneous_battle_backgrounds_prepare_bg_offset_tables_instruction(cpu, address);
}
bool execute_shared_page_c0af(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0AFAC) return execute_miscellaneous_battle_backgrounds_prepare_bg_offset_tables_instruction(cpu, address);
    if (address < 0xC0AFF9) return execute_unresolved_c0_c0afcd_instruction(cpu, address);
    return execute_system_set_coldata_instruction(cpu, address);
}
bool execute_shared_page_c0b0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0B018) return execute_system_set_coldata_instruction(cpu, address);
    if (address < 0xC0B026) return execute_system_set_colour_addsub_mode_instruction(cpu, address);
    if (address < 0xC0B089) return execute_system_set_window_mask_instruction(cpu, address);
    if (address < 0xC0B097) return execute_unresolved_c0_c0b0aa_instruction(cpu, address);
    if (address < 0xC0B0CE) return execute_unresolved_c0_c0b0b8_instruction(cpu, address);
    return execute_unresolved_c0_c0b0ef_instruction(cpu, address);
}
bool execute_shared_page_c0b1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0B128) return execute_unresolved_c0_c0b0ef_instruction(cpu, address);
    return execute_unresolved_c0_c0b149_instruction(cpu, address);
}
bool execute_shared_page_c0b6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0B632) return execute_system_file_select_init_instruction(cpu, address);
    if (address < 0xC0B652) return execute_unresolved_c0_c0b65f_instruction(cpu, address);
    return execute_unresolved_c0_c0b67f_instruction(cpu, address);
}
bool execute_shared_page_c0b7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0B717) return execute_unresolved_c0_c0b67f_instruction(cpu, address);
    if (address < 0xC0B7BE) return execute_battle_init_overworld_instruction(cpu, address);
    return execute_system_main_instruction(cpu, address);
}
bool execute_shared_page_c0b9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0B975) return execute_system_main_instruction(cpu, address);
    if (address < 0xC0B997) return execute_system_game_init_instruction(cpu, address);
    return execute_unresolved_c0_c0b9bc_instruction(cpu, address);
}
bool execute_shared_page_c0ba(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0BA14) return execute_unresolved_c0_c0b9bc_instruction(cpu, address);
    return execute_unresolved_c0_c0ba35_instruction(cpu, address);
}
bool execute_shared_page_c0bc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0BC53) return execute_unresolved_c0_c0ba35_instruction(cpu, address);
    return execute_miscellaneous_find_path_to_party_instruction(cpu, address);
}
bool execute_shared_page_c0bd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0BD78) return execute_miscellaneous_find_path_to_party_instruction(cpu, address);
    return execute_unresolved_c0_c0bd96_instruction(cpu, address);
}
bool execute_shared_page_c0bf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0BF54) return execute_unresolved_c0_c0bd96_instruction(cpu, address);
    return execute_unresolved_c0_c0bf72_instruction(cpu, address);
}
bool execute_shared_page_c0c0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C096) return execute_unresolved_c0_c0bf72_instruction(cpu, address);
    return execute_unresolved_c0_c0c0b4_instruction(cpu, address);
}
bool execute_shared_page_c0c1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C17D) return execute_unresolved_c0_c0c0b4_instruction(cpu, address);
    return execute_unresolved_c0_c0c19b_instruction(cpu, address);
}
bool execute_shared_page_c0c2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C233) return execute_unresolved_c0_c0c19b_instruction(cpu, address);
    if (address < 0xC0C2EE) return execute_unresolved_c0_c0c251_instruction(cpu, address);
    return execute_unresolved_c0_c0c30c_instruction(cpu, address);
}
bool execute_shared_page_c0c3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C335) return execute_unresolved_c0_c0c30c_instruction(cpu, address);
    if (address < 0xC0C33F) return execute_unresolved_c0_c0c353_instruction(cpu, address);
    if (address < 0xC0C345) return execute_unresolved_c0_c0c35d_instruction(cpu, address);
    if (address < 0xC0C3DB) return execute_unresolved_c0_c0c363_instruction(cpu, address);
    return execute_unresolved_c0_c0c3f9_instruction(cpu, address);
}
bool execute_shared_page_c0c4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C471) return execute_unresolved_c0_c0c3f9_instruction(cpu, address);
    if (address < 0xC0C491) return execute_unresolved_c0_c0c48f_instruction(cpu, address);
    if (address < 0xC0C4D9) return execute_unresolved_c0_c0c4af_instruction(cpu, address);
    return execute_overworld_get_direction_from_player_to_entity_instruction(cpu, address);
}
bool execute_shared_page_c0c5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C506) return execute_overworld_get_direction_from_player_to_entity_instruction(cpu, address);
    if (address < 0xC0C5EA) return execute_unresolved_c0_c0c524_instruction(cpu, address);
    if (address < 0xC0C5F7) return execute_overworld_get_opposite_direction_from_player_to_entity_instruction(cpu, address);
    return execute_unresolved_c0_c0c615_instruction(cpu, address);
}
bool execute_shared_page_c0c6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C60D) return execute_unresolved_c0_c0c615_instruction(cpu, address);
    if (address < 0xC0C664) return execute_unresolved_c0_c0c62b_instruction(cpu, address);
    if (address < 0xC0C680) return execute_overworld_actionscript_get_direction_rotated_clockwise_instruction(cpu, address);
    if (address < 0xC0C698) return execute_overworld_actionscript_get_direction_turned_randomly_left_or_right_instruction(cpu, address);
    if (address < 0xC0C6F3) return execute_unresolved_c0_c0c6b6_instruction(cpu, address);
    return execute_unresolved_c0_c0c711_instruction(cpu, address);
}
bool execute_shared_page_c0c7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C742) return execute_unresolved_c0_c0c711_instruction(cpu, address);
    if (address < 0xC0C78E) return execute_unresolved_c0_c0c760_instruction(cpu, address);
    if (address < 0xC0C7BD) return execute_unresolved_c0_c0c7ac_instruction(cpu, address);
    if (address < 0xC0C7EA) return execute_unresolved_c0_c0c7db_instruction(cpu, address);
    return execute_unresolved_c0_c0c808_instruction(cpu, address);
}
bool execute_shared_page_c0c8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0C81D) return execute_unresolved_c0_c0c808_instruction(cpu, address);
    return execute_unresolved_c0_c0c83b_instruction(cpu, address);
}
bool execute_shared_page_c0ca(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0CA30) return execute_unresolved_c0_c0c83b_instruction(cpu, address);
    return execute_unresolved_c0_c0ca4e_instruction(cpu, address);
}
bool execute_shared_page_c0cb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0CBB5) return execute_unresolved_c0_c0ca4e_instruction(cpu, address);
    if (address < 0xC0CBF3) return execute_unresolved_c0_c0cbd3_instruction(cpu, address);
    return execute_unresolved_c0_c0cc11_instruction(cpu, address);
}
bool execute_shared_page_c0cc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0CCAE) return execute_unresolved_c0_c0cc11_instruction(cpu, address);
    return execute_unresolved_c0_c0cccc_instruction(cpu, address);
}
bool execute_shared_page_c0cd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0CD32) return execute_unresolved_c0_c0cccc_instruction(cpu, address);
    return execute_unresolved_c0_c0cd50_jp_instruction(cpu, address);
}
bool execute_shared_page_c0ce(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0CE88) return execute_unresolved_c0_c0cd50_jp_instruction(cpu, address);
    return execute_unresolved_c0_c0cebe_instruction(cpu, address);
}
bool execute_shared_page_c0cf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0CF61) return execute_unresolved_c0_c0cebe_instruction(cpu, address);
    return execute_unresolved_c0_c0cf97_instruction(cpu, address);
}
bool execute_shared_page_c0d0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0D0A3) return execute_unresolved_c0_c0cf97_instruction(cpu, address);
    if (address < 0xC0D0B0) return execute_unresolved_c0_c0d0d9_instruction(cpu, address);
    return execute_unresolved_c0_c0d0e6_instruction(cpu, address);
}
bool execute_shared_page_c0d1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0D126) return execute_unresolved_c0_c0d0e6_instruction(cpu, address);
    if (address < 0xC0D15F) return execute_unresolved_c0_c0d15c_instruction(cpu, address);
    if (address < 0xC0D165) return execute_unresolved_c0_c0d195_instruction(cpu, address);
    return execute_unresolved_c0_c0d19b_jp_instruction(cpu, address);
}
bool execute_shared_page_c0d4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0D4A6) return execute_unresolved_c0_c0d19b_jp_instruction(cpu, address);
    return execute_unresolved_c0_c0d4de_instruction(cpu, address);
}
bool execute_shared_page_c0d5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0D563) return execute_unresolved_c0_c0d4de_instruction(cpu, address);
    if (address < 0xC0D578) return execute_unresolved_c0_c0d59b_instruction(cpu, address);
    return execute_unresolved_c0_c0d5b0_instruction(cpu, address);
}
bool execute_shared_page_c0d7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0D747) return execute_unresolved_c0_c0d5b0_instruction(cpu, address);
    if (address < 0xC0D77B) return execute_unresolved_c0_c0d77f_instruction(cpu, address);
    if (address < 0xC0D78F) return execute_unresolved_c0_c0d7b3_instruction(cpu, address);
    if (address < 0xC0D7A8) return execute_unresolved_c0_c0d7c7_instruction(cpu, address);
    if (address < 0xC0D7BF) return execute_unresolved_c0_c0d7e0_instruction(cpu, address);
    return execute_unresolved_c0_c0d7f7_instruction(cpu, address);
}
bool execute_shared_page_c0d9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0D957) return execute_unresolved_c0_c0d7f7_instruction(cpu, address);
    if (address < 0xC0D9F9) return execute_unresolved_c0_c0d98f_instruction(cpu, address);
    return execute_unresolved_c0_c0da31_instruction(cpu, address);
}
bool execute_shared_page_c0da(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0DAD7) return execute_unresolved_c0_c0da31_instruction(cpu, address);
    return execute_unresolved_c0_c0db0f_instruction(cpu, address);
}
bool execute_shared_page_c0db(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0DBAE) return execute_unresolved_c0_c0db0f_instruction(cpu, address);
    return execute_overworld_schedule_overworld_task_instruction(cpu, address);
}
bool execute_shared_page_c0dc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0DC16) return execute_unresolved_c0_c0dc38_instruction(cpu, address);
    if (address < 0xC0DC8E) return execute_overworld_process_overworld_tasks_instruction(cpu, address);
    if (address < 0xC0DCD7) return execute_overworld_load_dad_phone_instruction(cpu, address);
    if (address < 0xC0DCF4) return execute_unresolved_c0_c0dd0f_instruction(cpu, address);
    return execute_unresolved_c0_c0dd2c_instruction(cpu, address);
}
bool execute_shared_page_c0dd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0DD1B) return execute_unresolved_c0_c0dd2c_instruction(cpu, address);
    if (address < 0xC0DD41) return execute_overworld_set_teleport_state_instruction(cpu, address);
    if (address < 0xC0DDDB) return execute_unresolved_c0_c0dd79_instruction(cpu, address);
    return execute_unresolved_c0_c0de16_instruction(cpu, address);
}
bool execute_shared_page_c0de(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0DE0B) return execute_unresolved_c0_c0de16_instruction(cpu, address);
    if (address < 0xC0DE41) return execute_unresolved_c0_c0de46_instruction(cpu, address);
    if (address < 0xC0DE9E) return execute_unresolved_c0_c0de7c_instruction(cpu, address);
    if (address < 0xC0DEE7) return execute_unresolved_c0_c0ded9_instruction(cpu, address);
    return execute_unresolved_c0_c0df22_instruction(cpu, address);
}
bool execute_shared_page_c0e1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E15B) return execute_unresolved_c0_c0df22_instruction(cpu, address);
    if (address < 0xC0E1D9) return execute_unresolved_c0_c0e196_instruction(cpu, address);
    return execute_unresolved_c0_c0e214_instruction(cpu, address);
}
bool execute_shared_page_c0e2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E219) return execute_unresolved_c0_c0e214_instruction(cpu, address);
    if (address < 0xC0E254) return execute_unresolved_c0_c0e254_instruction(cpu, address);
    return execute_unresolved_c0_c0e28f_instruction(cpu, address);
}
bool execute_shared_page_c0e3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E386) return execute_unresolved_c0_c0e28f_instruction(cpu, address);
    return execute_unresolved_c0_c0e3c1_instruction(cpu, address);
}
bool execute_shared_page_c0e4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E412) return execute_unresolved_c0_c0e3c1_instruction(cpu, address);
    if (address < 0xC0E44F) return execute_unresolved_c0_c0e44d_instruction(cpu, address);
    if (address < 0xC0E4DB) return execute_unresolved_c0_c0e48a_instruction(cpu, address);
    return execute_unresolved_c0_c0e516_instruction(cpu, address);
}
bool execute_shared_page_c0e6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E639) return execute_unresolved_c0_c0e516_instruction(cpu, address);
    if (address < 0xC0E6C3) return execute_unresolved_c0_c0e674_instruction(cpu, address);
    return execute_unresolved_c0_c0e6fe_instruction(cpu, address);
}
bool execute_shared_page_c0e7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E73B) return execute_unresolved_c0_c0e6fe_instruction(cpu, address);
    if (address < 0xC0E7DA) return execute_unresolved_c0_c0e776_instruction(cpu, address);
    return execute_unresolved_c0_c0e815_instruction(cpu, address);
}
bool execute_shared_page_c0e8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E85C) return execute_unresolved_c0_c0e815_instruction(cpu, address);
    return execute_unresolved_c0_c0e897_instruction(cpu, address);
}
bool execute_shared_page_c0e9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0E943) return execute_unresolved_c0_c0e897_instruction(cpu, address);
    if (address < 0xC0E946) return execute_unresolved_c0_c0e979_instruction(cpu, address);
    if (address < 0xC0E984) return execute_unresolved_c0_c0e97c_instruction(cpu, address);
    return execute_unresolved_c0_c0e9ba_instruction(cpu, address);
}
bool execute_shared_page_c0ea(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0EA08) return execute_unresolved_c0_c0e9ba_instruction(cpu, address);
    if (address < 0xC0EA32) return execute_miscellaneous_teleport_freezeobjects_instruction(cpu, address);
    if (address < 0xC0EA63) return execute_miscellaneous_teleport_freezeobjects2_instruction(cpu, address);
    return execute_miscellaneous_teleport_mainloop_instruction(cpu, address);
}
bool execute_shared_page_c0eb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0EBAA) return execute_miscellaneous_teleport_mainloop_instruction(cpu, address);
    return execute_unresolved_c0_c0ebaa_jp_instruction(cpu, address);
}
bool execute_shared_page_c0ec(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0EC20) return execute_unresolved_c0_c0ebaa_jp_instruction(cpu, address);
    return execute_unresolved_c0_c0ebe0_jp_instruction(cpu, address);
}
bool execute_shared_page_c0ed(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0ED41) return execute_unresolved_c0_c0ebe0_jp_instruction(cpu, address);
    if (address < 0xC0ED9F) return execute_unresolved_c0_c0ed41_jp_instruction(cpu, address);
    if (address < 0xC0EDAB) return execute_unresolved_c0_c0ee47_instruction(cpu, address);
    if (address < 0xC0EDC0) return execute_unresolved_c0_c0ee53_instruction(cpu, address);
    return execute_introduction_show_title_screen_jp_instruction(cpu, address);
}
bool execute_shared_page_c0ef(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0EF31) return execute_introduction_show_title_screen_jp_instruction(cpu, address);
    return execute_introduction_logo_screen_load_instruction(cpu, address);
}
bool execute_shared_page_c0f0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0F0AA) return execute_introduction_logo_screen_load_instruction(cpu, address);
    if (address < 0xC0F0D2) return execute_unresolved_c0_c0efe1_instruction(cpu, address);
    return execute_introduction_logo_screen_instruction(cpu, address);
}
bool execute_shared_page_c0f1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0F19B) return execute_introduction_logo_screen_instruction(cpu, address);
    return execute_introduction_gas_station_load_instruction(cpu, address);
}
bool execute_shared_page_c0f2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0F29F) return execute_introduction_gas_station_load_instruction(cpu, address);
    if (address < 0xC0F2EB) return execute_unresolved_c0_c0f1d2_instruction(cpu, address);
    return execute_unresolved_c0_c0f21e_instruction(cpu, address);
}
bool execute_shared_page_c0f4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0F409) return execute_unresolved_c0_c0f21e_instruction(cpu, address);
    if (address < 0xC0F481) return execute_introduction_gas_station_instruction(cpu, address);
    if (address < 0xC0F4B7) return execute_introduction_load_gas_station_flash_palette_instruction(cpu, address);
    return execute_introduction_load_gas_station_palette_instruction(cpu, address);
}
bool execute_shared_page_c0f5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0F56C) return execute_system_saves_erase_save_block_instruction(cpu, address);
    if (address < 0xC0F5BF) return execute_system_saves_check_block_signature_instruction(cpu, address);
    if (address < 0xC0F5DE) return execute_system_saves_check_all_blocks_signature_instruction(cpu, address);
    return execute_system_saves_copy_save_block_instruction(cpu, address);
}
bool execute_shared_page_c0f6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0F658) return execute_system_saves_copy_save_block_instruction(cpu, address);
    if (address < 0xC0F69F) return execute_system_saves_calc_save_block_checksum_instruction(cpu, address);
    if (address < 0xC0F6E4) return execute_system_saves_calc_save_block_checksum_complement_instruction(cpu, address);
    return execute_system_saves_validate_save_block_checksums_instruction(cpu, address);
}
bool execute_shared_page_c0f7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0F749) return execute_system_saves_validate_save_block_checksums_instruction(cpu, address);
    if (address < 0xC0F7B3) return execute_system_saves_check_save_corruption_instruction(cpu, address);
    return execute_system_saves_save_game_block_instruction(cpu, address);
}
bool execute_shared_page_c0f9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0F962) return execute_system_saves_save_game_block_instruction(cpu, address);
    if (address < 0xC0F97D) return execute_system_saves_save_game_slot_instruction(cpu, address);
    return execute_system_saves_load_game_slot_instruction(cpu, address);
}
bool execute_shared_page_c0fa(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0FAA4) return execute_system_saves_load_game_slot_instruction(cpu, address);
    return execute_system_saves_check_sram_integrity_instruction(cpu, address);
}
bool execute_shared_page_c0fb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC0FB1B) return execute_system_saves_erase_save_slot_instruction(cpu, address);
    if (address < 0xC0FB43) return execute_system_saves_copy_save_slot_instruction(cpu, address);
    if (address < 0xC0FB8D) return execute_unresolved_ef_ef0c3d_instruction(cpu, address);
    return execute_ending_credits_scroll_frame_jp_instruction(cpu, address);
}
bool execute_shared_page_c100(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10032) return execute_unresolved_c1_c10004_instruction(cpu, address);
    if (address < 0xC10038) return execute_text_enable_blinking_triangle_instruction(cpu, address);
    if (address < 0xC1003E) return execute_text_clear_blinking_prompt_instruction(cpu, address);
    if (address < 0xC10044) return execute_text_get_blinking_prompt_instruction(cpu, address);
    if (address < 0xC1004A) return execute_text_set_text_sound_mode_instruction(cpu, address);
    if (address < 0xC100C4) return execute_unresolved_c3_c3e450_instruction(cpu, address);
    if (address < 0xC100ED) return execute_unresolved_c1_c1004e_instruction(cpu, address);
    if (address < 0xC100F7) return execute_text_clear_instant_printing_instruction(cpu, address);
    return execute_text_set_instant_printing_instruction(cpu, address);
}
bool execute_shared_page_c101(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10103) return execute_text_set_instant_printing_instruction(cpu, address);
    if (address < 0xC10135) return execute_unresolved_c3_c3e4ef_instruction(cpu, address);
    if (address < 0xC1013B) return execute_text_get_window_focus_instruction(cpu, address);
    if (address < 0xC10141) return execute_text_set_window_focus_instruction(cpu, address);
    return execute_text_close_window_instruction(cpu, address);
}
bool execute_shared_page_c102(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC102A6) return execute_text_close_window_instruction(cpu, address);
    if (address < 0xC102AF) return execute_text_close_focus_window_instruction(cpu, address);
    if (address < 0xC102CD) return execute_unresolved_c1_c1008e_instruction(cpu, address);
    if (address < 0xC102D6) return execute_text_lock_input_instruction(cpu, address);
    if (address < 0xC102DC) return execute_text_unlock_input_instruction(cpu, address);
    return execute_unresolved_c1_c100d6_instruction(cpu, address);
}
bool execute_shared_page_c103(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10303) return execute_unresolved_c1_c100d6_instruction(cpu, address);
    if (address < 0xC1036B) return execute_unresolved_c1_c100fe_instruction(cpu, address);
    return execute_text_ccs_halt_instruction(cpu, address);
}
bool execute_shared_page_c104(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC104D4) return execute_text_ccs_halt_instruction(cpu, address);
    return execute_unresolved_c1_c102d0_instruction(cpu, address);
}
bool execute_shared_page_c105(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10504) return execute_unresolved_c1_c102d0_instruction(cpu, address);
    if (address < 0xC10527) return execute_text_get_active_window_address_instruction(cpu, address);
    if (address < 0xC10583) return execute_text_transfer_active_mem_storage_instruction(cpu, address);
    if (address < 0xC105DF) return execute_text_transfer_storage_mem_active_instruction(cpu, address);
    return execute_text_get_argument_memory_instruction(cpu, address);
}
bool execute_shared_page_c106(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10603) return execute_text_get_argument_memory_instruction(cpu, address);
    if (address < 0xC1060D) return execute_text_get_secondary_memory_instruction(cpu, address);
    if (address < 0xC10631) return execute_text_get_working_memory_instruction(cpu, address);
    if (address < 0xC10646) return execute_text_increment_secondary_memory_instruction(cpu, address);
    if (address < 0xC10660) return execute_text_set_secondary_memory_instruction(cpu, address);
    if (address < 0xC1068C) return execute_text_set_working_memory_instruction(cpu, address);
    if (address < 0xC106B8) return execute_text_set_argument_memory_instruction(cpu, address);
    if (address < 0xC106CE) return execute_text_get_text_x_instruction(cpu, address);
    if (address < 0xC106E4) return execute_text_get_text_y_instruction(cpu, address);
    return execute_text_create_window_instruction(cpu, address);
}
bool execute_shared_page_c109(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10974) return execute_text_create_window_instruction(cpu, address);
    if (address < 0xC10996) return execute_unresolved_c1_c1078d_instruction(cpu, address);
    return execute_unresolved_c1_c107af_jp_instruction(cpu, address);
}
bool execute_shared_page_c10b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10BDB) return execute_unresolved_c1_c107af_jp_instruction(cpu, address);
    return execute_unresolved_c3_c3e6f8_jp_instruction(cpu, address);
}
bool execute_shared_page_c10c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10C40) return execute_unresolved_c3_c3e6f8_jp_instruction(cpu, address);
    if (address < 0xC10CAE) return execute_unresolved_c4_c43573_instruction(cpu, address);
    return execute_unresolved_c4_c435e4_instruction(cpu, address);
}
bool execute_shared_page_c10d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10D21) return execute_unresolved_c4_c435e4_instruction(cpu, address);
    if (address < 0xC10DA0) return execute_unresolved_c4_c43657_instruction(cpu, address);
    if (address < 0xC10DF2) return execute_battle_enemy_flashing_off_instruction(cpu, address);
    return execute_battle_enemy_flashing_on_instruction(cpu, address);
}
bool execute_shared_page_c10e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10E5A) return execute_battle_enemy_flashing_on_instruction(cpu, address);
    if (address < 0xC10E72) return execute_text_show_hppp_windows_instruction(cpu, address);
    if (address < 0xC10EDF) return execute_text_hide_hppp_windows_instruction(cpu, address);
    return execute_unresolved_c4_c436d7_instruction(cpu, address);
}
bool execute_shared_page_c10f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC10F41) return execute_unresolved_c4_c436d7_instruction(cpu, address);
    if (address < 0xC10F65) return execute_unresolved_c4_c43739_jp_instruction(cpu, address);
    if (address < 0xC10FF3) return execute_unresolved_c4_c437b8_jp_instruction(cpu, address);
    return execute_unresolved_c1_c10a85_jp_instruction(cpu, address);
}
bool execute_shared_page_c111(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1110E) return execute_unresolved_c1_c10a85_jp_instruction(cpu, address);
    if (address < 0xC11140) return execute_unresolved_c1_c10ba1_instruction(cpu, address);
    if (address < 0xC11169) return execute_unresolved_c4_c43874_instruction(cpu, address);
    if (address < 0xC11174) return execute_unresolved_c4_c438a5_instruction(cpu, address);
    if (address < 0xC111C9) return execute_text_print_newline_instruction(cpu, address);
    if (address < 0xC111EC) return execute_text_ccs_clear_line_jp_instruction(cpu, address);
    return execute_text_print_letter_jp_instruction(cpu, address);
}
bool execute_shared_page_c112(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC112AE) return execute_text_print_letter_jp_instruction(cpu, address);
    if (address < 0xC112CA) return execute_unresolved_c1_c10d60_instruction(cpu, address);
    return execute_unresolved_c1_c10d7c_instruction(cpu, address);
}
bool execute_shared_page_c113(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC11344) return execute_unresolved_c1_c10d7c_instruction(cpu, address);
    return execute_text_print_number_jp_instruction(cpu, address);
}
bool execute_shared_page_c114(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC11404) return execute_text_print_number_jp_instruction(cpu, address);
    if (address < 0xC11495) return execute_unresolved_c1_c11404_instruction(cpu, address);
    if (address < 0xC114C4) return execute_unresolved_c1_c10eb4_instruction(cpu, address);
    if (address < 0xC114DD) return execute_unresolved_c1_c10ee3_instruction(cpu, address);
    return execute_text_print_string_jp_instruction(cpu, address);
}
bool execute_shared_page_c115(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1150C) return execute_text_print_string_jp_instruction(cpu, address);
    if (address < 0xC1155D) return execute_unresolved_c1_c10f40_instruction(cpu, address);
    if (address < 0xC11566) return execute_unresolved_c1_c10fa3_instruction(cpu, address);
    if (address < 0xC115A4) return execute_text_change_current_window_font_instruction(cpu, address);
    if (address < 0xC115D6) return execute_unresolved_c1_c10fea_instruction(cpu, address);
    return execute_text_num_select_prompt_instruction(cpu, address);
}
bool execute_shared_page_c119(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC11909) return execute_unresolved_c1_c1134b_instruction(cpu, address);
    if (address < 0xC1193C) return execute_unresolved_c1_c11354_instruction(cpu, address);
    if (address < 0xC119AB) return execute_unresolved_c3_c3e7e3_instruction(cpu, address);
    if (address < 0xC119B4) return execute_unresolved_c1_c11383_instruction(cpu, address);
    return execute_unresolved_c1_c1138d_instruction(cpu, address);
}
bool execute_shared_page_c11a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC11AE6) return execute_unresolved_c1_c113d1_instruction(cpu, address);
    return execute_unresolved_c1_c114b1_jp_instruction(cpu, address);
}
bool execute_shared_page_c11b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC11B27) return execute_unresolved_c1_c114b1_jp_instruction(cpu, address);
    if (address < 0xC11B6A) return execute_unresolved_c1_c1153b_instruction(cpu, address);
    if (address < 0xC11BB0) return execute_unresolved_c1_c11596_instruction(cpu, address);
    if (address < 0xC11BF0) return execute_unresolved_c1_c115f4_instruction(cpu, address);
    return execute_text_print_menu_items_jp_instruction(cpu, address);
}
bool execute_shared_page_c11d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC11DBF) return execute_text_print_menu_items_jp_instruction(cpu, address);
    if (address < 0xC11DEA) return execute_unresolved_c1_c117e2_instruction(cpu, address);
    return execute_unresolved_c4_c451fa_jp_instruction(cpu, address);
}
bool execute_shared_page_c11f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC11FA6) return execute_unresolved_c4_c451fa_jp_instruction(cpu, address);
    if (address < 0xC11FB3) return execute_unresolved_c1_c1180d_instruction(cpu, address);
    return execute_unresolved_c1_c1181b_instruction(cpu, address);
}
bool execute_shared_page_c120(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC12022) return execute_unresolved_c1_c1181b_instruction(cpu, address);
    if (address < 0xC12086) return execute_unresolved_c1_c11887_instruction(cpu, address);
    return execute_text_move_cursor_instruction(cpu, address);
}
bool execute_shared_page_c121(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC12109) return execute_text_move_cursor_instruction(cpu, address);
    return execute_text_selection_menu_jp_instruction(cpu, address);
}
bool execute_shared_page_c126(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1267B) return execute_text_selection_menu_jp_instruction(cpu, address);
    if (address < 0xC126AB) return execute_unresolved_c1_c11f5a_instruction(cpu, address);
    if (address < 0xC126DD) return execute_unresolved_c1_c11f8a_instruction(cpu, address);
    if (address < 0xC126F5) return execute_unresolved_c1_c11fbc_instruction(cpu, address);
    return execute_unresolved_c1_c11fd4_instruction(cpu, address);
}
bool execute_shared_page_c127(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC12733) return execute_unresolved_c1_c11fd4_instruction(cpu, address);
    if (address < 0xC12791) return execute_unresolved_c1_c12012_instruction(cpu, address);
    if (address < 0xC127F7) return execute_unresolved_c1_c12070_instruction(cpu, address);
    return execute_unresolved_c1_c120d6_instruction(cpu, address);
}
bool execute_shared_page_c128(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC128CB) return execute_unresolved_c1_c120d6_instruction(cpu, address);
    return execute_unresolved_c1_c121b8_jp_instruction(cpu, address);
}
bool execute_shared_page_c12a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC12A47) return execute_unresolved_c1_c121b8_jp_instruction(cpu, address);
    return execute_unresolved_c1_c12362_instruction(cpu, address);
}
bool execute_shared_page_c12b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC12B0F) return execute_unresolved_c1_c12362_instruction(cpu, address);
    if (address < 0xC12B2D) return execute_unresolved_c1_c1242e_instruction(cpu, address);
    return execute_unresolved_c1_c1244c_jp_instruction(cpu, address);
}
bool execute_shared_page_c12e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC12EE7) return execute_unresolved_c1_c1244c_jp_instruction(cpu, address);
    return execute_text_character_select_prompt_jp_instruction(cpu, address);
}
bool execute_shared_page_c132(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC132DB) return execute_text_character_select_prompt_jp_instruction(cpu, address);
    if (address < 0xC132F9) return execute_unresolved_c1_c12bd5_instruction(cpu, address);
    return execute_unresolved_c1_c12bf3_instruction(cpu, address);
}
bool execute_shared_page_c133(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1333C) return execute_unresolved_c1_c12bf3_instruction(cpu, address);
    if (address < 0xC133D2) return execute_unresolved_c1_c12c36_instruction(cpu, address);
    return execute_unresolved_c1_c12ccc_instruction(cpu, address);
}
bool execute_shared_page_c134(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1341D) return execute_unresolved_c1_c12ccc_instruction(cpu, address);
    if (address < 0xC13429) return execute_audio_pause_music_instruction(cpu, address);
    if (address < 0xC13435) return execute_unresolved_ef_ef0262_instruction(cpu, address);
    if (address < 0xC13444) return execute_audio_resume_music_instruction(cpu, address);
    return execute_unresolved_c1_c12d17_instruction(cpu, address);
}
bool execute_shared_page_c135(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC13502) return execute_unresolved_c1_c12d17_instruction(cpu, address);
    if (address < 0xC1355E) return execute_text_window_tick_jp_instruction(cpu, address);
    if (address < 0xC1357F) return execute_unresolved_c1_c12e42_instruction(cpu, address);
    return execute_system_debug_y_button_menu_instruction(cpu, address);
}
bool execute_shared_page_c138(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC13864) return execute_system_debug_y_button_menu_instruction(cpu, address);
    return execute_overworld_talk_to_instruction(cpu, address);
}
bool execute_shared_page_c139(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC13918) return execute_overworld_talk_to_instruction(cpu, address);
    return execute_overworld_check_instruction(cpu, address);
}
bool execute_shared_page_c13a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC13A73) return execute_overworld_check_instruction(cpu, address);
    if (address < 0xC13A7C) return execute_unresolved_c1_c1339e_instruction(cpu, address);
    if (address < 0xC13A85) return execute_unresolved_c1_c133a7_instruction(cpu, address);
    return execute_overworld_open_menu_jp_instruction(cpu, address);
}
bool execute_shared_page_c141(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1410C) return execute_overworld_open_menu_jp_instruction(cpu, address);
    if (address < 0xC1414F) return execute_text_open_hppp_display_instruction(cpu, address);
    if (address < 0xC1416D) return execute_overworld_show_town_map_instruction(cpu, address);
    return execute_overworld_debug_y_button_flag_instruction(cpu, address);
}
bool execute_shared_page_c142(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14270) return execute_overworld_debug_y_button_flag_instruction(cpu, address);
    if (address < 0xC142D9) return execute_overworld_debug_y_button_guide_instruction(cpu, address);
    return execute_overworld_debug_set_char_level_instruction(cpu, address);
}
bool execute_shared_page_c143(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14344) return execute_overworld_debug_set_char_level_instruction(cpu, address);
    return execute_overworld_debug_y_button_goods_instruction(cpu, address);
}
bool execute_shared_page_c144(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14454) return execute_overworld_debug_y_button_goods_instruction(cpu, address);
    if (address < 0xC1448B) return execute_unresolved_c1_c14012_instruction(cpu, address);
    if (address < 0xC144B2) return execute_unresolved_c1_c14049_instruction(cpu, address);
    if (address < 0xC144F2) return execute_unresolved_c1_c14070_instruction(cpu, address);
    return execute_text_ccs_print_stat_instruction(cpu, address);
}
bool execute_shared_page_c145(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14511) return execute_text_ccs_print_stat_instruction(cpu, address);
    if (address < 0xC1451B) return execute_text_ccs_unknown_1c_09_instruction(cpu, address);
    if (address < 0xC14525) return execute_text_ccs_text_effects_instruction(cpu, address);
    if (address < 0xC145F2) return execute_text_ccs_jump_instruction(cpu, address);
    return execute_text_ccs_jump_multi_instruction(cpu, address);
}
bool execute_shared_page_c146(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14687) return execute_text_ccs_jump_multi_instruction(cpu, address);
    if (address < 0xC146CF) return execute_text_ccs_set_event_flag_instruction(cpu, address);
    return execute_text_ccs_clear_event_flag_instruction(cpu, address);
}
bool execute_shared_page_c147(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14717) return execute_text_ccs_clear_event_flag_instruction(cpu, address);
    if (address < 0xC14781) return execute_text_ccs_jump_event_flag_instruction(cpu, address);
    if (address < 0xC147DA) return execute_text_ccs_get_event_flag_instruction(cpu, address);
    if (address < 0xC147E4) return execute_text_ccs_print_special_graphics_instruction(cpu, address);
    if (address < 0xC147EE) return execute_text_ccs_open_window_instruction(cpu, address);
    if (address < 0xC147F8) return execute_text_ccs_switch_to_window_instruction(cpu, address);
    return execute_text_ccs_call_instruction(cpu, address);
}
bool execute_shared_page_c148(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC148C5) return execute_text_ccs_call_instruction(cpu, address);
    return execute_text_ccs_create_number_selector_instruction(cpu, address);
}
bool execute_shared_page_c149(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1492B) return execute_text_ccs_create_number_selector_instruction(cpu, address);
    if (address < 0xC1495C) return execute_text_ccs_force_text_alignment_jp_instruction(cpu, address);
    if (address < 0xC14995) return execute_text_ccs_check_equal_instruction(cpu, address);
    if (address < 0xC149CE) return execute_text_ccs_check_not_equal_instruction(cpu, address);
    if (address < 0xC149F3) return execute_text_ccs_print_horizontal_strings_instruction(cpu, address);
    return execute_text_ccs_copy_to_argmem_instruction(cpu, address);
}
bool execute_shared_page_c14a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14A1E) return execute_text_ccs_copy_to_argmem_instruction(cpu, address);
    if (address < 0xC14A3F) return execute_text_ccs_set_secmem_instruction(cpu, address);
    if (address < 0xC14A81) return execute_text_ccs_party_selection_menu_uncancellable_instruction(cpu, address);
    if (address < 0xC14AC3) return execute_text_ccs_party_selection_menu_instruction(cpu, address);
    if (address < 0xC14AE2) return execute_text_ccs_print_item_name_instruction(cpu, address);
    return execute_text_ccs_print_teleport_destination_name_instruction(cpu, address);
}
bool execute_shared_page_c14b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14B23) return execute_text_ccs_print_teleport_destination_name_instruction(cpu, address);
    if (address < 0xC14B51) return execute_text_ccs_get_character_number_instruction(cpu, address);
    if (address < 0xC14BA0) return execute_text_ccs_play_music_instruction(cpu, address);
    if (address < 0xC14BAB) return execute_text_ccs_stop_music_instruction(cpu, address);
    if (address < 0xC14BCC) return execute_text_ccs_play_sfx_instruction(cpu, address);
    return execute_text_ccs_get_letter_from_character_name_instruction(cpu, address);
}
bool execute_shared_page_c14c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14C19) return execute_text_ccs_get_letter_from_character_name_instruction(cpu, address);
    if (address < 0xC14C8D) return execute_text_ccs_get_letter_from_stat_instruction(cpu, address);
    if (address < 0xC14CAC) return execute_text_ccs_print_character_instruction(cpu, address);
    if (address < 0xC14CE9) return execute_text_ccs_test_inventory_full_instruction(cpu, address);
    return execute_text_ccs_wallet_increase_instruction(cpu, address);
}
bool execute_shared_page_c14d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14D4A) return execute_text_ccs_wallet_increase_instruction(cpu, address);
    if (address < 0xC14DB6) return execute_text_ccs_wallet_decrease_instruction(cpu, address);
    return execute_text_ccs_recover_hp_by_percent_instruction(cpu, address);
}
bool execute_shared_page_c14e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14E03) return execute_text_ccs_recover_hp_by_percent_instruction(cpu, address);
    if (address < 0xC14E50) return execute_text_ccs_deplete_hp_by_percent_instruction(cpu, address);
    if (address < 0xC14E9D) return execute_text_ccs_recover_hp_by_amount_instruction(cpu, address);
    if (address < 0xC14EEA) return execute_text_ccs_deplete_hp_by_amount_instruction(cpu, address);
    return execute_text_ccs_recover_pp_by_percent_instruction(cpu, address);
}
bool execute_shared_page_c14f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC14F37) return execute_text_ccs_recover_pp_by_percent_instruction(cpu, address);
    if (address < 0xC14F84) return execute_text_ccs_deplete_pp_by_percent_instruction(cpu, address);
    if (address < 0xC14FD1) return execute_text_ccs_recover_pp_by_amount_instruction(cpu, address);
    return execute_text_ccs_deplete_pp_by_amount_instruction(cpu, address);
}
bool execute_shared_page_c150(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1501E) return execute_text_ccs_deplete_pp_by_amount_instruction(cpu, address);
    if (address < 0xC15086) return execute_text_ccs_give_item_to_character_instruction(cpu, address);
    if (address < 0xC150EE) return execute_text_ccs_take_item_from_character_instruction(cpu, address);
    return execute_text_ccs_test_inventory_not_full_instruction(cpu, address);
}
bool execute_shared_page_c151(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15124) return execute_text_ccs_test_inventory_not_full_instruction(cpu, address);
    if (address < 0xC15193) return execute_text_ccs_test_character_doesnt_have_item_instruction(cpu, address);
    if (address < 0xC151FB) return execute_text_ccs_test_character_has_item_instruction(cpu, address);
    return execute_text_ccs_trigger_psi_teleport_instruction(cpu, address);
}
bool execute_shared_page_c152(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1528C) return execute_text_ccs_trigger_psi_teleport_instruction(cpu, address);
    if (address < 0xC152AB) return execute_text_ccs_trigger_teleport_instruction(cpu, address);
    if (address < 0xC152B5) return execute_text_ccs_pause_instruction(cpu, address);
    if (address < 0xC152E3) return execute_text_ccs_display_shop_menu_instruction(cpu, address);
    return execute_text_ccs_get_item_price_instruction(cpu, address);
}
bool execute_shared_page_c153(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1531F) return execute_text_ccs_get_item_price_instruction(cpu, address);
    if (address < 0xC1535C) return execute_text_ccs_get_item_sell_price_instruction(cpu, address);
    if (address < 0xC153C4) return execute_text_ccs_test_character_can_equip_item_instruction(cpu, address);
    if (address < 0xC153E3) return execute_text_ccs_print_character_name_jp_instruction(cpu, address);
    return execute_text_ccs_get_character_status_instruction(cpu, address);
}
bool execute_shared_page_c154(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1544B) return execute_text_ccs_get_character_status_instruction(cpu, address);
    if (address < 0xC154C0) return execute_text_ccs_inflict_character_status_instruction(cpu, address);
    return execute_text_ccs_test_character_status_instruction(cpu, address);
}
bool execute_shared_page_c155(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15547) return execute_text_ccs_test_character_status_instruction(cpu, address);
    return execute_text_ccs_test_equality_instruction(cpu, address);
}
bool execute_shared_page_c156(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1563E) return execute_text_ccs_test_equality_instruction(cpu, address);
    if (address < 0xC15669) return execute_text_ccs_get_exp_for_next_level_instruction(cpu, address);
    return execute_text_ccs_print_number_instruction(cpu, address);
}
bool execute_shared_page_c157(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1574E) return execute_text_ccs_print_number_instruction(cpu, address);
    if (address < 0xC15758) return execute_text_ccs_unknown_1f_60_instruction(cpu, address);
    if (address < 0xC157A5) return execute_text_ccs_show_character_inventory_instruction(cpu, address);
    if (address < 0xC157CA) return execute_text_ccs_unknown_18_08_instruction(cpu, address);
    if (address < 0xC157EF) return execute_text_ccs_unknown_18_09_instruction(cpu, address);
    return execute_text_ccs_print_money_amount_instruction(cpu, address);
}
bool execute_shared_page_c158(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC158D4) return execute_text_ccs_print_money_amount_instruction(cpu, address);
    return execute_text_ccs_give_item_to_character_2_instruction(cpu, address);
}
bool execute_shared_page_c159(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15956) return execute_text_ccs_give_item_to_character_2_instruction(cpu, address);
    if (address < 0xC159D8) return execute_text_ccs_take_item_from_character_2_instruction(cpu, address);
    return execute_text_ccs_unknown_1d_10_instruction(cpu, address);
}
bool execute_shared_page_c15a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15A48) return execute_text_ccs_unknown_1d_10_instruction(cpu, address);
    if (address < 0xC15AB8) return execute_text_ccs_unknown_1d_11_instruction(cpu, address);
    return execute_text_ccs_equip_character_from_inventory_instruction(cpu, address);
}
bool execute_shared_page_c15b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15B20) return execute_text_ccs_equip_character_from_inventory_instruction(cpu, address);
    if (address < 0xC15B79) return execute_text_ccs_unknown_1d_12_instruction(cpu, address);
    if (address < 0xC15BFA) return execute_text_ccs_unknown_1d_13_instruction(cpu, address);
    return execute_text_ccs_get_item_number_instruction(cpu, address);
}
bool execute_shared_page_c15c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15C74) return execute_text_ccs_get_item_number_instruction(cpu, address);
    return execute_text_ccs_test_has_enough_money_instruction(cpu, address);
}
bool execute_shared_page_c15d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15D89) return execute_text_ccs_test_has_enough_money_instruction(cpu, address);
    if (address < 0xC15DC5) return execute_text_ccs_unknown_19_1a_instruction(cpu, address);
    return execute_text_ccs_unknown_18_0d_instruction(cpu, address);
}
bool execute_shared_page_c15e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15E26) return execute_text_ccs_unknown_18_0d_instruction(cpu, address);
    if (address < 0xC15E49) return execute_text_ccs_print_vertical_strings_instruction(cpu, address);
    if (address < 0xC15EB5) return execute_text_ccs_set_argmem_instruction(cpu, address);
    if (address < 0xC15ED7) return execute_text_ccs_unknown_19_1b_instruction(cpu, address);
    return execute_text_ccs_learn_special_psi_instruction(cpu, address);
}
bool execute_shared_page_c15f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC15F04) return execute_text_ccs_learn_special_psi_instruction(cpu, address);
    if (address < 0xC15FEA) return execute_text_ccs_atm_increase_instruction(cpu, address);
    return execute_text_ccs_atm_decrease_instruction(cpu, address);
}
bool execute_shared_page_c160(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC160DB) return execute_text_ccs_atm_decrease_instruction(cpu, address);
    return execute_text_ccs_test_atm_has_enough_money_instruction(cpu, address);
}
bool execute_shared_page_c161(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC161F0) return execute_text_ccs_test_atm_has_enough_money_instruction(cpu, address);
    return execute_text_ccs_party_member_add_instruction(cpu, address);
}
bool execute_shared_page_c162(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16210) return execute_text_ccs_party_member_add_instruction(cpu, address);
    if (address < 0xC16230) return execute_text_ccs_party_member_remove_instruction(cpu, address);
    if (address < 0xC16276) return execute_unresolved_c1_c15fb1_instruction(cpu, address);
    if (address < 0xC162FF) return execute_text_ccs_unknown_19_1c_instruction(cpu, address);
    return execute_text_ccs_unknown_19_1d_instruction(cpu, address);
}
bool execute_shared_page_c163(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC163A3) return execute_text_ccs_unknown_19_1d_instruction(cpu, address);
    if (address < 0xC163C2) return execute_text_ccs_escargo_express_store_instruction(cpu, address);
    if (address < 0xC163F1) return execute_text_ccs_test_item_is_drink_instruction(cpu, address);
    return execute_text_ccs_test_party_enough_characters_instruction(cpu, address);
}
bool execute_shared_page_c164(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16450) return execute_text_ccs_test_party_enough_characters_instruction(cpu, address);
    if (address < 0xC1646F) return execute_text_ccs_print_psi_name_instruction(cpu, address);
    if (address < 0xC1649E) return execute_text_ccs_get_random_number_instruction(cpu, address);
    return execute_unresolved_c1_c1621f_instruction(cpu, address);
}
bool execute_shared_page_c165(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16587) return execute_unresolved_c1_c1621f_instruction(cpu, address);
    return execute_text_ccs_jump_multi2_instruction(cpu, address);
}
bool execute_shared_page_c166(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16626) return execute_text_ccs_jump_multi2_instruction(cpu, address);
    if (address < 0xC1667C) return execute_text_ccs_try_fixing_items_instruction(cpu, address);
    if (address < 0xC166ED) return execute_text_ccs_set_character_direction_instruction(cpu, address);
    return execute_text_ccs_set_party_direction_instruction(cpu, address);
}
bool execute_shared_page_c167(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1670F) return execute_text_ccs_set_party_direction_instruction(cpu, address);
    if (address < 0xC16788) return execute_text_ccs_set_tpt_direction_instruction(cpu, address);
    return execute_text_ccs_create_entity_tpt_instruction(cpu, address);
}
bool execute_shared_page_c168(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16801) return execute_text_ccs_create_entity_tpt_instruction(cpu, address);
    if (address < 0xC16829) return execute_text_ccs_dummy_1f_18_instruction(cpu, address);
    if (address < 0xC16851) return execute_text_ccs_dummy_1f_19_instruction(cpu, address);
    if (address < 0xC168A9) return execute_text_ccs_create_floating_sprite_at_tpt_entity_instruction(cpu, address);
    if (address < 0xC168EC) return execute_text_ccs_delete_floating_sprite_at_tpt_entity_instruction(cpu, address);
    return execute_text_ccs_create_floating_sprite_at_character_instruction(cpu, address);
}
bool execute_shared_page_c169(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1695C) return execute_text_ccs_create_floating_sprite_at_character_instruction(cpu, address);
    if (address < 0xC1697D) return execute_text_ccs_delete_floating_sprite_at_character_instruction(cpu, address);
    if (address < 0xC169C3) return execute_text_ccs_set_map_palette_instruction(cpu, address);
    return execute_text_ccs_create_entity_sprite_instruction(cpu, address);
}
bool execute_shared_page_c16a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16A55) return execute_text_ccs_create_entity_sprite_instruction(cpu, address);
    if (address < 0xC16ABA) return execute_text_ccs_delete_entity_tpt_instruction(cpu, address);
    return execute_text_ccs_delete_entity_sprite_instruction(cpu, address);
}
bool execute_shared_page_c16b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16B1F) return execute_text_ccs_delete_entity_sprite_instruction(cpu, address);
    if (address < 0xC16BC6) return execute_text_ccs_get_direction_from_character_to_entity_instruction(cpu, address);
    return execute_text_ccs_get_direction_from_tpt_entity_to_entity_instruction(cpu, address);
}
bool execute_shared_page_c16c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16C76) return execute_text_ccs_get_direction_from_tpt_entity_to_entity_instruction(cpu, address);
    if (address < 0xC16C80) return execute_text_ccs_enable_blinking_triangle_instruction(cpu, address);
    if (address < 0xC16CFA) return execute_text_ccs_set_character_level_instruction(cpu, address);
    return execute_text_ccs_get_direction_from_sprite_entity_to_entity_instruction(cpu, address);
}
bool execute_shared_page_c16d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16DAA) return execute_text_ccs_get_direction_from_sprite_entity_to_entity_instruction(cpu, address);
    return execute_text_ccs_set_entity_direction_sprite_instruction(cpu, address);
}
bool execute_shared_page_c16e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16E23) return execute_text_ccs_set_entity_direction_sprite_instruction(cpu, address);
    if (address < 0xC16E2E) return execute_text_ccs_set_player_movement_lock_instruction(cpu, address);
    if (address < 0xC16E71) return execute_text_ccs_set_tpt_entity_delay_instruction(cpu, address);
    if (address < 0xC16EB4) return execute_text_ccs_unknown_1f_e7_instruction(cpu, address);
    if (address < 0xC16EBF) return execute_text_ccs_set_player_movement_lock_if_camera_refocused_instruction(cpu, address);
    return execute_text_ccs_unknown_1f_e9_instruction(cpu, address);
}
bool execute_shared_page_c16f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC16F02) return execute_text_ccs_unknown_1f_e9_instruction(cpu, address);
    if (address < 0xC16F45) return execute_text_ccs_unknown_1f_ea_instruction(cpu, address);
    if (address < 0xC16F93) return execute_text_ccs_set_character_invisibility_instruction(cpu, address);
    if (address < 0xC16FE1) return execute_text_ccs_set_character_visibility_instruction(cpu, address);
    return execute_text_ccs_teleport_party_to_tpt_entity_instruction(cpu, address);
}
bool execute_shared_page_c170(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17024) return execute_text_ccs_teleport_party_to_tpt_entity_instruction(cpu, address);
    if (address < 0xC17067) return execute_text_ccs_unknown_1f_ef_instruction(cpu, address);
    return execute_text_ccs_screen_reload_pointer_instruction(cpu, address);
}
bool execute_shared_page_c171(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1713E) return execute_text_ccs_screen_reload_pointer_instruction(cpu, address);
    if (address < 0xC171AE) return execute_text_ccs_set_tpt_entity_movement_instruction(cpu, address);
    return execute_text_ccs_set_sprite_entity_movement_instruction(cpu, address);
}
bool execute_shared_page_c172(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1721E) return execute_text_ccs_set_sprite_entity_movement_instruction(cpu, address);
    if (address < 0xC17250) return execute_text_ccs_test_item_is_condiment_instruction(cpu, address);
    if (address < 0xC172B6) return execute_text_ccs_trigger_battle_instruction(cpu, address);
    if (address < 0xC172D7) return execute_text_ccs_set_respawn_point_instruction(cpu, address);
    return execute_text_ccs_unknown_1d_0c_instruction(cpu, address);
}
bool execute_shared_page_c173(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1739C) return execute_text_ccs_unknown_1d_0c_instruction(cpu, address);
    return execute_text_ccs_activate_hotspot_instruction(cpu, address);
}
bool execute_shared_page_c174(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC174B3) return execute_text_ccs_activate_hotspot_instruction(cpu, address);
    if (address < 0xC174D4) return execute_text_ccs_deactivate_hotspot_instruction(cpu, address);
    if (address < 0xC174F4) return execute_text_ccs_toggle_text_printing_sound_instruction(cpu, address);
    return execute_text_ccs_unknown_1d_24_instruction(cpu, address);
}
bool execute_shared_page_c175(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1753C) return execute_text_ccs_unknown_1d_24_instruction(cpu, address);
    if (address < 0xC1755A) return execute_text_ccs_unknown_1f_40_instruction(cpu, address);
    if (address < 0xC17584) return execute_text_ccs_trigger_special_event_instruction(cpu, address);
    if (address < 0xC175A5) return execute_text_ccs_trigger_photographer_event_instruction(cpu, address);
    if (address < 0xC175FD) return execute_text_ccs_create_floating_sprite_at_sprite_entity_instruction(cpu, address);
    return execute_text_ccs_delete_floating_sprite_at_sprite_entity_instruction(cpu, address);
}
bool execute_shared_page_c176(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17640) return execute_text_ccs_delete_floating_sprite_at_sprite_entity_instruction(cpu, address);
    if (address < 0xC1769F) return execute_text_ccs_display_battle_animation_instruction(cpu, address);
    if (address < 0xC176C0) return execute_text_ccs_set_music_effect_instruction(cpu, address);
    if (address < 0xC176CB) return execute_text_ccs_trigger_timed_event_instruction(cpu, address);
    return execute_text_ccs_increase_character_experience_instruction(cpu, address);
}
bool execute_shared_page_c177(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC177A3) return execute_text_ccs_increase_character_experience_instruction(cpu, address);
    return execute_text_ccs_increase_character_iq_instruction(cpu, address);
}
bool execute_shared_page_c178(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17804) return execute_text_ccs_increase_character_iq_instruction(cpu, address);
    if (address < 0xC17865) return execute_text_ccs_increase_character_guts_instruction(cpu, address);
    if (address < 0xC178C6) return execute_text_ccs_increase_character_speed_instruction(cpu, address);
    return execute_text_ccs_increase_character_vitality_instruction(cpu, address);
}
bool execute_shared_page_c179(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17927) return execute_text_ccs_increase_character_vitality_instruction(cpu, address);
    if (address < 0xC17988) return execute_text_ccs_increase_character_luck_instruction(cpu, address);
    if (address < 0xC179EB) return execute_text_ccs_unknown_1d_23_instruction(cpu, address);
    return execute_text_ccs_unknown_19_27_instruction(cpu, address);
}
bool execute_shared_page_c17a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17A17) return execute_text_ccs_unknown_19_27_instruction(cpu, address);
    if (address < 0xC17AFA) return execute_unresolved_c1_c17796_jp_instruction(cpu, address);
    return execute_unresolved_c1_c17889_instruction(cpu, address);
}
bool execute_shared_page_c17b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17B68) return execute_unresolved_c1_c17889_instruction(cpu, address);
    if (address < 0xC17B7C) return execute_text_ccs_load_string_instruction(cpu, address);
    return execute_text_ccs_tree_18_instruction(cpu, address);
}
bool execute_shared_page_c17c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17C1B) return execute_text_ccs_tree_18_instruction(cpu, address);
    return execute_text_ccs_tree_19_instruction(cpu, address);
}
bool execute_shared_page_c17d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17DCB) return execute_text_ccs_tree_19_instruction(cpu, address);
    return execute_text_ccs_tree_1a_instruction(cpu, address);
}
bool execute_shared_page_c17e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC17EAB) return execute_text_ccs_tree_1a_instruction(cpu, address);
    return execute_text_ccs_tree_1b_instruction(cpu, address);
}
bool execute_shared_page_c180(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC18001) return execute_text_ccs_tree_1b_instruction(cpu, address);
    return execute_text_ccs_tree_1c_instruction(cpu, address);
}
bool execute_shared_page_c181(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC18173) return execute_text_ccs_tree_1c_instruction(cpu, address);
    return execute_text_ccs_tree_1d_instruction(cpu, address);
}
bool execute_shared_page_c183(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC18381) return execute_text_ccs_tree_1d_instruction(cpu, address);
    return execute_text_ccs_tree_1e_instruction(cpu, address);
}
bool execute_shared_page_c184(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1841D) return execute_text_ccs_tree_1e_instruction(cpu, address);
    return execute_text_ccs_tree_1f_instruction(cpu, address);
}
bool execute_shared_page_c188(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC188CF) return execute_text_ccs_tree_1f_instruction(cpu, address);
    if (address < 0xC188FF) return execute_unresolved_c1_c1866d_instruction(cpu, address);
    return execute_unresolved_c1_c1869d_instruction(cpu, address);
}
bool execute_shared_page_c189(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC18913) return execute_unresolved_c1_c1869d_instruction(cpu, address);
    return execute_text_display_text_jp_instruction(cpu, address);
}
bool execute_shared_page_c18b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC18BCB) return execute_text_display_text_jp_instruction(cpu, address);
    return execute_miscellaneous_give_item_to_specific_character_instruction(cpu, address);
}
bool execute_shared_page_c18c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC18C69) return execute_miscellaneous_give_item_to_specific_character_instruction(cpu, address);
    if (address < 0xC18CCE) return execute_miscellaneous_give_item_to_character_instruction(cpu, address);
    return execute_miscellaneous_remove_item_from_inventory_instruction(cpu, address);
}
bool execute_shared_page_c18f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC18F04) return execute_miscellaneous_remove_item_from_inventory_instruction(cpu, address);
    if (address < 0xC18F56) return execute_miscellaneous_take_item_from_specific_character_instruction(cpu, address);
    if (address < 0xC18FBB) return execute_miscellaneous_take_item_from_character_instruction(cpu, address);
    return execute_miscellaneous_reduce_hp_amtpercent_instruction(cpu, address);
}
bool execute_shared_page_c190(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19014) return execute_miscellaneous_reduce_hp_amtpercent_instruction(cpu, address);
    if (address < 0xC1906D) return execute_miscellaneous_recover_hp_amtpercent_instruction(cpu, address);
    if (address < 0xC190C6) return execute_miscellaneous_reduce_pp_amtpercent_instruction(cpu, address);
    return execute_miscellaneous_recover_pp_amtpercent_instruction(cpu, address);
}
bool execute_shared_page_c191(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1911F) return execute_miscellaneous_recover_pp_amtpercent_instruction(cpu, address);
    if (address < 0xC191A0) return execute_miscellaneous_equip_item_instruction(cpu, address);
    if (address < 0xC191AF) return execute_unresolved_c1_c190e6_instruction(cpu, address);
    return execute_unresolved_c1_c190f1_jp_instruction(cpu, address);
}
bool execute_shared_page_c192(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19214) return execute_unresolved_c1_c190f1_jp_instruction(cpu, address);
    if (address < 0xC1925E) return execute_miscellaneous_escargo_express_store_instruction(cpu, address);
    if (address < 0xC1928B) return execute_miscellaneous_escargo_express_move_instruction(cpu, address);
    if (address < 0xC192EB) return execute_unresolved_c1_c191b0_jp_instruction(cpu, address);
    return execute_unresolved_c1_c191f8_instruction(cpu, address);
}
bool execute_shared_page_c193(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19309) return execute_unresolved_c1_c191f8_instruction(cpu, address);
    if (address < 0xC1933C) return execute_unresolved_c1_c19216_instruction(cpu, address);
    return execute_unresolved_c1_c19249_instruction(cpu, address);
}
bool execute_shared_page_c194(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1940D) return execute_unresolved_c1_c19249_instruction(cpu, address);
    if (address < 0xC1949C) return execute_unresolved_c1_c1931b_jp_instruction(cpu, address);
    if (address < 0xC194E5) return execute_unresolved_c1_c193e7_instruction(cpu, address);
    if (address < 0xC194EE) return execute_unresolved_c1_c19437_instruction(cpu, address);
    return execute_unresolved_c1_c19441_instruction(cpu, address);
}
bool execute_shared_page_c195(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC195D1) return execute_unresolved_c1_c19441_instruction(cpu, address);
    return execute_unresolved_c1_c1952f_jp_instruction(cpu, address);
}
bool execute_shared_page_c199(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19930) return execute_unresolved_c1_c1952f_jp_instruction(cpu, address);
    return execute_miscellaneous_inventory_get_item_name_instruction(cpu, address);
}
bool execute_shared_page_c19a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19A56) return execute_miscellaneous_inventory_get_item_name_instruction(cpu, address);
    if (address < 0xC19A88) return execute_unresolved_c1_c19a11_instruction(cpu, address);
    return execute_unresolved_c1_c19a43_jp_instruction(cpu, address);
}
bool execute_shared_page_c19b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19B4B) return execute_unresolved_c1_c19a43_jp_instruction(cpu, address);
    return execute_text_set_hppp_window_mode_item_instruction(cpu, address);
}
bool execute_shared_page_c19c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19CE5) return execute_text_set_hppp_window_mode_item_instruction(cpu, address);
    return execute_unresolved_c1_c19cdd_instruction(cpu, address);
}
bool execute_shared_page_c19d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19D51) return execute_unresolved_c1_c19cdd_instruction(cpu, address);
    if (address < 0xC19DBD) return execute_unresolved_c1_c19d49_instruction(cpu, address);
    return execute_unresolved_c1_c19db5_jp_instruction(cpu, address);
}
bool execute_shared_page_c19e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19EE3) return execute_unresolved_c1_c19db5_jp_instruction(cpu, address);
    return execute_miscellaneous_get_item_type_instruction(cpu, address);
}
bool execute_shared_page_c19f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC19F30) return execute_miscellaneous_get_item_type_instruction(cpu, address);
    return execute_unresolved_c1_c19f29_jp_instruction(cpu, address);
}
bool execute_shared_page_c1a1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1A129) return execute_unresolved_c1_c19f29_jp_instruction(cpu, address);
    return execute_unresolved_c1_c1a1d8_jp_instruction(cpu, address);
}
bool execute_shared_page_c1a6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1A666) return execute_unresolved_c1_c1a1d8_jp_instruction(cpu, address);
    if (address < 0xC1A683) return execute_unresolved_c1_c1a778_instruction(cpu, address);
    return execute_unresolved_c1_c1a795_jp_instruction(cpu, address);
}
bool execute_shared_page_c1a8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1A8FF) return execute_unresolved_c1_c1a795_jp_instruction(cpu, address);
    return execute_unresolved_c1_c1aa18_jp_instruction(cpu, address);
}
bool execute_shared_page_c1a9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1A941) return execute_unresolved_c1_c1aa18_jp_instruction(cpu, address);
    if (address < 0xC1A9D0) return execute_unresolved_c1_c1aa5d_jp_instruction(cpu, address);
    return execute_unresolved_c1_c1aafa_instruction(cpu, address);
}
bool execute_shared_page_c1aa(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1AACB) return execute_unresolved_c1_c1aafa_instruction(cpu, address);
    return execute_unresolved_c1_c1ac00_instruction(cpu, address);
}
bool execute_shared_page_c1ab(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1AB12) return execute_unresolved_c1_c1ac00_instruction(cpu, address);
    if (address < 0xC1AB5D) return execute_unresolved_c1_c1ac4a_instruction(cpu, address);
    if (address < 0xC1AB63) return execute_battle_return_battle_attacker_address_instruction(cpu, address);
    if (address < 0xC1ABAE) return execute_unresolved_c1_c1aca1_instruction(cpu, address);
    if (address < 0xC1ABB4) return execute_battle_return_battle_target_address_instruction(cpu, address);
    if (address < 0xC1ABBE) return execute_unresolved_c1_c1acf8_instruction(cpu, address);
    if (address < 0xC1ABC6) return execute_unresolved_c1_c1ad02_instruction(cpu, address);
    if (address < 0xC1ABE2) return execute_unresolved_c1_c1ad0a_instruction(cpu, address);
    if (address < 0xC1ABFE) return execute_unresolved_c1_c1ad26_instruction(cpu, address);
    return execute_unresolved_c1_c1ad42_instruction(cpu, address);
}
bool execute_shared_page_c1ac(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1AC39) return execute_unresolved_c1_c1ad42_instruction(cpu, address);
    if (address < 0xC1AC70) return execute_unresolved_c1_c1ad7d_instruction(cpu, address);
    return execute_battle_determine_targetting_instruction(cpu, address);
}
bool execute_shared_page_c1ae(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1AE35) return execute_battle_determine_targetting_instruction(cpu, address);
    return execute_overworld_use_item_instruction(cpu, address);
}
bool execute_shared_page_c1b4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1B47D) return execute_overworld_use_item_instruction(cpu, address);
    return execute_unresolved_c1_c1b5b6_jp_instruction(cpu, address);
}
bool execute_shared_page_c1b9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1B9BD) return execute_unresolved_c1_c1b5b6_jp_instruction(cpu, address);
    return execute_unresolved_c1_c1bb06_instruction(cpu, address);
}
bool execute_shared_page_c1ba(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1BA16) return execute_unresolved_c1_c1bb06_instruction(cpu, address);
    return execute_unresolved_c1_c1bb71_jp_instruction(cpu, address);
}
bool execute_shared_page_c1bb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1BB11) return execute_unresolved_c1_c1bb71_jp_instruction(cpu, address);
    return execute_overworld_teleport_instruction(cpu, address);
}
bool execute_shared_page_c1bc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1BCB3) return execute_overworld_teleport_instruction(cpu, address);
    return execute_overworld_attempt_homesickness_instruction(cpu, address);
}
bool execute_shared_page_c1bd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1BD2C) return execute_overworld_attempt_homesickness_instruction(cpu, address);
    if (address < 0xC1BD62) return execute_overworld_get_off_bicycle_instruction(cpu, address);
    return execute_unresolved_c1_c1befc_instruction(cpu, address);
}
bool execute_shared_page_c1be(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1BEAC) return execute_unresolved_c1_c1befc_instruction(cpu, address);
    return execute_unresolved_c1_c1c046_instruction(cpu, address);
}
bool execute_shared_page_c1bf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1BFC7) return execute_unresolved_c1_c1c046_instruction(cpu, address);
    return execute_unresolved_c1_c1c165_instruction(cpu, address);
}
bool execute_shared_page_c1c0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1C01C) return execute_unresolved_c1_c1c165_instruction(cpu, address);
    return execute_unresolved_c1_c1c1ba_instruction(cpu, address);
}
bool execute_shared_page_c1c1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1C18C) return execute_unresolved_c1_c1c1ba_instruction(cpu, address);
    if (address < 0xC1C1C9) return execute_unresolved_c1_c1c32a_instruction(cpu, address);
    if (address < 0xC1C1D5) return execute_unresolved_c1_c1c367_instruction(cpu, address);
    return execute_unresolved_c1_c1c373_instruction(cpu, address);
}
bool execute_shared_page_c1c2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1C21D) return execute_unresolved_c1_c1c373_instruction(cpu, address);
    if (address < 0xC1C26D) return execute_unresolved_c1_c1c3b6_instruction(cpu, address);
    if (address < 0xC1C2B8) return execute_text_get_psi_name_instruction(cpu, address);
    return execute_battle_generate_psi_list_instruction(cpu, address);
}
bool execute_shared_page_c1c6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1C67E) return execute_battle_generate_psi_list_instruction(cpu, address);
    if (address < 0xC1C6E3) return execute_unresolved_c1_c1c853_instruction(cpu, address);
    return execute_unresolved_c1_c1c8bc_instruction(cpu, address);
}
bool execute_shared_page_c1c8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1C810) return execute_unresolved_c1_c1c8bc_instruction(cpu, address);
    if (address < 0xC1C869) return execute_unresolved_c1_c1ca06_instruction(cpu, address);
    if (address < 0xC1C8AE) return execute_unresolved_c1_c1ca72_jp_instruction(cpu, address);
    return execute_unresolved_c1_c1caf5_instruction(cpu, address);
}
bool execute_shared_page_c1c9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1C93C) return execute_unresolved_c1_c1caf5_instruction(cpu, address);
    if (address < 0xC1C98A) return execute_unresolved_c1_c1cb7f_instruction(cpu, address);
    return execute_battle_battle_psi_menu_instruction(cpu, address);
}
bool execute_shared_page_c1cc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1CC3B) return execute_battle_battle_psi_menu_instruction(cpu, address);
    return execute_unresolved_c1_c1ce85_instruction(cpu, address);
}
bool execute_shared_page_c1cd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1CD7D) return execute_unresolved_c1_c1ce85_instruction(cpu, address);
    return execute_unresolved_c1_c1cfc6_jp_instruction(cpu, address);
}
bool execute_shared_page_c1ce(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1CE20) return execute_unresolved_c1_c1cfc6_jp_instruction(cpu, address);
    if (address < 0xC1CE74) return execute_unresolved_c1_c1d038_instruction(cpu, address);
    if (address < 0xC1CEF2) return execute_unresolved_c1_c1d08b_instruction(cpu, address);
    return execute_miscellaneous_level_up_char_jp_instruction(cpu, address);
}
bool execute_shared_page_c1d6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1D6CB) return execute_miscellaneous_level_up_char_jp_instruction(cpu, address);
    return execute_miscellaneous_reset_char_level_one_instruction(cpu, address);
}
bool execute_shared_page_c1d7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1D7E4) return execute_miscellaneous_reset_char_level_one_instruction(cpu, address);
    return execute_miscellaneous_gain_exp_instruction(cpu, address);
}
bool execute_shared_page_c1d9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1D92E) return execute_miscellaneous_gain_exp_instruction(cpu, address);
    if (address < 0xC1D9B8) return execute_miscellaneous_find_condiment_instruction(cpu, address);
    if (address < 0xC1D9FF) return execute_overworld_show_hp_alert_instruction(cpu, address);
    return execute_text_display_in_battle_text_instruction(cpu, address);
}
bool execute_shared_page_c1da(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1DA49) return execute_text_display_in_battle_text_instruction(cpu, address);
    if (address < 0xC1DAA6) return execute_text_display_text_wait_instruction(cpu, address);
    return execute_unresolved_c1_c1dccb_instruction(cpu, address);
}
bool execute_shared_page_c1db(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1DB18) return execute_unresolved_c1_c1dccb_instruction(cpu, address);
    if (address < 0xC1DB1E) return execute_text_show_hppp_windows_redirect_instruction(cpu, address);
    if (address < 0xC1DB24) return execute_text_hide_hppp_windows_redirect_instruction(cpu, address);
    if (address < 0xC1DB2A) return execute_text_create_window_redirect_instruction(cpu, address);
    if (address < 0xC1DB30) return execute_text_set_window_focus_redirect_instruction(cpu, address);
    if (address < 0xC1DB36) return execute_unresolved_c1_c10fa3_redirect_instruction(cpu, address);
    if (address < 0xC1DB3C) return execute_text_close_focus_window_redirect_instruction(cpu, address);
    if (address < 0xC1DB4D) return execute_unresolved_c1_c1dd5f_instruction(cpu, address);
    if (address < 0xC1DB53) return execute_unresolved_c1_c1ac4a_redirect_instruction(cpu, address);
    if (address < 0xC1DB59) return execute_unresolved_c1_c1aca1_redirect_instruction(cpu, address);
    if (address < 0xC1DB5F) return execute_unresolved_c1_c1acf8_redirect_instruction(cpu, address);
    if (address < 0xC1DB7C) return execute_unresolved_c1_c1dd82_instruction(cpu, address);
    if (address < 0xC1DBA3) return execute_unresolved_c1_c1dd9f_instruction(cpu, address);
    if (address < 0xC1DBA9) return execute_miscellaneous_remove_item_from_inventory_redirect_instruction(cpu, address);
    if (address < 0xC1DBAF) return execute_unresolved_c4_c43573_redirect_instruction(cpu, address);
    if (address < 0xC1DBB5) return execute_unresolved_c3_c3e6f8_redirect_jp_instruction(cpu, address);
    if (address < 0xC1DBE8) return execute_text_selection_menu_setup_jp_instruction(cpu, address);
    if (address < 0xC1DBEE) return execute_text_print_menu_items_redirect_instruction(cpu, address);
    if (address < 0xC1DBF4) return execute_text_selection_menu_redirect_instruction(cpu, address);
    if (address < 0xC1DBFA) return execute_unresolved_c1_c1cfc6_redirect_instruction(cpu, address);
    return execute_unresolved_c1_c1242e_redirect_instruction(cpu, address);
}
bool execute_shared_page_c1dc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1DC06) return execute_battle_battle_psi_menu_redirect_instruction(cpu, address);
    return execute_battle_actions_switch_weapon_instruction(cpu, address);
}
bool execute_shared_page_c1dd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1DDD3) return execute_battle_actions_switch_weapon_instruction(cpu, address);
    return execute_battle_actions_switch_armor_instruction(cpu, address);
}
bool execute_shared_page_c1df(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1DF66) return execute_battle_actions_switch_armor_instruction(cpu, address);
    if (address < 0xC1DF69) return execute_unresolved_miscellaneous_null_c1e1a2_instruction(cpu, address);
    return execute_battle_enemy_select_mode_instruction(cpu, address);
}
bool execute_shared_page_c1e2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1E24F) return execute_battle_enemy_select_mode_instruction(cpu, address);
    return execute_unresolved_c1_c1e48d_jp_instruction(cpu, address);
}
bool execute_shared_page_c1e3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1E3B1) return execute_unresolved_c1_c1e48d_jp_instruction(cpu, address);
    return execute_unresolved_c1_c1e4be_jp_instruction(cpu, address);
}
bool execute_shared_page_c1e4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1E498) return execute_unresolved_c1_c1e4be_jp_instruction(cpu, address);
    return execute_text_text_input_dialog_jp_instruction(cpu, address);
}
bool execute_shared_page_c1e8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1E8F6) return execute_text_text_input_dialog_jp_instruction(cpu, address);
    return execute_text_enter_your_name_please_jp_instruction(cpu, address);
}
bool execute_shared_page_c1ea(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1EAF3) return execute_text_enter_your_name_please_jp_instruction(cpu, address);
    return execute_introduction_name_a_character_instruction(cpu, address);
}
bool execute_shared_page_c1eb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1EBF6) return execute_introduction_name_a_character_instruction(cpu, address);
    return execute_unresolved_c1_c1ec8f_jp_instruction(cpu, address);
}
bool execute_shared_page_c1ec(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1EC4F) return execute_unresolved_c1_c1ec8f_jp_instruction(cpu, address);
    if (address < 0xC1EC5A) return execute_unresolved_c1_c1ecd1_instruction(cpu, address);
    if (address < 0xC1ECD9) return execute_system_saves_corruption_check_instruction(cpu, address);
    return execute_introduction_file_select_menu_jp_instruction(cpu, address);
}
bool execute_shared_page_c1ef(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1EF83) return execute_introduction_file_select_menu_jp_instruction(cpu, address);
    return execute_unresolved_c1_c1f07e_jp_instruction(cpu, address);
}
bool execute_shared_page_c1f0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F04E) return execute_unresolved_c1_c1f07e_jp_instruction(cpu, address);
    return execute_unresolved_c1_c1f14f_jp_instruction(cpu, address);
}
bool execute_shared_page_c1f1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F1A2) return execute_unresolved_c1_c1f14f_jp_instruction(cpu, address);
    return execute_unresolved_c1_c1f2a8_jp_instruction(cpu, address);
}
bool execute_shared_page_c1f2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F293) return execute_unresolved_c1_c1f2a8_jp_instruction(cpu, address);
    return execute_introduction_file_select_open_text_speed_menu_jp_instruction(cpu, address);
}
bool execute_shared_page_c1f4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F408) return execute_introduction_file_select_open_text_speed_menu_jp_instruction(cpu, address);
    return execute_introduction_file_select_open_sound_menu_jp_instruction(cpu, address);
}
bool execute_shared_page_c1f5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F55E) return execute_introduction_file_select_open_sound_menu_jp_instruction(cpu, address);
    return execute_introduction_file_select_open_flavour_menu_instruction(cpu, address);
}
bool execute_shared_page_c1f6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1F685) return execute_introduction_file_select_open_flavour_menu_instruction(cpu, address);
    return execute_introduction_file_select_menu_loop_jp_instruction(cpu, address);
}
bool execute_shared_page_c1fc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1FCAB) return execute_introduction_file_select_menu_loop_jp_instruction(cpu, address);
    if (address < 0xC1FCEE) return execute_unresolved_c1_c1ff2c_instruction(cpu, address);
    return execute_unresolved_c1_c1ff6b_instruction(cpu, address);
}
bool execute_shared_page_c1fd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC1FD04) return execute_unresolved_c1_c1ff6b_instruction(cpu, address);
    return execute_system_antipiracy_sram_check_routine_checksum_instruction(cpu, address);
}
bool execute_shared_page_c200(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC200D9) return execute_overworld_inflict_sunstroke_check_instruction(cpu, address);
    return execute_unresolved_c2_c200d9_instruction(cpu, address);
}
bool execute_shared_page_c202(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC20201) return execute_unresolved_c2_c200d9_instruction(cpu, address);
    if (address < 0xC2022E) return execute_unresolved_c2_c20266_instruction(cpu, address);
    if (address < 0xC20247) return execute_unresolved_c2_c20293_instruction(cpu, address);
    return execute_unresolved_c2_c202ac_instruction(cpu, address);
}
bool execute_shared_page_c203(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2030C) return execute_unresolved_c2_c202ac_instruction(cpu, address);
    if (address < 0xC2036C) return execute_text_set_window_title_instruction(cpu, address);
    if (address < 0xC203A4) return execute_unresolved_c2_c2038b_instruction(cpu, address);
    return execute_text_hp_pp_window_draw_instruction(cpu, address);
}
bool execute_shared_page_c207(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2071E) return execute_text_hp_pp_window_draw_instruction(cpu, address);
    if (address < 0xC20757) return execute_unresolved_c2_c2077d_instruction(cpu, address);
    if (address < 0xC20782) return execute_unresolved_c2_c207b6_instruction(cpu, address);
    return execute_text_hp_pp_window_undraw_instruction(cpu, address);
}
bool execute_shared_page_c208(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2081D) return execute_text_hp_pp_window_undraw_instruction(cpu, address);
    if (address < 0xC20859) return execute_unresolved_c2_c2087c_instruction(cpu, address);
    if (address < 0xC208B1) return execute_unresolved_c2_c208b8_instruction(cpu, address);
    return execute_unresolved_c2_c20a20_instruction(cpu, address);
}
bool execute_shared_page_c209(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2094D) return execute_unresolved_c2_c20a20_instruction(cpu, address);
    if (address < 0xC209F6) return execute_unresolved_c2_c20abc_instruction(cpu, address);
    return execute_unresolved_c2_c20b65_instruction(cpu, address);
}
bool execute_shared_page_c20b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC20BD0) return execute_unresolved_c2_c20b65_instruction(cpu, address);
    return execute_text_hp_pp_window_separate_decimal_digits_instruction(cpu, address);
}
bool execute_shared_page_c20c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC20C1A) return execute_text_hp_pp_window_separate_decimal_digits_instruction(cpu, address);
    if (address < 0xC20C56) return execute_text_hp_pp_window_fill_tile_buffer_x_instruction(cpu, address);
    return execute_text_hp_pp_window_fill_tile_buffer_instruction(cpu, address);
}
bool execute_shared_page_c20d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC20D99) return execute_text_hp_pp_window_fill_tile_buffer_instruction(cpu, address);
    if (address < 0xC20DB7) return execute_text_hp_pp_window_fill_character_hp_tile_buffer_instruction(cpu, address);
    if (address < 0xC20DE9) return execute_text_hp_pp_window_fill_character_pp_tile_buffer_instruction(cpu, address);
    return execute_unresolved_c2_c20f58_instruction(cpu, address);
}
bool execute_shared_page_c20e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC20E2B) return execute_unresolved_c2_c20f58_instruction(cpu, address);
    if (address < 0xC20ECA) return execute_miscellaneous_reset_hppp_rolling_instruction(cpu, address);
    return execute_unresolved_c2_c21034_instruction(cpu, address);
}
bool execute_shared_page_c20f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC20F28) return execute_unresolved_c2_c21034_instruction(cpu, address);
    if (address < 0xC20F3B) return execute_unresolved_c2_c2108c_instruction(cpu, address);
    return execute_miscellaneous_hp_pp_roller_instruction(cpu, address);
}
bool execute_shared_page_c212(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2124C) return execute_miscellaneous_hp_pp_roller_instruction(cpu, address);
    return execute_text_update_hppp_meter_tiles_instruction(cpu, address);
}
bool execute_shared_page_c214(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC214D0) return execute_text_update_hppp_meter_tiles_instruction(cpu, address);
    return execute_text_get_event_flag_instruction(cpu, address);
}
bool execute_shared_page_c215(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21506) return execute_text_get_event_flag_instruction(cpu, address);
    if (address < 0xC21555) return execute_text_set_event_flag_instruction(cpu, address);
    if (address < 0xC21571) return execute_unresolved_c2_c216ad_instruction(cpu, address);
    if (address < 0xC21578) return execute_audio_stop_music_redirect_instruction(cpu, address);
    if (address < 0xC21583) return execute_audio_play_sound_and_unknown_instruction(cpu, address);
    return execute_unresolved_c2_c216db_instruction(cpu, address);
}
bool execute_shared_page_c217(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21706) return execute_unresolved_c2_c216db_instruction(cpu, address);
    if (address < 0xC217D9) return execute_miscellaneous_recalc_character_postmath_offense_instruction(cpu, address);
    return execute_miscellaneous_recalc_character_postmath_defense_instruction(cpu, address);
}
bool execute_shared_page_c219(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21996) return execute_miscellaneous_recalc_character_postmath_defense_instruction(cpu, address);
    return execute_miscellaneous_recalc_character_postmath_speed_instruction(cpu, address);
}
bool execute_shared_page_c21a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21A48) return execute_miscellaneous_recalc_character_postmath_speed_instruction(cpu, address);
    if (address < 0xC21AFA) return execute_miscellaneous_recalc_character_postmath_guts_instruction(cpu, address);
    return execute_miscellaneous_recalc_character_postmath_luck_instruction(cpu, address);
}
bool execute_shared_page_c21b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21BFA) return execute_miscellaneous_recalc_character_postmath_luck_instruction(cpu, address);
    return execute_miscellaneous_recalc_character_postmath_vitality_instruction(cpu, address);
}
bool execute_shared_page_c21c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC21C12) return execute_miscellaneous_recalc_character_postmath_vitality_instruction(cpu, address);
    if (address < 0xC21C2A) return execute_miscellaneous_recalc_character_postmath_iq_instruction(cpu, address);
    if (address < 0xC21C99) return execute_battle_recalc_character_miss_rate_instruction(cpu, address);
    return execute_battle_calc_resistances_instruction(cpu, address);
}
bool execute_shared_page_c220(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC220B3) return execute_battle_calc_resistances_instruction(cpu, address);
    return execute_miscellaneous_increase_wallet_balance_instruction(cpu, address);
}
bool execute_shared_page_c221(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC22111) return execute_miscellaneous_increase_wallet_balance_instruction(cpu, address);
    if (address < 0xC22172) return execute_miscellaneous_decrease_wallet_balance_instruction(cpu, address);
    if (address < 0xC221EF) return execute_text_get_party_character_name_instruction(cpu, address);
    return execute_unresolved_c2_c22351_instruction(cpu, address);
}
bool execute_shared_page_c222(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2223B) return execute_unresolved_c2_c22351_instruction(cpu, address);
    if (address < 0xC22280) return execute_unresolved_c2_c2239d_instruction(cpu, address);
    return execute_unresolved_c2_c223d9_instruction(cpu, address);
}
bool execute_shared_page_c223(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2231B) return execute_unresolved_c2_c223d9_instruction(cpu, address);
    if (address < 0xC22388) return execute_unresolved_c2_c22474_instruction(cpu, address);
    if (address < 0xC223D5) return execute_inventory_get_item_subtype_jp_instruction(cpu, address);
    return execute_inventory_get_item_subtype2_jp_instruction(cpu, address);
}
bool execute_shared_page_c224(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2241D) return execute_inventory_get_item_subtype2_jp_instruction(cpu, address);
    if (address < 0xC22467) return execute_unresolved_c2_c22562_instruction(cpu, address);
    if (address < 0xC224C8) return execute_unresolved_c2_c225ac_instruction(cpu, address);
    return execute_unresolved_c2_c2260d_instruction(cpu, address);
}
bool execute_shared_page_c225(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2252E) return execute_unresolved_c2_c2260d_instruction(cpu, address);
    if (address < 0xC22580) return execute_unresolved_c2_c22673_instruction(cpu, address);
    if (address < 0xC225A1) return execute_unresolved_c2_c226c5_instruction(cpu, address);
    if (address < 0xC225AB) return execute_unresolved_c2_c226e6_instruction(cpu, address);
    if (address < 0xC225EE) return execute_unresolved_c2_c226f0_instruction(cpu, address);
    return execute_unresolved_c2_c2272f_instruction(cpu, address);
}
bool execute_shared_page_c226(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC22642) return execute_unresolved_c2_c2272f_instruction(cpu, address);
    if (address < 0xC22694) return execute_unresolved_c2_c2277c_instruction(cpu, address);
    if (address < 0xC226E9) return execute_miscellaneous_learn_special_psi_instruction(cpu, address);
    return execute_miscellaneous_atm_deposit_instruction(cpu, address);
}
bool execute_shared_page_c227(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC22783) return execute_miscellaneous_atm_deposit_instruction(cpu, address);
    if (address < 0xC227C4) return execute_miscellaneous_atm_withdraw_instruction(cpu, address);
    return execute_miscellaneous_party_add_char_jp_instruction(cpu, address);
}
bool execute_shared_page_c228(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC228B3) return execute_miscellaneous_party_add_char_jp_instruction(cpu, address);
    return execute_miscellaneous_party_remove_char_jp_instruction(cpu, address);
}
bool execute_shared_page_c229(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC22951) return execute_miscellaneous_party_remove_char_jp_instruction(cpu, address);
    if (address < 0xC2295F) return execute_miscellaneous_save_game_instruction(cpu, address);
    return execute_unresolved_c2_c22a3a_instruction(cpu, address);
}
bool execute_shared_page_c22e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC22E5D) return execute_unresolved_c2_c22a3a_instruction(cpu, address);
    return execute_battle_init_scripted_instruction(cpu, address);
}
bool execute_shared_page_c22f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC22F2D) return execute_battle_init_scripted_instruction(cpu, address);
    if (address < 0xC22FA0) return execute_unresolved_c2_c23008_instruction(cpu, address);
    return execute_unresolved_c2_c2307b_instruction(cpu, address);
}
bool execute_shared_page_c230(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC23018) return execute_unresolved_c2_c2307b_instruction(cpu, address);
    if (address < 0xC23040) return execute_miscellaneous_set_teleport_box_destination_instruction(cpu, address);
    return execute_battle_menu_handler_jp_instruction(cpu, address);
}
bool execute_shared_page_c23a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC23A50) return execute_battle_menu_handler_jp_instruction(cpu, address);
    if (address < 0xC23AB9) return execute_text_copy_enemy_name_instruction(cpu, address);
    return execute_text_fix_attacker_name_instruction(cpu, address);
}
bool execute_shared_page_c23b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC23BF4) return execute_text_fix_attacker_name_instruction(cpu, address);
    return execute_text_fix_target_name_instruction(cpu, address);
}
bool execute_shared_page_c23d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC23D07) return execute_text_fix_target_name_instruction(cpu, address);
    if (address < 0xC23D5F) return execute_unresolved_c2_c23e32_instruction(cpu, address);
    return execute_unresolved_c2_c23e8a_instruction(cpu, address);
}
bool execute_shared_page_c23e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC23E1C) return execute_unresolved_c2_c23e8a_instruction(cpu, address);
    if (address < 0xC23E9E) return execute_battle_find_targettable_npc_instruction(cpu, address);
    if (address < 0xC23EBD) return execute_battle_get_shield_targetting_instruction(cpu, address);
    return execute_battle_feeling_strange_retargetting_instruction(cpu, address);
}
bool execute_shared_page_c23f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC23F58) return execute_battle_feeling_strange_retargetting_instruction(cpu, address);
    return execute_unresolved_c2_c240a4_instruction(cpu, address);
}
bool execute_shared_page_c240(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC24023) return execute_unresolved_c2_c240a4_instruction(cpu, address);
    if (address < 0xC24090) return execute_battle_remove_status_untargettable_targets_instruction(cpu, address);
    return execute_battle_find_stealable_items_instruction(cpu, address);
}
bool execute_shared_page_c241(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC241D3) return execute_battle_find_stealable_items_instruction(cpu, address);
    return execute_battle_select_stealable_item_instruction(cpu, address);
}
bool execute_shared_page_c242(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC24205) return execute_battle_select_stealable_item_instruction(cpu, address);
    if (address < 0xC2423B) return execute_unresolved_c2_c24348_instruction(cpu, address);
    return execute_unresolved_c2_c2437e_instruction(cpu, address);
}
bool execute_shared_page_c243(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC24301) return execute_unresolved_c2_c2437e_instruction(cpu, address);
    if (address < 0xC24344) return execute_unresolved_c2_c24434_instruction(cpu, address);
    return execute_battle_choose_target_instruction(cpu, address);
}
bool execute_shared_page_c245(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC245D0) return execute_battle_choose_target_instruction(cpu, address);
    return execute_unresolved_c2_c24703_instruction(cpu, address);
}
bool execute_shared_page_c246(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC246EE) return execute_unresolved_c2_c24703_instruction(cpu, address);
    return execute_battle_main_battle_routine_instruction(cpu, address);
}
bool execute_shared_page_c260(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC260B5) return execute_battle_main_battle_routine_instruction(cpu, address);
    if (address < 0xC260E9) return execute_unresolved_c2_c26189_instruction(cpu, address);
    return execute_battle_instant_win_handler_instruction(cpu, address);
}
bool execute_shared_page_c264(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26480) return execute_battle_instant_win_handler_instruction(cpu, address);
    return execute_unresolved_c2_c2654c_instruction(cpu, address);
}
bool execute_shared_page_c265(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2656D) return execute_unresolved_c2_c2654c_instruction(cpu, address);
    return execute_battle_instant_win_check_instruction(cpu, address);
}
bool execute_shared_page_c268(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC268CA) return execute_battle_instant_win_check_instruction(cpu, address);
    if (address < 0xC268E7) return execute_battle_get_battle_action_type_instruction(cpu, address);
    if (address < 0xC268FD) return execute_battle_get_enemy_type_instruction(cpu, address);
    return execute_system_wait_instruction(cpu, address);
}
bool execute_shared_page_c269(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2691D) return execute_system_wait_instruction(cpu, address);
    if (address < 0xC2692E) return execute_unresolved_c2_c269de_instruction(cpu, address);
    if (address < 0xC26937) return execute_system_math_rand_long_instruction(cpu, address);
    if (address < 0xC2696C) return execute_system_math_truncate_16_to_8_instruction(cpu, address);
    if (address < 0xC26983) return execute_system_math_rand_limit_instruction(cpu, address);
    return execute_battle_50_percent_variance_instruction(cpu, address);
}
bool execute_shared_page_c26a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26A3C) return execute_battle_50_percent_variance_instruction(cpu, address);
    if (address < 0xC26AF7) return execute_battle_25_percent_variance_instruction(cpu, address);
    return execute_battle_success_255_instruction(cpu, address);
}
bool execute_shared_page_c26b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26B1A) return execute_battle_success_255_instruction(cpu, address);
    if (address < 0xC26B3A) return execute_battle_success_500_instruction(cpu, address);
    if (address < 0xC26BC1) return execute_battle_target_allies_instruction(cpu, address);
    return execute_battle_target_all_enemies_instruction(cpu, address);
}
bool execute_shared_page_c26c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26C43) return execute_battle_target_all_enemies_instruction(cpu, address);
    return execute_battle_target_row_instruction(cpu, address);
}
bool execute_shared_page_c26d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26D3F) return execute_battle_target_row_instruction(cpu, address);
    if (address < 0xC26DB6) return execute_battle_target_all_instruction(cpu, address);
    return execute_battle_remove_npc_targetting_instruction(cpu, address);
}
bool execute_shared_page_c26e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26E37) return execute_battle_remove_npc_targetting_instruction(cpu, address);
    return execute_battle_random_targetting_instruction(cpu, address);
}
bool execute_shared_page_c26f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC26F1B) return execute_battle_random_targetting_instruction(cpu, address);
    if (address < 0xC26F68) return execute_battle_target_battler_instruction(cpu, address);
    if (address < 0xC26FC8) return execute_battle_is_char_targetted_instruction(cpu, address);
    return execute_battle_remove_target_instruction(cpu, address);
}
bool execute_shared_page_c270(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC27023) return execute_battle_remove_target_instruction(cpu, address);
    if (address < 0xC27065) return execute_battle_remove_dead_targetting_instruction(cpu, address);
    if (address < 0xC270D4) return execute_battle_set_hp_instruction(cpu, address);
    return execute_battle_set_pp_instruction(cpu, address);
}
bool execute_shared_page_c271(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC27133) return execute_battle_set_pp_instruction(cpu, address);
    if (address < 0xC27160) return execute_battle_reduce_hp_instruction(cpu, address);
    if (address < 0xC2718D) return execute_battle_reduce_pp_instruction(cpu, address);
    if (address < 0xC271D7) return execute_battle_inflict_status_instruction(cpu, address);
    return execute_battle_recover_hp_instruction(cpu, address);
}
bool execute_shared_page_c272(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2725B) return execute_battle_recover_hp_instruction(cpu, address);
    if (address < 0xC272DA) return execute_battle_recover_pp_instruction(cpu, address);
    return execute_battle_revive_target_instruction(cpu, address);
}
bool execute_shared_page_c274(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC27491) return execute_battle_revive_target_instruction(cpu, address);
    return execute_battle_ko_target_instruction(cpu, address);
}
bool execute_shared_page_c27c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC27C2D) return execute_battle_ko_target_instruction(cpu, address);
    if (address < 0xC27C46) return execute_battle_success_luck80_instruction(cpu, address);
    if (address < 0xC27C94) return execute_battle_success_speed_instruction(cpu, address);
    if (address < 0xC27CBF) return execute_battle_fail_attack_on_npcs_instruction(cpu, address);
    return execute_battle_increase_offense_16th_instruction(cpu, address);
}
bool execute_shared_page_c27d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC27D19) return execute_battle_increase_offense_16th_instruction(cpu, address);
    if (address < 0xC27D73) return execute_battle_increase_defense_16th_instruction(cpu, address);
    if (address < 0xC27DCA) return execute_battle_decrease_offense_16th_instruction(cpu, address);
    return execute_battle_decrease_defense_16th_instruction(cpu, address);
}
bool execute_shared_page_c27e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC27E21) return execute_battle_decrease_defense_16th_instruction(cpu, address);
    if (address < 0xC27E46) return execute_battle_swap_attacker_with_target_instruction(cpu, address);
    return execute_battle_calc_damage_instruction(cpu, address);
}
bool execute_shared_page_c280(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC280CB) return execute_battle_calc_damage_instruction(cpu, address);
    return execute_battle_calc_damage_reduction_instruction(cpu, address);
}
bool execute_shared_page_c282(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2829E) return execute_battle_calc_damage_reduction_instruction(cpu, address);
    return execute_battle_miss_calc_instruction(cpu, address);
}
bool execute_shared_page_c283(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2839F) return execute_battle_miss_calc_instruction(cpu, address);
    return execute_battle_smaaaash_instruction(cpu, address);
}
bool execute_shared_page_c284(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28454) return execute_battle_smaaaash_instruction(cpu, address);
    if (address < 0xC284CA) return execute_battle_determine_dodge_instruction(cpu, address);
    return execute_battle_actions_level_2_attack_instruction(cpu, address);
}
bool execute_shared_page_c285(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28512) return execute_battle_actions_level_2_attack_instruction(cpu, address);
    if (address < 0xC28546) return execute_battle_heal_strangeness_instruction(cpu, address);
    if (address < 0xC28581) return execute_battle_actions_bash_instruction(cpu, address);
    if (address < 0xC285F8) return execute_battle_actions_level_4_attack_instruction(cpu, address);
    return execute_battle_actions_level_3_attack_instruction(cpu, address);
}
bool execute_shared_page_c286(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28672) return execute_battle_actions_level_3_attack_instruction(cpu, address);
    if (address < 0xC286E7) return execute_battle_actions_level_1_attack_instruction(cpu, address);
    return execute_battle_actions_shoot_instruction(cpu, address);
}
bool execute_shared_page_c287(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28717) return execute_battle_actions_shoot_instruction(cpu, address);
    return execute_battle_actions_spy_instruction(cpu, address);
}
bool execute_shared_page_c288(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28842) return execute_battle_actions_spy_instruction(cpu, address);
    if (address < 0xC28845) return execute_battle_actions_null01_instruction(cpu, address);
    if (address < 0xC28892) return execute_battle_actions_steal_instruction(cpu, address);
    return execute_battle_actions_freeze_time_instruction(cpu, address);
}
bool execute_shared_page_c289(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28965) return execute_battle_actions_freeze_time_instruction(cpu, address);
    return execute_battle_actions_diamondize_instruction(cpu, address);
}
bool execute_shared_page_c28a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28A29) return execute_battle_actions_diamondize_instruction(cpu, address);
    if (address < 0xC28A82) return execute_battle_actions_paralyze_instruction(cpu, address);
    if (address < 0xC28AC3) return execute_battle_actions_nauseate_instruction(cpu, address);
    return execute_battle_actions_poison_instruction(cpu, address);
}
bool execute_shared_page_c28b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28B04) return execute_battle_actions_poison_instruction(cpu, address);
    if (address < 0xC28B55) return execute_battle_actions_cold_instruction(cpu, address);
    if (address < 0xC28B94) return execute_battle_actions_mushroomize_instruction(cpu, address);
    return execute_battle_actions_possess_instruction(cpu, address);
}
bool execute_shared_page_c28c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28C4F) return execute_battle_actions_crying_instruction(cpu, address);
    if (address < 0xC28C88) return execute_battle_actions_immobilize_instruction(cpu, address);
    if (address < 0xC28CD1) return execute_battle_actions_solidify_instruction(cpu, address);
    if (address < 0xC28CD8) return execute_battle_actions_brainshock_alpha_redirect_instruction(cpu, address);
    if (address < 0xC28CF1) return execute_battle_success_luck40_instruction(cpu, address);
    return execute_battle_actions_distract_instruction(cpu, address);
}
bool execute_shared_page_c28d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28D52) return execute_battle_actions_distract_instruction(cpu, address);
    if (address < 0xC28D93) return execute_battle_actions_feel_strange_instruction(cpu, address);
    if (address < 0xC28DD2) return execute_battle_actions_crying2_instruction(cpu, address);
    if (address < 0xC28DD9) return execute_battle_actions_hypnosis_alpha_redirect_instruction(cpu, address);
    return execute_battle_actions_reduce_pp_instruction(cpu, address);
}
bool execute_shared_page_c28e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28E45) return execute_battle_actions_reduce_pp_instruction(cpu, address);
    if (address < 0xC28EB8) return execute_battle_actions_cut_guts_instruction(cpu, address);
    return execute_battle_actions_reduce_offense_defense_instruction(cpu, address);
}
bool execute_shared_page_c28f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC28F2E) return execute_battle_actions_reduce_offense_defense_instruction(cpu, address);
    if (address < 0xC28F90) return execute_battle_actions_level_2_attack_poison_instruction(cpu, address);
    if (address < 0xC28F9B) return execute_battle_actions_bash_twice_instruction(cpu, address);
    if (address < 0xC28FA2) return execute_battle_actions_null01_redirect_instruction(cpu, address);
    if (address < 0xC28FC3) return execute_battle_actions_350_fire_damage_instruction(cpu, address);
    if (address < 0xC28FCA) return execute_battle_actions_level_3_attack_copy_instruction(cpu, address);
    if (address < 0xC28FCD) return execute_battle_actions_null02_instruction(cpu, address);
    if (address < 0xC28FD0) return execute_battle_actions_null03_instruction(cpu, address);
    if (address < 0xC28FD3) return execute_battle_actions_null04_instruction(cpu, address);
    if (address < 0xC28FD6) return execute_battle_actions_null05_instruction(cpu, address);
    if (address < 0xC28FD9) return execute_battle_actions_null06_instruction(cpu, address);
    if (address < 0xC28FDC) return execute_battle_actions_null07_instruction(cpu, address);
    if (address < 0xC28FDF) return execute_battle_actions_null08_instruction(cpu, address);
    if (address < 0xC28FE2) return execute_battle_actions_null09_instruction(cpu, address);
    if (address < 0xC28FE5) return execute_battle_actions_null10_instruction(cpu, address);
    if (address < 0xC28FE8) return execute_battle_actions_null11_instruction(cpu, address);
    return execute_battle_actions_neutralize_instruction(cpu, address);
}
bool execute_shared_page_c290(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2905D) return execute_battle_actions_neutralize_instruction(cpu, address);
    return execute_unresolved_c2_c290c6_instruction(cpu, address);
}
bool execute_shared_page_c291(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29105) return execute_unresolved_c2_c290c6_instruction(cpu, address);
    if (address < 0xC291EB) return execute_battle_actions_level_2_attack_diamondize_instruction(cpu, address);
    return execute_battle_actions_reduce_offense_instruction(cpu, address);
}
bool execute_shared_page_c292(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2922F) return execute_battle_actions_reduce_offense_instruction(cpu, address);
    if (address < 0xC29282) return execute_battle_actions_clumsy_robot_death_instruction(cpu, address);
    if (address < 0xC29285) return execute_battle_actions_enemy_extend_instruction(cpu, address);
    return execute_battle_actions_master_barf_death_instruction(cpu, address);
}
bool execute_shared_page_c293(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC293C6) return execute_battle_actions_master_barf_death_instruction(cpu, address);
    return execute_battle_psi_shield_nullify_instruction(cpu, address);
}
bool execute_shared_page_c294(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29477) return execute_battle_psi_shield_nullify_instruction(cpu, address);
    if (address < 0xC294BF) return execute_battle_weaken_shield_instruction(cpu, address);
    if (address < 0xC294FF) return execute_battle_actions_psi_rockin_common_instruction(cpu, address);
    return execute_battle_actions_psi_rockin_alpha_instruction(cpu, address);
}
bool execute_shared_page_c295(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29508) return execute_battle_actions_psi_rockin_alpha_instruction(cpu, address);
    if (address < 0xC29511) return execute_battle_actions_psi_rockin_beta_instruction(cpu, address);
    if (address < 0xC2951A) return execute_battle_actions_psi_rockin_gamma_instruction(cpu, address);
    if (address < 0xC29523) return execute_battle_actions_psi_rockin_omega_instruction(cpu, address);
    if (address < 0xC29554) return execute_battle_actions_psi_fire_common_instruction(cpu, address);
    if (address < 0xC2955D) return execute_battle_actions_psi_fire_alpha_instruction(cpu, address);
    if (address < 0xC29566) return execute_battle_actions_psi_fire_beta_instruction(cpu, address);
    if (address < 0xC2956F) return execute_battle_actions_psi_fire_gamma_instruction(cpu, address);
    if (address < 0xC29578) return execute_battle_actions_psi_fire_omega_instruction(cpu, address);
    if (address < 0xC295F0) return execute_battle_actions_psi_freeze_common_instruction(cpu, address);
    if (address < 0xC295F9) return execute_battle_actions_psi_freeze_alpha_instruction(cpu, address);
    return execute_battle_actions_psi_freeze_beta_instruction(cpu, address);
}
bool execute_shared_page_c296(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29602) return execute_battle_actions_psi_freeze_beta_instruction(cpu, address);
    if (address < 0xC2960B) return execute_battle_actions_psi_freeze_gamma_instruction(cpu, address);
    if (address < 0xC29614) return execute_battle_actions_psi_freeze_omega_instruction(cpu, address);
    return execute_battle_actions_psi_thunder_common_instruction(cpu, address);
}
bool execute_shared_page_c298(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2981A) return execute_battle_actions_psi_thunder_common_instruction(cpu, address);
    if (address < 0xC29826) return execute_battle_actions_psi_thunder_alpha_instruction(cpu, address);
    if (address < 0xC29832) return execute_battle_actions_psi_thunder_beta_instruction(cpu, address);
    if (address < 0xC2983E) return execute_battle_actions_psi_thunder_gamma_instruction(cpu, address);
    if (address < 0xC2984A) return execute_battle_actions_psi_thunder_omega_instruction(cpu, address);
    if (address < 0xC29887) return execute_battle_actions_psi_flash_immunity_test_instruction(cpu, address);
    if (address < 0xC298C0) return execute_battle_actions_psi_flash_feeling_strange_instruction(cpu, address);
    if (address < 0xC298F9) return execute_battle_actions_psi_flash_paralysis_instruction(cpu, address);
    return execute_battle_actions_psi_flash_crying_instruction(cpu, address);
}
bool execute_shared_page_c299(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29930) return execute_battle_actions_psi_flash_crying_instruction(cpu, address);
    if (address < 0xC29957) return execute_battle_actions_psi_flash_alpha_instruction(cpu, address);
    if (address < 0xC29998) return execute_battle_actions_psi_flash_beta_instruction(cpu, address);
    if (address < 0xC299DE) return execute_battle_actions_psi_flash_gamma_instruction(cpu, address);
    return execute_battle_actions_psi_flash_omega_instruction(cpu, address);
}
bool execute_shared_page_c29a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29A29) return execute_battle_actions_psi_flash_omega_instruction(cpu, address);
    if (address < 0xC29A4F) return execute_battle_actions_psi_starstorm_common_instruction(cpu, address);
    if (address < 0xC29A58) return execute_battle_actions_psi_starstorm_alpha_instruction(cpu, address);
    if (address < 0xC29A61) return execute_battle_actions_psi_starstorm_omega_instruction(cpu, address);
    if (address < 0xC29A6F) return execute_battle_actions_lifeup_common_instruction(cpu, address);
    if (address < 0xC29A78) return execute_battle_actions_lifeup_alpha_instruction(cpu, address);
    if (address < 0xC29A81) return execute_battle_actions_lifeup_beta_instruction(cpu, address);
    if (address < 0xC29A8A) return execute_battle_actions_lifeup_gamma_instruction(cpu, address);
    if (address < 0xC29A93) return execute_battle_actions_lifeup_omega_instruction(cpu, address);
    return execute_battle_actions_healing_alpha_instruction(cpu, address);
}
bool execute_shared_page_c29b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29B23) return execute_battle_actions_healing_alpha_instruction(cpu, address);
    if (address < 0xC29BD5) return execute_battle_actions_healing_beta_instruction(cpu, address);
    return execute_battle_actions_healing_gamma_instruction(cpu, address);
}
bool execute_shared_page_c29c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29C61) return execute_battle_actions_healing_gamma_instruction(cpu, address);
    if (address < 0xC29C85) return execute_battle_actions_healing_omega_instruction(cpu, address);
    if (address < 0xC29CED) return execute_battle_actions_shield_common_instruction(cpu, address);
    return execute_battle_actions_shield_alpha_instruction(cpu, address);
}
bool execute_shared_page_c29d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29D23) return execute_battle_actions_shield_alpha_instruction(cpu, address);
    if (address < 0xC29D2A) return execute_battle_actions_shield_alpha_redirect_instruction(cpu, address);
    if (address < 0xC29D60) return execute_battle_actions_shield_beta_instruction(cpu, address);
    if (address < 0xC29D67) return execute_battle_actions_shield_beta_redirect_instruction(cpu, address);
    if (address < 0xC29D9D) return execute_battle_actions_psi_shield_alpha_instruction(cpu, address);
    if (address < 0xC29DA4) return execute_battle_actions_psi_shield_alpha_redirect_instruction(cpu, address);
    if (address < 0xC29DDA) return execute_battle_actions_psi_shield_beta_instruction(cpu, address);
    if (address < 0xC29DE1) return execute_battle_actions_psi_shield_beta_redirect_instruction(cpu, address);
    return execute_battle_actions_offense_up_alpha_instruction(cpu, address);
}
bool execute_shared_page_c29e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29E28) return execute_battle_actions_offense_up_alpha_instruction(cpu, address);
    if (address < 0xC29E2F) return execute_battle_actions_offense_up_alpha_redirect_instruction(cpu, address);
    if (address < 0xC29EA8) return execute_battle_actions_defense_down_alpha_instruction(cpu, address);
    if (address < 0xC29EAF) return execute_battle_actions_defense_down_alpha_redirect_instruction(cpu, address);
    return execute_battle_actions_hypnosis_alpha_instruction(cpu, address);
}
bool execute_shared_page_c29f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC29F07) return execute_battle_actions_hypnosis_alpha_redirect_copy_instruction(cpu, address);
    if (address < 0xC29F8A) return execute_battle_actions_magnet_alpha_instruction(cpu, address);
    if (address < 0xC29FA7) return execute_battle_actions_magnet_omega_instruction(cpu, address);
    if (address < 0xC29FF8) return execute_battle_actions_paralysis_alpha_instruction(cpu, address);
    if (address < 0xC29FFF) return execute_battle_actions_paralysis_alpha_redirect_instruction(cpu, address);
    return execute_battle_actions_brainshock_alpha_instruction(cpu, address);
}
bool execute_shared_page_c2a0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A050) return execute_battle_actions_brainshock_alpha_instruction(cpu, address);
    if (address < 0xC2A057) return execute_battle_actions_brainshock_alpha_redirect_copy_instruction(cpu, address);
    if (address < 0xC2A068) return execute_battle_actions_hp_recovery_1d4_instruction(cpu, address);
    if (address < 0xC2A078) return execute_battle_actions_hp_recovery_50_instruction(cpu, address);
    if (address < 0xC2A088) return execute_battle_actions_hp_recovery_200_instruction(cpu, address);
    if (address < 0xC2A098) return execute_battle_actions_pp_recovery_20_instruction(cpu, address);
    if (address < 0xC2A0A8) return execute_battle_actions_pp_recovery_80_instruction(cpu, address);
    if (address < 0xC2A0F4) return execute_battle_actions_iq_up_1d4_instruction(cpu, address);
    return execute_battle_actions_guts_up_1d4_instruction(cpu, address);
}
bool execute_shared_page_c2a1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A13C) return execute_battle_actions_guts_up_1d4_instruction(cpu, address);
    if (address < 0xC2A184) return execute_battle_actions_speed_up_1d4_instruction(cpu, address);
    if (address < 0xC2A1D0) return execute_battle_actions_vitality_up_1d4_instruction(cpu, address);
    return execute_battle_actions_luck_up_1d4_instruction(cpu, address);
}
bool execute_shared_page_c2a2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A218) return execute_battle_actions_luck_up_1d4_instruction(cpu, address);
    if (address < 0xC2A228) return execute_battle_actions_hp_recovery_300_instruction(cpu, address);
    return execute_battle_actions_random_stat_up_1d4_instruction(cpu, address);
}
bool execute_shared_page_c2a3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A309) return execute_battle_actions_random_stat_up_1d4_instruction(cpu, address);
    if (address < 0xC2A319) return execute_battle_actions_hp_recovery_10_instruction(cpu, address);
    if (address < 0xC2A329) return execute_battle_actions_hp_recovery_100_instruction(cpu, address);
    if (address < 0xC2A346) return execute_battle_actions_hp_recovery_10000_instruction(cpu, address);
    if (address < 0xC2A37A) return execute_battle_actions_heal_poison_instruction(cpu, address);
    if (address < 0xC2A3CB) return execute_battle_actions_counter_psi_instruction(cpu, address);
    return execute_battle_actions_shield_killer_instruction(cpu, address);
}
bool execute_shared_page_c2a4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A414) return execute_battle_actions_shield_killer_instruction(cpu, address);
    if (address < 0xC2A4B0) return execute_battle_actions_hp_sucker_instruction(cpu, address);
    if (address < 0xC2A4B7) return execute_battle_actions_hungry_hp_sucker_instruction(cpu, address);
    return execute_battle_actions_mummy_wrap_instruction(cpu, address);
}
bool execute_shared_page_c2a5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A523) return execute_battle_actions_mummy_wrap_instruction(cpu, address);
    if (address < 0xC2A57A) return execute_battle_actions_bottle_rocket_common_instruction(cpu, address);
    if (address < 0xC2A583) return execute_battle_actions_bottle_rocket_instruction(cpu, address);
    if (address < 0xC2A58C) return execute_battle_actions_big_bottle_rocket_instruction(cpu, address);
    if (address < 0xC2A595) return execute_battle_actions_multi_bottle_rocket_instruction(cpu, address);
    return execute_battle_actions_handbag_strap_instruction(cpu, address);
}
bool execute_shared_page_c2a6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A601) return execute_battle_actions_handbag_strap_instruction(cpu, address);
    return execute_battle_actions_bomb_common_instruction(cpu, address);
}
bool execute_shared_page_c2a7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A7CB) return execute_battle_actions_bomb_common_instruction(cpu, address);
    if (address < 0xC2A7D4) return execute_battle_actions_bomb_instruction(cpu, address);
    if (address < 0xC2A7DD) return execute_battle_actions_super_bomb_instruction(cpu, address);
    return execute_battle_actions_solidify_2_instruction(cpu, address);
}
bool execute_shared_page_c2a8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A81E) return execute_battle_actions_solidify_2_instruction(cpu, address);
    if (address < 0xC2A850) return execute_battle_actions_yogurt_dispenser_instruction(cpu, address);
    if (address < 0xC2A8B5) return execute_battle_actions_snake_instruction(cpu, address);
    return execute_battle_actions_inflict_solidification_instruction(cpu, address);
}
bool execute_shared_page_c2a9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2A906) return execute_battle_actions_inflict_solidification_instruction(cpu, address);
    if (address < 0xC2A94F) return execute_battle_actions_inflict_poison_instruction(cpu, address);
    if (address < 0xC2A970) return execute_battle_actions_bag_of_dragonite_instruction(cpu, address);
    if (address < 0xC2A9BF) return execute_battle_actions_insect_spray_common_instruction(cpu, address);
    if (address < 0xC2A9C8) return execute_battle_actions_insecticide_spray_instruction(cpu, address);
    if (address < 0xC2A9D1) return execute_battle_actions_xterminator_spray_instruction(cpu, address);
    return execute_battle_actions_rust_promoter_common_instruction(cpu, address);
}
bool execute_shared_page_c2aa(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2AA20) return execute_battle_actions_rust_promoter_common_instruction(cpu, address);
    if (address < 0xC2AA29) return execute_battle_actions_rust_promoter_instruction(cpu, address);
    if (address < 0xC2AA32) return execute_battle_actions_rust_promoter_dx_instruction(cpu, address);
    if (address < 0xC2AA79) return execute_battle_actions_sudden_guts_pill_instruction(cpu, address);
    if (address < 0xC2AAC0) return execute_battle_actions_defense_spray_instruction(cpu, address);
    if (address < 0xC2AAC7) return execute_battle_actions_defense_shower_instruction(cpu, address);
    return execute_battle_boss_battle_check_instruction(cpu, address);
}
bool execute_shared_page_c2ab(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2AB24) return execute_battle_boss_battle_check_instruction(cpu, address);
    if (address < 0xC2ABDE) return execute_battle_actions_teleport_box_instruction(cpu, address);
    if (address < 0xC2ABF2) return execute_battle_actions_pray_subtle_instruction(cpu, address);
    return execute_battle_actions_pray_warm_instruction(cpu, address);
}
bool execute_shared_page_c2ac(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2AC05) return execute_battle_actions_pray_warm_instruction(cpu, address);
    if (address < 0xC2AC1C) return execute_battle_actions_pray_golden_instruction(cpu, address);
    if (address < 0xC2AC2F) return execute_battle_actions_pray_mysterious_instruction(cpu, address);
    if (address < 0xC2AC4D) return execute_battle_actions_pray_rainbow_instruction(cpu, address);
    if (address < 0xC2AC8E) return execute_battle_actions_pray_aroma_instruction(cpu, address);
    if (address < 0xC2ACCF) return execute_battle_actions_pray_rending_sound_instruction(cpu, address);
    return execute_battle_actions_pray_instruction(cpu, address);
}
bool execute_shared_page_c2ae(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2AED3) return execute_battle_actions_pray_instruction(cpu, address);
    return execute_battle_copy_mirror_data_instruction(cpu, address);
}
bool execute_shared_page_c2b0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2B055) return execute_battle_copy_mirror_data_instruction(cpu, address);
    return execute_battle_actions_mirror_instruction(cpu, address);
}
bool execute_shared_page_c2b1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2B126) return execute_battle_actions_mirror_instruction(cpu, address);
    return execute_battle_apply_condiment_instruction(cpu, address);
}
bool execute_shared_page_c2b2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2B232) return execute_battle_apply_condiment_instruction(cpu, address);
    return execute_battle_eat_food_instruction(cpu, address);
}
bool execute_shared_page_c2b5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2B5AD) return execute_battle_eat_food_instruction(cpu, address);
    if (address < 0xC2B5DE) return execute_battle_calc_psi_damage_modifiers_instruction(cpu, address);
    return execute_battle_calc_psi_resistance_modifiers_instruction(cpu, address);
}
bool execute_shared_page_c2b6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2B60F) return execute_battle_calc_psi_resistance_modifiers_instruction(cpu, address);
    if (address < 0xC2B692) return execute_unresolved_c2_c2b66a_instruction(cpu, address);
    return execute_battle_init_enemy_stats_instruction(cpu, address);
}
bool execute_shared_page_c2b8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2B8D9) return execute_battle_init_enemy_stats_instruction(cpu, address);
    return execute_battle_init_player_stats_instruction(cpu, address);
}
bool execute_shared_page_c2ba(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2BA70) return execute_battle_init_player_stats_instruction(cpu, address);
    if (address < 0xC2BAC3) return execute_battle_count_chars_instruction(cpu, address);
    return execute_battle_check_dead_players_instruction(cpu, address);
}
bool execute_shared_page_c2bc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2BC07) return execute_battle_check_dead_players_instruction(cpu, address);
    if (address < 0xC2BC64) return execute_battle_reset_post_battle_stats_instruction(cpu, address);
    if (address < 0xC2BC91) return execute_unresolved_c2_c2bcb9_instruction(cpu, address);
    if (address < 0xC2BCBE) return execute_battle_lose_hp_status_instruction(cpu, address);
    return execute_unresolved_c2_c2bd13_instruction(cpu, address);
}
bool execute_shared_page_c2bd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2BD09) return execute_unresolved_c2_c2bd13_instruction(cpu, address);
    return execute_battle_call_for_help_common_instruction(cpu, address);
}
bool execute_shared_page_c2c0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C0E7) return execute_battle_call_for_help_common_instruction(cpu, address);
    if (address < 0xC2C0F0) return execute_battle_actions_sow_seeds_instruction(cpu, address);
    if (address < 0xC2C0F9) return execute_battle_actions_call_for_help_instruction(cpu, address);
    return execute_battle_actions_rainbow_of_colours_instruction(cpu, address);
}
bool execute_shared_page_c2c1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C168) return execute_battle_actions_rainbow_of_colours_instruction(cpu, address);
    if (address < 0xC2C1CA) return execute_battle_actions_fly_honey_instruction(cpu, address);
    return execute_unresolved_c2_c2c21f_instruction(cpu, address);
}
bool execute_shared_page_c2c2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C2E6) return execute_unresolved_c2_c2c21f_instruction(cpu, address);
    return execute_unresolved_c2_c2c32c_instruction(cpu, address);
}
bool execute_shared_page_c2c3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C334) return execute_unresolved_c2_c2c32c_instruction(cpu, address);
    if (address < 0xC2C39C) return execute_unresolved_c2_c2c37a_instruction(cpu, address);
    if (address < 0xC2C3D9) return execute_battle_giygas_hurt_prayer_instruction(cpu, address);
    return execute_unresolved_c2_c2c41f_instruction(cpu, address);
}
bool execute_shared_page_c2c4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C47A) return execute_unresolved_c2_c2c41f_instruction(cpu, address);
    if (address < 0xC2C4CD) return execute_battle_actions_pokey_speech_1_instruction(cpu, address);
    if (address < 0xC2C4D0) return execute_battle_actions_null12_instruction(cpu, address);
    return execute_battle_actions_pokey_speech_2_instruction(cpu, address);
}
bool execute_shared_page_c2c5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C52C) return execute_battle_actions_pokey_speech_2_instruction(cpu, address);
    if (address < 0xC2C58B) return execute_battle_actions_giygas_prayer_1_instruction(cpu, address);
    if (address < 0xC2C5B4) return execute_battle_actions_giygas_prayer_2_instruction(cpu, address);
    if (address < 0xC2C5DD) return execute_battle_actions_giygas_prayer_3_instruction(cpu, address);
    return execute_battle_actions_giygas_prayer_4_instruction(cpu, address);
}
bool execute_shared_page_c2c6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C606) return execute_battle_actions_giygas_prayer_4_instruction(cpu, address);
    if (address < 0xC2C62F) return execute_battle_actions_giygas_prayer_5_instruction(cpu, address);
    if (address < 0xC2C658) return execute_battle_actions_giygas_prayer_6_instruction(cpu, address);
    if (address < 0xC2C68A) return execute_battle_actions_giygas_prayer_7_instruction(cpu, address);
    if (address < 0xC2C6AA) return execute_battle_actions_giygas_prayer_8_instruction(cpu, address);
    return execute_battle_actions_giygas_prayer_9_instruction(cpu, address);
}
bool execute_shared_page_c2c8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2C882) return execute_battle_actions_giygas_prayer_9_instruction(cpu, address);
    if (address < 0xC2C8E7) return execute_battle_load_enemy_battle_sprites_instruction(cpu, address);
    return execute_miscellaneous_battle_backgrounds_generate_frame_instruction(cpu, address);
}
bool execute_shared_page_c2cf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2CF9F) return execute_miscellaneous_battle_backgrounds_generate_frame_instruction(cpu, address);
    return execute_unresolved_c2_c2cfe5_instruction(cpu, address);
}
bool execute_shared_page_c2d0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2D060) return execute_unresolved_c2_c2cfe5_instruction(cpu, address);
    if (address < 0xC2D0D5) return execute_unresolved_c2_c2d0ac_instruction(cpu, address);
    return execute_battle_load_battlebg_jp_instruction(cpu, address);
}
bool execute_shared_page_c2da(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2DA58) return execute_battle_load_battlebg_jp_instruction(cpu, address);
    if (address < 0xC2DA89) return execute_unresolved_c2_c2dae3_instruction(cpu, address);
    if (address < 0xC2DAB4) return execute_unresolved_c2_c2db14_instruction(cpu, address);
    return execute_unresolved_c2_c2db3f_instruction(cpu, address);
}
bool execute_shared_page_c2dd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2DD84) return execute_unresolved_c2_c2db3f_instruction(cpu, address);
    return execute_unresolved_c2_c2de0f_instruction(cpu, address);
}
bool execute_shared_page_c2de(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2DE0B) return execute_unresolved_c2_c2de0f_instruction(cpu, address);
    if (address < 0xC2DE83) return execute_unresolved_c2_c2de96_instruction(cpu, address);
    return execute_unresolved_c2_c2df2e_instruction(cpu, address);
}
bool execute_shared_page_c2df(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2DFE3) return execute_unresolved_c2_c2df2e_instruction(cpu, address);
    return execute_unresolved_c2_c2e08e_instruction(cpu, address);
}
bool execute_shared_page_c2e0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2E03C) return execute_unresolved_c2_c2e08e_instruction(cpu, address);
    if (address < 0xC2E06B) return execute_unresolved_c2_c2e0e7_instruction(cpu, address);
    return execute_battle_show_psi_animation_jp_instruction(cpu, address);
}
bool execute_shared_page_c2e5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2E5CB) return execute_battle_show_psi_animation_jp_instruction(cpu, address);
    return execute_unresolved_c2_c2e6b3_instruction(cpu, address);
}
bool execute_shared_page_c2e7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2E7DD) return execute_unresolved_c2_c2e6b3_instruction(cpu, address);
    if (address < 0xC2E7F9) return execute_unresolved_c2_c2e8c4_instruction(cpu, address);
    return execute_overworld_battle_swirl_sequence_instruction(cpu, address);
}
bool execute_shared_page_c2e8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2E8E1) return execute_overworld_battle_swirl_sequence_instruction(cpu, address);
    return execute_unresolved_c2_c2e9c8_instruction(cpu, address);
}
bool execute_shared_page_c2e9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2E906) return execute_unresolved_c2_c2e9c8_instruction(cpu, address);
    if (address < 0xC2E92E) return execute_unresolved_c2_c2e9ed_instruction(cpu, address);
    if (address < 0xC2E98D) return execute_unresolved_c2_c2ea15_instruction(cpu, address);
    if (address < 0xC2E9C3) return execute_unresolved_c2_c2ea74_instruction(cpu, address);
    if (address < 0xC2E9E8) return execute_unresolved_c2_c2eaaa_instruction(cpu, address);
    return execute_unresolved_c2_c2eacf_instruction(cpu, address);
}
bool execute_shared_page_c2ea(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2EA03) return execute_unresolved_c2_c2eacf_instruction(cpu, address);
    return execute_battle_load_battle_sprite_instruction(cpu, address);
}
bool execute_shared_page_c2ef(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2EF1A) return execute_unresolved_c2_c2eee7_instruction(cpu, address);
    if (address < 0xC2EF6B) return execute_battle_get_battle_sprite_width_instruction(cpu, address);
    if (address < 0xC2EFBC) return execute_battle_get_battle_sprite_height_instruction(cpu, address);
    if (address < 0xC2EFEE) return execute_unresolved_c2_c2f09f_instruction(cpu, address);
    return execute_unresolved_c2_c2f0d1_instruction(cpu, address);
}
bool execute_shared_page_c2f0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2F03E) return execute_unresolved_c2_c2f0d1_instruction(cpu, address);
    return execute_unresolved_c2_c2f121_instruction(cpu, address);
}
bool execute_shared_page_c2f6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2F63D) return execute_unresolved_c2_c2f121_instruction(cpu, address);
    return execute_battle_render_battle_sprite_row_instruction(cpu, address);
}
bool execute_shared_page_c2f8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2F812) return execute_battle_render_battle_sprite_row_instruction(cpu, address);
    if (address < 0xC2F830) return execute_unresolved_c2_c2f8f9_instruction(cpu, address);
    return execute_unresolved_c2_c2f917_instruction(cpu, address);
}
bool execute_shared_page_c2f9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2F9EB) return execute_unresolved_c2_c2f917_instruction(cpu, address);
    if (address < 0xC2F9F1) return execute_unresolved_c2_c2fad2_instruction(cpu, address);
    if (address < 0xC2F9F7) return execute_unresolved_c2_c2fad8_instruction(cpu, address);
    return execute_unresolved_c2_c2fade_instruction(cpu, address);
}
bool execute_shared_page_c2fa(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2FA4E) return execute_unresolved_c2_c2fade_instruction(cpu, address);
    return execute_unresolved_c2_c2fb35_instruction(cpu, address);
}
bool execute_shared_page_c2fb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2FBBF) return execute_unresolved_c2_c2fb35_instruction(cpu, address);
    return execute_unresolved_c2_c2fca6_instruction(cpu, address);
}
bool execute_shared_page_c2fc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2FCB2) return execute_unresolved_c2_c2fca6_instruction(cpu, address);
    return execute_unresolved_c2_c2fd99_instruction(cpu, address);
}
bool execute_shared_page_c2fe(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC2FE12) return execute_unresolved_c2_c2fd99_instruction(cpu, address);
    if (address < 0xC2FEB3) return execute_unresolved_c2_c2fef9_instruction(cpu, address);
    return execute_unresolved_c2_c2ff9a_instruction(cpu, address);
}
bool execute_shared_page_c301(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC30142) return execute_system_display_antipiracy_screen_instruction(cpu, address);
    return execute_system_display_faulty_gamepak_screen_instruction(cpu, address);
}
bool execute_shared_page_c3e5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3E560) return execute_miscellaneous_get_character_item_instruction(cpu, address);
    if (address < 0xC3E5B7) return execute_miscellaneous_check_item_equipped_instruction(cpu, address);
    return execute_unresolved_c3_c3e9f7_instruction(cpu, address);
}
bool execute_shared_page_c3e6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3E690) return execute_unresolved_c3_c3e9f7_instruction(cpu, address);
    if (address < 0xC3E6DC) return execute_unresolved_c3_c3ead0_instruction(cpu, address);
    return execute_unresolved_c3_c3eb1c_instruction(cpu, address);
}
bool execute_shared_page_c3e7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3E790) return execute_unresolved_c3_c3eb1c_instruction(cpu, address);
    if (address < 0xC3E7E5) return execute_unresolved_c3_c3ebca_instruction(cpu, address);
    return execute_unresolved_c3_c3ec1f_instruction(cpu, address);
}
bool execute_shared_page_c3e8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3E851) return execute_unresolved_c3_c3ec1f_instruction(cpu, address);
    if (address < 0xC3E8F2) return execute_unresolved_c3_c3ec8b_instruction(cpu, address);
    return execute_unresolved_c3_c3ed2c_instruction(cpu, address);
}
bool execute_shared_page_c3e9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3E95E) return execute_unresolved_c3_c3ed2c_instruction(cpu, address);
    if (address < 0xC3E9DA) return execute_unresolved_c3_c3ed98_instruction(cpu, address);
    return execute_unresolved_c3_c3ee14_instruction(cpu, address);
}
bool execute_shared_page_c3ea(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3EA14) return execute_unresolved_c3_c3ee14_instruction(cpu, address);
    if (address < 0xC3EA41) return execute_unresolved_c3_c3ee4d_instruction(cpu, address);
    if (address < 0xC3EAEA) return execute_unresolved_c3_c3ee7a_instruction(cpu, address);
    return execute_unresolved_miscellaneous_null_c3ef23_instruction(cpu, address);
}
bool execute_shared_page_c3ed(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3EDCF) return execute_unresolved_c3_c3f1ec_instruction(cpu, address);
    return execute_unresolved_ef_ef027d_instruction(cpu, address);
}
bool execute_shared_page_c3ee(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3EE16) return execute_unresolved_ef_ef027d_instruction(cpu, address);
    if (address < 0xC3EE70) return execute_unresolved_ef_ef02c4_instruction(cpu, address);
    return execute_unresolved_ef_ef031e_instruction(cpu, address);
}
bool execute_shared_page_c3f1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3F1C2) return execute_unresolved_c3_c3f5f9_instruction(cpu, address);
    return execute_unresolved_c3_c3f67d_instruction(cpu, address);
}
bool execute_shared_page_c3f2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3F24A) return execute_unresolved_c3_c3f67d_instruction(cpu, address);
    return execute_unresolved_c3_c3f705_instruction(cpu, address);
}
bool execute_shared_page_c3f3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3F340) return execute_unresolved_c3_c3f705_instruction(cpu, address);
    return execute_unresolved_c3_c3f7fb_instruction(cpu, address);
}
bool execute_shared_page_c3f6(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC3F60E) return execute_unresolved_c3_c3f981_instruction(cpu, address);
    if (address < 0xC3F64E) return execute_unresolved_c3_c3fac9_instruction(cpu, address);
    return execute_unresolved_c3_c3fb09_instruction(cpu, address);
}
bool execute_shared_page_c400(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC40009) return execute_unresolved_c4_c40000_instruction(cpu, address);
    if (address < 0xC40015) return execute_unresolved_c4_c40009_instruction(cpu, address);
    if (address < 0xC40023) return execute_unresolved_c4_c40015_instruction(cpu, address);
    return execute_unresolved_c4_c40023_instruction(cpu, address);
}
bool execute_shared_page_c40a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC40AC1) return execute_unresolved_c4_c40b51_instruction(cpu, address);
    return execute_unresolved_c4_c40b75_instruction(cpu, address);
}
bool execute_shared_page_c41d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC41D02) return execute_system_decompression_instruction(cpu, address);
    return execute_unresolved_c4_c41db6_instruction(cpu, address);
}
bool execute_shared_page_c41e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC41E35) return execute_unresolved_c4_c41db6_instruction(cpu, address);
    if (address < 0xC41E40) return execute_unresolved_c4_c41ee9_instruction(cpu, address);
    if (address < 0xC41E4B) return execute_unresolved_c4_c41ef4_instruction(cpu, address);
    return execute_unresolved_c4_c41eff_instruction(cpu, address);
}
bool execute_shared_page_c41f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC41F4B) return execute_unresolved_c4_c41eff_instruction(cpu, address);
    return execute_unresolved_c4_c41fff_instruction(cpu, address);
}
bool execute_shared_page_c423(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC42348) return execute_unresolved_c4_c423dc_instruction(cpu, address);
    if (address < 0xC42377) return execute_unresolved_c4_c4240a_instruction(cpu, address);
    if (address < 0xC4239B) return execute_unresolved_c4_c42439_instruction(cpu, address);
    if (address < 0xC423C8) return execute_unresolved_c4_c4245d_instruction(cpu, address);
    if (address < 0xC423D8) return execute_unresolved_c4_c4248a_instruction(cpu, address);
    return execute_unresolved_c4_c4249a_instruction(cpu, address);
}
bool execute_shared_page_c424(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4240F) return execute_unresolved_c4_c4249a_instruction(cpu, address);
    if (address < 0xC42447) return execute_unresolved_c4_c424d1_instruction(cpu, address);
    if (address < 0xC42480) return execute_unresolved_c4_c42509_instruction(cpu, address);
    if (address < 0xC424A7) return execute_unresolved_c4_c42542_instruction(cpu, address);
    if (address < 0xC424B2) return execute_unresolved_c4_c42569_instruction(cpu, address);
    if (address < 0xC424BD) return execute_unresolved_c4_c42574_instruction(cpu, address);
    if (address < 0xC424CA) return execute_unresolved_c4_c4257f_instruction(cpu, address);
    return execute_unresolved_c4_c4258c_instruction(cpu, address);
}
bool execute_shared_page_c425(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4250A) return execute_unresolved_c4_c4258c_instruction(cpu, address);
    if (address < 0xC42531) return execute_unresolved_c4_c425cc_instruction(cpu, address);
    if (address < 0xC4253B) return execute_unresolved_c4_c425f3_instruction(cpu, address);
    if (address < 0xC42562) return execute_unresolved_c4_c425fd_instruction(cpu, address);
    if (address < 0xC4256F) return execute_unresolved_c4_c42624_instruction(cpu, address);
    if (address < 0xC425C8) return execute_unresolved_c4_c42631_instruction(cpu, address);
    return execute_unresolved_c4_c4268a_instruction(cpu, address);
}
bool execute_shared_page_c426(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC42605) return execute_unresolved_c4_c4268a_instruction(cpu, address);
    if (address < 0xC4262B) return execute_unresolved_c4_c426c7_instruction(cpu, address);
    return execute_unresolved_c4_c426ed_instruction(cpu, address);
}
bool execute_shared_page_c427(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC427C2) return execute_unresolved_c4_c4283f_instruction(cpu, address);
    return execute_unresolved_c4_c42884_instruction(cpu, address);
}
bool execute_shared_page_c428(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4280F) return execute_unresolved_c4_c42884_instruction(cpu, address);
    if (address < 0xC4283A) return execute_unresolved_c4_c428d1_instruction(cpu, address);
    if (address < 0xC428A3) return execute_unresolved_c4_c428fc_instruction(cpu, address);
    if (address < 0xC428EC) return execute_unresolved_c4_c42965_instruction(cpu, address);
    return execute_unresolved_c4_c429ae_instruction(cpu, address);
}
bool execute_shared_page_c429(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC42926) return execute_unresolved_c4_c429ae_instruction(cpu, address);
    return execute_unresolved_c4_c429e8_instruction(cpu, address);
}
bool execute_shared_page_c430(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43090) return execute_unresolved_c4_c432b1_instruction(cpu, address);
    if (address < 0xC430BD) return execute_unresolved_c4_c43317_instruction(cpu, address);
    if (address < 0xC430C3) return execute_unresolved_c4_c43344_instruction(cpu, address);
    return execute_unresolved_c4_c4334a_instruction(cpu, address);
}
bool execute_shared_page_c431(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC431B7) return execute_unresolved_c4_c4334a_instruction(cpu, address);
    return execute_unresolved_c4_c4343e_instruction(cpu, address);
}
bool execute_shared_page_c432(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC432EA) return execute_unresolved_c4_c4343e_instruction(cpu, address);
    return execute_unresolved_c4_c43568_instruction(cpu, address);
}
bool execute_shared_page_c434(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43479) return execute_miscellaneous_find_item_in_inventory_instruction(cpu, address);
    if (address < 0xC434DE) return execute_miscellaneous_find_item_in_inventory2_instruction(cpu, address);
    return execute_miscellaneous_find_inventory_space_instruction(cpu, address);
}
bool execute_shared_page_c435(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43525) return execute_miscellaneous_find_inventory_space_instruction(cpu, address);
    if (address < 0xC4357B) return execute_miscellaneous_find_inventory_space2_instruction(cpu, address);
    if (address < 0xC435C8) return execute_miscellaneous_change_equipped_weapon_instruction(cpu, address);
    return execute_miscellaneous_change_equipped_body_instruction(cpu, address);
}
bool execute_shared_page_c436(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43613) return execute_miscellaneous_change_equipped_body_instruction(cpu, address);
    if (address < 0xC4365E) return execute_miscellaneous_change_equipped_arms_instruction(cpu, address);
    if (address < 0xC436AD) return execute_miscellaneous_change_equipped_other_instruction(cpu, address);
    if (address < 0xC436FC) return execute_miscellaneous_check_status_group_instruction(cpu, address);
    return execute_miscellaneous_inflict_status_nonbattle_instruction(cpu, address);
}
bool execute_shared_page_c437(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43779) return execute_miscellaneous_inflict_status_nonbattle_instruction(cpu, address);
    return execute_miscellaneous_get_required_exp_instruction(cpu, address);
}
bool execute_shared_page_c43b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43B2F) return execute_unresolved_c4_c45c90_instruction(cpu, address);
    if (address < 0xC43BE8) return execute_unresolved_c4_c45ddd_instruction(cpu, address);
    return execute_unresolved_c4_c45e96_instruction(cpu, address);
}
bool execute_shared_page_c43c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43C1C) return execute_unresolved_c4_c45e96_instruction(cpu, address);
    if (address < 0xC43CC9) return execute_miscellaneous_check_if_psi_known_instruction(cpu, address);
    if (address < 0xC43CF6) return execute_system_math_rand_mod_instruction(cpu, address);
    return execute_overworld_get_direction_to_instruction(cpu, address);
}
bool execute_shared_page_c43d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43D76) return execute_overworld_get_direction_to_instruction(cpu, address);
    if (address < 0xC43DA8) return execute_unresolved_c4_c46028_instruction(cpu, address);
    if (address < 0xC43DDA) return execute_unresolved_c4_c4605a_instruction(cpu, address);
    return execute_unresolved_c4_c4608c_jp_instruction(cpu, address);
}
bool execute_shared_page_c43e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43E2E) return execute_unresolved_c4_c4608c_jp_instruction(cpu, address);
    if (address < 0xC43E85) return execute_unresolved_c4_c460ce_instruction(cpu, address);
    if (address < 0xC43EDC) return execute_unresolved_c4_c46125_instruction(cpu, address);
    return execute_unresolved_c4_c4617c_instruction(cpu, address);
}
bool execute_shared_page_c43f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC43F2C) return execute_unresolved_c4_c4617c_instruction(cpu, address);
    if (address < 0xC43F7C) return execute_unresolved_c4_c461cc_instruction(cpu, address);
    if (address < 0xC43FB7) return execute_unresolved_c4_c4621c_instruction(cpu, address);
    return execute_unresolved_c4_c46257_jp_instruction(cpu, address);
}
bool execute_shared_page_c440(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4400A) return execute_unresolved_c4_c46257_jp_instruction(cpu, address);
    if (address < 0xC44025) return execute_unresolved_c4_c462ae_instruction(cpu, address);
    if (address < 0xC44040) return execute_unresolved_c4_c462c9_instruction(cpu, address);
    if (address < 0xC4405B) return execute_unresolved_c4_c462e4_instruction(cpu, address);
    if (address < 0xC4408D) return execute_unresolved_c4_c462ff_instruction(cpu, address);
    if (address < 0xC440BF) return execute_unresolved_c4_c46331_instruction(cpu, address);
    if (address < 0xC440F3) return execute_unresolved_c4_c46363_instruction(cpu, address);
    return execute_unresolved_c4_c46397_instruction(cpu, address);
}
bool execute_shared_page_c441(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4415A) return execute_unresolved_c4_c46397_instruction(cpu, address);
    if (address < 0xC441C4) return execute_unresolved_c4_c463f4_instruction(cpu, address);
    return execute_unresolved_c4_c4645a_instruction(cpu, address);
}
bool execute_shared_page_c442(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44223) return execute_unresolved_c4_c4645a_instruction(cpu, address);
    if (address < 0xC44275) return execute_overworld_create_prepared_entity_npc_instruction(cpu, address);
    if (address < 0xC442A2) return execute_overworld_create_prepared_entity_sprite_instruction(cpu, address);
    if (address < 0xC442CC) return execute_unresolved_c4_c46534_instruction(cpu, address);
    if (address < 0xC442E7) return execute_unresolved_c4_c4655e_instruction(cpu, address);
    return execute_unresolved_c4_c46579_instruction(cpu, address);
}
bool execute_shared_page_c443(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44302) return execute_unresolved_c4_c46579_instruction(cpu, address);
    if (address < 0xC4436D) return execute_unresolved_c4_c46594_instruction(cpu, address);
    if (address < 0xC44388) return execute_unresolved_c4_c465fb_instruction(cpu, address);
    if (address < 0xC443A3) return execute_unresolved_c4_c46616_instruction(cpu, address);
    return execute_unresolved_c4_c46631_instruction(cpu, address);
}
bool execute_shared_page_c444(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4440E) return execute_unresolved_c4_c46631_instruction(cpu, address);
    if (address < 0xC4441E) return execute_unresolved_c4_c46698_instruction(cpu, address);
    if (address < 0xC4442E) return execute_unresolved_c4_c466a8_instruction(cpu, address);
    if (address < 0xC44437) return execute_unresolved_c4_c466b8_instruction(cpu, address);
    if (address < 0xC44466) return execute_unresolved_c4_c466c1_instruction(cpu, address);
    if (address < 0xC44488) return execute_unresolved_c4_c466f0_instruction(cpu, address);
    if (address < 0xC444D6) return execute_unresolved_c4_c46712_instruction(cpu, address);
    return execute_unresolved_c4_c4675c_instruction(cpu, address);
}
bool execute_shared_page_c445(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44536) return execute_unresolved_c4_c4675c_instruction(cpu, address);
    if (address < 0xC44544) return execute_unresolved_c4_c467b4_instruction(cpu, address);
    if (address < 0xC44568) return execute_unresolved_c4_c467c2_instruction(cpu, address);
    if (address < 0xC4459C) return execute_unresolved_c4_c467e6_instruction(cpu, address);
    return execute_unresolved_c4_c4681a_instruction(cpu, address);
}
bool execute_shared_page_c446(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44603) return execute_unresolved_c4_c4681a_instruction(cpu, address);
    if (address < 0xC4462B) return execute_unresolved_c4_c46881_instruction(cpu, address);
    if (address < 0xC44631) return execute_unresolved_c4_c468a9_instruction(cpu, address);
    if (address < 0xC44658) return execute_unresolved_c4_c468b5_instruction(cpu, address);
    if (address < 0xC4467F) return execute_unresolved_c4_c468dc_instruction(cpu, address);
    if (address < 0xC44690) return execute_unresolved_c4_c46903_instruction(cpu, address);
    if (address < 0xC446D3) return execute_unresolved_c4_c46914_instruction(cpu, address);
    return execute_unresolved_c4_c46957_instruction(cpu, address);
}
bool execute_shared_page_c447(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4476D) return execute_unresolved_c4_c46984_instruction(cpu, address);
    if (address < 0xC447EA) return execute_unresolved_c4_c469f1_instruction(cpu, address);
    return execute_unresolved_c4_c46a6e_instruction(cpu, address);
}
bool execute_shared_page_c448(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4481F) return execute_unresolved_c4_c46a9a_instruction(cpu, address);
    if (address < 0xC44828) return execute_unresolved_c4_c46aa3_instruction(cpu, address);
    if (address < 0xC44857) return execute_unresolved_c4_c46aac_instruction(cpu, address);
    if (address < 0xC44886) return execute_unresolved_c4_c46adb_instruction(cpu, address);
    if (address < 0xC448A9) return execute_unresolved_c4_c46b0a_instruction(cpu, address);
    if (address < 0xC448B3) return execute_unresolved_c4_c46b2d_instruction(cpu, address);
    if (address < 0xC448CD) return execute_unresolved_c4_c46b37_instruction(cpu, address);
    if (address < 0xC448E1) return execute_unresolved_c4_c46b51_instruction(cpu, address);
    if (address < 0xC448F5) return execute_unresolved_c4_c46b65_instruction(cpu, address);
    return execute_unresolved_c4_c46b79_instruction(cpu, address);
}
bool execute_shared_page_c449(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44909) return execute_unresolved_c4_c46b79_instruction(cpu, address);
    if (address < 0xC44937) return execute_unresolved_c4_c46b8d_instruction(cpu, address);
    if (address < 0xC44965) return execute_unresolved_c4_c46bbb_instruction(cpu, address);
    if (address < 0xC449C9) return execute_overworld_get_position_of_party_member_instruction(cpu, address);
    if (address < 0xC449E2) return execute_unresolved_c4_c46c45_instruction(cpu, address);
    return execute_unresolved_c4_c46c5e_instruction(cpu, address);
}
bool execute_shared_page_c44a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44A0B) return execute_unresolved_c4_c46c5e_instruction(cpu, address);
    if (address < 0xC44A1F) return execute_unresolved_c4_c46c87_instruction(cpu, address);
    if (address < 0xC44A4B) return execute_unresolved_c4_c46c9b_instruction(cpu, address);
    if (address < 0xC44A79) return execute_unresolved_c4_c46cc7_instruction(cpu, address);
    if (address < 0xC44AA7) return execute_unresolved_c4_c46cf5_instruction(cpu, address);
    if (address < 0xC44ACF) return execute_unresolved_c4_c46d23_instruction(cpu, address);
    return execute_unresolved_c4_c46d4b_instruction(cpu, address);
}
bool execute_shared_page_c44b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44B31) return execute_unresolved_c4_c46d4b_instruction(cpu, address);
    if (address < 0xC44B69) return execute_overworld_prepare_new_entity_at_existing_entity_location_instruction(cpu, address);
    if (address < 0xC44BBB) return execute_overworld_prepare_new_entity_at_teleport_destination_instruction(cpu, address);
    if (address < 0xC44BCA) return execute_overworld_prepare_new_entity_instruction(cpu, address);
    if (address < 0xC44BD3) return execute_unresolved_c4_c46e46_instruction(cpu, address);
    if (address < 0xC44BF8) return execute_unresolved_c4_c46e4f_instruction(cpu, address);
    return execute_overworld_actionscript_test_player_in_area_instruction(cpu, address);
}
bool execute_shared_page_c44c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44C7C) return execute_overworld_actionscript_test_player_in_area_instruction(cpu, address);
    return execute_unresolved_c4_c46ef8_instruction(cpu, address);
}
bool execute_shared_page_c44d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44DC8) return execute_unresolved_c4_c46f7c_instruction(cpu, address);
    return execute_unresolved_c4_c47044_instruction(cpu, address);
}
bool execute_shared_page_c44e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44EC7) return execute_unresolved_c4_c47044_instruction(cpu, address);
    return execute_unresolved_c4_c47143_instruction(cpu, address);
}
bool execute_shared_page_c44f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC44FA9) return execute_unresolved_c4_c47143_instruction(cpu, address);
    if (address < 0xC44FED) return execute_unresolved_c4_c47225_instruction(cpu, address);
    return execute_unresolved_c4_c47269_instruction(cpu, address);
}
bool execute_shared_page_c450(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4502C) return execute_unresolved_c4_c47269_instruction(cpu, address);
    if (address < 0xC45092) return execute_unresolved_c4_c472a8_instruction(cpu, address);
    if (address < 0xC450B7) return execute_unresolved_c4_c4730e_instruction(cpu, address);
    if (address < 0xC450C0) return execute_unresolved_c4_c47333_instruction(cpu, address);
    if (address < 0xC450D0) return execute_unresolved_c4_c4733c_instruction(cpu, address);
    if (address < 0xC450ED) return execute_unresolved_c4_c4734c_instruction(cpu, address);
    if (address < 0xC450F4) return execute_unresolved_c4_c47369_instruction(cpu, address);
    return execute_system_load_background_animation_instruction(cpu, address);
}
bool execute_shared_page_c451(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC45136) return execute_system_load_background_animation_instruction(cpu, address);
    if (address < 0xC45154) return execute_unresolved_c4_c473b2_instruction(cpu, address);
    if (address < 0xC451EF) return execute_unresolved_c4_c473d0_instruction(cpu, address);
    return execute_unresolved_c4_c4746b_instruction(cpu, address);
}
bool execute_shared_page_c452(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4521D) return execute_unresolved_c4_c4746b_instruction(cpu, address);
    if (address < 0xC4522C) return execute_unresolved_c4_c47499_instruction(cpu, address);
    if (address < 0xC45285) return execute_unresolved_c4_c474a8_instruction(cpu, address);
    return execute_unresolved_c4_c47501_instruction(cpu, address);
}
bool execute_shared_page_c454(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC45429) return execute_unresolved_c4_c47501_instruction(cpu, address);
    if (address < 0xC45489) return execute_unresolved_c4_c476a5_instruction(cpu, address);
    if (address < 0xC454E9) return execute_unresolved_c4_c47705_instruction(cpu, address);
    return execute_unresolved_c4_c47765_instruction(cpu, address);
}
bool execute_shared_page_c455(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC455EA) return execute_unresolved_c4_c47765_instruction(cpu, address);
    return execute_unresolved_c4_c47866_instruction(cpu, address);
}
bool execute_shared_page_c456(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC45622) return execute_unresolved_c4_c47866_instruction(cpu, address);
    if (address < 0xC456B4) return execute_unresolved_c4_c4789e_instruction(cpu, address);
    return execute_unresolved_c4_c47930_jp_instruction(cpu, address);
}
bool execute_shared_page_c457(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4576D) return execute_unresolved_c4_c47930_jp_instruction(cpu, address);
    if (address < 0xC457AB) return execute_unresolved_c4_c479e9_instruction(cpu, address);
    if (address < 0xC457EF) return execute_unresolved_c4_c47a27_instruction(cpu, address);
    return execute_unresolved_c4_c47a6b_instruction(cpu, address);
}
bool execute_shared_page_c458(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC45822) return execute_unresolved_c4_c47a6b_instruction(cpu, address);
    if (address < 0xC458DD) return execute_unresolved_c4_c47a9e_instruction(cpu, address);
    return execute_unresolved_c4_c47b77_jp_instruction(cpu, address);
}
bool execute_shared_page_c459(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC459AB) return execute_unresolved_c4_c47b77_jp_instruction(cpu, address);
    return execute_system_load_window_gfx_jp_instruction(cpu, address);
}
bool execute_shared_page_c45c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC45C1A) return execute_system_load_window_gfx_jp_instruction(cpu, address);
    if (address < 0xC45CA2) return execute_unresolved_c4_c47f87_jp_instruction(cpu, address);
    return execute_text_undraw_flyover_text_instruction(cpu, address);
}
bool execute_shared_page_c45e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC45EB7) return execute_unresolved_c4_c4810e_instruction(cpu, address);
    return execute_unresolved_c4_c4880c_jp_instruction(cpu, address);
}
bool execute_shared_page_c460(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC460C2) return execute_unresolved_c4_c4880c_jp_instruction(cpu, address);
    return execute_unresolved_c4_c48a6d_jp_instruction(cpu, address);
}
bool execute_shared_page_c461(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4616D) return execute_unresolved_c4_c48a6d_jp_instruction(cpu, address);
    if (address < 0xC4617C) return execute_unresolved_c4_c48b2c_instruction(cpu, address);
    return execute_overworld_actionscript_make_party_look_at_active_entity_instruction(cpu, address);
}
bool execute_shared_page_c462(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46224) return execute_overworld_actionscript_make_party_look_at_active_entity_instruction(cpu, address);
    if (address < 0xC4622B) return execute_overworld_actionscript_animated_background_callback_instruction(cpu, address);
    if (address < 0xC4624C) return execute_overworld_actionscript_simple_screen_position_callback_instruction(cpu, address);
    if (address < 0xC46275) return execute_overworld_actionscript_simple_screen_position_callback_offset_instruction(cpu, address);
    if (address < 0xC46288) return execute_overworld_actionscript_centre_screen_on_entity_callback_instruction(cpu, address);
    if (address < 0xC462B3) return execute_overworld_actionscript_centre_screen_on_entity_callback_offset_instruction(cpu, address);
    if (address < 0xC462E1) return execute_unresolved_c4_c48c69_instruction(cpu, address);
    return execute_unresolved_c4_c48c97_instruction(cpu, address);
}
bool execute_shared_page_c463(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC463A2) return execute_unresolved_c4_c48c97_instruction(cpu, address);
    return execute_unresolved_c4_c48d58_jp_instruction(cpu, address);
}
bool execute_shared_page_c464(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC464B5) return execute_unresolved_c4_c48d58_jp_instruction(cpu, address);
    if (address < 0xC464DF) return execute_unresolved_c4_c48e6b_instruction(cpu, address);
    return execute_unresolved_c4_c48e95_instruction(cpu, address);
}
bool execute_shared_page_c465(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46518) return execute_unresolved_c4_c48e95_instruction(cpu, address);
    if (address < 0xC46535) return execute_overworld_is_valid_item_transformation_instruction(cpu, address);
    if (address < 0xC465E2) return execute_overworld_initialize_item_transformation_instruction(cpu, address);
    return execute_unresolved_c4_c48f98_instruction(cpu, address);
}
bool execute_shared_page_c466(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4660E) return execute_unresolved_c4_c48f98_instruction(cpu, address);
    return execute_overworld_process_item_transformations_instruction(cpu, address);
}
bool execute_shared_page_c467(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46738) return execute_overworld_process_item_transformations_instruction(cpu, address);
    return execute_overworld_get_distance_to_magic_truffle_instruction(cpu, address);
}
bool execute_shared_page_c468(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46838) return execute_overworld_get_distance_to_magic_truffle_instruction(cpu, address);
    if (address < 0xC46852) return execute_system_get_colour_fade_slope_instruction(cpu, address);
    return execute_overworld_initialize_map_palette_fade_instruction(cpu, address);
}
bool execute_shared_page_c469(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4691C) return execute_overworld_initialize_map_palette_fade_instruction(cpu, address);
    if (address < 0xC469E6) return execute_unresolved_c4_c492d2_instruction(cpu, address);
    return execute_unresolved_c4_c4939c_instruction(cpu, address);
}
bool execute_shared_page_c46a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46AE0) return execute_unresolved_c4_c4939c_instruction(cpu, address);
    return execute_unresolved_c4_c49496_instruction(cpu, address);
}
bool execute_shared_page_c46b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46B96) return execute_unresolved_c4_c49496_instruction(cpu, address);
    if (address < 0xC46BD8) return execute_unresolved_c4_c4954c_instruction(cpu, address);
    return execute_unresolved_c4_c4958e_instruction(cpu, address);
}
bool execute_shared_page_c46d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46D31) return execute_unresolved_c4_c4958e_instruction(cpu, address);
    if (address < 0xC46D3A) return execute_unresolved_c4_c496e7_instruction(cpu, address);
    if (address < 0xC46D43) return execute_unresolved_c4_c496f0_instruction(cpu, address);
    if (address < 0xC46D8A) return execute_unresolved_c4_c496f9_instruction(cpu, address);
    if (address < 0xC46DD8) return execute_unresolved_c4_c49740_instruction(cpu, address);
    return execute_unresolved_c4_c4978e_instruction(cpu, address);
}
bool execute_shared_page_c46e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46E0A) return execute_unresolved_c4_c4978e_instruction(cpu, address);
    if (address < 0xC46E69) return execute_unresolved_c4_c497c0_instruction(cpu, address);
    if (address < 0xC46E8B) return execute_unresolved_c4_c4981f_instruction(cpu, address);
    if (address < 0xC46E95) return execute_unresolved_c4_c49841_instruction(cpu, address);
    if (address < 0xC46EA0) return execute_unresolved_c4_c49a4b_instruction(cpu, address);
    return execute_unresolved_c4_c49a56_jp_instruction(cpu, address);
}
bool execute_shared_page_c46f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC46FB2) return execute_unresolved_c4_c49a56_jp_instruction(cpu, address);
    return execute_unresolved_c4_c49b6e_jp_instruction(cpu, address);
}
bool execute_shared_page_c470(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC47095) return execute_unresolved_c4_c49b6e_jp_instruction(cpu, address);
    return execute_unresolved_c4_c49c56_instruction(cpu, address);
}
bool execute_shared_page_c471(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4713D) return execute_unresolved_c4_c49c56_instruction(cpu, address);
    if (address < 0xC47169) return execute_unresolved_c4_c49ca8_jp_instruction(cpu, address);
    if (address < 0xC471C9) return execute_unresolved_c4_c49cc3_jp_instruction(cpu, address);
    if (address < 0xC471F2) return execute_unresolved_c4_c49d16_jp_instruction(cpu, address);
    return execute_unresolved_c4_c49d1e_instruction(cpu, address);
}
bool execute_shared_page_c472(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4723E) return execute_unresolved_c4_c49d1e_instruction(cpu, address);
    return execute_text_coffee_tea_scene_jp_instruction(cpu, address);
}
bool execute_shared_page_c473(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4739C) return execute_text_coffee_tea_scene_jp_instruction(cpu, address);
    return execute_unresolved_c4_c49ec4_jp_instruction(cpu, address);
}
bool execute_shared_page_c475(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC475C5) return execute_battle_autohealing_instruction(cpu, address);
    return execute_battle_autolifeup_instruction(cpu, address);
}
bool execute_shared_page_c476(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC47662) return execute_battle_autolifeup_instruction(cpu, address);
    if (address < 0xC47695) return execute_battle_check_if_valid_target_instruction(cpu, address);
    return execute_unresolved_c4_c4a228_instruction(cpu, address);
}
bool execute_shared_page_c47c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC47C19) return execute_unresolved_c4_c4a67e_instruction(cpu, address);
    return execute_unresolved_c4_c4a7b0_instruction(cpu, address);
}
bool execute_shared_page_c486(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC48625) return execute_overworld_use_sound_stone_instruction(cpu, address);
    if (address < 0xC486D8) return execute_unresolved_c4_c4b1b8_instruction(cpu, address);
    return execute_overworld_load_overlay_sprites_instruction(cpu, address);
}
bool execute_shared_page_c487(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC48796) return execute_overworld_load_overlay_sprites_instruction(cpu, address);
    return execute_unresolved_c4_c4b329_instruction(cpu, address);
}
bool execute_shared_page_c488(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4883D) return execute_unresolved_c4_c4b329_instruction(cpu, address);
    return execute_text_spawn_floating_sprite_instruction(cpu, address);
}
bool execute_shared_page_c489(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4892B) return execute_text_spawn_floating_sprite_instruction(cpu, address);
    if (address < 0xC4896B) return execute_unresolved_c4_c4b4be_instruction(cpu, address);
    if (address < 0xC48986) return execute_unresolved_c4_c4b4fe_instruction(cpu, address);
    if (address < 0xC48991) return execute_unresolved_c4_c4b519_instruction(cpu, address);
    if (address < 0xC489AC) return execute_unresolved_c4_c4b524_instruction(cpu, address);
    if (address < 0xC489B7) return execute_unresolved_c4_c4b53f_instruction(cpu, address);
    if (address < 0xC489D2) return execute_unresolved_c4_c4b54a_instruction(cpu, address);
    if (address < 0xC489DD) return execute_unresolved_c4_c4b565_instruction(cpu, address);
    if (address < 0xC489EA) return execute_unresolved_c4_c4b570_instruction(cpu, address);
    if (address < 0xC489F4) return execute_unresolved_c4_c4b57d_instruction(cpu, address);
    return execute_unresolved_c4_c4b587_instruction(cpu, address);
}
bool execute_shared_page_c48a(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC48A02) return execute_unresolved_c4_c4b587_instruction(cpu, address);
    if (address < 0xC48A0C) return execute_unresolved_c4_c4b595_instruction(cpu, address);
    return execute_unresolved_c4_c4b59f_instruction(cpu, address);
}
bool execute_shared_page_c48c(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC48C12) return execute_unresolved_c4_c4b59f_instruction(cpu, address);
    if (address < 0xC48CC6) return execute_unresolved_c4_c4b7a5_instruction(cpu, address);
    return execute_unresolved_c4_c4b859_jp_instruction(cpu, address);
}
bool execute_shared_page_c48d(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC48D68) return execute_unresolved_c4_c4b859_jp_instruction(cpu, address);
    return execute_unresolved_c4_c4b923_instruction(cpu, address);
}
bool execute_shared_page_c48f(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC48F3B) return execute_unresolved_c4_c4b923_instruction(cpu, address);
    return execute_unresolved_c4_c4baf6_jp_instruction(cpu, address);
}
bool execute_shared_page_c491(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC491D5) return execute_unresolved_c4_c4baf6_jp_instruction(cpu, address);
    return execute_unresolved_c4_c4bd9a_instruction(cpu, address);
}
bool execute_shared_page_c493(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC493BA) return execute_unresolved_c4_c4bd9a_instruction(cpu, address);
    return execute_unresolved_c4_c4bf7f_instruction(cpu, address);
}
bool execute_shared_page_c497(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC49747) return execute_unresolved_c4_c4c2de_instruction(cpu, address);
    if (address < 0xC497F1) return execute_unresolved_c4_c4c45f_jp_instruction(cpu, address);
    return execute_unresolved_c4_c4c519_instruction(cpu, address);
}
bool execute_shared_page_c498(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4983F) return execute_unresolved_c4_c4c519_instruction(cpu, address);
    if (address < 0xC49867) return execute_text_skippable_pause_instruction(cpu, address);
    if (address < 0xC498E6) return execute_unresolved_c4_c4c58f_instruction(cpu, address);
    return execute_unresolved_c4_c4c60e_instruction(cpu, address);
}
bool execute_shared_page_c499(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC49925) return execute_unresolved_c4_c4c60e_instruction(cpu, address);
    if (address < 0xC499F0) return execute_unresolved_c4_c4c64d_instruction(cpu, address);
    return execute_overworld_spawn_instruction(cpu, address);
}
bool execute_shared_page_c49b(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC49B74) return execute_overworld_spawn_instruction(cpu, address);
    if (address < 0xC49BAB) return execute_unresolved_c4_c4c8a4_instruction(cpu, address);
    if (address < 0xC49BB9) return execute_unresolved_c4_c4c8db_instruction(cpu, address);
    if (address < 0xC49BEA) return execute_unresolved_c4_c4c8e9_instruction(cpu, address);
    return execute_unresolved_c4_c4c91a_instruction(cpu, address);
}
bool execute_shared_page_c49e(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC49E1F) return execute_unresolved_c4_c4c91a_instruction(cpu, address);
    if (address < 0xC49E5F) return execute_unresolved_c4_c4cb4f_instruction(cpu, address);
    if (address < 0xC49EB3) return execute_unresolved_c4_c4cb8f_instruction(cpu, address);
    if (address < 0xC49EFC) return execute_unresolved_c4_c4cbe3_instruction(cpu, address);
    if (address < 0xC49EFF) return execute_unresolved_miscellaneous_null_c4cc2c_instruction(cpu, address);
    return execute_unresolved_c4_c4cc2f_instruction(cpu, address);
}
bool execute_shared_page_c4a0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4A014) return execute_unresolved_c4_c4cc2f_instruction(cpu, address);
    return execute_unresolved_c4_c4cd44_instruction(cpu, address);
}
bool execute_shared_page_c4a1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4A180) return execute_unresolved_c4_c4cd44_instruction(cpu, address);
    if (address < 0xC4A1A8) return execute_unresolved_c4_c4ceb0_instruction(cpu, address);
    return execute_unresolved_c4_c4ced8_instruction(cpu, address);
}
bool execute_shared_page_c4a2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4A2DF) return execute_unresolved_c4_c4ced8_instruction(cpu, address);
    return execute_unresolved_c4_c4d00f_instruction(cpu, address);
}
bool execute_shared_page_c4a3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4A335) return execute_unresolved_c4_c4d00f_instruction(cpu, address);
    return execute_unresolved_c4_c4d065_instruction(cpu, address);
}
bool execute_shared_page_c4a5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4A544) return execute_unresolved_c4_c4d065_instruction(cpu, address);
    if (address < 0xC4A578) return execute_overworld_get_town_map_id_instruction(cpu, address);
    if (address < 0xC4A5C0) return execute_unresolved_c4_c4d2a8_instruction(cpu, address);
    return execute_unresolved_c4_c4d2f0_instruction(cpu, address);
}
bool execute_shared_page_c4a7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4A70F) return execute_unresolved_c4_c4d2f0_instruction(cpu, address);
    return execute_unresolved_c4_c4d43f_instruction(cpu, address);
}
bool execute_shared_page_c4a8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4A823) return execute_unresolved_c4_c4d43f_instruction(cpu, address);
    return execute_overworld_load_town_map_data_instruction(cpu, address);
}
bool execute_shared_page_c4a9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4A951) return execute_overworld_load_town_map_data_instruction(cpu, address);
    return execute_overworld_display_town_map_instruction(cpu, address);
}
bool execute_shared_page_c4aa(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4AA14) return execute_overworld_display_town_map_instruction(cpu, address);
    if (address < 0xC4AAA9) return execute_unresolved_c4_c4d744_instruction(cpu, address);
    return execute_introduction_display_animated_naming_sprite_instruction(cpu, address);
}
bool execute_shared_page_c4ab(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4AB03) return execute_introduction_display_animated_naming_sprite_instruction(cpu, address);
    if (address < 0xC4ABCD) return execute_unresolved_c4_c4d830_instruction(cpu, address);
    return execute_unresolved_c4_c4d8fa_instruction(cpu, address);
}
bool execute_shared_page_c4ac(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4AC5C) return execute_unresolved_c4_c4d8fa_instruction(cpu, address);
    return execute_unresolved_c4_c4d989_jp_instruction(cpu, address);
}
bool execute_shared_page_c4ad(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4ADB2) return execute_unresolved_c4_c4d989_jp_instruction(cpu, address);
    return execute_introduction_init_intro_instruction(cpu, address);
}
bool execute_shared_page_c4af(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4AF07) return execute_introduction_init_intro_instruction(cpu, address);
    if (address < 0xC4AF39) return execute_unresolved_c4_c4dcf6_instruction(cpu, address);
    if (address < 0xC4AFE1) return execute_introduction_decomp_itoi_production_instruction(cpu, address);
    return execute_introduction_decomp_nintendo_presentation_instruction(cpu, address);
}
bool execute_shared_page_c4b0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B0A9) return execute_introduction_decomp_nintendo_presentation_instruction(cpu, address);
    if (address < 0xC4B0E1) return execute_overworld_initialize_your_sanctuary_display_instruction(cpu, address);
    if (address < 0xC4B0FA) return execute_overworld_enable_your_sanctuary_display_instruction(cpu, address);
    return execute_overworld_prepare_your_sanctuary_location_palette_data_instruction(cpu, address);
}
bool execute_shared_page_c4b1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B18E) return execute_overworld_prepare_your_sanctuary_location_palette_data_instruction(cpu, address);
    return execute_overworld_prepare_your_sanctuary_location_tile_arrangement_data_instruction(cpu, address);
}
bool execute_shared_page_c4b2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B29F) return execute_overworld_prepare_your_sanctuary_location_tile_arrangement_data_instruction(cpu, address);
    return execute_overworld_prepare_your_sanctuary_location_tileset_data_instruction(cpu, address);
}
bool execute_shared_page_c4b3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B351) return execute_overworld_prepare_your_sanctuary_location_tileset_data_instruction(cpu, address);
    return execute_overworld_load_your_sanctuary_location_data_instruction(cpu, address);
}
bool execute_shared_page_c4b4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B492) return execute_overworld_load_your_sanctuary_location_data_instruction(cpu, address);
    if (address < 0xC4B4E8) return execute_overworld_load_your_sanctuary_location_instruction(cpu, address);
    return execute_overworld_display_your_sanctuary_location_instruction(cpu, address);
}
bool execute_shared_page_c4b5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B573) return execute_overworld_display_your_sanctuary_location_instruction(cpu, address);
    if (address < 0xC4B5B6) return execute_overworld_test_your_sanctuary_display_instruction(cpu, address);
    return execute_ending_load_cast_scene_jp_instruction(cpu, address);
}
bool execute_shared_page_c4b7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B721) return execute_ending_load_cast_scene_jp_instruction(cpu, address);
    return execute_unresolved_c4_c4b721_jp_instruction(cpu, address);
}
bool execute_shared_page_c4b8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4B8E2) return execute_unresolved_c4_c4b721_jp_instruction(cpu, address);
    return execute_unresolved_c4_c4b8e2_jp_instruction(cpu, address);
}
bool execute_shared_page_c4bb(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4BB37) return execute_unresolved_c4_c4b8e2_jp_instruction(cpu, address);
    if (address < 0xC4BB56) return execute_ending_set_cast_scroll_threshold_instruction(cpu, address);
    if (address < 0xC4BB7B) return execute_ending_check_cast_scroll_threshold_instruction(cpu, address);
    if (address < 0xC4BBE0) return execute_ending_handle_cast_scrolling_instruction(cpu, address);
    return execute_ending_prepare_cast_name_tilemap_jp_instruction(cpu, address);
}
bool execute_shared_page_c4bc(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4BC65) return execute_ending_prepare_cast_name_tilemap_jp_instruction(cpu, address);
    return execute_ending_copy_cast_name_tilemap_jp_instruction(cpu, address);
}
bool execute_shared_page_c4bd(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4BD19) return execute_ending_copy_cast_name_tilemap_jp_instruction(cpu, address);
    if (address < 0xC4BD9D) return execute_ending_print_cast_name_jp_instruction(cpu, address);
    return execute_ending_print_cast_name_party_instruction(cpu, address);
}
bool execute_shared_page_c4be(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4BE0A) return execute_ending_print_cast_name_party_instruction(cpu, address);
    if (address < 0xC4BEC9) return execute_ending_print_cast_name_entity_var0_instruction(cpu, address);
    return execute_ending_upload_special_cast_palette_instruction(cpu, address);
}
bool execute_shared_page_c4bf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4BF08) return execute_ending_upload_special_cast_palette_instruction(cpu, address);
    if (address < 0xC4BF42) return execute_ending_create_entity_at_v01_plus_bg3y_instruction(cpu, address);
    if (address < 0xC4BF69) return execute_ending_is_entity_still_on_cast_screen_instruction(cpu, address);
    if (address < 0xC4BFFE) return execute_ending_play_cast_scene_instruction(cpu, address);
    return execute_ending_enqueue_credits_dma_instruction(cpu, address);
}
bool execute_shared_page_c4c0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4C057) return execute_ending_enqueue_credits_dma_instruction(cpu, address);
    if (address < 0xC4C0B7) return execute_ending_process_credits_dma_queue_instruction(cpu, address);
    return execute_ending_initialize_credits_scene_instruction(cpu, address);
}
bool execute_shared_page_c4c2(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4C2A0) return execute_ending_initialize_credits_scene_instruction(cpu, address);
    return execute_ending_try_rendering_photograph_instruction(cpu, address);
}
bool execute_shared_page_c4c4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4C473) return execute_ending_try_rendering_photograph_instruction(cpu, address);
    if (address < 0xC4C4AF) return execute_ending_count_photo_flags_instruction(cpu, address);
    return execute_ending_slide_credits_photograph_instruction(cpu, address);
}
bool execute_shared_page_c4c5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4C594) return execute_ending_slide_credits_photograph_instruction(cpu, address);
    return execute_ending_play_credits_instruction(cpu, address);
}
bool execute_shared_page_c4c7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4C74C) return execute_ending_play_credits_instruction(cpu, address);
    if (address < 0xC4C75C) return execute_unresolved_ef_ef0c87_instruction(cpu, address);
    if (address < 0xC4C76C) return execute_unresolved_ef_ef0c97_instruction(cpu, address);
    if (address < 0xC4C7B1) return execute_unresolved_ef_ef0ca7_proto_instruction(cpu, address);
    if (address < 0xC4C7D4) return execute_unresolved_ef_ef0d23_instruction(cpu, address);
    return execute_unresolved_ef_ef0d46_instruction(cpu, address);
}
bool execute_shared_page_c4c8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4C801) return execute_unresolved_ef_ef0d46_instruction(cpu, address);
    if (address < 0xC4C81B) return execute_unresolved_ef_ef0d73_instruction(cpu, address);
    if (address < 0xC4C889) return execute_unresolved_ef_ef0d8d_jp_instruction(cpu, address);
    if (address < 0xC4C8F7) return execute_unresolved_ef_ef0dfa_jp_instruction(cpu, address);
    return execute_unresolved_ef_ef0e67_instruction(cpu, address);
}
bool execute_shared_page_c4c9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4C91A) return execute_unresolved_ef_ef0e67_instruction(cpu, address);
    if (address < 0xC4C93D) return execute_unresolved_ef_ef0e8a_instruction(cpu, address);
    if (address < 0xC4C981) return execute_unresolved_ef_ef0ead_instruction(cpu, address);
    return execute_unresolved_ef_ef0ee8_instruction(cpu, address);
}
bool execute_shared_page_c4ca(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4CA02) return execute_unresolved_ef_ef0ee8_instruction(cpu, address);
    if (address < 0xC4CA65) return execute_unresolved_ef_ef0f60_jp_instruction(cpu, address);
    if (address < 0xC4CA80) return execute_unresolved_ef_ef0fdb_instruction(cpu, address);
    return execute_unresolved_ef_ef0ff6_instruction(cpu, address);
}
bool execute_shared_page_c4ce(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4CEF7) return execute_audio_get_audio_bank_instruction(cpu, address);
    return execute_audio_initialize_music_subsystem_instruction(cpu, address);
}
bool execute_shared_page_c4cf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4CF5C) return execute_audio_initialize_music_subsystem_instruction(cpu, address);
    return execute_audio_change_music_instruction(cpu, address);
}
bool execute_shared_page_c4d0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xC4D0B7) return execute_audio_change_music_instruction(cpu, address);
    if (address < 0xC4D0E4) return execute_audio_set_num_channels_instruction(cpu, address);
    return execute_overworld_set_auto_sector_music_changes_instruction(cpu, address);
}
bool execute_shared_page_efbe(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFBEEC) return execute_unresolved_ef_efd56f_instruction(cpu, address);
    return execute_unresolved_ef_efd5d9_jp_instruction(cpu, address);
}
bool execute_shared_page_efbf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFBFDF) return execute_unresolved_ef_efd5d9_jp_instruction(cpu, address);
    return execute_unresolved_ef_efd6d4_instruction(cpu, address);
}
bool execute_shared_page_efc3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFC30D) return execute_unresolved_ef_efd95e_instruction(cpu, address);
    if (address < 0xEFC31F) return execute_unresolved_ef_efd9f3_instruction(cpu, address);
    if (address < 0xEFC3D7) return execute_unresolved_ef_efda05_instruction(cpu, address);
    return execute_unresolved_ef_efdabd_instruction(cpu, address);
}
bool execute_shared_page_efc4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFC43B) return execute_unresolved_ef_efdabd_instruction(cpu, address);
    if (address < 0xEFC4AF) return execute_system_debug_display_menu_options_instruction(cpu, address);
    return execute_system_debug_integer_to_hex_debug_tiles_instruction(cpu, address);
}
bool execute_shared_page_efc5(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFC50A) return execute_system_debug_integer_to_hex_debug_tiles_instruction(cpu, address);
    if (address < 0xEFC583) return execute_system_debug_integer_to_decimal_debug_tiles_instruction(cpu, address);
    if (address < 0xEFC5D6) return execute_system_debug_integer_to_binary_debug_tiles_instruction(cpu, address);
    return execute_system_debug_display_check_position_debug_overlay_instruction(cpu, address);
}
bool execute_shared_page_efc7(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFC734) return execute_system_debug_display_check_position_debug_overlay_instruction(cpu, address);
    return execute_system_debug_display_view_character_debug_overlay_instruction(cpu, address);
}
bool execute_shared_page_efc8(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFC825) return execute_system_debug_display_view_character_debug_overlay_instruction(cpu, address);
    if (address < 0xEFC8DE) return execute_unresolved_ef_efdf0b_instruction(cpu, address);
    return execute_unresolved_ef_efdfc4_instruction(cpu, address);
}
bool execute_shared_page_efc9(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFC996) return execute_unresolved_ef_efdfc4_instruction(cpu, address);
    return execute_unresolved_ef_efe07c_instruction(cpu, address);
}
bool execute_shared_page_efca(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFCA4D) return execute_unresolved_ef_efe07c_instruction(cpu, address);
    if (address < 0xEFCA8F) return execute_unresolved_ef_efe133_instruction(cpu, address);
    return execute_unresolved_ef_efe175_jp_instruction(cpu, address);
}
bool execute_shared_page_efce(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFCE79) return execute_unresolved_ef_efe175_jp_instruction(cpu, address);
    if (address < 0xEFCE9B) return execute_system_debug_load_debug_cursor_graphics_instruction(cpu, address);
    if (address < 0xEFCEF6) return execute_system_debug_handle_cursor_movement_instruction(cpu, address);
    return execute_system_debug_process_command_selection_instruction(cpu, address);
}
bool execute_shared_page_efcf(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFCFAC) return execute_system_debug_process_command_selection_instruction(cpu, address);
    if (address < 0xEFCFF2) return execute_system_debug_load_menu_instruction(cpu, address);
    return execute_unresolved_ef_efe6cf_instruction(cpu, address);
}
bool execute_shared_page_efd0(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFD005) return execute_unresolved_ef_efe6cf_instruction(cpu, address);
    if (address < 0xEFD02B) return execute_unresolved_ef_efe6e2_instruction(cpu, address);
    if (address < 0xEFD069) return execute_unresolved_ef_efe708_instruction(cpu, address);
    if (address < 0xEFD07C) return execute_system_debug_check_view_character_mode_instruction(cpu, address);
    if (address < 0xEFD094) return execute_unresolved_ef_efe759_instruction(cpu, address);
    return execute_unresolved_ef_efe771_instruction(cpu, address);
}
bool execute_shared_page_efd1(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFD196) return execute_unresolved_ef_efe771_instruction(cpu, address);
    if (address < 0xEFD1B8) return execute_unresolved_ef_efe873_instruction(cpu, address);
    if (address < 0xEFD1EA) return execute_unresolved_ef_efe895_instruction(cpu, address);
    return execute_unresolved_ef_efe8c7_jp_instruction(cpu, address);
}
bool execute_shared_page_efd3(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFD34E) return execute_unresolved_ef_efe8c7_jp_instruction(cpu, address);
    if (address < 0xEFD375) return execute_unresolved_ef_efea23_instruction(cpu, address);
    if (address < 0xEFD3C9) return execute_unresolved_ef_efea4a_instruction(cpu, address);
    if (address < 0xEFD3CF) return execute_unresolved_ef_efea9e_instruction(cpu, address);
    if (address < 0xEFD3F3) return execute_unresolved_ef_efeaa4_instruction(cpu, address);
    return execute_unresolved_ef_efeac8_jp_instruction(cpu, address);
}
bool execute_shared_page_efd4(MainCpu65816& cpu, std::uint32_t address) {
    if (address < 0xEFD455) return execute_unresolved_ef_efeac8_jp_instruction(cpu, address);
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
    pages[0x000C] = &execute_overworld_load_map_column_instruction;
    pages[0x000D] = &execute_shared_page_c00d;
    pages[0x000E] = &execute_shared_page_c00e;
    pages[0x000F] = &execute_shared_page_c00f;
    pages[0x0010] = &execute_unresolved_c0_c00fcb_instruction;
    pages[0x0011] = &execute_shared_page_c011;
    pages[0x0012] = &execute_shared_page_c012;
    pages[0x0013] = &execute_shared_page_c013;
    pages[0x0014] = &execute_shared_page_c014;
    pages[0x0015] = &execute_shared_page_c015;
    pages[0x0016] = &execute_overworld_refresh_map_at_position_instruction;
    pages[0x0017] = &execute_shared_page_c017;
    pages[0x0018] = &execute_unresolved_c0_c017ea_instruction;
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
    pages[0x0023] = &execute_unresolved_c0_c0222b_jp_instruction;
    pages[0x0024] = &execute_unresolved_c0_c0222b_jp_instruction;
    pages[0x0025] = &execute_shared_page_c025;
    pages[0x0026] = &execute_shared_page_c026;
    pages[0x0027] = &execute_unresolved_c0_c02668_instruction;
    pages[0x0028] = &execute_unresolved_c0_c02668_instruction;
    pages[0x0029] = &execute_unresolved_c0_c02668_instruction;
    pages[0x002A] = &execute_shared_page_c02a;
    pages[0x002B] = &execute_shared_page_c02b;
    pages[0x002C] = &execute_shared_page_c02c;
    pages[0x002D] = &execute_overworld_velocity_store_instruction;
    pages[0x002E] = &execute_shared_page_c02e;
    pages[0x002F] = &execute_shared_page_c02f;
    pages[0x0030] = &execute_overworld_adjust_position_horizontal_instruction;
    pages[0x0031] = &execute_shared_page_c031;
    pages[0x0032] = &execute_overworld_adjust_position_vertical_instruction;
    pages[0x0033] = &execute_overworld_adjust_position_vertical_instruction;
    pages[0x0034] = &execute_shared_page_c034;
    pages[0x0035] = &execute_unresolved_c0_c032ec_jp_instruction;
    pages[0x0036] = &execute_shared_page_c036;
    pages[0x0037] = &execute_overworld_update_party_jp_instruction;
    pages[0x0038] = &execute_shared_page_c038;
    pages[0x0039] = &execute_unresolved_c0_c0369b_jp_instruction;
    pages[0x003A] = &execute_unresolved_c0_c0369b_jp_instruction;
    pages[0x003B] = &execute_shared_page_c03b;
    pages[0x003C] = &execute_shared_page_c03c;
    pages[0x003D] = &execute_unresolved_c0_c03a94_instruction;
    pages[0x003E] = &execute_shared_page_c03e;
    pages[0x003F] = &execute_shared_page_c03f;
    pages[0x0040] = &execute_shared_page_c040;
    pages[0x0041] = &execute_shared_page_c041;
    pages[0x0042] = &execute_shared_page_c042;
    pages[0x0043] = &execute_shared_page_c043;
    pages[0x0044] = &execute_shared_page_c044;
    pages[0x0045] = &execute_shared_page_c045;
    pages[0x0046] = &execute_shared_page_c046;
    pages[0x0047] = &execute_shared_page_c047;
    pages[0x0048] = &execute_unresolved_c0_c0449b_instruction;
    pages[0x0049] = &execute_shared_page_c049;
    pages[0x004A] = &execute_shared_page_c04a;
    pages[0x004B] = &execute_shared_page_c04b;
    pages[0x004C] = &execute_shared_page_c04c;
    pages[0x004D] = &execute_shared_page_c04d;
    pages[0x004E] = &execute_shared_page_c04e;
    pages[0x004F] = &execute_shared_page_c04f;
    pages[0x0050] = &execute_unresolved_c0_c04d78_instruction;
    pages[0x0051] = &execute_shared_page_c051;
    pages[0x0052] = &execute_shared_page_c052;
    pages[0x0053] = &execute_unresolved_c0_c04ffe_instruction;
    pages[0x0054] = &execute_shared_page_c054;
    pages[0x0055] = &execute_unresolved_c0_c052d4_instruction;
    pages[0x0056] = &execute_shared_page_c056;
    pages[0x0057] = &execute_shared_page_c057;
    pages[0x0058] = &execute_shared_page_c058;
    pages[0x0059] = &execute_shared_page_c059;
    pages[0x005A] = &execute_shared_page_c05a;
    pages[0x005B] = &execute_unresolved_c0_c05890_instruction;
    pages[0x005C] = &execute_shared_page_c05c;
    pages[0x005D] = &execute_shared_page_c05d;
    pages[0x005E] = &execute_unresolved_c0_c05b7b_instruction;
    pages[0x005F] = &execute_shared_page_c05f;
    pages[0x0060] = &execute_shared_page_c060;
    pages[0x0061] = &execute_shared_page_c061;
    pages[0x0062] = &execute_shared_page_c062;
    pages[0x0063] = &execute_shared_page_c063;
    pages[0x0064] = &execute_shared_page_c064;
    pages[0x0065] = &execute_unresolved_c0_c06267_instruction;
    pages[0x0066] = &execute_shared_page_c066;
    pages[0x0067] = &execute_shared_page_c067;
    pages[0x0068] = &execute_shared_page_c068;
    pages[0x0069] = &execute_overworld_screen_transition_instruction;
    pages[0x006A] = &execute_shared_page_c06a;
    pages[0x006B] = &execute_shared_page_c06b;
    pages[0x006C] = &execute_shared_page_c06c;
    pages[0x006D] = &execute_shared_page_c06d;
    pages[0x006E] = &execute_shared_page_c06e;
    pages[0x006F] = &execute_overworld_door_transition_instruction;
    pages[0x0070] = &execute_shared_page_c070;
    pages[0x0071] = &execute_shared_page_c071;
    pages[0x0072] = &execute_shared_page_c072;
    pages[0x0073] = &execute_unresolved_c0_c070cb_instruction;
    pages[0x0074] = &execute_shared_page_c074;
    pages[0x0075] = &execute_shared_page_c075;
    pages[0x0076] = &execute_shared_page_c076;
    pages[0x0077] = &execute_shared_page_c077;
    pages[0x0078] = &execute_shared_page_c078;
    pages[0x0079] = &execute_shared_page_c079;
    pages[0x007A] = &execute_shared_page_c07a;
    pages[0x007B] = &execute_unresolved_c0_c0780f_instruction;
    pages[0x007C] = &execute_shared_page_c07c;
    pages[0x007D] = &execute_shared_page_c07d;
    pages[0x007E] = &execute_shared_page_c07e;
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
    pages[0x00B3] = &execute_system_math_cosine_sine_instruction;
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
    pages[0x00D2] = &execute_unresolved_c0_c0d19b_jp_instruction;
    pages[0x00D3] = &execute_unresolved_c0_c0d19b_jp_instruction;
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
    pages[0x00DF] = &execute_unresolved_c0_c0df22_instruction;
    pages[0x00E0] = &execute_unresolved_c0_c0df22_instruction;
    pages[0x00E1] = &execute_shared_page_c0e1;
    pages[0x00E2] = &execute_shared_page_c0e2;
    pages[0x00E3] = &execute_shared_page_c0e3;
    pages[0x00E4] = &execute_shared_page_c0e4;
    pages[0x00E5] = &execute_unresolved_c0_c0e516_instruction;
    pages[0x00E6] = &execute_shared_page_c0e6;
    pages[0x00E7] = &execute_shared_page_c0e7;
    pages[0x00E8] = &execute_shared_page_c0e8;
    pages[0x00E9] = &execute_shared_page_c0e9;
    pages[0x00EA] = &execute_shared_page_c0ea;
    pages[0x00EB] = &execute_shared_page_c0eb;
    pages[0x00EC] = &execute_shared_page_c0ec;
    pages[0x00ED] = &execute_shared_page_c0ed;
    pages[0x00EE] = &execute_introduction_show_title_screen_jp_instruction;
    pages[0x00EF] = &execute_shared_page_c0ef;
    pages[0x00F0] = &execute_shared_page_c0f0;
    pages[0x00F1] = &execute_shared_page_c0f1;
    pages[0x00F2] = &execute_shared_page_c0f2;
    pages[0x00F3] = &execute_unresolved_c0_c0f21e_instruction;
    pages[0x00F4] = &execute_shared_page_c0f4;
    pages[0x00F5] = &execute_shared_page_c0f5;
    pages[0x00F6] = &execute_shared_page_c0f6;
    pages[0x00F7] = &execute_shared_page_c0f7;
    pages[0x00F8] = &execute_system_saves_save_game_block_instruction;
    pages[0x00F9] = &execute_shared_page_c0f9;
    pages[0x00FA] = &execute_shared_page_c0fa;
    pages[0x00FB] = &execute_shared_page_c0fb;
    pages[0x00FC] = &execute_ending_credits_scroll_frame_jp_instruction;
    pages[0x00FD] = &execute_ending_credits_scroll_frame_jp_instruction;
    pages[0x00FE] = &execute_ending_credits_scroll_frame_jp_instruction;
    pages[0x00FF] = &execute_ending_credits_scroll_frame_jp_instruction;
    pages[0x0100] = &execute_shared_page_c100;
    pages[0x0101] = &execute_shared_page_c101;
    pages[0x0102] = &execute_shared_page_c102;
    pages[0x0103] = &execute_shared_page_c103;
    pages[0x0104] = &execute_shared_page_c104;
    pages[0x0105] = &execute_shared_page_c105;
    pages[0x0106] = &execute_shared_page_c106;
    pages[0x0107] = &execute_text_create_window_instruction;
    pages[0x0108] = &execute_text_create_window_instruction;
    pages[0x0109] = &execute_shared_page_c109;
    pages[0x010A] = &execute_unresolved_c1_c107af_jp_instruction;
    pages[0x010B] = &execute_shared_page_c10b;
    pages[0x010C] = &execute_shared_page_c10c;
    pages[0x010D] = &execute_shared_page_c10d;
    pages[0x010E] = &execute_shared_page_c10e;
    pages[0x010F] = &execute_shared_page_c10f;
    pages[0x0110] = &execute_unresolved_c1_c10a85_jp_instruction;
    pages[0x0111] = &execute_shared_page_c111;
    pages[0x0112] = &execute_shared_page_c112;
    pages[0x0113] = &execute_shared_page_c113;
    pages[0x0114] = &execute_shared_page_c114;
    pages[0x0115] = &execute_shared_page_c115;
    pages[0x0116] = &execute_text_num_select_prompt_instruction;
    pages[0x0117] = &execute_text_num_select_prompt_instruction;
    pages[0x0118] = &execute_text_num_select_prompt_instruction;
    pages[0x0119] = &execute_shared_page_c119;
    pages[0x011A] = &execute_shared_page_c11a;
    pages[0x011B] = &execute_shared_page_c11b;
    pages[0x011C] = &execute_text_print_menu_items_jp_instruction;
    pages[0x011D] = &execute_shared_page_c11d;
    pages[0x011E] = &execute_unresolved_c4_c451fa_jp_instruction;
    pages[0x011F] = &execute_shared_page_c11f;
    pages[0x0120] = &execute_shared_page_c120;
    pages[0x0121] = &execute_shared_page_c121;
    pages[0x0122] = &execute_text_selection_menu_jp_instruction;
    pages[0x0123] = &execute_text_selection_menu_jp_instruction;
    pages[0x0124] = &execute_text_selection_menu_jp_instruction;
    pages[0x0125] = &execute_text_selection_menu_jp_instruction;
    pages[0x0126] = &execute_shared_page_c126;
    pages[0x0127] = &execute_shared_page_c127;
    pages[0x0128] = &execute_shared_page_c128;
    pages[0x0129] = &execute_unresolved_c1_c121b8_jp_instruction;
    pages[0x012A] = &execute_shared_page_c12a;
    pages[0x012B] = &execute_shared_page_c12b;
    pages[0x012C] = &execute_unresolved_c1_c1244c_jp_instruction;
    pages[0x012D] = &execute_unresolved_c1_c1244c_jp_instruction;
    pages[0x012E] = &execute_shared_page_c12e;
    pages[0x012F] = &execute_text_character_select_prompt_jp_instruction;
    pages[0x0130] = &execute_text_character_select_prompt_jp_instruction;
    pages[0x0131] = &execute_text_character_select_prompt_jp_instruction;
    pages[0x0132] = &execute_shared_page_c132;
    pages[0x0133] = &execute_shared_page_c133;
    pages[0x0134] = &execute_shared_page_c134;
    pages[0x0135] = &execute_shared_page_c135;
    pages[0x0136] = &execute_system_debug_y_button_menu_instruction;
    pages[0x0137] = &execute_system_debug_y_button_menu_instruction;
    pages[0x0138] = &execute_shared_page_c138;
    pages[0x0139] = &execute_shared_page_c139;
    pages[0x013A] = &execute_shared_page_c13a;
    pages[0x013B] = &execute_overworld_open_menu_jp_instruction;
    pages[0x013C] = &execute_overworld_open_menu_jp_instruction;
    pages[0x013D] = &execute_overworld_open_menu_jp_instruction;
    pages[0x013E] = &execute_overworld_open_menu_jp_instruction;
    pages[0x013F] = &execute_overworld_open_menu_jp_instruction;
    pages[0x0140] = &execute_overworld_open_menu_jp_instruction;
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
    pages[0x015A] = &execute_shared_page_c15a;
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
    pages[0x017A] = &execute_shared_page_c17a;
    pages[0x017B] = &execute_shared_page_c17b;
    pages[0x017C] = &execute_shared_page_c17c;
    pages[0x017D] = &execute_shared_page_c17d;
    pages[0x017E] = &execute_shared_page_c17e;
    pages[0x017F] = &execute_text_ccs_tree_1b_instruction;
    pages[0x0180] = &execute_shared_page_c180;
    pages[0x0181] = &execute_shared_page_c181;
    pages[0x0182] = &execute_text_ccs_tree_1d_instruction;
    pages[0x0183] = &execute_shared_page_c183;
    pages[0x0184] = &execute_shared_page_c184;
    pages[0x0185] = &execute_text_ccs_tree_1f_instruction;
    pages[0x0186] = &execute_text_ccs_tree_1f_instruction;
    pages[0x0187] = &execute_text_ccs_tree_1f_instruction;
    pages[0x0188] = &execute_shared_page_c188;
    pages[0x0189] = &execute_shared_page_c189;
    pages[0x018A] = &execute_text_display_text_jp_instruction;
    pages[0x018B] = &execute_shared_page_c18b;
    pages[0x018C] = &execute_shared_page_c18c;
    pages[0x018D] = &execute_miscellaneous_remove_item_from_inventory_instruction;
    pages[0x018E] = &execute_miscellaneous_remove_item_from_inventory_instruction;
    pages[0x018F] = &execute_shared_page_c18f;
    pages[0x0190] = &execute_shared_page_c190;
    pages[0x0191] = &execute_shared_page_c191;
    pages[0x0192] = &execute_shared_page_c192;
    pages[0x0193] = &execute_shared_page_c193;
    pages[0x0194] = &execute_shared_page_c194;
    pages[0x0195] = &execute_shared_page_c195;
    pages[0x0196] = &execute_unresolved_c1_c1952f_jp_instruction;
    pages[0x0197] = &execute_unresolved_c1_c1952f_jp_instruction;
    pages[0x0198] = &execute_unresolved_c1_c1952f_jp_instruction;
    pages[0x0199] = &execute_shared_page_c199;
    pages[0x019A] = &execute_shared_page_c19a;
    pages[0x019B] = &execute_shared_page_c19b;
    pages[0x019C] = &execute_shared_page_c19c;
    pages[0x019D] = &execute_shared_page_c19d;
    pages[0x019E] = &execute_shared_page_c19e;
    pages[0x019F] = &execute_shared_page_c19f;
    pages[0x01A0] = &execute_unresolved_c1_c19f29_jp_instruction;
    pages[0x01A1] = &execute_shared_page_c1a1;
    pages[0x01A2] = &execute_unresolved_c1_c1a1d8_jp_instruction;
    pages[0x01A3] = &execute_unresolved_c1_c1a1d8_jp_instruction;
    pages[0x01A4] = &execute_unresolved_c1_c1a1d8_jp_instruction;
    pages[0x01A5] = &execute_unresolved_c1_c1a1d8_jp_instruction;
    pages[0x01A6] = &execute_shared_page_c1a6;
    pages[0x01A7] = &execute_unresolved_c1_c1a795_jp_instruction;
    pages[0x01A8] = &execute_shared_page_c1a8;
    pages[0x01A9] = &execute_shared_page_c1a9;
    pages[0x01AA] = &execute_shared_page_c1aa;
    pages[0x01AB] = &execute_shared_page_c1ab;
    pages[0x01AC] = &execute_shared_page_c1ac;
    pages[0x01AD] = &execute_battle_determine_targetting_instruction;
    pages[0x01AE] = &execute_shared_page_c1ae;
    pages[0x01AF] = &execute_overworld_use_item_instruction;
    pages[0x01B0] = &execute_overworld_use_item_instruction;
    pages[0x01B1] = &execute_overworld_use_item_instruction;
    pages[0x01B2] = &execute_overworld_use_item_instruction;
    pages[0x01B3] = &execute_overworld_use_item_instruction;
    pages[0x01B4] = &execute_shared_page_c1b4;
    pages[0x01B5] = &execute_unresolved_c1_c1b5b6_jp_instruction;
    pages[0x01B6] = &execute_unresolved_c1_c1b5b6_jp_instruction;
    pages[0x01B7] = &execute_unresolved_c1_c1b5b6_jp_instruction;
    pages[0x01B8] = &execute_unresolved_c1_c1b5b6_jp_instruction;
    pages[0x01B9] = &execute_shared_page_c1b9;
    pages[0x01BA] = &execute_shared_page_c1ba;
    pages[0x01BB] = &execute_shared_page_c1bb;
    pages[0x01BC] = &execute_shared_page_c1bc;
    pages[0x01BD] = &execute_shared_page_c1bd;
    pages[0x01BE] = &execute_shared_page_c1be;
    pages[0x01BF] = &execute_shared_page_c1bf;
    pages[0x01C0] = &execute_shared_page_c1c0;
    pages[0x01C1] = &execute_shared_page_c1c1;
    pages[0x01C2] = &execute_shared_page_c1c2;
    pages[0x01C3] = &execute_battle_generate_psi_list_instruction;
    pages[0x01C4] = &execute_battle_generate_psi_list_instruction;
    pages[0x01C5] = &execute_battle_generate_psi_list_instruction;
    pages[0x01C6] = &execute_shared_page_c1c6;
    pages[0x01C7] = &execute_unresolved_c1_c1c8bc_instruction;
    pages[0x01C8] = &execute_shared_page_c1c8;
    pages[0x01C9] = &execute_shared_page_c1c9;
    pages[0x01CA] = &execute_battle_battle_psi_menu_instruction;
    pages[0x01CB] = &execute_battle_battle_psi_menu_instruction;
    pages[0x01CC] = &execute_shared_page_c1cc;
    pages[0x01CD] = &execute_shared_page_c1cd;
    pages[0x01CE] = &execute_shared_page_c1ce;
    pages[0x01CF] = &execute_miscellaneous_level_up_char_jp_instruction;
    pages[0x01D0] = &execute_miscellaneous_level_up_char_jp_instruction;
    pages[0x01D1] = &execute_miscellaneous_level_up_char_jp_instruction;
    pages[0x01D2] = &execute_miscellaneous_level_up_char_jp_instruction;
    pages[0x01D3] = &execute_miscellaneous_level_up_char_jp_instruction;
    pages[0x01D4] = &execute_miscellaneous_level_up_char_jp_instruction;
    pages[0x01D5] = &execute_miscellaneous_level_up_char_jp_instruction;
    pages[0x01D6] = &execute_shared_page_c1d6;
    pages[0x01D7] = &execute_shared_page_c1d7;
    pages[0x01D8] = &execute_miscellaneous_gain_exp_instruction;
    pages[0x01D9] = &execute_shared_page_c1d9;
    pages[0x01DA] = &execute_shared_page_c1da;
    pages[0x01DB] = &execute_shared_page_c1db;
    pages[0x01DC] = &execute_shared_page_c1dc;
    pages[0x01DD] = &execute_shared_page_c1dd;
    pages[0x01DE] = &execute_battle_actions_switch_armor_instruction;
    pages[0x01DF] = &execute_shared_page_c1df;
    pages[0x01E0] = &execute_battle_enemy_select_mode_instruction;
    pages[0x01E1] = &execute_battle_enemy_select_mode_instruction;
    pages[0x01E2] = &execute_shared_page_c1e2;
    pages[0x01E3] = &execute_shared_page_c1e3;
    pages[0x01E4] = &execute_shared_page_c1e4;
    pages[0x01E5] = &execute_text_text_input_dialog_jp_instruction;
    pages[0x01E6] = &execute_text_text_input_dialog_jp_instruction;
    pages[0x01E7] = &execute_text_text_input_dialog_jp_instruction;
    pages[0x01E8] = &execute_shared_page_c1e8;
    pages[0x01E9] = &execute_text_enter_your_name_please_jp_instruction;
    pages[0x01EA] = &execute_shared_page_c1ea;
    pages[0x01EB] = &execute_shared_page_c1eb;
    pages[0x01EC] = &execute_shared_page_c1ec;
    pages[0x01ED] = &execute_introduction_file_select_menu_jp_instruction;
    pages[0x01EE] = &execute_introduction_file_select_menu_jp_instruction;
    pages[0x01EF] = &execute_shared_page_c1ef;
    pages[0x01F0] = &execute_shared_page_c1f0;
    pages[0x01F1] = &execute_shared_page_c1f1;
    pages[0x01F2] = &execute_shared_page_c1f2;
    pages[0x01F3] = &execute_introduction_file_select_open_text_speed_menu_jp_instruction;
    pages[0x01F4] = &execute_shared_page_c1f4;
    pages[0x01F5] = &execute_shared_page_c1f5;
    pages[0x01F6] = &execute_shared_page_c1f6;
    pages[0x01F7] = &execute_introduction_file_select_menu_loop_jp_instruction;
    pages[0x01F8] = &execute_introduction_file_select_menu_loop_jp_instruction;
    pages[0x01F9] = &execute_introduction_file_select_menu_loop_jp_instruction;
    pages[0x01FA] = &execute_introduction_file_select_menu_loop_jp_instruction;
    pages[0x01FB] = &execute_introduction_file_select_menu_loop_jp_instruction;
    pages[0x01FC] = &execute_shared_page_c1fc;
    pages[0x01FD] = &execute_shared_page_c1fd;
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
    pages[0x020A] = &execute_unresolved_c2_c20b65_instruction;
    pages[0x020B] = &execute_shared_page_c20b;
    pages[0x020C] = &execute_shared_page_c20c;
    pages[0x020D] = &execute_shared_page_c20d;
    pages[0x020E] = &execute_shared_page_c20e;
    pages[0x020F] = &execute_shared_page_c20f;
    pages[0x0210] = &execute_miscellaneous_hp_pp_roller_instruction;
    pages[0x0211] = &execute_miscellaneous_hp_pp_roller_instruction;
    pages[0x0212] = &execute_shared_page_c212;
    pages[0x0213] = &execute_text_update_hppp_meter_tiles_instruction;
    pages[0x0214] = &execute_shared_page_c214;
    pages[0x0215] = &execute_shared_page_c215;
    pages[0x0216] = &execute_unresolved_c2_c216db_instruction;
    pages[0x0217] = &execute_shared_page_c217;
    pages[0x0218] = &execute_miscellaneous_recalc_character_postmath_defense_instruction;
    pages[0x0219] = &execute_shared_page_c219;
    pages[0x021A] = &execute_shared_page_c21a;
    pages[0x021B] = &execute_shared_page_c21b;
    pages[0x021C] = &execute_shared_page_c21c;
    pages[0x021D] = &execute_battle_calc_resistances_instruction;
    pages[0x021E] = &execute_battle_calc_resistances_instruction;
    pages[0x021F] = &execute_battle_calc_resistances_instruction;
    pages[0x0220] = &execute_shared_page_c220;
    pages[0x0221] = &execute_shared_page_c221;
    pages[0x0222] = &execute_shared_page_c222;
    pages[0x0223] = &execute_shared_page_c223;
    pages[0x0224] = &execute_shared_page_c224;
    pages[0x0225] = &execute_shared_page_c225;
    pages[0x0226] = &execute_shared_page_c226;
    pages[0x0227] = &execute_shared_page_c227;
    pages[0x0228] = &execute_shared_page_c228;
    pages[0x0229] = &execute_shared_page_c229;
    pages[0x022A] = &execute_unresolved_c2_c22a3a_instruction;
    pages[0x022B] = &execute_unresolved_c2_c22a3a_instruction;
    pages[0x022C] = &execute_unresolved_c2_c22a3a_instruction;
    pages[0x022D] = &execute_unresolved_c2_c22a3a_instruction;
    pages[0x022E] = &execute_shared_page_c22e;
    pages[0x022F] = &execute_shared_page_c22f;
    pages[0x0230] = &execute_shared_page_c230;
    pages[0x0231] = &execute_battle_menu_handler_jp_instruction;
    pages[0x0232] = &execute_battle_menu_handler_jp_instruction;
    pages[0x0233] = &execute_battle_menu_handler_jp_instruction;
    pages[0x0234] = &execute_battle_menu_handler_jp_instruction;
    pages[0x0235] = &execute_battle_menu_handler_jp_instruction;
    pages[0x0236] = &execute_battle_menu_handler_jp_instruction;
    pages[0x0237] = &execute_battle_menu_handler_jp_instruction;
    pages[0x0238] = &execute_battle_menu_handler_jp_instruction;
    pages[0x0239] = &execute_battle_menu_handler_jp_instruction;
    pages[0x023A] = &execute_shared_page_c23a;
    pages[0x023B] = &execute_shared_page_c23b;
    pages[0x023C] = &execute_text_fix_target_name_instruction;
    pages[0x023D] = &execute_shared_page_c23d;
    pages[0x023E] = &execute_shared_page_c23e;
    pages[0x023F] = &execute_shared_page_c23f;
    pages[0x0240] = &execute_shared_page_c240;
    pages[0x0241] = &execute_shared_page_c241;
    pages[0x0242] = &execute_shared_page_c242;
    pages[0x0243] = &execute_shared_page_c243;
    pages[0x0244] = &execute_battle_choose_target_instruction;
    pages[0x0245] = &execute_shared_page_c245;
    pages[0x0246] = &execute_shared_page_c246;
    pages[0x0247] = &execute_battle_main_battle_routine_instruction;
    pages[0x0248] = &execute_battle_main_battle_routine_instruction;
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
    pages[0x0260] = &execute_shared_page_c260;
    pages[0x0261] = &execute_battle_instant_win_handler_instruction;
    pages[0x0262] = &execute_battle_instant_win_handler_instruction;
    pages[0x0263] = &execute_battle_instant_win_handler_instruction;
    pages[0x0264] = &execute_shared_page_c264;
    pages[0x0265] = &execute_shared_page_c265;
    pages[0x0266] = &execute_battle_instant_win_check_instruction;
    pages[0x0267] = &execute_battle_instant_win_check_instruction;
    pages[0x0268] = &execute_shared_page_c268;
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
    pages[0x0273] = &execute_battle_revive_target_instruction;
    pages[0x0274] = &execute_shared_page_c274;
    pages[0x0275] = &execute_battle_ko_target_instruction;
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
    pages[0x0280] = &execute_shared_page_c280;
    pages[0x0281] = &execute_battle_calc_damage_reduction_instruction;
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
    pages[0x0293] = &execute_shared_page_c293;
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
    pages[0x02A7] = &execute_shared_page_c2a7;
    pages[0x02A8] = &execute_shared_page_c2a8;
    pages[0x02A9] = &execute_shared_page_c2a9;
    pages[0x02AA] = &execute_shared_page_c2aa;
    pages[0x02AB] = &execute_shared_page_c2ab;
    pages[0x02AC] = &execute_shared_page_c2ac;
    pages[0x02AD] = &execute_battle_actions_pray_instruction;
    pages[0x02AE] = &execute_shared_page_c2ae;
    pages[0x02AF] = &execute_battle_copy_mirror_data_instruction;
    pages[0x02B0] = &execute_shared_page_c2b0;
    pages[0x02B1] = &execute_shared_page_c2b1;
    pages[0x02B2] = &execute_shared_page_c2b2;
    pages[0x02B3] = &execute_battle_eat_food_instruction;
    pages[0x02B4] = &execute_battle_eat_food_instruction;
    pages[0x02B5] = &execute_shared_page_c2b5;
    pages[0x02B6] = &execute_shared_page_c2b6;
    pages[0x02B7] = &execute_battle_init_enemy_stats_instruction;
    pages[0x02B8] = &execute_shared_page_c2b8;
    pages[0x02B9] = &execute_battle_init_player_stats_instruction;
    pages[0x02BA] = &execute_shared_page_c2ba;
    pages[0x02BB] = &execute_battle_check_dead_players_instruction;
    pages[0x02BC] = &execute_shared_page_c2bc;
    pages[0x02BD] = &execute_shared_page_c2bd;
    pages[0x02BE] = &execute_battle_call_for_help_common_instruction;
    pages[0x02BF] = &execute_battle_call_for_help_common_instruction;
    pages[0x02C0] = &execute_shared_page_c2c0;
    pages[0x02C1] = &execute_shared_page_c2c1;
    pages[0x02C2] = &execute_shared_page_c2c2;
    pages[0x02C3] = &execute_shared_page_c2c3;
    pages[0x02C4] = &execute_shared_page_c2c4;
    pages[0x02C5] = &execute_shared_page_c2c5;
    pages[0x02C6] = &execute_shared_page_c2c6;
    pages[0x02C7] = &execute_battle_actions_giygas_prayer_9_instruction;
    pages[0x02C8] = &execute_shared_page_c2c8;
    pages[0x02C9] = &execute_miscellaneous_battle_backgrounds_generate_frame_instruction;
    pages[0x02CA] = &execute_miscellaneous_battle_backgrounds_generate_frame_instruction;
    pages[0x02CB] = &execute_miscellaneous_battle_backgrounds_generate_frame_instruction;
    pages[0x02CC] = &execute_miscellaneous_battle_backgrounds_generate_frame_instruction;
    pages[0x02CD] = &execute_miscellaneous_battle_backgrounds_generate_frame_instruction;
    pages[0x02CE] = &execute_miscellaneous_battle_backgrounds_generate_frame_instruction;
    pages[0x02CF] = &execute_shared_page_c2cf;
    pages[0x02D0] = &execute_shared_page_c2d0;
    pages[0x02D1] = &execute_battle_load_battlebg_jp_instruction;
    pages[0x02D2] = &execute_battle_load_battlebg_jp_instruction;
    pages[0x02D3] = &execute_battle_load_battlebg_jp_instruction;
    pages[0x02D4] = &execute_battle_load_battlebg_jp_instruction;
    pages[0x02D5] = &execute_battle_load_battlebg_jp_instruction;
    pages[0x02D6] = &execute_battle_load_battlebg_jp_instruction;
    pages[0x02D7] = &execute_battle_load_battlebg_jp_instruction;
    pages[0x02D8] = &execute_battle_load_battlebg_jp_instruction;
    pages[0x02D9] = &execute_battle_load_battlebg_jp_instruction;
    pages[0x02DA] = &execute_shared_page_c2da;
    pages[0x02DB] = &execute_unresolved_c2_c2db3f_instruction;
    pages[0x02DC] = &execute_unresolved_c2_c2db3f_instruction;
    pages[0x02DD] = &execute_shared_page_c2dd;
    pages[0x02DE] = &execute_shared_page_c2de;
    pages[0x02DF] = &execute_shared_page_c2df;
    pages[0x02E0] = &execute_shared_page_c2e0;
    pages[0x02E1] = &execute_battle_show_psi_animation_jp_instruction;
    pages[0x02E2] = &execute_battle_show_psi_animation_jp_instruction;
    pages[0x02E3] = &execute_battle_show_psi_animation_jp_instruction;
    pages[0x02E4] = &execute_battle_show_psi_animation_jp_instruction;
    pages[0x02E5] = &execute_shared_page_c2e5;
    pages[0x02E6] = &execute_unresolved_c2_c2e6b3_instruction;
    pages[0x02E7] = &execute_shared_page_c2e7;
    pages[0x02E8] = &execute_shared_page_c2e8;
    pages[0x02E9] = &execute_shared_page_c2e9;
    pages[0x02EA] = &execute_shared_page_c2ea;
    pages[0x02EB] = &execute_battle_load_battle_sprite_instruction;
    pages[0x02EC] = &execute_battle_load_battle_sprite_instruction;
    pages[0x02ED] = &execute_battle_load_battle_sprite_instruction;
    pages[0x02EE] = &execute_unresolved_c2_c2eee7_instruction;
    pages[0x02EF] = &execute_shared_page_c2ef;
    pages[0x02F0] = &execute_shared_page_c2f0;
    pages[0x02F1] = &execute_unresolved_c2_c2f121_instruction;
    pages[0x02F2] = &execute_unresolved_c2_c2f121_instruction;
    pages[0x02F3] = &execute_unresolved_c2_c2f121_instruction;
    pages[0x02F4] = &execute_unresolved_c2_c2f121_instruction;
    pages[0x02F5] = &execute_unresolved_c2_c2f121_instruction;
    pages[0x02F6] = &execute_shared_page_c2f6;
    pages[0x02F7] = &execute_battle_render_battle_sprite_row_instruction;
    pages[0x02F8] = &execute_shared_page_c2f8;
    pages[0x02F9] = &execute_shared_page_c2f9;
    pages[0x02FA] = &execute_shared_page_c2fa;
    pages[0x02FB] = &execute_shared_page_c2fb;
    pages[0x02FC] = &execute_shared_page_c2fc;
    pages[0x02FD] = &execute_unresolved_c2_c2fd99_instruction;
    pages[0x02FE] = &execute_shared_page_c2fe;
    pages[0x0301] = &execute_shared_page_c301;
    pages[0x03E5] = &execute_shared_page_c3e5;
    pages[0x03E6] = &execute_shared_page_c3e6;
    pages[0x03E7] = &execute_shared_page_c3e7;
    pages[0x03E8] = &execute_shared_page_c3e8;
    pages[0x03E9] = &execute_shared_page_c3e9;
    pages[0x03EA] = &execute_shared_page_c3ea;
    pages[0x03EC] = &execute_unresolved_c3_c3f1ec_instruction;
    pages[0x03ED] = &execute_shared_page_c3ed;
    pages[0x03EE] = &execute_shared_page_c3ee;
    pages[0x03EF] = &execute_unresolved_ef_ef031e_instruction;
    pages[0x03F0] = &execute_unresolved_ef_ef031e_instruction;
    pages[0x03F1] = &execute_shared_page_c3f1;
    pages[0x03F2] = &execute_shared_page_c3f2;
    pages[0x03F3] = &execute_shared_page_c3f3;
    pages[0x03F4] = &execute_unresolved_c3_c3f981_instruction;
    pages[0x03F5] = &execute_unresolved_c3_c3f981_instruction;
    pages[0x03F6] = &execute_shared_page_c3f6;
    pages[0x03F8] = &execute_system_antipiracy_final_battle_antipiracy_check_instruction;
    pages[0x03F9] = &execute_system_antipiracy_final_battle_antipiracy_check_instruction;
    pages[0x0400] = &execute_shared_page_c400;
    pages[0x040A] = &execute_shared_page_c40a;
    pages[0x040B] = &execute_unresolved_c4_c40b75_instruction;
    pages[0x0419] = &execute_system_decompression_instruction;
    pages[0x041A] = &execute_system_decompression_instruction;
    pages[0x041B] = &execute_system_decompression_instruction;
    pages[0x041C] = &execute_system_decompression_instruction;
    pages[0x041D] = &execute_shared_page_c41d;
    pages[0x041E] = &execute_shared_page_c41e;
    pages[0x041F] = &execute_shared_page_c41f;
    pages[0x0420] = &execute_unresolved_c4_c4213f_instruction;
    pages[0x0423] = &execute_shared_page_c423;
    pages[0x0424] = &execute_shared_page_c424;
    pages[0x0425] = &execute_shared_page_c425;
    pages[0x0426] = &execute_shared_page_c426;
    pages[0x0427] = &execute_shared_page_c427;
    pages[0x0428] = &execute_shared_page_c428;
    pages[0x0429] = &execute_shared_page_c429;
    pages[0x042E] = &execute_overworld_set_party_tick_callbacks_instruction;
    pages[0x0430] = &execute_shared_page_c430;
    pages[0x0431] = &execute_shared_page_c431;
    pages[0x0432] = &execute_shared_page_c432;
    pages[0x0434] = &execute_shared_page_c434;
    pages[0x0435] = &execute_shared_page_c435;
    pages[0x0436] = &execute_shared_page_c436;
    pages[0x0437] = &execute_shared_page_c437;
    pages[0x0438] = &execute_miscellaneous_get_required_exp_instruction;
    pages[0x0439] = &execute_unresolved_c4_c45c90_instruction;
    pages[0x043A] = &execute_unresolved_c4_c45c90_instruction;
    pages[0x043B] = &execute_shared_page_c43b;
    pages[0x043C] = &execute_shared_page_c43c;
    pages[0x043D] = &execute_shared_page_c43d;
    pages[0x043E] = &execute_shared_page_c43e;
    pages[0x043F] = &execute_shared_page_c43f;
    pages[0x0440] = &execute_shared_page_c440;
    pages[0x0441] = &execute_shared_page_c441;
    pages[0x0442] = &execute_shared_page_c442;
    pages[0x0443] = &execute_shared_page_c443;
    pages[0x0444] = &execute_shared_page_c444;
    pages[0x0445] = &execute_shared_page_c445;
    pages[0x0446] = &execute_shared_page_c446;
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
    pages[0x0452] = &execute_shared_page_c452;
    pages[0x0453] = &execute_unresolved_c4_c47501_instruction;
    pages[0x0454] = &execute_shared_page_c454;
    pages[0x0455] = &execute_shared_page_c455;
    pages[0x0456] = &execute_shared_page_c456;
    pages[0x0457] = &execute_shared_page_c457;
    pages[0x0458] = &execute_shared_page_c458;
    pages[0x0459] = &execute_shared_page_c459;
    pages[0x045A] = &execute_system_load_window_gfx_jp_instruction;
    pages[0x045B] = &execute_system_load_window_gfx_jp_instruction;
    pages[0x045C] = &execute_shared_page_c45c;
    pages[0x045D] = &execute_unresolved_c4_c4810e_instruction;
    pages[0x045E] = &execute_shared_page_c45e;
    pages[0x045F] = &execute_unresolved_c4_c4880c_jp_instruction;
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
    pages[0x046C] = &execute_unresolved_c4_c4958e_instruction;
    pages[0x046D] = &execute_shared_page_c46d;
    pages[0x046E] = &execute_shared_page_c46e;
    pages[0x046F] = &execute_shared_page_c46f;
    pages[0x0470] = &execute_shared_page_c470;
    pages[0x0471] = &execute_shared_page_c471;
    pages[0x0472] = &execute_shared_page_c472;
    pages[0x0473] = &execute_shared_page_c473;
    pages[0x0474] = &execute_unresolved_c4_c49ec4_jp_instruction;
    pages[0x0475] = &execute_shared_page_c475;
    pages[0x0476] = &execute_shared_page_c476;
    pages[0x0477] = &execute_unresolved_c4_c4a377_jp_instruction;
    pages[0x0478] = &execute_unresolved_c4_c4a377_jp_instruction;
    pages[0x0479] = &execute_unresolved_c4_c4a377_jp_instruction;
    pages[0x047A] = &execute_unresolved_c4_c4a67e_instruction;
    pages[0x047B] = &execute_unresolved_c4_c4a67e_instruction;
    pages[0x047C] = &execute_shared_page_c47c;
    pages[0x047D] = &execute_unresolved_c4_c4a7b0_instruction;
    pages[0x047E] = &execute_unresolved_c4_c4a7b0_instruction;
    pages[0x047F] = &execute_unresolved_c4_c4a7b0_instruction;
    pages[0x0480] = &execute_unresolved_c4_c4a7b0_instruction;
    pages[0x0481] = &execute_overworld_use_sound_stone_instruction;
    pages[0x0482] = &execute_overworld_use_sound_stone_instruction;
    pages[0x0483] = &execute_overworld_use_sound_stone_instruction;
    pages[0x0484] = &execute_overworld_use_sound_stone_instruction;
    pages[0x0485] = &execute_overworld_use_sound_stone_instruction;
    pages[0x0486] = &execute_shared_page_c486;
    pages[0x0487] = &execute_shared_page_c487;
    pages[0x0488] = &execute_shared_page_c488;
    pages[0x0489] = &execute_shared_page_c489;
    pages[0x048A] = &execute_shared_page_c48a;
    pages[0x048B] = &execute_unresolved_c4_c4b59f_instruction;
    pages[0x048C] = &execute_shared_page_c48c;
    pages[0x048D] = &execute_shared_page_c48d;
    pages[0x048E] = &execute_unresolved_c4_c4b923_instruction;
    pages[0x048F] = &execute_shared_page_c48f;
    pages[0x0490] = &execute_unresolved_c4_c4baf6_jp_instruction;
    pages[0x0491] = &execute_shared_page_c491;
    pages[0x0492] = &execute_unresolved_c4_c4bd9a_instruction;
    pages[0x0493] = &execute_shared_page_c493;
    pages[0x0494] = &execute_unresolved_c4_c4bf7f_instruction;
    pages[0x0495] = &execute_unresolved_c4_c4c2de_instruction;
    pages[0x0496] = &execute_unresolved_c4_c4c2de_instruction;
    pages[0x0497] = &execute_shared_page_c497;
    pages[0x0498] = &execute_shared_page_c498;
    pages[0x0499] = &execute_shared_page_c499;
    pages[0x049A] = &execute_overworld_spawn_instruction;
    pages[0x049B] = &execute_shared_page_c49b;
    pages[0x049C] = &execute_unresolved_c4_c4c91a_instruction;
    pages[0x049D] = &execute_unresolved_c4_c4c91a_instruction;
    pages[0x049E] = &execute_shared_page_c49e;
    pages[0x049F] = &execute_unresolved_c4_c4cc2f_instruction;
    pages[0x04A0] = &execute_shared_page_c4a0;
    pages[0x04A1] = &execute_shared_page_c4a1;
    pages[0x04A2] = &execute_shared_page_c4a2;
    pages[0x04A3] = &execute_shared_page_c4a3;
    pages[0x04A4] = &execute_unresolved_c4_c4d065_instruction;
    pages[0x04A5] = &execute_shared_page_c4a5;
    pages[0x04A6] = &execute_unresolved_c4_c4d2f0_instruction;
    pages[0x04A7] = &execute_shared_page_c4a7;
    pages[0x04A8] = &execute_shared_page_c4a8;
    pages[0x04A9] = &execute_shared_page_c4a9;
    pages[0x04AA] = &execute_shared_page_c4aa;
    pages[0x04AB] = &execute_shared_page_c4ab;
    pages[0x04AC] = &execute_shared_page_c4ac;
    pages[0x04AD] = &execute_shared_page_c4ad;
    pages[0x04AE] = &execute_introduction_init_intro_instruction;
    pages[0x04AF] = &execute_shared_page_c4af;
    pages[0x04B0] = &execute_shared_page_c4b0;
    pages[0x04B1] = &execute_shared_page_c4b1;
    pages[0x04B2] = &execute_shared_page_c4b2;
    pages[0x04B3] = &execute_shared_page_c4b3;
    pages[0x04B4] = &execute_shared_page_c4b4;
    pages[0x04B5] = &execute_shared_page_c4b5;
    pages[0x04B6] = &execute_ending_load_cast_scene_jp_instruction;
    pages[0x04B7] = &execute_shared_page_c4b7;
    pages[0x04B8] = &execute_shared_page_c4b8;
    pages[0x04B9] = &execute_unresolved_c4_c4b8e2_jp_instruction;
    pages[0x04BA] = &execute_unresolved_c4_c4b8e2_jp_instruction;
    pages[0x04BB] = &execute_shared_page_c4bb;
    pages[0x04BC] = &execute_shared_page_c4bc;
    pages[0x04BD] = &execute_shared_page_c4bd;
    pages[0x04BE] = &execute_shared_page_c4be;
    pages[0x04BF] = &execute_shared_page_c4bf;
    pages[0x04C0] = &execute_shared_page_c4c0;
    pages[0x04C1] = &execute_ending_initialize_credits_scene_instruction;
    pages[0x04C2] = &execute_shared_page_c4c2;
    pages[0x04C3] = &execute_ending_try_rendering_photograph_instruction;
    pages[0x04C4] = &execute_shared_page_c4c4;
    pages[0x04C5] = &execute_shared_page_c4c5;
    pages[0x04C6] = &execute_ending_play_credits_instruction;
    pages[0x04C7] = &execute_shared_page_c4c7;
    pages[0x04C8] = &execute_shared_page_c4c8;
    pages[0x04C9] = &execute_shared_page_c4c9;
    pages[0x04CA] = &execute_shared_page_c4ca;
    pages[0x04CE] = &execute_shared_page_c4ce;
    pages[0x04CF] = &execute_shared_page_c4cf;
    pages[0x04D0] = &execute_shared_page_c4d0;
    pages[0x2142] = &execute_unresolved_e1_e14de8_instruction;
    pages[0x2143] = &execute_unresolved_e1_e14de8_instruction;
    pages[0x2FBE] = &execute_shared_page_efbe;
    pages[0x2FBF] = &execute_shared_page_efbf;
    pages[0x2FC0] = &execute_unresolved_ef_efd6d4_instruction;
    pages[0x2FC1] = &execute_unresolved_ef_efd6d4_instruction;
    pages[0x2FC2] = &execute_unresolved_ef_efd95e_instruction;
    pages[0x2FC3] = &execute_shared_page_efc3;
    pages[0x2FC4] = &execute_shared_page_efc4;
    pages[0x2FC5] = &execute_shared_page_efc5;
    pages[0x2FC6] = &execute_system_debug_display_check_position_debug_overlay_instruction;
    pages[0x2FC7] = &execute_shared_page_efc7;
    pages[0x2FC8] = &execute_shared_page_efc8;
    pages[0x2FC9] = &execute_shared_page_efc9;
    pages[0x2FCA] = &execute_shared_page_efca;
    pages[0x2FCB] = &execute_unresolved_ef_efe175_jp_instruction;
    pages[0x2FCC] = &execute_unresolved_ef_efe175_jp_instruction;
    pages[0x2FCD] = &execute_unresolved_ef_efe175_jp_instruction;
    pages[0x2FCE] = &execute_shared_page_efce;
    pages[0x2FCF] = &execute_shared_page_efcf;
    pages[0x2FD0] = &execute_shared_page_efd0;
    pages[0x2FD1] = &execute_shared_page_efd1;
    pages[0x2FD2] = &execute_unresolved_ef_efe8c7_jp_instruction;
    pages[0x2FD3] = &execute_shared_page_efd3;
    pages[0x2FD4] = &execute_shared_page_efd4;
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
std::size_t translated_instruction_count() { return 138660; }
} // namespace eb::jp
