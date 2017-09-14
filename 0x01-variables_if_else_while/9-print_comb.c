#include <stdio.h>

/**
 * main - Entry point
 *
 * void - no arguments accepted
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		putchar(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
