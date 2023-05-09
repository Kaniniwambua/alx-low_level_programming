#include "main.h"
#include <string.h>
/**
 * append_text_to_file - adds text at the end of the file
 * @filename: Filename pointer
 * @text_content: text to be added to the file
 * Return: return -1 if filename is NULL or no access. 1 for success
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
