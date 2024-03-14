#include <stdio.h>
/**
 *  * main - print all possible combinations of three digits
 *   *
 *      * Return: O if succeed
 *       **/
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = n; m <= 9; m++)
		{
			if (n == m)
				continue;

			putchar('0' + n);
			putchar('0' + m);

			if (m != 9 || n != 8)
			{
				putchar(',');
				putchar(' ');
			}
	}
	}
	putchar('\n');
	return (0);
}
