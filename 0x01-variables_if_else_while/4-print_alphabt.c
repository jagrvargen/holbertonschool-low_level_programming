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
	i = 97;
	while (i <= 122)
	{
		if (i == 101)
			i++;
		else if (i == 113)
			i++;
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
