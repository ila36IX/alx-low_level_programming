#include <stdio.h>
/**
 *  * main - print all possible combinations of three digits
 *   *
 *      * Return: O if succeed
 *       **/
int main(void)
{
	int singdig;

	for (singdig = 0; singdig <= 9; singdig++)
	{
		printf("%d", singdig);
	}
	printf("\n");
	return (0);
}
