#include "main.h"
/**
 * print_sign - gives the sign of an integer
 *
 * @n: THe integer that will be checken
 *
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

