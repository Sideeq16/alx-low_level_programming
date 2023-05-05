#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_endianness - get endianness of the system
 * Return: 1 0R 0
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int)*c);
}
