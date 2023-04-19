#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calculator
 * @argc: number of argument
 * @argv: argument value
 * Return: result or Error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char operator;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error1\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2][0];

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error2\n");
		return (99);
	}

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error3\n");
		return (100);
	}
		result = op_func(num1, num2);
		printf("%d\n", result);
		return (0);
}
