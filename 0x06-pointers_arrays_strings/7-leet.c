#include "main.h"

/**
* leet - compare two string
* @str: strings
* Return: strings
*/
char *leet(char *str)
{
	int i = 0, j;

	const char *p = "a4A4e3E3o0O0t7T7l1L1";

	while (str[i] != '\0')
	{

	char c = str[i];

	j = 0;

		while (p[j] != '\0')
		{
			if (c == p[j])
			{
				str[i] = p[j + 1];
				break;
			}
			j++;
		}
	i++;
	}
	return (str);
}
