#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 *
 * @head: Head of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *tmp = NULL;

	while (current !=  NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}
