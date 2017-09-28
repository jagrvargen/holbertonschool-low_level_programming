#include "holberton.h"

/**
 * _strcmp - Compares two strings by ASCII calue
 *
 * @s1: Pointer to a string
 * @s2: Pointer to a string
 *
 * Return: An integer < 0 if s1 less than s2, 0 if equalm or > 0 if more than.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
			return (-(s2[i] - s1[i]));
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	else if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
		return (1);
}
