#!/usr/bin/env python3
"""Refresh the checked-in launcher icons from the repository's saturn.png.

Requires ImageMagick's `magick` command only when artwork is changed. Normal
builds consume the resulting ICO, PNG and header without a PNG decoder or tool.
"""
from pathlib import Path
import shutil
import subprocess

root = Path(__file__).resolve().parents[2]
if not (root / "saturn.png").is_file():
    raise SystemExit("Place the source Saturn artwork at saturn.png in the project root before regenerating icons. Existing icons are unchanged.")
magick = shutil.which("magick")
if not magick:
    raise SystemExit("Install ImageMagick to regenerate the launcher artwork")
resources = root / "cpp/resources"
resources.mkdir(exist_ok=True)
# Keep the supplied 16x21 pixel art intact inside a transparent square. Integer
# enlargement and point filtering preserve its hard edges and original colors.
base = [magick, str(root / "saturn.png"), "-background", "none", "-gravity", "center", "-extent", "32x32"]
subprocess.run([*base, "-filter", "point", "-resize", "256x256", str(resources / "phase-distorter.png")], check=True)
subprocess.run([*base, "-filter", "point", "-define", "icon:auto-resize=256,128,64,48,32,24,16", str(resources / "phase-distorter.ico")], check=True)
# SDL takes an RGBA surface. Embedding a small raw copy avoids runtime image
# dependencies and makes window icons work even after the executable is moved.
pixels = subprocess.check_output([*base, "-filter", "point", "-resize", "64x64", "-depth", "8", "rgba:-"])
assert len(pixels) == 64 * 64 * 4
rows = ["        " + ",".join(f"0x{value:02x}" for value in pixels[i:i + 32]) + "," for i in range(0, len(pixels), 32)]
header = '''#pragma once
// Generated from the project's saturn.png by cpp/tools/make_app_icon.py.
// This is launcher artwork; importing retail game assets remains a separate step.
#include <SDL.h>
#include <array>
#include <cstddef>

namespace eb {
// SDL copies the icon into window-owned storage. This temporary surface can be
// released immediately; an icon allocation failure must not prevent game startup.
inline void set_app_icon(SDL_Window* window) {
    static constexpr std::array<Uint8, 64 * 64 * 4> rgba = {{
''' + "\n".join(rows) + '''
    }};
    SDL_Surface* surface = SDL_CreateRGBSurfaceWithFormat(0, 64, 64, 32, SDL_PIXELFORMAT_RGBA32);
    if (!surface) return;
    // Respect the surface's row pitch instead of assuming tightly packed storage.
    for (std::size_t y = 0; y < 64; ++y)
        SDL_memcpy(static_cast<Uint8*>(surface->pixels) + y * surface->pitch,
                   rgba.data() + y * 64 * 4, 64 * 4);
    SDL_SetWindowIcon(window, surface);
    SDL_FreeSurface(surface);
}
} // namespace eb
'''
(root / "cpp/include/eb/app_icon.hpp").write_text(header)
print("Refreshed the Windows, Linux, and SDL window icons from saturn.png")
