#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - print length of a string
 * @s: string to loop through
 * Return: string size
 */
int _strlen_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
