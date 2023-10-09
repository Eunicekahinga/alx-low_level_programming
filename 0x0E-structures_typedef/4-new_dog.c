#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Success else NULL
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *nameCopy;
	char *ownerCopy;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	nameCopy = strdup(name);
	ownerCopy = strdup(owner);

	if (nameCopy == NULL || ownerCopy == NULL)
	{
		free(nameCopy);
		free(ownerCopy);
		free(newDog);
		return (NULL);
	}

	newDog->name = nameCopy;
	newDog->age = age;
	newDog->owner = ownerCopy;

	return (newDog);
}
