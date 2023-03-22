#include "main.h"
/**
 * times_table - print multiplication table 10
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		j = 0;

		while (j <= 9)
		{
			if (i == 0)
			{
				_putchar(0 + '0');

				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_inner_table(i, j);
			}

			j++;

		}
			_putchar('\n');
	}

}

/**
 * _inner_table - inner loop for timetable
 * @i: get the i value
 * @j: get the i value
 */
void _inner_table(int i, int j)
{
	int digit_a;
	int digit_b;

	if (j != 0)
	{
		if ((j * i) > 9)
		{
			_putchar(' ');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
		}
	}

	if ((j * i) > 9)
	{
		digit_a = ((j * i) / 10);
		digit_b = ((j * i) % 10);
		_putchar(digit_a + '0');
		_putchar(digit_b + '0');
		if (j != 9)
		{
			_putchar(',');
			/*_putchar(' ');*/
		}
	}
	else
	{
		_putchar((j * i) + '0');
		if (j != 9)
		{
			_putchar(',');
		/*	_putchar(' '); */
		/*	_putchar(' '); */
		}
	}
}

