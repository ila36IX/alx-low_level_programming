#include <stdio.h>

int main (void)
{
	char a = 97;
	char A = 'A';

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}

