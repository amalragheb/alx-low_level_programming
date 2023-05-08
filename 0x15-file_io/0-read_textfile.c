#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 *                to POSIX standard output.
 *
 * @filename: is the file to read
 * @letters: number of letters to read and print from file
 *
 * Return: 0 if it fails or actual number of letters it could
 *         read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

	int file;
	ssize_t rd, wr;
	char *buffer;

	/*check if file is present*/
	if (filename == NULL)
		return (0);
	/*open file*/
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	/*size of buffer from number of letters*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	/*read file*/
	rd = read(file, buffer, letters);
	/*check if read failed*/
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buffer, rd);
	/*check if write failed*/
	if (wr == -1 || rd != wr)
		return (0);

	free(buffer);

	/*close file*/
	close(file);

	return (wr);
}
}
