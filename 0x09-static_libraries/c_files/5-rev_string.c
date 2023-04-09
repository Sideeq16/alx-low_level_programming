#include "main.h"

/**
* rev_string - print string in reverse using it pointer address
* @s: take string to be reverse
*/
void rev_string(char *s)
{
	int i = 0, mysize = 0;
	char temp;


	while (s[mysize] != '\0')
	{
		mysize++;
	}
	for (i = 0; i < mysize / 2; i++)
	{
		temp = s[i];
		s[i] = s[mysize - i - 1];
		s[mysize - i - 1] = temp;
	}
}

