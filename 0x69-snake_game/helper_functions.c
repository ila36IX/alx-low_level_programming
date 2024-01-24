#include "snake.h"

/**
 * print_err - print the error massage based
 * on the failure type
 *
 * @error_msg: Is the error to print to stderr
 */
void print_err(char *error_msg)
{
	fprintf(stderr, "%s\n", error_msg);
	fprintf(stderr, "\t-> %s\n", SDL_GetError());
}

/**
 * new_snake - make new snake and bury the dead one if exist
 *
 * @length: the length of the new snake
 */
void new_snake(int length)
{
	int i;

	if (head)
		free_snake_body(head);

	head = grow_snake(NULL);
	set_snake_heading("right");

	for (i = 0; i < length; i++)
		grow_snake(&head);
}

/**
 * restart - new snake will born in the middle of the screen
 */
void restart(void)
{
	head->piece->x = SCREEN_WIDTH / 2;
	head->piece->y = SCREEN_HEIGHT / 2;

	new_snake(100);
}

/**
 * collision - Detects whether the snake has collided with itself.
 *
 * @h: Pointer to snake head
 * Return: true if collision is detected, indicating the game should end.
 *   - false if no collision is detected.
 */
bool collision(snake_body *h)
{
	int headX = head->piece->x;
	int headY = head->piece->y;

	h = h->next;

	while (h)
	{
		if (headX == h->piece->x && headY == h->piece->y)
		{
			playing = false;
			SDL_RenderFillRect(screen, head->piece);
			begine_message_time = SDL_GetTicks();
			return (true);
		}
		h = h->next;
	}
	return (false);
}
