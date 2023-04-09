#include "main.h"

/**
* *rot13 - capitalize all character
* @str: string to be capitalize
* Return: pointer of string array
*/
char *rot13(char *str)
{
	int i = 0, j;
	char ch, c;
	const char *c_inp = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	const char *c_oup = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		c = str[i];
		j = 0;

	while (c_inp[j] != '\0')
	{
		ch = c_inp[j];
		if (c == ch)
		{
			*(str + i) = *(c_oup + j);
		}
		j++;
	}
	i++;
	}
	return (str);
}
