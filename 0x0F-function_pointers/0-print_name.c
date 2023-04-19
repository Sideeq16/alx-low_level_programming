#include <stdio.h>
#include <stdlib.h>
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
		printf("\n");
		exit(98);
	}
	f(name);
}

