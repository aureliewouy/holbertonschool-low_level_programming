#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: the filename
 * @letters: the number of letters to read
 *
 * Return: the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr, len;
	char *c;

	if (!filename || letters == 0)
		return (0);
	c = malloc(letters * sizeof(char));
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(c);
		return (0);
	}
	len = read(fd, c, letters);
	if (len == -1)
	{
		free(c);
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, c, len);
	close(fd);
	if (wr == -1 || wr != len)
	{
		free(c);
		return (0);
	}
	free(c);
	return (len);
}
