#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;
/**
 * dog - Dog ID
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: Thee owner of the dog
 *
 * Description: This structure represents information about a dog
 */
struct dog
{
	char * name;
	float age;
	char * owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

