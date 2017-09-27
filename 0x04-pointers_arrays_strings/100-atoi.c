#include "holberton.h"

int place_count(char *p);

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: A pointer to a string as an argument.
 *
 * Return: An integer, 0 if no numbers in string.
 *
 */
int _atoi(char *s)
{
	unsigned int sign;
	unsigned int multiplier;
	int negatives;
	unsigned int total;

	negatives = 0;
	sign = 1;
	if (*s == NULL)
		return (0);
	while (!(*s >= '0' && *s <= '9')) /* Iterate string until reach nums */
	{
		if (*s == '-')
		{
			negatives++; /* Count minuses */
		}
		s++;
	}
	if (!(*s >= '0' && *s <= '9'))
		return (0);
      	if (negatives % 2 == 1)
		sign = -1; /* Determines if num is negative */
	multiplier = place_count(s);
	total = 0;
	while (*s >= '0' && *s <= '9')
	{
		total = total + (*s - '0') * multiplier;
		multiplier /= 10;
		s++;
	}
	total *= sign;
	return (total);
}

/**
 * place_count - counts number of digits and returns 10 base multiplier
 * @p: Pointer to a saved place in s.
 * Return: integer
 */
int place_count(char *p)
{
	int place;
	unsigned int multiplier;

	place = 0;
	while (*p >= '0' && *p <= '9')
	{
		place++;
		p++;
	}
	place--;
	multiplier = 1;
	while (place > 0)
	{
		multiplier *= 10;
		place--;
	}
	return (multiplier);
}
