#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings up to a max of n bytes from src.
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Integer
 *
 * Return: Pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; *(dest + i) != '\0';)
		i++;
	for (j = 0; j < n; j++)
	{
		if (*(src + j) == '\0')
		{
			*(dest + i) = *(src + j);
			break;
		}
		*(dest + i) = *(src + j);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
