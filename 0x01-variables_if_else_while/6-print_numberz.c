#include <stdio.h>
/**
 *  * main - print all possible combinations of three digits
 *   *
 *      * Return: O if succeed
 *       **/
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar(10);

	return (0);
}

