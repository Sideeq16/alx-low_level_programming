#include "main.h"

/**
* rev_string - print string in reverse using it pointer address
* @s: take string to be reverse
*/
void rev_string(char *s)
{
	int m_size = 0;

	while (s[m_size] != '\0')
	{
		m_size++;
	}
	int i = m_size - 1;
	char clone_s[i];
	int strSize = i;
	int j = 0;
	int k = 0;

	while (i >= 0)
	{
		clone_s[j] = s[i];
		j++;
		i--;
	}

	while (k <= strSize)
	{
		*(s + k) = clone_s[k];
		k++;
	}
}

