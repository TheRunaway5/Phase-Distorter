#pragma once

#include "eb/game_version.hpp"
#include "eb/pixel_bounds.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <optional>
#include <span>
#include <vector>

namespace eb { class SnapshotArchive; }
namespace eb::native {

// File offsets in the user's imported assets. These are content tables, not
// CPU addresses, graphics allocation slots or hardware register locations.
struct SpriteCatalogLayout {
    std::uint32_t groups, groups_end, shapes;
    unsigned group_count, shape_count;
};
SpriteCatalogLayout sprite_catalog_layout(GameVersion version);

struct SpriteDefinition {
    unsigned width{}, height{}, frames{}, palette{}, upper_parts{}, shape{};
    std::array<std::uint8_t, 4> hitbox{};
};

// Water/surface artwork sinks by one or two 8-pixel rows, clipping the bottom
// inside its unchanged authored bounds. Poses can opt out in their content.
// Scenery occlusion and overlay effects are separate rendering decisions.
enum class SpriteSurface { Normal, Shallow, Deep };
// The authored four/eight-direction loaders interpret frame low bits
// differently. Keep that content interpretation with the latched image.
enum class SpriteFrameFormat { FourDirection, EightDirection };
// Immutable planar content for the source row uploader. Reference low bits
// retain the authored mirror/surface metadata; identity names imported ROM
// bytes only and is never an executable callback or mutable allocation.
struct SpriteRawFrame {
    std::span<const std::uint8_t> bytes;
    std::uint32_t source_identity{};
    std::uint16_t reference{};
};
// Artwork can update while an older draw descriptor remains visible. Its
// geometry/orientation must therefore be independent of the newly loaded pose.
enum class SpriteOrientation { Authored, Normal, Mirrored };

// Immutable host image, shared by every actor using this pose. Coordinates are
// relative to the actor's anchor; index zero is transparent. Palette changes
// never require reallocating/reloading the indexed artwork.
struct SpriteImage {
    struct ShapePart {
        int left{}, top{};
        bool upper{}, flip_x{}, flip_y{};
        bool operator==(const ShapePart &) const = default;
        void snapshot_io(SnapshotArchive &archive);
    };
    struct Layout {
        unsigned canvas_width{}, canvas_height{};
        std::array<std::vector<ShapePart>, 2> parts;
        bool operator==(const Layout &) const = default;
        void snapshot_io(SnapshotArchive &archive);
    };
    struct Part {
        int left{}, top{};
        bool upper{};
        std::array<std::uint8_t, 256> indices{};
        void snapshot_io(SnapshotArchive &archive);
    };
    unsigned width{}, height{}, palette{};
    int left{}, top{};
    std::vector<std::uint8_t> indices;
    // Authored first-opaque order and body division for scenery occlusion.
    std::vector<Part> parts;
    // Logical indexed artwork, padded to the 16x16 piece grid before any
    // authored flips or offsets. Tile updates operate on this native canvas.
    std::shared_ptr<const Layout> layout;
    std::shared_ptr<const std::vector<std::uint8_t>> canvas;
    bool authored_mirror{};
    void snapshot_io(SnapshotArchive &archive);
};

class SpriteResources {
  public:
    // Imports only declared sprite content. After construction no borrowed
    // storage, processor, bus, VRAM, DMA queue or source allocator is needed.
    // Planar frame bytes remain immutable content for the separate row uploader.
    SpriteResources(std::span<const std::uint8_t> assets, SpriteCatalogLayout layout);
    ~SpriteResources();
    SpriteResources(SpriteResources &&) noexcept;
    SpriteResources &operator=(SpriteResources &&) noexcept;
    SpriteResources(const SpriteResources &) = delete;
    SpriteResources &operator=(const SpriteResources &) = delete;

    unsigned size() const;
    const SpriteDefinition &definition(unsigned group) const;
    const std::array<std::uint8_t,9> &raw_header(unsigned group) const;
    // Complete imported normal/mirrored5-byte spritemap records. These are
    // separate from serialized logical image layouts and their snapshot ABI.
    std::span<const std::uint8_t> raw_shape(unsigned group) const;
    std::uint32_t frame_table_identity(unsigned group) const;
    // Retained creation geometry may read beyond a newly requested pose.
    // The actual authored sprite bank is imported once and never padded.
    // Bounded imports without the full bank explicitly reject this accessor.
    std::span<const std::uint8_t,65536> raw_bank(unsigned group) const;
    SpriteRawFrame raw_frame(unsigned group,unsigned pose,SpriteFrameFormat format) const;

    // Union of imported normal/mirrored piece offsets, before the renderer's
    // baseline adjustment. Querying this never acquires artwork or actors.
    PixelBounds artwork_bounds() const;
    // Import metadata lookup for compatibility adapters. The input is the
    // authored frame-table file offset, never a runtime allocation address.
    std::optional<unsigned> group_for_frame_table(std::uint32_t asset_offset) const;
    // Pose is the authored frame index. A stale/out-of-range index is rejected,
    // never silently wrapped to unrelated artwork. Handles outlive the catalog.
    std::shared_ptr<const SpriteImage> acquire(unsigned group, unsigned pose,
                                               SpriteSurface surface = SpriteSurface::Normal,
                                               SpriteFrameFormat format = SpriteFrameFormat::FourDirection,
                                               SpriteOrientation orientation = SpriteOrientation::Authored);

  private:
    struct State;
    std::unique_ptr<State> state_;
};

// Generation-owned indexed artwork. A copy has an independent next update;
// already published snapshots remain immutable across subsequent tile copies.
// The caller supplies logical tile geometry and imported targets, never machine
// addresses, transfer queues, processors or graphics-memory bytes.
class SpriteArtwork {
  public:
    // Adopt declared geometry and palette, initially fully transparent.
    explicit SpriteArtwork(const SpriteImage &target);
    unsigned tile_columns() const { return layout_->canvas_width / 8; }
    unsigned tile_rows() const { return layout_->canvas_height / 8; }
    std::uint64_t revision() const { return revision_; }
    static SpriteArtwork from_snapshot(SnapshotArchive &archive);
    // Tiles are row-major in the padded canvas. Validate the whole operation
    // before changing any pixels; a zero-sized valid range is a no-op.
    void apply_tiles(const SpriteImage &target, unsigned first_tile, unsigned tile_count);
    std::shared_ptr<const SpriteImage> snapshot(
        SpriteOrientation orientation = SpriteOrientation::Authored) const;
    void snapshot_io(SnapshotArchive &archive);

  private:
    std::shared_ptr<const SpriteImage::Layout> layout_;
    std::shared_ptr<const std::vector<std::uint8_t>> canvas_;
    unsigned palette_{};
    bool authored_mirror_{};
    std::uint64_t revision_{};
    mutable std::array<std::shared_ptr<const SpriteImage>, 2> images_;
};
} // namespace eb::native
