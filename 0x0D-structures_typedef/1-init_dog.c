#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of the type struct dog.
 *
 * @d: A struct of type dog.
 * @name: A pointer to an array of chars.
 * @age: A floating point integer.
 * @owner: A pointer to an array of integers.
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
