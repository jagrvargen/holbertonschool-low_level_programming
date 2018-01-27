#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min;
	int hold;

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
		print_array(array, size);
	}
}
