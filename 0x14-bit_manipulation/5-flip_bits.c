#include <stdio.h>
#include "main.h"

/**
 * flip_bits - check the code
 * @n: number from
 * @m: number to
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int count = 0;
while (x)
{
count += x & 1;
x >>= 1;
}
return (count);
}
