#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: pointer to the file name
 * @text_content: string to be appended to the end of the file
 *
 * Return: -1 - if filename = NULL, or funtion fails, or file does not
 * exist or if user do not have the required permissions to write the file
 * Otherwise - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
