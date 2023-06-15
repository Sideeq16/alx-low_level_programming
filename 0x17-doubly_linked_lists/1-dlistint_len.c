#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - print element in doubly link
 * @h: head node
 * Return: number of elmement in node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
