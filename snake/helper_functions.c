#include "snake.h"


/**
 * print_err - print the error massage based
 * on the failure type
 *
 * @error_msg: Is the error to print to stderr
 */
void print_err(char *error_msg)
{
	fprintf(stderr, "%s\n", error_msg);
	fprintf(stderr, "\t-> %s\n", SDL_GetError());
}
