#include <stdio.h>

int main(void)
{
	int j, h, l;

	for (j = 0; j <= 7; j++)
	{
		for (h = j; h <= 8; h++)
		{
			for (l = h; l <= 9; l++)
			{
				if (j == h || h == l)
					continue;

				putchar('0' + j);
				putchar('0' + h);
				putchar('0' + l);
				if (j != 7 || h != 8 || l != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
