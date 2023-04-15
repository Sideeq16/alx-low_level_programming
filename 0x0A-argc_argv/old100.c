#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * min_coin - pring number of coins change
 * @change: coin to change
 * Return: min number of coin to be change
 */
int min_coin(int change)
{	int MAX_CHANGE = 100;
	int COINS = 5;
	int *table;
	int i, j, sub_res;
	int coins[5] = {25, 10, 5, 2, 1};
	int rl_change;

	table = malloc(sizeof(int) * (MAX_CHANGE + 1));
	memset(table, 0, (MAX_CHANGE + 1));

	if (table == NULL)
	{
		return (0);
	}

	for (i = 1; i <= change; i++)
	{
		table[i] = INT_MAX;
		for (j = 0; j < COINS; j++)
		{
			if (i >= coins[j])
			{
				sub_res = table[i - coins[j]];

				if (sub_res != INT_MAX && sub_res + 1 < table[i])
					table[i] = sub_res + 1;
			}

		}
	}

	rl_change = table[change];
	free(table);

	return (rl_change);
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
