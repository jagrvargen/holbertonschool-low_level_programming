#include "sort.h"

/**
 * shell_sort - An implementation of the Shell Sort algorithm.
 *
 * @array: An array of integers.
 * @size: An unsigned integer value.
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	int i, j, gap, temp;
	int s;

	if (array == NULL || size < 2)
		return;
	gap = 1;
	s = size;
	while (gap * 3 + 1 < s)
		gap = gap * 3 + 1;
	while (gap >= 1)
	{
		i = gap;
		j = i;
		while (i <= s - 1)
		{
			while (array[j] < array[j - gap] && j - gap >= 0)
			{
				temp = array[j];
				array[j] = array[j - gap];
				array[j - gap] = temp;
				j -= gap;
			}
			i++;
			j = i;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
