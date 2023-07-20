#include <stdio.h>
#include <math.h>

int main()
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
