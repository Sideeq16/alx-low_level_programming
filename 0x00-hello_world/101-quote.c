#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry  point
 * write and that piece of art is usefull...
 * Return: success (0)
 */
int main(void)
{
	char str1[100] = "and that piece of art is useful\" - Dora Korpar, ";
	char str2[100] = "2015-10-19\n";

	strcat(str1, str2);
	write(STDERR_FILENO, str1, strlen(str1));
	return (1);
}
