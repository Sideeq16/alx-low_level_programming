#include "main.h"

/**
* puts_half- print half of the pass string
* @str: string from half;
*/
void puts_half(char *str)
{
	int i = 0, mysize = 0, start = 0;

	while (str[mysize] != '\0')
	{
		mysize++;
	}
	start = (mysize / 2) % 2 ? (mysize / 2) : (mysize / 2) + 1;

	for (i = 0; i < (mysize / 2); i++)
	{
		_putchar(str[start + i]);
	}
	_putchar('\n');
}

