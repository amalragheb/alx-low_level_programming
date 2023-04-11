#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 * function should read and print.
 *
 * Return: actual number of letters it could read and print.
 *	0 if the file cannot be read or opened.
 *	0 if the filename is NULL.
 *	0 if write fails or does not write the expected number of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *buffers;

	if (filename == NULL)
		return (0);

	buffers = malloc(sizeof(char) * letters);
	if (buffers == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(open, buffers, letters);
	write = write(STDOUT_FILENO, buffers, read);

	if (open == -1 || read == -1 || write == -1 || write != read)
	{
		free(buffers);
		return (0);
	}

	free(buffers);
	close(open);

	return (write);
}
