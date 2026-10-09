#include "eb/native/world_activation.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
std::int16_t signed_word(unsigned value) {
    value &= 0xffff;
    return std::int16_t(value < 0x8000 ? int(value) : int(value) - 65536);
}
bool flag(std::span<const std::uint8_t> flags, unsigned id) {
    if (!id) return false;
    if ((id - 1) / 8 >= flags.size())
        throw std::invalid_argument("Missing native NPC appearance flag");
    return (flags[(id - 1) / 8] & (1u << ((id - 1) & 7))) != 0;
}
void validate(const NpcActivationState &state) {
    if (state.tileset >= 32 ||
        (state.mode != NpcSpawnMode::Disabled && state.mode != NpcSpawnMode::Initial &&
         state.mode != NpcSpawnMode::Streaming))
        throw std::invalid_argument("Invalid native NPC activation state");
}
bool eligible(const NpcPlacement &placement, const NpcDefinition &definition,
              const NpcActivationState &state) {
    if (placement.tileset != state.tileset) return false;
    const auto x = std::uint16_t(placement.x - state.camera.x);
    const auto y = std::uint16_t(placement.y - state.camera.y);
    const bool exclude_visible = state.mode != NpcSpawnMode::Initial ||
                                (state.debug.enabled && state.debug.shoulder_buttons_held);
    if (exclude_visible && x < 256 && y < 224) return false;
    if (signed_word(x) < -64 || signed_word(x) >= 320 ||
        signed_word(y) < -64 || signed_word(y) >= 320)
        return false;
    if (state.photograph) return definition.appearance == NpcAppearance::Always;
    const bool apply_flags = !state.debug.enabled || state.debug.mode != 1;
    if (apply_flags && definition.appearance != NpcAppearance::Always &&
        flag(state.event_flags, definition.event_flag) !=
            (definition.appearance == NpcAppearance::FlagOn))
        return false;
    return !state.objects_only || definition.type == NpcType::Object;
}
} // namespace

bool npc_within_retention_area(std::uint16_t x, std::uint16_t y,
                              std::uint16_t leader_x, std::uint16_t leader_y,
                              std::uint16_t teleport_speed) {
    if (teleport_speed >= 4) return true;
    const auto dx = std::uint16_t(x - std::uint16_t(leader_x - 128));
    const auto dy = std::uint16_t(y - std::uint16_t(leader_y - 112));
    return (dx >= 0xffc0 || dx < 320) && (dy >= 0xffc0 || dy < 320);
}

WorldActivation::WorldActivation(std::shared_ptr<const NpcCatalog> npcs,
                                 std::shared_ptr<SpriteResources> sprites,
                                 std::shared_ptr<const ActionScriptData> scripts,
                                 GameVersion version, CameraStreamOrigin origin)
    : npcs_(std::move(npcs)), sprites_(std::move(sprites)), scripts_(std::move(scripts)),
      photograph_script_(npc_catalog_layout(version).photograph_script), origin_(origin) {
    if (!npcs_ || !sprites_ || !scripts_)
        throw std::invalid_argument("Native activation requires imported NPC, sprite and action content");
}

std::uint16_t WorldActivation::initial_direction(const ActorWorld &world, ActorId id) const {
    const auto &actor = world.actor(id);
    const auto npc = actor.authored_role() ? world.authored_npc_selector(*actor.authored_role())
                                         : actor.npc().value_or(0xffff);
    return npc == 0xffff ? 4 : std::uint16_t(npcs_->definition(npc).direction);
}

std::vector<NpcActivation> WorldActivation::activate_cell(ActorWorld &world, unsigned cell_x,
    unsigned cell_y, const NpcActivationState &state) const {
    if(active_||failed_)throw std::logic_error("NPC activation has unfinished or failed raw creation");
    validate(state);
    std::vector<NpcActivation> result;
    if (state.mode == NpcSpawnMode::Disabled || cell_x >= 32 || cell_y >= 40) return result;
    for (const auto &placement : npcs_->cell(cell_x, cell_y)) {
        // Imported NPC identity is checked at consumption time, after all prior
        // placements have committed. Readiness queries cannot do this for us.
        const auto spec=prepare_candidate(world,placement,state);
        if(!spec)continue;
        const auto actor = world.create_authored(*spec);
        if (!actor)
            throw std::runtime_error("Native NPC activation exhausted its authored logical role range");
        result.push_back({*actor, {placement,spec->script},spec->sprite,spec->behavior.direction});
    }
    return result;
}
std::optional<WorldActorSpec> WorldActivation::prepare_candidate(ActorWorld &world,
    const NpcPlacement &placement,const NpcActivationState &state) const {
    if(world.actor_for_npc(placement.npc))return {};
    const auto &definition=npcs_->definition(placement.npc);
    if(!eligible(placement,definition,state))return {};
    auto prepared=state.prepared;
    prepared.x=placement.x;prepared.y=placement.y;prepared.direction=definition.direction;
    unsigned script=state.photograph?photograph_script_:definition.script;
    if(!state.photograph&&state.debug.enabled&&state.debug.mode==1)script=std::min(script,10u);
    return make_actor_spec(definition.sprite,script,prepared,*sprites_,*scripts_,placement.npc);
}

