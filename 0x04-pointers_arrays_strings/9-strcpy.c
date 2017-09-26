#include "holberton.h"

/**
 * _strcpy - Copies a string, including the terminating byte to the buffer
 * dest.
 * @dest: target buffer.
 * @src: source buffer.
 *
 * Return: a pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + j) = *(src + i);
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}
