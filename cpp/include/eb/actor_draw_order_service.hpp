#pragma once
namespace eb {
class MainCpu65816;
class SnesBus;
// Replaces only the pure maximum-selection helper. The existing caller owns
// visibility, callbacks and post-callback removal, and invokes a new query
// after every callback instead of precomputing a potentially stale order.
bool try_native_actor_draw_order(MainCpu65816 &cpu, SnesBus &bus);
} // namespace eb
