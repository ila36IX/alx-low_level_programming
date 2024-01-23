#include "snake.h"

int SCREEN_WIDTH = 640;
int SCREEN_HEIGHT = 480;
SDL_Window *window = NULL;
SDL_Renderer *screen = NULL;
Uint32 last_frame_time = 0;
direx snake_heading = {1, 0};
snake_body *head = NULL;
SDL_Rect *egg = NULL;
int egg_weight = 20;

/**
 * setup - setup the game envirement
 *   
 * Return: true if everything is initialised properly false on failure
 */
bool setup()
{
	int i;

	if (!init_window())
		return (false);

	srandom(time(NULL));
	throw_food(10);

	head = grow_snake(NULL);
	for (i = 0; i< 20; i++)
		grow_snake(&head);
	return (true);
}



