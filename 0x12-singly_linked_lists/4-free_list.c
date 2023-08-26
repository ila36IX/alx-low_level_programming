#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: Head of the list
 * Return: NOthing
 */
void free_list(list_t *head)
{

	list_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}

}
