#include "holberton.h"
#include <stdio.h>

/**
 * main - A function that prints its own name
 *
 * @argc: An integer count of command line arguments
 * @argv: A pointer to an array of strings
 *
 * Return: Always 0 (succuess)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
