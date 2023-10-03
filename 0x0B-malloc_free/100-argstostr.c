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
	int totalLength = 0, i, index = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			while (*av[i])
			{
				totalLength++;
				av[i]++;
			}
			totalLength++;
		}
	}

	result = (char *)malloc(totalLength + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			while (*av[i])
			{
				result[index++] = *av[i]++;
			}
			result[index++] = '\n';
		}
	}
	result[index] = '\0';
	return (result);
}
