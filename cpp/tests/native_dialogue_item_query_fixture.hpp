#pragma once
#include "native_dialogue_stat_letter_fixture.hpp"

namespace item_query_test {
using namespace stat_letter_test;
inline std::uint32_t query(Fixture &f, std::uint8_t literal, std::uint32_t argument, unsigned budget=1, std::uint8_t selector=0x21) {
    auto &registers=f.state.window();
    registers.active={0xa5b6c7d8,argument,0x91a2};
    registers.saved={0x10203040,0x50607080,0x90a0};
    const auto before=registers;
    const auto cursor=f.output.window(*f.state.focus).cursor;
    d::Conversation conversation(program(f.version,{0x19,selector,literal,2}),f.windows);
    conversation.start(d::EntryId{0});
    for(unsigned n=0;n<1000;++n) {
        const auto progress=conversation.advance(budget);
        check(progress!=d::Progress::Suspended && !conversation.event(),
              "Item query emitted a glyph, frame or external callback");
        if(progress==d::Progress::Finished) {
            check(registers.active.argument==before.active.argument && registers.active.secondary==before.active.secondary &&
                  registers.saved==before.saved && f.output.window(*f.state.focus).cursor==cursor,
                  "Item query changed another register or text cursor");
            check(conversation.snapshot().returned_cursor==d::Location{0,4},"Item query consumed the wrong authored bytes");
            return registers.active.working;
        }
    }
    throw std::runtime_error("Item query conversation did not finish");
}
}
