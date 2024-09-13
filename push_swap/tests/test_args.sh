#!/bin/bash

set -euo pipefail

ROOT=$HOME/push_swap2/push_swap
PS_BIN=$ROOT/push_swap

if [ ! -f $PS_BIN ]; then
	echo "Push_swap binary not found. Please, execute the tests with test.sh script."
	exit 1
fi

function generate_nan_case() {
	length=$1
	result_string=""
	random_string=$(tr -cd '[:alnum:][:punct:]' < /dev/urandom | head -c $length)

	for i in $(seq 0 $((length-1))); do
		char="${random_string:$i:1}"
		result_string+="$char"

		if (( $RANDOM % 2 == 0 )); then
			result_string+=" "
		fi
	done

	echo "$result_string"
}

function generate_sorted_case() {
	local temp
	local length=$1
	local min=$(($RANDOM % 100))
	local max=$(($RANDOM % 100))

	if [[ $min -gt $max ]]; then
		temp=$min
		min=$max
		max=$temp
	fi

	echo $(seq $min $max | head -c $length | tr '\n' ' ')
}

function list_includes()
{
	local list=$1
	local item=$2

	if [[ $list =~ (^|[[:space:]])$item($|[[:space:]]) ]]; then
		return 0
	fi
	return 1
}

function test_nan()
{
	local input=$(generate_nan_case 16)

	if ! $PS_BIN $input > /dev/null 2>&1; then
		echo "OK."
		return 0
	fi

	echo "KO."
	echo "Test case: $input"
	exit 1
}

function test_noargs()
{
	if ! $PS_BIN > /dev/null 2>&1; then
		echo "OK."
		return 0
	fi

	echo "KO."
	exit 1
}

function test_sorted()
{
	local input=$(generate_sorted_case 16)

	if $PS_BIN $input > /dev/null 2>&1; then
		echo "OK."
	return 0
	fi

	echo "KO."
	echo "Test case: $input"
	exit 1
}

function test_quote() {
	local seq=($(seq -100 100 | shuf -n 20 | tr '\n' ' '))
	local input1="${seq[@]:0:10}"
	local input2="${seq[@]:10}"

	local e_quote=""
	local s_quote="'$input1' $input2"
	local d_quote="\"$input1\" $input2"
	local m_quote="\"$input1\" '$input2'"

	if $PS_BIN $e_quote > /dev/null 2>&1; then
		echo "KO."
		echo "Test case: $e_quote"
		exit 1
	fi

	if ! eval $PS_BIN $s_quote > /dev/null 2>&1; then
		echo "KO."
		echo "Test case: $s_quote"
		exit 1
	fi

	if ! eval $PS_BIN $d_quote > /dev/null 2>&1; then
		echo "KO."
		echo "Test case: $d_quote"
		exit 1
	fi

	if ! eval $PS_BIN $m_quote > /dev/null 2>&1; then
		echo "KO."
		echo "Test case: $m_quote"
		exit 1
	fi

	echo "OK."
	return 0
}

function test_overflow()
{
	local max_int="2147483648"
	local min_int="-2147483649"
	local input=$(seq -100 100 | shuf -n 20 | tr '\n' ' ')

	input=$(echo $input | sed "s| | $min_int |$(($RANDOM % 20 + 1))")
	input=$(echo $input | sed "s| | $max_int |$(($RANDOM % 20 + 1))")

	if ! $PS_BIN $input > /dev/null 2>&1; then
		echo "OK."
		return 0	
	fi

	echo "KO."
	echo "Test case: $input"
	exit 1
}

echo "Testing for non-numeric arguments..."
echo "------------------------------------"
for n in {1..10}; do
	echo -n "Test $n... "
	test_nan
done

echo ""

echo "Testing for no arguments..."
echo "---------------------------"
for n in {1..10}; do
	echo -n "Test $n... "
	test_noargs
done

echo ""

echo "Testing for sorted arguments..."
echo "-------------------------------"
for n in {1..10}; do
	echo -n "Test $n... "
	test_sorted
done

echo ""

echo "Testing for overflowing arguments..."
echo "------------------------------------"
for n in {1..10}; do
	echo -n "Test $n... "
	test_overflow
done

echo ""

echo "Testing for quoted arguments..."
echo "-------------------------------"
for n in {1..10}; do
	echo -n "Test $n... "
	test_quote
done