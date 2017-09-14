#include <stdio.h>

/**
 * main - Entry point
 *
 * void - takes no arguments
 *
 * Return: Always 0: (Success)
 *
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	j = 97;
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
