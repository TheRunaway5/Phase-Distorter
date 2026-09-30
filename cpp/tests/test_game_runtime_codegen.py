"""Fail closed when lowered continuations lose an instruction or width choice."""
from pathlib import Path
import sys
from dataclasses import replace
import tempfile
import unittest
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
import port_game_runtime as port

class ContinuationGenerationTests(unittest.TestCase):
    def test_preserves_both_runtime_immediate_widths(self):
        body='    // source.asm:1 LDA #$1234\n    case 0xC10000: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x001234, 3); return true;\n'
        site,=port.read_sites(body)
        self.assertEqual((site.address,site.opcode,site.operand,site.length,site.wide_operand,site.flag),(0xc10000,0xa9,0x1234,3,0x1234,0x20))
        lowered=port.emit_site(site,'load_accumulator','Immediate')
        self.assertIn('narrow ? 0x000034u : 0x001234u',lowered)
        self.assertIn('narrow ? 2u : 3u',lowered)
        self.assertIn('step.load_accumulator();',lowered)
        self.assertNotIn('execute_instruction',lowered)
    def test_rejects_extra_side_effects_and_mismatched_width_operations(self):
        cases=[
            'cpu.execute_instruction<0xEA>(0x000000, 1); cpu.accumulator=0; return true;',
            'if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA2>(0x001234, 3); return true;',
            'if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x001234, 3); return true;',
        ]
        for code in cases:
            with self.subTest(code=code),self.assertRaises(ValueError):
                port.read_sites('    case 0xC10000: '+code+'\n')
    def test_fingerprint_includes_runtime_width_selector(self):
        site=port.Site(0xc10000,0xa9,0x1234,3,0x1234,'',0x20)
        self.assertNotEqual(port.digest([site]),port.digest([replace(site,flag=0x10)]))
    def test_rejects_unparsed_code(self):
        with self.assertRaises(ValueError):
            port.read_sites('    cpu.accumulator=1;\n    case 0xC10000: cpu.execute_instruction<0xEA>(0x000000, 1); return true;\n')
    def test_regeneration_tracks_only_owned_outputs_and_detects_stale_content(self):
        with tempfile.TemporaryDirectory() as temp:
            root=Path(temp)
            unrelated=root/'keep.cpp'; unrelated.write_text('caller-owned')
            port.write_outputs(root,{'us/game/test.cpp':'first'})
            port.write_outputs(root,{'us/game/test.cpp':'first'},True)
            with self.assertRaises(ValueError):port.write_outputs(root,{'us/game/test.cpp':'second'},True)
            port.write_outputs(root,{'jp/game/test.cpp':'second'})
            self.assertFalse((root/'us/game/test.cpp').exists())
            self.assertEqual(unrelated.read_text(),'caller-owned')
    def test_every_operation_has_an_explicit_method(self):
        root=Path(__file__).resolve().parents[2]
        self.assertEqual(len(port.opcode_modes(root)),256)
        self.assertEqual(len(port.operation_methods(root)),92)

if __name__=='__main__':unittest.main()
