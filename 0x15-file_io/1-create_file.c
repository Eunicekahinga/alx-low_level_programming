#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * create_file - creates a file
 * @filename: the name of file
 * @text_content: the content of file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, written, length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (text_content[length] != '\0')
		length++;

	written = write(file, text_content, length);

	if (close(file) == -1 || length != written)
		return (-1);
	return (1);
}
