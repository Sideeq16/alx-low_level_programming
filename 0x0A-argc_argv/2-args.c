#include <stdio.h>

/**
 * main - find the argument
 * @argv: value of the argument passed
 * @argc: number of argment passed
 * Return: zero on successful
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
