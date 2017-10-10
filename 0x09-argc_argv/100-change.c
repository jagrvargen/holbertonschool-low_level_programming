#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int total;
	int num;

	total = 0;
	num = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (num >= 25)
	{
		num -= 25;
		total++;
	}
	while (num >= 10)
	{
		num -= 10;
		total++;
	}
	while (num >= 5)
	{
		num -= 5;
		total++;
	}
	while (num >= 2)
	{
		num -= 2;
		total++;
	}
	total += num / 1;
	printf("%d\n", total);
	return (0);
}
