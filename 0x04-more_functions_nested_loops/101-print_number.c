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
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 1000)
	{
		_putchar('0' + (int) n / 1000);
		n = n - 1000 * (n / 1000);
	}
	if (n > 100)
	{
		_putchar('0' + (int) n / 100);
		n = n - 100 * (n / 100);
	}
	if (n > 10)
	{
		_putchar('0' + (int) n / 10);
	}
	_putchar('0' + n % 10);
}
