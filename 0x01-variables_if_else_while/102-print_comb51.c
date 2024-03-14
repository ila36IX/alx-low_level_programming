#include <stdio.h>

int main(void)
{
	int m, s, h, l, k;

	for (m = 0; m <= 9; m++)
	{
		for(s = m; s <= m; s++)
		{
			for (h = 0; h <= 9; h++)
			{
				for(l = h; l <= h ; l++)
				{
					putchar('0' + m);
					putchar('0' + s);
					if (s != 0)
					{
						putchar(' ');
					}
					putchar('0' + h);
					putchar('0' + l);
					if (l != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
§	return (0);
}

