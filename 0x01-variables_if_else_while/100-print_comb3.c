#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;


	k = 49;
	for (i = 48; i <= 57; i++)
	{
		j = k;
		for (; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
