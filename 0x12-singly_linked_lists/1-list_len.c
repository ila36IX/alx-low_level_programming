#include "lists.h"

/**
 * list_len - Number of elements in a linked list_t
 *
 * @h: Linked list
 * Return: Number of its consisted elements
 */
size_t list_len(const list_t *h)
{
	list_t *current = NULL;
	size_t many_elements = 0;

	current = malloc(sizeof(list_t));
	current = (list_t *) h;

	while (current)
	{
		many_elements++;
		current = current->next;
	}

	free(current);
	return (many_elements);
}
