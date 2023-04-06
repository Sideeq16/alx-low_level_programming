#include "main.h"
#include <stdio.h>

/**
 * is_palindrome_helper - helper class for palindrome
 * @word: string to use
 * @str: string of test to search frome
 * @store: keep tracking of string
 * Return: zero or 1
 */
int is_palindrome_helper(char *word, char *str, char *store)
{
	int len = strlen(str) - 1;
	int len_store = strlen(store);

	store[len_store] = word[len];

	if (store[len_store] != str[0])
	{
		return (0);
	}
	if (len != 0)
	{
		is_palindrome_helper(word, str + 1, store);
	}
	else
	{
		return (1);
	}

}


/**
 * is_palindrome - helper class for palindrome
 * @s: string to check
 * Return: zero or 1
 */
int is_palindrome(char *s)
{

	int len = strlen(s);
	char *save[len];

	if (*s == '\0')
		return (1);
	return (is_palindrome_helper(s, s, save));
}
