#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print from given number to 98
 * Return: all number to 98
 * @n: integer
 */
void print_to_98(int n)
{
	int i;
	int end = 98;

	if (n > end)
	{
		for (i = n; n >= end; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{

		for (i = n; i <= end; i++)
		{
			printf("%d", i);
			if (i != end)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
		putchar('\n');
}
