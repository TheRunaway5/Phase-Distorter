#!/bin/sh
# Register the native application in the current user's application menu. Assets
# and saves stay in the game's existing preference directory; no root access is
# needed. --data-dir makes packaging tests independent of a real desktop profile.
set -eu
release_dir=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
data_dir=${XDG_DATA_HOME:-"$HOME/.local/share"}
case $# in
    0) ;;
    2) if [ "$1" != '--data-dir' ]; then
           printf '%s\n' 'Usage: install-linux.sh [--data-dir DIRECTORY]' >&2; exit 2
       fi
       data_dir=$2 ;;
    *) printf '%s\n' 'Usage: install-linux.sh [--data-dir DIRECTORY]' >&2; exit 2 ;;
esac
carriage_return=$(printf '\r')
case "$release_dir$data_dir" in
    *'
'*|*"$carriage_return"*) printf '%s\n' 'Launcher paths must not contain line breaks.' >&2; exit 1 ;;
esac
# The menu starts the application itself; no shell or launch script is involved.
# Also support source-only checkouts and the earlier nested package layout.
program=
for candidate in "$release_dir/Phase Distorter" "$release_dir/build/cpp/eb_cpp" "$release_dir/launchers/linux/bin/eb_cpp"; do
    if [ -x "$candidate" ]; then
        program=$candidate
        break
    fi
done
if [ -z "$program" ]; then
    printf '%s\n' 'No Linux executable found. Build Phase Distorter first.' >&2
    exit 1
fi
# SDL's X11 class follows the executable basename. Match the branded release
# name as well as the eb_cpp fallback so the menu groups the correct window.
wm_class=${program##*/}
# Desktop Exec values have two escaping layers: the desktop string and the
# quoted argument. Percent signs must also survive desktop field-code expansion.
exec_directory=$(printf '%s' "${program%/*}" | sed 's/\\/\\\\\\\\/g; s/"/\\\\"/g; s/`/\\\\`/g; s/\$/\\\\$/g; s/%/%%/g; s/	/\\t/g')
applications=$data_dir/applications
icons=$data_dir/icons/hicolor/256x256/apps
mkdir -p "$applications" "$icons"
cp "$release_dir/cpp/resources/phase-distorter.png" "$icons/phase-distorter.png"
# Use env (a native executable) so desktop libraries do not try to
# resolve a path containing field-code escapes before expanding its arguments.
# The main entry restores the last game, with explicit language choices exposed
# as desktop actions. env replaces itself with the selected application.
# Put the directory in --chdir and execute the fixed basename: a directory
# containing '=' must not be parsed by env as a variable assignment.
cat > "$applications/phase-distorter.desktop" <<EOF
[Desktop Entry]
Type=Application
Version=1.0
Name=Phase Distorter
Comment=EarthBound / Mother 2 PC port
Exec=/usr/bin/env "--chdir=$exec_directory" "./$wm_class"
Icon=phase-distorter
Terminal=false
Categories=Game;RolePlaying;
StartupNotify=true
StartupWMClass=$wm_class
Actions=EarthBound;Mother2;

[Desktop Action EarthBound]
Name=EarthBound (English)
Exec=/usr/bin/env "--chdir=$exec_directory" "./$wm_class" --game earthbound

[Desktop Action Mother2]
Name=Mother 2 (Japanese)
Exec=/usr/bin/env "--chdir=$exec_directory" "./$wm_class" --game mother2
EOF
chmod 755 "$applications/phase-distorter.desktop"
# Cache helpers are optional: desktop environments can also discover these files
# directly. A missing helper should not make a successfully written entry fail.
if command -v update-desktop-database >/dev/null 2>&1; then
    update-desktop-database "$applications" >/dev/null 2>&1 || :
fi
if command -v gtk-update-icon-cache >/dev/null 2>&1; then
    gtk-update-icon-cache -f -t "$data_dir/icons/hicolor" >/dev/null 2>&1 || :
fi
printf 'Installed Phase Distorter launcher: %s\n' "$applications/phase-distorter.desktop"
printf '%s\n' 'Keep this project folder in place, or rerun this script after moving it.'
