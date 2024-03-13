#include <stdio.h>
int main(void)
{
	char a = 0;
	char b = 97;

	while (a <= 16)
	{
		putchar('0' + a);
		a++;
	}
/*	while (b <= 102)
	{
		putchar(b);
		b++;
	}*/
	putchar('\n');
	return (0);
}	
