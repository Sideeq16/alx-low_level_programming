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
	char a;
	/* print letter a to z in lower case */
	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
		
	}
		putchar('\n');
	return (0);
}
