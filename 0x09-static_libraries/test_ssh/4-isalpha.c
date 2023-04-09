#include "main.h"
/**
 * _isalpha - check for lowercase character
 * Return: 1 or 0
 * @c: letter to pass
 */
int _isalpha(int c)
{
	char i;
	int found = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			found = 1;
		}
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			found = 1;
		}
	}

	return (found);
}
