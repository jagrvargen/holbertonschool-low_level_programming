#include "function_pointers.h"

/**
 * print_name - Prints a name.
 *
 * @name: A pointer to a string.
 * @f: A pointer to a function.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
