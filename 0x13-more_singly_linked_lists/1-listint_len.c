#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - print all node element
 * @h: node head
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
