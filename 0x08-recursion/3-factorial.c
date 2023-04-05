#include "main.h"

/**
 * factorial - print factorial of number
 * @n: numbers to find is factorial
 * Return: total factorial of number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
