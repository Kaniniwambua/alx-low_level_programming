#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: pointer to filename
 * @text_content: pointer to text to be appended
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, write_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		write_len = write(fd, text_content, len);

		if (write_len == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
