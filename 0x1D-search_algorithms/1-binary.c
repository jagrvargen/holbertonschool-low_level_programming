#include "search_algos.h"
void print_arr(int *array, int start, int end);

/**
 * binary_search - An implementation of the binary search algorithm.
 *
 * @array: A pointer to an array of integers.
 * @size: An integer value which is the size of the array.
 * @value: The integer value to be searched for.
 *
 * Return: The index of the value if found, -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	int start, mid, end;

	start = 0;
	end = (int) size - 1;
	mid = (start + end) / 2;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		print_arr(array, start, end);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;

		mid = (start + end) / 2;
	}
	return (-1);
}

/**
 * print_arr - A function to print the values of an array.
 *
 * @array: A pointer to the array of integers.
 * @start: The index of the beginning of the array.
 * @end: The index of the end of the array.
 *
 * Return: void
 */
void print_arr(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[end]);
}
