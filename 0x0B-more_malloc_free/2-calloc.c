#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Allocates memory of nmemb elements of size size and initializes
 * values to 0.
 *
 * @nmemb: An unsigned integer value.
 * @size: An unsigned integer.
 *
 * Return: A void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (nmemb == 0 || size == 0)
		return (0);
	pointer = malloc(sizeof(size) * nmemb);
	if (pointer == NULL)
		return (NULL);
	return (pointer);
}
