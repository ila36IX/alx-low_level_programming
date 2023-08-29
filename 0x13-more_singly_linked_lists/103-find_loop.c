#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 *
 * @head: Pointer to the first node
 * Return: Pointer where the loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			break;
	}

	if (fast == NULL || fast->next == NULL)
		return (NULL);

	slow = head;

	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return (slow);
}
