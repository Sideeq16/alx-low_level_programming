#include <stdio.h>

/**
 * main - find the argument
 * @argv: value of the argument passed
 * @argc: number of argment passed
 * Return: zero on successful
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
