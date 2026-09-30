// Independent complete original DISPLAY_TEXT gift-command reference.
// Expected registers, inventory, wallet, flags, timers and poses come from the
// original machine, not native helpers. Synthetic scripts occupy copied bankEE.
#include "native_interaction_reference_fixture.hpp"
#include "eb/native/party/inventory.hpp"
#include "eb/native/party/queries.hpp"

namespace {
using namespace interaction_reference;
namespace story=eb::native::story;
struct GiftCounts {std::uint64_t cases{},requests{},banks{},item_bytes{},flag_bytes{},timer_bytes{},glyph_effects{},fallback_probes{},publication_probes{},late_probes{},pose_checks{},unsupported_diagnostics{},teddy_boundaries{},nested_children{},motion_words{};} gift_counts;
struct Case {
    std::string name;std::vector<std::uint8_t> script;
    std::uint32_t working=1,argument=103,wallet{};
    unsigned window_mode{},controlled=4,free_slot{},full_members{},actor=1407,current_flag=800;
    bool current_set{},actor_set{},active_timer{},publication_refocus{},late_sample{},glyph{},nested{};
    std::uint16_t random0=0x1234,random1=0xfedc;
};
std::vector<std::uint8_t> child_bytes(eb::GameVersion version) {
    return {0x18,3,9,0x1d,0x0e,1,103,0x1f,0xa0,0x1d,8,1,0,std::uint8_t(version==eb::GameVersion::US?0x72:0x42),2};
}
struct LayoutGift {
    unsigned give_handler,find_handler,money_handler,count_handler,set_working,set_argument;
    unsigned item_transform,loaded_count,next_check,teddy;
};
LayoutGift layout_gift(eb::GameVersion version) {
    if(version==eb::GameVersion::US)return {0xc15659,0xc14cee,0xc148e9,0xc16172,0xc10465,0xc10491,0x9f1a,0x9f2a,0x9f2c,0xc216db};
    return {0xc158d4,0xc150ee,0xc14ce9,0xc163f1,0xc10668,0xc10694,0xa120,0xa130,0xa132,0xc21583};
}
eb::GameAssets install(const eb::GameAssets& original,const Case& test) {
    auto result=original;std::copy(test.script.begin(),test.script.end(),result.image.begin()+0x2e1000);
    auto at=0x2e1000+test.script.size();if(test.glyph)result.image.at(at++)=original.version==eb::GameVersion::US?0x71:0x41;result.image.at(at)=2;
    if(test.nested){const auto child=child_bytes(original.version);std::copy(child.begin(),child.end(),result.image.begin()+0x2e1100);}return result;
}
InteractionCase interaction_case(const eb::GameAssets& assets,const Case& test) {
    InteractionCase input;input.name=test.name;input.preopen=test.window_mode!=1;
    ActorInput actor;actor.npc=test.actor;actor.sprite=image_word(assets.image,(actor_layout(assets.version).npc_table&0x3fffff)+actor.npc*17+1);actor.animation=2;actor.surface=12;
    input.actors={actor};return input;
}
struct Fixture {
    Case test;eb::GameAssets assets;Resources resources;Pair pair;LayoutGift l;
    story::RandomState random;party::ItemTransformationState transformations;
    std::shared_ptr<const dialogue::SubstitutionResources> catalog;
    party::Inventory inventory;std::shared_ptr<const dialogue::Program> program;
    std::vector<char> original_reads,native_writes;bool source_refocused{},native_refocused{},native_sampled{};unsigned source_operand_calls{};
    Fixture(const eb::GameAssets& original,Case c):test(std::move(c)),assets(install(original,test)),resources(assets),pair(resources,interaction_case(assets,test)),l(layout_gift(assets.version)),
        random{test.random0,test.random1},catalog(dialogue::SubstitutionResources::import(assets.image,assets.version)),
        inventory(pair.party,catalog,party::ItemTransformationResources::import(assets.image,assets.version),transformations,random) {
        auto bytes=test.script;if(test.glyph)bytes.push_back(assets.version==eb::GameVersion::US?0x71:0x41);bytes.push_back(2);
        std::vector<dialogue::ContentBlock> blocks{{1,0x1000,std::move(bytes)}};if(test.nested)blocks.push_back({1,0x1100,child_bytes(assets.version)});
        program=std::make_shared<dialogue::Program>(assets.version,std::move(blocks));
        // Gift pose refresh reads the authoritative NPC identity on the live
        // actor, in addition to interaction metadata. The older Talk fixture
        // predates that requirement; replace only this fixture's prepared actor.
        const auto old_id=*pair.ids[0];const auto& old_actor=pair.world.actor(old_id);
        native::WorldActorSpec spec;spec.npc=std::uint16_t(test.actor);spec.sprite=pair.sprites[0];spec.script=8;
        spec.action=old_actor.action();spec.behavior=old_actor.behavior;spec.appearance_context=old_actor.appearance_context;
        const auto hitbox=pair.talk.body(old_id);pair.talk.detach(old_id);pair.world.erase(old_id);
        pair.ids[0]=pair.world.create(spec);
        pair.talk.attach(*pair.ids[0],0,native::actor_creation_metadata(*resources.sprites,resources.creation,pair.sprites[0]),std::uint16_t(test.actor));
        pair.talk.body(*pair.ids[0])=hitbox;
        auto& s=pair.original.source;const bool us=assets.version==eb::GameVersion::US;
        pair.party.controlled_count=std::uint8_t(test.controlled);s.byte(s.p.game+(us?175:172),test.controlled);
        pair.party.money_carried=test.wallet;s.put32(s.p.game+(us?60:57),test.wallet);
        for(unsigned i=0;i<6;++i){auto& character=pair.party.character(i+1);character.items.fill(103);
            if(i>=test.full_members)for(unsigned j=test.free_slot;j<14;++j)character.items[j]=0;
            for(unsigned j=0;j<14;++j)s.byte(s.p.characters+i*s.p.stride+(us?35:34)+j,character.items[j]);}
        if(test.window_mode==2){pair.open(9);s.call(s.p.create,false,9);pair.state.focus.reset();pair.state.unfocused_register_slot=0;s.put(s.p.focus,0xffff);}
        if(test.window_mode==3){pair.open(9);s.call(s.p.create,false,9);pair.state.focus=dialogue::WindowId{1};s.put(s.p.focus,1);}
        for(unsigned i=0;i<9;++i){auto& regs=i==8?pair.state.dummy.active:pair.state.registers_at(i).active;regs={test.working,test.argument,std::uint16_t(0x5100+i)};auto at=i==8?s.p.dummy:s.record(i);s.put32(at+23,regs.working);s.put32(at+27,regs.argument);s.put(at+31,regs.secondary);}
        const auto own_flag=resources.interactions->npc(test.actor).event_flag;
        pair.state.set_flag(test.current_flag,test.current_set);pair.state.set_flag(own_flag,test.actor_set);
        std::copy(pair.state.event_flags.begin(),pair.state.event_flags.end(),s.bus->work_ram.begin()+pair.original.a.events);
        pair.talk.state().current_event_flag=std::uint16_t(test.current_flag);s.put(us?0x9c88:0x9f33,test.current_flag);
        pair.talk.state().interacting_actor=pair.ids[0];pair.talk.state().interacting_npc=std::uint16_t(test.actor);s.put(pair.original.a.interaction_entity,0);s.put(pair.original.a.interaction_npc,test.actor);pair.talk.bind_event_flags();
        if(test.active_timer)for(auto& t:transformations.records)t={11,12,13,14};
        transformations.loaded_count=0x4321;transformations.next_check=17;
        for(unsigned i=0;i<4;++i){const auto& t=transformations.records[i];s.byte(l.item_transform+i*4,t.sfx);s.byte(l.item_transform+i*4+1,t.frequency);s.byte(l.item_transform+i*4+2,t.sfx_countdown);s.byte(l.item_transform+i*4+3,t.transformation_countdown);}
        s.put(l.loaded_count,transformations.loaded_count);s.byte(l.next_check,transformations.next_check);s.put(0x24,random.primary_word);s.put(0x26,random.secondary_word);
        s.observe=[&](unsigned pc){
            if(test.late_sample&&pc==l.give_handler&&++source_operand_calls==2){s.put32(s.record(0)+23,6);s.put32(s.record(0)+27,168);}
            if(pc==s.p.get_argument)original_reads.push_back('A');
            if(pc==s.p.get_working)original_reads.push_back('W');
            if(test.publication_refocus&&!source_refocused&&pc==l.set_working){s.put(s.p.focus,9);source_refocused=true;}
        };
    }
    void compare() {
        const auto& s=pair.original.source;const bool us=assets.version==eb::GameVersion::US;
        require(pair.state.stream_slot==s.get(s.p.stream_count),pair.context+" stream slot differs");
        for(unsigned i=0;i<9;++i){const auto& b=i==8?pair.state.dummy.active:pair.state.registers_at(i).active;const auto at=i==8?s.p.dummy:s.record(i);
            require(b.working==s.get32(at+23)&&b.argument==s.get32(at+27)&&b.secondary==s.get(at+31),pair.context+" register bank differs "+std::to_string(i));++gift_counts.banks;}
        for(unsigned i=0;i<6;++i)for(unsigned j=0;j<14;++j){require(pair.party.character(i+1).items[j]==s.bus->work_ram[s.p.characters+i*s.p.stride+(us?35:34)+j],pair.context+" item byte differs");++gift_counts.item_bytes;}
        require(pair.party.money_carried==s.get32(s.p.game+(us?60:57)),pair.context+" wallet differs");
        require(std::equal(pair.state.event_flags.begin(),pair.state.event_flags.end(),s.bus->work_ram.begin()+pair.original.a.events),pair.context+" event flags differ");gift_counts.flag_bytes+=pair.state.event_flags.size();
        require(random.primary_word==s.get(0x24)&&random.secondary_word==s.get(0x26),pair.context+" RNG differs");
        require(transformations.loaded_count==s.get(l.loaded_count)&&transformations.next_check==s.bus->work_ram[l.next_check],pair.context+" transformation globals differ");
        for(unsigned i=0;i<4;++i){const auto& t=transformations.records[i];const std::array<std::uint8_t,4> raw{t.sfx,t.frequency,t.sfx_countdown,t.transformation_countdown};for(unsigned j=0;j<4;++j){require(raw[j]==s.bus->work_ram[l.item_transform+i*4+j],pair.context+" transformation timer differs");++gift_counts.timer_bytes;}}
        pair.compare_windows();const auto& actor=pair.world.actor(*pair.ids[0]);const auto& a=pair.original.a;
        require(actor.behavior.direction==s.get(a.direction)&&actor.action().animation==s.get(a.animation)&&s.get(a.fingerprint)==0x8bad,pair.context+" gift pose state differs");
        require(actor.behavior.surface_flags==s.get(a.surface_flags),pair.context+" gift changed surface flags");
        for(unsigned axis=0;axis<3;++axis){const std::array<unsigned,3> pos{a.x,a.y,a.z},frac{a.xf,a.yf,a.zf},vel{a.vx,a.vy,a.vz},vf{a.vxf,a.vyf,a.vzf};
            require(actor.action().position[axis]==((std::uint32_t(s.get(pos[axis]))<<16)|s.get(frac[axis]))&&actor.action().velocity[axis]==((std::uint32_t(s.get(vel[axis]))<<16)|s.get(vf[axis])),pair.context+" gift changed fixed-point motion");gift_counts.motion_words+=4;}
        if(actor.appearance.displayed()){const auto pose=*actor.appearance.displayed();const auto group=pair.original.pointer(a.sprite_groups+pair.sprites[0]*4);require(s.get(a.displayed)==pair.original.rom(group+9+pose.pose*2),pair.context+" gift pose selection differs");++gift_counts.pose_checks;}
    }
    dialogue::Response command(const dialogue::Request& request) {
        dialogue::Response response;
        if(request.kind==dialogue::RequestKind::NpcGift){require(request.npc_gift.has_value(),"Missing native gift action");
            const auto action=*request.npc_gift==dialogue::NpcGiftAction::Open?npcs::GiftAction::Open:*request.npc_gift==dialogue::NpcGiftAction::Close?npcs::GiftAction::Close:npcs::GiftAction::IsOpen;
            response.value=pair.talk.apply_gift(action);
        }else if(request.kind==dialogue::RequestKind::ItemCommand){require(request.item_command.has_value(),"Missing native item command");const auto& item=*request.item_command;
            dialogue::ItemCommandResult result;
            if(item.kind==dialogue::ItemCommandKind::FindSpace)result.working=std::uint32_t(std::int32_t(std::int16_t(inventory.find_space(item.character))));
            else if(item.kind==dialogue::ItemCommandKind::AddMoney)result.working=inventory.add_wallet32(item.amount);
            else{auto operation=inventory.begin_give(item.character,item.item);while(operation->advance(1)==dialogue::Progress::BudgetExhausted){}
                require(operation->complete(),pair.context+" teddy lifecycle is an explicit pending owner, not a fake ack");const auto recipient=operation->recipient();result.argument=inventory.first_empty_index(recipient);result.working=recipient;}
            response.item_result=result;
        }else throw std::runtime_error(pair.context+" unexpected unresolved native request "+std::to_string(unsigned(request.kind)));
        ++gift_counts.requests;return response;
    }
    bool match_effect(const dialogue::Conversation& text,Effect expected)const {
        require(text.event().has_value(),"Missing dialogue effect");
        if(const auto* e=std::get_if<dialogue::TextEffect>(&*text.event()))return (expected==Effect::Tick&&e->kind==dialogue::TextEffectKind::WindowTick)||(expected==Effect::Sound&&e->kind==dialogue::TextEffectKind::TextSound);
        if(const auto* e=std::get_if<dialogue::WindowEffect>(&*text.event()))return Pair::matches(*e,expected);
        if(const auto* e=std::get_if<dialogue::PromptEffect>(&*text.event()))return expected==Effect::World&&e->kind==dialogue::PromptEffectKind::WorldTick;
        return false;
    }
    void child(dialogue::Conversation& parent) {
        auto& s=pair.original.source;require(s.busy&&s.pending==Effect::Tick,"Child lacks original WindowTick parent");
        const auto event=parent.event();const unsigned returning=s.returning,stack=s.expected_stack,dp=s.expected_dp,caller_s=s.cpu.stack_pointer,caller_d=s.cpu.direct_page;
        const auto locals=std::vector<std::uint8_t>(s.bus->work_ram.begin()+caller_d,s.bus->work_ram.begin()+0x1e12);
        const auto callers=std::vector<std::uint8_t>(s.bus->work_ram.begin()+caller_s+1,s.bus->work_ram.begin()+0x2000);
        s.pending.reset();s.cpu.execute_instruction<0xc2>(0x31,2);s.cpu.execute_instruction<0x0b>(0,1);s.cpu.execute_instruction<0x7b>(0,1);s.cpu.execute_instruction<0x69>(0xffee,3);s.cpu.execute_instruction<0x5b>(0,1);
        s.expected_stack=s.cpu.stack_pointer;s.expected_dp=s.cpu.direct_page;s.guarded_caller=false;s.put32(s.expected_dp+14,0xee1100);
        s.cpu.program_counter=0xc1ff80;s.returning=0xc1ff84;s.cpu.execute_instruction<0x22>(s.p.display,4);
        dialogue::Conversation nested(program,pair.prompts);nested.start_nested(dialogue::Location{1,0x1100},parent);bool completed=false;
        for(unsigned n=0;n<100000;++n){const auto progress=nested.advance(1);if(progress==dialogue::Progress::BudgetExhausted)continue;
            if(progress==dialogue::Progress::Suspended&&nested.event())if(const auto* r=std::get_if<dialogue::Request>(&*nested.event())){nested.respond(command(*r));continue;}
            const auto expected=s.advance();if(progress==dialogue::Progress::Finished){require(!expected&&!s.busy,"Native child returned before original");compare();
                const auto end=std::uint16_t(0x1100+child_bytes(assets.version).size());require(nested.snapshot().returned_cursor==dialogue::Location{1,end}&&s.get32(s.expected_dp+6)==(0xee0000|end),"Nested gift cursor differs");completed=true;break;}
            require(expected&&match_effect(nested,*expected),"Nested gift effect differs");compare();pair.respond(*expected);nested.respond({0,0x80,0});++gift_counts.glyph_effects;
        }
        require(completed,"Nested gift stream did not complete");s.cpu.execute_instruction<0x2b>(0,1);
        require(s.cpu.stack_pointer==caller_s&&s.cpu.direct_page==caller_d&&std::equal(locals.begin(),locals.end(),s.bus->work_ram.begin()+caller_d)&&std::equal(callers.begin(),callers.end(),s.bus->work_ram.begin()+caller_s+1),"Original nested gift changed caller locals/stack");
        s.returning=returning;s.expected_stack=stack;s.expected_dp=dp;s.guarded_caller=true;s.cpu.program_counter=s.p.tick;s.busy=true;s.pending=Effect::Tick;
        require(parent.event()==event,"Nested gift lost exact parent pending tick");compare();++gift_counts.nested_children;
    }
    void run() {
        auto& s=pair.original.source;dialogue::Conversation text(program,pair.prompts);
        text.observe([&](const dialogue::Event& event){if(event.kind==dialogue::EventKind::RegisterChanged){native_writes.push_back(event.reg==dialogue::RegisterKind::Argument?'A':'W');
            if(test.publication_refocus&&!native_refocused&&event.reg==dialogue::RegisterKind::Argument){pair.state.focus=dialogue::WindowId{9};native_refocused=true;}}});
        s.put32(s.expected_dp+14,0xee1000);s.begin(s.p.display,true);text.start(dialogue::Location{1,0x1000});
        bool entered_child=false;
        for(unsigned n=0;n<100000;++n){const auto progress=text.advance(test.late_sample?1:n&1?1:4096);
            if(test.late_sample&&!native_sampled&&progress==dialogue::Progress::BudgetExhausted&&text.snapshot().consumed_bytes==3){pair.state.registers_at(0).active.working=6;pair.state.registers_at(0).active.argument=168;native_sampled=true;}
            if(progress==dialogue::Progress::BudgetExhausted)continue;
            if(progress==dialogue::Progress::Suspended){require(text.event().has_value(),"Missing gift dialogue event");
                if(const auto* r=std::get_if<dialogue::Request>(&*text.event())){const auto response=command(*r);text.respond(response);continue;}}
            const auto expected=s.advance();
            if(progress==dialogue::Progress::Finished){require(!expected&&!s.busy,pair.context+" native returned before original");compare();
                const auto offset=std::uint16_t(0x1001+test.script.size()+test.glyph);require(text.snapshot().returned_cursor==dialogue::Location{1,offset}&&s.get32(s.expected_dp+6)==(0xee0000|offset),pair.context+" returned cursor differs");
                if(test.publication_refocus){require(source_refocused&&native_refocused&&native_writes==std::vector<char>{'A','W'},"Give setter refocus probe did not execute");++gift_counts.publication_probes;}
                if(test.late_sample){require(native_sampled&&source_operand_calls==2,"Final operand timing probe did not execute");++gift_counts.late_probes;}
                require(!test.nested||entered_child,"Nested case missed the parent's glyph tick");
                if(test.script==std::vector<std::uint8_t>{0x1d,0x0e,0,0}){require(original_reads.size()>=2&&original_reads[0]=='A'&&original_reads[1]=='W',"Original fallback read order changed");++gift_counts.fallback_probes;}
                if(test.glyph)pair.image();
                ++gift_counts.cases;return;
            }
            require(expected&&match_effect(text,*expected),pair.context+" unowned/mismatched gift output service");compare();
            if(test.nested&&!entered_child&&*expected==Effect::Tick){entered_child=true;child(text);}
            pair.respond(*expected);text.respond({0,0x80,0});++gift_counts.glyph_effects;
        }throw std::runtime_error(pair.context+" gift stream did not finish");
    }
};
struct TeddyBoundary {};
void boundary_cases(const eb::GameAssets& assets) {
    // These are partial source/native frontiers, not completed dialogue cases.
    for(unsigned selector:{1u,255u})for(unsigned item:{2u,3u}){
        Case c;c.name="pending teddy lifecycle";c.script={0x1d,0x0e,std::uint8_t(selector),std::uint8_t(item)};c.full_members=selector==255?1:0;
        Fixture f(assets,c);auto& s=f.pair.original.source;dialogue::Conversation text(f.program,f.pair.prompts);text.start(dialogue::Location{1,0x1000});
        while(text.advance(1)==dialogue::Progress::BudgetExhausted){}
        require(text.event()&&std::holds_alternative<dialogue::Request>(*text.event()),"Teddy parser did not reach actual item request");
        const auto request=std::get<dialogue::Request>(*text.event());require(request.item_command.has_value(),"Teddy request lost operands");
        auto operation=f.inventory.begin_give(request.item_command->character,request.item_command->item);
        while(operation->advance(1)==dialogue::Progress::BudgetExhausted){}
        require(operation->service()==party::InventoryService::TeddyRefresh&&!operation->complete(),"Teddy lifecycle was silently acknowledged");
        s.observe=[&](unsigned pc){if(pc==f.l.teddy)throw TeddyBoundary{};};s.put32(s.expected_dp+14,0xee1000);s.begin(s.p.display,true);bool reached=false;
        try{(void)s.advance();}catch(const TeddyBoundary&){reached=true;}
        require(reached,"Original teddy did not reach its real lifecycle helper");f.compare();
        require(std::equal(s.caller_stack.begin(),s.caller_stack.end(),s.bus->work_ram.begin()+s.expected_stack+1),"Teddy frontier changed parent stack");++gift_counts.teddy_boundaries;
    }
    // Recipient zero is a real saved-photo alias in the source. Preserve this
    // source diagnostic and native rejection; do not invent a party record zero.
    for(unsigned first_empty:{0u,6u,7u,13u,14u}){
        Case c;c.name="failed recipient photo alias";c.script={0x1d,0x0e,1,103};c.full_members=6;Fixture f(assets,c);auto& s=f.pair.original.source;
        const unsigned at=assets.version==eb::GameVersion::US?0x9992:0x9c43;
        for(unsigned i=0;i<15;++i)s.byte(at+i,i==first_empty?0:0xa5);
        s.put32(s.expected_dp+14,0xee1000);s.call(s.p.display,true);
        require(s.get32(s.record(0)+23)==0&&s.get32(s.record(0)+27)==first_empty,"Original failure alias index differs");
        auto operation=f.inventory.begin_give(1,103);while(operation->advance(1)==dialogue::Progress::BudgetExhausted){}
        require(operation->complete()&&operation->recipient()==0,"Full native inventory fabricated a recipient");bool rejected=false;
        try{(void)f.inventory.first_empty_index(0);}catch(const std::exception&){rejected=true;}
        require(rejected,"Native fabricated a saved-photo scan from party character zero");++gift_counts.unsupported_diagnostics;
    }
}
void run(const eb::GameAssets& assets) {
    std::vector<Case> tests;
    for(unsigned selector:{1u,2u,5u,6u,255u})for(unsigned mode=0;mode<4;++mode)for(unsigned full:{0u,6u}){
        Case c;c.name="find "+std::to_string(selector)+" mode="+std::to_string(mode)+" full="+std::to_string(full);c.script={0x1d,3,0};c.argument=selector;c.window_mode=mode;c.full_members=full;tests.push_back(c);}
    for(unsigned selector:{1u,2u,5u,6u,255u})for(unsigned slot:{0u,5u,13u})for(unsigned item:{103u,92u,168u,169u}){
        Case c;c.name="give "+std::to_string(selector)+" slot="+std::to_string(slot)+" item="+std::to_string(item);c.script={0x1d,0x0e,0,0};c.working=selector;c.argument=item;c.free_slot=slot;c.active_timer=slot==5;c.full_members=selector==255?1:0;tests.push_back(c);}
    for(std::uint32_t wallet:{0u,99998u,99999u,0x7fffffffu,0x80000000u,0xffffffffu})for(std::uint32_t amount:{0u,1u,99999u,0x10000u,0x7fffffffu,0x80000000u,0xffffffffu}){
        Case c;c.name="wallet "+std::to_string(wallet)+" + "+std::to_string(amount);c.script={0x1d,8,0,0};c.wallet=wallet;c.argument=amount;c.window_mode=(wallet+amount)&3;tests.push_back(c);}
    for(unsigned count:{0u,1u,4u,6u,255u})for(std::uint32_t amount:{0u,1u,4u,6u,255u,256u,0xffffu,0x10000u,0x80000000u,0xffffffffu}){
        Case c;c.name="count "+std::to_string(count)+" < "+std::to_string(amount);c.script={0x1d,0x19,0};c.controlled=count;c.argument=amount;c.window_mode=amount&3;tests.push_back(c);}
    for(unsigned action:{0xa0u,0xa1u,0xa2u})for(bool old:{false,true})for(bool own:{false,true})for(unsigned mode=0;mode<4;++mode){
        Case c;c.name="gift action="+std::to_string(action)+" current="+std::to_string(old)+" own="+std::to_string(own)+" window="+std::to_string(mode);c.script={0x1f,std::uint8_t(action)};c.current_flag=801;c.current_set=old;c.actor_set=own;c.window_mode=mode;c.glyph=mode==0;tests.push_back(c);}
    {Case c;c.name="Give argument-before-working publication with matched setter refocus";c.script={0x1d,0x0e,1,103};c.window_mode=3;c.publication_refocus=true;tests.push_back(c);}
    {Case c;c.name="Give final-operand live fallback sampling";c.script={0x1d,0x0e,0,0};c.late_sample=true;tests.push_back(c);}
    for(unsigned character:{1u,3u,4u,6u,255u}){
        Case c;c.name="literal find "+std::to_string(character);c.script={0x1d,3,std::uint8_t(character)};c.argument=0xffffffff;tests.push_back(c);
        for(unsigned item:{103u,92u}){c.name="literal give "+std::to_string(character)+"/"+std::to_string(item);c.script={0x1d,0x0e,std::uint8_t(character),std::uint8_t(item)};c.working=0xffffffff;tests.push_back(c);}}
    for(unsigned amount:{1u,256u,65535u}){Case c;c.name="literal LE wallet "+std::to_string(amount);c.script={0x1d,8,std::uint8_t(amount),std::uint8_t(amount>>8)};c.argument=0xffffffff;tests.push_back(c);}
    for(unsigned amount:{1u,255u}){Case c;c.name="literal count "+std::to_string(amount);c.script={0x1d,0x19,std::uint8_t(amount)};c.argument=0xffffffff;tests.push_back(c);}
    for(unsigned action:{0xa1u,0xa2u}){Case c;c.name="actual nested gift child from glyph tick";c.script={0x1f,std::uint8_t(action)};c.window_mode=3;c.glyph=true;c.nested=true;c.current_flag=801;tests.push_back(c);}
    for(const auto& c:tests)try{Fixture(assets,c).run();}catch(const std::exception& e){throw std::runtime_error(c.name+": "+e.what());}
    boundary_cases(assets);
    std::cout<<(assets.version==eb::GameVersion::US?"US":"JP")<<" whole gift command streams="<<tests.size()<<'\n';
}
}
int main(int argc,char**argv) {
    if(argc<2){std::cout<<"SKIP: local US/JP packs required for original gift-command reference\n";return 77;}
    try{for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));
        std::cout<<"PASS whole original/native gift commands: "<<gift_counts.cases<<" parent streams + "<<gift_counts.nested_children<<" complete nested children, "<<gift_counts.requests<<" actual native service requests, "<<gift_counts.fallback_probes<<" fallback-order, "<<gift_counts.late_probes<<" late-sampling and "<<gift_counts.publication_probes<<" setter-publication probes; "<<gift_counts.teddy_boundaries<<" pending teddy frontiers and "<<gift_counts.unsupported_diagnostics<<" separate failed-recipient photo-alias diagnostics.\n";
        std::cout<<"Original: "<<counts.instructions<<" instructions including initialization/cache/pose/glyph, "<<counts.caller_stack_checks<<" preserved caller-stack checks.\n";
        std::cout<<"Native: "<<gift_counts.banks<<" register banks, "<<gift_counts.item_bytes<<" item bytes, "<<gift_counts.flag_bytes<<" flag bytes, "<<gift_counts.timer_bytes<<" timer bytes, "<<gift_counts.pose_checks<<" pose checks, "<<gift_counts.motion_words<<" unchanged motion words, "<<gift_counts.glyph_effects<<" ordered glyph effects, "<<counts.pixels<<" indexed and "<<counts.ppu_pixels<<" original software-PPU pixels.\n";
        std::cout<<"Scope: actual original DISPLAY_TEXT handlers and native Inventory/Interactions; synthetic command content only. World/window/frame/audio are explicit seams; JP A031 font-DMA readiness is acknowledged. Setter refocus and final-operand mutation are matched test-only instruction/observer/budget probes, not gameplay callbacks. Teddy lifecycle remains pending; saved-photo failure scan explicitly rejects without its owner. JP1C11 party formation, full imported gift playback, full NMI, PCM and GPU are not implied.\n";
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
