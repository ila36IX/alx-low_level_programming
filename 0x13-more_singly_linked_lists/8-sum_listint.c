#include "lists.h"

/**
 * sum_listint - Calculate the sum of a data list
 *
 * @head: Pointer to the first node in list
 * Return: Sum of data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);
	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
