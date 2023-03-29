#include "main.h"

/**
* *_strcat - concatinate string
* @dest: destination string
* @src: source string
* @n: number of string to concate
* Return: destination pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int countDest = 0, increase, total;

	while (*(dest + countDest) != '\0')
	{
		countDest++;
	}
	while (*(src + i) != '\0')
	{
		increase = (countDest + i);
		if ((i + 1) <= n)
		{
			*(dest + increase) = src[i];
		}
		i++;
	}
	total = countDest + i;
	*(dest + total) = '\0';

	return (dest);
}
