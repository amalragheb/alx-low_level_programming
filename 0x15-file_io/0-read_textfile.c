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
	ssize_t opening, writing, reading;
	char *buffer;

	if (filename == NULL)
		return (0);
	opening = open(filename, O_RDONLY);
	if (opening == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	reading = read(opening, buffer, letters);
	if (reading == -1)
		return (0);
	writing = write(STDOUT_FILENO, buffer, reading);
	if (writing == -1 || writing != reading)
		return (0);
	close(opening);
	free(buffer);
	return (writing);

}
