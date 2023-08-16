#include <stdlib.h>
#include <stdio.h>

/**
 * main - calculate meltuplacation of two numbers
 *
 * @argc: Arguments counter
 * @argv: arguments vectory
 * Return: O or 1
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
