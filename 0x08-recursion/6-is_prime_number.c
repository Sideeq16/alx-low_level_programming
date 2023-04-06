#include "main.h"

/**
 * is_prime_helper - helper class
 * @n: number
 * @divisor: divisor
 * Return: zero or 1
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor >= n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - check if is prime
 * @n: prime number to check
 * Return: zeror or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
