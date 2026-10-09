#pragma once
#include "eb/native/story/source_meter_status.hpp"
#include "eb/native/story/work_clock.hpp"
#include <map>
#include <vector>
namespace eb::native::story {
struct SourceMeterStatus::Execution {
    struct Atom {std::function<SourceWorkCost()> cost;std::function<void()> effect;};
    SourceWorkClock &work;SourceMeterStatusReceipt &receipt;SourceMeterRollerEntry &entry;
    WorldControlState &control;CopyCounterState &counter;battle::PaletteBankState &palette;
    party::State &party;dialogue::WindowHost &windows;TickState &ticks;
    std::shared_ptr<const dialogue::WindowResources> resources;
    std::vector<Atom> atoms;std::map<std::string,unsigned> labels;
    std::vector<unsigned> returns;std::vector<std::uint16_t> saved_d;
    std::uint16_t a{},x{},y{},d{},s{};std::uint8_t p{};unsigned phase{},next{},finished{};
    std::uint64_t retired{};bool jp{};
    static constexpr std::uint8_t C=1,Z=2,I8=0x10,A8=0x20,V=0x40,N=0x80;
    Execution(SourceWorkClock&,SourceMeterStatusReceipt&,SourceMeterStatusContext,SourceMeterStatusCall);
    std::uint16_t party_base() const {return jp?0x9c7f:0x99ce;}
    unsigned stride() const {return jp?94:95;}
    std::uint16_t count_base() const {return jp?0x9b55:0x98a4;}
    std::uint16_t controlled_base() const {return jp?0x9b42:0x9891;}
    std::uint16_t pointer_base() const {return jp?0x514e:0x4dc8;}
    std::uint16_t disabled_base() const {return jp?0xb68a:0xb4b6;}
    std::uint16_t cache_base() const {return jp?0xb676:0xb4a2;}
    void nz(std::uint16_t,bool=false);void load(std::uint16_t);void adc(std::uint16_t);
    void cmp(std::uint16_t,std::uint16_t,bool=false);
    std::uint16_t local(unsigned) const;void put_local(unsigned,std::uint16_t);
    std::uint8_t read_byte(std::uint16_t) const;std::uint16_t read_word(std::uint16_t) const;
    void store_word(std::uint16_t,std::uint16_t,bool=false);
    void add(SourceWorkCost,std::function<void()> = {});
    void dynamic(std::function<SourceWorkCost()>,std::function<void()>);
    void label(const std::string&);void branch(std::function<bool()>,const std::string&);
    void jump(const std::string&);void call(const std::string&,bool);void ret(bool);
    void rep(std::uint8_t);void sep(std::uint8_t);void phd();void pld();
    void transfer(char,char);void carry(bool);void immediate(std::uint16_t,char='a');
    void and_imm(std::uint16_t);void adc_imm(std::uint16_t);void cmp_imm(std::uint16_t,char='a');
    void inc_reg(char,bool=false);void shift();
    void load_dp(unsigned);void store_dp(unsigned);void adc_dp(unsigned);
    void load_abs(std::uint16_t,char='a',char=0);void store_abs(std::uint16_t,char='a');
    void cmp_abs(std::uint16_t,char);void counter_rmw(bool);
    void build_suffix();void build_status();void build_palette();void step();
};
}
