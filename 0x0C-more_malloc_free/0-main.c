#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	
	char *c;
	double *d;
	
	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", (void *)c);

	d = malloc_checked(INT_MAX);
	printf("%p\n", (void *)d);

	free(c);
	free(d);
	return (0);
}
