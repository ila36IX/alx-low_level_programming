#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type
 *
 * @d: The structure
 * @name: name of the dog
 * @age: How long have this dog been living
 * @owner: Who own this dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
