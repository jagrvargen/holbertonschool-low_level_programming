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
	int i;

	i = 0;
	sign = 1;
	total = 0;
	while (!(*(s + i) >= '0' && *(s + i) <= '9' && *(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			sign *= -1;
		i++;
	}
	if (*(s + i) == '\0')
		return (total);
	while (*(s + i) >= '0' && *(s + i) <= '9' && *(s + i) != '\0')
	{
		total = total * 10 + (*(s + i) - '0');
		i++;
	}
	return (total * sign);
}
