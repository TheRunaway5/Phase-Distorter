#include "eb/native/dialogue/ambient/layout.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/actor_world.hpp"

namespace eb::native::dialogue {
namespace {
ambient::ActorVariables actor_variables(ActorWorld &actors) {
    return {&actors,
        [](void *owner,unsigned role,unsigned variable) {
            return static_cast<ActorWorld *>(owner)->authored_variable(role,variable);
        },
        [](void *owner,unsigned role,unsigned variable,std::uint16_t value) {
            static_cast<ActorWorld *>(owner)->set_authored_variable(role,variable,value);
        }};
}
}
void WindowHost::bind_ambient_actor_variables(ActorWorld &actors) {
    bind_ambient_actor_variables_source(actor_variables(actors));
}
void ambient::Layout::bind(ActorWorld &actors) {
    bind(actor_variables(actors));
}
} // namespace eb::native::dialogue
