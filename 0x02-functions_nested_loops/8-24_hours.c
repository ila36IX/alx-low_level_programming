#include "main.h"

/**
 * jack_bauer - Count all possible times in the day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;

	while (i <= 2)
	{
		_putchar('0' + i);
		_putchar('0' + j);
		_putchar(':');
		_putchar('0' + x);
		_putchar('0' + y);
		_putchar('\n');
		y++;

		if (y == 10)
		{
			x++;
			y = 0;
		}
		if (x == 6)
		{
			j++;
			x = 0;
		}

		if (j == 10)
		{
			i++;
			j = 0;
		}


	}
}
