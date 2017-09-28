#include "holberton.h"

/**
 * _strcat - Appends the src string to the dest string.
 *
 * @dest: Takes pointer to string as arg.
 * @src: Takes pointer to string as arg.
 *
 * Return: A pointer to string src.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; *(dest + i) != '\0';)
		i++;
	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
