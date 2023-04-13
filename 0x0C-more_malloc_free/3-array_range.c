#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that allocate memory to array
 * @min: min value
 * @max: max value
 * Return: poiner to new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size = 0;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
