#include "holberton.h"

/**
 * rev_string - Reverses a string
 *
 * @s: Takes a pointer to a string as an argument
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	int temp;

	i = 1;
	while (*(s + i) != '\0')
	{
		i++;
	}

	i--;
	j = 0;
	while (j <= i)
	{
		temp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = temp;
		j++;
		i--;
	}
}
