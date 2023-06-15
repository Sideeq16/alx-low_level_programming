#include <stdio.h>
#include <stdlib.h>

/**
 * is_palindrome - checks if an integer is a palindrome
 * @n: integer to check
 * Return: 1 if n is a palindrome, and 0 otherwise
 */
int is_palindrome(int n)
{
	int reversed = 0, remainder, original = n;

	while (n != 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}

	return (original == reversed);
}
