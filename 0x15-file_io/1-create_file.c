#include "holberton.h"

/**
 * create_file - Creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[len])
	{
		len++;
	}

	wr = write(fd, text_content, len);
	if (wr == -1 || wr != len)
		return (-1);
	close(fd);
	return (1);
}
