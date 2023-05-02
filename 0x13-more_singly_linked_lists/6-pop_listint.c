#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - free pointer
 * @head: node head
 */
void pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
