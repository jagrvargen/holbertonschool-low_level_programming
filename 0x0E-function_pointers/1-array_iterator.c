#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Executes a function given as a parameter on each element
 * of an array.
 *
 * @array: A pointer to an array of integers.
 * @size: A positive integer greater than 0.
 * @action: A pointer to a function.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
