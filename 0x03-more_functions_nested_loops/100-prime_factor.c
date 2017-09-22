#include <stdio.h>

/**
 * main - Entry point.
 *
 * void - Takes no arguments
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long i;
	unsigned long num;
	unsigned long max;

	num = 612852475143;
	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			max = i;
			num = num / i;
			i = 1;
		}
	}
	printf("%ld\n", max);
	return (0);
}
