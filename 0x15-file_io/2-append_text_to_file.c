#include "main.h"

/**
 *append_text_to_file - appends text to a file
 *@filename: file to write into
 *@text_content: the text to write
 *Return: -1 on failure, 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, status, words = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;

		status = write(file, text_content, words);
		if (status == -1)
			return (-1);
	}

	close(file);
	return (1);
}
