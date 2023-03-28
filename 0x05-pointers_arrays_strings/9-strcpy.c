#include <stdio.h>
#include "main.h"

/**
* *_strcpy - print arrays
* @dest: destination to copy to;
* @src: characters to copy;
* Return: source string upon successful
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0, mysize = 0;

	while (src[mysize] != '\0')
	{
		mysize++;
	}

	for (i = 0; i < mysize; i++)
	{
		*(dest + i) = src[i];
	}
	return (src);
}

