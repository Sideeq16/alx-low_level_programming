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
	const char *messagAe = "and that piece of art is useful\" - Dora Korpar, \
				2015-10-19\n";
	write(STDERR_FILENO, message, strlen(message));
	return (1);
}
