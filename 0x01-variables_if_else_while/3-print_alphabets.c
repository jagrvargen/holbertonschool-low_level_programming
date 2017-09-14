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
	int j;
	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	j = 65;
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
