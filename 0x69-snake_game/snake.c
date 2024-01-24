#include "snake.h"

/**
 * main - the opening function
 * Return: 0 in seccess
 */
int main(void)
{
	TTF_Init();
	bool running = setup();

	while (running)
	{
		process_input(&running);
		render();
	}
	destroy_window();
	free_snake_body(head);
	free(egg);
	return (0);
}
