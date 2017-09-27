#include "holberton.h"

/**
 * _atoi - Converts string to int
 *
 * @s: takes a pointer to a string as an argument
 * Return: an integer
 */
int _atoi(char *s)
{
	unsigned int total;
	int sign;

	sign = 1;
	total = 0;
	while(!(*s >= '0' && *s <= '9' && *s != '\0'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	if (*s == '\0')
		return (total);
	while (*s >= '0' && *s <= '9' && *s != '\0')
	{
		total = total * 10 + (*s - '0');
		s++;
	}
	return (total * sign);
}
