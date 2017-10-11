#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
int _strlen(char *s);
int _putchar(char c);

/**
 * argstostr - Concatenates all the arguments of a program
 *
 * @ac: An integer value.
 * @av: A pointer to an array of pointers.
 *
 * Return: A pointer to a string.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int len;
	char *avp;

	if (ac == 0 || av == NULL)
		return (NULL);
	j = 1;
	while (ac > 1 && av[j] != NULL)
	{
		len = _strlen(av[j]);
		avp = malloc(len * sizeof(char));
		if (avp == NULL)
			return (NULL);
		for (i = 0; av[j][i] != '\0'; i++)
			_putchar(av[j][i]);
		_putchar('\n');
		j++;
		ac--;
	}
	_putchar('\0');
	return (avp);
}

/**
 * _strlen - Returns the length of a string
 *
 * @s: Takes a pointer to a char as a parameter.
 *
 * Return: returns an integer.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0';)
		i++;
	return (i);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
