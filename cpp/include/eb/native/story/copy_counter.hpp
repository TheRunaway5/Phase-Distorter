#pragma once
#include <cstdint>
#include <memory>

namespace eb::native::cutscenes::ending { class InitializerWork; }
namespace eb::native::story {
class SourceMeterStatus;
// The single retained MEMCPY_WORDS_LEFT word at 7E00A5/A6. The ending
// initializer and window palette copier borrow this same actual instance.
class CopyCounterState final {
public:
  explicit CopyCounterState(std::uint16_t value=0):memcpy_words_left(value) {}
  CopyCounterState(const CopyCounterState&)=delete;
  CopyCounterState& operator=(const CopyCounterState&)=delete;
  CopyCounterState(CopyCounterState&&)=delete;
  CopyCounterState& operator=(CopyCounterState&&)=delete;
  std::weak_ptr<const void> source_lifetime() const noexcept {return lifetime_;}
  bool source_active() const noexcept {return lease_!=nullptr;}
  std::uint16_t memcpy_words_left{};
private:
  friend class SourceMeterStatus;
  friend class eb::native::cutscenes::ending::InitializerWork;
  const void *lease_{};
  std::shared_ptr<const void> lifetime_=std::make_shared<const unsigned>(0);
};
}
