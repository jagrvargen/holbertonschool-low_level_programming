#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: The first pointer to an integer as parameter.
 *
 * @b: The second pointer to an integer as parameter.
 *
 * Return - void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
