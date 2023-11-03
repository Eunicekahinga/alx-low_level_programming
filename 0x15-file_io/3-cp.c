#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#define BUF_SIZE 1024
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

/**
 * main - a program to copy the contents of one file to another
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 * Return: 0 on success, 97 on invalid arguments, 98 on read error,
 * 99 on write error, 100 on close error
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (file_to == -1)
	{
		if (errno == EEXIST)
			file_to = open(argv[2], O_WRONLY | O_TRUNC);

		if (file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(file_from);
			return (99);
		}
	}
	while ((bytes_read = read(file_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(file_from);
			close(file_to);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
		return (98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		return (100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		return (100);
	}
	return (0);
}
