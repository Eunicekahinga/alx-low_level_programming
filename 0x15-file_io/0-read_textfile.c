#include "main.h"

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters to be read and prrinted
 * Return: number of letters else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int new;
	int letterLength, writtenChars;
	char *bufferS;

	if (filename == NULL)
		return (0);
	bufferS = malloc(sizeof(char) * (letters));

	if (bufferS == NULL)
		return (0);

	new = open(filename, O_RDONLY);

	if (new == -1)
	{
		free(bufferS);
		return (0);
	}

	letterLength = read(new, bufferS, letters);
	if (letterLength == -1)
	{
		free(bufferS);
		close(new);
	}
	writtenChars = write(STDOUT_FILENO, bufferS, letterLength);
	free(bufferS);
	close(new);
	if (writtenChars != letterLength)
		return (0);
	return (letterLength);
}
