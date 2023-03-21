#include "main.h"

/**
 * print_alphabet_x10 - print English Alphabet in 10 times
 * Return: All english alphabet time x10
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');

	}
}
