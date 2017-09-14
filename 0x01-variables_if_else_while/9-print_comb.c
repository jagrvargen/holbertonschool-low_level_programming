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
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
			i++;
		}
		else
		{
			putchar('\n');
			i++;
		}
	}
	return (0);
}
