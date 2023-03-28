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
	for (i = 0; i < mysize; i++)
	{
		if (i == 0)
		{
			_putchar(str[i]);
		}
		else if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

