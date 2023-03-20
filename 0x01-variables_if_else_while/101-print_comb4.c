#include <stdio.h>

/**
 * main - print all posble different cominiation of three digits
 * Return: Success(0)
 */
int main(void)
{
	char i, j, k;
	char com_i, com_j, com_k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 1; k < 10; k++)
			{
				com_i = i + '0';
				com_j = j % 10 + '0';
				com_k = k % 10 + '0';

				if ((com_i < com_j) && (com_j < com_k))
				{
					putchar(com_i);
					putchar(com_j);
					putchar(com_k);

					(i == 7 && j == 8 && k == 9) ? 0 : putchar(',');

				}
			}
		}
	}
	putchar('\n');

	return (0);
}
