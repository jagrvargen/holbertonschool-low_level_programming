#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[5];
	int array2[6];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);

	array2[0] = 0;
	array2[1] = 1;
	array2[2] = 400;
	array2[3] = -1;
	array2[4] = -20;
	array2[5] = 2000;
	print_array(array2, 6);
	return (0);
}
