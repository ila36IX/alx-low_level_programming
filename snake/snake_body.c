#include "snake.h"

/**
 * grow_snake - adds a new tail (node) to snake
 *
 * @head: Pointer to head of the snake
 * Return: The address of the new element, or NULL if it failed
 */
snake_body *grow_snake(snake_body **head)
{
	snake_body *current = NULL;
	snake_body *new_tail = NULL;
	SDL_Rect *segment = NULL;
	bool head_not_null = head ? true : false;

	new_tail = (snake_body *) malloc(sizeof(snake_body));
	segment = (SDL_Rect *) malloc(sizeof(SDL_Rect));

	if (new_tail == NULL || segment == NULL)
		return (NULL);

	segment->w = WEIGHT;
	segment->h = WEIGHT;

	if (head_not_null)
	{
		if (*head != NULL)
		{
			current = *head;
			while (current->next != NULL)
				current = current->next;

			segment->x = current->piece->x - WEIGHT; 
			segment->y = current->piece->y; 

			current->next = new_tail;
		}
	}
	
	if (!head_not_null)
	{
		printf("was here onec!\n");
		segment->x = SCREEN_WIDTH / 2;
		segment->y = SCREEN_HEIGHT / 2;
	}
	new_tail->next = NULL;
	new_tail->prev = current;
	new_tail->piece = segment;
	if (head_not_null)
	{
		if (*head == NULL)
			(*head) = new_tail;
	}
	return (new_tail);
}


/**
 * free_snake_body - Frees the alocated memory for the snake body
 *
 * @head: Head of the snake
 */
void free_snake_body(snake_body *h)
{
	snake_body *current = h;
	snake_body *tmp = NULL;

	while (current !=  NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp->piece);
		free(tmp);
	}
}

