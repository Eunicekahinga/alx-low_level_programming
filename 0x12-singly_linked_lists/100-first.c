#include "lists.h"
#include <stdio.h>
void  __attribute__((constructor)) firstPrinted(void);

/**
 * firstPrinted - function printed first
 *
 * Return: void
 */
void  __attribute__((constructor)) firstPrinted(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
