#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int ac, char **av)
{
	int n;

	if (ac != 2)
	{	
		dprintf(2, "usage: %s filename\n", av[0]);
		exit(1);
	}
	
	n = create_file(av[1],"Hello World");
	printf("-> %i)\n", n);
	
/*	n = read_textfile(av[1],11024);
	printf("\n(printed char: %li)\n", n);*/

	return (0);
}
