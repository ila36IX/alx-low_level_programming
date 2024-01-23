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
			if (e.key.keysym.sym == SDLK_ESCAPE)
				(*running) = false;
			hondle_pressed_key(e);
		}
	}

}

/**
 * hondle_pressed_key - hondle the events of keyboard inputs
 *
 * @e: Struct consistes of the pressed key details
 */
void hondle_pressed_key(SDL_Event e)
{
	if (e.key.keysym.sym == SDLK_UP)
	{
		if (!its_heading("down"))
			set_snake_heading("up");
	}
	if (e.key.keysym.sym == SDLK_DOWN)
	{
		if (!its_heading("up"))
			set_snake_heading("down");
	}
	if (e.key.keysym.sym == SDLK_LEFT)
	{
		if (!its_heading("right"))
			set_snake_heading("left");
	}
	if (e.key.keysym.sym == SDLK_RIGHT)
	{
		if (!its_heading("left"))
			set_snake_heading("right");
	}
	if (e.key.keysym.sym == SDLK_r)
		restart();
	if (e.key.keysym.sym == SDLK_a)
	{
		throw_food();
		printf("%s\n",get_snake_heading());
	}

}
