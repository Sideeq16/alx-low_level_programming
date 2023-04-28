#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all node element
 * @h: node
 * Return: total number of element
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", (h->str == NULL ? 0 : h->len),
		(h->str == NULL ? "(nil)" : h->str));
		h = h->next;
		n++;
	}
	return (n);
}
