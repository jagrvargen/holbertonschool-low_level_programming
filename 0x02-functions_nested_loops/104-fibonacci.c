#include "holberton.h"
#include <stdio.h>

void calc(long unsigned j, int k);

int main(void)
{
	int i;
	long unsigned int j;
	long unsigned int k;
	long unsigned fib;

	j = 1;
	k = 2;
	printf("%ld, ", j);
	printf("%ld, ", k);
	for (i = 0; i < 95; i++)
	{
		if (i < 89)
		{
			fib = j + k;
			printf("%lu, ", fib);
			if (j < k)
				j += k;
			else
				k += j;
		}
		else
		{
			calc(j, k);
		}
	}
	printf("%lu\n", j + k);
	return (0);
}

void calc(long unsigned j, long unsigned k)
{
	int sumright;
	unsigned long sumleft;

	sumright = k % 10000 + k % 10000;
	sumleft = j / 10000 + k / 10000;

	printf("%lu", sumleft);
	printf("%d\n", sumright);
}
