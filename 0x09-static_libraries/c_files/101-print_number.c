#include "main.h"

/**
 * print_number - print number passed to function
 * @n: number passed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	n = n < 0 ? n * -1 : n;
	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	else
	{
		if (n == -2147483648)
		{
			print_number(2147483648 / 10);
			_putchar((2147483648 % 10) + '0');
		}
		else
		{
			print_number(n / 10);
			_putchar((n % 10) + '0');
		}
	}
}
