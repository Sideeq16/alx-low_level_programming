#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - print name passed as arg
 * @array: name pass
 * @size: function call
 * @cmp: callback function
 * Return: 1 on successful or 0 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) > 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);

}

