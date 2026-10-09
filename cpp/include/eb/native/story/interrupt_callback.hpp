#pragma once
namespace eb::native::story {
// SET_IRQ_CALLBACK replaces the post-display NMI work. The callback never
// polls input. It borrows stable scene owners until explicitly reset; nested
// NMI still publishes its display while IN_IRQ_CALLBACK suppresses recursion.
class InterruptCallback {
public:
    virtual ~InterruptCallback() = default;
    virtual void validate_publication() const = 0;
    virtual void after_publication() = 0;
    // Direct register writes take effect in this same scanout. Recapture is
    // read-only: it cannot consume another NMI, DMA, palette upload or fade.
    virtual bool changes_display_registers() const noexcept { return false; }
};
}
