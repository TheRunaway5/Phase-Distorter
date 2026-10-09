#pragma once
#include "eb/native/story/copy_counter.hpp"
#include <functional>
#include <cstdint>
#include <limits>
#include <stdexcept>
namespace eb::native {
class ActorWorld;
namespace battle { class PsiDisplayState; }
namespace story {
// Literal architectural cycles and byte accesses for one named native source
// effect. slow_accesses includes8-clock WRAM/stack and bank00 ROM; upper-bank
// rom_accesses uses the retained MEMSEL setting. No opcode/register dispatch.
struct SourceWorkCost {
  unsigned cpu_cycles{}, rom_accesses{}, slow_accesses{}, slow_io_accesses{};
  unsigned master_clocks(bool fast_rom) const {
    const auto clocks = std::uint64_t(cpu_cycles) * 6 +
        std::uint64_t(rom_accesses) * (fast_rom ? 0 : 2) +
        std::uint64_t(slow_accesses) * 2 + std::uint64_t(slow_io_accesses) * 6;
    if (!cpu_cycles || clocks > std::numeric_limits<unsigned>::max())
      throw std::invalid_argument("Source work cost requires bounded literal CPU cycles");
    return unsigned(clocks);
  }
};
class SourceWorkService {
public:
  SourceWorkService()=default;
  SourceWorkService(const SourceWorkService&)=delete;
  SourceWorkService& operator=(const SourceWorkService&)=delete;
  SourceWorkService(SourceWorkService&&)=delete;
  SourceWorkService& operator=(SourceWorkService&&)=delete;
  virtual ~SourceWorkService() = default;
  bool can_bind_copy_counter(const CopyCounterState &state) const noexcept {
    return !copy_counter_ || (copy_counter_==&state&&!copy_counter_lifetime_.expired());
  }
  void bind_copy_counter(CopyCounterState &state) {
    if(!can_bind_copy_counter(state))throw std::logic_error("Source work already owns another or expired MEMCPY counter");
    copy_counter_=&state;copy_counter_lifetime_=state.source_lifetime();
  }
  bool uses_copy_counter(const CopyCounterState &state) const noexcept {
    return copy_counter_==&state&&!copy_counter_lifetime_.expired();
  }
  bool copy_counter_failed() const noexcept {return copy_counter_&&copy_counter_lifetime_.expired();}
  virtual bool uses(const ActorWorld &, const battle::PsiDisplayState &) const noexcept = 0;
  virtual void clear_objects() {
    throw std::logic_error("Source OAM clear work is not owned by this service");
  }
  virtual void retire_source_work(SourceWorkCost, const std::function<void()> &effect = {}) = 0;
  // One source MDMAEN instruction and its real single-channel DMA debt retire
  // together. effective_bytes is1..65536 (raw DAS0 means65536), never a delay.
  virtual void retire_dma_work(SourceWorkCost, unsigned effective_bytes,
                               const std::function<void()> &effect = {}) = 0;
  virtual bool failed() const noexcept {return copy_counter_failed();}
  virtual std::uint64_t completed_source_interrupts() const noexcept {return 0;}
private:
  CopyCounterState *copy_counter_{};
  std::weak_ptr<const void> copy_counter_lifetime_;
};
} // namespace story
} // namespace eb::native
