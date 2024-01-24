#ifndef __game__
#define __game__


#define _DEFAULT_SOURCE
/* Headers */
#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <SDL2/SDL_ttf.h>

#define FPS 40
#define FRAME_RATE (1000 / FPS)
#define WEIGHT 5

/**
 * struct direx - define the direction movement of the snake
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
 * struct snake_body_s - Node of linked list represnting segment of the
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
extern Uint32 last_frame_time;
extern direx snake_heading;
extern snake_body *head;
extern SDL_Rect *egg;
extern int egg_weight;
extern bool playing;
extern int begine_message_time;

/* Functions prototypes */
bool init_window(void);
void destroy_window(void);
void print_err(char *error_msg);
void process_input(bool *running);
void render(void);
void set_snake_heading(char *direct);
snake_body *grow_snake(snake_body **head);
void free_snake_body(snake_body *head);
void move(snake_body *head);
void move(snake_body *head);
void _move(SDL_Rect *, float);
void restart(void);
void throw_food(void);
void throw_food_if_eaten(void);
bool setup(void);
char *get_snake_heading(void);
bool its_heading(char *dirc);
void hondle_pressed_key(SDL_Event e);
void wait(void);
void new_snake(int length);
bool collision(snake_body *h);

#endif /*__game__*/
