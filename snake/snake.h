#ifndef __game__
#define __game__

/* Headers */
#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define FPS 30
#define FRAME_RATE 1000 / FPS
#define WEIGHT 10 

/**
 * direx - define the direction movement of the snake
 *
 * @x: Direction movment in the horizontal axis 1 or 0 or -1
 * @y: Direction movment in the vertical axis 1 or 0 or -1
 */
typedef struct direx 
{
	short x;
	short y;
} direx;

/**
 * snake_body - Node of linked list represnting segment of the
 * snake body
 *
 * @piece: Segment
 * @prev: The previous node in linked list
 * @next: The next node in linked list
 */
typedef struct snake_body_s
{
    SDL_Rect *piece;
    struct snake_body_s *prev;
    struct snake_body_s *next;
} snake_body;

extern int SCREEN_WIDTH;
extern int SCREEN_HEIGHT;
extern SDL_Window *window;
extern SDL_Renderer *screen;
extern int direction_x;
extern int direction_y;
extern Uint32 last_frame_time;
extern direx snake_heading;
extern snake_body *head;

/* Functions prototypes */
void init_window(void);
void destroy_window(void);
const char *pressed_key(SDL_Event e);
void print_err(char *error_msg);
void process_input(bool *running);
void render(void);
void set_snake_heading(char *direct);
snake_body *grow_snake(snake_body **head);
void _move(snake_body *head);

#endif /*__game__*/
