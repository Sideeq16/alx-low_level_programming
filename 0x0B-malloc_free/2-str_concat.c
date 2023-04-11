#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - merge two string together
 * @s1: first string
 * @s2: second string
 * Return: pointer to the merge string
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int size;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	size = strlen(s1) + strlen(s2);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		if (i < strlen(s1))
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[j];
			j++;
		}
	}

	/* ptr[i + 1] = '\0'; */

	return (ptr);
}
