#include "main.h"
/**
 * print_last_digit - print last digit of pass integer
 * Return: return last digit of pass number
 * @n: integer
 */
int print_last_digit(int n)
{
	int count = 0;

	do {
		n /= 10;
		++count;
	} while (n != 0);

	return (count);
}
