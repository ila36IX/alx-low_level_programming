#include <stdio.h>
/**
 *  * main - print all possible combinations of three digits
 *   *
 *      * Return: O if succeed
 *       **/
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar('0' + i);

		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
