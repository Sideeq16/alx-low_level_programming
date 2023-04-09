#include "main.h"

/**
* *string_toupper - capitalize all character
* @s: string to be capitalize
* Return: pointer of string array
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}
