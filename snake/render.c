#include "snake.h"

/**
 * wait - stop the excuation to control the frame rate
 */
void wait(void)
{
	int delay = FRAME_RATE - (SDL_GetTicks() - last_frame_time); 

	if (delay > 0 && delay <= FRAME_RATE)
		SDL_Delay(delay * 1.2);

	last_frame_time = SDL_GetTicks();
}



/**
 * _move - Meka square object move an amount of pixels par second
 *
 * @square: The object that will be move
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
	// TODO: You have to emplement this!
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

		h->piece->x = prev_x;
		h->piece->y = prev_y;

		prev_x = _prev_x;
		prev_y = _prev_y;
		h = h->next;
	}
}

/*
 * render - Render objects to the screen
 */
void render(void)
{
	snake_body *curr = head;
	int i = 0;
	wait();
	SDL_SetRenderDrawColor(screen, 0xFF, 0xFF, 0xFF, 0x00);
	SDL_RenderClear(screen);
	
	move(head);

	throw_food_if_eaten();

	while (curr)
	{
		SDL_RenderFillRect(screen, curr->piece);
		SDL_SetRenderDrawColor(screen, 0x00, 0x00, 0x00, 0x00);
		curr = curr->next;
		i++;
	}
	SDL_RenderFillRect(screen, egg);
	SDL_RenderPresent(screen);
}
