#include <stdio.h>

/**
 * main - print all possible combinations of three digits
 * 
 * Return: O if succeed
 **/
int main(void)
{
	char a = 48;
	char b = 97;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (b <= 102)
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
