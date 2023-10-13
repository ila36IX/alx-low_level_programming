#include "lists.h"

/**
 * dlistint_len	-  Number of elements in a linked dlistint_t list
 *
 * @h: Head of the list
 * Return: Size of the DLL
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current = (dlistint_t *) h;
	size_t i = 0;

	while (current != NULL)
	current = current->next, i++;
	return (i);
}
