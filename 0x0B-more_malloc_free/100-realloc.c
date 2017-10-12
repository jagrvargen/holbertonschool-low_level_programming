#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;
	int i;
	int len;

	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
			return (NULL);
	}
	else if (old_size == new_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
		return (NULL);
	len = _strlen(ptr);
	for (i = 0; )
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

        for (i = 0; s[i] != '\0';)
                i++;
        if (s == NULL)
                i = 0;
        return (i);
}
