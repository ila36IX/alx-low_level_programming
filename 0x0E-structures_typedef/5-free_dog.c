#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 *
 * @d: Pointer to dog_t type variable
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if(dog_t)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
