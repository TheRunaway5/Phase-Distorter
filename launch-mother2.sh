#!/bin/sh
# Select the Japanese profile explicitly so its importer and default save are
# kept separate from EarthBound even when the last general launch was English.
set -eu
release_dir=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
exec "$release_dir/launch.sh" --game mother2 "$@"
