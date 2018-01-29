#include "sort.h"

/**
 * partition - A partitioning algorithm.
 *
 * @array: An array of integers.
 * @low: An unsigned integer value.
 * @high: An unsigned integer value.
 *
 * Return: an integer that is the partition of the calling quicksort
 */
size_t partition(int *array, int low, int high)
{
	int pivot;
	int i, j;
	int temp;

	pivot = array[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (array[i] != array[j])
				print_array(array, 10);
			i += 1;
		}
	}
	temp = array[i];
	array[i] = array[high];
	array[high] = temp;
	if (array[i] != array[high])
		print_array(array, 10);
	return (i);
}

/**
 * q_sort - A helper function for quicksort to allow for passing low & high
 *
 * @array: An array of integers
 * @low: the lowest index number being sorted
 * @high: the highest index number being sorted
 *
 * Return: void
 */
void q_sort(int *array, int low, int high)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high);
		q_sort(array, low, p - 1);
		q_sort(array, p + 1, high);
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
	q_sort(array, low, high);
}
