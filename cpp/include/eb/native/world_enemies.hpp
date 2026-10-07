#pragma once

#include "eb/native/actor_creation.hpp"
#include "eb/native/camera_refresh.hpp"
#include <variant>

namespace eb::native {
struct EnemySpawnEncounter {
    std::uint16_t event_flag{};
    std::array<std::uint8_t, 2> chance{};
    // Eight entries for each nonzero-chance branch, in authored weight order.
    std::vector<unsigned> choices;
};
struct EnemySpawnMember { unsigned count{}, enemy{}; };
struct EnemySpawnDefinition { unsigned sprite{}, script{}; std::uint8_t terrain_mask{}, name_initial{}, level{}; };
struct EnemyBattleBehavior { std::uint16_t run_away_flag{}; std::uint8_t run_away_state{}; };
struct EnemySpawnSector { unsigned tileset{}, butterfly_chance{}; };
// C02668's two independent wrapped word products can select neighboring
// authored content when a camera strip crosses a map border. Retain only the
// decoded scalar read domains at import; runtime selection never reads ROM.
struct EnemySpawnSectorLookups {
    std::array<std::uint8_t, 65536> tilesets{};
    std::array<std::uint8_t, 32768> butterfly_modes{};
};
struct EnemySpawnData {
    std::array<unsigned, 128 * 160> cells{};
    std::array<EnemySpawnSector, 32 * 80> sectors{};
    std::shared_ptr<const EnemySpawnSectorLookups> sector_lookups;
    std::vector<EnemySpawnEncounter> encounters;
    std::vector<std::vector<EnemySpawnMember>> battles;
    std::vector<EnemyBattleBehavior> battle_behaviors;
    std::vector<EnemySpawnMember> debug_battle;
    std::vector<EnemySpawnDefinition> enemies;
    unsigned butterfly_battle{}, butterfly_enemy = 225;
    // Authored signed strip conversion differs by content region.
    std::uint16_t negative_cell_prefix = 0xf000;
    unsigned encounter(unsigned x, unsigned y) const;
    EnemySpawnSector sector(unsigned x, unsigned y) const;
};
EnemySpawnData import_enemy_spawn_data(std::span<const std::uint8_t> assets, GameVersion version);

struct EnemySpawnState {
    unsigned tileset{};
    std::vector<std::uint8_t> event_flags;
    bool enabled = true, monsters_disabled{}, final_boss_defeated{};
    bool debug_forced_encounter{}, bypass_chance{};
    PreparedActorState prepared;
};
struct EnemySpawnCell {
    unsigned x{}, y{}, encounter{}, width{}, height{};
    bool operator==(const EnemySpawnCell &) const = default;
};
std::vector<EnemySpawnCell> plan_enemy_spawn_strip(const EnemySpawnData &data, CameraRefreshIntent intent,
                                                   const EnemySpawnState &state);

struct EnemyPopulation {
    std::uint16_t spawn_counter{}, count{}, maximum{}, butterfly_spawned{}, capacity_failures{};
    // Authored diagnostic state. These values are retained when a gate exits
    // before writing them; they are not native resource IDs or addresses.
    std::uint16_t encounter{}, chance{}, battle{}, name_initial{}, sprite{}, remaining{};
};
struct EnemyActorState {
    ActorId actor{};
    unsigned battle{}, enemy{};
    std::uint16_t spawn_cell{}, weakness{};
    bool has_identity = true;
    // Authored NPC selectors identify an encounter group, not its spawn cell.
    // Appearance release clears that identity while the actor may still live.
    std::optional<NpcId> npc_identity() const noexcept {
        return has_identity ? std::optional<NpcId>(std::uint16_t(battle + 0x8000u)) : std::nullopt;
    }
};
struct EnemySpawnCreation { ActorId actor{}; unsigned enemy{}, sprite{}, script{}; };
enum class EnemyRandomPurpose { DebugEncounter, ButterflyChance, EncounterChance, WeightedGroup,
                                PositionX, PositionY, Weakness };
struct EnemyRandomRequest { EnemyRandomPurpose purpose{}; };
struct EnemyTerrainRequest { ActorId actor{}; std::uint16_t x{}, y{}; unsigned enemy{}; };
using EnemySpawnRequest = std::variant<EnemyRandomRequest, EnemyTerrainRequest>;

// Authoritative authored spawn selection/placement/lifetime. It executes no AI,
// encounter, audio, RNG algorithm or collision fallback. Randomness and the
// actor-shape terrain query are ordered requests, answered exactly once by the
// scene's native services. Artwork preparation never calls this owner.
class WorldEnemies {
  public:
    WorldEnemies(std::shared_ptr<const EnemySpawnData> data, std::shared_ptr<SpriteResources> sprites,
                 std::shared_ptr<const ActionScriptData> scripts, EnemyPopulation population = {});
    const EnemyPopulation &population() const { return population_; }
    void set_maximum(std::uint16_t);
    // Map initialization clears these counters before its ordered releases.
    // Later identity releases preserve their original word decrement/wrap.
    void reset_population_for_map();
    const EnemySpawnData &data() const noexcept { return *data_; }
    bool uses(const ActorWorld &) const noexcept;
    const std::vector<EnemyActorState> &actors() const { return actors_; }
    const std::optional<EnemySpawnRequest> &request() const { return request_; }
    bool busy() const;
    std::optional<EnemySpawnCreation> pending_creation() const;
    void begin_cell(ActorWorld &world, unsigned x, unsigned y, unsigned encounter,
                    unsigned width, unsigned height, EnemySpawnState state);
    void begin_strip(ActorWorld &world, CameraRefreshIntent intent, EnemySpawnState state);
    void respond_random(ActorWorld &world, std::uint8_t value);
    void respond_terrain(ActorWorld &world, std::uint16_t flags);
    // Enemy graphics release clears typed enemy identity/count/butterfly state
    // while leaving its actor/task/order/role intact. Full deletion also erases
    // the actor. Ordinary NPC accounting is not changed by these operations.
    bool release_appearance(ActorWorld &world, ActorId actor);
    bool erase(ActorWorld &world, ActorId actor);
    // The scene calls this after an actor tick. Source task End only unlinks
    // a task; enemy scripts must release their appearance first. Retire those
    // released records, and reject uncoordinated disappearance of an active
    // enemy instead of silently changing population or retaining stale identity.
    // This guard also runs before every new spawn traversal.
    void synchronize_lifetimes(const ActorWorld &world);
    bool release_authored_role(ActorWorld &, unsigned role);
    std::optional<NpcId> identity(ActorId) const;
    std::optional<unsigned> enemy_type(ActorId) const noexcept;
    std::optional<unsigned> retired_enemy_type(unsigned role) const;

