#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o sht
./sht > tests/task100.out

echo -n "- Task100: "
if ($(diff tests/task100.out tests/task100.exp > OUT))
then 
	echo "all Good"
else
	echo "all bad"
fi

rm OUT
