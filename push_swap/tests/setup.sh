#!/bin/bash

set -euo pipefail

ROOT=$HOME/push_swap2

MK_PATH=$ROOT
PS_BIN=$ROOT/push_swap/push_swap
CK_BIN=$ROOT/push_swap/tests/checker_linux

if [[ ! -f $CK_BIN ]]; then
	echo "Checker program not found."
	exit 1
fi

if [[ ! -f $PS_BIN ]]; then
	echo -n "Building push_swap... "
	make -C $MK_PATH > /dev/null 2>&1
	echo "Done."
fi