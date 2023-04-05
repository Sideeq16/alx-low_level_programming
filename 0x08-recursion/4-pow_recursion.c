#include "main.h"

/**
 * _pow_recursion - calculate the power of a given number
 * @x: base number
 * @y: power of the number
 * Return: power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
