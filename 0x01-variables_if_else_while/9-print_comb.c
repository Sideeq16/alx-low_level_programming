#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print number of base 10
 *
 * Return: success(0)
 */
int main(void)
{
	int i;
	/* print all number of base 10 */
	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
