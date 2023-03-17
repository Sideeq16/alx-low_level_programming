#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check if last digit is greater than 5 or less than 5 or is zero
 * n: random positiv or negative number
 * Return: success(0)
 */
int main(void)
{
	int n;
	char lastDigit;
	char *less = "Last digit of %d is %d and is less than 6 and not 0\n";

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	/* your code goes there */
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is 0 and is %d", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf(less, n, lastDigit);
	}
	return (0);
}
