#pragma once

#include "eb/native/world_bootstrap.hpp"
#include "eb/native/world_party_creation.hpp"
#include "eb/native/story/party_formation.hpp"
#include <stdexcept>

// Reference-fixture prerequisite, not an alternate gameplay implementation.
// These are the complete reset/allocation/party helpers called by C0B67F before
// map loading. The caller still owns its declared battle entry, IRQ and map
// state; this does not claim the remainder of C0B67F ran.
namespace battle_party_reference {
template <class Source> void prepare_source(Source &source) {
    source.call(source.jp ? 0xc0925e : 0xc0927c);
    source.call(source.jp ? 0xc01a9c : 0xc01a86);
    source.call(source.jp ? 0xc01c27 : 0xc01c11, 0x8000, 0);
    source.call(source.jp ? 0xc01a7f : 0xc01a69);
    // Literal controller allocation bounds set by the original C0B67F caller.
    source.put(source.jp ? 0xa42 : 0xa4c, 23);
    source.put(source.jp ? 0xa44 : 0xa4e, 24);
    source.call(source.jp ? 0xc09300 : 0xc09321, 1, 0, 0);
    source.call(source.jp ? 0xc02efe : 0xc02d29);
    source.call(source.jp ? 0xc03c74 : 0xc03a24);
    // Restore the fixture's explicit incoming battle recursion suppression.
    source.put(source.jp ? 0xa56 : 0xa60, 1);
}

template <class Rig> void prepare_native(Rig &rig) {
    using namespace eb::native;
    auto &n = rig.n;
    const auto previous = n.actors.actors();
    for (const auto id : previous)
        n.interactions.detach(id);
    n.actors.reset_scripts();
    n.actors.initialize_scene_objects();
    n.clock.action_scripts_disabled = 0;
    WorldBootstrapData data(n.r.assets.image, n.r.assets.version);
    WalkingData walking(n.r.assets.image, n.r.assets.version);
    WorldBootstrap bootstrap(data, walking, n.actors, n.party, n.party_state, rig.trail,
                             rig.control, rig.maintenance, rig.following_state);
    bootstrap.create_controller_and_initialize(rig.prepared_actor);
    auto operation = rig.creation.begin_rebuild();
    while (!operation->advance()) {
        const auto service = operation->service()->kind;
        if (service == WorldPartyCreationServiceKind::CompareInsertionMember)
            throw std::logic_error("Party prerequisite requires an unexpected comparison");
        auto tail = n.formation.begin_tail(
            service == WorldPartyCreationServiceKind::RefreshMovementPolicy
                ? WorldPartyService::RefreshMovementPolicy
                : WorldPartyService::RefreshWindowPalette);
        if (tail->advance() != dialogue::Progress::Finished)
            throw std::logic_error("Walking party prerequisite unexpectedly needs a bicycle");
        tail.reset();
        operation->respond();
    }
    for (const auto &entry : operation->created()) {
        const auto &actor = n.actors.actor(entry.actor);
        n.interactions.attach(entry.actor, entry.role,
                              actor_creation_metadata(*n.r.sprites, rig.actor_data,
                                                      actor.appearance.sprite()),
                              0xffff);
    }
    n.clock.action_scripts_disabled = 1;
}

template <class Source, class Rig> void prepare_party_context(Source &source, Rig &rig) {
    prepare_source(source);
    prepare_native(rig);
}
} // namespace battle_party_reference
