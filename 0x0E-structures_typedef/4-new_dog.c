#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog struct type
 *
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Pointer to the new created got_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;
	dog_t *p;

	p = &d;

	d.name = name;
	d.age = age;
	d.owner = owner;

	return (p);
}
