#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: A pointer to a string to be printed between args.
 * @n: The number of strings to be passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *point;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		point = va_arg(valist, char*);
		if (point != NULL)
			printf("%s", point);
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
