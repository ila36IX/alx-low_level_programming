#include "snake.h"


/**
 * set_snake_heading - set the heading of the snake
 *
 * @direct: String representing the desired heading
 */
void set_snake_heading(char *direct)
{
	if (strcmp(direct, "up") == 0)
		snake_heading = (direx) {0, -1};
	else if (strcmp(direct, "down") == 0)
		snake_heading = (direx) {0, 1};
	else if (strcmp(direct, "left") == 0)
		snake_heading = (direx) {-1, 0};
	else if (strcmp(direct, "right") == 0)
		snake_heading = (direx) {1, 0};
}

/**
 * its_heading - Check if the snake heading is in a certain direction
 *
 * @dirc: String representing the heading that will be checked,
 * whether the snake is heading in it or not.
 * Return: true if it's heading in the specified direction
 * Or false if not.
 */
bool its_heading(char *dirc)
{
	if (strcmp(get_snake_heading(), dirc) == 0)
		return (true);
	return (false);
}

/**
 * get_snake_heading - Get the current heading of the snake
 *
 * Return: String representing the current heading
 * One of those (left, right, up, down)
 */
char *get_snake_heading(void)
{
	short dirX = snake_heading.x;
	short dirY = snake_heading.y;

	if (dirX == 0 && dirY == -1)
		return ("up");
	if (dirX == 0 && dirY == 1)
		return ("down");
	if (dirX == -1 && dirY == 0)
		return ("left");
	else
		return ("right");
}

/**
 * _move - Meka square object move an amount of pixels par second
 *
 * @obj: The object that will be move
 * @dest: Destance that the Object will move
 * Return: The object in the updated position
 */
void _move(SDL_Rect *obj, float dest)
{
	obj->x += dest * snake_heading.x;
	obj->y += dest * snake_heading.y;
	if (obj->x > SCREEN_WIDTH)
		obj->x = 0;
	if (obj->x < 0)
		obj->x = SCREEN_WIDTH;
	if (obj->y > SCREEN_HEIGHT)
		obj->y = 0;
	if (obj->y < 0)
		obj->y = SCREEN_HEIGHT;
	SDL_RenderFillRect(screen, head->piece);
	SDL_SetRenderDrawColor(screen, 0xFF, 0x00, 0x00, 0x00);
	collision(head);
	/* TODO: You have to emplement this! */
}

/**
 * move - Make the snake move freely
 * @h: Pointer to the snake h[ead]
 */
void move(snake_body *h)
{
	int prev_x = h->piece->x;
	int prev_y = h->piece->y;
	int _prev_x;
	int _prev_y;

	_move(h->piece, WEIGHT);
	h = h->next;

	while (h)
	{
		_prev_x = h->piece->x;
		_prev_y = h->piece->y;
		SDL_RenderFillRect(screen, h->piece);
		SDL_SetRenderDrawColor(screen, 0x00, 0x00, 0x00, 0x00);

		h->piece->x = prev_x;
		h->piece->y = prev_y;

		prev_x = _prev_x;
		prev_y = _prev_y;
		h = h->next;
	}
}
