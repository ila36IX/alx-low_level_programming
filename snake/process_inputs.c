#include "snake.h"

/**
 * process_input - this function is triggered whenever
 * an event is happend
 *
 * @running: Pointer to boolen varaible that will be set 
 * to false if event of close/kill the app is triggered
 */
void process_input(bool *running)
{
	SDL_Event e;
	while (SDL_PollEvent(&e))
	{
		if (e.type == SDL_QUIT)
			(*running) = false;

		if (e.type == SDL_KEYDOWN)
		{
			if (strcmp(pressed_key(e), "Escape") == 0)
				(*running) = false;
			if (e.key.keysym.sym == SDLK_UP)
				set_snake_heading("up");
			if (e.key.keysym.sym == SDLK_DOWN)
				set_snake_heading("down");
			if (e.key.keysym.sym == SDLK_LEFT)
				set_snake_heading("left");
			if (e.key.keysym.sym == SDLK_RIGHT)
				set_snake_heading("right");
		}
	}


}

/**
 * pressed_key - Get pressed key
 *
 * @e: is the SDL event that changed while app is running
 * return: String representation of pressed key
 */
const char *pressed_key(SDL_Event e)
{
	const char *key = SDL_GetKeyName(e.key.keysym.sym);
	return (key);
}
