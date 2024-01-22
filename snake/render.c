#include "snake.h"

SDL_Rect square = {0, 0, WEIGHT, WEIGHT};

/**
 * wait - stop the excuation to control the frame rate
 */
void wait(void)
{
	int delay = FRAME_RATE - (SDL_GetTicks() - last_frame_time); 

	if (delay > 0 && delay <= FRAME_RATE)
		SDL_Delay(delay);

	last_frame_time = SDL_GetTicks();
}
/**
 * move - Meka square object move an amount of pixels par second
 *
 * @square: The object that will be move
 * @dest: Destance that the Object will move
 * Return: The object in the updated position
 */
void move(SDL_Rect *obj, float dest)
{
	obj->x += dest * snake_heading.x;
	obj->y += dest * snake_heading.y;
}

void _move(snake_body *h)
{
	int prev_x = h->piece->x;
	int prev_y = h->piece->y;

	move(h->piece, 1);
	h = h->next;

	while (h)
	{
		h->piece->x = prev_x;
		h->piece->y = prev_y;
		prev_x = h->piece->x;
		prev_y = h->piece->y;
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
	
	move(&square, 2);
	_move(head);
	SDL_SetRenderDrawColor(screen, 0x00, 0x00, 0x00, 0x00);
	SDL_RenderFillRect(screen, &square);


	while (curr->next)
	{
		SDL_RenderFillRect(screen, curr->next->piece);
		curr = curr->next;
		i++;
	}
	printf("many times %d\n", i);

	SDL_RenderPresent(screen);
}
