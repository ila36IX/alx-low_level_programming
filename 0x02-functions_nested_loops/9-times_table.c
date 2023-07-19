#include "main.h"

/**
 * times_table - Print the table of meltuplication
 *
 * Return: Nothing
 *
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			if (i * j > 10)
			{
				int a;
				int b;

				a = (int) (i * j) % 10;
				b = (int) (i * j) / 10;

				_putchar(',');
				_putchar(' ');
				_putchar('0' + b);
				_putchar('0' + a);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + j * i);
			}
		}
		_putchar('\n');
	}

}
