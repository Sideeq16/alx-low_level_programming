#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * min_coin - pring number of coins change
 * @change: coin to change
 * Return: min number of coin to be change
 */
long int min_coin(long int change)
{
	/* int MAX_CHANGE = 100; */
	int COINS = 5;
	long int i, count = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	for (i = 0; i < COINS; i++)
	{
		while (change >= coins[i])
		{
			change -= coins[i];
			count++;
		}
	}

	return (count);
}

/**
 * main - pring number of coins change
 * @argc: number of argument
 * @argv: number of argument value
 * Return: ZERO or 1
 */
int main(int argc, char *argv[])
{
	int change;

	if (argc > 2 || argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	change = min_coin(atoi(argv[1]));
	printf("%d\n", change);
	return (0);
}
