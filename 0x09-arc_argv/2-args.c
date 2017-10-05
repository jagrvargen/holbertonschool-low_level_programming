#include <stdio.h>

/**
 * main - Prints all the arguments it recieves
 *
 * @argc: An integer value
 * @argv: A pointer to an array of strings
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
