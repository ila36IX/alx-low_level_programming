#include "lists.h"

/**
 * free_listint2 - Free listint_t list
 *
 * @head: Heado of a  listint_t list
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *holder = NULL;
	listint_t *current = *head;

	if (head == NULL)
		return;

	while (current)
	{
		holder = current;
		current = current->next;
		holder->n = 0;
		free(holder);
	}

	*head = NULL;
}
