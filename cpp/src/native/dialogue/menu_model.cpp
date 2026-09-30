#include "eb/native/dialogue/menu_model.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
constexpr unsigned fallback_slot = 69;
std::uint16_t word(unsigned value) { return std::uint16_t(value); }
// This source entry starts after DIVISION16S's sign handling. Its restoring
// division treats both operands as unsigned, including the ffff zero-divisor
// quotient. C451FA deliberately consumes only the low 16-bit products/sums.
std::uint16_t divide(std::uint16_t numerator, std::uint16_t denominator) {
    return denominator ? std::uint16_t(numerator / denominator) : std::uint16_t(0xffff);
}
std::optional<unsigned> pool_index(std::uint16_t value) {
    return value == 0xffff ? std::nullopt : std::optional<unsigned>(value);
}
std::span<const std::uint8_t> before_zero(std::span<const std::uint8_t> label) {
    return label.first(std::size_t(std::find(label.begin(),label.end(),0)-label.begin()));
}
void require(bool valid, const char* message) {
    if (!valid) throw std::invalid_argument(message);
}
WindowMetadata& focused(WindowHost& host) {
    require(host.state().focus.has_value(),"Menu operation requires a focused window");
    return host.metadata(*host.state().focus);
}
unsigned layout_slot(WindowHost& host) {
    if (host.state().focus) {
        const auto slot = host.slot_for(*host.state().focus);
        require(slot.has_value(), "Menu layout focus has no physical slot");
        return *slot;
    }
    require(host.state().unfocused_register_slot.has_value(),
            "Unfocused menu layout requires its source ambient physical slot");
    const auto slot = *host.state().unfocused_register_slot;
    (void)host.slot(slot); // Validate the payload, without requiring live membership.
    return slot;
}
}
MenuModel::MenuModel(WindowHost& host, const FontResources& fonts) : host_(host), fonts_(fonts) {
    require(host.version()==fonts.version(),"Menu fonts and window host must share a region");
}
std::optional<unsigned> MenuModel::first_free() const {
    const auto& options=host_.menu_options();
    for(unsigned i=0;i<options.size();++i) if(!options[i].flags) return i;
    return {};
}
unsigned MenuModel::append(std::span<const std::uint8_t> label, std::optional<Location> script) {
    return append_resolving(label, [script] { return script; });
}
unsigned MenuModel::append_resolving(std::span<const std::uint8_t> label,
                                    const std::function<std::optional<Location>()>& resolve) {
    // C113D1 returns the last record before reading label/script data when
    // there is no focused window or the entire shared pool is occupied.
    if(!host_.state().focus) return fallback_slot;
    auto& window=focused(host_);
    const auto free=first_free();
    if(!free) return fallback_slot;
    label=before_zero(label);
    const auto maximum = host_.version() == GameVersion::US ? 25u : 24u;
    require(label.size() <= maximum, "Menu label exceeds its source record capacity");
    auto& options=host_.menu_options();
    if(window.first_option!=0xffff)
        require(window.last_option<options.size(),"Menu tail is outside the shared option pool");
    const auto script = resolve();
    auto& option=options[*free];
    if(window.first_option==0xffff) {
        option.previous.reset();
        window.first_option=std::uint16_t(*free);
    } else {
        option.previous=window.last_option;
        options[window.last_option].next=*free;
    }
    window.last_option=std::uint16_t(*free);
    option.next.reset();
    option.flags=1;
    option.selected_text=script;
    option.page=1;
    option.sound_effect=1;
    std::copy(label.begin(),label.end(),option.label.begin());
    // C113D1 copies the terminating byte as well. A full US inventory label
    // occupies all 25 label bytes, so its NUL reaches the adjacent pixel_align
    // byte at source record offset 44. JP has no such byte: its bound stays 24.
    // Shorter replacements leave both the old suffix and alignment untouched.
    if (label.size() == option.label.size()) option.pixel_align = 0;
    else option.label[label.size()] = 0;
    return *free;
}
unsigned MenuModel::append_at(std::span<const std::uint8_t> label, std::optional<Location> script,
                              std::uint16_t x, std::uint16_t y, bool pixel_coordinates) {
    const auto slot=append(label,script);
    auto& option=host_.menu_options()[slot];
    if(host_.version()==GameVersion::US) {
        pixel_coordinates=pixel_coordinates || host_.menu_state().force_left_alignment;
        option.pixel_align=std::uint8_t(pixel_coordinates ? x&7 : 0);
        if(pixel_coordinates) x=std::uint16_t(x>>3);
    }
    option.x=x;
    option.y=y;
    return slot;
}
unsigned MenuModel::append_value(std::span<const std::uint8_t> label, std::optional<Location> script,
                                 std::uint16_t userdata, std::uint16_t x, std::uint16_t y,
                                 bool pixel_coordinates) {
    const auto slot=append_at(label,script,x,y,pixel_coordinates);
    auto& option=host_.menu_options()[slot];
    option.userdata=userdata;
    option.flags=2;
    return slot;
}
std::vector<unsigned> MenuModel::chain(std::optional<unsigned> first) const {
    const auto& options=host_.menu_options();
    std::array<bool,70> seen{};
    std::vector<unsigned> result;
    while(first) {
        require(*first<options.size(),"Menu link is outside the shared option pool");
        require(!seen[*first],"Menu option chain is cyclic");
        seen[*first]=true;
        result.push_back(*first);
        first=options[*first].next;
    }
    return result;
}
unsigned MenuModel::count(std::optional<unsigned> first) const { return unsigned(chain(first).size()); }
unsigned MenuModel::index_at(std::optional<unsigned> first, unsigned ordinal) const {
    return chain(first).at(ordinal);
}
std::uint16_t MenuModel::label_width(std::span<const std::uint8_t> label, unsigned maximum,
                                    bool force_normal_font) const {
    label=before_zero(label);
    label=label.first(std::min(label.size(),std::size_t(maximum)));
    if(host_.version()==GameVersion::JP) return word(unsigned(label.size()));
    const auto widths=fonts_.word_widths(force_normal_font || host_.menu_state().force_normal_font ?
                                       0 : host_.slot_output(layout_slot(host_)).style.font);
    const auto padding=host_.output().policy().character_padding;
    std::uint16_t pixels{};
    for(auto character:label)
        pixels=word(unsigned(pixels)+widths[(unsigned(character)-0x50)&0x7f]+padding);
    return pixels;
}
void MenuModel::layout(MenuLayout layout, std::span<const std::uint8_t> page_label) {
    const auto slot=layout_slot(host_);
    auto& window=host_.slot(slot);
    if(window.first_option==0xffff) return;
    const auto indices=chain(pool_index(window.first_option));
    require(layout.columns!=0,"Zero-column source menu layout cannot make progress");
    const bool proportional=host_.version()==GameVersion::US && layout.centered;
    // The original centered US branch owns two four-byte scratch arrays;
    // later entries would overwrite unrelated HP/PP and dialogue state.
    require(!proportional || indices.size()<=4,"US centered layout exceeds its declared four-option scratch arrays");
    const auto& output=host_.slot_output(slot);
    const auto width=output.geometry.columns;
    const auto line_count=std::uint16_t(output.geometry.tile_rows/2);
    const auto row_count=divide(word(unsigned(indices.size())+layout.columns-1),layout.columns);
    const bool paginated=row_count>line_count;
    const auto rows_per_page=paginated ? word(unsigned(line_count)-2) : line_count;
    require(rows_per_page!=0,"Source menu layout has no usable rows");
    if(paginated) {
        page_label=before_zero(page_label);
        require(page_label.size()<25,"Menu page label exceeds its source record capacity");
        require(window.last_option<host_.menu_options().size(),"Menu tail is outside the shared option pool");
    }
    auto& options=host_.menu_options();
    std::array<std::uint8_t,4> measured{},allocated{};
    std::uint16_t spacing{};
    if(proportional) {
        std::uint16_t total{};
        for(unsigned i=0;i<indices.size();++i) {
            measured[i]=std::uint8_t(label_width(options[indices[i]].label,30,layout.force_normal_font)+8);
            total=word(unsigned(total)+measured[i]);
        }
        const auto scale=divide(word(unsigned(width)*0x800),total);
        for(unsigned i=0;i<indices.size();++i)
            allocated[i]=std::uint8_t(word(unsigned(measured[i])*scale)>>8);
    } else {
        spacing=divide(word(unsigned(word(unsigned(layout.columns-1)*layout.gap))+width),layout.columns);
    }
    window.layout_columns=layout.columns;
    std::uint16_t page=1, x=0, y=output.cursor.line;
    unsigned column=0,row=0;
    for(unsigned i=0;i<indices.size();++i) {
        auto& option=options[indices[i]];
        std::uint16_t offset{};
        if(proportional) {
            // Source subtracts in 8-bit A, zero-extends, then halves and
            // shifts by three. An undersized allocation wraps before >>4.
            offset=std::uint16_t(std::uint8_t(allocated[i]-measured[i])>>4);
        } else if(host_.version()==GameVersion::JP && layout.centered) {
            offset=std::uint16_t(word(unsigned(spacing)-label_width(option.label,30))/2);
        }
        option.x=word(unsigned(x)+offset);
        option.y=y;
        option.page=page;
        if(i+1==indices.size()) break;
        x=word(unsigned(x)+(proportional ? (unsigned(allocated[i])+7)/8 : spacing));
        if(++column==layout.columns) {
            column=0; x=0; y=word(unsigned(y)+1);
            if(++row==rows_per_page) { row=0; page=word(unsigned(page)+1); y=output.cursor.line; }
        }
    }
    if(paginated) {
        append_value(page_label,{},0,0,word(unsigned(line_count)-1));
        // Allocation failure still writes the existing last option's page,
        // independently of the fallback slot modified by append_value.
        options.at(window.last_option).page=0;
    }
}
void MenuModel::select_initial(std::uint16_t ordinal) {
    if(ordinal==0xffff) return;
    auto& window=focused(host_);
    const auto index=index_at(pool_index(window.first_option),ordinal);
    window.selected_option=ordinal;
    window.page_number=host_.menu_options()[index].page;
}
void MenuModel::prepare_selection(std::uint16_t columns, bool centered, std::uint16_t ordinal,
                                  std::span<const std::uint8_t> page_label, bool force_normal_font) {
    layout({columns,0,centered,force_normal_font},page_label);
    select_initial(ordinal);
}
} // namespace eb::native::dialogue
