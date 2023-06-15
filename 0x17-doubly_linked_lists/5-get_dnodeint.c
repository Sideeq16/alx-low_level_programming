#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - print element in doubly link
 * @head: head node
 * @index: index of node to return
 * Return: number of elmement in node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
