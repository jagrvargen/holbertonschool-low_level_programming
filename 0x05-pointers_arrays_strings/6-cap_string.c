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
	int j;
	int len;
	char punc[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', ' ', '\n'};

	for (len = 0; punc[len] != '\n';)
		len++;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (_islower(s[0]))
			s[0] -= 'a' - 'A';
		for (j = 0; j <= len; j++)
		{
			if (s[i] == punc[j] && _islower(s[i + 1]))
				s[i + 1] -= 'a' - 'A';
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
