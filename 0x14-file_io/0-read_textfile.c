#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 *
 * @filename: A pointer to a read only array of characters.
 * @letters: An unsigned integer value indicating number of chars to read and
 * print.
 * Return: A signed integer value indicating number of chars printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char buf[letters];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	count = read(fd, buf, letters);
	if (count == -1)
		return (0);
	write(1, buf, count);

	buf[letters - 1] = '\0';
	close(fd);

	return (count);
}
