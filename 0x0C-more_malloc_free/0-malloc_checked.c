#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 * @b: sizeof memory to be allocated
 * Return: point on success and exit 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