  private:
    friend class ActorWorld;
    // ActorWorld invokes these only while bound to this exact native lifetime
    // owner. Script retirement retains source accounting/identity in a role,
    // but removes the dead host ActorId from the active enemy collection.
    std::optional<NpcId> retirement_identity(ActorId, std::optional<unsigned> role);
    void reuse_authored_role(ActorId, unsigned role, bool graphical);
    void clear_retired_identities();
    void bind_world(const ActorWorld &);
    void require_world(const ActorWorld &) const;
    // Persistent state provenance outlives an observer lease. It carries no
    // pointer to a destroyed world and cannot alias a new world's local IDs.
    std::shared_ptr<const void> world_identity_;
    enum class Stage { Idle, Start, Normal, SelectMembers, Member, Position, NeedY, Terrain, Weakness };
    void begin(ActorWorld &world, std::vector<EnemySpawnCell> cells, EnemySpawnState state);
    void advance(ActorWorld &world);
    void random(EnemyRandomPurpose purpose);
    void select_battle(unsigned battle, bool duplicate_check, ActorWorld &world, bool debug = false);
    void finish_cell();
    EnemySpawnSector sector() const;
    std::shared_ptr<const EnemySpawnData> data_;
    std::shared_ptr<SpriteResources> sprites_;
    std::shared_ptr<const ActionScriptData> scripts_;
    EnemyPopulation population_;
    std::vector<EnemyActorState> actors_;
    struct RetiredEnemy {
        unsigned battle{}, enemy{};
        std::uint16_t spawn_cell{}, weakness{};
        bool has_identity{};
    };
    std::array<std::optional<RetiredEnemy>, 30> retired_{};
    EnemySpawnState input_;
    std::vector<EnemySpawnCell> cells_;
    std::size_t cell_index_{}, member_index_{};
    const std::vector<EnemySpawnMember> *members_{};
    unsigned alternate_{}, battle_{}, enemy_{}, remaining_{}, attempts_{};
    ActorId creating_{};
    std::uint16_t candidate_x_{}, candidate_y_{};
    Stage stage_ = Stage::Idle;
    std::optional<EnemySpawnRequest> request_;
};
} // namespace eb::native
