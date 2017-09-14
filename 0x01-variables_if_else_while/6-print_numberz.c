#include <stdio.h>

/**
 * main - Entry point
 *
 * void - no arguments
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
