#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

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
	int sum;

	i = 1;
	sum = 0;
	if (argc == 1)
		printf("%d\n", 0);
	while (argv[i] != NULL)
	{
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
			i++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
