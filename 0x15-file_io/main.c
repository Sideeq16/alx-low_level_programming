#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{	
		dprintf(2, "usage: %s filename\n", av[0]);
		exit(1);
	}
	
	n = read_textfile(av[1],114);
	printf("\n(printed char: %li)\n", n);
	
	n = read_textfile(av[1],11024);
	printf("\n(printed char: %li)\n", n);
}
