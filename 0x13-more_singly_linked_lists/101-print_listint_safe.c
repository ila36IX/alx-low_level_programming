#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a listint_t list
 *
 * @head: Linked list of type lisint_t
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0, j = 0, k = 0, ts = 0;
	listint_t *slow, *fast, *temp;

	if (head == NULL)
		printf("0\n"), exit(98);
	slow = (listint_t *) head;
	fast = (listint_t *) head;
	while (fast && slow && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			ts = 1;
			for (j = 1; fast->next != slow; j++)
				fast = fast->next;
			slow = (listint_t *)head, fast = (listint_t *)head;
			for (; k < j; k++)
				fast = fast->next;
			while (1)
			{
				fast = fast->next, slow = slow->next;
				if (fast->next == slow->next)
				{
					temp = slow->next, fast->next = NULL;
					break;
				}
			}
			break;
		}
	}
	while (head)
	{
		if (head == NULL)
			(void)exit(98);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next, i++;
	}
	(ts == 1) ? printf("-> [%p] %d\n", (void *)temp, temp->n) : 1 == 1;
	return (i);
}
