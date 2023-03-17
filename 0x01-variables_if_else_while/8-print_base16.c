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
	int i;
	/* print letter a to z in lower case */
	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + 48);
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}
		putchar('\n');
	return (0);
}
