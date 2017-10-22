#ifndef VARIADIC_FUNCS
#define VARIADIC_FUNCS
#include <stdarg.h>

typedef struct print_items
{
	char *c;
	void (*print_x)(va_list);
} print_i;

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
