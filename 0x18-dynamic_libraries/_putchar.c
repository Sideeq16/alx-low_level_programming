#include <unistd.h>

/**
 * _putchar - print character
 * @c: letter to print
 * Return: 1 or zero
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
