#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of the multiplication of two command line args.
 *
 * @argc: An integer value
 * @argv: A pointer to an array of strings
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
