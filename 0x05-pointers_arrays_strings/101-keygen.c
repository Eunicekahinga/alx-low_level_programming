#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * generatepassword - generates random password
 * for a program
 * @password: the password to be generated
 * @length: the length of password generated
 * Return: void
 */

void generatepassword(char *password, int length)
{
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	int charsetLength = sizeof(charset) - 1;

	srand(time(NULL));

	int i;

	for (i = 0; i < length; i++)
	{
		int index = rand() % charsetLength;

		password[i] = charset[index];
	}

	password[length] = '\0';
}

int main(void)
{
	int numberofPasswords = 6;
	int passwordLength = 8;
	int i;

	for (i = 0; i < numberofPasswords; i++)
	{
		char password[passwordLength + 1];

		generatepassword(password, passwordLength);

		printf("%s\n", password);
	}
	return (0);
}
