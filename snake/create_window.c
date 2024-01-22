#include "snake.h"

/**
 * init_window - Create the window and its serface
 *
 */
void init_window(void)
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
		print_err("SDL could not initialize!");

	window = SDL_CreateWindow("The snake TIM ",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH,
		SCREEN_HEIGHT,
		SDL_WINDOW_SHOWN);

	if (!window)
		print_err("Window could not be created!");

	screen = SDL_CreateRenderer(window, -1, 0);
	if (!screen)
		print_err("Renderer could not be created");
}

/**
 * destroy_window - free the allocated memory by SDL
 */
void destroy_window(void)
{
	SDL_DestroyRenderer(screen);
	SDL_DestroyWindow(window);
	SDL_Quit();
}
