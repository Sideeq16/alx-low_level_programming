#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum diagonal of a square matrix
 * @a: string to find from
 * @size: string to loop through
 */
void print_diagsums(int *a, int size)
{
	int j = 0;
	int i = 0;
	int diagA = 0;
	int diagB = 0;

	j = size - 1;

	for (i = 0; i < size; i++)
	{
		diagA += *(a + i + j * size);
		diagB += *(a + i + i * size);
		j--;
	}
	printf("%d, %d\n", diagA, diagB);
}
