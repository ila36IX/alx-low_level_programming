#include "lists.h"

/**
 * get_dnodeint_at_index - nth node of a dlistint_t linked list
 *
 * @head: Address of the head of the node
 * @index: Index of the desire node
 * Return: Address of the node, or NULL if it's out of range
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;

	current = head;
	while (current != NULL && index != 0)
	{
		index--;
		current = current->next;
	}
	if (index == 0)
	return (current);
	else
	return (NULL);
}
