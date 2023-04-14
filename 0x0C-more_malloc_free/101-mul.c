/* Online C compiler to run C program online */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

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
		}
		i++;
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
	int len1 = strlen(num1), len2 = strlen(num2);
	int *result;
	int i = 0, j = 0, index = 0;
	char *str;

	result = malloc(sizeof(int) * (strlen(num1) + strlen(num2)));

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			result[i + j] += vec1[i] * vec2[j];
		}
	}

	for (i = 0; i < len1 + len2 - 1; i++)
	{
		result[i + 1] += result[i] / 10;
		result[i] %= 10;
	}

	while (len1 + len2 > 1 && result[len1 + len2 - 1] == 0)
	{
		len2--;
	}

	str = malloc((len1 + len2 + 1) * sizeof(char));

	for (i = len1 + len2 - 1; i >= 0; i--)
	{
		str[index++] = result[i] + '0';
	}
	str[index] = '\0';
	free(vec1);
	free(vec2);
	free(result);
	return (str);

}

/**
 * main - mutiply long number
 * @argv: param value
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
