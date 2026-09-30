#pragma once

namespace eb {
// Clock selection is independent of artwork/allocator ownership. ActorFrames
// admits at most one enabled actor pass per hardware frame and advances audited
// actor-owned fades after completed passes. Slow source work may still overrun
// a hardware frame; this policy never skips or invents an authored pass.
enum class LogicalClockPolicy { SourceTiming, ActorFrames };
} // namespace eb
