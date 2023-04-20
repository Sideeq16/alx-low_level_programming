#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print all strings passed
 * @separator: strint separator
 * Return: total sum of parameter
 * @n: number of argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	/* if (n == 0) */
		/*return;*/

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		printf("%s", str == NULL ? "(nil)" : str);
		if (separator != NULL && (i < n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");

}
