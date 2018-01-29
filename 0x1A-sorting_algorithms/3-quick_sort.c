#include "sort.h"

/**
 * swap_n_print - Swaps to numbers in an integer array.
 *
 * @x: An integer value
 * @y: An integer value.
 * @array: An array of integers.
 * @size: An unsigned integer value.
 *
 * Return: void
 */
void swap_n_print(int *x, int *y, int *array, size_t size)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	print_array(array, size);
}

/**
 * partition - A partitioning algorithm.
 *
 * @array: An array of integers.
 * @low: An unsigned integer value.
 * @high: An unsigned integer value.
 * @size: An unsigned integer value.
 *
 * Return: an integer that is the partition of the calling quicksort
 */
size_t partition(int *array, int low, int high, size_t size)
{
	int pivot;
	int i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot && array[i + 1] > array[j])
		{
			i += 1;
			swap_n_print(&array[i], &array[j], array, size);
		}
	}
	if (array[high] < array[i + 1])
		swap_n_print(&array[high], &array[i + 1], array, size);
	return (i + 1);
}

/**
 * q_sort - A helper function for quicksort to allow for passing low & high
 *
 * @array: An array of integers
 * @low: the lowest index number being sorted
 * @high: the highest index number being sorted
 * @size: An unsigned integer value.
 *
 * Return: void
 */
void q_sort(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		q_sort(array, low, p - 1, size);
		q_sort(array, p + 1, high, size);
	}
}


/**
 * quick_sort - An implementation of the Quicksort algorithm.
 *
 * @array: An array of integers.
 * @size: An unsigned integer value indicating the size of the array.
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int low;
	int high;

	if (array == NULL || size < 2)
		return;

	low = 0;
	high = size - 1;
	q_sort(array, low, high, size);
}
