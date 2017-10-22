#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
void print_d(va_list i);
void print_f(va_list f);
void print_c(va_list c);
void print_s(va_list s);

void print_all(const char * const format, ...)
{
	va_list valist;
	int i, j;
	print_i type[] =
		{
			{"i", print_d},
			{"f", print_f},
			{"c", print_c},
			{"s", print_s},
			{NULL, NULL}
		};
	if (format == NULL)
		return;
	va_start(valist, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (type[j].c != NULL && *(type[j].c) != format[i])
			j++;
		if (type[j].c != NULL)
		{
			type[j].print_x(valist);
			if (format[i + 1] != '\0')
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}

void print_d(va_list i)
{
	printf("%d", va_arg(i, int));
}

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

void print_s(va_list s)
{
	printf("%s", va_arg(s, char*));
}
