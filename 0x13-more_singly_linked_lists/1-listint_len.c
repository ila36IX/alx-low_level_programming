#include "lists.h"

/**
 * listint_len - Number of elements in a linked listint_t list
 *
 * @h: Linked list of type listint_t
 * Return: Number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *current = NULL;
	size_t many_nodes = 0;

	if (h == NULL)
		return (0);

	current = malloc(sizeof(listint_t));

	current = (listint_t *) h;

	while (current)
	{
		current = current->next;
		many_nodes++;
	}

	free(current);
	return (many_nodes);
}
