#include "main.h"
#include <stdio.h>

/**
* main - print digit and fizz buzz
* Return: successs (0)
*/
int main(void)
{
	fizz_buzz();

	return (0);
}

/**
* fizz_buzz - Fizz Buzz test
* Return: return zero on successful
*/
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) ==  0)
		{
			printf("%s", "FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("%s", "Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}
