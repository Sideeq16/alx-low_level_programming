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
	if (h == NULL)
		return (NULL);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
