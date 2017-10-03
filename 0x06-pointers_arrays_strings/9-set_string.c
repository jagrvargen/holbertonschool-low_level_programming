#include "holberton.h"

/**
 * set_string - Sets the value of a pointer to a char
 *
 * @s: A pointer to a pointer
 * @to: A pointer to a char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = &*to;
}
