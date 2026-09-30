#include "eb/native/appearance_service.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native {
AppearanceData import_appearance_data(std::span<const std::uint8_t> assets, GameVersion version) {
    const unsigned left = version == GameVersion::JP ? 0x4295d : 0x42a1f;
    const unsigned top = version == GameVersion::JP ? 0x4297f : 0x42a41;
    const unsigned sound = version == GameVersion::JP ? 0x40b20 : 0x40bd4;
    const auto word = [&](unsigned offset) {
        if (offset >= assets.size() || assets.size() - offset < 2)
            throw std::invalid_argument("Truncated native appearance content");
        return std::uint16_t(assets[offset] | unsigned(assets[offset + 1]) << 8);
    };
    AppearanceData result;
    for (unsigned i = 0; i < result.shape_extents.size(); ++i)
        result.shape_extents[i] = {word(left + i * 2), word(top + i * 2)};
    for (unsigned i = 0; i < result.footstep_sounds.size(); ++i)
        result.footstep_sounds[i] = word(sound + i * 2);
    return result;
}

bool appearance_refresh_visible(const AppearanceData &data, unsigned shape, int screen_x, int screen_y) {
    const auto extent = data.shape_extents.at(shape);
    const auto left = std::uint16_t(std::uint16_t(screen_x) - extent.left);
    const auto top = std::uint16_t(std::uint16_t(screen_y) - extent.top);
    const auto bottom = std::uint16_t(std::uint16_t(screen_y) + 8);
    return ((left | top | bottom) & 0xff00) == 0;
}

AppearanceServiceResult apply_appearance_action(const BoundAction &action, ActionActorState &actor,
                                                const ActorActionContext &context,
                                                const AppearanceActorContext &appearance_context,
                                                const AppearanceSceneContext &scene,
                                                const AppearanceData &data, SpriteAppearance &appearance) {
    using A = NativeAction;
    const auto operation = action.operation;
    if (operation != A::SelectFourInitial && operation != A::SelectFourAnimation &&
        operation != A::SelectFourFirst && operation != A::SelectFourSecond &&
        operation != A::CheckAppearanceVisible && operation != A::StepFourWalk &&
        operation != A::StepEightAnimation)
        return {};
    AppearanceServiceResult result{true, false, std::nullopt, std::nullopt};
    if (operation == A::CheckAppearanceVisible) {
        const auto visible = appearance_refresh_visible(data, appearance_context.shape, context.projected_x,
                                                        context.projected_y);
        result.script_value = visible ? 0xffff : 0;
        return result;
    }

    auto updated_actor = actor;
    auto updated_appearance = appearance;
    if (operation == A::StepFourWalk) {
        result.refreshed = updated_appearance.step_four_walk(
            {context.direction, scene.movement_counter, appearance_context.phase_id,
             appearance_context.walking_style, context.surface_flags});
        if (!result.refreshed)
            result.script_value = updated_appearance.fingerprint();
    } else if (operation == A::StepEightAnimation) {
        const auto old_fingerprint = appearance.fingerprint();
        const auto update = updated_appearance.step_eight(
            updated_actor, {context.direction, appearance_context.walking_style, context.surface_flags,
                            scene.battle_swirl_ticks, scene.intangibility_ticks,
                            scene.teleport_destination != 0, appearance_context.footstep_owner});
        result.refreshed = update.refreshed;
        if (update.footstep) {
            const auto sound = data.footstep_sounds.at(scene.footstep_override.value_or(scene.footstep_kind));
            if (sound && !scene.transitions_disabled)
                result.sound = sound;
        }
        // A changed fingerprint returns straight from its graphics upload.
        // Other paths inspect teleport/flash state after any frame refresh.
        if (old_fingerprint == updated_appearance.fingerprint()) {
            if (scene.teleport_destination)
                result.script_value = scene.teleport_destination;
            else if (!scene.intangibility_ticks)
                result.script_value = 0;
        }
    } else {
        // The authored first/second entries call the visibility predicate, but
        // their following branch observes the helper's restored workspace,
        // not its result. In the action-script domain they always refresh.
        // Preserve that observable behavior without modeling processor flags.
        const auto phase = operation == A::SelectFourAnimation
                               ? actor.animation
                               : std::uint16_t(operation == A::SelectFourSecond);
        updated_appearance.select_four(context.direction, phase, context.surface_flags);
        result.refreshed = true;
    }
    actor = updated_actor;
    appearance = std::move(updated_appearance);
    return result;
}
} // namespace eb::native
