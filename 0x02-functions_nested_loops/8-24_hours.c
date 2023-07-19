#include "main.h"

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i >= 23; i++)
	{
		for (j = 0; i <= 59; i++)
		{
			if (i < 10 && j < 10)
			{
				_putchar('0');
				_putchar('0' + i);
				_putchar(':');
				_putchar('0');
				_putchar('0'+ j);
			}
			else if (i >= 10 && j < 10)
			{
				_putchar('0');
				_putchar('0' + i);
				_putchar(':');
				_putchar('0' + (j - (j % 10)) / 10);
				_putchar('0' + j % 10);
			}
			else if (j >= 10 && i < 10)
			{
				_putchar('0' + (i - (i % 10)) / 10);
				_putchar('0' + i % 10);
				_putchar(':');
				_putchar('0');
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + (i - (i % 10)) / 10);
				_putchar('0' + i % 10);
				_putchar(':');
				_putchar('0' + (j - (j % 10)) / 10);
				_putchar('0' + j % 10);
			}
		_putchar('\n');
		}
	}
}
