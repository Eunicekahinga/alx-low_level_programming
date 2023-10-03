#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments
 * @ac: the arguments
 * @av: the new string
 * Return: pointer to new string else null
 */

char *argstostr(int ac, char **av)
{
	int totalLength = 0, i, j;
	char *result, *b;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, totalLength = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, totalLength++)
			;
		totalLength++;
	}
	totalLength++;

	result = malloc(totalLength * sizeof(char));

	if (result == NULL)
		return (NULL);

	b = result;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*result = av[i][j];
			result++;
		}
		*result = '\n';
		result++;
	}
	return (b);
}
