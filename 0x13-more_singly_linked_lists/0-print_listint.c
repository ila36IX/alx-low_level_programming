#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: Linked list of type lisint_t
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *current = NULL;
	size_t many_nodes = 0;

	if (h == NULL)
		return (0);

	current = (listint_t *) h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		many_nodes++;
	}

	return (many_nodes);
}
