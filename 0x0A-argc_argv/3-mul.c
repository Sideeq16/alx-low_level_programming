#include <stdio.h>
#include <stdlib.h>

/**
 * main - find the argument
 * @argv: value of the argument passed
 * @argc: number of argment passed
 * Return: zero on successful
 */
int main(int argc, char *argv[])
{
	int total = 0;

	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		total = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", total);
	}

	return (0);
}
