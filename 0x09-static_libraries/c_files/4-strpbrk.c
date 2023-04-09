#include "main.h"

/**
 * *_strpbrk - filling available memory space with a constant value
 * @s: buffer to use
 * @accept: constant for filing
 * Return: buffter of the array
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int signal = 0;

	while (s[i] != '\0')
	{
		j = 0;
		signal = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				signal = 1;
				break;
			}
			j++;
		}
		if (signal == 1)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
