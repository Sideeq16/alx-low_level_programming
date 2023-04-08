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
	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (1);
}
