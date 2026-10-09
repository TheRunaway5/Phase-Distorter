// Source: text/hp_pp_window/*.asm, text/update_hppp_meter_tiles.asm,
// show/hide_hppp_windows.asm and C2077D/C3E6F8. CPU-free algorithms retain
// publication order through the shared native WindowHost queue.
#include "eb/native/party/meter_windows.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::party {
namespace {
using dialogue::ArtworkCellReference;
using Digits = std::array<ArtworkCellReference, 12>;
void require(bool condition, const char* message) {
    if (!condition) throw std::logic_error(message);
}
ArtworkCellReference artwork(unsigned descriptor) {
    const auto word = std::uint16_t(descriptor);
    ArtworkCellReference result;
    result.artwork_cell = word & 0x3ff;
    result.style.palette = (word >> 10) & 7;
    result.style.priority = word & 0x2000;
    result.style.flip_horizontal = word & 0x4000;
    result.style.flip_vertical = word & 0x8000;
    return result;
}
unsigned descriptor(const ArtworkCellReference& cell) {
    return cell.artwork_cell | (unsigned(cell.style.palette) << 10) |
           (cell.style.priority ? 0x2000 : 0) | (cell.style.flip_horizontal ? 0x4000 : 0) |
           (cell.style.flip_vertical ? 0x8000 : 0);
}
unsigned first_cell(unsigned phase, std::uint8_t controlled_count, unsigned row) {
    // Source word arithmetic happens before BG2 addressing. Keep row crossing
    // within the native scene rather than silently clamping each coordinate.
    return std::uint16_t(row * 32 + 16 - (unsigned(controlled_count) * 7 / 2) + phase * 7);
}
void validate_rectangle(unsigned first, unsigned width, unsigned height) {
    require(width && height && first < 32 * 28 && (height - 1) * 32 + width <= 32 * 28 - first,
            "Meter rectangle is outside the native window scene");
}
void fill_digits(Digits& buffer, unsigned half, std::uint16_t value, std::uint16_t fraction) {
    // The entry named DIVISION16S_DIVISOR_POSITIVE performs unsigned division.
    // SEPARATE_DECIMAL_DIGITS stores only the low byte of its hundreds value.
    const std::array<unsigned, 3> digits{(value / 100) & 255u, (value / 10) % 10u, value % 10u};
    unsigned animation = fraction < 0x3000 ? 0 : (fraction - 0x3000) / 0x3400;
    const unsigned base = half * 6;
    for (int place = 2; place >= 0; --place) {
        if (place < 2 && digits[place + 1] != 9) animation = 0;
        const bool leading_blank = place == 0 ? digits[0] == 0 :
                                   place == 1 && digits[0] == 0 && digits[1] == 0;
        const unsigned code = 0x2600 + (leading_blank ? 0x48 : 0) +
                              digits[place] * 4 + (digits[place] / 4) * 16 + animation;
        buffer[base + unsigned(place)] = artwork(code);
        buffer[base + unsigned(place) + 3] = artwork(code + 16);
    }
}
void fill_pp(Digits& buffer, const Character& character) {
    if (character.afflictions[4]) {
        for (unsigned i = 0; i < 3; ++i) {
            buffer[6 + i] = artwork(0x264c + i);
            buffer[9 + i] = artwork(0x265c + i);
        }
    } else fill_digits(buffer, 1, character.current_pp, character.pp_fraction);
}
} // namespace

struct MeterWindows::Execution {
    dialogue::WindowHost& host;
    State& party;
    std::shared_ptr<const MeterWindowResources> resources;
    MeterWindowState flags;
    std::array<std::shared_ptr<Digits>, 4> digits;
    bool active{}, poisoned{};
    const void *source_lease{};
    std::array<std::uint8_t,3> decimal{};
    Execution(dialogue::WindowHost& host, State& party, std::shared_ptr<const MeterWindowResources> resources)
        : host(host), party(party), resources(std::move(resources)) {
        require(this->resources && this->resources->version() == party.version() && host.version() == party.version(),
                "Meter windows, resources and party must share a region");
        for (auto& row : digits) {
            row = std::make_shared<Digits>();
            row->fill(artwork(0));
        }
    }
    unsigned row(unsigned phase) const { return flags.selected_phase == phase ? 18 : 19; }
    Character& character(unsigned phase) const {
        require(phase < digits.size(), "Meter phase exceeds the four retained digit buffers");
        return party.character(party.party_order[phase]);
    }
};

