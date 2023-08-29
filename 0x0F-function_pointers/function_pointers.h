#ifndef _FUNCTIONS_POINTERS_H_
#define _FUNCTIONS_POINTERS_H_
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* _FUNCTIONS_POINTERS_H_ */
