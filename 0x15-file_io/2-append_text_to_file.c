#include "main.h"

/**
 * append_text_to_file - a funcion that appends text at the end
 *                      of a file
 *
 * @filename: file to add data to
 * @text_content: text content to add to file
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL) /*this is a comment*/
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	/*A new comment*/
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1); /*final comment*/
}
