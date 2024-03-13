#include <stdio.h>

int main(void)
{
	char alp = 122;
	while (alp >= 97)
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}


