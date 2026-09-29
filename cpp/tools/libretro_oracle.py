#!/usr/bin/env python3
"""Isolated, headless libretro test frontend; never linked into the C++ port.

Only the public libretro API is used. ABI declarations and command identifiers
are from https://github.com/libretro/libretro-common/blob/master/include/libretro.h.
An independently installed SNES core and a source-linked ROM are explicit inputs.
No RetroArch configuration, user saves, or emulator implementation is read.
"""
from __future__ import annotations

import argparse
import ctypes as C
import hashlib
import json
from pathlib import Path
import struct
import sys
import tempfile
import time


# These structures describe the public C ABI, not reference-core internals.
# Field widths/order and callback signatures must match libretro.h exactly.
class SystemInfo(C.Structure):
    _fields_ = [("name", C.c_char_p), ("version", C.c_char_p),
                ("extensions", C.c_char_p), ("need_fullpath", C.c_bool),
                ("block_extract", C.c_bool)]


class GameInfo(C.Structure):
    _fields_ = [("path", C.c_char_p), ("data", C.c_void_p),
                ("size", C.c_size_t), ("meta", C.c_char_p)]


class Geometry(C.Structure):
    _fields_ = [("base_width", C.c_uint), ("base_height", C.c_uint),
                ("max_width", C.c_uint), ("max_height", C.c_uint),
                ("aspect_ratio", C.c_float)]


class Timing(C.Structure):
    _fields_ = [("fps", C.c_double), ("sample_rate", C.c_double)]


class AVInfo(C.Structure):
    _fields_ = [("geometry", Geometry), ("timing", Timing)]


class Variable(C.Structure):
    _fields_ = [("key", C.c_char_p), ("value", C.c_char_p)]


class MemoryDescriptor(C.Structure):
    _fields_ = [("flags", C.c_uint64), ("pointer", C.c_void_p),
                ("offset", C.c_size_t), ("start", C.c_size_t),
                ("select", C.c_size_t), ("disconnect", C.c_size_t),
                ("length", C.c_size_t), ("address_space", C.c_char_p)]


class MemoryMap(C.Structure):
    _fields_ = [("descriptors", C.POINTER(MemoryDescriptor)), ("count", C.c_uint)]


Environment = C.CFUNCTYPE(C.c_bool, C.c_uint, C.c_void_p)
Video = C.CFUNCTYPE(None, C.c_void_p, C.c_uint, C.c_uint, C.c_size_t)
Audio = C.CFUNCTYPE(None, C.c_int16, C.c_int16)
AudioBatch = C.CFUNCTYPE(C.c_size_t, C.POINTER(C.c_int16), C.c_size_t)
InputPoll = C.CFUNCTYPE(None)
InputState = C.CFUNCTYPE(C.c_int16, C.c_uint, C.c_uint, C.c_uint, C.c_uint)


def load_input(path: Path | None) -> list[tuple[int, int]]:
    # Input changes take effect before their zero-based frame runs and remain
    # held until the next entry, matching the port's deterministic route scripts.
    result = []
    if path:
        for line_number, line in enumerate(path.read_text().splitlines(), 1):
            fields = line.split("#", 1)[0].split()
            if not fields:
                continue
            if len(fields) != 2:
                raise ValueError(f"{path}:{line_number}: expected frame and SNES button mask")
            frame, mask = (int(field, 0) for field in fields)
            if frame < 0 or not 0 <= mask <= 0xffff or (result and frame <= result[-1][0]):
                raise ValueError(f"{path}:{line_number}: invalid or non-increasing input")
            result.append((frame, mask))
    return result


