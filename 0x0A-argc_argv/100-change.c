#include <stdio.h>
#include <stdlib.h>

/**
 * many_coins - Calculate the miimum number
 *
 * @amount: The amount of money
 * Return: Integer representes many coins
 */
int many_coins(int amount)
{
	if (amount <= 0)
		return (0);
	else if (amount >= 25)
		return (1 + many_coins(amount - 25));
	else if (amount >= 10)
		return (1 + many_coins(amount - 10));
	else if (amount >= 5)
		return (1 + many_coins(amount - 5));
	else if (amount >= 2)
		return (1 + many_coins(amount - 2));
	else if (amount >= 1)
		return (1 + many_coins(amount - 1));
	else
		return (0);
}

/**
 * main - Prints the minimum number of coins
 *
 * @argc: Arguments counter
 * @argv: Argumnets vectory
 * Return: Zero or 1
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int amount = atoi(argv[1]);

		printf("%d\n", many_coins(amount));
	}
	return (0);
}
