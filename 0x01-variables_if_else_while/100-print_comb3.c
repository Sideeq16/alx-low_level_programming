#include <stdio.h>

/**
 * main - print all posble different cominiation of three digits
 * Return: Success(0)
 */
int main(void)
{
	int i, j;
	int com_i, com_j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			com_i = i + '0';
			com_j = j % 10 + '0';

			if (com_i < com_j)
			{
				putchar(com_i);
				putchar(com_j);

				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');

	return (0);
}
