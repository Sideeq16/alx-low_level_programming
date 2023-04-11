#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - free allocated space
 * @grid: grid allocated
 * @height: heigth of grid
 * Return: zero on successful;
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);

}
