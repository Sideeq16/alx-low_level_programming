#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum data of a node
 * @head: node head
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
