#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_separator - separate values
 * @sep: seprator
 * @condition: conditionn to add comma
 */
void print_separator(char *sep, int condition)
{
	if (condition && sep != NULL)
	{
		printf("%s", sep);
	}
}

/**
 * print_all - print all param passed
 * @format: string format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, len;
	char *str;

	len = strlen(format);
	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(args, int));
			print_separator(", ", i < (len - 1));
			break;
			case 'f':
			printf("%f", va_arg(args, double));
			print_separator(", ", i < (len - 1));
			break;
			case 'i':
			printf("%d", va_arg(args, int));
			print_separator(", ", i < (len - 1));
			break;
			case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("%s", "(nil)");
			}
			printf("%s", str);
			print_separator(", ", i < (len - 1));
			break;
		}
		i++;
	}

	va_end(args);
	printf("\n");

}
