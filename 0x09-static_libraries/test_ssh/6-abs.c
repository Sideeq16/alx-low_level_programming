#include "main.h"
/**
 * _abs - print sign and return postive always
 * Return: positive number
 * @n: integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
