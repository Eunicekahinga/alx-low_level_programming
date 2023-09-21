#include "main.h"
#include <stdio.h>

/**
 * infinite_add - the function adds two numbers
 * @n1: the number to be added
 * @n2: the number to be added
 * @r: storage buffer for the results
 * @size_r: buffer size
 * Return: result pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len1, len2, largest, index = 0, sum, carry = 0;
	char temp;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	largest = len1 > len2 ? len1 : len2;

	if (largest + 1 >= size_r)
		return (0);

	len1--;
	len2--;
	while (len1 >= 0 || len2 >= 0 || carry != 0)
	{
		sum = carry;

		if (len1 >= 0)
			sum += n1[len1--] - '0';
		if (len2 >= 0)
			sum += n2[len2--] - '0';

		carry = sum / 10;
		r[index++] = sum % 10 + '0';
	}

	r[index] = '\0';

	for (i = 0; i <= (index - 1) / 2; i++)
	{
		temp = r[i];
		r[i] = r[index - 1 - i];
		r[index - 1 - i] = temp;
	}
	return (r);

}

/**
 * _strlen - calculate string length
 *
 * @str: string
 * Return:string length
 */
int _strlen(char *str)
{
	int j, len = 0;

	for (j = 0; str[j]; j++)
		len++;

	return (len);
}
