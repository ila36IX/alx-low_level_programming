#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from x to 98
 *
 * @x: THe number in which counting begins
 *
 * Return: Nothing
 */
void print_to_98(int x)
{
	if (x >= 98)
	{
		int i;

		for (i = x; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("98");
	}
	else
	{
		int i;

		for (i = x; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("98");
	}
	printf("\n");
}
