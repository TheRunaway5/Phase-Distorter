# Linux runtime provenance

These are the shared libraries distributed with the Phase Distorter Linux
x86-64 runtime. They contain no EarthBound or Mother 2 assets.

## System requirements

This binary build requires **glibc 2.43 or newer**, a Linux x86-64 desktop,
and working desktop OpenGL 2.1 support. The executable and these three
libraries use the baseline x86-64 instruction set. The system supplies
glibc, the dynamic loader, graphics drivers, OpenGL/GLX libraries, and the
X11 or Wayland and audio libraries used by the selected SDL backends.
These system components are not included here. Build from source on an
older distribution to target that distribution's libc instead.

## SDL2

`libSDL2-2.0.so.0` is original SDL **2.32.10**, built from the official
[SDL source archive](https://www.libsdl.org/release/SDL2-2.32.10.tar.gz).
It is not SDL2-compat and does not require SDL3.
[Upstream release](https://github.com/libsdl-org/SDL/releases/tag/release-2.32.10).
Archive SHA-256: `5f5993c530f084535c65a6879e9b26ad441169b3e25d789d83287040a9ca5165`.

Built with CMake and GCC using these options:

```sh
cmake -S SDL2-2.32.10 -B sdl-build \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_C_FLAGS="-march=x86-64 -mtune=generic" \
  -DSDL_SHARED=ON -DSDL_STATIC=OFF \
  -DSDL_TEST=OFF -DSDL_TESTS=OFF \
  -DSDL2_DISABLE_INSTALL=ON -DSDL_SSE3=OFF
cmake --build sdl-build
```

SSE3 is disabled because this SDL version's CMake configuration otherwise
adds `-msse3` to all C compilation, beyond the baseline x86-64 requirement.
SDL source files are unmodified. The zlib license is included as
`licenses/SDL2-LICENSE.txt`.

## GCC runtime

`libstdc++.so.6` and `libgcc_s.so.1` come from the official Arch Linux
**x86_64** packages, version **16.2.1+r23+gd564253eb6c8-1**:
[libstdc++](https://archlinux.org/packages/core/x86_64/libstdc%2B%2B/) and
[libgcc](https://archlinux.org/packages/core/x86_64/libgcc/).
These are the generic x86-64 packages, not distribution-specific v3/v4
builds. The detached package signatures were verified using the Arch
Linux public keyring; signer Frederik Schwan, signing-key fingerprint
`05C7775A9E8B977407FE08E69D4C5AA15426DA0A`.

| Component | Downloaded package | Archive SHA-256 |
| --- | --- | --- |
| libstdc++ | `libstdc++-16.2.1+r23+gd564253eb6c8-1-x86_64.pkg.tar.zst` | `15dc6bd2f3a2ee17fcd79a14325e9e0037722a592b2bdc55e1665d92112eaa51` |
| libgcc | `libgcc-16.2.1+r23+gd564253eb6c8-1-x86_64.pkg.tar.zst` | `7367dad49fc3229bde804816d412ab77306d433b1f92e4126b8b3ba3502c67d6` |

The packages were downloaded through Arch's package download endpoint,
which selected the official mirror `https://umea.mirror.pkgbuild.com/core/os/x86_64/`.
The corresponding [GCC source and Arch build recipe](https://gitlab.archlinux.org/archlinux/packaging/packages/gcc)
are public. The source revision is `d564253eb6c8`.

`libgcc_s.so.1` is unmodified. `libstdc++.so.6` has only its ELF RUNPATH
changed to `$ORIGIN` with `patchelf --set-rpath '$ORIGIN'` so its dependency
on the adjacent libgcc can be resolved independently of the executable's
RUNPATH. Both are copied as regular files under their SONAMEs.

The GNU GPL version 3 and GCC Runtime Library Exception version 3.1 are
included in `licenses/GCC-COPYING3.txt` and
`licenses/GCC-RUNTIME-LIBRARY-EXCEPTION.txt`. See
`licenses/GCC-NOTICE.md` for source and copyright information.

## Dependency audit and validation

ELF symbol requirements were inspected after staging: SDL2 requires up
to `GLIBC_2.43`, libstdc++ up to `GLIBC_2.38`, and libgcc up to
`GLIBC_2.35`. The application itself also requires `GLIBC_2.43`.
The three libraries' GNU ISA-used notes report x86-64-baseline.

A staged native application launch under Xvfb and Mesa software OpenGL
completed 180 emulated frames with exit status 0. `/proc/PID/maps` and
loader diagnostics confirmed all three libraries were loaded from the
staged `lib/` directory; no SDL3 library was loaded. `SDL_GetVersion`
reported 2.32.10. This verifies the bundled dependency selection on the
build machine; it is not a test of every supported desktop or GPU.
The test referenced a private asset pack outside the bundle, disabled
save/preferences writes, and used private XDG directories.

| Distributed file | SHA-256 |
| --- | --- |
| `libSDL2-2.0.so.0` | `9e206fa4deae7f1ad07e0c1c11e0ebfdb120153045936d8560a86e753e511a32` |
| `libstdc++.so.6` | `e3b0ac5568d29e4b8f16151c49133ec7fb09ecdef78f7d4f733d7f3f1f0854bd` |
| `libgcc_s.so.1` | `e618cb9c90c2eb3a1dad1cfea5b6c1eebcf2e799ad805976f4ae47bdd61c716a` |
