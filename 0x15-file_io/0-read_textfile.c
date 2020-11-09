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
	ssize_t fd, wr, r;
	char *c;

	if (!filename)
		return (0);
	c = malloc(letters * sizeof(char));
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(c);
		return (0);
	}
	r = read(fd, c, letters - 1);
	if (!r)
	{
		free(c);
		return (0);
	}
	c[letters - 1] = '\0';
	close(fd);
	wr = write(STDOUT_FILENO, c, letters);
	if (!wr)
	{
		free(c);
		return (0);
	}
	free(c);
	return (letters);
}
