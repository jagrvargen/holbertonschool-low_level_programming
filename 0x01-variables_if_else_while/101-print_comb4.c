#include <stdio.h>

/**
 * main - Entry point
 *
 * void - takes no arguments
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
					break;
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i;
	}
	putchar('\n');
	return (0);
}
