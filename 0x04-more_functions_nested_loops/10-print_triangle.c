#include "main.h"

/**
 * print_triangle - let's print a triangle
 *
 * @size: The size of the triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, j, k;
	if (size <= 0 )
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j < (size - i + 1); j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
