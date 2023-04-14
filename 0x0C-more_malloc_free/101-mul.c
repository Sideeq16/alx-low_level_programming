/* Online C compiler to run C program online */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _toNumber - conver string to array of number
 * @str: string to array of number
 * Return: point to the int
 */

int *_toNumber(char *str)
{
	int *vec1;
	int i = 0;

	vec1 = malloc(sizeof(int) * strlen(str));

	for (i = 0; i < strlen(str); i++)
		vec1[i] = str[strlen(str) - i - 1] - '0';
	return (vec1);
}

/**
 * _isNumber - conver string to array of number
 * @str: check if string does not exist
 * Return: 1 or 0
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
		i++;
		}
	}
	return (1);
}

/**
 * multiply - multiply to string
 * @num1: number 1
 * @num2: number 2
 * Return: multiply long string of number
 */
char *multiply(char *num1, char *num2)
{
	int *vec1 = _toNumber(num1);
	int *vec2 = _toNumber(num2);
	int *result;
	int i = 0, carry = 0, j = 0, product;
	char *str;

	result = malloc(sizeof(int) * (strlen(num1) + strlen(num2)));
	/* memset(result, 0, sizeof(result)); */

	for (i = 0; i < strlen(num2); i++)
	{
		carry = 0;

		for (j = 0; j < strlen(num1); j++)
		{
			product = vec1[j] * vec2[i] + carry + result[i + j];
			carry = product / 10;
			result[i + j] = product % 10;
		}
		result[i + strlen(num1)] = carry;
	}

	while (strlen(num1) + strlen(num2) > 1 &&
	result[strlen(num1) + strlen(num2) - 1] == 0)
	{
		memmove(&result[strlen(num1) + strlen(num2) - 1], &result[strlen(num1)
		+ strlen(num2)], sizeof(result) - strlen(num1) - strlen(num2) + 1);
	}

	str = (char *) malloc((strlen(num1) + strlen(num2) + 1) * sizeof(char));

	memset(str, '0', strlen(num1) + strlen(num2));

	for (i = 0; i < strlen(num1) + strlen(num2); i++)
	{
		str[strlen(num1) + strlen(num2) - i - 1] = result[i] + '0';
	}

	str[strlen(num1) + strlen(num2)] = '\0';
	return (str);

}

/**
 * main - mutiply long number
 * @agrv: param value
 * @argc: count param
 * Return: long multiplication
 */
int main(int argc, char *argv[])
{

	if (argc < 3 || argc > 3)
	{
	printf("%s", "Error");
	exit(98);
	}
	if (!_isNumber(argv[1]) || !_isNumber(argv[2]))
	{
	printf("%s", "Error");
	exit(98);
	}


	printf("%s\n", multiply(argv[1], argv[2]));
	return (0);
}
