#!/usr/bin/env python3
"""Lower source-owned game routines to resumable semantic C++.

The frozen compiled instruction sites are the input contract. The port emits
named operations, never calls the legacy opcode dispatcher, and retains each
retirement address for interrupts, callbacks and an independent legacy oracle.
Only source instruction bodies and provenance are consumed: no ROM/pack or
text/event/placement data is an input.
"""
from __future__ import annotations
import argparse
from collections import Counter, defaultdict
from dataclasses import dataclass
import hashlib
import json
from pathlib import Path
import re

from game_runtime_ownership import classify_source, routine_path

@dataclass(frozen=True)
class Site:
    address: int
    opcode: int
    operand: int
    length: int
    wide_operand: int | None
    comments: str
    flag: int = 0

FUNCTION = re.compile(r'bool (\w+)\(MainCpu65816& cpu, std::uint32_t address\) \{\n    switch \(address\) \{\n(.*?)    default: return false;\n    \}\n\}', re.S)
CASE = re.compile(r'    case 0x([0-9A-Fa-f]+): (.*)\n')
CALL = re.compile(r'cpu.execute_instruction<0x([0-9A-Fa-f]+)>\(0x([0-9A-Fa-f]+), (\d+)\)')

def read_sites(body: str) -> list[Site]:
    result = []
    end = 0
    for match in CASE.finditer(body):
        calls = CALL.findall(match[2])
        single = re.fullmatch(r'cpu\.execute_instruction<0x[0-9A-Fa-f]+>\(0x[0-9A-Fa-f]+, \d+\); return true;', match[2])
        dynamic = re.fullmatch(r'if \(cpu\.status_register & 0x[0-9A-Fa-f]+\) cpu\.execute_instruction<0x[0-9A-Fa-f]+>\(0x[0-9A-Fa-f]+, \d+\); else cpu\.execute_instruction<0x[0-9A-Fa-f]+>\(0x[0-9A-Fa-f]+, \d+\); return true;', match[2])
        if (len(calls) == 1 and not single) or (len(calls) == 2 and not dynamic) or len(calls) not in (1, 2):
            raise ValueError(f'Unrecognized source site: {match[0]}')
        opcode, operand, length = (int(calls[0][0],16), int(calls[0][1],16), int(calls[0][2]))
        wide = None
        flag = 0
        if len(calls) == 2:
            op2, wide, len2 = int(calls[1][0],16), int(calls[1][1],16), int(calls[1][2])
            fm = re.search(r'cpu.status_register & 0x([0-9a-fA-F]+)', match[2])
            if not fm or opcode != op2 or length != 2 or len2 != 3 or operand != (wide & 255):
                raise ValueError(f'Invalid variable-width source site: {match[0]}')
            flag = int(fm[1],16)
            # The legacy digest records its assembly-derived default operand;
            # this is the complete immediate, including when M/X chooses 8 bit.
            operand = wide
            length = 3
        comments = body[end:match.start()]
        if any(line.strip() and not line.lstrip().startswith('//') for line in comments.splitlines()):
            raise ValueError(f'Unexpected source text before {match[0]}')
        result.append(Site(int(match[1],16),opcode,operand,length,wide,comments,flag))
        end = match.end()
    if body[end:].strip():
        raise ValueError('Unparsed source text after final site')
    return result

def digest(sites: list[Site]) -> str:
    values = [(s.address,s.opcode,s.operand,s.length,s.wide_operand,s.flag) for s in sorted(sites,key=lambda s:s.address)]
    return hashlib.sha256(json.dumps(values,separators=(',',':')).encode()).hexdigest()

def opcode_modes(root: Path) -> list[tuple[str,str]]:
    text = (root/'cpp/src/main_cpu_65816_opcodes.inc').read_text()
    table = re.findall(r'\{MainCpuOperation::(\w+), MainCpuAddressMode::(\w+)\}', text)
    if len(table) != 256:
        raise ValueError('Expected exactly 256 explicit opcode metadata entries')
    return table

