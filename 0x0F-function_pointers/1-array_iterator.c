#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - print name passed as arg
 * @array: name pass
 * @size: function call
 * @action: callback function
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned long int i = 0;

	if (action == NULL)
	{
		return;
	}

	while (i < size)
	{
		action(array[i]);
		i++;
	}

}

