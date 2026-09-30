#include "eb/enemy_sprite_preparation.hpp"
#include "eb/overworld_sprite_runtime.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <new>
#include <stdexcept>

namespace eb {
EnemySpritePreparation::EnemySpritePreparation(std::span<const std::uint8_t> assets,
    GameVersion version, std::shared_ptr<native::SpriteResources> sprites,
    native::SpriteImageLeaseLimits limits)
    : version_(version), catalog_(std::make_shared<const native::EnemySpriteCatalog>(
          assets, native::enemy_sprite_catalog_layout(version))),
      sprites_(std::move(sprites)), limits_(limits) {
    if (!sprites_ || !limits.images || !limits.image_bytes)
        throw std::invalid_argument("Enemy preparation requires native resources and positive limits");
}
void EnemySpritePreparation::clear() noexcept {
    ready_.reset(); request_.reset(); failure_ = EnemyResourcePreparationFailure::None;
}
void EnemySpritePreparation::prepare(const SceneReadView &view, unsigned width) {
    if (width < 256 || width > 1024 || (width & 1))
        throw std::invalid_argument("Invalid enemy preparation viewport width");
    if (view.game_version != version_)
        throw std::invalid_argument("Enemy preparation region mismatch");
    if (!view.native_sprites || width == 256) { clear(); return; }
    if (view.native_sprites->resources() != sprites_)
        throw std::invalid_argument("Enemy preparation does not own this runtime's resources");
    const auto &source = view.source_profile;
    const auto word = [&](unsigned at) {
        return unsigned(view.work_ram[at]) | unsigned(view.work_ram[at + 1]) << 8;
    };
    const bool jp = version_ == GameVersion::JP;
    const unsigned enabled = jp ? 0x4de0 : 0x4a5a, flag_base = jp ? 0x9eb3 : 0x9c08;
    const auto flags = view.work_ram.subspan(flag_base, 128);
    const auto flag = [&](unsigned id) { return (flags[(id - 1) / 8] & (1u << ((id - 1) & 7))) != 0; };
    const unsigned tileset = word(source.wram_loaded_map_tile_combination);
    // SPAWN_HORIZONTAL/SPAWN_VERTICAL gate all encounter candidates with
    // these exact flags and their own enable word. NPC spawning and object-
    // only mode are separate policies and deliberately do not participate.
    if ((view.ppu_registers[5] & 0x37) != 1 || view.ppu_registers[7] != 0x39 ||
        view.ppu_registers[8] != 0x59 || word(source.wram_battle_mode_flag) ||
        tileset >= 32 || !word(enabled) || flag(11) || flag(73)) {
        clear(); return;
    }
    const int camera_x = std::int16_t(word(source.wram_background_scroll.layer1_x)),
              camera_y = std::int16_t(word(source.wram_background_scroll.layer1_y));
    const int margin = int(width - 256) / 2, overscan = margin + 128;
    // Match stationary/NPC resource preparation, including the additional
    // area-boundary recenter exposure and a 64-pixel content-readiness pad.
    Request next{{camera_x - margin - overscan - 64, camera_y - 64,
                  camera_x + 256 + margin + overscan + 64, camera_y + 288}, tileset};
    std::copy(flags.begin(), flags.end(), next.flags.begin());
    if (request_ && request_->bounds.left == next.bounds.left && request_->bounds.top == next.bounds.top &&
        request_->bounds.right == next.bounds.right && request_->bounds.bottom == next.bounds.bottom &&
        request_->tileset == next.tileset && request_->flags == next.flags &&
        failure_ != EnemyResourcePreparationFailure::Allocation)
        return;
    ++queries_;
    try {
        const native::EnemySpriteEligibility eligibility{tileset, next.flags, true, false, false};
        if (ready_) ready_->prepare(next.bounds, eligibility);
        else {
            native::EnemySpriteReadiness ready(catalog_, sprites_, limits_);
            ready.prepare(next.bounds, eligibility);
            ready_ = std::move(ready);
        }
        request_ = next;
        failure_ = EnemyResourcePreparationFailure::None;
    } catch (const std::length_error &) {
        // Memoize a bounded rejection; a different footprint or flag state
        // retries it. Existing immutable leases remain intact.
        request_ = next;
        failure_ = EnemyResourcePreparationFailure::Budget;
        ++failures_;
    } catch (const std::bad_alloc &) {
        failure_ = EnemyResourcePreparationFailure::Allocation;
        ++failures_;
    }
}
} // namespace eb
