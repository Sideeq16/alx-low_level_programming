#include "main.h"

/**
* puts2- print all even character
* @str: take string to be reverse
*/
void puts2(char *str)
{
	int i = 0, mysize = 0;

	while (str[mysize] != '\0')
	{
		mysize++;
	}
	for (i = 0; i < mysize - 1; i++)
	{
		if (i == 0)
		{
			_putchar(i + '0');
		}
		else if (str[i] % 2 == 0)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}

