#include "main.h"

/**
 * is_sqrt_helper - helper class of square root
 * @n: number
 * @sqr: divisor
 * Return: sqr root of number
 */
int is_sqrt_helper(int n, int sqr)
{
	int temp;

		temp = sqr;
		sqr = (temp + (n / temp)) / 2;

		if ((temp - sqr) == 0)
		{
			if ((temp * sqr) != n)
			{
				return (-1);
			}
				return (sqr);
		}

	return (is_sqrt_helper(n, sqr));
}

/**
 * _sqrt_recursion - find the square root of number
 * @n: sqrt of number to find
 * Return: sqrt of number
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}

	return (is_sqrt_helper(n, n / 2));
}