def sha256(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


class Oracle:
    def __init__(self, args):
        self.args = args
        self.core = C.CDLL(str(args.core.resolve()))
        self.directory = str(args.state_path.resolve()).encode()
        self.core_path = str(args.core.resolve()).encode()
        self.pixel_format = 0
        self.options: dict[bytes, bytes] = {}
        self.overrides = dict(item.encode().split(b"=", 1) for item in args.option)
        self.unsupported: set[int] = set()
        self.frame = 0
        self.buttons = 0
        self.audio_frames = 0
        self.video_calls = 0
        self.last_frame = None
        self.error = None
        self.captures = []
        self.memory_descriptors = []
        # Retain callback objects for the entire core lifetime: C keeps function
        # pointers, which do not keep Python's ctypes trampolines alive by itself.
        self.callbacks = [Environment(self.environment), Video(self.video),
                          Audio(self.audio), AudioBatch(self.audio_batch),
                          InputPoll(lambda: None), InputState(self.input_state)]
        self.core.retro_api_version.restype = C.c_uint
        if self.core.retro_api_version() != 1:
            raise RuntimeError("Unsupported libretro ABI")
        for name, callback in zip(("environment", "video_refresh", "audio_sample",
                                   "audio_sample_batch", "input_poll", "input_state"), self.callbacks):
            function = getattr(self.core, "retro_set_" + name)
            function.argtypes = [type(callback)]
            function(callback)
        self.core.retro_get_system_info.argtypes = [C.POINTER(SystemInfo)]
        self.core.retro_get_system_av_info.argtypes = [C.POINTER(AVInfo)]
        self.core.retro_load_game.argtypes = [C.POINTER(GameInfo)]
        self.core.retro_load_game.restype = C.c_bool
        self.core.retro_get_memory_data.argtypes = [C.c_uint]
        self.core.retro_get_memory_data.restype = C.c_void_p
        self.core.retro_get_memory_size.argtypes = [C.c_uint]
        self.core.retro_get_memory_size.restype = C.c_size_t
        self.core.retro_serialize_size.restype = C.c_size_t
        self.core.retro_serialize.argtypes = [C.c_void_p, C.c_size_t]
        self.core.retro_serialize.restype = C.c_bool

    def environment(self, command, data):
        # Advertise only the small software-video/input interface implemented
        # here. Unsupported requests remain in the report rather than silently
        # pretending that the frontend supplied a feature it does not support.
        try:
            def put(kind, value):
                C.cast(data, C.POINTER(kind))[0] = value
                return True
            if command in (9, 30, 31):  # System/assets/save paths: isolated scratch only.
                return put(C.c_char_p, self.directory)
            if command == 19:
                return put(C.c_char_p, self.core_path)
            if command == 3:
                return put(C.c_bool, True)  # Duplicate software frames are supported.
            if command == 2:
                return put(C.c_bool, False)  # Prefer cropped active image.
            if command == 10:
                value = C.cast(data, C.POINTER(C.c_uint))[0]
                if value in (0, 1, 2):
                    self.pixel_format = value
                    return True
                return False
            if command == 16:  # Legacy options: first choice is the default.
                # Validate overrides against the core's own declared choices;
                # misspelled gamma/accuracy settings would invalidate evidence.
                variables = C.cast(data, C.POINTER(Variable))
                index = 0
                while variables[index].key:
                    key, value = variables[index].key, variables[index].value
                    choices = value.split(b";", 1)[1].strip().split(b"|")
                    self.options[key] = self.overrides.get(key, choices[0])
                    if self.options[key] not in choices:
                        raise ValueError(f"Invalid option {key!r}={self.options[key]!r}; choices: {choices!r}")
                    index += 1
                return True
            if command == 15:
                variable = C.cast(data, C.POINTER(Variable)).contents
                variable.value = self.options.get(variable.key)
                return variable.value is not None
            if command == 17:
                return put(C.c_bool, False)
            if command in (52, 59):
                return put(C.c_uint, 0)  # Use the stable legacy options/message ABI.
            if command == 39:
                return put(C.c_uint, 0)  # English.
            if command == 61:
                return put(C.c_uint, 2)
            if command == (47 | 0x10000):
                return put(C.c_int, 3)  # Audio and video enabled.
            if command == (49 | 0x10000):
                return put(C.c_bool, False)
            if command == (51 | 0x10000):
                return True  # Joypad bitmask query is implemented below.
            if command == (36 | 0x10000):
                memory_map = C.cast(data, C.POINTER(MemoryMap)).contents
                self.memory_descriptors = [MemoryDescriptor.from_buffer_copy(memory_map.descriptors[i])
                                           for i in range(memory_map.count)]
                return True
            if command in (8, 11, 18, 34, 35, 37, 55, 62, 63, 69, 0x1002a):
                return True  # Informational descriptors, no scheduling side effects.
            if command == 7:
                self.error = "Core requested shutdown"
                return True
            self.unsupported.add(command)
            return False
        except Exception as error:
            # Exceptions cannot safely unwind through a C callback. Save the
            # failure and surface it after control returns from the core.
            self.error = f"Environment callback: {error}"
            return False

    def video(self, data, width, height, pitch):
        self.video_calls += 1
        if data:
            # Preserve every returned image: a requested capture may duplicate it.
            self.last_frame = (C.string_at(data, pitch * height), width, height, pitch, self.pixel_format)

    def audio(self, left, right):
        # Audio here measures delivered sample counts only. No waveform is
        # retained, so this harness alone cannot establish audible/audio parity.
        self.audio_frames += 1

    def audio_batch(self, data, frames):
        self.audio_frames += frames
        return frames

    def input_state(self, port, device, index, button):
        if port != 0 or (device & 0xff) != 1 or index != 0:
            return 0
        # Libretro B,Y,Select,Start,Up,Down,Left,Right,A,X,L,R -> SNES register bits.
        masks = (0x8000, 0x4000, 0x2000, 0x1000, 0x0800, 0x0400,
                 0x0200, 0x0100, 0x0080, 0x0040, 0x0020, 0x0010)
        if button == 256:
            return sum(1 << i for i, mask in enumerate(masks) if self.buttons & mask)
        return int(button < len(masks) and bool(self.buttons & masks[button]))

    def capture(self):
        if not self.last_frame:
            raise RuntimeError("Core did not supply a software video frame")
        raw, width, height, pitch, pixel_format = self.last_frame
        rgb = bytearray()
        for y in range(height):
            # Pitch includes any padding between rows. Decode only active pixels
            # and preserve the core's original width/height for later comparison.
            row = raw[y * pitch:(y + 1) * pitch]
            size = 4 if pixel_format == 1 else 2
            for (pixel,) in struct.iter_unpack("=I" if size == 4 else "=H", row[:width * size]):
                if pixel_format == 1:
                    rgb.extend(((pixel >> 16) & 255, (pixel >> 8) & 255, pixel & 255))
                else:
                    g_bits = 6 if pixel_format == 2 else 5
                    r, g, b = pixel >> (g_bits + 5), (pixel >> 5) & ((1 << g_bits) - 1), pixel & 31
                    rgb.extend(((r << 3) | (r >> 2),
                                (g << (8 - g_bits)) | (g >> (2 * g_bits - 8)),
                                (b << 3) | (b >> 2)))
        path = self.args.output / f"frame-{self.frame:06d}.ppm"
        path.write_bytes(f"P6\n{width} {height}\n255\n".encode() + rgb)
        self.captures.append({"frame": self.frame, "path": str(path), "width": width,
                              "height": height, "pixel_format": pixel_format,
                              "sha256": sha256(path)})
        if self.args.dump_memory:
            # Snapshot only memory the public API exposes. These are independent
            # observations, not injected state or a substitute for CPU tracing.
            memories = {}
            for memory_id, name in ((0, "sram"), (1, "rtc"), (2, "wram"), (3, "vram")):
                size = self.core.retro_get_memory_size(memory_id)
                pointer = self.core.retro_get_memory_data(memory_id)
                if size and pointer:
                    memory_path = self.args.output / f"frame-{self.frame:06d}-{name}.bin"
                    memory_path.write_bytes(C.string_at(pointer, size))
                    memories[name] = {"path": str(memory_path), "size": size,
                                      "sha256": sha256(memory_path)}
            for index, descriptor in enumerate(self.memory_descriptors):
                if not descriptor.pointer or descriptor.flags & 1 or not descriptor.length:
                    continue
                name = "wram" if descriptor.start == 0x7e0000 and descriptor.length == 0x20000 else f"mapped-{index}"
                if name in memories:
                    continue
                memory_path = self.args.output / f"frame-{self.frame:06d}-{name}.bin"
                memory_path.write_bytes(C.string_at(descriptor.pointer + descriptor.offset, descriptor.length))
                memories[name] = {"path": str(memory_path), "size": descriptor.length,
                                  "sha256": sha256(memory_path), "start": descriptor.start}
            self.captures[-1]["memory"] = memories
        if self.args.dump_state:
            # Serialized state is opaque and core-specific; keep its hash and
            # bytes for inspection without claiming a shared native save format.
            size = self.core.retro_serialize_size()
            state = C.create_string_buffer(size)
            if not size or not self.core.retro_serialize(state, size):
                raise RuntimeError("Core could not serialize the captured state")
            state_path = self.args.output / f"frame-{self.frame:06d}.state"
            state_path.write_bytes(state.raw)
            self.captures[-1]["state"] = {"path": str(state_path), "size": size,
                                         "sha256": sha256(state_path)}

    def run(self):
        info, av = SystemInfo(), AVInfo()
        self.core.retro_get_system_info(C.byref(info))
        self.core.retro_init()
        if self.error:
            raise RuntimeError(self.error)
        missing_options = self.overrides.keys() - self.options.keys()
        if missing_options:
            raise ValueError(f"Core did not declare options: {missing_options}")
        rom = self.args.rom.read_bytes()
        buffer = C.create_string_buffer(rom)
        # Keep this buffer alive throughout the run for cores that accept data
        # in memory; other cores explicitly request the supplied filesystem path.
        game = GameInfo(str(self.args.rom.resolve()).encode(),
                        None if info.need_fullpath else C.cast(buffer, C.c_void_p),
                        0 if info.need_fullpath else len(rom), None)
        if not self.core.retro_load_game(C.byref(game)):
            raise RuntimeError("Core rejected source-linked ROM")
        self.core.retro_set_controller_port_device(0, 1)
        # Match eb::SnesBus fresh SRAM (0xff); never read or write a user save file.
        sram_size = self.core.retro_get_memory_size(0)
        sram = self.core.retro_get_memory_data(0)
        if sram and sram_size:
            C.memset(sram, 0xff, sram_size)
        self.core.retro_get_system_av_info(C.byref(av))
        inputs = load_input(self.args.input_script)
        next_input = 0
        started = time.monotonic()
        for frame in range(self.args.frames):
            # Capture labels count completed retro_run calls (one-based), while
            # input script entries select the next call (zero-based). Equal frame
            # numbers across implementations still need timing/phase scrutiny.
            while next_input < len(inputs) and inputs[next_input][0] <= frame:
                self.buttons = inputs[next_input][1]
                next_input += 1
            self.core.retro_run()
            self.frame = frame + 1
            if self.error:
                raise RuntimeError(self.error)
            if self.frame in self.args.capture:
                self.capture()
            if self.frame % 1000 == 0:
                print(f"oracle frames={self.frame}/{self.args.frames}", file=sys.stderr, flush=True)
        report = {"core": str(self.args.core.resolve()), "core_sha256": sha256(self.args.core),
                  "core_name": info.name.decode(), "core_version": info.version.decode(),
                  "rom": str(self.args.rom.resolve()), "rom_sha256": hashlib.sha256(rom).hexdigest(),
                  "frames": self.frame, "seconds": time.monotonic() - started,
                  "fps": av.timing.fps, "sample_rate": av.timing.sample_rate,
                  "audio_frames": self.audio_frames, "video_calls": self.video_calls,
                  "sram_initial_byte": 255 if sram and sram_size else None,
                  "sram_initialization": "filled with 0xff" if sram and sram_size else "not exposed; fresh core defaults",
                  "sram_size": sram_size,
                  "input_script": str(self.args.input_script) if self.args.input_script else None,
                  "input_script_sha256": sha256(self.args.input_script) if self.args.input_script else None,
                  "options": {k.decode(): v.decode() for k, v in sorted(self.options.items())},
                  "unsupported_environment_commands": sorted(self.unsupported),
                  "memory_descriptors": [{"start": d.start, "length": d.length, "flags": d.flags,
                                          "offset": d.offset, "select": d.select, "disconnect": d.disconnect,
                                          "address_space": d.address_space.decode() if d.address_space else None}
                                         for d in self.memory_descriptors],
                  "captures": self.captures}
        self.core.retro_unload_game()
        self.core.retro_deinit()
        (self.args.output / "report.json").write_text(json.dumps(report, indent=2) + "\n")
        print(json.dumps({key: report[key] for key in ("core_name", "core_version", "frames", "seconds")}), flush=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--core", required=True, type=Path)
    parser.add_argument("--rom", required=True, type=Path)
    parser.add_argument("--output", required=True, type=Path)
    parser.add_argument("--frames", type=int, required=True)
    parser.add_argument("--capture", type=int, nargs="+", default=[])
    parser.add_argument("--input-script", type=Path)
    parser.add_argument("--dump-memory", action="store_true", help="Save exposed RAM at captured frames for read-only comparisons")
    parser.add_argument("--dump-state", action="store_true", help="Save opaque state through retro_serialize at captured frames")
    parser.add_argument("--option", action="append", default=[], metavar="KEY=VALUE")
    args = parser.parse_args()
    if args.frames <= 0 or any(not 1 <= frame <= args.frames for frame in args.capture):
        parser.error("Frames/captures must be positive and captures within the run")
    if any("=" not in option for option in args.option):
        parser.error("Options must be KEY=VALUE")
    args.capture = set(args.capture) | {args.frames}
    args.output.mkdir(parents=True, exist_ok=True)
    # Any directories requested by the core point into disposable scratch space.
    # Captures and report stay in output; existing emulator saves/config stay out.
    with tempfile.TemporaryDirectory(prefix="isolated-state-", dir=args.output) as state:
        args.state_path = Path(state)
        Oracle(args).run()


if __name__ == "__main__":
    main()
