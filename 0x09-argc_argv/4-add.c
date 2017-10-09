#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers. If a non-integer is entered, prints 'Error'
 * and returns 1.
 *
 * @argc: An integer value.
 * @argv: A pointer to an array of strings
 *
 * Return: 0 if success, 1 if failure.
 */
int main(int argc, char *argv[])
{
	int i;
	long sum;

	sum = 0;
	i = 0;
	if (argc == 0)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(isdigit(strtol(argv[i], argv, 10))))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += strtol(argv[i], argv, 10);
		}
		printf("%ld\n", sum);
	}
	return (0);
}
