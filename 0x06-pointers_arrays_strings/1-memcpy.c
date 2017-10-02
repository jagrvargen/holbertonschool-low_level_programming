#include "holberton.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 *
 * @dest: Pointer to chars.
 * @src: Pointer to chars.
 * @n: Number of bytes to be copied in form of unsigned int.
 *
 * Return: Pointer to set of chars.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
