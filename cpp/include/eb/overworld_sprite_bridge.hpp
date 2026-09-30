#pragma once

#include "eb/game_version.hpp"
#include "eb/native/sprite_resources.hpp"
#include <cstdint>
#include <memory>
#include <optional>
#include <span>

namespace eb {

struct HostSpritePose {
    std::shared_ptr<const native::SpriteImage> image;
    std::uint64_t generation{};
    unsigned palette{};
    unsigned group{}, frame{};
    native::SpriteFrameFormat format{};
    native::SpriteSurface surface{};
};

struct HostSpriteDiagnostics {
    std::uint64_t selections{}, unsupported{}, creations{}, releases{}, resets{};
    std::uint64_t queued_patches{}, committed_patches{};
    unsigned live_poses{};
};

// Optional compatibility edge for the current game runtime. Observes actual
// sprite selections without changing source state, scheduling or allocation.
// Host artwork is latched until the next graphics upload, including its water
// treatment. Custom descriptors and mutable effects explicitly lose the latch.
class OverworldSpriteBridge {
  public:
    OverworldSpriteBridge(std::span<const std::uint8_t> assets, GameVersion version);
    ~OverworldSpriteBridge();
    OverworldSpriteBridge(const OverworldSpriteBridge &);
    OverworldSpriteBridge &operator=(const OverworldSpriteBridge &);
    OverworldSpriteBridge(OverworldSpriteBridge &&) noexcept;
    OverworldSpriteBridge &operator=(OverworldSpriteBridge &&) noexcept;

    void before_instruction(std::uint32_t pc, std::uint16_t a, std::uint16_t x, std::uint16_t y,
                            std::uint16_t s, std::uint16_t d, std::span<const std::uint8_t> wram);
    const std::optional<HostSpritePose> &pose(unsigned byte_slot) const;
    // Called after an actual source transfer completes, independently of OAM
    // publication. Only tagged sprite jobs update generation-owned artwork.
    void complete_graphics_dma(unsigned source, unsigned destination_word, unsigned bytes,
                               unsigned control, unsigned port, unsigned vmain);
    std::shared_ptr<const native::SpriteImage> committed_image(
        std::uint64_t generation, native::SpriteOrientation orientation) const;
    std::uint64_t artwork_revision() const;
    void collect_artwork(std::span<const std::uint64_t> retained_generations);
    HostSpriteDiagnostics diagnostics() const;

  private:
    struct State;
    std::unique_ptr<State> state_;
};
} // namespace eb
