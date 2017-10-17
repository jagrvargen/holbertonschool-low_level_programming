#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints a struct dog.
 *
 * @d: A pointer to a struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("%s\n", d->name);
	printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("%s\n", d->owner);
}
