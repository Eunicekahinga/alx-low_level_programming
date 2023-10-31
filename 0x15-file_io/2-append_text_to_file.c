#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, appended, length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	if (text_content != NULL)
	{

		while (text_content[length] != '\0')
			length++;

		appended = write(file, text_content, length);
	}

	if (appended == -1)
		return (-1);

	if (close(file) == -1 || length != appended)
		return (-1);

	return (1);
}
