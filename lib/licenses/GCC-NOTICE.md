# GCC runtime libraries

This directory contains libstdc++.so.6 and libgcc_s.so.1 from GCC
16.2.1+r23+gd564253eb6c8, packaged by Arch Linux as release 1 for x86_64.
Copyright Free Software Foundation, Inc. and the GCC contributors.

The library code is distributed under the GNU General Public License,
version 3 or later, with the GCC Runtime Library Exception, version 3.1.
The accompanying GCC-COPYING3.txt and GCC-RUNTIME-LIBRARY-EXCEPTION.txt
contain those license texts. GCC documentation licensed under the GFDL is
not included in this runtime bundle.

Upstream project and source: https://gcc.gnu.org/
Source revision: https://gcc.gnu.org/git/?p=gcc.git;a=commit;h=d564253eb6c8
Arch package build recipe and history: https://gitlab.archlinux.org/archlinux/packaging/packages/gcc
Package provenance and exact archive hashes are in ../PROVENANCE.md.

libgcc_s.so.1 is unmodified. libstdc++.so.6 has only a loader RUNPATH of
$ORIGIN added with patchelf so its adjacent libgcc_s.so.1 can be found.
No changes were made to the GCC library implementation.
