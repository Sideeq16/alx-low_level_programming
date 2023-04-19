#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name passed as arg
 * @name: name pass
 * @f: function call
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		f("nil");
	}
	f(name);
	printf("\0");
	printf("\n");
}

