#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - print all node element
 * @head: node head
 * @n: number to add
 * Return: number of element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newptr;

	newptr = malloc(sizeof(listint_t));

	if (newptr == NULL)
		return (NULL);

	newptr->n = n;

	newptr->next = *head;

	*head = newptr;

	return (newptr);
}
