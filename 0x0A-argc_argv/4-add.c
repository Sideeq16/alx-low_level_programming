#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - find the argument
 * @argv: value of the argument passed
 * @argc: number of argment passed
 * Return: zero on successful
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int total = 0;

	for (i = 1; i < argc; i++)
	{
		if (_isNumber(argv[i]))
		{
			total += atoi(argv[i]);
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}

	printf("%d\n", total);
	return (0);
}


/**
 * _isNumber - check if is number
 * @str: strint to check
 * Return: zero or 1
 */
int _isNumber(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
		}
		else
		{
			return (0);
		}

		i++;
	}
	return (1);
}
