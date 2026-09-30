#include "eb/overworld_sprite_bridge.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
void require(bool yes, const char *message) {
    if (!yes)
        throw std::runtime_error(message);
}
struct Fixture {
    std::vector<std::uint8_t> assets = std::vector<std::uint8_t>(0x300000);
    std::vector<std::uint8_t> ram = std::vector<std::uint8_t>(0x20000);
    eb::GameVersion version;
    unsigned first, second;
    explicit Fixture(eb::GameVersion v) : version(v) {
        const auto catalog = eb::native::sprite_catalog_layout(v);
        native_sprite_test::Fixture small;
        std::copy(small.bytes.begin(), small.bytes.end(), assets.begin());
        first = catalog.groups_end - 82;
        second = first + 41;
        std::copy_n(small.bytes.begin() + 32, 41, assets.begin() + first);
        std::copy_n(small.bytes.begin() + 32, 41, assets.begin() + second);
        assets[second + 3] = 4; // Replacement art uses another palette.
        for (unsigned id = 0; id < catalog.group_count; ++id)
            pointer(catalog.groups + id * 4, id ? second : first);
        for (unsigned id = 0; id < catalog.shape_count; ++id)
            pointer(catalog.shapes + id * 4, 128);
        configure(0, 0);
    }
    unsigned loc(unsigned us, unsigned jp) const { return version == eb::GameVersion::JP ? jp : us; }
    void pointer(unsigned at, unsigned offset) {
        const unsigned value = 0xc00000 + offset;
        for (unsigned i = 0; i < 4; ++i)
            assets[at + i] = value >> (8 * i);
    }
    void put(unsigned at, unsigned value) {
        ram[at] = value;
        ram[at + 1] = value >> 8;
    }
    void configure(unsigned byte_slot, unsigned id) {
        put(loc(0x2cd6, 0x30d4) + byte_slot, id);
        put(loc(0x2a7e, 0x2e7c) + byte_slot, 64);
        put(loc(0x2aba, 0x2eb8) + byte_slot, 3);
        put(loc(0x2b6e, 0x2f6c) + byte_slot, 0);
        put(loc(0x2a42, 0x2e40) + byte_slot, 0xc0);
        art(byte_slot, id);
    }
    void art(unsigned byte_slot, unsigned id) {
        const unsigned pointer = 0xc00000 + (id ? second : first) + 9;
        put(loc(0x29ca, 0x2dc8) + byte_slot, pointer);
        put(loc(0x2a06, 0x2e04) + byte_slot, pointer >> 16);
    }
    void observe(eb::OverworldSpriteBridge &bridge, unsigned us, unsigned jp, unsigned a = 0, unsigned x = 0,
                 unsigned y = 0, unsigned s = 0x1fff) const {
        bridge.before_instruction(loc(us, jp), a, x, y, s, 0x1e00, ram);
    }
    void four(eb::OverworldSpriteBridge &bridge, unsigned byte_slot = 0) const {
        observe(bridge, 0xc0a4c4, 0xc0a4a3, 0, 0, byte_slot);
    }
};
void test(eb::GameVersion version) {
    Fixture f(version);
    eb::OverworldSpriteBridge bridge(f.assets, version);
    const auto initial_ram = f.ram;
    f.four(bridge);
    require(f.ram == initial_ram, "Bridge modified source state");
    require(bridge.pose(0) && bridge.pose(0)->palette == 5, "Initial host pose missing");
    const auto initial = *bridge.pose(0);
    require(initial.generation != 0, "Host actor needs a generation");
    f.put(f.loc(0x2baa, 0x2fa8), 12);
    f.art(0, 1);
    f.observe(bridge, 0xc00000, 0xc00000);
    require(bridge.pose(0)->image == initial.image, "Pose changed without upload");
    f.four(bridge);
    require(bridge.pose(0)->image != initial.image && bridge.pose(0)->palette == 5 &&
                bridge.pose(0)->image->palette == 2,
            "Artwork swap must latch surface but retain creation palette");
    const auto deep = *bridge.pose(0);
    auto copy = bridge;
    f.observe(copy, 0xc429ae, 0xc428ec);
    require(!copy.pose(0) && bridge.pose(0)->image == deep.image, "Bridge copies shared mutable actor state");
    f.four(copy);
    require(copy.pose(0).has_value(), "Ordinary upload did not replace mutable image exclusion");
    f.put(0x1e88, 0);
    f.observe(copy, 0xc09b4d, 0xc09b2c);
    f.four(copy);
    require(!copy.pose(0), "Custom descriptor regained ordinary image without recreation");
    f.observe(bridge, 0xc02140, 0xc0214e);
    require(!bridge.pose(0), "Released actor retained image");
    f.observe(bridge, 0xc01e49, 0xc01e5f, 1, 23, 0xffff, 0x1abc);
    f.observe(bridge, 0xc09c57, 0xc09c36);
    f.configure(0, 1);
    f.observe(bridge, 0xc020f0, 0xc020fe, 0, 0, 0, 0x1abc);
    f.four(bridge);
    require(bridge.pose(0)->generation != initial.generation && bridge.pose(0)->palette == 2 &&
                bridge.diagnostics().creations == 1,
            "Reused source slot retained generation or palette");
    // Copy assignment also owns latches independently.
    copy = bridge;
    f.observe(copy, 0xc0927c, 0xc0925e);
    require(!copy.pose(0) && bridge.pose(0), "Reset leaked across copied bridge");
    const auto generation = bridge.pose(0)->generation;
    f.observe(bridge, 0xc01a86, 0xc01a9c);
    f.four(bridge);
    require(bridge.pose(0)->generation > generation, "Scene reset reused a generation");
    f.put(f.loc(0x2896, 0x2c94), 58);
    f.configure(58, 1);
    f.put(f.loc(0x2af6, 0x2ef4) + 58, 6);
    f.put(f.loc(0x10f2, 0x10e8) + 58, 2);
    f.observe(bridge, 0xc0a794, 0xc0a773);
    require(bridge.pose(58).has_value(), "Eight-direction upload did not select its actor");
    f.put(f.loc(0x10f2, 0x10e8) + 58, 1);
    f.observe(bridge, 0xc0a794, 0xc0a773);
    require(!bridge.pose(58), "Invalid eight-direction pose retained stale art");
    f.put(f.loc(0x2a42, 0x2e40), 0xc1);
    f.four(bridge);
    require(!bridge.pose(0), "Modified graphics bank used imported ordinary artwork");
    f.put(f.loc(0x2a42, 0x2e40), 0xc0);
    f.put(f.loc(0x2aba, 0x2eb8), 2);
    f.four(bridge);
    require(!bridge.pose(0), "Geometry mismatch used unrelated host artwork");
    require(bridge.diagnostics().live_poses == 0 && bridge.diagnostics().unsupported >= 3,
            "Diagnostics did not report current coverage");
    bool rejected = false;
    try {
        (void)bridge.pose(1);
    } catch (const std::out_of_range &) {
        rejected = true;
    }
    require(rejected, "Odd logical byte slot accepted");
}
void transaction_test(eb::GameVersion version) {
    using eb::native::SpriteOrientation;
    Fixture f(version);
    eb::OverworldSpriteBridge bridge(f.assets, version);
    constexpr unsigned load_stack = 0x1f00, row_stack = load_stack - 3;
    constexpr unsigned first_copy_stack = row_stack - 17, second_copy_stack = row_stack - 15;
    const auto far = [&](unsigned at, unsigned value) {
        f.put(at, value);
        f.ram[at + 2] = value >> 16;
    };
    const auto observe = [&](eb::OverworldSpriteBridge &which, unsigned us, unsigned jp, unsigned stack,
                             unsigned x = 0, unsigned y = 0) {
        // Authored callbacks also reach the same code through the bank80 alias.
        which.before_instruction(f.loc(us, jp) & 0xbfffff, 0, x, y, stack, 0x1e00, f.ram);
    };
    observe(bridge, 0xc0a4c4, 0xc0a4a3, load_stack);
    const auto pose = *bridge.pose(0);
    const auto initial = bridge.committed_image(pose.generation, SpriteOrientation::Normal);
    require(initial && std::ranges::all_of(*initial->canvas, [](auto value) { return value == 0; }),
            "Loader entry must not publish artwork before a transfer");
    // The first authored row is split at a 0x100-word tile-page boundary.
    far(row_stack + 1, (f.loc(0xc0a559, 0xc0a538) + 3) & 0xbfffff);
    f.put(0x92, 64);
    f.put(0x97, 0x40f0);
    observe(bridge, 0xc0a56e, 0xc0a54d, row_stack);
    const auto prepare_segment = [&](unsigned stack, unsigned call_us, unsigned call_jp, unsigned source,
                                     unsigned destination) {
        f.put(stack + 1, 0x8656);
        far(stack + 7, (f.loc(call_us, call_jp) + 3) & 0xbfffff);
        f.ram[0x91] = 0;
        f.put(0x92, 32);
        far(0x94, source);
        f.put(0x97, destination);
    };
    prepare_segment(first_copy_stack, 0xc0a59b, 0xc0a57a, 0xc00200, 0x40f0);
    observe(bridge, 0xc0865f, 0xc0865f, first_copy_stack);
    // Repeated ring-full wait observations must neither enqueue nor commit.
    for (unsigned wait = 0; wait < 5; ++wait)
        observe(bridge, 0xc0869d, 0xc0869d, first_copy_stack - 3);
    require(bridge.diagnostics().queued_patches == 0 && bridge.diagnostics().committed_patches == 0,
            "A waiting COPY must remain unpublished");
    observe(bridge, 0xc086a1, 0xc086a1, first_copy_stack - 3, 0, 8);
    observe(bridge, 0xc086dd, 0xc086d6, first_copy_stack);
    prepare_segment(second_copy_stack, 0xc0a5bc, 0xc0a59b, 0xc00220, 0x4200);
    observe(bridge, 0xc0865f, 0xc0865f, second_copy_stack);
    // An interrupt callback can use the same row/COPY helpers for unrelated
    // graphics while this ordinary loader is suspended. Its scopes must mask
    // the outer owner, then restore that pending transaction on return.
    constexpr unsigned nested_row_stack = 0x1e80, nested_copy_stack = nested_row_stack - 9;
    far(nested_row_stack + 1, f.loc(0xc429d3, 0xc42911) + 3);
    observe(bridge, 0xc0a56e, 0xc0a54d, nested_row_stack);
    prepare_segment(nested_copy_stack, 0xc0a5ce, 0xc0a5ad, 0x7f0200, 0x4400);
    observe(bridge, 0xc0865f, 0xc0865f, nested_copy_stack);
    observe(bridge, 0xc086c9, 0xc086c9, nested_copy_stack - 3);
    bridge.complete_graphics_dma(0x7f0200, 0x4400, 32, 1, 0x18, 0x80);
    observe(bridge, 0xc086dd, 0xc086d6, nested_copy_stack);
    observe(bridge, 0xc0a5e4, 0xc0a5c3, nested_row_stack);
    require(bridge.diagnostics().committed_patches == 0,
            "Unrelated nested row inherited the suspended sprite owner");
    auto copied = bridge;
    // NMI drains the first published segment while the second waits for space.
    observe(bridge, 0xc08240, 0xc08240, 0x1e80, 0);
    bridge.complete_graphics_dma(0xc00200, 0x40f0, 32, 1, 0x18, 0x80);
    const auto partial = bridge.committed_image(pose.generation, SpriteOrientation::Normal);
    const auto copied_initial = copied.committed_image(pose.generation, SpriteOrientation::Normal);
    require(*copied_initial->canvas == *initial->canvas,
            "Copied bridge artwork changed when the original transfer completed");
    auto mutable_copy = bridge;
    const auto before_exclusion = mutable_copy.artwork_revision();
    f.observe(mutable_copy, 0xc429ae, 0xc428ec);
    require(!mutable_copy.committed_image(pose.generation, SpriteOrientation::Normal) &&
                mutable_copy.artwork_revision() != before_exclusion,
            "Mutable upload must invalidate retained ordinary artwork and wake snapshot refresh");
    require(bridge.committed_image(pose.generation, SpriteOrientation::Normal) == partial,
            "Mutable generation exclusion leaked into an independent bridge copy");
    for (unsigned y = 0; y < 32; ++y)
        for (unsigned x = 0; x < 16; ++x)
            require((*partial->canvas)[y * 16 + x] ==
                        (y >= 8 && y < 16 && x < 8 ? (*pose.image->canvas)[y * 16 + x] : 0),
                    "First split transfer must publish exactly its first logical tile");
    observe(bridge, 0xc086a1, 0xc086a1, second_copy_stack - 3, 0, 0); // Ring wraps slot31.
    observe(bridge, 0xc086dd, 0xc086d6, second_copy_stack);
    observe(bridge, 0xc0a5e4, 0xc0a5c3, row_stack);
    observe(bridge, 0xc0a56d, 0xc0a54c, load_stack);
    auto surviving_owner = bridge;
    f.observe(bridge, 0xc02140, 0xc0214e);
    bridge.collect_artwork({});
    require(!bridge.committed_image(pose.generation, SpriteOrientation::Normal),
            "Released generation must stop supplying artwork to retained scenes");
    observe(bridge, 0xc08240, 0xc08240, 0x1e80, 248);
    // Collection must retain the hidden backing store for pending jobs. This
    // completion must succeed without making a released owner visible again.
    bridge.complete_graphics_dma(0xc00220, 0x4200, 32, 1, 0x18, 0x80);
    require(!bridge.committed_image(pose.generation, SpriteOrientation::Normal),
            "A final pending transfer must not revive released artwork");
    observe(surviving_owner, 0xc08240, 0xc08240, 0x1e80, 248);
    surviving_owner.complete_graphics_dma(0xc00220, 0x4200, 32, 1, 0x18, 0x80);
    const auto completed = surviving_owner.committed_image(pose.generation, SpriteOrientation::Normal);
    for (unsigned y = 0; y < 32; ++y)
        for (unsigned x = 0; x < 16; ++x)
            require((*completed->canvas)[y * 16 + x] ==
                        (y >= 8 && y < 16 ? (*pose.image->canvas)[y * 16 + x] : 0),
                    "Second split transfer must complete only the selected logical row");
    require(bridge.diagnostics().committed_patches == 2 && copied.diagnostics().committed_patches == 0,
            "Transfer counters or copied queue state leaked");
    require(*partial->canvas != *completed->canvas && *initial->canvas == *copied_initial->canvas,
            "Published snapshots changed after later DMA completion");
    bridge.collect_artwork({});
    require(!bridge.committed_image(pose.generation, SpriteOrientation::Normal),
            "Unused released artwork was not collected after its last transfer");
}
void immediate_transaction_test(eb::GameVersion version) {
    using eb::native::SpriteOrientation;
    Fixture f(version);
    eb::OverworldSpriteBridge bridge(f.assets, version);
    constexpr unsigned load_stack = 0x1f00, row_stack = load_stack - 3, copy_stack = row_stack - 9;
    const auto far = [&](unsigned at, unsigned value) {
        f.put(at, value);
        f.ram[at + 2] = value >> 16;
    };
    const auto observe = [&](unsigned us, unsigned jp, unsigned stack) {
        f.observe(bridge, us, jp, 0, 0, 0, stack);
    };
    observe(0xc0a4c4, 0xc0a4a3, load_stack);
    const auto pose = *bridge.pose(0);
    const auto row = [&](unsigned ordinal, unsigned mode, bool queued = false) {
        static constexpr unsigned destinations[]{0x4100, 0x4020, 0x4120};
        const unsigned source = mode ? 0xc40be8 : 0xc00200 + ordinal * 64;
        far(row_stack + 1, f.loc(mode ? 0xc0a526 : 0xc0a559, mode ? 0xc0a505 : 0xc0a538) + 3);
        f.put(0x92, 64);
        f.put(0x97, destinations[ordinal]);
        observe(0xc0a56e, 0xc0a54d, row_stack);
        f.ram[0x91] = mode;
        far(0x94, source);
        f.put(copy_stack + 1, 0x8656);
        far(copy_stack + 7, f.loc(0xc0a5ce, 0xc0a5ad) + 3);
        observe(0xc0865f, 0xc0865f, copy_stack);
        if (queued)
            f.observe(bridge, 0xc086a1, 0xc086a1, 0, 0, (ordinal + 1) * 8, copy_stack - 3);
        else {
            observe(0xc086c9, 0xc086c9, copy_stack - 3);
            bridge.complete_graphics_dma(source, destinations[ordinal], 64, mode ? 9 : 1, 0x18, 0x80);
        }
        observe(0xc086dd, 0xc086d6, copy_stack);
        observe(0xc0a60a, 0xc0a5e9, row_stack);
    };
    for (unsigned ordinal = 0; ordinal < 3; ++ordinal)
        row(ordinal, 0);
    observe(0xc0a56d, 0xc0a54c, load_stack);
    const auto normal = bridge.committed_image(pose.generation, SpriteOrientation::Normal);
    require(*normal->canvas == *pose.image->canvas,
            "Immediate row transfers must reconstruct the imported ordinary canvas");
    f.put(f.loc(0x2baa, 0x2fa8), 8);
    observe(0xc0a4c4, 0xc0a4a3, load_stack);
    row(0, 3);
    const auto sinking = bridge.committed_image(pose.generation, SpriteOrientation::Normal);
    for (unsigned y = 0; y < 32; ++y)
        for (unsigned x = 0; x < 16; ++x)
            require((*sinking->canvas)[y * 16 + x] == (y >= 8 && y < 16 ? 0 : (*normal->canvas)[y * 16 + x]),
                    "Surface blank transfer must erase only its completed row");
    require(bridge.diagnostics().committed_patches == 4 && bridge.diagnostics().queued_patches == 0,
            "Immediate transactions must not enter the source queue ledger");
    // Finish the shallow load, then queue an ordinary replacement before the
    // mutable upload starts. Even its final segment cannot restore an owner
    // invalidated after that ordinary job began.
    row(1, 0);
    row(2, 0);
    observe(0xc0a56d, 0xc0a54c, load_stack);
    f.put(f.loc(0x2baa, 0x2fa8), 0);
    observe(0xc0a4c4, 0xc0a4a3, load_stack);
    for (unsigned ordinal = 0; ordinal < 3; ++ordinal)
        row(ordinal, 0, true);
    observe(0xc0a56d, 0xc0a54c, load_stack);
    f.observe(bridge, 0xc429ae, 0xc428ec);
    for (unsigned ordinal = 0; ordinal < 3; ++ordinal) {
        static constexpr unsigned destinations[]{0x4100, 0x4020, 0x4120};
        f.observe(bridge, 0xc08240, 0xc08240, 0, ordinal * 8, 0, 0x1e80);
        bridge.complete_graphics_dma(0xc00200 + ordinal * 64, destinations[ordinal], 64, 1, 0x18, 0x80);
        require(!bridge.committed_image(pose.generation, SpriteOrientation::Normal),
                "An ordinary job begun before exclusion must never restore mutable artwork");
    }
    observe(0xc0a4c4, 0xc0a4a3, load_stack);
    require(!bridge.committed_image(pose.generation, SpriteOrientation::Normal),
            "A future loader entry alone cannot restore excluded artwork");
    for (unsigned ordinal = 0; ordinal < 3; ++ordinal) {
        row(ordinal, 0);
        require(bool(bridge.committed_image(pose.generation, SpriteOrientation::Normal)) == (ordinal == 2),
                "Only the completed future ordinary job can restore excluded artwork");
    }
    const auto restored = bridge.committed_image(pose.generation, SpriteOrientation::Normal);
    require(*restored->canvas == *pose.image->canvas,
            "Restored ordinary artwork differs after full replacement of mutable content");
}
} // namespace
int main() {
    try {
        test(eb::GameVersion::US);
        test(eb::GameVersion::JP);
        transaction_test(eb::GameVersion::US);
        transaction_test(eb::GameVersion::JP);
        immediate_transaction_test(eb::GameVersion::US);
        immediate_transaction_test(eb::GameVersion::JP);
        std::cout << "Host sprite bridge: US/JP latches, generation, copying and exclusions passed\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
