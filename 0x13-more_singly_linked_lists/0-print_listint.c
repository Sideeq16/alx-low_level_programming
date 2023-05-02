#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all node element
 * @h: node head
 * Return: list of element
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
