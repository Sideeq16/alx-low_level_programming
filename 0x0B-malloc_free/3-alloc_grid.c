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
	int j = 0;

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
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
	}

	if (ptr != NULL)
	{
		for (i = 0; i < height; i++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
