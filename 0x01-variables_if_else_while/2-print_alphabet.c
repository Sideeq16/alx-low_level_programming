#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print letter a to
 *
 * Return: success(0)
 */
int main(void)
{
	/* print letter a to z in lower case */
	for (char a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
		putchar('\n');
	return (0);
}
