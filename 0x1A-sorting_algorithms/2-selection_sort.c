#include "sort.h"

/**
 * selection_sort - An implementation of the selection sort algorithm.
 *
 * @array: An array of integers
 * @size: A unsigned integer value
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min;
	int hold;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		hold = array[min];
		array[min] = array[i];
		array[i] = hold;
		if (array[min] != array[i])
			print_array(array, size);
	}
}
