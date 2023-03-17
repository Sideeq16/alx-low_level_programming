#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print letter a to z and A to Z
 *
 * Return: success(0)
 */
int main(void)
{
	char a;
	/* print letter a to z in lower case */
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
		putchar('\n');
	return (0);
}
