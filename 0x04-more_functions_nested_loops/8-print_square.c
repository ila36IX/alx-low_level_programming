#include "main.h"

/**
 * print_square - Draw a diagonal
 *
 * @size: THe size of the square
 *
 * Return: nothing
 */
void print_square(int size)
{
	int j;
	int i;

	for (j = 1; j <= size; j++)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
