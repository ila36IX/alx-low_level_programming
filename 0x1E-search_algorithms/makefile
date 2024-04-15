c_files := $(wildcard *.c)
header_file := search_algos.h

build: run
	./run

run: $(c_files) $(header_file)
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o run -lm

test: run_with_igonring_wornings
	./run_with_igonring_wornings

run_with_igonring_wornings: $(c_files) $(header_file)
	gcc *.c -o run_with_igonring_wornings -lm

leaks: run
	valgrind --leak-check=full --show-leak-kinds=definite,possible ./run
