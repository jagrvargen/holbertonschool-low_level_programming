#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc. If fails, causes normal
 * process termination with exit value 98.
 *
 * @b: A integer value to determine size of memory allocation.
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
