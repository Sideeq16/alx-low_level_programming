#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - create two dimentinal array of integers.
 * @width: width of the array
 * @height: heigth of the array
 * Return: size of the 2d array;
*/
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	ptr = (int **) malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}


	for (i = 0; i < height; i++)
		ptr[i] = (int *) malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
		if (ptr[i] == NULL)
			free(ptr[i]);

	return (ptr);
}
