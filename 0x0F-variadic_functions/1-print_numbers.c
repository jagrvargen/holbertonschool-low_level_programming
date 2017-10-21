#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * @separator: A pointer to a constant string.
 * @n: An unsigned integer value indicating argument number.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int j;

	if (n == 0)
		return;
	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(valist, int);
		printf("%d", j);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
