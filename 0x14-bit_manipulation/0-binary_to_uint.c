#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to integer
 * @b: binary to convert
 * Return: converted integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result * 2 + (b[i] - '0');
	}

	return (result);

}
