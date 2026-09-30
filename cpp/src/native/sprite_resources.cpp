#include "eb/native/sprite_resources.hpp"
#include <algorithm>
#include <map>
#include <stdexcept>
#include <tuple>
#include <utility>

namespace eb::native {
namespace {
// Source provenance: sprite_grouping_pointers.asm, sprite_grouping_data.asm,
// UNKNOWN_C42B0D and its 17 shape records; independently linked US/JP layouts.
// The final group has eight poses. No instructions from the import are read.
struct Content {
    std::span<const std::uint8_t> bytes;
    std::span<const std::uint8_t> slice(std::size_t at, std::size_t size) const {
        if (at > bytes.size() || size > bytes.size() - at)
            throw std::runtime_error("Truncated sprite content");
        return bytes.subspan(at, size);
    }
    unsigned word(std::size_t at) const {
        const auto s = slice(at, 2);
        return s[0] | unsigned(s[1]) << 8;
    }
    unsigned offset(std::size_t at) const {
        const auto s = slice(at, 4);
        const unsigned pointer = s[0] | unsigned(s[1]) << 8 | unsigned(s[2]) << 16 | unsigned(s[3]) << 24;
        if (pointer < 0xc00000 || pointer >= 0xf00000)
            throw std::runtime_error("Invalid sprite content pointer");
        return pointer - 0xc00000;
    }
};
struct Pose {
    std::array<std::shared_ptr<const std::vector<std::uint8_t>>, 2> pixels;
    bool mirror, ignores_surface;
    std::array<std::array<std::array<std::weak_ptr<const SpriteImage>, 2>, 3>, 2> images;
};
struct Group {
    SpriteDefinition definition;
    std::shared_ptr<const SpriteImage::Layout> layout;
    std::vector<Pose> poses;
};

std::vector<std::uint8_t> decode(std::span<const std::uint8_t> planar, unsigned width, unsigned height) {
    std::vector<std::uint8_t> result(width * height);
    for (unsigned y = 0; y < height; ++y)
        for (unsigned x = 0; x < width; ++x) {
            const unsigned tile = (y / 8) * (width / 8) + x / 8;
            const unsigned row = tile * 32 + (y & 7) * 2;
            unsigned color = 0;
            for (unsigned plane = 0; plane < 4; ++plane)
                color |= ((planar[row + (plane / 2) * 16 + (plane & 1)] >> (7 - (x & 7))) & 1) << plane;
            result[y * width + x] = color;
        }
    return result;
}
bool mirrored(SpriteOrientation orientation, bool authored) {
    switch (orientation) {
    case SpriteOrientation::Authored: return authored;
    case SpriteOrientation::Normal: return false;
    case SpriteOrientation::Mirrored: return true;
    default: throw std::invalid_argument("Invalid sprite display orientation");
    }
}
std::shared_ptr<const SpriteImage> assemble(
    std::shared_ptr<const SpriteImage::Layout> layout,
    std::shared_ptr<const std::vector<std::uint8_t>> canvas, unsigned palette, bool authored_mirror,
    bool display_mirror) {
    const auto &parts = layout->parts[display_mirror];
    auto image = std::make_shared<SpriteImage>();
    image->layout = std::move(layout);
    image->canvas = std::move(canvas);
    image->palette = palette;
    image->authored_mirror = authored_mirror;
    image->left = parts.front().left;
    image->top = parts.front().top;
    int right = image->left + 16, bottom = image->top + 16;
    for (const auto &part : parts) {
        image->left = std::min(image->left, part.left);
        image->top = std::min(image->top, part.top);
        right = std::max(right, part.left + 16);
        bottom = std::max(bottom, part.top + 16);
    }
    image->width = unsigned(right - image->left);
    image->height = unsigned(bottom - image->top);
    image->indices.resize(image->width * image->height);
    const unsigned columns = image->layout->canvas_width / 16;
    for (unsigned i = 0; i < parts.size(); ++i) {
        const auto &part = parts[i];
        auto &piece = image->parts.emplace_back();
        piece.left = part.left;
        piece.top = part.top;
        piece.upper = part.upper;
        for (unsigned y = 0; y < 16; ++y)
            for (unsigned x = 0; x < 16; ++x) {
                const unsigned sx = (i % columns) * 16 + (part.flip_x ? 15 - x : x);
                const unsigned sy = (i / columns) * 16 + (part.flip_y ? 15 - y : y);
                if (sy >= image->layout->canvas_height)
                    continue;
                const auto color = (*image->canvas)[sy * image->layout->canvas_width + sx];
                piece.indices[y * 16 + x] = color;
                auto &dest = image->indices[(part.top - image->top + y) * image->width + part.left - image->left + x];
                if (!dest)
                    dest = color;
            }
    }
    return image;
}
void validate_canvas(const SpriteImage &image) {
    if (!image.layout || !image.canvas || image.palette > 7)
        throw std::invalid_argument("Missing sprite artwork geometry");
    const auto &layout = *image.layout;
    if (!layout.canvas_width || !layout.canvas_height || (layout.canvas_width & 15) ||
        (layout.canvas_height & 15) || layout.canvas_width > 4096 || layout.canvas_height > 4096 ||
        image.canvas->size() != std::size_t(layout.canvas_width) * layout.canvas_height)
        throw std::invalid_argument("Invalid sprite artwork canvas");
    for (const auto &parts : layout.parts) {
        if (parts.empty() || parts.size() > 64)
            throw std::invalid_argument("Invalid sprite artwork shape");
        for (const auto &part : parts)
            if (part.left < -128 || part.left > 127 || part.top < -128 || part.top > 127)
                throw std::invalid_argument("Invalid sprite artwork offset");
    }
    if (std::any_of(image.canvas->begin(), image.canvas->end(), [](auto pixel) { return pixel > 15; }))
        throw std::invalid_argument("Invalid sprite artwork index");
}
} // namespace

SpriteCatalogLayout sprite_catalog_layout(GameVersion version) {
    return version == GameVersion::JP ? SpriteCatalogLayout{0x2f6541, 0x2f9c42, 0x42a4b, 464, 17}
                                      : SpriteCatalogLayout{0x2f133f, 0x2f4a40, 0x42b0d, 464, 17};
}
struct SpriteResources::State {
    std::vector<Group> groups;
    std::map<std::uint32_t, unsigned> frame_tables;
};

SpriteResources::SpriteResources(std::span<const std::uint8_t> assets, SpriteCatalogLayout layout)
    : state_(std::make_unique<State>()) {
    const Content content{assets};
    if (!layout.group_count || layout.group_count > assets.size() / 4 || !layout.shape_count)
        throw std::runtime_error("Invalid sprite catalog size");
    content.slice(layout.groups, std::size_t(layout.group_count) * 4);
    content.slice(layout.shapes, std::size_t(layout.shape_count) * 4);
    std::vector<unsigned> offsets;
    for (unsigned group = 0; group < layout.group_count; ++group)
        offsets.push_back(content.offset(layout.groups + group * 4));
    auto ends = offsets;
    ends.push_back(layout.groups_end);
    std::sort(ends.begin(), ends.end());
    // Identical frame payloads are shared even across groups (common NPC poses).
    std::map<std::tuple<unsigned, unsigned, unsigned>, std::shared_ptr<const std::vector<std::uint8_t>>>
        decoded;
    state_->groups.reserve(layout.group_count);
    for (const unsigned offset : offsets) {
        state_->frame_tables.try_emplace(offset + 9, state_->groups.size());
        const auto next = std::upper_bound(ends.begin(), ends.end(), offset);
        if (next == ends.end() || *next <= offset + 9 || (*next - offset - 9) % 2)
            throw std::runtime_error("Invalid sprite frame table");
        const auto header = content.slice(offset, 9);
        Group group;
        auto &def = group.definition;
        def.width = (header[1] >> 4) * 8;
        def.height = header[0] * 8;
        def.palette = (header[3] >> 1) & 7;
        def.frames = (*next - offset - 9) / 2;
        def.shape = header[2];
        std::copy_n(header.begin() + 4, 4, def.hitbox.begin());
        if (!def.width || !def.height || (header[1] & 15) || def.frames > 16 ||
            header[2] >= layout.shape_count)
            throw std::runtime_error("Unsupported sprite group dimensions/shape");
        const unsigned shape = content.offset(layout.shapes + header[2] * 4);
        const auto shape_header = content.slice(shape, 2);
        const unsigned parts = shape_header[0];
        def.upper_parts = shape_header[1];
        if (!parts || parts > 64 || def.upper_parts > parts)
            throw std::runtime_error("Invalid sprite shape size");
        const auto records = content.slice(shape + 2, parts * 10);
        auto image_layout = std::make_shared<SpriteImage::Layout>();
        image_layout->canvas_width = (def.width + 15) & ~15u;
        image_layout->canvas_height = (def.height + 15) & ~15u;
        for (unsigned mirror = 0; mirror < 2; ++mirror)
            for (unsigned part = 0; part < parts; ++part) {
                const auto entry = records.subspan((mirror * parts + part) * 5, 5);
                // Authored overworld pieces are 16x16; bit 7 terminates each pose.
                if ((entry[4] & 1) || bool(entry[4] & 0x80) != (part + 1 == parts))
                    throw std::runtime_error("Unsupported sprite shape flags");
                image_layout->parts[mirror].push_back({std::int8_t(entry[3]), std::int8_t(entry[0]),
                    part < def.upper_parts, bool(entry[2] & 0x40), bool(entry[2] & 0x80)});
            }
        group.layout = std::move(image_layout);
        for (unsigned pose = 0; pose < def.frames; ++pose) {
            const unsigned reference = content.word(offset + 9 + pose * 2);
            Pose entry{{}, bool(reference & 1), bool(reference & 2), {}};
            for (unsigned format = 0; format < entry.pixels.size(); ++format) {
                const unsigned address =
                    (unsigned(header[8]) << 16) | (reference & (format ? 0xfffe : 0xfff0));
                if (address < 0xc00000 || address >= 0xf00000)
                    throw std::runtime_error("Invalid sprite graphics pointer");
                const unsigned graphics = address - 0xc00000;
                const auto key = std::tuple{graphics, def.width, def.height};
                auto &pixels = decoded[key];
                if (!pixels)
                    pixels = std::make_shared<const std::vector<std::uint8_t>>(
                        decode(content.slice(graphics, def.width * def.height / 2), def.width, def.height));
                entry.pixels[format] = pixels;
            }
            group.poses.push_back(std::move(entry));
        }
        state_->groups.push_back(std::move(group));
    }
}
SpriteResources::~SpriteResources() = default;
SpriteResources::SpriteResources(SpriteResources &&) noexcept = default;
SpriteResources &SpriteResources::operator=(SpriteResources &&) noexcept = default;
unsigned SpriteResources::size() const { return state_->groups.size(); }
const SpriteDefinition &SpriteResources::definition(unsigned group) const {
    return state_->groups.at(group).definition;
}
std::optional<unsigned> SpriteResources::group_for_frame_table(std::uint32_t asset_offset) const {
    const auto entry = state_->frame_tables.find(asset_offset);
    return entry == state_->frame_tables.end() ? std::nullopt : std::optional<unsigned>{entry->second};
}

std::shared_ptr<const SpriteImage> SpriteResources::acquire(unsigned id, unsigned frame,
                                                            SpriteSurface surface, SpriteFrameFormat format,
                                                            SpriteOrientation orientation) {
    unsigned format_index;
    switch (format) {
    case SpriteFrameFormat::FourDirection:
        format_index = 0;
        break;
    case SpriteFrameFormat::EightDirection:
        format_index = 1;
        break;
    default:
        throw std::invalid_argument("Invalid sprite frame format");
    }
    unsigned surface_index;
    switch (surface) {
    case SpriteSurface::Normal:
        surface_index = 0;
        break;
    case SpriteSurface::Shallow:
        surface_index = 1;
        break;
    case SpriteSurface::Deep:
        surface_index = 2;
        break;
    default:
        throw std::invalid_argument("Invalid sprite surface");
    }
    auto &group = state_->groups.at(id);
    auto &pose = group.poses.at(frame);
    if (pose.pixels[0] == pose.pixels[1])
        format_index = 0;
    if (pose.ignores_surface)
        surface_index = 0;
    const bool display_mirror = mirrored(orientation, pose.mirror);
    if (auto cached = pose.images[format_index][surface_index][display_mirror].lock())
        return cached;
    const auto &def = group.definition;
    const auto &layout = *group.layout;
    auto canvas = std::make_shared<std::vector<std::uint8_t>>(layout.canvas_width * layout.canvas_height);
    // Odd tile heights are bottom-aligned in the authored 16-pixel parts.
    const unsigned padding_y = def.height % 16;
    // C0A443/C0A794 prepend blank tile rows before copying the unchanged
    // beginning of the artwork. They decrement the remaining height without
    // advancing its source, so the image sinks and its bottom is truncated.
    // UNKNOWN_C40BE8 contains zeros; these rows are fully transparent.
    const unsigned surface_rows = surface_index * 8;
    for (unsigned y = padding_y + surface_rows; y < padding_y + def.height; ++y)
        for (unsigned x = 0; x < def.width; ++x)
            (*canvas)[y * layout.canvas_width + x] = (*pose.pixels[format_index])[
                (y - padding_y - surface_rows) * def.width + x];
    auto image = assemble(group.layout, std::move(canvas), def.palette, pose.mirror, display_mirror);
    pose.images[format_index][surface_index][display_mirror] = image;
    return image;
}

SpriteArtwork::SpriteArtwork(const SpriteImage &target) {
    validate_canvas(target);
    layout_ = target.layout;
    canvas_ = std::make_shared<const std::vector<std::uint8_t>>(target.canvas->size());
    palette_ = target.palette;
    authored_mirror_ = target.authored_mirror;
}
void SpriteArtwork::apply_tiles(const SpriteImage &target, unsigned first_tile, unsigned tile_count) {
    validate_canvas(target);
    if (*target.layout != *layout_)
        throw std::invalid_argument("Sprite artwork patch changes geometry");
    const unsigned total = tile_columns() * tile_rows();
    if (first_tile > total || tile_count > total - first_tile)
        throw std::out_of_range("Sprite artwork tile patch out of range");
    if (!tile_count)
        return;
    auto updated = std::make_shared<std::vector<std::uint8_t>>(*canvas_);
    for (unsigned tile = first_tile; tile < first_tile + tile_count; ++tile) {
        const unsigned x = (tile % tile_columns()) * 8, y = (tile / tile_columns()) * 8;
        for (unsigned row = 0; row < 8; ++row)
            std::copy_n(target.canvas->begin() + (y + row) * layout_->canvas_width + x, 8,
                        updated->begin() + (y + row) * layout_->canvas_width + x);
    }
    canvas_ = std::move(updated);
    authored_mirror_ = target.authored_mirror;
    ++revision_;
    images_ = {};
}
std::shared_ptr<const SpriteImage> SpriteArtwork::snapshot(SpriteOrientation orientation) const {
    const auto display_mirror = mirrored(orientation, authored_mirror_);
    auto &image = images_[display_mirror];
    if (!image)
        image = assemble(layout_, canvas_, palette_, authored_mirror_, display_mirror);
    return image;
}
} // namespace eb::native
