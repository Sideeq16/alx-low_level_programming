#include "main.h"

/**
 * _put_recursion - print all string
 * @s: strin to loop through
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_putchar(s + 1);
	}
}
