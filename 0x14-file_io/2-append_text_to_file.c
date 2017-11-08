#include "holberton.h"

/**
 * append_text_to_file - Appends a text at the end of a file.
 *
 * @filename: A pointer to text file.
 * @text_content: A pointer to a string to append to end of file.
 *
 * Return: An integer 1 if success, -1 if failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, err;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (fd);
	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len] != '\0';)
		len++;
	err = write(fd, text_content, len);
	if (err == -1)
		return (err);
	err = close(fd);
	if (err == -1)
		return (-1);
	return (1);
}
