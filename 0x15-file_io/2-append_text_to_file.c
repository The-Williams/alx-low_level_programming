#include "main.h"

/**
 * append_text_to_file - Append the text at end of file.
 * @filename: Pointer to name of file.
 * @text_content: String to add to end of file.
 *
 * Return: When filename is NULL or function fails - -1.
 *         When file does not exist user does not have write permissions - -1.
 *         Otherwise - 1.
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
