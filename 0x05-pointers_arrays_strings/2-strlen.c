#include "main.h"

/**
* _strlen - change value with pointer
* @s: takes string to be counted
* Return: number oof string
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

