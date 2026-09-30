#include "eb/overworld_sprite_allocation.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <functional>
#include <iostream>
#include <stdexcept>

namespace {
void require(bool okay, const char *message) {
    if (!okay)
        throw std::runtime_error(message);
}
void rejects(const std::function<void()> &operation, const char *message) {
    try {
        operation();
    } catch (const std::exception &) {
        return;
    }
    throw std::runtime_error(message);
}
void test() {
    native_sprite_test::Fixture content;
    std::copy_n(content.bytes.begin() + 32, 41, content.bytes.begin() + 73);
    content.pointer(4, 73);
    content.layout.groups_end = 114;
    content.bytes[76] = 4; // Same geometry, different authored palette.
    auto resources = std::make_shared<eb::native::SpriteResources>(content.bytes, content.layout);
    eb::native::ActorCreationData metadata;
    metadata.collision_profiles[0] = 0x8123;
    eb::OverworldSpriteAllocation allocation(resources, metadata);
    {
        auto abandoned = allocation.prepare(0);
        require(bool(abandoned) && allocation.size() == 0, "Prepared resource was prematurely committed");
    }
    auto lease = allocation.prepare(0);
    const auto first = allocation.commit(std::move(lease));
    require(!lease && allocation.size() == 1, "Committed lease was not consumed");
    rejects([&] { allocation.commit(std::move(lease)); }, "Consumed creation lease was reused");
    const auto initial = allocation.snapshot(first);
    require(!initial.image && !initial.selection && initial.creation.collision_profile == 0x8123 &&
                initial.creation.sprite.palette == 5,
            "Prepared native resource lost metadata or selected artwork before an authored update");
    allocation.select_four(first, 2, 1, 8);
    const auto retained = allocation.snapshot(first);
    require(retained.image && retained.selection->surface == eb::native::SpriteSurface::Shallow,
            "Native selection failed to retain imported artwork");
    allocation.set_sprite(first, 1);
    require(allocation.snapshot(first).image == retained.image,
            "Requested artwork changed before the authored animation refresh");
    allocation.select_four(first, 2, 1, 8);
    const auto replacement = allocation.snapshot(first);
    require(replacement.creation.sprite.palette == 5 && replacement.image->palette == 2,
            "Artwork replacement lost the authoritative creation palette");
    rejects([&] { allocation.select_eight(first, 0, 1); }, "Misaligned eight-direction phase accepted");
    require(allocation.snapshot(first).image == replacement.image,
            "Invalid selection changed latched artwork");
    std::vector<eb::OverworldSpriteAllocation::ResourceId> ids;
    for (unsigned i = 0; i < 4096; ++i) {
        const auto id = allocation.commit(allocation.prepare(i & 1));
        allocation.select_four(id, i & 7, i & 1, i % 3 == 0 ? 12 : 0);
        ids.push_back(id);
    }
    require(allocation.size() == 4097 && ids.back() > 88,
            "Native resources still depend on original graphics/descriptor capacity");
    require(allocation.release(first) && !allocation.release(first), "Resource release is not exact");
    require(retained.image && retained.image->indices.size(), "Published image died with resource owner");
    rejects([&] { allocation.snapshot(first); }, "Released native identity still resolves");
    allocation.reset();
    require(allocation.size() == 0, "Native reset did not release resources");
    const auto after_reset = allocation.commit(allocation.prepare(0));
    require(after_reset > ids.back(), "Reset reused a resource identity visible to old frames");
    auto foreign = std::make_shared<eb::native::SpriteResources>(content.bytes, content.layout);
    eb::OverworldSpriteAllocation other(foreign, metadata);
    auto wrong = other.prepare(0);
    rejects([&] { allocation.commit(std::move(wrong)); }, "Foreign catalog lease was accepted");
    require(bool(wrong), "Rejected commit consumed the foreign creation lease");
    auto different_metadata = metadata;
    different_metadata.collision_profiles[0] = 0x4567;
    eb::OverworldSpriteAllocation same_catalog(resources, different_metadata);
    auto foreign_owner = same_catalog.prepare(0);
    rejects([&] { allocation.commit(std::move(foreign_owner)); },
            "Shared catalog allowed another owner's creation metadata into this transaction");
    require(bool(foreign_owner), "Rejected same-catalog lease was consumed");
    const auto original_owner = same_catalog.commit(std::move(foreign_owner));
    require(same_catalog.snapshot(original_owner).creation.collision_profile == 0x4567,
            "Rejected lease no longer commits to its originating owner");
    allocation.select_four(after_reset, 0, 0);
    const auto before_copy = allocation.snapshot(after_reset).image;
    auto pending = allocation.prepare(1);
    eb::OverworldSpriteAllocation copy(allocation);
    rejects([&] { copy.commit(std::move(pending)); }, "A copied owner accepted its source's prepared lease");
    require(bool(pending), "Rejected copied-owner commit consumed a prepared lease");
    copy.select_four(after_reset, 2, 1, 8);
    require(allocation.snapshot(after_reset).image == before_copy &&
                copy.snapshot(after_reset).image != before_copy,
            "Copied owner mutated the original selection");
    require(copy.release(after_reset) && allocation.snapshot(after_reset).image == before_copy,
            "Copied owner release removed the original resource");
    copy = allocation;
    allocation.release(after_reset);
    require(copy.snapshot(after_reset).image == before_copy,
            "Copy assignment did not retain independent resources and artwork");
    const auto from_pending = allocation.commit(std::move(pending));
    require(from_pending > after_reset, "Copy operations changed the originating resource generation");
}
} // namespace
int main() {
    try {
        test();
        std::cout << "Native ordinary allocation: leases, metadata, 4097 resources and lifetimes passed\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
