#include <stdio.h>

/**
 * main - Entry point
 *
 * void - takes no arguments
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
