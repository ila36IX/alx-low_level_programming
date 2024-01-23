#include "snake.h"

void throw_food()
{
	if (egg == NULL)
		egg = malloc(sizeof(SDL_Rect));

	egg->x = random() % (SCREEN_WIDTH - egg_weight);
	egg->y = random() % (SCREEN_HEIGHT - egg_weight);

	printf("(%i, %i)\n", egg->x, egg->y);

	egg->w = egg->h = egg_weight;

}

void throw_food_if_eaten()
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
