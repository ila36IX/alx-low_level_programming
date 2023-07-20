#include "main.h"

/**
 * print_diagonal - Draw a diagonal
 *
 * @n: THe height of a diagonal
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int j;
	int i;

	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= j; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
