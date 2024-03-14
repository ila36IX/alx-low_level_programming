#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the neter point of the code
 *
 * Return: 0 if success
 **/
int main(void)
{
	int n;
	int last_Digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	n = 0;
	last_Digit = n % 10;
	printf("Last digit of %d is ", n);

	if (last_Digit >= 5)
	{
		printf("%d and is greater than 5\n", last_Digit);
	}
	else if (last_Digit == 0)
	{
		printf("%d and is 0\n", last_Digit);
	}
	else if (last_Digit <= 6)
	{
		printf("%d and is less than 6 and not 0\n", last_Digit);
	}

	return (0);

}
