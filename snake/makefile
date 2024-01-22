c_files := $(wildcard *.c)
header_file := snake.h

build: run 
	./run

run: $(c_files) $(header_file)
	gcc  -Wall -Werror -Wextra -pedantic  *.c -lSDL2 -o run

leaks: run 
	valgrind --leak-check=full --show-leak-kinds=definite,possible ./run
