#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


int create_file(const char *filename, char *text_content)
{
	int file, written, length;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;

		written = write(file, text_content, length);
		if (written == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
