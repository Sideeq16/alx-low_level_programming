#include "main.h"
/**
 * _islower - check for lowercase character
 * Return: 1 or 0
 * @c: letter to pass
 */
void _islower(int c)
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
		return (found);
}
