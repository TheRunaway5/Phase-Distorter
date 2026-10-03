#pragma once

#include "eb/native/enemy_sprite_readiness.hpp"
#include "eb/scene_read_view.hpp"
#include <array>
#include <optional>

namespace eb {
class SnapshotArchive;
enum class EnemyResourcePreparationFailure { None, Budget, Allocation };

// Read-only compatibility boundary for encounter artwork preparation. Import
// before execution; subsequent queries neither select an encounter nor create
// an actor. Copies own independent leases/request state, sharing only immutable
// content and the native runtime's artwork resources.
class EnemySpritePreparation {
public:
    void snapshot_io(SnapshotArchive &archive);
    void bind_snapshot_resources(std::shared_ptr<native::SpriteResources> resources) { sprites_ = std::move(resources); }
    EnemySpritePreparation(std::span<const std::uint8_t> assets, GameVersion version,
                           std::shared_ptr<native::SpriteResources> resources,
                           native::SpriteImageLeaseLimits limits = {});
    void prepare(const SceneReadView &view, unsigned presentation_width);
    const native::EnemySpriteReadiness *resources() const { return ready_ ? &*ready_ : nullptr; }
    std::uint64_t queries() const { return queries_; }
    std::uint64_t failures() const { return failures_; }
    EnemyResourcePreparationFailure failure() const { return failure_; }

private:
    struct Request {
        native::EnemySpriteRectangle bounds;
        unsigned tileset{};
        std::array<std::uint8_t, 128> flags{};
    };
    void clear() noexcept;
    GameVersion version_;
    std::shared_ptr<const native::EnemySpriteCatalog> catalog_;
    std::shared_ptr<native::SpriteResources> sprites_;
    native::SpriteImageLeaseLimits limits_;
    std::optional<native::EnemySpriteReadiness> ready_;
    std::optional<Request> request_;
    std::uint64_t queries_{}, failures_{};
    EnemyResourcePreparationFailure failure_ = EnemyResourcePreparationFailure::None;
};
} // namespace eb
