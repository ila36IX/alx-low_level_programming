#include <stdio.h>

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

