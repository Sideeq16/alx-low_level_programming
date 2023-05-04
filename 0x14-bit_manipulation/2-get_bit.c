#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - number integer to binary
 * @n: number
 * @index: index to locate
 * Return: locate the index of a binary of number
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);

}
