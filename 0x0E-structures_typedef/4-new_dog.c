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
	int m, n, o;

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	for (m = 0; name[m] != '\0'; m++)
		;
	for (n = 0; owner[n] != '\0'; n++)
		;

	nameCopy = malloc(sizeof(char) * m + 1);

	if (nameCopy == NULL)
	{
		free(newDog);
		return (NULL);
	}
	ownerCopy = malloc(sizeof(char) * n + 1);

	if (ownerCopy == NULL)
	{
		free(nameCopy);
		free(newDog);
		return (NULL);
	}
	for (o = 0; o <= m; o++)
		nameCopy[o] = name[o];
	for (o = 0; o <= n; o++)
		ownerCopy[o] = owner[o];
	newDog->name = nameCopy;
	newDog->age = age;
	newDog->owner = ownerCopy;
	return (newDog);
}
