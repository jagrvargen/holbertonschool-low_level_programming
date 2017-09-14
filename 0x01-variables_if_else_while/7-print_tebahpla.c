#include <stdio.h>

/**
 * main - Entry point
 *
 * void - takes no arguments
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
