#pragma once
#include "eb/native/story/source_meter_tiles.hpp"
#include "eb/native/story/work_clock.hpp"
#include <map>
#include <vector>
namespace eb::native::story {
struct SourceMeterTiles::Execution {
    struct Atom {std::function<SourceWorkCost()> cost;std::function<void()> effect;};
    SourceWorkClock &work;SourceMeterTilesReceipt &receipt;SourceMeterRollerEntry &entry;
    WorldControlState &control;math::SoftwareArithmeticState &scratch;
    party::State &party;party::MeterWindows &meters;dialogue::WindowHost &windows;PeripheralState &hardware;
    std::vector<Atom> atoms;std::map<std::string,unsigned> labels;
    std::vector<unsigned> returns;std::vector<std::uint16_t> saved_d,saved_values;
    std::uint16_t a{},x{},y{},d{},s{};std::uint8_t p{};unsigned phase{},next{};
    std::uint64_t retired{};bool jp{};SourceMeterTilesBoundary boundary;
    static constexpr std::uint8_t C=1,Z=2,I8=0x10,A8=0x20,V=0x40,N=0x80;
    Execution(SourceWorkClock&,SourceMeterTilesReceipt&,SourceMeterTilesContext,SourceMeterTilesCall);
    std::uint16_t bg2() const {return jp?0x8176:0x7dfe;}
    std::uint16_t digit() const {return jp?0x8ca7:0x8969;}
    std::uint16_t decimal() const {return std::uint16_t(digit()-3);}
    std::uint16_t scratch_base() const {return jp?0x00ae:0x00b0;}
    std::uint16_t party_base() const {return jp?0x9c7f:0x99ce;}
    unsigned stride() const {return jp?94:95;}
    unsigned hp_fraction() const {return jp?0x42:0x43;}
    std::uint16_t order_base() const {return jp?0x9b20:0x986f;}
    std::uint16_t render_base() const {return jp?0x8d07:0x89c9;}
    std::uint16_t upload_base() const {return jp?0x991c:0x9624;}
    std::uint16_t count_base() const {return jp?0x9b55:0x98a4;}
    void nz(std::uint16_t,bool=false);void load(std::uint16_t);void adc(std::uint16_t,bool=false);
    void cmp(std::uint16_t,std::uint16_t,bool=false);
    std::uint16_t local(unsigned) const;void put_local(unsigned,std::uint16_t,bool=false);
    std::uint8_t read_byte(std::uint16_t) const;std::uint16_t read_word(std::uint16_t) const;
    void store_word(std::uint16_t,std::uint16_t,bool=false);
    void add(SourceWorkCost,std::function<void()> = {});
    void dynamic(std::function<SourceWorkCost()>,std::function<void()>);
    void label(const std::string&);void branch(std::function<bool()>,const std::string&);
    void jump(const std::string&,bool=false);void call(const std::string&,bool);void ret(bool);
    void rep(std::uint8_t);void sep(std::uint8_t);void phd();void pld();void push(char='a');void pop(char='a');
    void transfer(char,char);void carry(bool);void immediate(std::uint16_t,char='a');
    void and_imm(std::uint16_t);void eor_imm(std::uint16_t);void adc_imm(std::uint16_t,bool=false);
    void cmp_imm(std::uint16_t,char='a');void inc_reg(char='a',bool=false);void shift_reg(bool,bool=false);
    void load_dp(unsigned,char='a');void store_dp(unsigned,char='a');void zero_dp(unsigned);
    void alu_dp(unsigned,char);void rmw_dp(unsigned,char);
    void load_abs(std::uint16_t,char='a',char=0);void store_abs(std::uint16_t,char='a',char=0);
    void alu_abs(std::uint16_t,char);void rmw_abs(std::uint16_t,char);
    void load_indirect(unsigned);void long_equal(const std::string&,const std::string&);
    void optimized_mult(unsigned,unsigned);void move_pair(unsigned,unsigned);void constant_pair(unsigned,std::uint32_t);
    void build_main();void build_digits();void build_division();void build_mult();void step();
};
}
