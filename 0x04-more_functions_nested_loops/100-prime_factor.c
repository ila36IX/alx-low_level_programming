#include <stdio.h>
#include <math.h>

/**
 * main - The entry function
 *
 * Return: Number 0
 */
int main(void)
{
	long int number, i;

	number = 612852475143;
	for (i = sqrt(number); i > 2; i--)
	{
		if (number % i == 0)
		{
			printf("%ld\n", i);
			return (0);
		}
	}
	return (0);
}