MeterWindows::MeterWindows(dialogue::WindowHost& host, State& party,
                           std::shared_ptr<const MeterWindowResources> resources)
    : execution_(std::make_unique<Execution>(host, party, std::move(resources))) {}
MeterWindows::~MeterWindows() = default;
bool MeterWindows::bound_to(const dialogue::WindowHost& host, const State& party) const noexcept {
    return &execution_->host == &host && &execution_->party == &party;
}
void MeterWindows::require_live() const {
    require(!execution_->poisoned, "Abandoned meter operation cannot be resumed");
    require(!execution_->source_lease,"Source meter artwork owns this actual meter host");
}
MeterWindowState& MeterWindows::state() { return execution_->flags; }
const MeterWindowState& MeterWindows::state() const { return execution_->flags; }
std::span<const ArtworkCellReference, 12> MeterWindows::digit_cells(unsigned phase) const {
    return *execution_->digits.at(phase);
}

bool MeterWindows::source_tiles_active() const noexcept {return execution_->source_lease!=nullptr;}
std::array<std::uint16_t,48> MeterWindows::source_digit_words() const {
    std::array<std::uint16_t,48> result{};
    for(unsigned i=0;i<48;++i)result[i]=std::uint16_t(descriptor((*execution_->digits[i/12])[i%12]));
    return result;
}
std::span<const std::uint8_t,3> MeterWindows::source_decimal_digits() const {return execution_->decimal;}
void MeterWindows::set_source_digit_words(std::span<const std::uint16_t,48> words) {
    require_live();for(unsigned i=0;i<48;++i)(*execution_->digits[i/12])[i%12]=artwork(words[i]);
}
void MeterWindows::set_source_decimal_digits(std::span<const std::uint8_t,3> bytes) {
    require_live();std::copy(bytes.begin(),bytes.end(),execution_->decimal.begin());
}
void MeterWindows::validate_source_tiles(const void *lease) const {
    const auto &e=*execution_;
    require(!e.poisoned&&!e.active&&e.source_lease==lease,"Source meter artwork lost its exact idle allocation lease");
    for(const auto &row:e.digits)require(bool(row),"Source meter artwork lost a retained digit allocation");
}
void MeterWindows::claim_source_tiles(const void *lease) {validate_source_tiles(nullptr);execution_->source_lease=lease;}
void MeterWindows::release_source_tiles(const void *lease) noexcept {if(execution_->source_lease==lease)execution_->source_lease=nullptr;}
std::uint8_t MeterWindows::read_source_digit_byte(unsigned at) const {
    require(at<99,"Source digit read left the actual decimal/descriptor extent");
    if(at<3)return execution_->decimal[at];
    at-=3;return std::uint8_t(descriptor((*execution_->digits[at/24])[(at%24)/2])>>((at&1)*8));
}
void MeterWindows::store_source_digit_byte(unsigned at,std::uint8_t value) {
    require(at<99,"Source digit store left the actual decimal/descriptor extent");
    if(at<3){execution_->decimal[at]=value;return;}
    at-=3;auto &cell=(*execution_->digits[at/24])[(at%24)/2];auto word=descriptor(cell);
    const unsigned shift=(at&1)*8;word=(word&~(255u<<shift))|(unsigned(value)<<shift);cell=artwork(word);
}

void MeterWindows::update(std::uint16_t frame_counter) {
    require_live();
    auto& e = *execution_;
    const unsigned phase = frame_counter & 3;
    const auto id = e.party.party_order[phase];
    // These early guards must preserve the upload byte, even with no odd
    // fraction. The preceding arithmetic roller belongs to the scene owner.
    if (!e.flags.render || id == 0 || id > 4 || !(e.flags.drawn_mask & (1u << phase))) return;
    const auto& character = e.party.character(id);
    const unsigned first = first_cell(phase, e.party.controlled_count, e.row(phase) + 3) + 3;
    auto& cells = *e.digits[phase];
    for (unsigned half = 0; half < 2; ++half) {
        if (!((half ? character.pp_fraction : character.hp_fraction) & 1)) continue;
        validate_rectangle(first + half * 64, 3, 2);
        if (half) fill_pp(cells, character);
        else fill_digits(cells, 0, character.current_hp, character.hp_fraction);
        for (unsigned row = 0; row < 2; ++row) {
            const unsigned offset = half * 6 + row * 3;
            const unsigned destination = first + (half * 2 + row) * 32;
            if (!e.flags.upload) e.host.queue_meter_row(destination, e.digits[phase], offset);
            e.host.stage_meter_row(destination, std::span(cells).subspan(offset, 3));
        }
    }
    if (e.flags.upload) e.flags.upload = 0;
}

