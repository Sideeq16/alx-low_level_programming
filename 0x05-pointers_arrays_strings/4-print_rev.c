#include "main.h"

/**
* print_rev - change value with pointer
* @s: take string to be reversed
*/
void print_rev(char *s)
{
	int count = 0;
	int i;

	while (str[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}

