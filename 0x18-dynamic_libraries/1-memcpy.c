#include "main.h"

/**
 * *_memcpy - filling available memory space with a constant value
 * @dest: buffer to use
 * @src: constant for filling
 * @n: number of byte
 * Return: buffter of the array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
