#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - print element in doubly link
 * @h: head node
 * Return: number of elmement in node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
