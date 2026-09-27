#!/bin/sh
# Select the English profile explicitly; launch.sh still handles executable
# discovery and passes through user options such as custom saves or display.
set -eu
release_dir=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
exec "$release_dir/launch.sh" --game earthbound "$@"
