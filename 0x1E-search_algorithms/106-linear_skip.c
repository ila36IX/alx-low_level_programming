#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list
 * of integers using “express lane” to browse it
 *
 * @list: Pointer to the head of linked list
 * @value: value to locate its index
 * Return: Value index if exists, if not
 * -1 or if list is null or value not
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *e, *pe;

	if (!list)
		return (NULL);

	pe = list;
	e = list->express;
	while (e)
	{
		printf("Value checked at index [%lu] = [%d]\n", e->index, e->n);
		if (e->n > value)
			break;
		pe = e;
		e = e->express;
	}
	if (!e)
	{
		e = pe;
		while (e->next)
			e = e->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", pe->index, e->index);
	while (pe != e->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", pe->index, pe->n);
		if (pe->n == value)
			return (pe);
		pe = pe->next;
	}
	return (NULL);
}
