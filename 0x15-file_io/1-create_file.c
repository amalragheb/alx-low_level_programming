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
	int o, w, length = 0;

	if (filename == NULL) /*this is a comment*/
		return (-1);
	/*this is comment*/
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	/*a new comment*/
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1); /*return*/
}