def operation_methods(root: Path) -> dict[str,str]:
    text = (root/'cpp/include/eb/game/runtime/instruction.hpp').read_text()
    # A source-checked manifest links the published method spelling to WDC's
    # operation name. Metadata controls generation, never runtime dispatch.
    pairs = re.findall(r'void\s+(\w+)\(\);\s*//\s*([A-Z]{2,3})\b',text)
    methods = {op:method for method,op in pairs}
    operations = {op for op,_ in opcode_modes(root)}
    if set(methods) != operations:
        raise ValueError(f'Semantic method manifest differs: missing {operations-set(methods)}, extra {set(methods)-operations}')
    return methods

def emit_site(site: Site, method: str, mode: str) -> str:
    text = site.comments + f'    case 0x{site.address:06X}: {{\n'
    if site.wide_operand is not None:
        text += f'        const bool narrow = cpu.status_register & 0x{site.flag:02X};\n'
        operand = f'narrow ? 0x{site.wide_operand & 255:06X}u : 0x{site.wide_operand:06X}u'
        length = 'narrow ? 2u : 3u'
    else:
        operand,length=f'0x{site.operand:06X}u',str(site.length)+'u'
    text += (f'        Instruction step(cpu, 0x{site.opcode:02X}, {operand}, {length}, AddressMode::{mode});\n'
             f'        step.{method}();\n'
             '        return step.finish();\n    }\n')
    return text

