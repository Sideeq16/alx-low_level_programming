#include "main.h"

/**
* print_line - print line base on input
* @n: number ot times to repeat
* Return: return zero on successful
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
