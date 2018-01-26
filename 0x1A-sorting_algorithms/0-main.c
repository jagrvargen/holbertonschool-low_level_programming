#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array2[] = {9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	size_t n2 = sizeof(array2) / sizeof(array2[0]);

	print_array(array2, n2);
	printf("\n");
	bubble_sort(array2, n2);
	printf("\n");
	print_array(array2, n2);
	return (0);
}
