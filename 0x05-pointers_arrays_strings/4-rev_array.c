#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: A pointer to first integer in array.
 * @n: An integer for number of elements in array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int len;

	temp = 0;
	len = (n - 1) / 2;
	n -= 1;
	for (i = 0; i < len; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
