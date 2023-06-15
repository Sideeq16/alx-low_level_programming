#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - print element in doubly link
 * @head: head node
 * Return: number of elmement in node
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;

	}
	return (sum);
}
