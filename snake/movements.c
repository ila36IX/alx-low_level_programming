#include "snake.h"


/**
 * set_direction - set
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
