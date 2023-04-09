#include "main.h"

/**
* _isdigit - check if input is a digit
* Return: return zero on successful
* @c: letter to check
*/
int _isdigit(int c)
{
	int i;
	int found = 0;

	for (i = 0; i < 10; i++)
	{
		if ((i + '0') == c)
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