std::vector<NpcActivation> WorldActivation::activate_strip(ActorWorld &world,
    const CameraRefreshIntent &intent, const NpcActivationState &state,
    NpcStripAdmission admission) const {
    validate(state);
    if (intent.service != CameraRefreshService::Npcs ||
        (intent.axis != CameraStripAxis::Column && intent.axis != CameraStripAxis::Row) ||
        (admission != NpcStripAdmission::Rejected && admission != NpcStripAdmission::Admitted))
        throw std::invalid_argument("Invalid native NPC activation strip");
    std::vector<NpcActivation> result;
    if (admission == NpcStripAdmission::Rejected || state.mode == NpcSpawnMode::Disabled) return result;
    const bool row = intent.axis == CameraStripAxis::Row;
    const auto fixed = std::uint16_t(row ? intent.y : intent.x) >> 5;
    const auto start = std::uint16_t((row ? int(intent.x) - 2 : int(intent.y)));
    const unsigned count = row ? 38 : 32;
    unsigned previous = 0x8000;
    for (unsigned step = 0; step < count; ++step) {
        const auto coordinate = std::uint16_t(start + step);
        if (coordinate >= 0x8000) continue;
        const unsigned cell = coordinate >> 5;
        if (cell == previous) continue;
        auto created = activate_cell(world, row ? cell : fixed, row ? fixed : cell, state);
        result.insert(result.end(), created.begin(), created.end());
        previous = cell;
    }
    return result;
}

void WorldActivation::begin(CameraRefreshPlan plan, CameraPosition camera) {
    if(active_||failed_)throw std::logic_error("NPC activation has unfinished or failed raw creation");
    if (request_) throw std::logic_error("Native activation traversal is already pending");
    plan_ = std::move(plan);
    camera_ = camera;
    next_ = 0;
    if (plan_.intents.empty()) origin_ = plan_.origin;
    else request_ = plan_.intents.front();
}
void WorldActivation::begin_refresh(CameraPosition camera) {
    begin(plan_camera_refresh(origin_, camera), camera);
}
void WorldActivation::begin_initial_load(CameraPosition center) {
    const CameraStreamOrigin origin{signed_word((center.x >> 3) - 16),
                                    signed_word((center.y >> 3) - 14)};
    CameraRefreshPlan plan{origin, {}};
    plan.intents.reserve(80);
    for (int row = -1; row < 31; ++row)
        plan.intents.push_back({CameraRefreshService::Npcs, CameraStripAxis::Row,
                                origin.x, signed_word(int(origin.y) + row)});
    for (int row = -8; row < 40; ++row)
        plan.intents.push_back({CameraRefreshService::Enemies, CameraStripAxis::Row,
                                signed_word(int(origin.x) - 8), signed_word(int(origin.y) + row)});
    begin(std::move(plan), {std::uint16_t(center.x - 128), std::uint16_t(center.y - 112)});
}
void WorldActivation::complete_request() {
    if (++next_ == plan_.intents.size()) {
        origin_ = plan_.origin;
        request_.reset();
    } else request_ = plan_.intents[next_];
}
std::vector<NpcActivation> WorldActivation::activate_next(ActorWorld &world,
    const NpcActivationState &state, NpcStripAdmission admission) {
    if (!request_ || request_->service != CameraRefreshService::Npcs)
        throw std::logic_error("Native activation has no pending NPC request");
    if (state.camera != camera_)
        throw std::invalid_argument("Native activation camera changed during a traversal");
    auto result = activate_strip(world, *request_, state, admission);
    complete_request();
    return result;
}
void WorldActivation::complete_enemy_request() {
    if (!request_ || request_->service != CameraRefreshService::Enemies)
        throw std::logic_error("Native activation has no pending enemy request");
    complete_request();
}
} // namespace eb::native

namespace eb::native {
void WorldActivation::reset_after_reload(CameraPosition center) {
    if (request_) throw std::logic_error("Map reload cannot replace activation work");
    camera_ = {std::uint16_t(center.x - 128), std::uint16_t(center.y - 112)};
    origin_ = camera_stream_origin(camera_);
    plan_ = {};
    next_ = 0;
}
}
