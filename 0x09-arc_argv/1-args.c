#include <stdio.h>

/**
 * main - Prints the numbver of arguments passed to it
 *
 * @argc: An integer value
 * @argv: A pointer to an array of strings
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
