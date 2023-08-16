#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 *
 * @argc: Arguments counter
 * @argv: Arguments vectory
 * Return: Zero or 1
 */
int main(int argc, char **argv)
{
	int i;
	int j = 0;
	int _sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (0);
			}
			j++;
		}
		_sum += atoi(argv[i]);
	}
	printf("%d\n", _sum);
	return (0);
}
