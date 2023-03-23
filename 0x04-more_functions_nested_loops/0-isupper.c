#include "main.h"

/**
* _isupper - check if input is uppercase letter
* Return: return zero on successful
* @c: letter to check
*/
int _isupper(int c)
{
	int i;
	int found = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			found = 1;
		}
	}

	if (found == 1)
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar(found + '0');
	}
	else
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar(found + '0');
	}

	return (0);
}
