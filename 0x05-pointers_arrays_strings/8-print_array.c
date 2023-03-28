#include "main.h"
#include <stdio.h>

/**
* print_array - print arrays
* @a: arrays;
* @n: size of array;
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}

