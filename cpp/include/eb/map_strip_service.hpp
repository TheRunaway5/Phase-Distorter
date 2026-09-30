#pragma once
namespace eb {
class MainCpu65816;
class SnesBus;
// Transitional dynamic-cache adapter. Replaces only CPU tile preparation;
// source heap ownership, transfer enqueue/publication and camera logic remain.
bool try_native_map_strip(MainCpu65816 &cpu, SnesBus &bus);
} // namespace eb
