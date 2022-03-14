#!/bin/bash

echo "=============== < < no conversion > > ================="
echo "======================================================="
echo

arr1=("" "asd" "--1" "++2")

for var in "${arr1[@]}"
do
	echo "test cast : ${var}"
	./convert "${var}"
	echo
done

echo "================= < < simple test > > ================="
echo "======================================================="
echo

arr2=("0" "65"
		"32" "126"
		"-2147483648" "2147483647"
		"-3.402823466E+38" "3.402823466E+38"
		"-1.7976931348623158E+308" "1.7976931348623158E+308")
for var in "${arr2[@]}"
do
	echo "test cast : ${var}"
	./convert "${var}"
	echo
done

echo "================ < < out of range > > ================="
echo "======================================================="
echo

arr3=("31" "127"
		"-2147483649" "2147483648"
		"-3.402823466E+39" "3.402823466E+39"
		"-1.7976931348623158E+309" "1.7976931348623158E+309")
for var in "${arr3[@]}"
do
	echo "test cast : ${var}"
	./convert "${var}"
	echo
done

echo "================ < < not a number > > ================="
echo "======================================================="
echo

arr4=("nan" "inf" "-inf" "inff" "-inff")
for var in "${arr4[@]}"
do
	echo "test cast : ${var}"
	./convert "${var}"
	echo
done