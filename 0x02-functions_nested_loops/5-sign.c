#include "main.h"
/**
 * print_sign - print sign and return 1, 0, -1
 * Return: 1 if is +, 0 if is -1 otherwise.
 * @n: signs as a param
 */
int print_sign(int n)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
