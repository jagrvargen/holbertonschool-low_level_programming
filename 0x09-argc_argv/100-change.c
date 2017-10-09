#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the minimum number of coins needed to make change for an
 * amount of money.
 *
 * @argc: An integer value
 * @argv: A pointer to an array of strings
 *
 * Return: An integer value.
 */
int main(int argc, char *argv[])
{
	int count;
	int num;

	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	printf("num is %d\n", num);
	if (num < 0)
		printf("%d\n", 0);
	while (num > 0)
	{
		if (num / 25 >= 0)
		{
			count += num / 25;
			num /= 25;
		}
		else if (num / 10 >= 0)
		{
			count += num / 10;
			num /= 10;
		}
		else if (num / 5 >= 0)
		{
			count += num / 5;
			num /= 5;
		}
		else if (num / 2 >= 0)
		{
			count += num / 2;
			num /= 2;
		}
		else
		{
			count += num / 1;
			num = 0;
		}
	}
	printf("%d\n", count);
	return (0);
}
