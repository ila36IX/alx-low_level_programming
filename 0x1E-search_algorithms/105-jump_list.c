#include "search_algos.h"

/**
 * _min - find the less integer
 *
 * @d1: first integer to compare
 * @d2: second integer
 * Return: The min integer
 */
int _min(int d1, int d2)
{
	return (d1 < d2 ? d1 : d2);
}

/**
 * value_by_index - Get the value list its indexe
 *
 * @list: Pointer to first node in a linked list
 * @i: Index to where wanted value are located
 * Return: Pointer to integer or NULL if not exists
 */
int *value_by_index(listint_t *list, int i)
{
	while (i-- && list)
		list = list->next;

	if (i >= 0)
		return (NULL);

	return (&list->n);
}

/**
 * pointer_by_index - Get the value list its indexe
 *
 * @list: Pointer to first node in a linked list
 * @i: Index to where wanted node are located
 * Return: Pointer to node, or NULL if not exists
 */
listint_t *pointer_by_index(listint_t *list, int i)
{
	while (i-- && list)
		list = list->next;

	if (i >= 0)
		return (NULL);

	return (list);
}

/**
 * jump_list -  searches for a value in LL using the Jump search algorithm.
 *
 * @list: Pointer to the first node
 * @size: Size of the linked list
 * @value: Value to search for
 * Return: Index where value is located Or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, l = 0, r = 0, block_size;

	if (!list)
		return (NULL);

	block_size = sqrt(size);
	while (*value_by_index(list, r) < value && r < size - 1)
	{
		l = r, r = _min(r + block_size, size - 1);
		printf("Value checked at index [%ld] = [%d]\n", r, *value_by_index(list, r));
	}

	printf("Value found between indexes [%ld] and [%ld]\n", l, r);
	for (i = l; i <= r && i < size; i++)
	{
		printf("Value checked at index [%ld] = [%d]\n", i, *value_by_index(list, i));
		if (*value_by_index(list, i) == value)
			return (pointer_by_index(list, i));
	}
	return (NULL);
}
