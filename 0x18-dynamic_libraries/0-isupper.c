#include "main.h"

/**
* _isupper - check if input is uppercase letter
* Return: return zero on successful
* @c: letter to check
*/
int _isupper(int c)
{
	int i;
	int found = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			found = 1;
		}
	}

	if (found == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
