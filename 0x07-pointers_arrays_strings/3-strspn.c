#include "main.h"

/**
 * *_strspn - filling available memory space with a constant value
 * @s: buffer to use
 * @accept: constant for filing
 * Return: buffter of the array
 */
unsigned int _strspn(char *s, char *accept)
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
		if (signal == 0)
		{
			return (i);
		}
		i++;
	}
	/**
	*if (c == '\0')
	*{
	*	return (s + i);
	*}
	*/
	return (0);
}
