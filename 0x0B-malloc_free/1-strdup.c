#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - allocate and clone string pass to function
 * @str: string to clone
 * Return: pointer of the create malloc
*/
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	char *ptr;
	unsigned int i = 0;
	unsigned int size = strlen(str);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
