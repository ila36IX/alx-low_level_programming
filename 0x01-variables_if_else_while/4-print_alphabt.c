#include <stdio.h>

int main(void)
{
	char a = 97;
	char b = 10;

	while (a <= 122)
	{
	if (a != 101 && a != 113)	
		putchar(a);
		a++;
	}
		putchar(b);

	return (0);
}
