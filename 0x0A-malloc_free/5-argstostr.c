#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int _strlen(char *s);

/**
 * argstostr - Concatenates all the arguments of a program
 *
 * @ac: An integer value.
 * @av: A pointer to an array of pointers.
 *
 * Return: A pointer to a string.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k;
	int len;
	char *avp;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 1; av[i] != NULL; i++)
		len += _strlen(av[i] + 1);
	len++;
	avp = malloc(len * sizeof(char));
	if (avp == NULL)
		return (NULL);
	j = 1;
	k = 0;
	while (ac >= 1 && av[j] != NULL)
	{
		for (i = 0; av[j][i] != '\0'; i++)
		{
			avp[k] = av[j][i];
			k++;
		}
		avp[k] = '\n';
		k++;
		j++;
		ac--;
	}
	avp[++k] = '\0';
	return (avp);
}

/**
 * _strlen - Returns the length of a string
 *
 * @s: Takes a pointer to a char as a parameter.
 *
 * Return: returns an integer.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0';)
		i++;
	return (i);
}
