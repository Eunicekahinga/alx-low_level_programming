#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - a function that returns the word count
 * @str: the string
 * Return: The count
 *
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
	}
	return (count);
}

/**
 * strtow - A function that splits a string
 * @str: A string
 * Return: A pointer to strings or NULL
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j, length = 0, wcount = 0, start = 0, num;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = count_words(str);

	words = (char **)malloc((num + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (start == i)
				continue;
			start = i;

			while (str[i] != ' ' && str[i] != '\0')
				i++;

			length = i - start;
			words[wcount] = (char *)malloc((length + 1) * sizeof(char));
			if (words[wcount] == NULL)
			{
				for (j = 0; j < wcount; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			strncpy(words[wcount], str + start, length);
			words[wcount][length] = '\0';
			wcount++;
		}
	}
	words[wcount] = NULL;
	return (words);
}