void MeterWindows::draw(unsigned phase) {
    require_live();
    auto& e = *execution_;
    const auto& character = e.character(phase);
    const auto status = e.resources->status(character.afflictions);
    const unsigned first = first_cell(phase, e.party.controlled_count, e.row(phase));
    validate_rectangle(first, 7, 8);
    const unsigned option = character.hp_pp_window_options;
    const unsigned palette = option == 0x0c00 ? 0x0c00 : std::uint16_t(status.palette * 0x400);
    const unsigned label_palette = option == 0x0c00 ? 0x0800 : 0x1000;
    const unsigned digit_palette = option == 0x0c00 ? 0x0800 : 0;
    const unsigned status_cell = (status.character & 0xfff0) + status.character;
    std::array<ArtworkCellReference, 7 * 8> rows;
    const auto set = [&](unsigned x, unsigned y, unsigned value) { rows[y * 7 + x] = artwork(value); };
    for (unsigned y = 0; y < 8; ++y) {
        set(0, y, option + (y == 0 ? 0x2004 : y == 7 ? 0xa004 : 0x2006));
        set(6, y, option + (y == 0 ? 0x6004 : y == 7 ? 0xe004 : 0x6006));
    }
    for (unsigned x = 1; x < 6; ++x) {
        set(x, 0, option + 0x2005);
        set(x, 7, option + 0xa005);
    }
    const unsigned member = e.party.party_order[phase];
    const auto name = e.party.name_field(member);
    unsigned name_columns = 4;
    if (e.party.version() == GameVersion::US) {
        unsigned length = 0;
        while (length < 4 && name[length]) ++length;
        name_columns = std::min(4u, (length * 6 + 9) / 8);
    }
    for (unsigned half = 0; half < 2; ++half) {
        unsigned next_name = 0x22a0 + half * 16 + (member - 1) * 4;
        for (unsigned x = 0; x < 4; ++x) {
            const bool present = e.party.version() == GameVersion::US ? x < name_columns : name[x] != 0;
            set(x + 1, half + 1, palette + (present ? next_name++ : 0x2007 + half * 16));
        }
        set(5, half + 1, palette + 0x2000 + status_cell + half * 16);
    }
    auto& digits = *e.digits[phase];
    fill_digits(digits, 0, character.current_hp, character.hp_fraction);
    fill_pp(digits, character);
    const auto labels = e.resources->labels();
    for (unsigned y = 0; y < 4; ++y) {
        for (unsigned x = 0; x < 2; ++x) set(x + 1, y + 3, 0x2000 + label_palette + labels[y * 2 + x]);
        for (unsigned x = 0; x < 3; ++x) set(x + 3, y + 3, descriptor(digits[y * 3 + x]) + digit_palette);
    }
    for (unsigned y = 0; y < 8; ++y)
        e.host.stage_meter_row(first + y * 32, std::span(rows).subspan(y * 7, 7));
}

void MeterWindows::draw_all() {
    require_live();
    auto& e = *execution_;
    if (!e.flags.render) return;
    require(e.party.controlled_count <= 4, "Visible meter list exceeds the four retained digit buffers");
    const auto mask = e.flags.drawn_mask;
    for (unsigned phase = 0; phase < e.party.controlled_count; ++phase)
        if (mask & (1u << phase)) draw(phase);
}
void MeterWindows::undraw(unsigned phase) {
    require_live();
    auto& e = *execution_;
    require(phase < 16, "Meter undraw mask shift is outside the native phase domain");
    const unsigned first = first_cell(phase, e.party.controlled_count, e.row(phase));
    validate_rectangle(first, 7, 8);
    e.flags.area_dirty = 1;
    e.flags.drawn_mask &= std::uint16_t(~(1u << phase));
    e.host.clear_meter_rect(first, 7, 8);
}
void MeterWindows::clear_selection() {
    auto& e = *execution_;
    // Called after the optional US wait. The original rereads both globals;
    // do not use a captured pre-wait selected phase or controlled count.
    const auto first = first_cell(e.flags.selected_phase, e.party.controlled_count, 18);
    validate_rectangle(first, 7, 1);
    e.host.clear_meter_rect(first, 7, 1);
    e.flags.selected_phase = 0xffff;
    e.host.request_meter_redraw();
}
void MeterWindows::finish(Action action, bool battle) {
    auto& e = *execution_;
    if (action == Action::Show) {
        e.flags.render = 1;
        e.flags.drawn_mask = 0xffff;
        e.host.request_meter_redraw();
    } else if (action == Action::Hide) {
        e.flags.render = 0;
        if (!battle) {
            require(e.party.controlled_count <= e.party.party_order.size(), "Meter hide exceeds the native party list");
            for (unsigned phase = 0; phase < e.party.controlled_count; ++phase) {
                undraw(phase);
                auto& character = e.party.character(e.party.party_order[phase]);
                character.current_hp = character.target_hp;
                character.current_pp = character.target_pp;
                character.hp_fraction = character.pp_fraction = 0;
            }
        }
        e.host.request_meter_redraw();
    }
}

