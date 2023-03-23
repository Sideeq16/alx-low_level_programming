#include "main.h"

/**
* print_diagonal - print diagonal line
* @n: number ot times to repeat
* Return: return zero on successful
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
