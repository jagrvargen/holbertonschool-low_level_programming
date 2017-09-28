#include "holberton.h"

/**
 * _strncpy - copies a string up to n bytes. If length of src < n, null bytes
 * are added to fill the gap.
 *
 * @dest: a pointer to an empty string.
 * @src: a pointer to a string to be copied.
 * @n: an integer demarcating max length.
 * Return: a pointer to the new string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	for (j = 0; src[j] != '\0';)
		j++;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (n > i)
		dest[i] = '\0';
	return (dest);
}
