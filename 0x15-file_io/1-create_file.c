#include "main.h"


/**
 * create_file - a function that creates a file
 *
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success OR -1 on faliure
*/
int create_file(const char *filename, char *text_content)
{

	int opening, writing, i, closing;

	if (filename == NULL)
		return (-1);
	opened = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (opening == -1)
		return (-1);
	if (text_content == NULL)
	{
		i = 0;
	}
	else
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;
	}
	writing = write(opening, text_content, i);
	if (writing == -1)
		return (-1);
	closing = close(opening);
	if (closing == -1)
		return (-1);
	return (1);
}
