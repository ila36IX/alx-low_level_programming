#include "main.h"

/**
 * print_last_digit - As the name said
 *
 * @x: THe digit
 *
 * Return: Integer
 */
int print_last_digit(int x)
{
	int last;

	last = x % 10;
	if (last >= 0)
	{
		_putchar('0' + last);
		return (last);
	}
	else
	{
		_putchar('0' + (-last));
		return (-last);
	}
}
