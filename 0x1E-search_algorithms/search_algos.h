#ifndef __SEARCH_ALGOS__
#define __SEARCH_ALGOS__

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void searching_in_array(int *array, int l, int r);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int min(int d1, int d2);
int advanced_binary(int *array, size_t size, int value);

/* Linked list prototypes */

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void free_list(listint_t *list);
listint_t *create_list(int *array, size_t size);
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif /* __SEARCH_ALGOS__ */
