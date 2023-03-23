#include "main.h"

/**
* more_numbers - print out (0 - 14) 10 times
* Return: return zero on successful
*/
void more_numbers(void)
{
	int i, j;
	int remain, start;

	for (i = 0; i < 10; i++)
	{
		j = 1;
		while (j < 15)
		{
			start = j > 9 ? (j / 10) + '0' : (j + '0');
			remain = (j % 10) + '0';
			_putchar(start);

			if (j > 9)
			{
				_putchar(remain);
			}

			j++;
		}
			_putchar('\n');
	}
