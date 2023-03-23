#include "main.h"

/**
* print_numbers - print out number from 0 to 9
* Return: return zero on successful
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
		_putchar('\n');
}
