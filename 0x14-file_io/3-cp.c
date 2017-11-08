#include "holberton.h"
void error_handle(int err_no, ...);
/**
 * main - Copies the content of a file to another file.
 *
 * @argc: An integer indicating number of arguments passed.
 * @argv: A pointer to an array of strings.
 *
 * Return: An integer 97 for incorrect number of arguments, a 98 if file
 * from does not exist or can't be read, a 99 if write or file_to fails,
 * or a 100 if fd does not close.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_sum, write_sum, err;
	char *buf;

	if (argc != 3)
		error_handle(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_handle(98, argv[1]);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_handle(99, argv[2]);
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		error_handle(98);
	do {
		read_sum = read(file_from, buf, 1024);
		if (read_sum == -1)
			error_handle(98, argv[1]);
		write_sum = write(file_to, buf, read_sum);
		if (write_sum == -1)
			error_handle(99, argv[2]);
	} while (read_sum == 1024);
	err = close(file_from);
	if (err == -1)
		error_handle(100, file_from);
	err = close(file_to);
	if (err == -1)
		error_handle(100, file_to);
	return (0);
}

/**
 * error_handle - Prints error statement based on argument passed.
 *
 * @err_no: An integer.
 *
 * Return: void
 */
void error_handle(int err_no, ...)
{
	va_list ap;

	va_start(ap, err_no);
	if (err_no == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (err_no == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file ");
		dprintf(STDERR_FILENO, "%s\n", va_arg(ap, char *));
		exit(98);
	}
	else if (err_no == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to ");
		dprintf(STDERR_FILENO, "%s\n", va_arg(ap, char *));
		exit(99);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		dprintf(STDERR_FILENO, "%d", va_arg(ap, int));
		exit(100);
}
	va_end(ap);
}
