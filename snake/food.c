#include "snake.h"
/**
 * throw_food - init food if not exist,
 * and give it a random position in the screen
 */
void throw_food(void)
{
	if (egg == NULL)
		egg = malloc(sizeof(SDL_Rect));

	egg->x = random() % (SCREEN_WIDTH - egg_weight);
	egg->y = random() % (SCREEN_HEIGHT - egg_weight);

	egg->w = egg->h = egg_weight;
}

/**
 * throw_food_if_eaten - detect if food has been eaten
 * by the snake (snake head is collide with food segment)
 * and change its position
 */
void throw_food_if_eaten(void)
{
	int x = head->piece->x;
	int y = head->piece->y;
	int w = egg->w;

	bool x_alignment = x >= egg->x && x <= egg->x + w;
	bool x_alignment1 = x + WEIGHT >= egg->x && x + WEIGHT <= egg->x + w;
	bool y_alignment = y >= egg->y && y <= egg->y + egg->w;
	bool y_alignment2 = y + WEIGHT >= egg->y && y + WEIGHT <= egg->y + w;

	if ((x_alignment && y_alignment) || (x_alignment1 && y_alignment2))
	{
		throw_food();
		grow_snake(&head);
	}
}
