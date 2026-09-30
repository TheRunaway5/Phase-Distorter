#include "eb/native/entities/npc_collision.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
using namespace eb::native::entities;
unsigned checks{};
void require(bool value, const char* message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
CollisionShape shape() { return {1,0,{8,12},{8,12}}; }
CollisionQuery query() { return {100,100,shape()}; }
CollisionBody body() { return {100,100,0,0xffff,1,shape()}; }
void expect(const CollisionQuery& q, std::span<const CollisionBody> bodies,
            std::optional<std::size_t> expected, const char* message) {
    const auto original_query = q;
    const std::vector<CollisionBody> original_bodies(bodies.begin(),bodies.end());
    require(check_npc_collision(q,bodies).selected_index == expected,message);
    require(q == original_query && std::equal(bodies.begin(),bodies.end(),original_bodies.begin()),
            "Collision query mutated the borrowed observation");
}
void ordered_population() {
    auto q = query();
    expect(q,{},std::nullopt,"Empty ordered population must miss");
    std::vector<CollisionBody> bodies(24,body());
    for (auto& b : bodies) b.script = 0xffff;
    bodies[23].script = 0;
    expect(q,bodies,23,"Native candidate23 must remain eligible");
    bodies[7].script = 0; bodies[7].npc_id = 0xffff;
    expect(q,bodies,7,"Candidate order, not NPC ID or distance, selects the first hit");
    std::swap(bodies[7],bodies[2]);
    expect(q,bodies,2,"Changing explicit precedence must change the selected index");
    bodies.assign(65538,CollisionBody{});
    bodies[65536] = body();
    expect(q,bodies,65536,"Native actor index must not wrap to16bits or useffff as a sentinel");
    bodies[65535] = body();
    expect(q,bodies,65535,"Indexffff is a valid native candidate index");
    const std::array self{body()};
    expect(q,self,0,"Moving actor is not excluded when included in the supplied order");
}
void gates_and_eligibility() {
    std::array bodies{body(),body()};
    for (unsigned gate = 0; gate < 4; ++gate) {
        auto q = query();
        if (gate == 0) q.moving.hitbox_enabled = 0;
        if (gate == 1) q.movement_flags = 2;
        if (gate == 2) q.walking_style = 12;
        if (gate == 3) q.demo_frames = 0x8000;
        expect(q,bodies,std::nullopt,"Global collision gate failed");
    }
    auto q = query();
    q.moving.hitbox_enabled = 0x8000; q.walking_style = 0xffff; q.movement_flags = 0xfffd;
    expect(q,bodies,0,"Only exact gate bits/values may disable collision");
    for (const auto marker : {0u,1u,0x7fffu,0x8000u,0x8001u,0xffffu}) {
        bodies[0] = body(); bodies[0].script = std::uint16_t(marker);
        expect(q,bodies,marker == 0xffff ? 1 : 0,"Script sentinel was narrowed or treated as signed");
        bodies[0] = body(); bodies[0].collision_marker = std::uint16_t(marker);
        expect(q,bodies,marker == 0x8000 ? 1 : 0,"Collision marker sentinel changed");
    }
    bodies[0] = body(); q.intangibility_frames = 1;
    for (unsigned id = 0; id <= 0xffff; ++id) {
        bodies[0].npc_id = std::uint16_t(id);
        require(check_npc_collision(q,bodies).selected_index == (id >= 0x8000 && id < 0xffff ? 1 : 0),
                "Intangibility predicate failed a full-word NPC ID");
    }
    q.intangibility_frames = 0;
    expect(q,bodies,0,"Zero intangibility must preserve theffff NPC candidate");
    bodies[0].shape.hitbox_enabled = 0;
    expect(q,bodies,1,"Disabled candidate hitbox did not fall through to the next body");
}
void geometry() {
    auto q = query(); std::array bodies{body()};
    for (const auto edge : std::array<std::array<unsigned,3>,9>{{
        {84,100,0},{85,100,1},{115,100,1},{116,100,0},
        {100,88,0},{100,89,1},{100,111,1},{100,112,0},{100,100,1}}}) {
        bodies[0].x = std::uint16_t(edge[0]); bodies[0].y = std::uint16_t(edge[1]);
        expect(q,bodies,edge[2] ? std::optional<std::size_t>(0) : std::nullopt,
               "Touching versus overlapping edge semantics changed");
    }
    bodies[0] = body(); bodies[0].x = 120; bodies[0].shape.lateral.half_width = 32;
    for (unsigned direction = 0; direction <= 0xffff; ++direction) {
        bodies[0].shape.direction = std::uint16_t(direction);
        require(check_npc_collision(q,bodies).selected_index.has_value() == (direction == 2 || direction == 6),
                "Candidate direction must use exactly full words2/6");
    }
    bodies[0] = body(); bodies[0].x = 125; q.moving.lateral.half_width = 32;
    for (unsigned direction = 0; direction <= 0xffff; ++direction) {
        q.moving.direction = std::uint16_t(direction);
        require(check_npc_collision(q,bodies).selected_index.has_value() == (direction == 2 || direction == 6),
                "Moving direction must use exactly full words2/6");
    }
    q = query(); bodies[0] = body(); q.x = 5; bodies[0].x = 5;
    expect(q,bodies,std::nullopt,"Wrapped coincident boxes must retain source unsigned comparisons");
    q = query(); bodies[0] = body(); bodies[0].y = 95; bodies[0].shape.vertical = {0,0};
    expect(q,bodies,0,"Source permits a zero-extent interior point");
    bodies[0].y = 100;
    expect(q,bodies,std::nullopt,"Zero-extent point on the bottom edge must miss");
    bodies[0] = body(); q.moving.vertical.half_width = 0x8008;
    expect(q,bodies,std::nullopt,"Doubled width wrap must not become a widened host rectangle");
}
}
int main() {
    try { ordered_population(); gates_and_eligibility(); geometry();
        std::cout << "PASS " << checks << " native NPC collision checks, including ordered populations beyond23/65535\n";
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
