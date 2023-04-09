#include "main.h"

/**
* *_strcat - concatinate string
* @dest: destination string
* @src: source string
* Return: destination pointer
*/
char *_strcat(char *dest, char *src)
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
		*(dest + increase) = src[i];
		i++;
	}
	total = countDest + i;
	*(dest + total) = '\0';

	return (dest);
}
