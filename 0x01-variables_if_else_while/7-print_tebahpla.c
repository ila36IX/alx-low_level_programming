#include <stdio.h>
/**
 *  * main - print all possible combinations of three digits
 *   *
 *      * Return: O if succeed
 *       **/
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


