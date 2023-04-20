#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_function"

/**
 * sum_them_all - sum all parameter passed
 * @n: number of parameter
 * Return: total sum of parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int result;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	va_end(args);
	print("\n");

	return (result);
}
