#include "eb/native/cutscenes/credits.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::cutscenes {
namespace {
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
std::uint8_t read(std::span<const std::uint8_t> data, std::size_t at) {
    require(at < data.size(), "Truncated credits content");
    return data[at];
}
std::size_t script_length(std::span<const std::uint8_t> script) {
    std::size_t cursor = 0;
    for (;;) {
        const auto command = read(script, cursor++);
        if (command == 255) return cursor;
        if (command == 4) continue;
        if (command == 1 || command == 2) {
            unsigned count = 0;
            while (read(script, cursor++)) ++count;
            require(count != 0, "Empty credits lines request an unsupported source 65536-byte transfer");
            require(count <= 32, "Credits line exceeds its authored 32-column canvas");
        } else {
            // Source command3 reads one spacing operand. Other command bytes
            // skip one byte too; they do not become guessed text instructions.
            read(script, cursor++);
        }
    }
}
// Original asset compression. Decoded once into owned content; forward,
// overlapping and reverse copies refer only to already produced bytes.
std::vector<std::uint8_t> unpack(std::span<const std::uint8_t> data, std::size_t at, unsigned size) {
    std::vector<std::uint8_t> result;
    const auto next = [&]() { return read(data, at++); };
    for (;;) {
        const auto header = next();
        if (header == 255) break;
        unsigned kind = header >> 5, count = (header & 31) + 1;
        if (kind == 7) { kind = (header >> 2) & 7; count = (((header & 3) << 8) | next()) + 1; }
        require(kind != 7 && count * (kind == 2 ? 2u : 1u) <= size - result.size(),
                "Oversized or invalid credits font compression");
        if (kind == 0) {
            while (count--) result.push_back(next());
        } else if (kind <= 3) {
            const unsigned first = next(), second = kind == 2 ? next() : 0;
            for (unsigned i = 0; i < count; ++i) {
                result.push_back(std::uint8_t(first + (kind == 3 ? i : 0)));
                if (kind == 2) result.push_back(second);
            }
        } else {
            int source = int(next()) << 8;
            source |= next();
            while (count--) {
                require(source >= 0 && unsigned(source) < result.size(), "Invalid credits font back reference");
                auto value = result[unsigned(source)];
                if (kind == 5) {
                    unsigned reversed = 0;
                    for (unsigned bit = 0; bit < 8; ++bit) { reversed = (reversed << 1) | (value & 1); value >>= 1; }
                    value = reversed;
                }
                result.push_back(value);
                source += kind == 6 ? -1 : 1;
            }
        }
    }
    require(result.size() == size, "Credits font has an unexpected decoded size");
    return result;
}
std::uint8_t player_glyph(std::uint8_t encoded) {
    if (encoded == 172) return 124;
    if (encoded == 174) return 126;
    if (encoded == 175) return 127;
    // CLC/SBC144 and BRANCHLTEQS test a negative result (byte-145), not zero.
    return std::uint8_t(encoded - (encoded <= 144 ? 48 : 80));
}
}
CreditsContentLayout credits_content_layout(GameVersion version) {
    // File offsets from each linked INITIALIZE_CREDITS_SCENE's STAFF_TEXT,
    // STAFF_CREDITS_FONT_GRAPHICS and STAFF_CREDITS_FONT_PALETTE operands.
    // STAFF_TEXT ends at the immediately following UNKNOWN_E14DE8 asset.
    // Linked boundaries: US E14DE8; JP E1423E (bank21.asm inclusion order).
    if (version == GameVersion::JP) return {0x213596, 0x21d2cc, 0x21d6a6, 0x800, 0xca8};
    require(version == GameVersion::US, "Unsupported credits region");
    return {0x21413f, 0x21e528, 0x21e914, 0xc00, 0xca9};
}
CreditsResources::CreditsResources(CreditsContent content) : content_(std::move(content)) {
    require(content_.version == GameVersion::US || content_.version == GameVersion::JP,
            "Unsupported credits region");
    content_.script.resize(script_length(content_.script));
    require(!content_.glyphs.empty() && content_.glyphs.size() <= 1024, "Invalid credits glyph count");
    for (const auto& glyph : content_.glyphs)
        for (const auto pixel : glyph) require(pixel < 4, "Credits glyph is not two-bit indexed content");
}
std::shared_ptr<const CreditsResources> CreditsResources::import(std::span<const std::uint8_t> assets,
                                                                GameVersion version) {
    const auto layout = credits_content_layout(version);
    require(layout.script <= assets.size() && layout.script_bytes <= assets.size() - layout.script,
            "Missing or truncated credits script asset");
    const auto source = assets.subspan(layout.script, layout.script_bytes);
    const auto length = script_length(source);
    CreditsContent content;
    content.version = version;
    content.script.assign(source.begin(), source.begin() + length);
    require(layout.palette <= assets.size(), "Missing credits font asset");
    const auto font = unpack(assets.first(layout.palette), layout.compressed_font, layout.font_bytes);
    // Font loading starts 64 glyphs into the native text atlas; earlier glyphs
    // are the blank initialized region. There are 16 bytes per two-bit 8x8 tile.
    content.glyphs.resize(64 + font.size() / 16);
    for (unsigned tile = 0; tile < font.size() / 16; ++tile)
        for (unsigned y = 0; y < 8; ++y)
            for (unsigned x = 0; x < 8; ++x)
                content.glyphs[tile + 64][y * 8 + x] =
                    ((font[tile * 16 + y * 2] >> (7 - x)) & 1) |
                    (((font[tile * 16 + y * 2 + 1] >> (7 - x)) & 1) << 1);
    for (unsigned i = 0; i < content.palette.size(); ++i)
        content.palette[i] = read(assets, layout.palette + 2 * i) |
                             (std::uint16_t(read(assets, layout.palette + 2 * i + 1)) << 8);
    return std::make_shared<const CreditsResources>(std::move(content));
}
CreditsTextScene::CreditsTextScene(std::shared_ptr<const CreditsResources> resources,
                                 std::array<std::uint8_t, 24> retained_converted_name)
    : resources_(std::move(resources)), converted_name_(retained_converted_name) {
    require(bool(resources_), "Missing credits resources");
}
bool CreditsTextScene::scroll_complete() const {
    return (state_.scroll_position >> 16) >= resources_->scroll_length();
}
void CreditsTextScene::enqueue(RowPublication row) {
    require(publications_.size() < 127, "Credits host exceeded the source row-publication ring capacity");
    publications_.push_back(row);
}
bool CreditsTextScene::publish_next_row() {
    if (publications_.empty()) return false;
    const auto row = publications_.front();
    publications_.pop_front();
    for (unsigned i = 0; i < row.count; ++i)
        canvas_[row.destination_row * 32 + row.column + i] = row.clear ? 0 : rows_[row.source_row * 32 + i];
    return true;
}
std::uint8_t CreditsTextScene::next_byte() { return read(resources_->script(), state_.cursor++); }
void CreditsTextScene::line(std::span<const std::uint8_t> glyphs, bool tall, bool player,
                           unsigned first_row, unsigned screen_row) {
    const unsigned count = glyphs.size(), column = 16 - count / 2;
    require(count != 0 && count <= 32, "Credits line must contain 1..32 glyphs");
    for (unsigned i = 0; i < count; ++i) {
        const auto glyph = unsigned(glyphs[i]) + (player ? (glyphs[i] & 0xf0) : 0);
        rows_[first_row * 32 + i] = (tall ? 0x2400 : 0x2000) + glyph;
        if (tall) rows_[(first_row + 1) * 32 + i] = 0x2410 + glyph;
    }
    // Preserve source order and live row references. Foreground publication
    // may follow a later callback.
    enqueue({first_row, screen_row, column, count, false});
    if (tall) enqueue({first_row + 1, (screen_row + 1) & 31, column, count, false});
}
void CreditsTextScene::command(std::span<const std::uint8_t> player_name) {
    const auto first_row = state_.composition_row;
    state_.composition_row = (state_.composition_row + 2) & 15;
    const auto screen_row = ((state_.scroll_position >> 19) + 29) & 31;
    switch (next_byte()) {
    case 1:
    case 2: {
        const bool tall = resources_->script()[state_.cursor - 1] == 2;
        state_.next_credit_position += tall ? 16 : 8;
        std::array<std::uint8_t, 32> glyphs{};
        unsigned count = 0;
        for (auto glyph = next_byte(); glyph; glyph = next_byte()) {
            require(count < glyphs.size(), "Credits line exceeds canvas");
            glyphs[count++] = glyph;
        }
        line(std::span(glyphs).first(count), tall, false, first_row, screen_row);
        return;
    }
    case 3:
        state_.next_credit_position += unsigned(next_byte()) * 8;
        return;
    case 4: {
        const auto length = std::find(player_name.begin(), player_name.end(), 0) - player_name.begin();
        if (!length) return;
        state_.next_credit_position += 16;
        const auto count = std::min<std::size_t>(24, length);
        if (resources_->version() == GameVersion::US) {
            for (unsigned i = 0; i < count; ++i) converted_name_[i] = player_glyph(player_name[i]);
            // Original conversion never writes a terminator: retain old tail
            // bytes if the host changes to a shorter name before another command 4.
            const auto end = std::find(converted_name_.begin(), converted_name_.end(), 0);
            line(std::span(converted_name_).first(end - converted_name_.begin()), true, true, first_row, screen_row);
        } else line(player_name.first(count), true, true, first_row, screen_row);
        return;
    }
    case 255:
        state_.script_ended = true;
        state_.next_credit_position = 0xffff;
        ++state_.cursor; // Source common finalization skips an additional byte.
        return;
    default:
        next_byte();
        return;
    }
}
bool CreditsTextScene::advance_tick(std::span<const std::uint8_t> player_name) {
    if (scroll_complete()) return false;
    const auto position = std::uint16_t(state_.scroll_position >> 16);
    if (resources_->version() == GameVersion::JP ? position >= state_.next_credit_position
                                                 : position > state_.next_credit_position) {
        // Validate the source's pathological zero-byte publication before
        // modifying cursor, row allocation, conversion storage or spacing.
        if (resources_->script()[state_.cursor] == 4 && resources_->version() == GameVersion::US &&
            !player_name.empty() && player_name.front() != 0)
            require(player_glyph(player_name.front()) != 0,
                    "US credits name requests an unsupported source 65536-byte transfer");
        command(player_name);
    }
    if (state_.wipe_threshold < position) {
        state_.wipe_threshold += 8;
        const unsigned row = ((unsigned(position) >> 3) - 1) & 31;
        enqueue({0, row, 0, 32, true});
    }
    state_.scroll_position += 0x4000;
    ++state_.ticks;
    return true;
}
std::vector<std::uint8_t> CreditsTextScene::indexed_canvas(unsigned height) const {
    require(height <= 256, "Credits canvas height exceeds its circular text surface");
    std::vector<std::uint8_t> pixels(256 * height);
    const auto glyphs = resources_->glyphs();
    const auto scroll = state_.scroll_position >> 16;
    for (unsigned y = 0; y < height; ++y) {
        const auto source_y = (y + 1 + scroll) & 255;
        for (unsigned x = 0; x < 256; ++x) {
            const auto descriptor = canvas_[(source_y / 8) * 32 + x / 8];
            const auto tile = descriptor & 1023;
            require(tile < glyphs.size(), "Credits command requests an unimported glyph");
            const auto pixel = glyphs[tile][(source_y & 7) * 8 + (x & 7)];
            pixels[y * 256 + x] = pixel ? pixel + ((descriptor >> 10) & 7) * 4 : 0;
        }
    }
    return pixels;
}
} // namespace eb::native::cutscenes
