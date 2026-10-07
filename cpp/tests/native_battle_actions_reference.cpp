// Complete selected action routines, with real source text/frame/audio children.
// The source BATTLE_ROUTINE establishes battle state before helper entry; this
// fixture does not claim that direct action entries run the main actor tail.
#define NATIVE_BATTLE_SESSION_REFERENCE_NO_MAIN
#include "native_battle_session_reference.cpp"
#undef NATIVE_BATTLE_SESSION_REFERENCE_NO_MAIN

namespace {
using Kind = actions::Kind;
struct ActionCase {
    Kind kind;
    unsigned us, jp;
    const char *name;
};
constexpr ActionCase cases[] = {
    {Kind::BTLACT_NAUSEATE, 0xc28aeb, 0xc28a82, "BTLACT_NAUSEATE"},
    {Kind::BTLACT_POISON, 0xc28b2c, 0xc28ac3, "BTLACT_POISON"},
    {Kind::BTLACT_COLD, 0xc28b6d, 0xc28b04, "BTLACT_COLD"},
    {Kind::BTLACT_MUSHROOMIZE, 0xc28bbe, 0xc28b55, "BTLACT_MUSHROOMIZE"},
    {Kind::BTLACT_CRYING, 0xc28c69, 0xc28c00, "BTLACT_CRYING"},
    {Kind::BTLACT_CRYING2, 0xc28dfc, 0xc28d93, "BTLACT_CRYING2"},
    {Kind::BTLACT_IMMOBILIZE, 0xc28cb8, 0xc28c4f, "BTLACT_IMMOBILIZE"},
    {Kind::BTLACT_SOLIDIFY, 0xc28cf1, 0xc28c88, "BTLACT_SOLIDIFY"},
    {Kind::BTLACT_DISTRACT, 0xc28d5a, 0xc28cf1, "BTLACT_DISTRACT"},
    {Kind::BTLACT_FEELSTRANGE, 0xc28dbb, 0xc28d52, "BTLACT_FEELSTRANGE"},
    {Kind::BTLACT_PARALYZE, 0xc28a92, 0xc28a29, "BTLACT_PARALYZE"},
    {Kind::BTLACT_OFFENSE_UP_A, 0xc29e38, 0xc29de1, "BTLACT_OFFENSE_UP_A"},
    {Kind::BTLACT_DEFENSE_DOWN_A, 0xc29e86, 0xc29e2f, "BTLACT_DEFENSE_DOWN_A"},
    {Kind::BTLACT_REDUCEOFF, 0xc29254, 0xc291eb, "BTLACT_REDUCEOFF"},
    {Kind::BTLACT_REDUCEOFFDEF, 0xc28f21, 0xc28eb8, "BTLACT_REDUCEOFFDEF"},
    {Kind::BTLACT_CUTGUTS, 0xc28eae, 0xc28e45, "BTLACT_CUTGUTS"},
    {Kind::BTLACT_HP_RECOVERY_10, 0xc2a360, 0xc2a309, "BTLACT_HP_RECOVERY_10"},
    {Kind::BTLACT_HP_RECOVERY_100, 0xc2a370, 0xc2a319, "BTLACT_HP_RECOVERY_100"},
    {Kind::BTLACT_PP_RECOVERY_20, 0xc2a0df, 0xc2a088, "BTLACT_PP_RECOVERY_20"},
    {Kind::BTLACT_LIFEUP_A, 0xc29ac6, 0xc29a6f, "BTLACT_LIFEUP_A"},
    {Kind::BTLACT_HEALING_A, 0xc29aea, 0xc29a93, "BTLACT_HEALING_A"},
    {Kind::BTLACT_HEALING_B, 0xc29b7a, 0xc29b23, "BTLACT_HEALING_B"},
    {Kind::BTLACT_HEALING_G, 0xc29c2c, 0xc29bd5, "BTLACT_HEALING_G"},
    {Kind::BTLACT_HEALING_O, 0xc29cb8, 0xc29c61, "BTLACT_HEALING_O"},
    {Kind::BTLACT_SHIELD_A, 0xc29d44, 0xc29ced, "BTLACT_SHIELD_A"},
    {Kind::BTLACT_SHIELD_B, 0xc29d81, 0xc29d2a, "BTLACT_SHIELD_B"},
    {Kind::BTLACT_PSI_SHIELD_A, 0xc29dbe, 0xc29d67, "BTLACT_PSI_SHIELD_A"},
    {Kind::BTLACT_PSI_SHIELD_B, 0xc29dfb, 0xc29da4, "BTLACT_PSI_SHIELD_B"},
    {Kind::BTLACT_BASH, 0xc2859f, 0xc28546, "BTLACT_BASH"},
    {Kind::BTLACT_SHOOT, 0xc28740, 0xc286e7, "BTLACT_SHOOT"},
    {Kind::BTLACT_LEVEL_1_ATK, 0xc286cb, 0xc28672, "BTLACT_LEVEL_1_ATK"},
    {Kind::BTLACT_LEVEL_3_ATK, 0xc28651, 0xc285f8, "BTLACT_LEVEL_3_ATK"},
    {Kind::BTLACT_LEVEL_4_ATK, 0xc285da, 0xc28581, "BTLACT_LEVEL_4_ATK"},
    {Kind::BTLACT_DOUBLE_BASH, 0xc28ff9, 0xc28f90, "BTLACT_DOUBLE_BASH"},
    {Kind::BTLACT_LEVEL_2_ATK_POISON, 0xc28f97, 0xc28f2e, "BTLACT_LEVEL_2_ATK_POISON"},
    {Kind::BTLACT_PSI_FIRE_A, 0xc295ab, 0xc29554, "BTLACT_PSI_FIRE_A"},
    {Kind::BTLACT_PSI_FREEZE_A, 0xc29647, 0xc295f0, "BTLACT_PSI_FREEZE_A"},
    {Kind::BTLACT_PSI_ROCKIN_A, 0xc29556, 0xc294ff, "BTLACT_PSI_ROCKIN_A"},
    {Kind::BTLACT_PSI_STARSTORM_A, 0xc29aa6, 0xc29a4f, "BTLACT_PSI_STARSTORM_A"},
    {Kind::BTLACT_HYPNOSIS_A, 0xc29f06, 0xc29eaf, "BTLACT_HYPNOSIS_A"},
    {Kind::BTLACT_PARALYSIS_A, 0xc29ffe, 0xc29fa7, "BTLACT_PARALYSIS_A"},
    {Kind::BTLACT_BRAINSHOCK_A, 0xc2a056, 0xc29fff, "BTLACT_BRAINSHOCK_A"},
    {Kind::BTLACT_BOTTLE_ROCKET, 0xc2a5d1, 0xc2a57a, "BTLACT_BOTTLE_ROCKET"},
    {Kind::BTLACT_BIG_BOTTLE_ROCKET, 0xc2a5da, 0xc2a583, "BTLACT_BIG_BOTTLE_ROCKET"},
    {Kind::BTLACT_MULTI_BOTTLE_ROCKET, 0xc2a5e3, 0xc2a58c, "BTLACT_MULTI_BOTTLE_ROCKET"},
    {Kind::BTLACT_MUMMY_WRAP, 0xc2a50e, 0xc2a4b7, "BTLACT_MUMMY_WRAP"},
    {Kind::BTLACT_HANDBAG_STRAP, 0xc2a5ec, 0xc2a595, "BTLACT_HANDBAG_STRAP"},
    {Kind::BTLACT_YOGURT_DISPENSER, 0xc2a86b, 0xc2a81e, "BTLACT_YOGURT_DISPENSER"},
    {Kind::BTLACT_INSECTICIDE_SPRAY, 0xc2aa0c, 0xc2a9bf, "BTLACT_INSECTICIDE_SPRAY"},
    {Kind::BTLACT_RUST_PROMOTER, 0xc2aa6d, 0xc2aa20, "BTLACT_RUST_PROMOTER"},
    {Kind::BTLACT_COUNTER_PSI, 0xc2a3d1, 0xc2a37a, "BTLACT_COUNTER_PSI"},
    {Kind::BTLACT_SHIELD_KILLER, 0xc2a422, 0xc2a3cb, "BTLACT_SHIELD_KILLER"},
    {Kind::BTLACT_HP_SUCKER, 0xc2a46b, 0xc2a414, "BTLACT_HP_SUCKER"},
    {Kind::BTLACT_DEFENSE_SPRAY, 0xc2aac6, 0xc2aa79, "BTLACT_DEFENSE_SPRAY"},
    {Kind::BTLACT_SUDDEN_GUTS_PILL, 0xc2aa7f, 0xc2aa32, "BTLACT_SUDDEN_GUTS_PILL"},
    {Kind::BTLACT_REDUCEPP, 0xc28e42, 0xc28dd9, "BTLACT_REDUCEPP"},
    {Kind::BTLACT_MAGNET_A, 0xc29f5e, 0xc29f07, "BTLACT_MAGNET_A"},
    {Kind::BTLACT_MAGNET_O, 0xc29fe1, 0xc29f8a, "BTLACT_MAGNET_O"},
    {Kind::HEAL_POISON, 0xc2a39d, 0xc2a346, "HEAL_POISON"},
    {Kind::BTLACT_350_FIRE_DAMAGE, 0xc2900b, 0xc28fa2, "BTLACT_350_FIRE_DAMAGE"},
    {Kind::BTLACT_BAG_OF_DRAGONITE, 0xc2a99c, 0xc2a94f, "BTLACT_BAG_OF_DRAGONITE"},
    {Kind::BTLACT_BOMB, 0xc2a818, 0xc2a7cb, "BTLACT_BOMB"},
    {Kind::BTLACT_DEFENSE_SHOWER, 0xc2ab0d, 0xc2aac0, "BTLACT_DEFENSE_SHOWER"},
    {Kind::BTLACT_DIAMONDIZE, 0xc289ce, 0xc28965, "BTLACT_DIAMONDIZE"},
    {Kind::BTLACT_ENEMYEXTEND, 0xc292eb, 0xc29282, "BTLACT_ENEMYEXTEND"},
    {Kind::BTLACT_GUTS_UP_1D4, 0xc2a14b, 0xc2a0f4, "BTLACT_GUTS_UP_1D4"},
    {Kind::BTLACT_HP_RECOVERY_10000, 0xc2a380, 0xc2a329, "BTLACT_HP_RECOVERY_10000"},
    {Kind::BTLACT_HP_RECOVERY_1D4, 0xc2a0ae, 0xc2a057, "BTLACT_HP_RECOVERY_1D4"},
    {Kind::BTLACT_HP_RECOVERY_200, 0xc2a0cf, 0xc2a078, "BTLACT_HP_RECOVERY_200"},
    {Kind::BTLACT_HP_RECOVERY_300, 0xc2a26f, 0xc2a218, "BTLACT_HP_RECOVERY_300"},
    {Kind::BTLACT_HP_RECOVERY_50, 0xc2a0bf, 0xc2a068, "BTLACT_HP_RECOVERY_50"},
    {Kind::BTLACT_HUNGRY_HP_SUCKER, 0xc2a507, 0xc2a4b0, "BTLACT_HUNGRY_HP_SUCKER"},
    {Kind::BTLACT_IQ_UP_1D4, 0xc2a0ff, 0xc2a0a8, "BTLACT_IQ_UP_1D4"},
    {Kind::BTLACT_LIFEUP_B, 0xc29acf, 0xc29a78, "BTLACT_LIFEUP_B"},
    {Kind::BTLACT_LIFEUP_G, 0xc29ad8, 0xc29a81, "BTLACT_LIFEUP_G"},
    {Kind::BTLACT_LIFEUP_O, 0xc29ae1, 0xc29a8a, "BTLACT_LIFEUP_O"},
    {Kind::BTLACT_LUCK_UP_1D4, 0xc2a227, 0xc2a1d0, "BTLACT_LUCK_UP_1D4"},
    {Kind::BTLACT_LVL_2_ATK_DIAMONDIZE, 0xc2916e, 0xc29105, "BTLACT_LVL_2_ATK_DIAMONDIZE"},
    {Kind::BTLACT_NULL, 0xc2889b, 0xc28842, "BTLACT_NULL"},
    {Kind::BTLACT_NULL10, 0xc2904b, 0xc28fe2, "BTLACT_NULL10"},
    {Kind::BTLACT_NULL11, 0xc2904e, 0xc28fe5, "BTLACT_NULL11"},
    {Kind::BTLACT_NULL12, 0xc2c513, 0xc2c4cd, "BTLACT_NULL12"},
    {Kind::BTLACT_NULL2, 0xc29033, 0xc28fca, "BTLACT_NULL2"},
    {Kind::BTLACT_NULL4, 0xc29039, 0xc28fd0, "BTLACT_NULL4"},
    {Kind::BTLACT_NULL5, 0xc2903c, 0xc28fd3, "BTLACT_NULL5"},
    {Kind::BTLACT_NULL6, 0xc2903f, 0xc28fd6, "BTLACT_NULL6"},
    {Kind::BTLACT_NULL7, 0xc29042, 0xc28fd9, "BTLACT_NULL7"},
    {Kind::BTLACT_NULL8, 0xc29045, 0xc28fdc, "BTLACT_NULL8"},
    {Kind::BTLACT_NULL9, 0xc29048, 0xc28fdf, "BTLACT_NULL9"},
    {Kind::BTLACT_POSSESS, 0xc28bfd, 0xc28b94, "BTLACT_POSSESS"},
    {Kind::BTLACT_PP_RECOVERY_80, 0xc2a0ef, 0xc2a098, "BTLACT_PP_RECOVERY_80"},
    {Kind::BTLACT_PSI_FIRE_B, 0xc295b4, 0xc2955d, "BTLACT_PSI_FIRE_B"},
    {Kind::BTLACT_PSI_FIRE_G, 0xc295bd, 0xc29566, "BTLACT_PSI_FIRE_G"},
    {Kind::BTLACT_PSI_FIRE_O, 0xc295c6, 0xc2956f, "BTLACT_PSI_FIRE_O"},
    {Kind::BTLACT_PSI_FLASH_A, 0xc29987, 0xc29930, "BTLACT_PSI_FLASH_A"},
    {Kind::BTLACT_PSI_FLASH_B, 0xc299ae, 0xc29957, "BTLACT_PSI_FLASH_B"},
    {Kind::BTLACT_PSI_FLASH_G, 0xc299ef, 0xc29998, "BTLACT_PSI_FLASH_G"},
    {Kind::BTLACT_PSI_FLASH_O, 0xc29a35, 0xc299de, "BTLACT_PSI_FLASH_O"},
    {Kind::BTLACT_PSI_FREEZE_B, 0xc29650, 0xc295f9, "BTLACT_PSI_FREEZE_B"},
    {Kind::BTLACT_PSI_FREEZE_G, 0xc29659, 0xc29602, "BTLACT_PSI_FREEZE_G"},
    {Kind::BTLACT_PSI_FREEZE_O, 0xc29662, 0xc2960b, "BTLACT_PSI_FREEZE_O"},
    {Kind::BTLACT_PSI_ROCKIN_B, 0xc2955f, 0xc29508, "BTLACT_PSI_ROCKIN_B"},
    {Kind::BTLACT_PSI_ROCKIN_G, 0xc29568, 0xc29511, "BTLACT_PSI_ROCKIN_G"},
    {Kind::BTLACT_PSI_ROCKIN_O, 0xc29571, 0xc2951a, "BTLACT_PSI_ROCKIN_O"},
    {Kind::BTLACT_PSI_STARSTORM_O, 0xc29aaf, 0xc29a58, "BTLACT_PSI_STARSTORM_O"},
    {Kind::BTLACT_PSI_THUNDER_A, 0xc29871, 0xc2981a, "BTLACT_PSI_THUNDER_A"},
    {Kind::BTLACT_PSI_THUNDER_B, 0xc2987d, 0xc29826, "BTLACT_PSI_THUNDER_B"},
    {Kind::BTLACT_PSI_THUNDER_G, 0xc29889, 0xc29832, "BTLACT_PSI_THUNDER_G"},
    {Kind::BTLACT_PSI_THUNDER_O, 0xc29895, 0xc2983e, "BTLACT_PSI_THUNDER_O"},
    {Kind::BTLACT_RANDOM_STAT_UP_1D4, 0xc2a27f, 0xc2a228, "BTLACT_RANDOM_STAT_UP_1D4"},
    {Kind::BTLACT_RUST_PROMOTER_DX, 0xc2aa76, 0xc2aa29, "BTLACT_RUST_PROMOTER_DX"},
    {Kind::BTLACT_SNAKE, 0xc2a89d, 0xc2a850, "BTLACT_SNAKE"},
    {Kind::BTLACT_SPEED_UP_1D4, 0xc2a193, 0xc2a13c, "BTLACT_SPEED_UP_1D4"},
    {Kind::BTLACT_SUPER_BOMB, 0xc2a821, 0xc2a7d4, "BTLACT_SUPER_BOMB"},
    {Kind::BTLACT_VITALITY_UP_1D4, 0xc2a1db, 0xc2a184, "BTLACT_VITALITY_UP_1D4"},
    {Kind::BTLACT_XTERMINATOR_SPRAY, 0xc2aa15, 0xc2a9c8, "BTLACT_XTERMINATOR_SPRAY"},
    {Kind::REDIRECT_BTLACT_BRAINSHOCK_A, 0xc28d3a, 0xc28cd1, "REDIRECT_BTLACT_BRAINSHOCK_A"},
    {Kind::REDIRECT_BTLACT_BRAINSHOCK_A_COPY, 0xc2a0a7, 0xc2a050,
     "REDIRECT_BTLACT_BRAINSHOCK_A_COPY"},
    {Kind::REDIRECT_BTLACT_DEFENSE_DOWN_A, 0xc29eff, 0xc29ea8, "REDIRECT_BTLACT_DEFENSE_DOWN_A"},
    {Kind::REDIRECT_BTLACT_HYPNOSIS_A, 0xc28e3b, 0xc28dd2, "REDIRECT_BTLACT_HYPNOSIS_A"},
    {Kind::REDIRECT_BTLACT_HYPNOSIS_A_COPY, 0xc29f57, 0xc29f00, "REDIRECT_BTLACT_HYPNOSIS_A_COPY"},
    {Kind::REDIRECT_BTLACT_LEVEL_3_ATK, 0xc2902c, 0xc28fc3, "REDIRECT_BTLACT_LEVEL_3_ATK"},
    {Kind::REDIRECT_BTLACT_OFFENSE_UP_A, 0xc29e7f, 0xc29e28, "REDIRECT_BTLACT_OFFENSE_UP_A"},
    {Kind::REDIRECT_BTLACT_PARALYSIS_A, 0xc2a04f, 0xc29ff8, "REDIRECT_BTLACT_PARALYSIS_A"},
    {Kind::REDIRECT_BTLACT_PSI_SHIELD_A, 0xc29df4, 0xc29d9d, "REDIRECT_BTLACT_PSI_SHIELD_A"},
    {Kind::REDIRECT_BTLACT_PSI_SHIELD_B, 0xc29e31, 0xc29dda, "REDIRECT_BTLACT_PSI_SHIELD_B"},
    {Kind::REDIRECT_BTLACT_SHIELD_A, 0xc29d7a, 0xc29d23, "REDIRECT_BTLACT_SHIELD_A"},
    {Kind::REDIRECT_BTLACT_SHIELD_B, 0xc29db7, 0xc29d60, "REDIRECT_BTLACT_SHIELD_B"},
    {Kind::BTLACT_CALL_FOR_HELP, 0xc2c145, 0xc2c0f0, "BTLACT_CALL_FOR_HELP"},
    {Kind::BTLACT_SOW_SEEDS, 0xc2c13c, 0xc2c0e7, "BTLACT_SOW_SEEDS"},
    {Kind::BTLACT_RAINBOW_OF_COLOURS, 0xc2c14e, 0xc2c0f9, "BTLACT_RAINBOW_OF_COLOURS"},
    {Kind::BTLACT_SWITCH_ARMOR, 0xc1e00f, 0xc1ddd3, "BTLACT_SWITCH_ARMOR"},
    {Kind::BTLACT_SWITCH_WEAPONS, 0xc1de43, 0xc1dc06, "BTLACT_SWITCH_WEAPONS"},
    {Kind::EAT_FOOD, 0xc2b27d, 0xc2b232, "EAT_FOOD"},
    {Kind::BTLACT_STEAL, 0xc2889e, 0xc28845, "BTLACT_STEAL"},
    {Kind::BTLACT_PRAY, 0xc2ad1b, 0xc2accf, "BTLACT_PRAY"},
    {Kind::BTLACT_MIRROR, 0xc2b0a1, 0xc2b055, "BTLACT_MIRROR"},
    {Kind::BTLACT_FREEZETIME, 0xc288eb, 0xc28892, "BTLACT_FREEZETIME"},
    {Kind::BTLACT_SPY, 0xc28770, 0xc28717, "BTLACT_SPY"},
    {Kind::UNKNOWN_C290C6, 0xc290c6, 0xc2905d, "UNKNOWN_C290C6"},
    {Kind::BTLACT_FLY_HONEY, 0xc2c1bd, 0xc2c168, "BTLACT_FLY_HONEY"},
};
void drive_action(SessionRig &rig, actions::Executor::Operation &operation) {
    for (unsigned budget = 0; budget < 1000000; ++budget) {
        const auto progress = rig.n.advance(operation);
        if (progress == dialogue::Progress::Finished)
            return;
        if (progress == dialogue::Progress::Suspended) {
            require(operation.scene(), "Action requested an unowned non-Scene child");
            rig.service(*operation.scene());
        }
    }
    throw std::runtime_error("Complete action exceeded test work budget");
}
void compare_action_shared(Source &source, Native &n) {
    const unsigned number = source.jp ? 0x9f9d : 0x9d12;
    const unsigned experience = source.jp ? 0xab76 : 0xa974;
    const unsigned flags = source.jp ? 0xab6e : 0xa96c;
    const unsigned smash = source.jp ? 0xac63 : 0xaa8e;
    const auto dword = [&](unsigned at) { return source.word(at) | (source.word(at + 2) << 16); };
    check_equal(dword(number), n.prepared.number(), "Prepared full32 number");
    check_equal(source.bus->work_ram[number - 1], n.prepared.item(), "Prepared item");
    check_equal(dword(experience), n.encounter_state.experience_gained, "Accumulated experience");
    check_equal(source.word(experience + 4), n.encounter_state.money_gained, "Accumulated money");
    check_equal(dword(flags), n.action.target_flags, "Shared target mask");
    check_equal(source.word(smash), n.action.smash_attack, "Smash flag");
    check_equal(source.word(smash + 2), n.action.enemy_final_attack, "Final attack flag");
    check_equal(source.word(smash + 4), n.action.skip_death_cleanup, "Death cleanup flag");
    check_equal(source.word(smash + 6), n.action.shield_nullified, "Shield nullification flag");
    check_equal(source.word(smash + 8), n.action.damage_reflected, "Reflection flag");
    check_equal(source.word(source.jp ? 0xabe3 : 0xaa0e), n.encounter_state.special_defeat,
                "Special outcome route");
    check_equal(source.bus->work_ram[source.jp ? 0x994b : 0x9697],
                n.windows.prompt_state().rolling_disabled, "Rolling meter pause");
    check_equal(source.bus->work_ram[source.jp ? 0x9949 : 0x9695],
                n.windows.prompt_state().half_meter_speed, "Rolling meter half speed");
    const unsigned mirror = source.jp ? 0xabe7 : 0xaa12;
    check_equal(source.word(mirror), n.turns.mirror_enemy, "Mirror enemy");
    check_equal(source.word(mirror + 80), n.turns.mirror_turns, "Mirror timer");
    const auto mirror_backup = encode(n.turns.mirror_backup);
    for (unsigned byte = 0; byte < mirror_backup.size(); ++byte)
        check_equal(source.bus->work_ram[mirror + 2 + byte], mirror_backup[byte],
                    "Retained full mirror backup byte=" + std::to_string(byte));
    // Independent char_struct field map, including all six actual records.
    for (unsigned character = 1; character <= 6; ++character) {
        const auto &c = n.party.character(character);
        const unsigned base =
            (source.jp ? 0x9c7f : 0x99ce) + (character - 1) * (source.jp ? 94 : 95);
        const unsigned shift = source.jp ? 1 : 0;
        const auto byte = [&](unsigned offset, unsigned value) {
            check_equal(source.bus->work_ram[base + offset - shift], value,
                        "Party character=" + std::to_string(character) +
                            " byte=" + std::to_string(offset));
        };
        const auto word = [&](unsigned offset, unsigned value) {
            byte(offset, value & 255);
            byte(offset + 1, (value >> 8) & 255);
        };
        byte(5, c.level);
        word(6, c.experience);
        word(8, c.experience >> 16);
        word(10, c.maximum_hp);
        word(12, c.maximum_pp);
        const std::array<unsigned, 14> stats{
            c.offense,   c.defense,   c.speed,         c.guts,         c.luck,
            c.vitality,  c.iq,        c.base_offense,  c.base_defense, c.base_speed,
            c.base_guts, c.base_luck, c.base_vitality, c.base_iq};
        for (unsigned i = 0; i < stats.size(); ++i)
            byte(21 + i, stats[i]);
        for (unsigned i = 0; i < c.items.size(); ++i)
            byte(35 + i, c.items[i]);
        for (unsigned i = 0; i < c.equipment.size(); ++i)
            byte(49 + i, c.equipment[i]);
        word(67, c.hp_fraction);
        word(69, c.current_hp);
        word(71, c.target_hp);
        word(73, c.pp_fraction);
        word(75, c.current_pp);
        word(77, c.target_pp);
        word(79, c.hp_pp_window_options);
        const std::array<unsigned, 11> tail{
            c.miss_rate,        c.fire_resistance,      c.freeze_resistance,
            c.flash_resistance, c.paralysis_resistance, c.hypnosis_brainshock_resistance,
            c.boosted_speed,    c.boosted_guts,         c.boosted_vitality,
            c.boosted_iq,       c.boosted_luck};
        for (unsigned i = 0; i < tail.size(); ++i)
            byte(81 + i, tail[i]);
        byte(94, c.battle_selection);
    }
    for (unsigned side = 0; side < 2; ++side) {
        const auto name = n.prepared.name(side ? dialogue::PreparedName::Target
                                               : dialogue::PreparedName::Attacker);
        const unsigned base = source.jp ? (side ? 0x9f90 : 0x9f82) : (side ? 0x9cf5 : 0x9cd7);
        for (unsigned i = 0; i < name.size(); ++i)
            check_equal(source.bus->work_ram[base + i], name[i], "Prepared retained name byte");
    }
    const auto original = source_text_frame(source);
    const auto current = n.output.frame({14});
    require(current != nullptr, "Action lost its actual battle text window");
    check_equal(original.width, current->width, "Action text width");
    check_equal(original.height, current->height, "Action text height");
    for (unsigned pixel = 0; pixel < original.pixels.size(); ++pixel) {
        check_equal(original.pixels[pixel], current->pixels[pixel],
                    "Action text pixel=" + std::to_string(pixel));
        check_equal(original.priority[pixel], current->priority[pixel], "Action text priority");
        ++counts.text_pixels;
    }
}
void action_helpers(const eb::GameAssets &assets) {
    counts = {};
    Resources resources(assets);
    Source source(assets);
    source.initialize();
    SessionRig rig(resources);
    auto &n = rig.n;
    n.host_input = &source.raw_inputs;
    source.start_main();
    source.until(source.jp ? 0xc24f02 : 0xc24fcf);
    auto startup = n.startup->begin();
    n.drive(*startup);
    require(startup->complete(), "Action prerequisite startup incomplete");
    startup.reset();
    compare_roster(source, n, "Action prerequisite");
    // The main actor caller creates the battle window before any action.
    // Supply that same real window precondition for these direct entries.
    source.call(source.jp ? 0xc1db24 : 0xc1dd47, 14);
    auto window = n.windows.begin({dialogue::WindowAction::Open, dialogue::WindowId{14}, {}, 0});
    while (window->advance() == dialogue::OutputProgress::Suspended) {
        auto scene = n.scene.begin(*window->effect());
        while (scene->advance() != dialogue::Progress::Finished) {
            if (scene->service())
                rig.service(*scene);
        }
        scene.reset();
        window->respond();
    }
    window.reset();
    const unsigned records = source.jp ? 0xa1ae : 0x9fac;
    const unsigned attacker = source.jp ? 0xab72 : 0xa970;
    const unsigned target = source.jp ? 0xab74 : 0xa972;
    std::array<Battler, 32> incoming;
    for (unsigned slot = 0; slot < incoming.size(); ++slot)
        incoming[slot] = n.roster.at(slot);
    unsigned completed = 0;
    std::array<bool, 16> prayer_rolls{};
    unsigned mirror_successes = 0;
    for (const auto &test : cases) {
        const unsigned variants = test.kind == Kind::BTLACT_PRAY ? 16 : 3;
        for (unsigned variant = 0; variant < variants; ++variant) {
            std::cout << (source.jp ? "JP" : "US") << " action=" << test.name
                      << " variant=" << variant << std::endl;
            for (unsigned slot = 0; slot < incoming.size(); ++slot)
                n.roster.at(slot) = incoming[slot];
            auto &a = n.roster.at(0);
            auto &t = n.roster.at(8);
            a.action = 1;
            a.offense = 100;
            t.hp = t.target_hp = 20000;
            t.maximum_hp = 30000;
            t.pp = t.target_pp = 50;
            t.maximum_pp = 1000;
            t.luck = variant == 1 ? 255 : 0;
            t.paralysis_resistance = t.freeze_resistance = t.flash_resistance = t.fire_resistance =
                t.brainshock_resistance = t.hypnosis_resistance = variant == 1 ? 0 : 255;
            if (variant == 2) {
                t.afflictions[0] = 5;
                t.afflictions[2] = 2;
                t.afflictions[3] = 1;
                t.afflictions[6] = 2;
                t.shield_hp = 3;
            }
            // This helper tests the raw ID alone, including an enemy whose
            // numeric ID equals Poo's. Its other path is only a 1d4 heal.
            if (test.kind == Kind::BTLACT_HP_RECOVERY_10000 && variant == 2)
                t.id = 4;
            if (test.kind == Kind::BTLACT_MIRROR) {
                if (variant == 0) {
                    for (unsigned enemy = 1; enemy < EnemyResources::count; ++enemy) {
                        if (n.roster.resources().enemy(enemy).mirror_success) {
                            t.id = static_cast<std::uint16_t>(enemy);
                            break;
                        }
                    }
                } else if (variant == 1) {
                    t.side = 0;
                    t.id = 1;
                    t.row = 1;
                } else
                    t.npc = 5;
            }
            unsigned attacker_slot = 0, target_slot = 8;
            if (test.kind == Kind::BTLACT_CALL_FOR_HELP || test.kind == Kind::BTLACT_SOW_SEEDS ||
                test.kind == Kind::BTLACT_RAINBOW_OF_COLOURS) {
                attacker_slot = 8;
                t.action_argument = static_cast<std::uint8_t>(incoming[8].id);
                t.action = 1;
                if (variant == 1 && test.kind != Kind::BTLACT_RAINBOW_OF_COLOURS)
                    attacker_slot = 0; // Actual player caller fails before chance/placement.
            }
            if (test.kind == Kind::BTLACT_STEAL || test.kind == Kind::EAT_FOOD ||
                test.kind == Kind::BTLACT_SWITCH_WEAPONS ||
                test.kind == Kind::BTLACT_SWITCH_ARMOR) {
                unsigned item = 0;
                for (unsigned candidate = 1; candidate < 256; ++candidate) {
                    const auto props = resources.substitutions->item_properties(candidate);
                    const unsigned type = test.kind == Kind::BTLACT_SWITCH_WEAPONS ? 16
                                          : test.kind == Kind::BTLACT_SWITCH_ARMOR ? 20
                                                                                   : 32;
                    if (props.type == type && (props.flags & 1)) {
                        item = candidate;
                        break;
                    }
                }
                require(item != 0, "Imported inventory case lacks actual matching content");
                const unsigned character = source.jp ? 0x9c7f : 0x99ce;
                const unsigned shift = source.jp ? 1 : 0;
                n.party.character(1).items[0] = static_cast<std::uint8_t>(item);
                source.bus->work_ram[character + 35 - shift] = static_cast<std::uint8_t>(item);
                a.action_argument = static_cast<std::uint8_t>(item);
                a.action_item_slot = 1;
                if (test.kind == Kind::EAT_FOOD || test.kind == Kind::BTLACT_STEAL)
                    target_slot = 0;
                if (test.kind == Kind::BTLACT_STEAL) {
                    attacker_slot = 8;
                    t.action_argument = static_cast<std::uint8_t>(item);
                }
            }
            for (unsigned slot = 0; slot < incoming.size(); ++slot) {
                const auto bytes = encode(n.roster.at(slot));
                std::copy(bytes.begin(), bytes.end(),
                          source.bus->work_ram.begin() + records + slot * 78);
            }
            n.action.attacker = attacker_slot;
            n.action.target = target_slot;
            source.put(attacker, records + attacker_slot * 78);
            source.put(target, records + target_slot * 78);
            n.action.target_flags = 1u << target_slot;
            source.put(target - 6, 1u << target_slot);
            source.put(target - 4, 0);
            n.random.primary_word = std::uint16_t(0x1234 + completed * 7);
            n.random.secondary_word = 0xabcd;
            if (test.kind == Kind::BTLACT_PRAY ||
                (test.kind == Kind::BTLACT_MIRROR && variant == 0)) {
                bool found_seed = false;
                for (unsigned seed = 0; seed < 65536; ++seed) {
                    auto candidate = n.random;
                    candidate.primary_word = static_cast<std::uint16_t>(seed);
                    const unsigned limit = test.kind == Kind::BTLACT_PRAY ? 16 : 100;
                    const auto roll = random_limit(candidate, static_cast<std::uint16_t>(limit));
                    if (test.kind == Kind::BTLACT_PRAY
                            ? roll == variant
                            : roll < n.roster.resources().enemy(t.id).mirror_success) {
                        n.random.primary_word = static_cast<std::uint16_t>(seed);
                        found_seed = true;
                        break;
                    }
                }
                require(found_seed, "No source RAND input reaches the selected helper branch");
            }
            source.put(0x24, n.random.primary_word);
            source.put(0x26, n.random.secondary_word);
            source.call(source.jp ? 0xc23ab9 : 0xc23bcf, 1);
            source.call(source.jp ? 0xc23bf4 : 0xc23d05);
            n.names.fix_attacker(1);
            n.names.fix_target();
            source.call(source.jp ? test.jp : test.us);
            auto operation = rig.executor.begin_action(test.kind);
            drive_action(rig, *operation);
            require(operation->complete(), "Action helper did not complete");
            compare_roster(source, n, test.name);
            compare_party(source, n);
            compare_action_shared(source, n);
            check_equal(source.word(attacker), records + *n.action.attacker * 78,
                        "Current attacker");
            check_equal(source.word(target), records + *n.action.target * 78, "Current target");
            check_equal(source.polls, n.clock.input_polls, "Action input polls");
            if (test.kind == Kind::BTLACT_PRAY)
                prayer_rolls[variant] = true;
            if (test.kind == Kind::BTLACT_MIRROR && variant == 0) {
                require(n.turns.mirror_enemy != 0 && n.turns.mirror_turns == 16,
                        "Complete mirror success branch was not exercised");
                ++mirror_successes;
            }
            ++completed;
        }
    }
    require(
        std::all_of(prayer_rolls.begin(), prayer_rolls.end(), [](bool visited) { return visited; }),
        "Prayer did not exercise all 16 imported table entries");
    require(mirror_successes == 1, "Missing complete successful mirror caller");
    std::cout << (source.jp ? "JP" : "US") << " native complete action helpers=" << completed
              << " checks=" << counts.words << " record_bytes=" << counts.record_bytes
              << " text_pixels=" << counts.text_pixels
              << " instructions=" << source.cpu.instruction_count << '\n';
}
} // namespace
#ifndef NATIVE_BATTLE_ACTIONS_REFERENCE_NO_MAIN
int main(int argc, char **argv) {
    // The included rig also declares the separate full-session proof entry.
    (void)&complete_session;
    if (argc < 2)
        return 77;
    try {
        for (int i = 1; i < argc; ++i)
            action_helpers(eb::load_game_assets(argv[i], eb::asset_profiles()));
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
#endif
