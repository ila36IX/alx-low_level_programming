#include "snake.h"

/**
 * main - the opening function
 * Return: 0 in seccess
 */
int main()
{
	bool running = true;
	init_window();
	head = grow_snake(NULL);
	grow_snake(&head);
	grow_snake(&head);
	grow_snake(&head);
	grow_snake(&head);

	
	while (running)
	{ 
		process_input(&running);
		render();
	}
	destroy_window();
	return (0);
}
