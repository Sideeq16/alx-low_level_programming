#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - print element in doubly link
 * @head: head node
 * @n: node data
 * Return: number of elmement in node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
