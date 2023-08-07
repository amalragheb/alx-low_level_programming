#include "main.h"

/**
 *append_text_to_file - appends text to a file
 *@filename: file to write into
 *@text_content: the text to write
 *Return: -1 on failure, 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opening, writing, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	opening = open(filename, O_WRONLY | O_APPEND);
	writing = write(opening, text_content, len);

	if (opening == -1 || writing == -1)
		return (-1);

	close(opening);
	return (1);
}
