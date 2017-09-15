#include <stdio.h>

/**
 * main - Entry point
 *
 * void - does not accept arguments
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 55; i++)
	{
		j = 49;
		for (; j <= 56; j++)
		{
			k = 50;
			for (; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					break;
				else {
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
