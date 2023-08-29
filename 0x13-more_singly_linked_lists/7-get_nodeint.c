#include "lists.h"

/**
 * get_nodeint_at_index - The nth node of a L-list
 *
 * @head: Pointer to head of list
 * @index: Index of node starting from 0
 * Return: index'th node in list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = NULL;

	if (head == NULL)
		return (NULL);

	current = head;

	while (current && index != 0)
	{
		current = current->next;
		index--;
	}

	if (current == NULL && index != 0)
		return (NULL);

	return (current);
}