def generate_region(root: Path, generated: Path, region: str, methods: dict[str,str], table: list[tuple[str,str]]) -> tuple[dict[str,str],dict]:
    regional=generated/region
    index=json.loads((regional/'program_index.json').read_text())
    bodies={}
    for filename in sorted({r['generated_file'] for r in index['routines']}):
        for match in FUNCTION.finditer((regional/filename).read_text()):
            if match[1] in bodies: raise ValueError('Duplicate routine '+match[1])
            bodies[match[1]]=read_sites(match[2])
    output={}
    owners={}
    selected=[]
    selected_sites=[]
    allsites=[]
    header='// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.\n'
    for row in index['routines']:
        sites=bodies.pop(row['function'])
        # The old digest includes assembly-declared widths absent from the C++
        # snapshot. Inventory checks and runtime_site_sha256 instead cover the
        # complete emitted M/X choices; retain the old source digest as provenance.
        if (len(sites) != row['instruction_count'] or
            sites[0].address != int(row['first_address'],16) or
            sites[-1].address != int(row['last_address'],16)):
            raise ValueError('Source instruction inventory mismatch: '+row['function'])
        allsites.extend(sites)
        folder=classify_source(row['source_file'])
        name='resume_'+row['function'].removeprefix('execute_').removesuffix('_instruction')
        for site in sites:
            if site.address in owners: raise ValueError('Duplicate instruction address')
            owners[site.address]=name if folder is not None else None
        if folder is None: continue
        selected_sites.extend(sites)
        relative='game/'+routine_path(row['source_file'])
        if f'{region}/{relative}' in output: raise ValueError('Output path collision: '+relative)
        text=header+'#include "eb/game/runtime/instruction.hpp"\n#include "eb/main_cpu_65816.hpp"\n\n'
        text+=f'namespace eb::game::runtime::{region} {{\n// Source: {row["source_file"]}\n'
        text+=f'bool {name}(MainCpu65816& cpu, std::uint32_t address) {{\n    switch (address) {{\n'
        for site in sites:
            op,mode=table[site.opcode]
            text+=emit_site(site,methods[op],mode)
        text+='    default: return false;\n    }\n}\n}\n'
        output[f'{region}/{relative}']=text
        selected.append({**row,'function':name,'legacy_function':row['function'],'generated_file':relative,'subsystem':folder,'runtime_site_sha256':digest(sites)})
    if bodies: raise ValueError('Unindexed source functions')
    if len(allsites) != index['instruction_count']:
        raise ValueError('Regional instruction count mismatch: '+region)
    # Include both owned and unowned intervals, so an adjacent unported routine
    # sharing a dispatch page is never accidentally treated as owned.
    pages=defaultdict(list)
    for address,name in sorted(owners.items()):
        page=address>>8
        if not pages[page] or pages[page][-1][1]!=name: pages[page].append((address,name))
    text=header+'#include "eb/game/runtime/runtime.hpp"\n#include "eb/main_cpu_65816.hpp"\n#include <array>\n#include <stdexcept>\n\n'
    text+=f'namespace eb::game::runtime::{region} {{\n'
    for row in selected: text+=f'bool {row["function"]}(MainCpu65816&, std::uint32_t);\n'
    text+='namespace {\nusing Routine = bool (*)(MainCpu65816&, std::uint32_t);\n'
    text+='template<Routine routine> bool checked(MainCpu65816& cpu, std::uint32_t address) {\n    if (!routine(cpu,address)) throw std::runtime_error("Invalid game-runtime continuation");\n    return true;\n}\n'
    page_functions={}
    for page,ranges in sorted(pages.items()):
        if not any(name for _,name in ranges): continue
        if len(ranges)==1:
            page_functions[page]='checked<'+ranges[0][1]+'>'
            continue
        fn=f'page_{page:04x}'
        page_functions[page]=fn
        text+=f'bool {fn}(MainCpu65816& cpu, std::uint32_t address) {{\n'
        for (_,name),(next_address,_) in zip(ranges,ranges[1:]):
            call=f'checked<{name}>(cpu,address)' if name else 'false'
            text+=f'    if (address < 0x{next_address:06X}) return {call};\n'
        call=f'checked<{ranges[-1][1]}>(cpu,address)' if ranges[-1][1] else 'false'
        text+=f'    return {call};\n}}\n'
    text+='constexpr auto make_pages() {\n    std::array<Routine,0x4000> pages{};\n'
    for page,name in page_functions.items(): text+=f'    pages[0x{page-0xc000:04X}] = &{name};\n'
    text+='    return pages;\n}\nconstexpr auto pages = make_pages();\n'
    text+='constexpr RoutineInfo routines[] = {\n'
    for row in selected:
        text+=f'    {{"{row["function"]}", "{row["subsystem"]}", "{row["source_file"]}", {row["first_address"]}, {row["last_address"]}, {row["instruction_count"]}}},\n'
    text+='};\nconstexpr InstructionSite sites[] = {\n'
    for site in sorted(selected_sites,key=lambda s:s.address):
        text+=f'    {{0x{site.address:06X},0x{site.operand:06X},0x{site.opcode:02X},{site.length},0x{site.flag:02X}}},\n'
    text+='};\n}\n'
    text+='''bool execute(MainCpu65816& cpu, std::uint32_t address) {
    const auto routine = pages[(address - 0xC00000) >> 8];
    return routine && routine(cpu,address);
}
std::span<const RoutineInfo> catalogue() { return routines; }
std::span<const InstructionSite> instruction_sites() { return sites; }
'''
    text+='}\n'
    output[f'{region}/game/runtime_dispatch.cpp']=text
    manifest={'schema':1,'region':region,'source_instruction_stream_sha256':index['instruction_stream_sha256'],
              'routine_count':len(selected),'instruction_count':sum(r['instruction_count'] for r in selected),
              'subsystems':dict(sorted(Counter(r['subsystem'].split('/')[0] for r in selected).items())),
              'routines':selected}
    output[f'{region}/game/runtime_index.json']=json.dumps(manifest,indent=2)+'\n'
    return output,manifest

