#include "main.h"

/**
 * print_number - print the number
 *
 * @n: the number
 *
 * Return: nothing
 */
void print_number(int n)
{
	int i, number;
	int counter = 1;
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	number = n;

	while (number / 10 > 0)
	{
		counter++;
		divisor *= 10;
		number = number / 10;
	}
	for (i = 1; i <= counter; i++)
	{
		_putchar('0' + n / divisor);
		n = n - (n / divisor) * divisor;
		divisor /= 10;
	}
}
