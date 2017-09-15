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
	int l;
	int m;
	int n;

	i = 0;
	j = 0;
	while (i <= 99)
	{
		while (j < 99)
		{
			j++;
			k = i / 10;
			l = i % 10;
			m = j / 10;
			n = j % 10;
			putchar(k +'0');
			putchar(l + '0');
			putchar(' ');
			putchar(m + '0');
			putchar(n + '0');
			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
		}
		j = i + 1;
		i++;
	}
	putchar('\n');
	return (0);
}
