#ifndef __SEARCH_ALGOS__
#define __SEARCH_ALGOS__

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void searching_in_array(int *array, int l, int r);
int jump_search(int *array, size_t size, int value);

#endif /* __SEARCH_ALGOS__ */
