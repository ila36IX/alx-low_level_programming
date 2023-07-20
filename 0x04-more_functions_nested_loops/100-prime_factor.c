#include <stdio.h>
#include <math.h>

/**
 * main - The entry function
 *
 * Return: Number 0
 */
int main(void)
{
	long int number, i, t;

	t = 1;
	number = 612852475143;
	for (i = 2; i * i < number; i++)
	{
		if (number % i == 0)
		{
			if (number / i > i)
			{
				t = number / i;
			}
			else
			{
				t = i;
			}
		}
	}
	printf("%ld\n", t);
	return (0);
}
