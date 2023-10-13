#include "lists.h"

/**
 * sum_dlistint -  The sum of all the data (n) of a dlistint_t linked list
 *
 * @head: THe head of the DLL
 * Return: Sum of its element, or 0 if it empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int int_sum = 0;

	if (head == NULL)
	return (0);
	
	while(current != NULL)
	{
		int_sum += current->n;
		current = current->next;
	}
	return (int_sum);

}
