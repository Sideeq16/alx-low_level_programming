#include "main.h"

/**
* print_triangle - print diagonal line
* @n: number ot times to repeat
* Return: return zero on successful
*/
void print_triangle(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			k = n - i;

			while (--k)
			{
				_putchar(' ');
			}

			while (j < i)
			{
				_putchar('#');
				j++;
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
