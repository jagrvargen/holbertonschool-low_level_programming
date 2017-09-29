#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13
 *
 * @s: A pointer to a string
 *
 * Return: pointer to a string.
 */
char *rot13(char *s)
{
	char *half1 = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char *half2 = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == half1[j])
				s[i] = half2[j];
		}
	}
	return (s);
}
