#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 *
 * @argc: arguments counter
 * @argv: argumnets vectory
 * Return: Zero
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
