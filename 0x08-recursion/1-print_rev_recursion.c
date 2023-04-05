#include "main.h"
#include <string.h>


/**
 * _print_rev_recursion - print string reverse
 * @s: string to reverse
 */
void _print_rev_recursion(char *s)
{
	int len = 0;

	if (*s == '\n')
	{
		/**
		*while (s[len] != '\0')
		*{
		*	len++;
		*}
		*/
		len = strlen(s);
		_print_rev_recursion(s + (len));
	}

	if (*s != '\n')
	{
		if (*(s - 1) != '\n')
		{
			_putchar(*(s - 1));
			_print_rev_recursion(s - 1);
		}
		else
		{
			_putchar('\n');
		}
	}
}
