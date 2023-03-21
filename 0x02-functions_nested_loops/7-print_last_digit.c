#include "main.h"
/**
 * print_last_digit - print last digit of pass integer
 * Return: return last digit of pass number
 * @n: integer
 */
int print_last_digit(int n)
{
	int count = 0;
	int last = (n %= 10);

	result = last < 0 ? last * -1 : last;

	return (result);
}
