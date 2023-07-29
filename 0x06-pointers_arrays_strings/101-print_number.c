#include "main.h"

/**
 * print_number - Print a number using _putchar
 * @n: integer
 *
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int m = n;
	unsigned int digits = 0, j;
	unsigned int divider = 1;

	if (!m)
	{
		_putchar('0');
	}
	while (m)
	{
		m /= 10;
		digits++;
		divider *= 10;
	}
	divider /= 10;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (j = 0; j < digits; j++)
	{
		_putchar('0' + n / divider);
		n = n - (n / divider) * divider;
		divider /= 10;
	}
}
