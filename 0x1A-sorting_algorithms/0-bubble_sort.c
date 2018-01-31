#include "sort.h"

/**
 * bubble_sort - sorts an array of integers.
 *
 * @array: An array of integers.
 * @size: An unsigned integer value.
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int swap_mode = 1;
	int temp;
	size_t i;

	if (array == NULL)
		return;
	while (swap_mode != 0)
	{
		swap_mode = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_mode = 1;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
