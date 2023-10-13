#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: Head of the DLL
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = NULL;
	size_t i = 0;

	if (h == NULL)
	return (0);

	current = (dlistint_t *) h;
	while(current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}

