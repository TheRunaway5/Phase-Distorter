#include "executor_internal.hpp"

namespace eb::native::battle::actions {
// Catalog entries select named gameplay handlers, never executable addresses.
// Redirect entries intentionally share the same complete native routine.
detail::Routine Executor::Operation::Execution::execute(Kind kind) {
    switch (kind) {
    case Kind::None:
    case Kind::BTLACT_NULL: case Kind::BTLACT_NULL2: case Kind::BTLACT_NULL4:
    case Kind::BTLACT_NULL5: case Kind::BTLACT_NULL6: case Kind::BTLACT_NULL7:
    case Kind::BTLACT_NULL8: case Kind::BTLACT_NULL9: case Kind::BTLACT_NULL10:
    case Kind::BTLACT_NULL11: case Kind::BTLACT_NULL12: case Kind::BTLACT_ENEMYEXTEND:
        co_return 0;
    case Kind::BTLACT_BASH: co_return co_await physical(2);
    case Kind::BTLACT_SHOOT: co_return co_await physical(2, true);
    case Kind::BTLACT_LEVEL_1_ATK: co_return co_await physical(1);
    case Kind::BTLACT_LEVEL_3_ATK:
    case Kind::REDIRECT_BTLACT_LEVEL_3_ATK: co_return co_await physical(3);
    case Kind::BTLACT_LEVEL_4_ATK: co_return co_await physical(4);
    case Kind::BTLACT_DOUBLE_BASH:
        co_await physical(2); co_return co_await physical(2);
    case Kind::BTLACT_LEVEL_2_ATK_POISON: co_return co_await physical(2, false, 5);
    case Kind::BTLACT_LVL_2_ATK_DIAMONDIZE: co_return co_await physical(2, false, 2);
    case Kind::BTLACT_PSI_FIRE_A: co_return co_await psi_damage(0, 80);
    case Kind::BTLACT_PSI_FIRE_B: co_return co_await psi_damage(0, 160);
    case Kind::BTLACT_PSI_FIRE_G: co_return co_await psi_damage(0, 240);
    case Kind::BTLACT_PSI_FIRE_O: co_return co_await psi_damage(0, 320);
    case Kind::BTLACT_PSI_FREEZE_A: co_return co_await psi_damage(1, 180);
    case Kind::BTLACT_PSI_FREEZE_B: co_return co_await psi_damage(1, 360);
    case Kind::BTLACT_PSI_FREEZE_G: co_return co_await psi_damage(1, 540);
    case Kind::BTLACT_PSI_FREEZE_O: co_return co_await psi_damage(1, 720);
    case Kind::BTLACT_PSI_ROCKIN_A: co_return co_await psi_damage(2, 80);
    case Kind::BTLACT_PSI_ROCKIN_B: co_return co_await psi_damage(2, 180);
    case Kind::BTLACT_PSI_ROCKIN_G: co_return co_await psi_damage(2, 320);
    case Kind::BTLACT_PSI_ROCKIN_O: co_return co_await psi_damage(2, 640);
    case Kind::BTLACT_PSI_STARSTORM_A: co_return co_await psi_damage(3, 360);
    case Kind::BTLACT_PSI_STARSTORM_O: co_return co_await psi_damage(3, 720);
    case Kind::BTLACT_PSI_THUNDER_A: co_return co_await thunder(120, 1);
    case Kind::BTLACT_PSI_THUNDER_B: co_return co_await thunder(120, 2);
    case Kind::BTLACT_PSI_THUNDER_G: co_return co_await thunder(200, 3);
    case Kind::BTLACT_PSI_THUNDER_O: co_return co_await thunder(200, 4);
    case Kind::BTLACT_PSI_FLASH_A: co_return co_await flash(0);
    case Kind::BTLACT_PSI_FLASH_B: co_return co_await flash(1);
    case Kind::BTLACT_PSI_FLASH_G: co_return co_await flash(2);
    case Kind::BTLACT_PSI_FLASH_O: co_return co_await flash(3);
    case Kind::BTLACT_LIFEUP_A: co_return co_await recover_hp(target_slot(), variance25(o.random, 100));
    case Kind::BTLACT_LIFEUP_B: co_return co_await recover_hp(target_slot(), variance25(o.random, 300));
    case Kind::BTLACT_LIFEUP_G: co_return co_await recover_hp(target_slot(), variance25(o.random, 10000));
    case Kind::BTLACT_LIFEUP_O: co_return co_await recover_hp(target_slot(), variance25(o.random, 400));
    case Kind::BTLACT_HEALING_A: co_return co_await healing(0);
    case Kind::BTLACT_HEALING_B: co_return co_await healing(1);
    case Kind::BTLACT_HEALING_G: co_return co_await healing(2);
    case Kind::BTLACT_HEALING_O: co_return co_await healing(3);
    case Kind::BTLACT_HYPNOSIS_A: case Kind::REDIRECT_BTLACT_HYPNOSIS_A:
    case Kind::REDIRECT_BTLACT_HYPNOSIS_A_COPY:
        co_return co_await status_psi(2, 1, &Battler::hypnosis_resistance, Text::MSG_BTL_NEMURI_ON);
    case Kind::BTLACT_PARALYSIS_A: case Kind::REDIRECT_BTLACT_PARALYSIS_A:
        co_return co_await status_psi(0, 3, &Battler::paralysis_resistance, Text::MSG_BTL_SHIBIRE_ON);
    case Kind::BTLACT_BRAINSHOCK_A: case Kind::REDIRECT_BTLACT_BRAINSHOCK_A:
    case Kind::REDIRECT_BTLACT_BRAINSHOCK_A_COPY:
        co_return co_await status_psi(3, 1, &Battler::brainshock_resistance, Text::MSG_BTL_HEN_ON);
    case Kind::BTLACT_SHIELD_A: case Kind::REDIRECT_BTLACT_SHIELD_A:
        co_return co_await shield_apply(4, Text::MSG_BTL_SHIELD_ADD, Text::MSG_BTL_SHIELD_ON);
    case Kind::BTLACT_SHIELD_B: case Kind::REDIRECT_BTLACT_SHIELD_B:
        co_return co_await shield_apply(3, Text::MSG_BTL_POWER_ADD, Text::MSG_BTL_POWER_ON);
    case Kind::BTLACT_PSI_SHIELD_A: case Kind::REDIRECT_BTLACT_PSI_SHIELD_A:
        co_return co_await shield_apply(2, Text::MSG_BTL_PSYCO_ADD, Text::MSG_BTL_PSYCO_ON);
    case Kind::BTLACT_PSI_SHIELD_B: case Kind::REDIRECT_BTLACT_PSI_SHIELD_B:
        co_return co_await shield_apply(1, Text::MSG_BTL_PSYPOWER_ADD, Text::MSG_BTL_PSYPOWER_ON);
    case Kind::BTLACT_DIAMONDIZE: case Kind::BTLACT_PARALYZE:
    case Kind::BTLACT_NAUSEATE: case Kind::BTLACT_POISON: case Kind::BTLACT_COLD:
    case Kind::BTLACT_MUSHROOMIZE: case Kind::BTLACT_POSSESS:
    case Kind::BTLACT_CRYING: case Kind::BTLACT_CRYING2:
    case Kind::BTLACT_IMMOBILIZE: case Kind::BTLACT_SOLIDIFY:
    case Kind::BTLACT_DISTRACT: case Kind::BTLACT_FEELSTRANGE:
        co_return co_await status_action(kind);
    case Kind::REDIRECT_BTLACT_OFFENSE_UP_A: co_return co_await stat_action(Kind::BTLACT_OFFENSE_UP_A);
    case Kind::REDIRECT_BTLACT_DEFENSE_DOWN_A: co_return co_await stat_action(Kind::BTLACT_DEFENSE_DOWN_A);
    case Kind::BTLACT_OFFENSE_UP_A: case Kind::BTLACT_DEFENSE_DOWN_A:
    case Kind::BTLACT_REDUCEOFF: case Kind::BTLACT_REDUCEOFFDEF: case Kind::BTLACT_CUTGUTS:
        co_return co_await stat_action(kind);
    case Kind::BTLACT_HP_RECOVERY_1D4:
        co_return co_await recover_hp(target_slot(), static_cast<std::uint16_t>(random_limit(o.random, 4) + 1));
    case Kind::BTLACT_HP_RECOVERY_10: co_return co_await recover_hp(target_slot(), variance25(o.random, 10));
    case Kind::BTLACT_HP_RECOVERY_50: co_return co_await recover_hp(target_slot(), variance25(o.random, 50));
    case Kind::BTLACT_HP_RECOVERY_100: co_return co_await recover_hp(target_slot(), variance25(o.random, 100));
    case Kind::BTLACT_HP_RECOVERY_200: co_return co_await recover_hp(target_slot(), variance25(o.random, 200));
    case Kind::BTLACT_HP_RECOVERY_300: co_return co_await recover_hp(target_slot(), variance25(o.random, 300));
    case Kind::BTLACT_HP_RECOVERY_10000:
        co_return co_await recover_hp(target_slot(), target().id == 4 ? 10000 :
            static_cast<std::uint16_t>(random_limit(o.random, 4) + 1));
    case Kind::BTLACT_PP_RECOVERY_20: co_return co_await recover_pp(target_slot(), variance25(o.random, 20));
    case Kind::BTLACT_PP_RECOVERY_80: co_return co_await recover_pp(target_slot(), variance25(o.random, 80));
    case Kind::BTLACT_IQ_UP_1D4: co_return co_await boost(5);
    case Kind::BTLACT_GUTS_UP_1D4: co_return co_await boost(3);
    case Kind::BTLACT_SPEED_UP_1D4: co_return co_await boost(2);
    case Kind::BTLACT_VITALITY_UP_1D4: co_return co_await boost(4);
    case Kind::BTLACT_LUCK_UP_1D4: co_return co_await boost(6);
    case Kind::BTLACT_RANDOM_STAT_UP_1D4: co_return co_await boost(random_limit(o.random, 7));
    case Kind::BTLACT_BOTTLE_ROCKET: co_return co_await bottle_rockets(1);
    case Kind::BTLACT_BIG_BOTTLE_ROCKET: co_return co_await bottle_rockets(5);
    case Kind::BTLACT_MULTI_BOTTLE_ROCKET: co_return co_await bottle_rockets(20);
    case Kind::BTLACT_BOMB: co_return co_await bomb(90);
    case Kind::BTLACT_SUPER_BOMB: co_return co_await bomb(270);
    case Kind::BTLACT_HANDBAG_STRAP: case Kind::BTLACT_MUMMY_WRAP:
    case Kind::BTLACT_YOGURT_DISPENSER: case Kind::BTLACT_SNAKE:
    case Kind::BTLACT_INSECTICIDE_SPRAY: case Kind::BTLACT_XTERMINATOR_SPRAY:
    case Kind::BTLACT_RUST_PROMOTER: case Kind::BTLACT_RUST_PROMOTER_DX:
    case Kind::BTLACT_COUNTER_PSI: case Kind::BTLACT_SHIELD_KILLER:
    case Kind::BTLACT_HP_SUCKER: case Kind::BTLACT_HUNGRY_HP_SUCKER:
    case Kind::BTLACT_DEFENSE_SPRAY: case Kind::BTLACT_DEFENSE_SHOWER:
    case Kind::BTLACT_SUDDEN_GUTS_PILL: co_return co_await item_effect(kind);
    case Kind::BTLACT_BAG_OF_DRAGONITE:
        co_return co_await resist_damage(variance25(o.random, 800), target().fire_resistance);
    case Kind::BTLACT_350_FIRE_DAMAGE:
        co_return co_await resist_damage(variance25(o.random, 350), target().fire_resistance);
    case Kind::BTLACT_MAGNET_A: case Kind::BTLACT_MAGNET_O: case Kind::BTLACT_REDUCEPP:
    case Kind::HEAL_POISON: case Kind::BTLACT_MIRROR: case Kind::UNKNOWN_C290C6:
    case Kind::BTLACT_SPY: case Kind::BTLACT_FREEZETIME: case Kind::BTLACT_FLY_HONEY:
    case Kind::BTLACT_RAINBOW_OF_COLOURS: case Kind::BTLACT_STEAL:
        co_return co_await utility(kind);
    case Kind::BTLACT_CALL_FOR_HELP: co_return co_await call_help(false);
    case Kind::BTLACT_SOW_SEEDS: co_return co_await call_help(true);
    case Kind::BTLACT_PRAY: co_return co_await pray();
    case Kind::EAT_FOOD: co_return co_await eat_food();
    case Kind::BTLACT_SWITCH_WEAPONS: case Kind::BTLACT_SWITCH_ARMOR:
        co_return co_await equipment(kind);
    case Kind::BTLACT_TELEPORT_BOX: case Kind::BTLACT_CLUMSYDEATH: case Kind::BTLACT_MASTERBARFDEATH:
    case Kind::BTLACT_POKEY_SPEECH: case Kind::BTLACT_POKEY_SPEECH_2:
    case Kind::BTLACT_GIYGAS_PRAYER_1: case Kind::BTLACT_GIYGAS_PRAYER_2:
    case Kind::BTLACT_GIYGAS_PRAYER_3: case Kind::BTLACT_GIYGAS_PRAYER_4:
    case Kind::BTLACT_GIYGAS_PRAYER_5: case Kind::BTLACT_GIYGAS_PRAYER_6:
    case Kind::BTLACT_GIYGAS_PRAYER_7: case Kind::BTLACT_GIYGAS_PRAYER_8:
    case Kind::BTLACT_GIYGAS_PRAYER_9: co_return co_await special(kind);
    }
    throw std::runtime_error("Invalid battle action catalog kind");
}
} // namespace eb::native::battle::actions
