#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to the pointer char
 * a double pointer
 * @to: Pointer to the char to set the value to
 *
 * Return: void
 *
 */

void set_string(char **s, char *to)
{
	*s = to;

}
