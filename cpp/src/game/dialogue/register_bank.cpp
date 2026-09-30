#include "eb/game/dialogue/register_bank.hpp"

namespace eb::game::dialogue {
namespace {

struct Layout {
    std::uint16_t dummy_window, window_stats, window_head, open_window_table;
    std::uint16_t current_focus_window, window_size;
    std::uint32_t working_backup, argument_backup, secondary_backup;
};

// Provenance: ebsrc src/bankconfig/common/ram.asm labels DUMMY_WINDOW,
// WINDOW_STATS, WINDOW_HEAD, OPEN_WINDOW_TABLE, CURRENT_FOCUS_WINDOW and
// TEXT_{MAIN,SUB,LOOP}_REGISTER_BACKUP; linked symbols in
// build/cpp/assembly/{us,jp}/earthbound.dbg. Confirmed against the frozen
// get_active_window_address and CC_1B_TREE operands in generated/{us,jp}.
// include/structs.asm makes window_stats 82 bytes US, 76 bytes JP.
constexpr Layout us_layout{
    .dummy_window = 0x85fe, .window_stats = 0x8650,
    .window_head = 0x88e0, .open_window_table = 0x88e4,
    .current_focus_window = 0x8958, .window_size = 82,
    .working_backup = 0x7e97cc, .argument_backup = 0x7e97d0,
    .secondary_backup = 0x7e97d4,
};
constexpr Layout jp_layout{
    .dummy_window = 0x8976, .window_stats = 0x89c2,
    .window_head = 0x8c22, .open_window_table = 0x8c26,
    .current_focus_window = 0x8c96, .window_size = 76,
    .working_backup = 0x7e9a80, .argument_backup = 0x7e9a84,
    .secondary_backup = 0x7e9a88,
};
const Layout& layout(GameVersion version) {
    return version == GameVersion::JP ? jp_layout : us_layout;
}

constexpr std::uint32_t wram_bank = 0x7e0000;

std::uint16_t read_word(const RegisterMemory& memory, std::uint32_t address) {
    const auto low = memory.read_byte(address);
    const auto high = memory.read_byte(address + 1);
    return std::uint16_t(low | (std::uint16_t(high) << 8));
}
std::uint32_t read_long(const RegisterMemory& memory, std::uint32_t address) {
    const auto low = read_word(memory, address);
    const auto high = read_word(memory, address + 2);
    return low | (std::uint32_t(high) << 16);
}
void write_word(RegisterMemory& memory, std::uint32_t address, std::uint16_t value) {
    memory.write_byte(address, std::uint8_t(value));
    memory.write_byte(address + 1, std::uint8_t(value >> 8));
}
void write_long(RegisterMemory& memory, std::uint32_t address, std::uint32_t value) {
    write_word(memory, address, std::uint16_t(value));
    write_word(memory, address + 2, std::uint16_t(value >> 16));
}

} // namespace

std::uint32_t WindowRegisters::address(std::uint16_t offset) const {
    return wram_bank + window_address_ + offset;
}
std::uint32_t WindowRegisters::working() const {
    return read_long(memory_, address(working_offset));
}
std::uint32_t WindowRegisters::argument() const {
    return read_long(memory_, address(argument_offset));
}
std::uint16_t WindowRegisters::secondary() const {
    return read_word(memory_, address(secondary_offset));
}
std::uint32_t WindowRegisters::set_working(std::uint32_t value) {
    write_long(memory_, address(working_offset), value);
    return value;
}
std::uint32_t WindowRegisters::set_argument(std::uint32_t value) {
    write_long(memory_, address(argument_offset), value);
    return value;
}
std::uint16_t WindowRegisters::set_secondary(std::uint16_t value) {
    write_word(memory_, address(secondary_offset), value);
    return value;
}
std::uint16_t WindowRegisters::increment_secondary() {
    // The original increment_secondary_memory.asm contains two consecutive
    // loads. Keep their ordering, then wrap the second result as a 16-bit word.
    (void)secondary();
    return set_secondary(std::uint16_t(secondary() + 1));
}
std::uint32_t WindowRegisters::transfer_storage(RegisterField field, StorageDirection direction) {
    const auto active = field == RegisterField::Working ? working_offset
        : field == RegisterField::Argument ? argument_offset : secondary_offset;
    const auto stored = field == RegisterField::Working ? working_storage_offset
        : field == RegisterField::Argument ? argument_storage_offset : secondary_storage_offset;
    const bool store = direction == StorageDirection::Store;
    const auto source = address(store ? active : stored);
    const auto destination = address(store ? stored : active);
    const bool word = field == RegisterField::Secondary;
    const auto value = word ? read_word(memory_, source) : read_long(memory_, source);
    if (word) write_word(memory_, destination, std::uint16_t(value));
    else write_long(memory_, destination, value);
    return value;
}
void WindowRegisters::store_active() {
    transfer_storage(RegisterField::Working, StorageDirection::Store);
    transfer_storage(RegisterField::Argument, StorageDirection::Store);
    transfer_storage(RegisterField::Secondary, StorageDirection::Store);
}
void WindowRegisters::restore_active() {
    transfer_storage(RegisterField::Working, StorageDirection::Restore);
    transfer_storage(RegisterField::Argument, StorageDirection::Restore);
    transfer_storage(RegisterField::Secondary, StorageDirection::Restore);
}
void WindowRegisters::swap_working_argument() {
    const auto previous_working = working();
    const auto previous_argument = argument();
    set_working(previous_argument);
    set_argument(previous_working);
}

std::uint16_t RegisterBank::active_window_address() const {
    const auto& addresses = layout(version_);
    if (read_word(memory_, wram_bank + addresses.window_head) == 0xffff)
        return addresses.dummy_window;
    const auto focus = read_word(memory_, wram_bank + addresses.current_focus_window);
    const auto table_offset = std::uint16_t(focus << 1);
    const auto window = read_word(memory_, wram_bank + addresses.open_window_table + table_offset);
    // MULT168 and the following ADC retain the low word of the product/sum.
    return std::uint16_t(addresses.window_stats + std::uint32_t(window) * addresses.window_size);
}
std::uint32_t RegisterBank::working() const {
    return window_at(active_window_address()).working();
}
std::uint32_t RegisterBank::argument() const {
    return window_at(active_window_address()).argument();
}
std::uint16_t RegisterBank::secondary() const {
    return window_at(active_window_address()).secondary();
}
std::uint32_t RegisterBank::set_working(std::uint32_t value) {
    return window_at(active_window_address()).set_working(value);
}
std::uint32_t RegisterBank::set_argument(std::uint32_t value) {
    return window_at(active_window_address()).set_argument(value);
}
std::uint16_t RegisterBank::set_secondary(std::uint16_t value) {
    return window_at(active_window_address()).set_secondary(value);
}
std::uint16_t RegisterBank::increment_secondary() {
    return window_at(active_window_address()).increment_secondary();
}
void RegisterBank::store_active() {
    window_at(active_window_address()).store_active();
}
void RegisterBank::restore_active() {
    window_at(active_window_address()).restore_active();
}
void RegisterBank::swap_working_argument() {
    // CC_1B calls each getter/setter separately; resolve the current window on
    // each call, just as those helpers do. Native body adapters use window_at.
    const auto previous_working = working();
    const auto previous_argument = argument();
    set_working(previous_argument);
    set_argument(previous_working);
}
void RegisterBank::backup() {
    const auto& addresses = layout(version_);
    write_long(memory_, addresses.working_backup, working());
    write_long(memory_, addresses.argument_backup, argument());
    memory_.write_byte(addresses.secondary_backup, std::uint8_t(secondary()));
}
void RegisterBank::restore_backup() {
    const auto& addresses = layout(version_);
    set_working(read_long(memory_, addresses.working_backup));
    set_argument(read_long(memory_, addresses.argument_backup));
    // The source loads a word (including the adjacent ONGOSUB_OFFSET byte),
    // masks it to $00ff, then writes a complete secondary word. Retain the read
    // width, preserve that neighbour, and explicitly clear secondary's high byte.
    set_secondary(read_word(memory_, addresses.secondary_backup) & 0x00ff);
}

} // namespace eb::game::dialogue
