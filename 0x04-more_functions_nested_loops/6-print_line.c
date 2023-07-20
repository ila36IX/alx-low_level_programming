#include "main.h"

/**
 * print_line - From 0 to 9
 *
 * @n: the number of _
 *
 * Return: nothing
 */
void print_line(int n)
{
	int j;

	for (j = 1; j <= n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