def generate(root: Path, generated: Path) -> dict[str,str]:
    methods,table=operation_methods(root),opcode_modes(root)
    output={}
    counts={}
    for region in ('us','jp'):
        regional,manifest=generate_region(root,generated,region,methods,table)
        output.update(regional)
        counts[region]=manifest['instruction_count']
    output['game_runtime_dispatch.cpp']='''// Source-derived runtime selection. Do not edit.
#include "eb/game/runtime/runtime.hpp"
#include "eb/main_cpu_65816.hpp"
#include <algorithm>
namespace eb::game::runtime {
namespace us { bool execute(MainCpu65816&,std::uint32_t); std::span<const RoutineInfo> catalogue(); std::span<const InstructionSite> instruction_sites(); }
namespace jp { bool execute(MainCpu65816&,std::uint32_t); std::span<const RoutineInfo> catalogue(); std::span<const InstructionSite> instruction_sites(); }
bool execute_ported_instruction(MainCpu65816& cpu) {
    auto address=cpu.program_counter & 0xFFFFFF;
    const auto bank=address >> 16;
    if (bank==0x7E || bank==0x7F || (!(bank & 0x40) && (address & 0xFFFF)<0x8000)) return false;
    address=0xC00000 | (address & 0x3FFFFF);
    if(address>=0xF00000) address-=0x100000;
    return cpu.game_version==GameVersion::JP ? jp::execute(cpu,address) : us::execute(cpu,address);
}
std::span<const RoutineInfo> ported_routines(GameVersion version) {
    return version==GameVersion::JP ? jp::catalogue() : us::catalogue();
}
std::span<const InstructionSite> ported_sites(GameVersion version) {
    return version==GameVersion::JP ? jp::instruction_sites() : us::instruction_sites();
}
bool owns_ported_instruction(GameVersion version, std::uint32_t address) {
    address &= 0xFFFFFF;
    const auto bank=address >> 16;
    if(bank==0x7E || bank==0x7F || (!(bank & 0x40) && (address & 0xFFFF)<0x8000)) return false;
    address=0xC00000 | (address & 0x3FFFFF);
    if(address>=0xF00000) address-=0x100000;
    const auto sites=ported_sites(version);
    const auto it=std::lower_bound(sites.begin(),sites.end(),address,[](const auto& site,auto a){return site.address<a;});
    return it!=sites.end() && it->address==address;
}
std::size_t ported_instruction_count(GameVersion version) {
    return version==GameVersion::JP ? JP_COUNT : US_COUNT;
}
}
'''.replace('JP_COUNT',str(counts['jp'])).replace('US_COUNT',str(counts['us']))
    source_files=sorted(p for p in output if p.endswith('.cpp'))
    output['game_runtime_sources.cmake']='# Generated semantic runtime inventory. Do not edit.\nset(EB_GAME_RUNTIME_SOURCES\n'+''.join(f'    "${{CMAKE_CURRENT_LIST_DIR}}/{name}"\n' for name in source_files)+')\n'
    return output

def write_outputs(generated: Path, output: dict[str,str], check: bool = False) -> None:
    inventory=generated/'game_runtime_manifest.json'
    previous=json.loads(inventory.read_text())['files'] if inventory.exists() else []
    stale=set(previous)-set(output)
    differences=[name for name,text in output.items() if not (generated/name).exists() or (generated/name).read_text()!=text]
    if check:
        if differences or stale: raise ValueError('Runtime generation is stale: '+', '.join(differences+sorted(stale)))
        expected=json.dumps({'schema':1,'files':sorted(output)},indent=2)+'\n'
        if not inventory.exists() or inventory.read_text()!=expected: raise ValueError('Runtime inventory is stale')
        return
    for name in differences:
        path=generated/name
        path.parent.mkdir(parents=True,exist_ok=True)
        path.write_text(output[name])
    for name in stale:
        path=generated/name
        if path.is_file(): path.unlink()
    inventory.write_text(json.dumps({'schema':1,'files':sorted(output)},indent=2)+'\n')


def main() -> None:
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[2])
    parser.add_argument('--generated',type=Path)
    parser.add_argument('--check',action='store_true')
    args=parser.parse_args()
    generated=args.generated or args.root/'generated'
    output=generate(args.root,generated)
    write_outputs(generated,output,args.check)
    print(f'Validated {len(output)} source-derived runtime files')

if __name__=='__main__': main()
