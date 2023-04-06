#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_palindrome_helper - helper class for palindrome
 * @word: string to use
 * @str: string of test to search frome
 * Return: zero or 1
 */
int is_palindrome_helper(char *word, char *str)
{
	int len = strlen(str) - 1;

	if (len != 0)
	{
		if (word[len] == str[0])
		{
			return (is_palindrome_helper(word, str + 1));
		}
		return (0);
	}
		return (1);

}


/**
 * is_palindrome - helper class for palindrome
 * @s: string to check
 * Return: zero or 1
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (is_palindrome_helper(s, s));
}
