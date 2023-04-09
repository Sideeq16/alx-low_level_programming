#include "main.h"

/**
* _puts - change value with pointer
* @str: takes string to be counted
*/
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
		_putchar('\n');
}

