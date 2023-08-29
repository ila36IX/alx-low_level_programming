#include "lists.h"

/**
 * delete_loop - Removes the loop unlimited loop
 * @head: Pointer to a pointer to first node
 *
 *  Return: Nothing
 */
void delete_loop(listint_t **head)
{
	listint_t *slow = *head, *fast = *head;
	listint_t *loop_begin = NULL;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			loop_begin = *head;
			while (loop_begin != slow)
			{
				loop_begin = loop_begin->next;
				slow = slow->next;
			}
			break;
		}
	}
	if (loop_begin)
		fast->next = NULL;
}

/**
 * free_listint_safe - Free linked list, Handle the unlimeted loop
 * if it exist.
 * @h: Pointer to a pointer to start of list
 *
 * Return: Number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	int loop;
	size_t i = 0;
	listint_t *slowing = *h, *fasting = *h;
	listint_t *current = *h, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (slowing && fasting && fasting->next)
	{
		slowing = slowing->next;
		fasting = fasting->next->next;
		if (slowing == fasting)
			loop = 1;
	}

	if (loop)
		delete_loop(h);


	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
		i++;
	}

	*h = (NULL);
	return (i);
}
