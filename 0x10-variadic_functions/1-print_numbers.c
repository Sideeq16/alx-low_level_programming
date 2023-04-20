#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - sum all parameter passed
 * @separator: strint separator
 * Return: total sum of parameter
 * @n: number of argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	/* if (n == 0) */
		/*return;*/

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && (i < n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");

}