struct MeterWindows::Operation::Execution {
    MeterWindows& windows;
    Action action;
    bool battle{}, started{}, clear_pending{}, selected{}, done{};
    unsigned phase{};
    std::optional<dialogue::WindowEffect> effect;
    Execution(MeterWindows& windows, Action action, bool battle, unsigned phase)
        : windows(windows), action(action), battle(battle), phase(phase) {}
};
std::unique_ptr<MeterWindows::Operation> MeterWindows::begin(Action action, bool battle, unsigned phase) {
    require_live();
    require(!execution_->active, "A meter lifecycle operation is already pending");
    require(action != Action::Select || phase < 4, "Meter selection exceeds the four player windows");
    auto result = std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::Execution>(*this, action, battle, phase)));
    execution_->active = true;
    return result;
}
std::unique_ptr<MeterWindows::Operation> MeterWindows::begin_show() { return begin(Action::Show); }
std::unique_ptr<MeterWindows::Operation> MeterWindows::begin_hide(bool battle) { return begin(Action::Hide, battle); }
std::unique_ptr<MeterWindows::Operation> MeterWindows::begin_clear_selection() { return begin(Action::ClearSelection); }
std::unique_ptr<MeterWindows::Operation> MeterWindows::begin_select(unsigned phase) { return begin(Action::Select, false, phase); }
MeterWindows::Operation::Operation(std::unique_ptr<Execution> execution) : execution_(std::move(execution)) {}
MeterWindows::Operation::~Operation() {
    if (!execution_->done) {
        execution_->windows.execution_->poisoned = true;
        execution_->windows.execution_->active = false;
    }
}
dialogue::OutputProgress MeterWindows::Operation::advance() {
    auto& e = *execution_;
    e.windows.require_live();
    if (e.done) return dialogue::OutputProgress::Complete;
    if (e.effect) return dialogue::OutputProgress::Suspended;
    if (!e.started) {
        e.started = true;
        e.clear_pending = e.windows.state().selected_phase != 0xffff;
        if (e.clear_pending && e.windows.execution_->party.version() == GameVersion::US) {
            e.effect = dialogue::WindowEffect{dialogue::WindowEffectKind::FrameWait};
            return dialogue::OutputProgress::Suspended;
        }
    }
    if (e.clear_pending) {
        e.windows.clear_selection();
        e.clear_pending = false;
    }
    if (e.action == Action::Select) {
        auto &owner = *e.windows.execution_;
        if (!e.selected) {
            owner.flags.selected_phase = std::uint16_t(e.phase);
            e.selected = true;
            if (owner.party.version() == GameVersion::US) {
                e.effect = dialogue::WindowEffect{dialogue::WindowEffectKind::FrameWait};
                return dialogue::OutputProgress::Suspended;
            }
        }
        const auto first = first_cell(e.phase, owner.party.controlled_count, 26);
        validate_rectangle(first, 7, 1);
        owner.host.clear_meter_rect(first, 7, 1);
        owner.host.request_meter_redraw();
    }
    e.windows.finish(e.action, e.battle);
    e.done = true;
    e.windows.execution_->active = false;
    return dialogue::OutputProgress::Complete;
}
const std::optional<dialogue::WindowEffect>& MeterWindows::Operation::effect() const { return execution_->effect; }
void MeterWindows::Operation::respond() {
    execution_->windows.require_live();
    require(bool(execution_->effect), "Meter lifecycle has no frame wait to acknowledge");
    execution_->effect.reset();
}
bool MeterWindows::Operation::complete() const { return execution_->done; }
} // namespace eb::native::party
