#include "main.h"

/**
 * *_strchr - filling available memory space with a constant value
 * @s: buffer to use
 * @c: constant for filling
 * Return: buffter of the array
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
