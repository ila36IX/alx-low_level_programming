/**
 * swap_int - swap two integers
 *
 * @a: Integer 1
 *
 * @b: Integer 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swaper;

	swaper = *a;
	*a = *b;
	*b = swaper;
}
