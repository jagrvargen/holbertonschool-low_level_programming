#include "search_algos.h"

/**
 * linear_search - An implementation of the linear search algorithm.
 *
 * @array: A pointer to an array of integers.
 * @size: An unsigned integer value which is the size of the array.
 * @value: The integer value to be searched for.
 *
 * Return: The index of the integer if found, -1 otherwise.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int) size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
