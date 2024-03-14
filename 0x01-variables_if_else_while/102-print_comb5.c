#include <stdio.h>

int main(void)
{
	int j, h, k, l, m, i; 

	for (j = 0; j <= 9; j++)
	{
		for (h = j; h <= j; h++)
		{
			for (k = h; k <= h; k++)
			{
				for (l = k; l <= 9; l++)
				{
					for (m = 1; m <= 9; m++)
					{
						if (h != m)
						putchar('0' + j);
						putchar('0' + h);
						// for the space between two digits
							if (k <= 9)
							{
								putchar(' ');
							}
							putchar('0' + l);
							putchar('0' + m);

						if (j != 9 || h != 8 && k != 9 || m != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
