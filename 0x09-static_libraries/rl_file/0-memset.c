#include "main.h"

/**
 * *_memset - filling available memory space with a constant value
 * @s: buffer to use
 * @b: constant for filling
 * @n: number of byte
 * Return: buffter of the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
