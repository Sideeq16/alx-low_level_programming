#include "main.h"

/**
* *_strncpy - concatinate string
* @dest: destination string
* @src: source string
* @n: number of string to concate
* Return: destination pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int countDest = 0, srcDest = 0;

	while (*(dest + countDest) != '\0')
	{
		countDest++;
	}
	while (*(src + srcDest) != '\0')
	{
		srcDest++;
	}
	while (i < n)
	{
		if (i < srcDest)
		{
			*(dest + i) = src[i];
		}
		else
		{
			*(dest + i) = '\0';
		}
		i++;
	}
	/* total = countDest + i; */
	/* *(dest + total) = '\0'; */

	return (dest);
}
