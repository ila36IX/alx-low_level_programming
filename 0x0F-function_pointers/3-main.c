#include "3-calc.h"

/**
 * main - The main function
 *
 * @argc: Many arguments
 * @argv: Arguments vectory
 * Return: exit state
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	char *op = argv[2];
	char opr = argv[2][0];
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((opr == '%' || opr == '/') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	f = get_op_func(argv[2]);
	printf("%d\n", f(a, b));
	return (0);

}
