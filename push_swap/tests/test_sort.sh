#!/bin/bash

set -euo pipefail

ROOT=$HOME/push_swap2/push_swap
PS_BIN=$ROOT/push_swap
CK_BIN=$ROOT/tests/checker_linux

if [ ! -f $PS_BIN ]; then
	echo "Push_swap binary not found. Please, execute the tests with test.sh script."
	exit 1
fi

if [ ! -f $CK_BIN ]; then
	echo "Checker binary not found. Please, execute the tests with test.sh script."
	exit 1
fi

function test_1()
{
	local input=$(seq -100 100 | shuf -n 1 | tr '\n' ' ')

	if $PS_BIN $input | $CK_BIN $input > /dev/null 2>&1; then
		echo "OK."
		return 0
	fi

	echo "KO."
	echo "Test case: $input"
	exit 1
}

function test_2()
{
	local input=$(seq -100 100 | shuf -n 2 | tr '\n' ' ')

	if $PS_BIN $input | $CK_BIN $input > /dev/null 2>&1; then
		echo "OK."
		return 0
	fi

	echo "KO."
	echo "Test case: $input"
	exit 1
}

function test_3()
{
	local input=$(seq -100 100 | shuf -n 3 | tr '\n' ' ')

	if $PS_BIN $input | $CK_BIN $input > /dev/null 2>&1; then
		echo "OK."
		return 0
	fi

	echo "KO."
	echo "Test case: $input"
	exit 1
}

function test_10()
{
	local input=$(seq -100 100 | shuf -n 10 | tr '\n' ' ')

	if $PS_BIN $input | $CK_BIN $input > /dev/null 2>&1; then
		echo "OK."
		return 0
	fi

	echo "KO."
	echo "Test case: $input"
	exit 1
}

function test_100()
{
	local input=$(seq -100 100 | shuf -n 100 | tr '\n' ' ')

	if $PS_BIN $input | $CK_BIN $input > /dev/null 2>&1; then
		echo "OK."
		return 0
	fi

	echo "KO."
	echo "Test case: $input"
	exit 1
}

function test_500()
{
	local input=$(seq -500 500 | shuf -n 500 | tr '\n' ' ')

	if $PS_BIN $input | $CK_BIN $input > /dev/null 2>&1; then
		echo "OK."
		return 0
	fi

	echo "KO."
	echo "Test case: $input"
	exit 1
}

echo "Testing for 1 arg"
echo "-------------------"
for n in {1..10}; do
	echo -n "Test $n... "
	test_1
done

echo ""

echo "Testing for 2 args"
echo "-------------------"
for n in {1..10}; do
	echo -n "Test $n... "
	test_2
done

echo ""

echo "Testing for 3 args"
echo "-------------------"
for n in {1..10}; do
	echo -n "Test $n... "
	test_3
done

echo ""

echo "Testing for 10 args"
echo "-------------------"
for n in {1..10}; do
	echo -n "Test $n... "
	test_10
done

echo ""

echo "Testing for 100 args"
echo "--------------------"
for n in {1..10}; do
	echo -n "Test $n... "
	test_100
done

echo ""

echo "Testing for 500 args"
echo "--------------------"
for n in {1..10}; do
	echo -n "Test $n... "
	test_500
done