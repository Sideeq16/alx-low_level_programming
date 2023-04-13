#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - function concatenate src to dest using nth num.
 * @s1: source string
 * @s2: destination string
 * @n: number of string to copy
 * Return: return new point to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len_s1;
	int len_s2;
	int i = 0;
	int j = 0;
	char *ptr;

	s1 = s1 == NULL ? "" : s1;
	s2 = s2 == NULL ? "" : s2;


	len_s1 = strlen(s1);
	len_s2 = n >= strlen(s2) ? strlen(s2) : n;

	ptr = malloc((len_s1 + len_s2) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < len_s2; j++, i++)
	{
		ptr[i] = s2[j];
	}
		ptr[i] = '\0';
	return (ptr);
}
