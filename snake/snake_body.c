#include "snake.h"

/**
 * init_center - Initialize the snake head, and put it
 * in the center of the screen
 *
 * @new_head: the new head that will be put in the center
 */
void init_center(snake_body *new_head)
{
	new_head->piece->x = SCREEN_WIDTH / 2;
	new_head->piece->y = SCREEN_HEIGHT / 2;
	new_head->prev = NULL;
}

/**
 * add_new_tail - add new tail in the end of the snake
 *
 * @h: head of the snake
 * @new_tail: new tail that will be added in the end
 */
void add_new_tail(snake_body **h, snake_body *new_tail)
{
	snake_body *current;

	if (*h)
	{
		current = *h;
		while (current->next)
			current = current->next;

		new_tail->piece->x = current->piece->x - WEIGHT;
		new_tail->piece->y = current->piece->y;

		current->next = new_tail;
	};
	new_tail->prev = current;
}

/**
 * grow_snake - adds a new tail (node) to snake
 *
 * @h: Pointer to head of the snake
 * Return: The address of the new element, or NULL if it failed
 */
snake_body *grow_snake(snake_body **h)
{
	snake_body *new_segment = NULL;
	SDL_Rect *rect = NULL;

	new_segment = (snake_body *) malloc(sizeof(snake_body));
	rect = (SDL_Rect *) malloc(sizeof(SDL_Rect));
	if (new_segment == NULL || rect == NULL)
	{
		fprintf(stderr, "Failed to allocate the snake body piece\n");
		return (NULL);
	}
	rect->w = WEIGHT;
	rect->h = WEIGHT;
	new_segment->piece = rect;
	new_segment->next = NULL;

	h ? add_new_tail(h, new_segment) : init_center(new_segment);

	return (new_segment);
}


/**
 * free_snake_body - Frees the alocated memory for the snake body
 *
 * @h: Head of the snake
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

