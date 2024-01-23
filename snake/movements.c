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
 * Return: true if it's heading in the specified direction, 
 * Or false if not.
 * */
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
 * On of those (left, right, up, down)
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
