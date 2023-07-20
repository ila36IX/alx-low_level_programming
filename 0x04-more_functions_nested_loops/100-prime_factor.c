#include <stdio.h>

long int next_prime(long int n);

int main()
{
	long int number = 612852475143;
	long int prime = 2;

	while (1 == 1)
	{
		if (number % prime == 0)
		{
			number = number / prime;
			if (number == 1)
			{
				printf("%ld\n", prime);
				return (0);
			}
		}
		else
		{
			prime = next_prime(prime);
		}
	}
}

long int next_prime(long int n)
{
	while (1)
	{
		long int i;

		n++;
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				break;
			}		
			if (i == n - 1)
			{
				return (n);
			}
		}
	}
}
