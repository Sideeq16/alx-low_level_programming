#include "main.h"

/**
 * *_strstr - find if string exist
 * @s: string to use
 * @accept: stringto search
 * Return: buffter of the array
 */
char *_strstr(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int signal = 1;
	int k = 0;

	while (s[i] != '\0')
	{
		k = i;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[k] == accept[j])
			{
				signal = 0;
			}
			else
			{
				signal = 1;
			}
			k++;
			j++;
		}
		if (signal == 0)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
