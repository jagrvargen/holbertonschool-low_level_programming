#include "holberton.h"

int _islower(char c);
/**
 * cap_string - Capitalizes all words in a string.
 *
 * @s: Pointer to a string.
 *
 * Return: Pointer to a string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_islower(s[0]))
			s[0] -= 'a' - 'A';
		switch (s[i])
		{
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
		case '\t':
		case ' ':
		case '\n':
			if (_islower(s[i + 1]))
				s[i + 1] -= 'a' - 'A';
			break;
		default:
			break;
		}
	}
	s[i] = '\0';
	return (s);
}

/**
 * _islower - Checks if char is lowercase
 *
 * @c: takes char as argument
 *
 * Return: an integer for true or false
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
