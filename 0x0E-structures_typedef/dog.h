#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - Defines three elements
 * @name: first element
 * @age: second element
 * @owner: third element
 *
 * Description: three elements of struct dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;

} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
