#include "snake.h"

int SCREEN_WIDTH = 640;
int SCREEN_HEIGHT = 480;
SDL_Window *window = NULL;
SDL_Renderer *screen = NULL;
Uint32 last_frame_time = 0;
direx snake_heading = {1, 0};
snake_body *head = NULL;
