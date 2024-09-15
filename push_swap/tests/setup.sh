#!/bin/bash

set -euo pipefail

ROOT=$(cd "$(dirname "$0")" && cd ../../ && pwd)

MK_PATH=$ROOT
PS_DIR=$ROOT/push_swap
PS_BIN=$PS_DIR/push_swap
CK_BIN=$PS_DIR/tests/checker_linux

if [[ ! -f $CK_BIN ]]; then
	echo "Checker program not found."
	exit 1
fi

if [[ ! -f $PS_BIN ]]; then
	echo -n "Building push_swap... "
	make -C $MK_PATH > /dev/null 2>&1
	echo "Done."
fi