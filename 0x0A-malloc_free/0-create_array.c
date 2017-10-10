#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a
 * specific char.
 *
 * @size: An unsigned integer value
 * @c: A char
 *
 * Return: A pointer to an array of chars.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(*arr));
	if (arr == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
