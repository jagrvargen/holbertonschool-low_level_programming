#include <stdio.h>

/**
 * main - Entry point
 *
 * void - does not accept args
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '9'; i++)
	{
		j = '0';
		for (; j <= '8'; j++)
		{
			k = i;
			for (; k <= '9'; k++)
			{
				l = j + 1;
				for (; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == '9' && j == '8' && k == '9' && l == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
