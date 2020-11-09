#include "holberton.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: the name of the file
 * @text_content: The Null terminated string to add at the end of the file
 *
 * Return: 1 on success.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	fd = open(filename, O_RDWR | O_APPEND, 0664);
	if (filename == NULL)
		return (-1);
	while (text_content[len])
	{
		len++;
	}
	if (text_content != NULL)
	{
		write(fd, text_content, len);
		read(fd, text_content, len);
	}
	close(fd);
	return (1);
}
