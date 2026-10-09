#include "eb/native/story/work_clock.hpp"
#include <iostream>
#include <limits>
#include <stdexcept>

namespace {
unsigned checks{};
void require(bool value, const char *message) {
  ++checks; if (!value) throw std::runtime_error(message);
}
}
int main() { try {
  using eb::native::story::SourceWorkCost;
  // Independently literal access-class examples: far JSL has four upper-ROM
  // fetch bytes and three8-clock native stack writes; DP STA has two fetch
  // bytes and one8-clock WRAM write. No helper-duration calibration is used.
  require(SourceWorkCost{8,4,3,0}.master_clocks(false)==62, "Slow far-call work");
  require(SourceWorkCost{8,4,3,0}.master_clocks(true)==54, "Fast far-call work");
  require(SourceWorkCost{3,2,1,0}.master_clocks(false)==24, "Slow direct-page store work");
  require(SourceWorkCost{3,2,1,0}.master_clocks(true)==20, "Fast direct-page store work");
  require(SourceWorkCost{4,3,0,1}.master_clocks(true)==30, "12-clock I/O wait work");
  require(SourceWorkCost{4,3,0,0}.master_clocks(true)==24, "6-clock I/O has no extra wait");
  bool rejected{}; try { (void)SourceWorkCost{}.master_clocks(true); }
  catch(const std::invalid_argument &) { rejected=true; }
  require(rejected, "Zero literal work admitted");
  rejected=false; try {
    (void)SourceWorkCost{std::numeric_limits<unsigned>::max(),1,1,1}.master_clocks(false);
  } catch(const std::invalid_argument &) { rejected=true; }
  require(rejected, "Unbounded work cost overflow admitted");
  std::cout << "PASS source work access costs: " << checks << " checks\n";
} catch(const std::exception &e) { std::cerr << e.what() << '\n'; return 1; } }
