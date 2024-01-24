#include "snake.h"

int SCREEN_WIDTH = 640;
int SCREEN_HEIGHT = 480;
SDL_Window *window = NULL;
SDL_Renderer *screen = NULL;
SDL_Surface *serf;
Uint32 last_frame_time = 0;
direx snake_heading = {1, 0};
snake_body *head = NULL;
SDL_Rect *egg = NULL;
int egg_weight = 20;
bool playing = true;
int begine_message_time;

/**
 * setup - setup the game envirement
 *   
 * Return: true if everything is initialised properly false on failure
 */
bool setup(void)
{
	if (!init_window())
		return (false);

	srandom(time(NULL));
	throw_food();
	new_snake(40);
	return (true);
}

