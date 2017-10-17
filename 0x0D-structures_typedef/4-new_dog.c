#include "dog.h"
#include <stdlib.h>

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

	pntr = malloc(sizeof(struct dog));
	if (pntr == NULL)
		return (NULL);
	pntr->name = name;
	pntr->age = age;
	pntr->owner = owner;

	return (pntr);
}
