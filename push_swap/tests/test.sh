#!/bin/bash

set -euo pipefail

ROOT=$(cd "$(dirname "$0")" && cd ../../ && pwd)
TESTS_DIR=$ROOT/push_swap/tests

bash $TESTS_DIR/setup.sh
bash $TESTS_DIR/test_args.sh
echo ""
bash $TESTS_DIR/test_sort.sh