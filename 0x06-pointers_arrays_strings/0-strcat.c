#include "main.h"

/**
 * _strcat - the function concatenates two strings
 * @dest: the string to be concatenated to
 * @src: the source string to append to dest
 *
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
        int i, length = 0;

        for (i = 0; dest[i] != '\0'; i++)
        {
                length++;
        }
        for (i = 0; src[i] != '\0'; i++)
        {
                dest[length + i] = src[i];
        }
        return (dest);
i}
