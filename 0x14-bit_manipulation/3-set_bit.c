#include <stdio.h>
#include "main.h"

/**
 * set_bit - check the code
 * @n: address
 * @index: index
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);
*n |= 1UL << index;
return (1);
}
