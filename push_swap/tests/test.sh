#!/bin/bash

set -euo pipefail

ROOT=$HOME/push_swap2/push_swap
bash $ROOT/tests/setup.sh
bash $ROOT/tests/test_args.sh
echo ""
bash $ROOT/tests/test_sort.sh