#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);
char *_strdup(char *s);
/**
 * new_dog - Creates a new dog
 *
 * @name: A pointer to an array of chars.
 * @age: A floating point integer.
 * @owner: A pointer to an array of chars.
 *
 * Return: A pointer to a struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pntr;
	char *npntr;
	char *opntr;

	if (name == NULL)
		return (NULL);
	pntr = malloc(sizeof(struct dog));
	if (pntr == NULL)
		return (NULL);
	npntr = malloc(sizeof(char) * _strlen(name));
	if (npntr == NULL)
	{
		free(pntr);
		return (NULL);
	}
	npntr = _strdup(name);
	opntr = malloc(sizeof(char) * _strlen(owner));
	if (opntr == NULL)
	{
		free(npntr);
		free(pntr);
		return (NULL);
	}
	opntr = _strdup(owner);
	pntr->name = npntr;
	pntr->age = age;
	pntr->owner = opntr;
	return (pntr);
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

	for (i = 0; s[i] != '\0';)
		i++;
	return (i);
}

/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 *
 * @str: A pointer to a string.
 *
 * Return: A pointer to a string.
 */
char *_strdup(char *str)
{
	char *pstr;
	int len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0';)
		len++;
	len++;
	pstr = malloc(len * sizeof(*pstr));
	if (pstr == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		pstr[len] = str[len];
		len++;
	}
	pstr[len] = '\0';
	str = pstr;
	return (str);
}
